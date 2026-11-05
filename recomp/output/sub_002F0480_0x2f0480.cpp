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

// Function: sub_002F0480
// Address: 0x2f0480 - 0x2f13a0
void sub_002F0480_0x2f0480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0480_0x2f0480");
#endif

    switch (ctx->pc) {
        case 0x2f0480u: goto label_2f0480;
        case 0x2f0484u: goto label_2f0484;
        case 0x2f0488u: goto label_2f0488;
        case 0x2f048cu: goto label_2f048c;
        case 0x2f0490u: goto label_2f0490;
        case 0x2f0494u: goto label_2f0494;
        case 0x2f0498u: goto label_2f0498;
        case 0x2f049cu: goto label_2f049c;
        case 0x2f04a0u: goto label_2f04a0;
        case 0x2f04a4u: goto label_2f04a4;
        case 0x2f04a8u: goto label_2f04a8;
        case 0x2f04acu: goto label_2f04ac;
        case 0x2f04b0u: goto label_2f04b0;
        case 0x2f04b4u: goto label_2f04b4;
        case 0x2f04b8u: goto label_2f04b8;
        case 0x2f04bcu: goto label_2f04bc;
        case 0x2f04c0u: goto label_2f04c0;
        case 0x2f04c4u: goto label_2f04c4;
        case 0x2f04c8u: goto label_2f04c8;
        case 0x2f04ccu: goto label_2f04cc;
        case 0x2f04d0u: goto label_2f04d0;
        case 0x2f04d4u: goto label_2f04d4;
        case 0x2f04d8u: goto label_2f04d8;
        case 0x2f04dcu: goto label_2f04dc;
        case 0x2f04e0u: goto label_2f04e0;
        case 0x2f04e4u: goto label_2f04e4;
        case 0x2f04e8u: goto label_2f04e8;
        case 0x2f04ecu: goto label_2f04ec;
        case 0x2f04f0u: goto label_2f04f0;
        case 0x2f04f4u: goto label_2f04f4;
        case 0x2f04f8u: goto label_2f04f8;
        case 0x2f04fcu: goto label_2f04fc;
        case 0x2f0500u: goto label_2f0500;
        case 0x2f0504u: goto label_2f0504;
        case 0x2f0508u: goto label_2f0508;
        case 0x2f050cu: goto label_2f050c;
        case 0x2f0510u: goto label_2f0510;
        case 0x2f0514u: goto label_2f0514;
        case 0x2f0518u: goto label_2f0518;
        case 0x2f051cu: goto label_2f051c;
        case 0x2f0520u: goto label_2f0520;
        case 0x2f0524u: goto label_2f0524;
        case 0x2f0528u: goto label_2f0528;
        case 0x2f052cu: goto label_2f052c;
        case 0x2f0530u: goto label_2f0530;
        case 0x2f0534u: goto label_2f0534;
        case 0x2f0538u: goto label_2f0538;
        case 0x2f053cu: goto label_2f053c;
        case 0x2f0540u: goto label_2f0540;
        case 0x2f0544u: goto label_2f0544;
        case 0x2f0548u: goto label_2f0548;
        case 0x2f054cu: goto label_2f054c;
        case 0x2f0550u: goto label_2f0550;
        case 0x2f0554u: goto label_2f0554;
        case 0x2f0558u: goto label_2f0558;
        case 0x2f055cu: goto label_2f055c;
        case 0x2f0560u: goto label_2f0560;
        case 0x2f0564u: goto label_2f0564;
        case 0x2f0568u: goto label_2f0568;
        case 0x2f056cu: goto label_2f056c;
        case 0x2f0570u: goto label_2f0570;
        case 0x2f0574u: goto label_2f0574;
        case 0x2f0578u: goto label_2f0578;
        case 0x2f057cu: goto label_2f057c;
        case 0x2f0580u: goto label_2f0580;
        case 0x2f0584u: goto label_2f0584;
        case 0x2f0588u: goto label_2f0588;
        case 0x2f058cu: goto label_2f058c;
        case 0x2f0590u: goto label_2f0590;
        case 0x2f0594u: goto label_2f0594;
        case 0x2f0598u: goto label_2f0598;
        case 0x2f059cu: goto label_2f059c;
        case 0x2f05a0u: goto label_2f05a0;
        case 0x2f05a4u: goto label_2f05a4;
        case 0x2f05a8u: goto label_2f05a8;
        case 0x2f05acu: goto label_2f05ac;
        case 0x2f05b0u: goto label_2f05b0;
        case 0x2f05b4u: goto label_2f05b4;
        case 0x2f05b8u: goto label_2f05b8;
        case 0x2f05bcu: goto label_2f05bc;
        case 0x2f05c0u: goto label_2f05c0;
        case 0x2f05c4u: goto label_2f05c4;
        case 0x2f05c8u: goto label_2f05c8;
        case 0x2f05ccu: goto label_2f05cc;
        case 0x2f05d0u: goto label_2f05d0;
        case 0x2f05d4u: goto label_2f05d4;
        case 0x2f05d8u: goto label_2f05d8;
        case 0x2f05dcu: goto label_2f05dc;
        case 0x2f05e0u: goto label_2f05e0;
        case 0x2f05e4u: goto label_2f05e4;
        case 0x2f05e8u: goto label_2f05e8;
        case 0x2f05ecu: goto label_2f05ec;
        case 0x2f05f0u: goto label_2f05f0;
        case 0x2f05f4u: goto label_2f05f4;
        case 0x2f05f8u: goto label_2f05f8;
        case 0x2f05fcu: goto label_2f05fc;
        case 0x2f0600u: goto label_2f0600;
        case 0x2f0604u: goto label_2f0604;
        case 0x2f0608u: goto label_2f0608;
        case 0x2f060cu: goto label_2f060c;
        case 0x2f0610u: goto label_2f0610;
        case 0x2f0614u: goto label_2f0614;
        case 0x2f0618u: goto label_2f0618;
        case 0x2f061cu: goto label_2f061c;
        case 0x2f0620u: goto label_2f0620;
        case 0x2f0624u: goto label_2f0624;
        case 0x2f0628u: goto label_2f0628;
        case 0x2f062cu: goto label_2f062c;
        case 0x2f0630u: goto label_2f0630;
        case 0x2f0634u: goto label_2f0634;
        case 0x2f0638u: goto label_2f0638;
        case 0x2f063cu: goto label_2f063c;
        case 0x2f0640u: goto label_2f0640;
        case 0x2f0644u: goto label_2f0644;
        case 0x2f0648u: goto label_2f0648;
        case 0x2f064cu: goto label_2f064c;
        case 0x2f0650u: goto label_2f0650;
        case 0x2f0654u: goto label_2f0654;
        case 0x2f0658u: goto label_2f0658;
        case 0x2f065cu: goto label_2f065c;
        case 0x2f0660u: goto label_2f0660;
        case 0x2f0664u: goto label_2f0664;
        case 0x2f0668u: goto label_2f0668;
        case 0x2f066cu: goto label_2f066c;
        case 0x2f0670u: goto label_2f0670;
        case 0x2f0674u: goto label_2f0674;
        case 0x2f0678u: goto label_2f0678;
        case 0x2f067cu: goto label_2f067c;
        case 0x2f0680u: goto label_2f0680;
        case 0x2f0684u: goto label_2f0684;
        case 0x2f0688u: goto label_2f0688;
        case 0x2f068cu: goto label_2f068c;
        case 0x2f0690u: goto label_2f0690;
        case 0x2f0694u: goto label_2f0694;
        case 0x2f0698u: goto label_2f0698;
        case 0x2f069cu: goto label_2f069c;
        case 0x2f06a0u: goto label_2f06a0;
        case 0x2f06a4u: goto label_2f06a4;
        case 0x2f06a8u: goto label_2f06a8;
        case 0x2f06acu: goto label_2f06ac;
        case 0x2f06b0u: goto label_2f06b0;
        case 0x2f06b4u: goto label_2f06b4;
        case 0x2f06b8u: goto label_2f06b8;
        case 0x2f06bcu: goto label_2f06bc;
        case 0x2f06c0u: goto label_2f06c0;
        case 0x2f06c4u: goto label_2f06c4;
        case 0x2f06c8u: goto label_2f06c8;
        case 0x2f06ccu: goto label_2f06cc;
        case 0x2f06d0u: goto label_2f06d0;
        case 0x2f06d4u: goto label_2f06d4;
        case 0x2f06d8u: goto label_2f06d8;
        case 0x2f06dcu: goto label_2f06dc;
        case 0x2f06e0u: goto label_2f06e0;
        case 0x2f06e4u: goto label_2f06e4;
        case 0x2f06e8u: goto label_2f06e8;
        case 0x2f06ecu: goto label_2f06ec;
        case 0x2f06f0u: goto label_2f06f0;
        case 0x2f06f4u: goto label_2f06f4;
        case 0x2f06f8u: goto label_2f06f8;
        case 0x2f06fcu: goto label_2f06fc;
        case 0x2f0700u: goto label_2f0700;
        case 0x2f0704u: goto label_2f0704;
        case 0x2f0708u: goto label_2f0708;
        case 0x2f070cu: goto label_2f070c;
        case 0x2f0710u: goto label_2f0710;
        case 0x2f0714u: goto label_2f0714;
        case 0x2f0718u: goto label_2f0718;
        case 0x2f071cu: goto label_2f071c;
        case 0x2f0720u: goto label_2f0720;
        case 0x2f0724u: goto label_2f0724;
        case 0x2f0728u: goto label_2f0728;
        case 0x2f072cu: goto label_2f072c;
        case 0x2f0730u: goto label_2f0730;
        case 0x2f0734u: goto label_2f0734;
        case 0x2f0738u: goto label_2f0738;
        case 0x2f073cu: goto label_2f073c;
        case 0x2f0740u: goto label_2f0740;
        case 0x2f0744u: goto label_2f0744;
        case 0x2f0748u: goto label_2f0748;
        case 0x2f074cu: goto label_2f074c;
        case 0x2f0750u: goto label_2f0750;
        case 0x2f0754u: goto label_2f0754;
        case 0x2f0758u: goto label_2f0758;
        case 0x2f075cu: goto label_2f075c;
        case 0x2f0760u: goto label_2f0760;
        case 0x2f0764u: goto label_2f0764;
        case 0x2f0768u: goto label_2f0768;
        case 0x2f076cu: goto label_2f076c;
        case 0x2f0770u: goto label_2f0770;
        case 0x2f0774u: goto label_2f0774;
        case 0x2f0778u: goto label_2f0778;
        case 0x2f077cu: goto label_2f077c;
        case 0x2f0780u: goto label_2f0780;
        case 0x2f0784u: goto label_2f0784;
        case 0x2f0788u: goto label_2f0788;
        case 0x2f078cu: goto label_2f078c;
        case 0x2f0790u: goto label_2f0790;
        case 0x2f0794u: goto label_2f0794;
        case 0x2f0798u: goto label_2f0798;
        case 0x2f079cu: goto label_2f079c;
        case 0x2f07a0u: goto label_2f07a0;
        case 0x2f07a4u: goto label_2f07a4;
        case 0x2f07a8u: goto label_2f07a8;
        case 0x2f07acu: goto label_2f07ac;
        case 0x2f07b0u: goto label_2f07b0;
        case 0x2f07b4u: goto label_2f07b4;
        case 0x2f07b8u: goto label_2f07b8;
        case 0x2f07bcu: goto label_2f07bc;
        case 0x2f07c0u: goto label_2f07c0;
        case 0x2f07c4u: goto label_2f07c4;
        case 0x2f07c8u: goto label_2f07c8;
        case 0x2f07ccu: goto label_2f07cc;
        case 0x2f07d0u: goto label_2f07d0;
        case 0x2f07d4u: goto label_2f07d4;
        case 0x2f07d8u: goto label_2f07d8;
        case 0x2f07dcu: goto label_2f07dc;
        case 0x2f07e0u: goto label_2f07e0;
        case 0x2f07e4u: goto label_2f07e4;
        case 0x2f07e8u: goto label_2f07e8;
        case 0x2f07ecu: goto label_2f07ec;
        case 0x2f07f0u: goto label_2f07f0;
        case 0x2f07f4u: goto label_2f07f4;
        case 0x2f07f8u: goto label_2f07f8;
        case 0x2f07fcu: goto label_2f07fc;
        case 0x2f0800u: goto label_2f0800;
        case 0x2f0804u: goto label_2f0804;
        case 0x2f0808u: goto label_2f0808;
        case 0x2f080cu: goto label_2f080c;
        case 0x2f0810u: goto label_2f0810;
        case 0x2f0814u: goto label_2f0814;
        case 0x2f0818u: goto label_2f0818;
        case 0x2f081cu: goto label_2f081c;
        case 0x2f0820u: goto label_2f0820;
        case 0x2f0824u: goto label_2f0824;
        case 0x2f0828u: goto label_2f0828;
        case 0x2f082cu: goto label_2f082c;
        case 0x2f0830u: goto label_2f0830;
        case 0x2f0834u: goto label_2f0834;
        case 0x2f0838u: goto label_2f0838;
        case 0x2f083cu: goto label_2f083c;
        case 0x2f0840u: goto label_2f0840;
        case 0x2f0844u: goto label_2f0844;
        case 0x2f0848u: goto label_2f0848;
        case 0x2f084cu: goto label_2f084c;
        case 0x2f0850u: goto label_2f0850;
        case 0x2f0854u: goto label_2f0854;
        case 0x2f0858u: goto label_2f0858;
        case 0x2f085cu: goto label_2f085c;
        case 0x2f0860u: goto label_2f0860;
        case 0x2f0864u: goto label_2f0864;
        case 0x2f0868u: goto label_2f0868;
        case 0x2f086cu: goto label_2f086c;
        case 0x2f0870u: goto label_2f0870;
        case 0x2f0874u: goto label_2f0874;
        case 0x2f0878u: goto label_2f0878;
        case 0x2f087cu: goto label_2f087c;
        case 0x2f0880u: goto label_2f0880;
        case 0x2f0884u: goto label_2f0884;
        case 0x2f0888u: goto label_2f0888;
        case 0x2f088cu: goto label_2f088c;
        case 0x2f0890u: goto label_2f0890;
        case 0x2f0894u: goto label_2f0894;
        case 0x2f0898u: goto label_2f0898;
        case 0x2f089cu: goto label_2f089c;
        case 0x2f08a0u: goto label_2f08a0;
        case 0x2f08a4u: goto label_2f08a4;
        case 0x2f08a8u: goto label_2f08a8;
        case 0x2f08acu: goto label_2f08ac;
        case 0x2f08b0u: goto label_2f08b0;
        case 0x2f08b4u: goto label_2f08b4;
        case 0x2f08b8u: goto label_2f08b8;
        case 0x2f08bcu: goto label_2f08bc;
        case 0x2f08c0u: goto label_2f08c0;
        case 0x2f08c4u: goto label_2f08c4;
        case 0x2f08c8u: goto label_2f08c8;
        case 0x2f08ccu: goto label_2f08cc;
        case 0x2f08d0u: goto label_2f08d0;
        case 0x2f08d4u: goto label_2f08d4;
        case 0x2f08d8u: goto label_2f08d8;
        case 0x2f08dcu: goto label_2f08dc;
        case 0x2f08e0u: goto label_2f08e0;
        case 0x2f08e4u: goto label_2f08e4;
        case 0x2f08e8u: goto label_2f08e8;
        case 0x2f08ecu: goto label_2f08ec;
        case 0x2f08f0u: goto label_2f08f0;
        case 0x2f08f4u: goto label_2f08f4;
        case 0x2f08f8u: goto label_2f08f8;
        case 0x2f08fcu: goto label_2f08fc;
        case 0x2f0900u: goto label_2f0900;
        case 0x2f0904u: goto label_2f0904;
        case 0x2f0908u: goto label_2f0908;
        case 0x2f090cu: goto label_2f090c;
        case 0x2f0910u: goto label_2f0910;
        case 0x2f0914u: goto label_2f0914;
        case 0x2f0918u: goto label_2f0918;
        case 0x2f091cu: goto label_2f091c;
        case 0x2f0920u: goto label_2f0920;
        case 0x2f0924u: goto label_2f0924;
        case 0x2f0928u: goto label_2f0928;
        case 0x2f092cu: goto label_2f092c;
        case 0x2f0930u: goto label_2f0930;
        case 0x2f0934u: goto label_2f0934;
        case 0x2f0938u: goto label_2f0938;
        case 0x2f093cu: goto label_2f093c;
        case 0x2f0940u: goto label_2f0940;
        case 0x2f0944u: goto label_2f0944;
        case 0x2f0948u: goto label_2f0948;
        case 0x2f094cu: goto label_2f094c;
        case 0x2f0950u: goto label_2f0950;
        case 0x2f0954u: goto label_2f0954;
        case 0x2f0958u: goto label_2f0958;
        case 0x2f095cu: goto label_2f095c;
        case 0x2f0960u: goto label_2f0960;
        case 0x2f0964u: goto label_2f0964;
        case 0x2f0968u: goto label_2f0968;
        case 0x2f096cu: goto label_2f096c;
        case 0x2f0970u: goto label_2f0970;
        case 0x2f0974u: goto label_2f0974;
        case 0x2f0978u: goto label_2f0978;
        case 0x2f097cu: goto label_2f097c;
        case 0x2f0980u: goto label_2f0980;
        case 0x2f0984u: goto label_2f0984;
        case 0x2f0988u: goto label_2f0988;
        case 0x2f098cu: goto label_2f098c;
        case 0x2f0990u: goto label_2f0990;
        case 0x2f0994u: goto label_2f0994;
        case 0x2f0998u: goto label_2f0998;
        case 0x2f099cu: goto label_2f099c;
        case 0x2f09a0u: goto label_2f09a0;
        case 0x2f09a4u: goto label_2f09a4;
        case 0x2f09a8u: goto label_2f09a8;
        case 0x2f09acu: goto label_2f09ac;
        case 0x2f09b0u: goto label_2f09b0;
        case 0x2f09b4u: goto label_2f09b4;
        case 0x2f09b8u: goto label_2f09b8;
        case 0x2f09bcu: goto label_2f09bc;
        case 0x2f09c0u: goto label_2f09c0;
        case 0x2f09c4u: goto label_2f09c4;
        case 0x2f09c8u: goto label_2f09c8;
        case 0x2f09ccu: goto label_2f09cc;
        case 0x2f09d0u: goto label_2f09d0;
        case 0x2f09d4u: goto label_2f09d4;
        case 0x2f09d8u: goto label_2f09d8;
        case 0x2f09dcu: goto label_2f09dc;
        case 0x2f09e0u: goto label_2f09e0;
        case 0x2f09e4u: goto label_2f09e4;
        case 0x2f09e8u: goto label_2f09e8;
        case 0x2f09ecu: goto label_2f09ec;
        case 0x2f09f0u: goto label_2f09f0;
        case 0x2f09f4u: goto label_2f09f4;
        case 0x2f09f8u: goto label_2f09f8;
        case 0x2f09fcu: goto label_2f09fc;
        case 0x2f0a00u: goto label_2f0a00;
        case 0x2f0a04u: goto label_2f0a04;
        case 0x2f0a08u: goto label_2f0a08;
        case 0x2f0a0cu: goto label_2f0a0c;
        case 0x2f0a10u: goto label_2f0a10;
        case 0x2f0a14u: goto label_2f0a14;
        case 0x2f0a18u: goto label_2f0a18;
        case 0x2f0a1cu: goto label_2f0a1c;
        case 0x2f0a20u: goto label_2f0a20;
        case 0x2f0a24u: goto label_2f0a24;
        case 0x2f0a28u: goto label_2f0a28;
        case 0x2f0a2cu: goto label_2f0a2c;
        case 0x2f0a30u: goto label_2f0a30;
        case 0x2f0a34u: goto label_2f0a34;
        case 0x2f0a38u: goto label_2f0a38;
        case 0x2f0a3cu: goto label_2f0a3c;
        case 0x2f0a40u: goto label_2f0a40;
        case 0x2f0a44u: goto label_2f0a44;
        case 0x2f0a48u: goto label_2f0a48;
        case 0x2f0a4cu: goto label_2f0a4c;
        case 0x2f0a50u: goto label_2f0a50;
        case 0x2f0a54u: goto label_2f0a54;
        case 0x2f0a58u: goto label_2f0a58;
        case 0x2f0a5cu: goto label_2f0a5c;
        case 0x2f0a60u: goto label_2f0a60;
        case 0x2f0a64u: goto label_2f0a64;
        case 0x2f0a68u: goto label_2f0a68;
        case 0x2f0a6cu: goto label_2f0a6c;
        case 0x2f0a70u: goto label_2f0a70;
        case 0x2f0a74u: goto label_2f0a74;
        case 0x2f0a78u: goto label_2f0a78;
        case 0x2f0a7cu: goto label_2f0a7c;
        case 0x2f0a80u: goto label_2f0a80;
        case 0x2f0a84u: goto label_2f0a84;
        case 0x2f0a88u: goto label_2f0a88;
        case 0x2f0a8cu: goto label_2f0a8c;
        case 0x2f0a90u: goto label_2f0a90;
        case 0x2f0a94u: goto label_2f0a94;
        case 0x2f0a98u: goto label_2f0a98;
        case 0x2f0a9cu: goto label_2f0a9c;
        case 0x2f0aa0u: goto label_2f0aa0;
        case 0x2f0aa4u: goto label_2f0aa4;
        case 0x2f0aa8u: goto label_2f0aa8;
        case 0x2f0aacu: goto label_2f0aac;
        case 0x2f0ab0u: goto label_2f0ab0;
        case 0x2f0ab4u: goto label_2f0ab4;
        case 0x2f0ab8u: goto label_2f0ab8;
        case 0x2f0abcu: goto label_2f0abc;
        case 0x2f0ac0u: goto label_2f0ac0;
        case 0x2f0ac4u: goto label_2f0ac4;
        case 0x2f0ac8u: goto label_2f0ac8;
        case 0x2f0accu: goto label_2f0acc;
        case 0x2f0ad0u: goto label_2f0ad0;
        case 0x2f0ad4u: goto label_2f0ad4;
        case 0x2f0ad8u: goto label_2f0ad8;
        case 0x2f0adcu: goto label_2f0adc;
        case 0x2f0ae0u: goto label_2f0ae0;
        case 0x2f0ae4u: goto label_2f0ae4;
        case 0x2f0ae8u: goto label_2f0ae8;
        case 0x2f0aecu: goto label_2f0aec;
        case 0x2f0af0u: goto label_2f0af0;
        case 0x2f0af4u: goto label_2f0af4;
        case 0x2f0af8u: goto label_2f0af8;
        case 0x2f0afcu: goto label_2f0afc;
        case 0x2f0b00u: goto label_2f0b00;
        case 0x2f0b04u: goto label_2f0b04;
        case 0x2f0b08u: goto label_2f0b08;
        case 0x2f0b0cu: goto label_2f0b0c;
        case 0x2f0b10u: goto label_2f0b10;
        case 0x2f0b14u: goto label_2f0b14;
        case 0x2f0b18u: goto label_2f0b18;
        case 0x2f0b1cu: goto label_2f0b1c;
        case 0x2f0b20u: goto label_2f0b20;
        case 0x2f0b24u: goto label_2f0b24;
        case 0x2f0b28u: goto label_2f0b28;
        case 0x2f0b2cu: goto label_2f0b2c;
        case 0x2f0b30u: goto label_2f0b30;
        case 0x2f0b34u: goto label_2f0b34;
        case 0x2f0b38u: goto label_2f0b38;
        case 0x2f0b3cu: goto label_2f0b3c;
        case 0x2f0b40u: goto label_2f0b40;
        case 0x2f0b44u: goto label_2f0b44;
        case 0x2f0b48u: goto label_2f0b48;
        case 0x2f0b4cu: goto label_2f0b4c;
        case 0x2f0b50u: goto label_2f0b50;
        case 0x2f0b54u: goto label_2f0b54;
        case 0x2f0b58u: goto label_2f0b58;
        case 0x2f0b5cu: goto label_2f0b5c;
        case 0x2f0b60u: goto label_2f0b60;
        case 0x2f0b64u: goto label_2f0b64;
        case 0x2f0b68u: goto label_2f0b68;
        case 0x2f0b6cu: goto label_2f0b6c;
        case 0x2f0b70u: goto label_2f0b70;
        case 0x2f0b74u: goto label_2f0b74;
        case 0x2f0b78u: goto label_2f0b78;
        case 0x2f0b7cu: goto label_2f0b7c;
        case 0x2f0b80u: goto label_2f0b80;
        case 0x2f0b84u: goto label_2f0b84;
        case 0x2f0b88u: goto label_2f0b88;
        case 0x2f0b8cu: goto label_2f0b8c;
        case 0x2f0b90u: goto label_2f0b90;
        case 0x2f0b94u: goto label_2f0b94;
        case 0x2f0b98u: goto label_2f0b98;
        case 0x2f0b9cu: goto label_2f0b9c;
        case 0x2f0ba0u: goto label_2f0ba0;
        case 0x2f0ba4u: goto label_2f0ba4;
        case 0x2f0ba8u: goto label_2f0ba8;
        case 0x2f0bacu: goto label_2f0bac;
        case 0x2f0bb0u: goto label_2f0bb0;
        case 0x2f0bb4u: goto label_2f0bb4;
        case 0x2f0bb8u: goto label_2f0bb8;
        case 0x2f0bbcu: goto label_2f0bbc;
        case 0x2f0bc0u: goto label_2f0bc0;
        case 0x2f0bc4u: goto label_2f0bc4;
        case 0x2f0bc8u: goto label_2f0bc8;
        case 0x2f0bccu: goto label_2f0bcc;
        case 0x2f0bd0u: goto label_2f0bd0;
        case 0x2f0bd4u: goto label_2f0bd4;
        case 0x2f0bd8u: goto label_2f0bd8;
        case 0x2f0bdcu: goto label_2f0bdc;
        case 0x2f0be0u: goto label_2f0be0;
        case 0x2f0be4u: goto label_2f0be4;
        case 0x2f0be8u: goto label_2f0be8;
        case 0x2f0becu: goto label_2f0bec;
        case 0x2f0bf0u: goto label_2f0bf0;
        case 0x2f0bf4u: goto label_2f0bf4;
        case 0x2f0bf8u: goto label_2f0bf8;
        case 0x2f0bfcu: goto label_2f0bfc;
        case 0x2f0c00u: goto label_2f0c00;
        case 0x2f0c04u: goto label_2f0c04;
        case 0x2f0c08u: goto label_2f0c08;
        case 0x2f0c0cu: goto label_2f0c0c;
        case 0x2f0c10u: goto label_2f0c10;
        case 0x2f0c14u: goto label_2f0c14;
        case 0x2f0c18u: goto label_2f0c18;
        case 0x2f0c1cu: goto label_2f0c1c;
        case 0x2f0c20u: goto label_2f0c20;
        case 0x2f0c24u: goto label_2f0c24;
        case 0x2f0c28u: goto label_2f0c28;
        case 0x2f0c2cu: goto label_2f0c2c;
        case 0x2f0c30u: goto label_2f0c30;
        case 0x2f0c34u: goto label_2f0c34;
        case 0x2f0c38u: goto label_2f0c38;
        case 0x2f0c3cu: goto label_2f0c3c;
        case 0x2f0c40u: goto label_2f0c40;
        case 0x2f0c44u: goto label_2f0c44;
        case 0x2f0c48u: goto label_2f0c48;
        case 0x2f0c4cu: goto label_2f0c4c;
        case 0x2f0c50u: goto label_2f0c50;
        case 0x2f0c54u: goto label_2f0c54;
        case 0x2f0c58u: goto label_2f0c58;
        case 0x2f0c5cu: goto label_2f0c5c;
        case 0x2f0c60u: goto label_2f0c60;
        case 0x2f0c64u: goto label_2f0c64;
        case 0x2f0c68u: goto label_2f0c68;
        case 0x2f0c6cu: goto label_2f0c6c;
        case 0x2f0c70u: goto label_2f0c70;
        case 0x2f0c74u: goto label_2f0c74;
        case 0x2f0c78u: goto label_2f0c78;
        case 0x2f0c7cu: goto label_2f0c7c;
        case 0x2f0c80u: goto label_2f0c80;
        case 0x2f0c84u: goto label_2f0c84;
        case 0x2f0c88u: goto label_2f0c88;
        case 0x2f0c8cu: goto label_2f0c8c;
        case 0x2f0c90u: goto label_2f0c90;
        case 0x2f0c94u: goto label_2f0c94;
        case 0x2f0c98u: goto label_2f0c98;
        case 0x2f0c9cu: goto label_2f0c9c;
        case 0x2f0ca0u: goto label_2f0ca0;
        case 0x2f0ca4u: goto label_2f0ca4;
        case 0x2f0ca8u: goto label_2f0ca8;
        case 0x2f0cacu: goto label_2f0cac;
        case 0x2f0cb0u: goto label_2f0cb0;
        case 0x2f0cb4u: goto label_2f0cb4;
        case 0x2f0cb8u: goto label_2f0cb8;
        case 0x2f0cbcu: goto label_2f0cbc;
        case 0x2f0cc0u: goto label_2f0cc0;
        case 0x2f0cc4u: goto label_2f0cc4;
        case 0x2f0cc8u: goto label_2f0cc8;
        case 0x2f0cccu: goto label_2f0ccc;
        case 0x2f0cd0u: goto label_2f0cd0;
        case 0x2f0cd4u: goto label_2f0cd4;
        case 0x2f0cd8u: goto label_2f0cd8;
        case 0x2f0cdcu: goto label_2f0cdc;
        case 0x2f0ce0u: goto label_2f0ce0;
        case 0x2f0ce4u: goto label_2f0ce4;
        case 0x2f0ce8u: goto label_2f0ce8;
        case 0x2f0cecu: goto label_2f0cec;
        case 0x2f0cf0u: goto label_2f0cf0;
        case 0x2f0cf4u: goto label_2f0cf4;
        case 0x2f0cf8u: goto label_2f0cf8;
        case 0x2f0cfcu: goto label_2f0cfc;
        case 0x2f0d00u: goto label_2f0d00;
        case 0x2f0d04u: goto label_2f0d04;
        case 0x2f0d08u: goto label_2f0d08;
        case 0x2f0d0cu: goto label_2f0d0c;
        case 0x2f0d10u: goto label_2f0d10;
        case 0x2f0d14u: goto label_2f0d14;
        case 0x2f0d18u: goto label_2f0d18;
        case 0x2f0d1cu: goto label_2f0d1c;
        case 0x2f0d20u: goto label_2f0d20;
        case 0x2f0d24u: goto label_2f0d24;
        case 0x2f0d28u: goto label_2f0d28;
        case 0x2f0d2cu: goto label_2f0d2c;
        case 0x2f0d30u: goto label_2f0d30;
        case 0x2f0d34u: goto label_2f0d34;
        case 0x2f0d38u: goto label_2f0d38;
        case 0x2f0d3cu: goto label_2f0d3c;
        case 0x2f0d40u: goto label_2f0d40;
        case 0x2f0d44u: goto label_2f0d44;
        case 0x2f0d48u: goto label_2f0d48;
        case 0x2f0d4cu: goto label_2f0d4c;
        case 0x2f0d50u: goto label_2f0d50;
        case 0x2f0d54u: goto label_2f0d54;
        case 0x2f0d58u: goto label_2f0d58;
        case 0x2f0d5cu: goto label_2f0d5c;
        case 0x2f0d60u: goto label_2f0d60;
        case 0x2f0d64u: goto label_2f0d64;
        case 0x2f0d68u: goto label_2f0d68;
        case 0x2f0d6cu: goto label_2f0d6c;
        case 0x2f0d70u: goto label_2f0d70;
        case 0x2f0d74u: goto label_2f0d74;
        case 0x2f0d78u: goto label_2f0d78;
        case 0x2f0d7cu: goto label_2f0d7c;
        case 0x2f0d80u: goto label_2f0d80;
        case 0x2f0d84u: goto label_2f0d84;
        case 0x2f0d88u: goto label_2f0d88;
        case 0x2f0d8cu: goto label_2f0d8c;
        case 0x2f0d90u: goto label_2f0d90;
        case 0x2f0d94u: goto label_2f0d94;
        case 0x2f0d98u: goto label_2f0d98;
        case 0x2f0d9cu: goto label_2f0d9c;
        case 0x2f0da0u: goto label_2f0da0;
        case 0x2f0da4u: goto label_2f0da4;
        case 0x2f0da8u: goto label_2f0da8;
        case 0x2f0dacu: goto label_2f0dac;
        case 0x2f0db0u: goto label_2f0db0;
        case 0x2f0db4u: goto label_2f0db4;
        case 0x2f0db8u: goto label_2f0db8;
        case 0x2f0dbcu: goto label_2f0dbc;
        case 0x2f0dc0u: goto label_2f0dc0;
        case 0x2f0dc4u: goto label_2f0dc4;
        case 0x2f0dc8u: goto label_2f0dc8;
        case 0x2f0dccu: goto label_2f0dcc;
        case 0x2f0dd0u: goto label_2f0dd0;
        case 0x2f0dd4u: goto label_2f0dd4;
        case 0x2f0dd8u: goto label_2f0dd8;
        case 0x2f0ddcu: goto label_2f0ddc;
        case 0x2f0de0u: goto label_2f0de0;
        case 0x2f0de4u: goto label_2f0de4;
        case 0x2f0de8u: goto label_2f0de8;
        case 0x2f0decu: goto label_2f0dec;
        case 0x2f0df0u: goto label_2f0df0;
        case 0x2f0df4u: goto label_2f0df4;
        case 0x2f0df8u: goto label_2f0df8;
        case 0x2f0dfcu: goto label_2f0dfc;
        case 0x2f0e00u: goto label_2f0e00;
        case 0x2f0e04u: goto label_2f0e04;
        case 0x2f0e08u: goto label_2f0e08;
        case 0x2f0e0cu: goto label_2f0e0c;
        case 0x2f0e10u: goto label_2f0e10;
        case 0x2f0e14u: goto label_2f0e14;
        case 0x2f0e18u: goto label_2f0e18;
        case 0x2f0e1cu: goto label_2f0e1c;
        case 0x2f0e20u: goto label_2f0e20;
        case 0x2f0e24u: goto label_2f0e24;
        case 0x2f0e28u: goto label_2f0e28;
        case 0x2f0e2cu: goto label_2f0e2c;
        case 0x2f0e30u: goto label_2f0e30;
        case 0x2f0e34u: goto label_2f0e34;
        case 0x2f0e38u: goto label_2f0e38;
        case 0x2f0e3cu: goto label_2f0e3c;
        case 0x2f0e40u: goto label_2f0e40;
        case 0x2f0e44u: goto label_2f0e44;
        case 0x2f0e48u: goto label_2f0e48;
        case 0x2f0e4cu: goto label_2f0e4c;
        case 0x2f0e50u: goto label_2f0e50;
        case 0x2f0e54u: goto label_2f0e54;
        case 0x2f0e58u: goto label_2f0e58;
        case 0x2f0e5cu: goto label_2f0e5c;
        case 0x2f0e60u: goto label_2f0e60;
        case 0x2f0e64u: goto label_2f0e64;
        case 0x2f0e68u: goto label_2f0e68;
        case 0x2f0e6cu: goto label_2f0e6c;
        case 0x2f0e70u: goto label_2f0e70;
        case 0x2f0e74u: goto label_2f0e74;
        case 0x2f0e78u: goto label_2f0e78;
        case 0x2f0e7cu: goto label_2f0e7c;
        case 0x2f0e80u: goto label_2f0e80;
        case 0x2f0e84u: goto label_2f0e84;
        case 0x2f0e88u: goto label_2f0e88;
        case 0x2f0e8cu: goto label_2f0e8c;
        case 0x2f0e90u: goto label_2f0e90;
        case 0x2f0e94u: goto label_2f0e94;
        case 0x2f0e98u: goto label_2f0e98;
        case 0x2f0e9cu: goto label_2f0e9c;
        case 0x2f0ea0u: goto label_2f0ea0;
        case 0x2f0ea4u: goto label_2f0ea4;
        case 0x2f0ea8u: goto label_2f0ea8;
        case 0x2f0eacu: goto label_2f0eac;
        case 0x2f0eb0u: goto label_2f0eb0;
        case 0x2f0eb4u: goto label_2f0eb4;
        case 0x2f0eb8u: goto label_2f0eb8;
        case 0x2f0ebcu: goto label_2f0ebc;
        case 0x2f0ec0u: goto label_2f0ec0;
        case 0x2f0ec4u: goto label_2f0ec4;
        case 0x2f0ec8u: goto label_2f0ec8;
        case 0x2f0eccu: goto label_2f0ecc;
        case 0x2f0ed0u: goto label_2f0ed0;
        case 0x2f0ed4u: goto label_2f0ed4;
        case 0x2f0ed8u: goto label_2f0ed8;
        case 0x2f0edcu: goto label_2f0edc;
        case 0x2f0ee0u: goto label_2f0ee0;
        case 0x2f0ee4u: goto label_2f0ee4;
        case 0x2f0ee8u: goto label_2f0ee8;
        case 0x2f0eecu: goto label_2f0eec;
        case 0x2f0ef0u: goto label_2f0ef0;
        case 0x2f0ef4u: goto label_2f0ef4;
        case 0x2f0ef8u: goto label_2f0ef8;
        case 0x2f0efcu: goto label_2f0efc;
        case 0x2f0f00u: goto label_2f0f00;
        case 0x2f0f04u: goto label_2f0f04;
        case 0x2f0f08u: goto label_2f0f08;
        case 0x2f0f0cu: goto label_2f0f0c;
        case 0x2f0f10u: goto label_2f0f10;
        case 0x2f0f14u: goto label_2f0f14;
        case 0x2f0f18u: goto label_2f0f18;
        case 0x2f0f1cu: goto label_2f0f1c;
        case 0x2f0f20u: goto label_2f0f20;
        case 0x2f0f24u: goto label_2f0f24;
        case 0x2f0f28u: goto label_2f0f28;
        case 0x2f0f2cu: goto label_2f0f2c;
        case 0x2f0f30u: goto label_2f0f30;
        case 0x2f0f34u: goto label_2f0f34;
        case 0x2f0f38u: goto label_2f0f38;
        case 0x2f0f3cu: goto label_2f0f3c;
        case 0x2f0f40u: goto label_2f0f40;
        case 0x2f0f44u: goto label_2f0f44;
        case 0x2f0f48u: goto label_2f0f48;
        case 0x2f0f4cu: goto label_2f0f4c;
        case 0x2f0f50u: goto label_2f0f50;
        case 0x2f0f54u: goto label_2f0f54;
        case 0x2f0f58u: goto label_2f0f58;
        case 0x2f0f5cu: goto label_2f0f5c;
        case 0x2f0f60u: goto label_2f0f60;
        case 0x2f0f64u: goto label_2f0f64;
        case 0x2f0f68u: goto label_2f0f68;
        case 0x2f0f6cu: goto label_2f0f6c;
        case 0x2f0f70u: goto label_2f0f70;
        case 0x2f0f74u: goto label_2f0f74;
        case 0x2f0f78u: goto label_2f0f78;
        case 0x2f0f7cu: goto label_2f0f7c;
        case 0x2f0f80u: goto label_2f0f80;
        case 0x2f0f84u: goto label_2f0f84;
        case 0x2f0f88u: goto label_2f0f88;
        case 0x2f0f8cu: goto label_2f0f8c;
        case 0x2f0f90u: goto label_2f0f90;
        case 0x2f0f94u: goto label_2f0f94;
        case 0x2f0f98u: goto label_2f0f98;
        case 0x2f0f9cu: goto label_2f0f9c;
        case 0x2f0fa0u: goto label_2f0fa0;
        case 0x2f0fa4u: goto label_2f0fa4;
        case 0x2f0fa8u: goto label_2f0fa8;
        case 0x2f0facu: goto label_2f0fac;
        case 0x2f0fb0u: goto label_2f0fb0;
        case 0x2f0fb4u: goto label_2f0fb4;
        case 0x2f0fb8u: goto label_2f0fb8;
        case 0x2f0fbcu: goto label_2f0fbc;
        case 0x2f0fc0u: goto label_2f0fc0;
        case 0x2f0fc4u: goto label_2f0fc4;
        case 0x2f0fc8u: goto label_2f0fc8;
        case 0x2f0fccu: goto label_2f0fcc;
        case 0x2f0fd0u: goto label_2f0fd0;
        case 0x2f0fd4u: goto label_2f0fd4;
        case 0x2f0fd8u: goto label_2f0fd8;
        case 0x2f0fdcu: goto label_2f0fdc;
        case 0x2f0fe0u: goto label_2f0fe0;
        case 0x2f0fe4u: goto label_2f0fe4;
        case 0x2f0fe8u: goto label_2f0fe8;
        case 0x2f0fecu: goto label_2f0fec;
        case 0x2f0ff0u: goto label_2f0ff0;
        case 0x2f0ff4u: goto label_2f0ff4;
        case 0x2f0ff8u: goto label_2f0ff8;
        case 0x2f0ffcu: goto label_2f0ffc;
        case 0x2f1000u: goto label_2f1000;
        case 0x2f1004u: goto label_2f1004;
        case 0x2f1008u: goto label_2f1008;
        case 0x2f100cu: goto label_2f100c;
        case 0x2f1010u: goto label_2f1010;
        case 0x2f1014u: goto label_2f1014;
        case 0x2f1018u: goto label_2f1018;
        case 0x2f101cu: goto label_2f101c;
        case 0x2f1020u: goto label_2f1020;
        case 0x2f1024u: goto label_2f1024;
        case 0x2f1028u: goto label_2f1028;
        case 0x2f102cu: goto label_2f102c;
        case 0x2f1030u: goto label_2f1030;
        case 0x2f1034u: goto label_2f1034;
        case 0x2f1038u: goto label_2f1038;
        case 0x2f103cu: goto label_2f103c;
        case 0x2f1040u: goto label_2f1040;
        case 0x2f1044u: goto label_2f1044;
        case 0x2f1048u: goto label_2f1048;
        case 0x2f104cu: goto label_2f104c;
        case 0x2f1050u: goto label_2f1050;
        case 0x2f1054u: goto label_2f1054;
        case 0x2f1058u: goto label_2f1058;
        case 0x2f105cu: goto label_2f105c;
        case 0x2f1060u: goto label_2f1060;
        case 0x2f1064u: goto label_2f1064;
        case 0x2f1068u: goto label_2f1068;
        case 0x2f106cu: goto label_2f106c;
        case 0x2f1070u: goto label_2f1070;
        case 0x2f1074u: goto label_2f1074;
        case 0x2f1078u: goto label_2f1078;
        case 0x2f107cu: goto label_2f107c;
        case 0x2f1080u: goto label_2f1080;
        case 0x2f1084u: goto label_2f1084;
        case 0x2f1088u: goto label_2f1088;
        case 0x2f108cu: goto label_2f108c;
        case 0x2f1090u: goto label_2f1090;
        case 0x2f1094u: goto label_2f1094;
        case 0x2f1098u: goto label_2f1098;
        case 0x2f109cu: goto label_2f109c;
        case 0x2f10a0u: goto label_2f10a0;
        case 0x2f10a4u: goto label_2f10a4;
        case 0x2f10a8u: goto label_2f10a8;
        case 0x2f10acu: goto label_2f10ac;
        case 0x2f10b0u: goto label_2f10b0;
        case 0x2f10b4u: goto label_2f10b4;
        case 0x2f10b8u: goto label_2f10b8;
        case 0x2f10bcu: goto label_2f10bc;
        case 0x2f10c0u: goto label_2f10c0;
        case 0x2f10c4u: goto label_2f10c4;
        case 0x2f10c8u: goto label_2f10c8;
        case 0x2f10ccu: goto label_2f10cc;
        case 0x2f10d0u: goto label_2f10d0;
        case 0x2f10d4u: goto label_2f10d4;
        case 0x2f10d8u: goto label_2f10d8;
        case 0x2f10dcu: goto label_2f10dc;
        case 0x2f10e0u: goto label_2f10e0;
        case 0x2f10e4u: goto label_2f10e4;
        case 0x2f10e8u: goto label_2f10e8;
        case 0x2f10ecu: goto label_2f10ec;
        case 0x2f10f0u: goto label_2f10f0;
        case 0x2f10f4u: goto label_2f10f4;
        case 0x2f10f8u: goto label_2f10f8;
        case 0x2f10fcu: goto label_2f10fc;
        case 0x2f1100u: goto label_2f1100;
        case 0x2f1104u: goto label_2f1104;
        case 0x2f1108u: goto label_2f1108;
        case 0x2f110cu: goto label_2f110c;
        case 0x2f1110u: goto label_2f1110;
        case 0x2f1114u: goto label_2f1114;
        case 0x2f1118u: goto label_2f1118;
        case 0x2f111cu: goto label_2f111c;
        case 0x2f1120u: goto label_2f1120;
        case 0x2f1124u: goto label_2f1124;
        case 0x2f1128u: goto label_2f1128;
        case 0x2f112cu: goto label_2f112c;
        case 0x2f1130u: goto label_2f1130;
        case 0x2f1134u: goto label_2f1134;
        case 0x2f1138u: goto label_2f1138;
        case 0x2f113cu: goto label_2f113c;
        case 0x2f1140u: goto label_2f1140;
        case 0x2f1144u: goto label_2f1144;
        case 0x2f1148u: goto label_2f1148;
        case 0x2f114cu: goto label_2f114c;
        case 0x2f1150u: goto label_2f1150;
        case 0x2f1154u: goto label_2f1154;
        case 0x2f1158u: goto label_2f1158;
        case 0x2f115cu: goto label_2f115c;
        case 0x2f1160u: goto label_2f1160;
        case 0x2f1164u: goto label_2f1164;
        case 0x2f1168u: goto label_2f1168;
        case 0x2f116cu: goto label_2f116c;
        case 0x2f1170u: goto label_2f1170;
        case 0x2f1174u: goto label_2f1174;
        case 0x2f1178u: goto label_2f1178;
        case 0x2f117cu: goto label_2f117c;
        case 0x2f1180u: goto label_2f1180;
        case 0x2f1184u: goto label_2f1184;
        case 0x2f1188u: goto label_2f1188;
        case 0x2f118cu: goto label_2f118c;
        case 0x2f1190u: goto label_2f1190;
        case 0x2f1194u: goto label_2f1194;
        case 0x2f1198u: goto label_2f1198;
        case 0x2f119cu: goto label_2f119c;
        case 0x2f11a0u: goto label_2f11a0;
        case 0x2f11a4u: goto label_2f11a4;
        case 0x2f11a8u: goto label_2f11a8;
        case 0x2f11acu: goto label_2f11ac;
        case 0x2f11b0u: goto label_2f11b0;
        case 0x2f11b4u: goto label_2f11b4;
        case 0x2f11b8u: goto label_2f11b8;
        case 0x2f11bcu: goto label_2f11bc;
        case 0x2f11c0u: goto label_2f11c0;
        case 0x2f11c4u: goto label_2f11c4;
        case 0x2f11c8u: goto label_2f11c8;
        case 0x2f11ccu: goto label_2f11cc;
        case 0x2f11d0u: goto label_2f11d0;
        case 0x2f11d4u: goto label_2f11d4;
        case 0x2f11d8u: goto label_2f11d8;
        case 0x2f11dcu: goto label_2f11dc;
        case 0x2f11e0u: goto label_2f11e0;
        case 0x2f11e4u: goto label_2f11e4;
        case 0x2f11e8u: goto label_2f11e8;
        case 0x2f11ecu: goto label_2f11ec;
        case 0x2f11f0u: goto label_2f11f0;
        case 0x2f11f4u: goto label_2f11f4;
        case 0x2f11f8u: goto label_2f11f8;
        case 0x2f11fcu: goto label_2f11fc;
        case 0x2f1200u: goto label_2f1200;
        case 0x2f1204u: goto label_2f1204;
        case 0x2f1208u: goto label_2f1208;
        case 0x2f120cu: goto label_2f120c;
        case 0x2f1210u: goto label_2f1210;
        case 0x2f1214u: goto label_2f1214;
        case 0x2f1218u: goto label_2f1218;
        case 0x2f121cu: goto label_2f121c;
        case 0x2f1220u: goto label_2f1220;
        case 0x2f1224u: goto label_2f1224;
        case 0x2f1228u: goto label_2f1228;
        case 0x2f122cu: goto label_2f122c;
        case 0x2f1230u: goto label_2f1230;
        case 0x2f1234u: goto label_2f1234;
        case 0x2f1238u: goto label_2f1238;
        case 0x2f123cu: goto label_2f123c;
        case 0x2f1240u: goto label_2f1240;
        case 0x2f1244u: goto label_2f1244;
        case 0x2f1248u: goto label_2f1248;
        case 0x2f124cu: goto label_2f124c;
        case 0x2f1250u: goto label_2f1250;
        case 0x2f1254u: goto label_2f1254;
        case 0x2f1258u: goto label_2f1258;
        case 0x2f125cu: goto label_2f125c;
        case 0x2f1260u: goto label_2f1260;
        case 0x2f1264u: goto label_2f1264;
        case 0x2f1268u: goto label_2f1268;
        case 0x2f126cu: goto label_2f126c;
        case 0x2f1270u: goto label_2f1270;
        case 0x2f1274u: goto label_2f1274;
        case 0x2f1278u: goto label_2f1278;
        case 0x2f127cu: goto label_2f127c;
        case 0x2f1280u: goto label_2f1280;
        case 0x2f1284u: goto label_2f1284;
        case 0x2f1288u: goto label_2f1288;
        case 0x2f128cu: goto label_2f128c;
        case 0x2f1290u: goto label_2f1290;
        case 0x2f1294u: goto label_2f1294;
        case 0x2f1298u: goto label_2f1298;
        case 0x2f129cu: goto label_2f129c;
        case 0x2f12a0u: goto label_2f12a0;
        case 0x2f12a4u: goto label_2f12a4;
        case 0x2f12a8u: goto label_2f12a8;
        case 0x2f12acu: goto label_2f12ac;
        case 0x2f12b0u: goto label_2f12b0;
        case 0x2f12b4u: goto label_2f12b4;
        case 0x2f12b8u: goto label_2f12b8;
        case 0x2f12bcu: goto label_2f12bc;
        case 0x2f12c0u: goto label_2f12c0;
        case 0x2f12c4u: goto label_2f12c4;
        case 0x2f12c8u: goto label_2f12c8;
        case 0x2f12ccu: goto label_2f12cc;
        case 0x2f12d0u: goto label_2f12d0;
        case 0x2f12d4u: goto label_2f12d4;
        case 0x2f12d8u: goto label_2f12d8;
        case 0x2f12dcu: goto label_2f12dc;
        case 0x2f12e0u: goto label_2f12e0;
        case 0x2f12e4u: goto label_2f12e4;
        case 0x2f12e8u: goto label_2f12e8;
        case 0x2f12ecu: goto label_2f12ec;
        case 0x2f12f0u: goto label_2f12f0;
        case 0x2f12f4u: goto label_2f12f4;
        case 0x2f12f8u: goto label_2f12f8;
        case 0x2f12fcu: goto label_2f12fc;
        case 0x2f1300u: goto label_2f1300;
        case 0x2f1304u: goto label_2f1304;
        case 0x2f1308u: goto label_2f1308;
        case 0x2f130cu: goto label_2f130c;
        case 0x2f1310u: goto label_2f1310;
        case 0x2f1314u: goto label_2f1314;
        case 0x2f1318u: goto label_2f1318;
        case 0x2f131cu: goto label_2f131c;
        case 0x2f1320u: goto label_2f1320;
        case 0x2f1324u: goto label_2f1324;
        case 0x2f1328u: goto label_2f1328;
        case 0x2f132cu: goto label_2f132c;
        case 0x2f1330u: goto label_2f1330;
        case 0x2f1334u: goto label_2f1334;
        case 0x2f1338u: goto label_2f1338;
        case 0x2f133cu: goto label_2f133c;
        case 0x2f1340u: goto label_2f1340;
        case 0x2f1344u: goto label_2f1344;
        case 0x2f1348u: goto label_2f1348;
        case 0x2f134cu: goto label_2f134c;
        case 0x2f1350u: goto label_2f1350;
        case 0x2f1354u: goto label_2f1354;
        case 0x2f1358u: goto label_2f1358;
        case 0x2f135cu: goto label_2f135c;
        case 0x2f1360u: goto label_2f1360;
        case 0x2f1364u: goto label_2f1364;
        case 0x2f1368u: goto label_2f1368;
        case 0x2f136cu: goto label_2f136c;
        case 0x2f1370u: goto label_2f1370;
        case 0x2f1374u: goto label_2f1374;
        case 0x2f1378u: goto label_2f1378;
        case 0x2f137cu: goto label_2f137c;
        case 0x2f1380u: goto label_2f1380;
        case 0x2f1384u: goto label_2f1384;
        case 0x2f1388u: goto label_2f1388;
        case 0x2f138cu: goto label_2f138c;
        case 0x2f1390u: goto label_2f1390;
        case 0x2f1394u: goto label_2f1394;
        case 0x2f1398u: goto label_2f1398;
        case 0x2f139cu: goto label_2f139c;
        default: break;
    }

    ctx->pc = 0x2f0480u;

label_2f0480:
    // 0x2f0480: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x2f0480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_2f0484:
    // 0x2f0484: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x2f0484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
label_2f0488:
    // 0x2f0488: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f0488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f048c:
    // 0x2f048c: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x2f048cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
label_2f0490:
    // 0x2f0490: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x2f0490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
label_2f0494:
    // 0x2f0494: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f0494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f0498:
    // 0x2f0498: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x2f0498u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_2f049c:
    // 0x2f049c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f049cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f04a0:
    // 0x2f04a0: 0xafa5015c  sw          $a1, 0x15C($sp)
    ctx->pc = 0x2f04a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 5));
label_2f04a4:
    // 0x2f04a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f04a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f04a8:
    // 0x2f04a8: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x2f04a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
label_2f04ac:
    // 0x2f04ac: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x2f04acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
label_2f04b0:
    // 0x2f04b0: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x2f04b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
label_2f04b4:
    // 0x2f04b4: 0xffb50198  sd          $s5, 0x198($sp)
    ctx->pc = 0x2f04b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 21));
label_2f04b8:
    // 0x2f04b8: 0xffb601a0  sd          $s6, 0x1A0($sp)
    ctx->pc = 0x2f04b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 22));
label_2f04bc:
    // 0x2f04bc: 0xffb701a8  sd          $s7, 0x1A8($sp)
    ctx->pc = 0x2f04bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 23));
label_2f04c0:
    // 0x2f04c0: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x2f04c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
label_2f04c4:
    // 0x2f04c4: 0xffbf01b8  sd          $ra, 0x1B8($sp)
    ctx->pc = 0x2f04c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 31));
label_2f04c8:
    // 0x2f04c8: 0xe7b701d8  swc1        $f23, 0x1D8($sp)
    ctx->pc = 0x2f04c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_2f04cc:
    // 0x2f04cc: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x2f04ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_2f04d0:
    // 0x2f04d0: 0xc0f6a96  jal         func_3DAA58
label_2f04d4:
    if (ctx->pc == 0x2F04D4u) {
        ctx->pc = 0x2F04D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04D0u;
        // 0x2f04d4: 0xe7b401c0  swc1        $f20, 0x1C0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F04D8u;
        goto label_2f04d8;
    }
    ctx->pc = 0x2F04D0u;
    SET_GPR_U32(ctx, 31, 0x2F04D8u);
    ctx->pc = 0x2F04D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F04D0u;
    // 0x2f04d4: 0xe7b401c0  swc1        $f20, 0x1C0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F04D0u, 0x2F04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F04D8u;
label_2f04d8:
    // 0x2f04d8: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x2f04d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_2f04dc:
    // 0x2f04dc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2f04dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2f04e0:
    // 0x2f04e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f04e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2f04e4:
    // 0x2f04e4: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x2f04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2f04e8:
    // 0x2f04e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f04e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f04ec:
    // 0x2f04ec: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x2f04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
label_2f04f0:
    // 0x2f04f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f04f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f04f4:
    // 0x2f04f4: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2f04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_2f04f8:
    // 0x2f04f8: 0x40f809  jalr        $v0
label_2f04fc:
    if (ctx->pc == 0x2F04FCu) {
        ctx->pc = 0x2F04FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04F8u;
        // 0x2f04fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0500u;
        goto label_2f0500;
    }
    ctx->pc = 0x2F04F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F0500u);
        ctx->pc = 0x2F04FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F04F8u;
        // 0x2f04fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F04F8u, 0x2F0500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0500u;
label_2f0500:
    // 0x2f0500: 0x10400397  beqz        $v0, . + 4 + (0x397 << 2)
label_2f0504:
    if (ctx->pc == 0x2F0504u) {
        ctx->pc = 0x2F0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0500u;
        // 0x2f0504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0508u;
        goto label_2f0508;
    }
    ctx->pc = 0x2F0500u;
    {
        const bool branch_taken_0x2f0500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0500u;
        // 0x2f0504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0500) {
            ctx->pc = 0x2F1360u;
            goto label_2f1360;
        }
    }
    ctx->pc = 0x2F0508u;
label_2f0508:
    // 0x2f0508: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x2f0508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f050c:
    // 0x2f050c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2f050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2f0510:
    // 0x2f0510: 0x2462ffbd  addiu       $v0, $v1, -0x43
    ctx->pc = 0x2f0510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967229));
label_2f0514:
    // 0x2f0514: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2f0514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2f0518:
    // 0x2f0518: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2f051c:
    if (ctx->pc == 0x2F051Cu) {
        ctx->pc = 0x2F051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0518u;
        // 0x2f051c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0520u;
        goto label_2f0520;
    }
    ctx->pc = 0x2F0518u;
    {
        const bool branch_taken_0x2f0518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0518u;
        // 0x2f051c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0518) {
            ctx->pc = 0x2F0534u;
            goto label_2f0534;
        }
    }
    ctx->pc = 0x2F0520u;
label_2f0520:
    // 0x2f0520: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x2f0520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_2f0524:
    // 0x2f0524: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2f0528:
    if (ctx->pc == 0x2F0528u) {
        ctx->pc = 0x2F0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0524u;
        // 0x2f0528: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F052Cu;
        goto label_2f052c;
    }
    ctx->pc = 0x2F0524u;
    {
        const bool branch_taken_0x2f0524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0524u;
        // 0x2f0528: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0524) {
            ctx->pc = 0x2F0534u;
            goto label_2f0534;
        }
    }
    ctx->pc = 0x2F052Cu;
label_2f052c:
    // 0x2f052c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2f0530:
    if (ctx->pc == 0x2F0530u) {
        ctx->pc = 0x2F0534u;
        goto label_2f0534;
    }
    ctx->pc = 0x2F052Cu;
    {
        const bool branch_taken_0x2f052c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f052c) {
            ctx->pc = 0x2F0538u;
            goto label_2f0538;
        }
    }
    ctx->pc = 0x2F0534u;
label_2f0534:
    // 0x2f0534: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f0534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0538:
    // 0x2f0538: 0x14800389  bnez        $a0, . + 4 + (0x389 << 2)
label_2f053c:
    if (ctx->pc == 0x2F053Cu) {
        ctx->pc = 0x2F053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0538u;
        // 0x2f053c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0540u;
        goto label_2f0540;
    }
    ctx->pc = 0x2F0538u;
    {
        const bool branch_taken_0x2f0538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0538u;
        // 0x2f053c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0538) {
            ctx->pc = 0x2F1360u;
            goto label_2f1360;
        }
    }
    ctx->pc = 0x2F0540u;
label_2f0540:
    // 0x2f0540: 0x8e4205ec  lw          $v0, 0x5EC($s2)
    ctx->pc = 0x2f0540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1516)));
label_2f0544:
    // 0x2f0544: 0x14400386  bnez        $v0, . + 4 + (0x386 << 2)
label_2f0548:
    if (ctx->pc == 0x2F0548u) {
        ctx->pc = 0x2F0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0544u;
        // 0x2f0548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F054Cu;
        goto label_2f054c;
    }
    ctx->pc = 0x2F0544u;
    {
        const bool branch_taken_0x2f0544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0544u;
        // 0x2f0548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0544) {
            ctx->pc = 0x2F1360u;
            goto label_2f1360;
        }
    }
    ctx->pc = 0x2F054Cu;
label_2f054c:
    // 0x2f054c: 0x8e430418  lw          $v1, 0x418($s2)
    ctx->pc = 0x2f054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
label_2f0550:
    // 0x2f0550: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f0550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f0554:
    // 0x2f0554: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_2f0558:
    if (ctx->pc == 0x2F0558u) {
        ctx->pc = 0x2F0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0554u;
        // 0x2f0558: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F055Cu;
        goto label_2f055c;
    }
    ctx->pc = 0x2F0554u;
    {
        const bool branch_taken_0x2f0554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0554u;
        // 0x2f0558: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0554) {
            ctx->pc = 0x2F0564u;
            goto label_2f0564;
        }
    }
    ctx->pc = 0x2F055Cu;
label_2f055c:
    // 0x2f055c: 0x10000380  b           . + 4 + (0x380 << 2)
label_2f0560:
    if (ctx->pc == 0x2F0560u) {
        ctx->pc = 0x2F0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F055Cu;
        // 0x2f0560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0564u;
        goto label_2f0564;
    }
    ctx->pc = 0x2F055Cu;
    {
        const bool branch_taken_0x2f055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F055Cu;
        // 0x2f0560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f055c) {
            ctx->pc = 0x2F1360u;
            goto label_2f1360;
        }
    }
    ctx->pc = 0x2F0564u;
label_2f0564:
    // 0x2f0564: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
label_2f0568:
    if (ctx->pc == 0x2F0568u) {
        ctx->pc = 0x2F056Cu;
        goto label_2f056c;
    }
    ctx->pc = 0x2F0564u;
    {
        const bool branch_taken_0x2f0564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0564) {
            ctx->pc = 0x2F08B0u;
            goto label_2f08b0;
        }
    }
    ctx->pc = 0x2F056Cu;
label_2f056c:
    // 0x2f056c: 0x8e420ffc  lw          $v0, 0xFFC($s2)
    ctx->pc = 0x2f056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
label_2f0570:
    // 0x2f0570: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2f0570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2f0574:
    // 0x2f0574: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2f0574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2f0578:
    // 0x2f0578: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2f0578u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f057c:
    // 0x2f057c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2f057cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2f0580:
    // 0x2f0580: 0x106000cb  beqz        $v1, . + 4 + (0xCB << 2)
label_2f0584:
    if (ctx->pc == 0x2F0584u) {
        ctx->pc = 0x2F0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0580u;
        // 0x2f0584: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0588u;
        goto label_2f0588;
    }
    ctx->pc = 0x2F0580u;
    {
        const bool branch_taken_0x2f0580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0580u;
        // 0x2f0584: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0580) {
            ctx->pc = 0x2F08B0u;
            goto label_2f08b0;
        }
    }
    ctx->pc = 0x2F0588u;
label_2f0588:
    // 0x2f0588: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2f0588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f058c:
    // 0x2f058c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f058cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f0590:
    // 0x2f0590: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2f0590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2f0594:
    // 0x2f0594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f0594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f0598:
    // 0x2f0598: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2f0598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2f059c:
    // 0x2f059c: 0x2416000e  addiu       $s6, $zero, 0xE
    ctx->pc = 0x2f059cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2f05a0:
    // 0x2f05a0: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x2f05a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_2f05a4:
    // 0x2f05a4: 0x2415002e  addiu       $s5, $zero, 0x2E
    ctx->pc = 0x2f05a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_2f05a8:
    // 0x2f05a8: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x2f05a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f05ac:
    // 0x2f05ac: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x2f05acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f05b0:
    // 0x2f05b0: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x2f05b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2f05b4:
    // 0x2f05b4: 0x8e430ffc  lw          $v1, 0xFFC($s2)
    ctx->pc = 0x2f05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
label_2f05b8:
    // 0x2f05b8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2f05b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2f05bc:
    // 0x2f05bc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2f05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2f05c0:
    // 0x2f05c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2f05c4:
    // 0x2f05c4: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2f05c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f05c8:
    // 0x2f05c8: 0x8e8300c0  lw          $v1, 0xC0($s4)
    ctx->pc = 0x2f05c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_2f05cc:
    // 0x2f05cc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2f05ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_2f05d0:
    // 0x2f05d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f05d4:
    if (ctx->pc == 0x2F05D4u) {
        ctx->pc = 0x2F05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F05D0u;
        // 0x2f05d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F05D8u;
        goto label_2f05d8;
    }
    ctx->pc = 0x2F05D0u;
    {
        const bool branch_taken_0x2f05d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F05D0u;
        // 0x2f05d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f05d0) {
            ctx->pc = 0x2F05E4u;
            goto label_2f05e4;
        }
    }
    ctx->pc = 0x2F05D8u;
label_2f05d8:
    // 0x2f05d8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f05d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2f05dc:
    // 0x2f05dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f05e0:
    if (ctx->pc == 0x2F05E0u) {
        ctx->pc = 0x2F05E4u;
        goto label_2f05e4;
    }
    ctx->pc = 0x2F05DCu;
    {
        const bool branch_taken_0x2f05dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f05dc) {
            ctx->pc = 0x2F05E8u;
            goto label_2f05e8;
        }
    }
    ctx->pc = 0x2F05E4u;
label_2f05e4:
    // 0x2f05e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f05e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f05e8:
    // 0x2f05e8: 0x50a000a9  beql        $a1, $zero, . + 4 + (0xA9 << 2)
label_2f05ec:
    if (ctx->pc == 0x2F05ECu) {
        ctx->pc = 0x2F05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F05E8u;
        // 0x2f05ec: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F05F0u;
        goto label_2f05f0;
    }
    ctx->pc = 0x2F05E8u;
    {
        const bool branch_taken_0x2f05e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f05e8) {
            ctx->pc = 0x2F05ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F05E8u;
            // 0x2f05ec: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0890u;
            goto label_2f0890;
        }
    }
    ctx->pc = 0x2F05F0u;
label_2f05f0:
    // 0x2f05f0: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x2f05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_2f05f4:
    // 0x2f05f4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2f05f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2f05f8:
    // 0x2f05f8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2f05fc:
    if (ctx->pc == 0x2F05FCu) {
        ctx->pc = 0x2F05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F05F8u;
        // 0x2f05fc: 0x8e820334  lw          $v0, 0x334($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0600u;
        goto label_2f0600;
    }
    ctx->pc = 0x2F05F8u;
    {
        const bool branch_taken_0x2f05f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f05f8) {
            ctx->pc = 0x2F05FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F05F8u;
            // 0x2f05fc: 0x8e820334  lw          $v0, 0x334($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0610u;
            goto label_2f0610;
        }
    }
    ctx->pc = 0x2F0600u;
label_2f0600:
    // 0x2f0600: 0x8e82029c  lw          $v0, 0x29C($s4)
    ctx->pc = 0x2f0600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 668)));
label_2f0604:
    // 0x2f0604: 0x504000a2  beql        $v0, $zero, . + 4 + (0xA2 << 2)
label_2f0608:
    if (ctx->pc == 0x2F0608u) {
        ctx->pc = 0x2F0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0604u;
        // 0x2f0608: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F060Cu;
        goto label_2f060c;
    }
    ctx->pc = 0x2F0604u;
    {
        const bool branch_taken_0x2f0604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0604) {
            ctx->pc = 0x2F0608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0604u;
            // 0x2f0608: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0890u;
            goto label_2f0890;
        }
    }
    ctx->pc = 0x2F060Cu;
label_2f060c:
    // 0x2f060c: 0x8e820334  lw          $v0, 0x334($s4)
    ctx->pc = 0x2f060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
label_2f0610:
    // 0x2f0610: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f0610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0614:
    // 0x2f0614: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2f0614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2f0618:
    // 0x2f0618: 0x10760006  beq         $v1, $s6, . + 4 + (0x6 << 2)
label_2f061c:
    if (ctx->pc == 0x2F061Cu) {
        ctx->pc = 0x2F061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0618u;
        // 0x2f061c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0620u;
        goto label_2f0620;
    }
    ctx->pc = 0x2F0618u;
    {
        const bool branch_taken_0x2f0618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x2F061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0618u;
        // 0x2f061c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0618) {
            ctx->pc = 0x2F0634u;
            goto label_2f0634;
        }
    }
    ctx->pc = 0x2F0620u;
label_2f0620:
    // 0x2f0620: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2f0620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2f0624:
    // 0x2f0624: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_2f0628:
    if (ctx->pc == 0x2F0628u) {
        ctx->pc = 0x2F0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0624u;
        // 0x2f0628: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F062Cu;
        goto label_2f062c;
    }
    ctx->pc = 0x2F0624u;
    {
        const bool branch_taken_0x2f0624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f0624) {
            ctx->pc = 0x2F0628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0624u;
            // 0x2f0628: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0638u;
            goto label_2f0638;
        }
    }
    ctx->pc = 0x2F062Cu;
label_2f062c:
    // 0x2f062c: 0x14750002  bne         $v1, $s5, . + 4 + (0x2 << 2)
label_2f0630:
    if (ctx->pc == 0x2F0630u) {
        ctx->pc = 0x2F0634u;
        goto label_2f0634;
    }
    ctx->pc = 0x2F062Cu;
    {
        const bool branch_taken_0x2f062c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x2f062c) {
            ctx->pc = 0x2F0638u;
            goto label_2f0638;
        }
    }
    ctx->pc = 0x2F0634u;
label_2f0634:
    // 0x2f0634: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f0634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0638:
    // 0x2f0638: 0x10800094  beqz        $a0, . + 4 + (0x94 << 2)
label_2f063c:
    if (ctx->pc == 0x2F063Cu) {
        ctx->pc = 0x2F063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0638u;
        // 0x2f063c: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0640u;
        goto label_2f0640;
    }
    ctx->pc = 0x2F0638u;
    {
        const bool branch_taken_0x2f0638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0638u;
        // 0x2f063c: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0638) {
            ctx->pc = 0x2F088Cu;
            goto label_2f088c;
        }
    }
    ctx->pc = 0x2F0640u;
label_2f0640:
    // 0x2f0640: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x2f0640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_2f0644:
    // 0x2f0644: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
label_2f0648:
    if (ctx->pc == 0x2F0648u) {
        ctx->pc = 0x2F0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0644u;
        // 0x2f0648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F064Cu;
        goto label_2f064c;
    }
    ctx->pc = 0x2F0644u;
    {
        const bool branch_taken_0x2f0644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0644u;
        // 0x2f0648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0644) {
            ctx->pc = 0x2F0694u;
            goto label_2f0694;
        }
    }
    ctx->pc = 0x2F064Cu;
label_2f064c:
    // 0x2f064c: 0x10560005  beq         $v0, $s6, . + 4 + (0x5 << 2)
label_2f0650:
    if (ctx->pc == 0x2F0650u) {
        ctx->pc = 0x2F0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F064Cu;
        // 0x2f0650: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0654u;
        goto label_2f0654;
    }
    ctx->pc = 0x2F064Cu;
    {
        const bool branch_taken_0x2f064c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x2F0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F064Cu;
        // 0x2f0650: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f064c) {
            ctx->pc = 0x2F0664u;
            goto label_2f0664;
        }
    }
    ctx->pc = 0x2F0654u;
label_2f0654:
    // 0x2f0654: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_2f0658:
    if (ctx->pc == 0x2F0658u) {
        ctx->pc = 0x2F0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0654u;
        // 0x2f0658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F065Cu;
        goto label_2f065c;
    }
    ctx->pc = 0x2F0654u;
    {
        const bool branch_taken_0x2f0654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f0654) {
            ctx->pc = 0x2F0658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0654u;
            // 0x2f0658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0668u;
            goto label_2f0668;
        }
    }
    ctx->pc = 0x2F065Cu;
label_2f065c:
    // 0x2f065c: 0x14550002  bne         $v0, $s5, . + 4 + (0x2 << 2)
label_2f0660:
    if (ctx->pc == 0x2F0660u) {
        ctx->pc = 0x2F0664u;
        goto label_2f0664;
    }
    ctx->pc = 0x2F065Cu;
    {
        const bool branch_taken_0x2f065c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2f065c) {
            ctx->pc = 0x2F0668u;
            goto label_2f0668;
        }
    }
    ctx->pc = 0x2F0664u;
label_2f0664:
    // 0x2f0664: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f0664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0668:
    // 0x2f0668: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2f066c:
    if (ctx->pc == 0x2F066Cu) {
        ctx->pc = 0x2F0670u;
        goto label_2f0670;
    }
    ctx->pc = 0x2F0668u;
    {
        const bool branch_taken_0x2f0668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0668) {
            ctx->pc = 0x2F068Cu;
            goto label_2f068c;
        }
    }
    ctx->pc = 0x2F0670u;
label_2f0670:
    // 0x2f0670: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2f0670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_2f0674:
    // 0x2f0674: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2f0678:
    if (ctx->pc == 0x2F0678u) {
        ctx->pc = 0x2F0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0674u;
        // 0x2f0678: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F067Cu;
        goto label_2f067c;
    }
    ctx->pc = 0x2F0674u;
    {
        const bool branch_taken_0x2f0674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0674) {
            ctx->pc = 0x2F0678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0674u;
            // 0x2f0678: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F068Cu;
            goto label_2f068c;
        }
    }
    ctx->pc = 0x2F067Cu;
label_2f067c:
    // 0x2f067c: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x2f067cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
label_2f0680:
    // 0x2f0680: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f0680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2f0684:
    // 0x2f0684: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2f0688:
    if (ctx->pc == 0x2F0688u) {
        ctx->pc = 0x2F0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0684u;
        // 0x2f0688: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F068Cu;
        goto label_2f068c;
    }
    ctx->pc = 0x2F0684u;
    {
        const bool branch_taken_0x2f0684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0684) {
            ctx->pc = 0x2F0688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0684u;
            // 0x2f0688: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F068Cu;
            goto label_2f068c;
        }
    }
    ctx->pc = 0x2F068Cu;
label_2f068c:
    // 0x2f068c: 0x50c00080  beql        $a2, $zero, . + 4 + (0x80 << 2)
label_2f0690:
    if (ctx->pc == 0x2F0690u) {
        ctx->pc = 0x2F0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F068Cu;
        // 0x2f0690: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0694u;
        goto label_2f0694;
    }
    ctx->pc = 0x2F068Cu;
    {
        const bool branch_taken_0x2f068c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f068c) {
            ctx->pc = 0x2F0690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F068Cu;
            // 0x2f0690: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0890u;
            goto label_2f0890;
        }
    }
    ctx->pc = 0x2F0694u;
label_2f0694:
    // 0x2f0694: 0x8e82036c  lw          $v0, 0x36C($s4)
    ctx->pc = 0x2f0694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 876)));
label_2f0698:
    // 0x2f0698: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2f0698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2f069c:
    // 0x2f069c: 0x5440007c  bnel        $v0, $zero, . + 4 + (0x7C << 2)
label_2f06a0:
    if (ctx->pc == 0x2F06A0u) {
        ctx->pc = 0x2F06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F069Cu;
        // 0x2f06a0: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F06A4u;
        goto label_2f06a4;
    }
    ctx->pc = 0x2F069Cu;
    {
        const bool branch_taken_0x2f069c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f069c) {
            ctx->pc = 0x2F06A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F069Cu;
            // 0x2f06a0: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0890u;
            goto label_2f0890;
        }
    }
    ctx->pc = 0x2F06A4u;
label_2f06a4:
    // 0x2f06a4: 0x8e830370  lw          $v1, 0x370($s4)
    ctx->pc = 0x2f06a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 880)));
label_2f06a8:
    // 0x2f06a8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f06a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2f06ac:
    // 0x2f06ac: 0x54400078  bnel        $v0, $zero, . + 4 + (0x78 << 2)
label_2f06b0:
    if (ctx->pc == 0x2F06B0u) {
        ctx->pc = 0x2F06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06ACu;
        // 0x2f06b0: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F06B4u;
        goto label_2f06b4;
    }
    ctx->pc = 0x2F06ACu;
    {
        const bool branch_taken_0x2f06ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f06ac) {
            ctx->pc = 0x2F06B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F06ACu;
            // 0x2f06b0: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0890u;
            goto label_2f0890;
        }
    }
    ctx->pc = 0x2F06B4u;
label_2f06b4:
    // 0x2f06b4: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2f06b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_2f06b8:
    // 0x2f06b8: 0x54400075  bnel        $v0, $zero, . + 4 + (0x75 << 2)
label_2f06bc:
    if (ctx->pc == 0x2F06BCu) {
        ctx->pc = 0x2F06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06B8u;
        // 0x2f06bc: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F06C0u;
        goto label_2f06c0;
    }
    ctx->pc = 0x2F06B8u;
    {
        const bool branch_taken_0x2f06b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f06b8) {
            ctx->pc = 0x2F06BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F06B8u;
            // 0x2f06bc: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0890u;
            goto label_2f0890;
        }
    }
    ctx->pc = 0x2F06C0u;
label_2f06c0:
    // 0x2f06c0: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x2f06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
label_2f06c4:
    // 0x2f06c4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f06c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2f06c8:
    // 0x2f06c8: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2f06c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2f06cc:
    // 0x2f06cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2f06d0:
    if (ctx->pc == 0x2F06D0u) {
        ctx->pc = 0x2F06D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06CCu;
        // 0x2f06d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F06D4u;
        goto label_2f06d4;
    }
    ctx->pc = 0x2F06CCu;
    {
        const bool branch_taken_0x2f06cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F06D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06CCu;
        // 0x2f06d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f06cc) {
            ctx->pc = 0x2F06D8u;
            goto label_2f06d8;
        }
    }
    ctx->pc = 0x2F06D4u;
label_2f06d4:
    // 0x2f06d4: 0x92831104  lbu         $v1, 0x1104($s4)
    ctx->pc = 0x2f06d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4356)));
label_2f06d8:
    // 0x2f06d8: 0x5460006d  bnel        $v1, $zero, . + 4 + (0x6D << 2)
label_2f06dc:
    if (ctx->pc == 0x2F06DCu) {
        ctx->pc = 0x2F06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F06D8u;
        // 0x2f06dc: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F06E0u;
        goto label_2f06e0;
    }
    ctx->pc = 0x2F06D8u;
    {
        const bool branch_taken_0x2f06d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f06d8) {
            ctx->pc = 0x2F06DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F06D8u;
            // 0x2f06dc: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0890u;
            goto label_2f0890;
        }
    }
    ctx->pc = 0x2F06E0u;
label_2f06e0:
    // 0x2f06e0: 0x8e840104  lw          $a0, 0x104($s4)
    ctx->pc = 0x2f06e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2f06e4:
    // 0x2f06e4: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x2f06e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f06e8:
    // 0x2f06e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f06ec:
    // 0x2f06ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f06f0:
    // 0x2f06f0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f06f4:
    // 0x2f06f4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f06f8:
    // 0x2f06f8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f06f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f06fc:
    // 0x2f06fc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f06fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0700:
    // 0x2f0700: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f0700u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0704:
    // 0x2f0704: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2f0704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0708:
    // 0x2f0708: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2f0708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f070c:
    // 0x2f070c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2f070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0710:
    // 0x2f0710: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2f0710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0714:
    // 0x2f0714: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2f0714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0718:
    // 0x2f0718: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f0718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f071c:
    // 0x2f071c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f071cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f0720:
    // 0x2f0720: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2f0720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f0724:
    // 0x2f0724: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x2f0724u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2f0728:
    // 0x2f0728: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2f0728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f072c:
    // 0x2f072c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f072cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0730:
    // 0x2f0730: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2f0730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0734:
    // 0x2f0734: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f0734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0738:
    // 0x2f0738: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2f0738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f073c:
    // 0x2f073c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f073cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f0740:
    // 0x2f0740: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f0740u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f0744:
    // 0x2f0744: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x2f0744u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f0748:
    // 0x2f0748: 0x46140504  c1          0x140504
    ctx->pc = 0x2f0748u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_2f074c:
    // 0x2f074c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2f074cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0750:
    // 0x2f0750: 0x0  nop
    ctx->pc = 0x2f0750u;
    // NOP
label_2f0754:
    // 0x2f0754: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
label_2f0758:
    if (ctx->pc == 0x2F0758u) {
        ctx->pc = 0x2F0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0754u;
        // 0x2f0758: 0x8fa20160  lw          $v0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F075Cu;
        goto label_2f075c;
    }
    ctx->pc = 0x2F0754u;
    {
        const bool branch_taken_0x2f0754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0754u;
        // 0x2f0758: 0x8fa20160  lw          $v0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0754) {
            ctx->pc = 0x2F088Cu;
            goto label_2f088c;
        }
    }
    ctx->pc = 0x2F075Cu;
label_2f075c:
    // 0x2f075c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_2f0760:
    if (ctx->pc == 0x2F0760u) {
        ctx->pc = 0x2F0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F075Cu;
        // 0x2f0760: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0764u;
        goto label_2f0764;
    }
    ctx->pc = 0x2F075Cu;
    {
        const bool branch_taken_0x2f075c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F075Cu;
        // 0x2f0760: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f075c) {
            ctx->pc = 0x2F0884u;
            goto label_2f0884;
        }
    }
    ctx->pc = 0x2F0764u;
label_2f0764:
    // 0x2f0764: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f0764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f0768:
    // 0x2f0768: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x2f0768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f076c:
    // 0x2f076c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f0770:
    // 0x2f0770: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f0770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f0774:
    // 0x2f0774: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f0774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0778:
    // 0x2f0778: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f0778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f077c:
    // 0x2f077c: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x2f077cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
label_2f0780:
    // 0x2f0780: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f0780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0784:
    // 0x2f0784: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f0784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f0788:
    // 0x2f0788: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2f0788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f078c:
    // 0x2f078c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f078cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f0790:
    // 0x2f0790: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2f0790u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2f0794:
    // 0x2f0794: 0x8e820104  lw          $v0, 0x104($s4)
    ctx->pc = 0x2f0794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2f0798:
    // 0x2f0798: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f0798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f079c:
    // 0x2f079c: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x2f079cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f07a0:
    // 0x2f07a0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f07a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f07a4:
    // 0x2f07a4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2f07a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2f07a8:
    // 0x2f07a8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2f07a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f07ac:
    // 0x2f07ac: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2f07acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2f07b0:
    // 0x2f07b0: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x2f07b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
label_2f07b4:
    // 0x2f07b4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f07b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f07b8:
    // 0x2f07b8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2f07b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2f07bc:
    // 0x2f07bc: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2f07bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f07c0:
    // 0x2f07c0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2f07c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2f07c4:
    // 0x2f07c4: 0xc0f6a96  jal         func_3DAA58
label_2f07c8:
    if (ctx->pc == 0x2F07C8u) {
        ctx->pc = 0x2F07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F07C4u;
        // 0x2f07c8: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F07CCu;
        goto label_2f07cc;
    }
    ctx->pc = 0x2F07C4u;
    SET_GPR_U32(ctx, 31, 0x2F07CCu);
    ctx->pc = 0x2F07C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F07C4u;
    // 0x2f07c8: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F07C4u, 0x2F07CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F07CCu;
label_2f07cc:
    // 0x2f07cc: 0xc0f6a96  jal         func_3DAA58
label_2f07d0:
    if (ctx->pc == 0x2F07D0u) {
        ctx->pc = 0x2F07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F07CCu;
        // 0x2f07d0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F07D4u;
        goto label_2f07d4;
    }
    ctx->pc = 0x2F07CCu;
    SET_GPR_U32(ctx, 31, 0x2F07D4u);
    ctx->pc = 0x2F07D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F07CCu;
    // 0x2f07d0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F07CCu, 0x2F07D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F07D4u;
label_2f07d4:
    // 0x2f07d4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2f07d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f07d8:
    // 0x2f07d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f07d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f07dc:
    // 0x2f07dc: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2f07dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f07e0:
    // 0x2f07e0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f07e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2f07e4:
    // 0x2f07e4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2f07e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2f07e8:
    // 0x2f07e8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2f07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_2f07ec:
    // 0x2f07ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f07ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f07f0:
    // 0x2f07f0: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x2f07f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f07f4:
    // 0x2f07f4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f07f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f07f8:
    // 0x2f07f8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2f07f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f07fc:
    // 0x2f07fc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2f07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0800:
    // 0x2f0800: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2f0800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0804:
    // 0x2f0804: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2f0804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f0808:
    // 0x2f0808: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f0808u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f080c:
    // 0x2f080c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f080cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f0810:
    // 0x2f0810: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f0810u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f0814:
    // 0x2f0814: 0x0  nop
    ctx->pc = 0x2f0814u;
    // NOP
label_2f0818:
    // 0x2f0818: 0x0  nop
    ctx->pc = 0x2f0818u;
    // NOP
label_2f081c:
    // 0x2f081c: 0x46010084  c1          0x10084
    ctx->pc = 0x2f081cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_2f0820:
    // 0x2f0820: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2f0820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2f0824:
    // 0x2f0824: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f0824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0828:
    // 0x2f0828: 0x0  nop
    ctx->pc = 0x2f0828u;
    // NOP
label_2f082c:
    // 0x2f082c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f082cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0830:
    // 0x2f0830: 0x0  nop
    ctx->pc = 0x2f0830u;
    // NOP
label_2f0834:
    // 0x2f0834: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2f0838:
    if (ctx->pc == 0x2F0838u) {
        ctx->pc = 0x2F0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0834u;
        // 0x2f0838: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F083Cu;
        goto label_2f083c;
    }
    ctx->pc = 0x2F0834u;
    {
        const bool branch_taken_0x2f0834 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0834u;
        // 0x2f0838: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0834) {
            ctx->pc = 0x2F085Cu;
            goto label_2f085c;
        }
    }
    ctx->pc = 0x2F083Cu;
label_2f083c:
    // 0x2f083c: 0x0  nop
    ctx->pc = 0x2f083cu;
    // NOP
label_2f0840:
    // 0x2f0840: 0x0  nop
    ctx->pc = 0x2f0840u;
    // NOP
label_2f0844:
    // 0x2f0844: 0x4602b003  div.s       $f0, $f22, $f2
    ctx->pc = 0x2f0844u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[2]); }
label_2f0848:
    // 0x2f0848: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f0848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f084c:
    // 0x2f084c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f084cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0850:
    // 0x2f0850: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f0850u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f0854:
    // 0x2f0854: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f0854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0858:
    // 0x2f0858: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2f0858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f085c:
    // 0x2f085c: 0xc07a8b2  jal         func_1EA2C8
label_2f0860:
    if (ctx->pc == 0x2F0860u) {
        ctx->pc = 0x2F0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F085Cu;
        // 0x2f0860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0864u;
        goto label_2f0864;
    }
    ctx->pc = 0x2F085Cu;
    SET_GPR_U32(ctx, 31, 0x2F0864u);
    ctx->pc = 0x2F0860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F085Cu;
    // 0x2f0860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2F085Cu, 0x2F0864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0864u;
label_2f0864:
    // 0x2f0864: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x2f0864u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2f0868:
    // 0x2f0868: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f0868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f086c:
    // 0x2f086c: 0x24050201  addiu       $a1, $zero, 0x201
    ctx->pc = 0x2f086cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
label_2f0870:
    // 0x2f0870: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f0870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0874:
    // 0x2f0874: 0xc077912  jal         func_1DE448
label_2f0878:
    if (ctx->pc == 0x2F0878u) {
        ctx->pc = 0x2F0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0874u;
        // 0x2f0878: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F087Cu;
        goto label_2f087c;
    }
    ctx->pc = 0x2F0874u;
    SET_GPR_U32(ctx, 31, 0x2F087Cu);
    ctx->pc = 0x2F0878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0874u;
    // 0x2f0878: 0x27a70150  addiu       $a3, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x2F0874u, 0x2F087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F087Cu;
label_2f087c:
    // 0x2f087c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2f0880:
    if (ctx->pc == 0x2F0880u) {
        ctx->pc = 0x2F0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F087Cu;
        // 0x2f0880: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0884u;
        goto label_2f0884;
    }
    ctx->pc = 0x2F087Cu;
    {
        const bool branch_taken_0x2f087c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f087c) {
            ctx->pc = 0x2F0880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F087Cu;
            // 0x2f0880: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0890u;
            goto label_2f0890;
        }
    }
    ctx->pc = 0x2F0884u;
label_2f0884:
    // 0x2f0884: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2f0884u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_2f0888:
    // 0x2f0888: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x2f0888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f088c:
    // 0x2f088c: 0x8e420ffc  lw          $v0, 0xFFC($s2)
    ctx->pc = 0x2f088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
label_2f0890:
    // 0x2f0890: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f0890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f0894:
    // 0x2f0894: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2f0894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2f0898:
    // 0x2f0898: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2f0898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2f089c:
    // 0x2f089c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2f089cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f08a0:
    // 0x2f08a0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2f08a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2f08a4:
    // 0x2f08a4: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2f08a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f08a8:
    // 0x2f08a8: 0x5460ff43  bnel        $v1, $zero, . + 4 + (-0xBD << 2)
label_2f08ac:
    if (ctx->pc == 0x2F08ACu) {
        ctx->pc = 0x2F08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F08A8u;
        // 0x2f08ac: 0x8e430ffc  lw          $v1, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F08B0u;
        goto label_2f08b0;
    }
    ctx->pc = 0x2F08A8u;
    {
        const bool branch_taken_0x2f08a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f08a8) {
            ctx->pc = 0x2F08ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F08A8u;
            // 0x2f08ac: 0x8e430ffc  lw          $v1, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F05B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f05b8;
        }
    }
    ctx->pc = 0x2F08B0u;
label_2f08b0:
    // 0x2f08b0: 0x166000b6  bnez        $s3, . + 4 + (0xB6 << 2)
label_2f08b4:
    if (ctx->pc == 0x2F08B4u) {
        ctx->pc = 0x2F08B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F08B0u;
        // 0x2f08b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F08B8u;
        goto label_2f08b8;
    }
    ctx->pc = 0x2F08B0u;
    {
        const bool branch_taken_0x2f08b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F08B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F08B0u;
        // 0x2f08b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f08b0) {
            ctx->pc = 0x2F0B8Cu;
            goto label_2f0b8c;
        }
    }
    ctx->pc = 0x2F08B8u;
label_2f08b8:
    // 0x2f08b8: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x2f08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2f08bc:
    // 0x2f08bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f08bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f08c0:
    // 0x2f08c0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f08c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2f08c4:
    // 0x2f08c4: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
label_2f08c8:
    if (ctx->pc == 0x2F08C8u) {
        ctx->pc = 0x2F08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F08C4u;
        // 0x2f08c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F08CCu;
        goto label_2f08cc;
    }
    ctx->pc = 0x2F08C4u;
    {
        const bool branch_taken_0x2f08c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F08C4u;
        // 0x2f08c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f08c4) {
            ctx->pc = 0x2F0B84u;
            goto label_2f0b84;
        }
    }
    ctx->pc = 0x2F08CCu;
label_2f08cc:
    // 0x2f08cc: 0x8e420ffc  lw          $v0, 0xFFC($s2)
    ctx->pc = 0x2f08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
label_2f08d0:
    // 0x2f08d0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2f08d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2f08d4:
    // 0x2f08d4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2f08d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2f08d8:
    // 0x2f08d8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2f08d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f08dc:
    // 0x2f08dc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2f08dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2f08e0:
    // 0x2f08e0: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x2f08e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f08e4:
    // 0x2f08e4: 0x106000a7  beqz        $v1, . + 4 + (0xA7 << 2)
label_2f08e8:
    if (ctx->pc == 0x2F08E8u) {
        ctx->pc = 0x2F08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F08E4u;
        // 0x2f08e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F08ECu;
        goto label_2f08ec;
    }
    ctx->pc = 0x2F08E4u;
    {
        const bool branch_taken_0x2f08e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F08E4u;
        // 0x2f08e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f08e4) {
            ctx->pc = 0x2F0B84u;
            goto label_2f0b84;
        }
    }
    ctx->pc = 0x2F08ECu;
label_2f08ec:
    // 0x2f08ec: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2f08ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f08f0:
    // 0x2f08f0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2f08f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2f08f4:
    // 0x2f08f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f08f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f08f8:
    // 0x2f08f8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2f08f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2f08fc:
    // 0x2f08fc: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x2f08fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_2f0900:
    // 0x2f0900: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x2f0900u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_2f0904:
    // 0x2f0904: 0x27be0050  addiu       $fp, $sp, 0x50
    ctx->pc = 0x2f0904u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f0908:
    // 0x2f0908: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x2f0908u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2f090c:
    // 0x2f090c: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x2f090cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
label_2f0910:
    // 0x2f0910: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x2f0910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f0914:
    // 0x2f0914: 0x0  nop
    ctx->pc = 0x2f0914u;
    // NOP
label_2f0918:
    // 0x2f0918: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2f0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2f091c:
    // 0x2f091c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2f091cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2f0920:
    // 0x2f0920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f0920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f0924:
    // 0x2f0924: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2f0924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0928:
    // 0x2f0928: 0x5200008e  beql        $s0, $zero, . + 4 + (0x8E << 2)
label_2f092c:
    if (ctx->pc == 0x2F092Cu) {
        ctx->pc = 0x2F092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0928u;
        // 0x2f092c: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0930u;
        goto label_2f0930;
    }
    ctx->pc = 0x2F0928u;
    {
        const bool branch_taken_0x2f0928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0928) {
            ctx->pc = 0x2F092Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0928u;
            // 0x2f092c: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0B64u;
            goto label_2f0b64;
        }
    }
    ctx->pc = 0x2F0930u;
label_2f0930:
    // 0x2f0930: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x2f0930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2f0934:
    // 0x2f0934: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2f0934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_2f0938:
    // 0x2f0938: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f093c:
    if (ctx->pc == 0x2F093Cu) {
        ctx->pc = 0x2F093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0938u;
        // 0x2f093c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0940u;
        goto label_2f0940;
    }
    ctx->pc = 0x2F0938u;
    {
        const bool branch_taken_0x2f0938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0938u;
        // 0x2f093c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0938) {
            ctx->pc = 0x2F094Cu;
            goto label_2f094c;
        }
    }
    ctx->pc = 0x2F0940u;
label_2f0940:
    // 0x2f0940: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f0940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2f0944:
    // 0x2f0944: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f0948:
    if (ctx->pc == 0x2F0948u) {
        ctx->pc = 0x2F094Cu;
        goto label_2f094c;
    }
    ctx->pc = 0x2F0944u;
    {
        const bool branch_taken_0x2f0944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0944) {
            ctx->pc = 0x2F0950u;
            goto label_2f0950;
        }
    }
    ctx->pc = 0x2F094Cu;
label_2f094c:
    // 0x2f094c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f094cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0950:
    // 0x2f0950: 0x50800084  beql        $a0, $zero, . + 4 + (0x84 << 2)
label_2f0954:
    if (ctx->pc == 0x2F0954u) {
        ctx->pc = 0x2F0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0950u;
        // 0x2f0954: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0958u;
        goto label_2f0958;
    }
    ctx->pc = 0x2F0950u;
    {
        const bool branch_taken_0x2f0950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0950) {
            ctx->pc = 0x2F0954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0950u;
            // 0x2f0954: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0B64u;
            goto label_2f0b64;
        }
    }
    ctx->pc = 0x2F0958u;
label_2f0958:
    // 0x2f0958: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x2f0958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_2f095c:
    // 0x2f095c: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x2f095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_2f0960:
    // 0x2f0960: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2f0960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_2f0964:
    // 0x2f0964: 0x5456007f  bnel        $v0, $s6, . + 4 + (0x7F << 2)
label_2f0968:
    if (ctx->pc == 0x2F0968u) {
        ctx->pc = 0x2F0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0964u;
        // 0x2f0968: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F096Cu;
        goto label_2f096c;
    }
    ctx->pc = 0x2F0964u;
    {
        const bool branch_taken_0x2f0964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2f0964) {
            ctx->pc = 0x2F0968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0964u;
            // 0x2f0968: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0B64u;
            goto label_2f0b64;
        }
    }
    ctx->pc = 0x2F096Cu;
label_2f096c:
    // 0x2f096c: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2f096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2f0970:
    // 0x2f0970: 0x90430032  lbu         $v1, 0x32($v0)
    ctx->pc = 0x2f0970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
label_2f0974:
    // 0x2f0974: 0x5460007b  bnel        $v1, $zero, . + 4 + (0x7B << 2)
label_2f0978:
    if (ctx->pc == 0x2F0978u) {
        ctx->pc = 0x2F0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0974u;
        // 0x2f0978: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F097Cu;
        goto label_2f097c;
    }
    ctx->pc = 0x2F0974u;
    {
        const bool branch_taken_0x2f0974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0974) {
            ctx->pc = 0x2F0978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0974u;
            // 0x2f0978: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0B64u;
            goto label_2f0b64;
        }
    }
    ctx->pc = 0x2F097Cu;
label_2f097c:
    // 0x2f097c: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2f097cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2f0980:
    // 0x2f0980: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x2f0980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f0984:
    // 0x2f0984: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f0984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0988:
    // 0x2f0988: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f0988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f098c:
    // 0x2f098c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f098cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f0990:
    // 0x2f0990: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f0990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f0994:
    // 0x2f0994: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f0994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f0998:
    // 0x2f0998: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f0998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f099c:
    // 0x2f099c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f099cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f09a0:
    // 0x2f09a0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2f09a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f09a4:
    // 0x2f09a4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2f09a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f09a8:
    // 0x2f09a8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2f09a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f09ac:
    // 0x2f09ac: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2f09acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f09b0:
    // 0x2f09b0: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2f09b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f09b4:
    // 0x2f09b4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f09b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f09b8:
    // 0x2f09b8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f09b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f09bc:
    // 0x2f09bc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2f09bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f09c0:
    // 0x2f09c0: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x2f09c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2f09c4:
    // 0x2f09c4: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x2f09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2f09c8:
    // 0x2f09c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f09c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f09cc:
    // 0x2f09cc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f09ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f09d0:
    // 0x2f09d0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2f09d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f09d4:
    // 0x2f09d4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2f09d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f09d8:
    // 0x2f09d8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2f09d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f09dc:
    // 0x2f09dc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f09dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f09e0:
    // 0x2f09e0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f09e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f09e4:
    // 0x2f09e4: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x2f09e4u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f09e8:
    // 0x2f09e8: 0x46140504  c1          0x140504
    ctx->pc = 0x2f09e8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_2f09ec:
    // 0x2f09ec: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2f09ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f09f0:
    // 0x2f09f0: 0x0  nop
    ctx->pc = 0x2f09f0u;
    // NOP
label_2f09f4:
    // 0x2f09f4: 0x4502005b  bc1fl       . + 4 + (0x5B << 2)
label_2f09f8:
    if (ctx->pc == 0x2F09F8u) {
        ctx->pc = 0x2F09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09F4u;
        // 0x2f09f8: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F09FCu;
        goto label_2f09fc;
    }
    ctx->pc = 0x2F09F4u;
    {
        const bool branch_taken_0x2f09f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f09f4) {
            ctx->pc = 0x2F09F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F09F4u;
            // 0x2f09f8: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0B64u;
            goto label_2f0b64;
        }
    }
    ctx->pc = 0x2F09FCu;
label_2f09fc:
    // 0x2f09fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f09fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f0a00:
    // 0x2f0a00: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x2f0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2f0a04:
    // 0x2f0a04: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2f0a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0a08:
    // 0x2f0a08: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2f0a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0a0c:
    // 0x2f0a0c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f0a0cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f0a10:
    // 0x2f0a10: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2f0a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0a14:
    // 0x2f0a14: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2f0a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0a18:
    // 0x2f0a18: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f0a18u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2f0a1c:
    // 0x2f0a1c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2f0a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0a20:
    // 0x2f0a20: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2f0a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0a24:
    // 0x2f0a24: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2f0a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f0a28:
    // 0x2f0a28: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f0a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f0a2c:
    // 0x2f0a2c: 0x0  nop
    ctx->pc = 0x2f0a2cu;
    // NOP
label_2f0a30:
    // 0x2f0a30: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f0a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0a34:
    // 0x2f0a34: 0x0  nop
    ctx->pc = 0x2f0a34u;
    // NOP
label_2f0a38:
    // 0x2f0a38: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_2f0a3c:
    if (ctx->pc == 0x2F0A3Cu) {
        ctx->pc = 0x2F0A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A38u;
        // 0x2f0a3c: 0xc4600070  lwc1        $f0, 0x70($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0A40u;
        goto label_2f0a40;
    }
    ctx->pc = 0x2F0A38u;
    {
        const bool branch_taken_0x2f0a38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0a38) {
            ctx->pc = 0x2F0A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0A38u;
            // 0x2f0a3c: 0xc4600070  lwc1        $f0, 0x70($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0A50u;
            goto label_2f0a50;
        }
    }
    ctx->pc = 0x2F0A40u;
label_2f0a40:
    // 0x2f0a40: 0x924210ce  lbu         $v0, 0x10CE($s2)
    ctx->pc = 0x2f0a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4302)));
label_2f0a44:
    // 0x2f0a44: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
label_2f0a48:
    if (ctx->pc == 0x2F0A48u) {
        ctx->pc = 0x2F0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A44u;
        // 0x2f0a48: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0A4Cu;
        goto label_2f0a4c;
    }
    ctx->pc = 0x2F0A44u;
    {
        const bool branch_taken_0x2f0a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0a44) {
            ctx->pc = 0x2F0A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0A44u;
            // 0x2f0a48: 0x8e420ffc  lw          $v0, 0xFFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0B64u;
            goto label_2f0b64;
        }
    }
    ctx->pc = 0x2F0A4Cu;
label_2f0a4c:
    // 0x2f0a4c: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x2f0a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0a50:
    // 0x2f0a50: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x2f0a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f0a54:
    // 0x2f0a54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f0a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f0a58:
    // 0x2f0a58: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f0a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2f0a5c:
    // 0x2f0a5c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f0a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0a60:
    // 0x2f0a60: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f0a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f0a64:
    // 0x2f0a64: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x2f0a64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
label_2f0a68:
    // 0x2f0a68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f0a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0a6c:
    // 0x2f0a6c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2f0a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2f0a70:
    // 0x2f0a70: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2f0a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0a74:
    // 0x2f0a74: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f0a74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2f0a78:
    // 0x2f0a78: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2f0a78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2f0a7c:
    // 0x2f0a7c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2f0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2f0a80:
    // 0x2f0a80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f0a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0a84:
    // 0x2f0a84: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x2f0a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0a88:
    // 0x2f0a88: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f0a8c:
    // 0x2f0a8c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2f0a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2f0a90:
    // 0x2f0a90: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2f0a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0a94:
    // 0x2f0a94: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2f0a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2f0a98:
    // 0x2f0a98: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x2f0a98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
label_2f0a9c:
    // 0x2f0a9c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f0a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0aa0:
    // 0x2f0aa0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2f0aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2f0aa4:
    // 0x2f0aa4: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2f0aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0aa8:
    // 0x2f0aa8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2f0aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2f0aac:
    // 0x2f0aac: 0xc0f6a96  jal         func_3DAA58
label_2f0ab0:
    if (ctx->pc == 0x2F0AB0u) {
        ctx->pc = 0x2F0AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AACu;
        // 0x2f0ab0: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0AB4u;
        goto label_2f0ab4;
    }
    ctx->pc = 0x2F0AACu;
    SET_GPR_U32(ctx, 31, 0x2F0AB4u);
    ctx->pc = 0x2F0AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0AACu;
    // 0x2f0ab0: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F0AACu, 0x2F0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0AB4u;
label_2f0ab4:
    // 0x2f0ab4: 0xc0f6a96  jal         func_3DAA58
label_2f0ab8:
    if (ctx->pc == 0x2F0AB8u) {
        ctx->pc = 0x2F0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AB4u;
        // 0x2f0ab8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0ABCu;
        goto label_2f0abc;
    }
    ctx->pc = 0x2F0AB4u;
    SET_GPR_U32(ctx, 31, 0x2F0ABCu);
    ctx->pc = 0x2F0AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0AB4u;
    // 0x2f0ab8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F0AB4u, 0x2F0ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0ABCu;
label_2f0abc:
    // 0x2f0abc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2f0abcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0ac0:
    // 0x2f0ac0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f0ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f0ac4:
    // 0x2f0ac4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2f0ac4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0ac8:
    // 0x2f0ac8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2f0ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2f0acc:
    // 0x2f0acc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2f0accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2f0ad0:
    // 0x2f0ad0: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2f0ad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2f0ad4:
    // 0x2f0ad4: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x2f0ad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f0ad8:
    // 0x2f0ad8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f0ad8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0adc:
    // 0x2f0adc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2f0adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0ae0:
    // 0x2f0ae0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2f0ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0ae4:
    // 0x2f0ae4: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2f0ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0ae8:
    // 0x2f0ae8: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2f0ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f0aec:
    // 0x2f0aec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f0aecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f0af0:
    // 0x2f0af0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f0af0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f0af4:
    // 0x2f0af4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2f0af4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f0af8:
    // 0x2f0af8: 0x0  nop
    ctx->pc = 0x2f0af8u;
    // NOP
label_2f0afc:
    // 0x2f0afc: 0x0  nop
    ctx->pc = 0x2f0afcu;
    // NOP
label_2f0b00:
    // 0x2f0b00: 0x46000044  c1          0x44
    ctx->pc = 0x2f0b00u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2f0b04:
    // 0x2f0b04: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2f0b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2f0b08:
    // 0x2f0b08: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2f0b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0b0c:
    // 0x2f0b0c: 0x0  nop
    ctx->pc = 0x2f0b0cu;
    // NOP
label_2f0b10:
    // 0x2f0b10: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2f0b14:
    if (ctx->pc == 0x2F0B14u) {
        ctx->pc = 0x2F0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B10u;
        // 0x2f0b14: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B18u;
        goto label_2f0b18;
    }
    ctx->pc = 0x2F0B10u;
    {
        const bool branch_taken_0x2f0b10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B10u;
        // 0x2f0b14: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b10) {
            ctx->pc = 0x2F0B38u;
            goto label_2f0b38;
        }
    }
    ctx->pc = 0x2F0B18u;
label_2f0b18:
    // 0x2f0b18: 0x0  nop
    ctx->pc = 0x2f0b18u;
    // NOP
label_2f0b1c:
    // 0x2f0b1c: 0x0  nop
    ctx->pc = 0x2f0b1cu;
    // NOP
label_2f0b20:
    // 0x2f0b20: 0x4601b003  div.s       $f0, $f22, $f1
    ctx->pc = 0x2f0b20u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
label_2f0b24:
    // 0x2f0b24: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f0b24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f0b28:
    // 0x2f0b28: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f0b28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0b2c:
    // 0x2f0b2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f0b2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f0b30:
    // 0x2f0b30: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f0b30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0b34:
    // 0x2f0b34: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2f0b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0b38:
    // 0x2f0b38: 0xc07a8b2  jal         func_1EA2C8
label_2f0b3c:
    if (ctx->pc == 0x2F0B3Cu) {
        ctx->pc = 0x2F0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B38u;
        // 0x2f0b3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B40u;
        goto label_2f0b40;
    }
    ctx->pc = 0x2F0B38u;
    SET_GPR_U32(ctx, 31, 0x2F0B40u);
    ctx->pc = 0x2F0B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0B38u;
    // 0x2f0b3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2F0B38u, 0x2F0B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0B40u;
label_2f0b40:
    // 0x2f0b40: 0xe7b60154  swc1        $f22, 0x154($sp)
    ctx->pc = 0x2f0b40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_2f0b44:
    // 0x2f0b44: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f0b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f0b48:
    // 0x2f0b48: 0x24050201  addiu       $a1, $zero, 0x201
    ctx->pc = 0x2f0b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
label_2f0b4c:
    // 0x2f0b4c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2f0b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f0b50:
    // 0x2f0b50: 0xc077912  jal         func_1DE448
label_2f0b54:
    if (ctx->pc == 0x2F0B54u) {
        ctx->pc = 0x2F0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B50u;
        // 0x2f0b54: 0x27a70154  addiu       $a3, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B58u;
        goto label_2f0b58;
    }
    ctx->pc = 0x2F0B50u;
    SET_GPR_U32(ctx, 31, 0x2F0B58u);
    ctx->pc = 0x2F0B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0B50u;
    // 0x2f0b54: 0x27a70154  addiu       $a3, $sp, 0x154 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x2F0B50u, 0x2F0B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0B58u;
label_2f0b58:
    // 0x2f0b58: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2f0b5c:
    if (ctx->pc == 0x2F0B5Cu) {
        ctx->pc = 0x2F0B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B58u;
        // 0x2f0b5c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B60u;
        goto label_2f0b60;
    }
    ctx->pc = 0x2F0B58u;
    {
        const bool branch_taken_0x2f0b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0b58) {
            ctx->pc = 0x2F0B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0B58u;
            // 0x2f0b5c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0B84u;
            goto label_2f0b84;
        }
    }
    ctx->pc = 0x2F0B60u;
label_2f0b60:
    // 0x2f0b60: 0x8e420ffc  lw          $v0, 0xFFC($s2)
    ctx->pc = 0x2f0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4092)));
label_2f0b64:
    // 0x2f0b64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f0b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f0b68:
    // 0x2f0b68: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2f0b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2f0b6c:
    // 0x2f0b6c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2f0b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2f0b70:
    // 0x2f0b70: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2f0b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f0b74:
    // 0x2f0b74: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2f0b74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2f0b78:
    // 0x2f0b78: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2f0b78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f0b7c:
    // 0x2f0b7c: 0x1460ff66  bnez        $v1, . + 4 + (-0x9A << 2)
label_2f0b80:
    if (ctx->pc == 0x2F0B80u) {
        ctx->pc = 0x2F0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B7Cu;
        // 0x2f0b80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B84u;
        goto label_2f0b84;
    }
    ctx->pc = 0x2F0B7Cu;
    {
        const bool branch_taken_0x2f0b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B7Cu;
        // 0x2f0b80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b7c) {
            ctx->pc = 0x2F0918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f0918;
        }
    }
    ctx->pc = 0x2F0B84u;
label_2f0b84:
    // 0x2f0b84: 0x126001f5  beqz        $s3, . + 4 + (0x1F5 << 2)
label_2f0b88:
    if (ctx->pc == 0x2F0B88u) {
        ctx->pc = 0x2F0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B84u;
        // 0x2f0b88: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B8Cu;
        goto label_2f0b8c;
    }
    ctx->pc = 0x2F0B84u;
    {
        const bool branch_taken_0x2f0b84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B84u;
        // 0x2f0b88: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b84) {
            ctx->pc = 0x2F135Cu;
            goto label_2f135c;
        }
    }
    ctx->pc = 0x2F0B8Cu;
label_2f0b8c:
    // 0x2f0b8c: 0xc0b1488  jal         func_2C5220
label_2f0b90:
    if (ctx->pc == 0x2F0B90u) {
        ctx->pc = 0x2F0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B8Cu;
        // 0x2f0b90: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B94u;
        goto label_2f0b94;
    }
    ctx->pc = 0x2F0B8Cu;
    SET_GPR_U32(ctx, 31, 0x2F0B94u);
    ctx->pc = 0x2F0B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0B8Cu;
    // 0x2f0b90: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2F0B8Cu, 0x2F0B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0B94u;
label_2f0b94:
    // 0x2f0b94: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2f0b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0b98:
    // 0x2f0b98: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x2f0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_2f0b9c:
    // 0x2f0b9c: 0x26155b40  addiu       $s5, $s0, 0x5B40
    ctx->pc = 0x2f0b9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 23360));
label_2f0ba0:
    // 0x2f0ba0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f0ba0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ba4:
    // 0x2f0ba4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f0ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2f0ba8:
    // 0x2f0ba8: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2f0ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2f0bac:
    // 0x2f0bac: 0x14400104  bnez        $v0, . + 4 + (0x104 << 2)
label_2f0bb0:
    if (ctx->pc == 0x2F0BB0u) {
        ctx->pc = 0x2F0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BACu;
        // 0x2f0bb0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BB4u;
        goto label_2f0bb4;
    }
    ctx->pc = 0x2F0BACu;
    {
        const bool branch_taken_0x2f0bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BACu;
        // 0x2f0bb0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0bac) {
            ctx->pc = 0x2F0FC0u;
            goto label_2f0fc0;
        }
    }
    ctx->pc = 0x2F0BB4u;
label_2f0bb4:
    // 0x2f0bb4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f0bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f0bb8:
    // 0x2f0bb8: 0xc0f6a96  jal         func_3DAA58
label_2f0bbc:
    if (ctx->pc == 0x2F0BBCu) {
        ctx->pc = 0x2F0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BB8u;
        // 0x2f0bbc: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BC0u;
        goto label_2f0bc0;
    }
    ctx->pc = 0x2F0BB8u;
    SET_GPR_U32(ctx, 31, 0x2F0BC0u);
    ctx->pc = 0x2F0BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BB8u;
    // 0x2f0bbc: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F0BB8u, 0x2F0BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0BC0u;
label_2f0bc0:
    // 0x2f0bc0: 0xc0f6a96  jal         func_3DAA58
label_2f0bc4:
    if (ctx->pc == 0x2F0BC4u) {
        ctx->pc = 0x2F0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BC0u;
        // 0x2f0bc4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BC8u;
        goto label_2f0bc8;
    }
    ctx->pc = 0x2F0BC0u;
    SET_GPR_U32(ctx, 31, 0x2F0BC8u);
    ctx->pc = 0x2F0BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BC0u;
    // 0x2f0bc4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F0BC0u, 0x2F0BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0BC8u;
label_2f0bc8:
    // 0x2f0bc8: 0x8e620334  lw          $v0, 0x334($s3)
    ctx->pc = 0x2f0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_2f0bcc:
    // 0x2f0bcc: 0x904301a4  lbu         $v1, 0x1A4($v0)
    ctx->pc = 0x2f0bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 420)));
label_2f0bd0:
    // 0x2f0bd0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2f0bd4:
    if (ctx->pc == 0x2F0BD4u) {
        ctx->pc = 0x2F0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BD0u;
        // 0x2f0bd4: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BD8u;
        goto label_2f0bd8;
    }
    ctx->pc = 0x2F0BD0u;
    {
        const bool branch_taken_0x2f0bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BD0u;
        // 0x2f0bd4: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0bd0) {
            ctx->pc = 0x2F0C24u;
            goto label_2f0c24;
        }
    }
    ctx->pc = 0x2F0BD8u;
label_2f0bd8:
    // 0x2f0bd8: 0x8e650104  lw          $a1, 0x104($s3)
    ctx->pc = 0x2f0bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f0bdc:
    // 0x2f0bdc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f0bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0be0:
    // 0x2f0be0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f0be4:
    // 0x2f0be4: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x2f0be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2f0be8:
    // 0x2f0be8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2f0be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2f0bec:
    // 0x2f0bec: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2f0becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0bf0:
    // 0x2f0bf0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2f0bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0bf4:
    // 0x2f0bf4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f0bf4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f0bf8:
    // 0x2f0bf8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2f0bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0bfc:
    // 0x2f0bfc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2f0bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0c00:
    // 0x2f0c00: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f0c00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2f0c04:
    // 0x2f0c04: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2f0c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0c08:
    // 0x2f0c08: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2f0c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0c0c:
    // 0x2f0c0c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2f0c0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f0c10:
    // 0x2f0c10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f0c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0c14:
    // 0x2f0c14: 0x0  nop
    ctx->pc = 0x2f0c14u;
    // NOP
label_2f0c18:
    // 0x2f0c18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f0c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0c1c:
    // 0x2f0c1c: 0x10000012  b           . + 4 + (0x12 << 2)
label_2f0c20:
    if (ctx->pc == 0x2F0C20u) {
        ctx->pc = 0x2F0C24u;
        goto label_2f0c24;
    }
    ctx->pc = 0x2F0C1Cu;
    {
        const bool branch_taken_0x2f0c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0c1c) {
            ctx->pc = 0x2F0C68u;
            goto label_2f0c68;
        }
    }
    ctx->pc = 0x2F0C24u;
label_2f0c24:
    // 0x2f0c24: 0x8e650104  lw          $a1, 0x104($s3)
    ctx->pc = 0x2f0c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f0c28:
    // 0x2f0c28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0c2c:
    // 0x2f0c2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f0c30:
    // 0x2f0c30: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x2f0c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_2f0c34:
    // 0x2f0c34: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2f0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2f0c38:
    // 0x2f0c38: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2f0c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0c3c:
    // 0x2f0c3c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2f0c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0c40:
    // 0x2f0c40: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2f0c40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f0c44:
    // 0x2f0c44: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2f0c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0c48:
    // 0x2f0c48: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2f0c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0c4c:
    // 0x2f0c4c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2f0c4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2f0c50:
    // 0x2f0c50: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2f0c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0c54:
    // 0x2f0c54: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2f0c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0c58:
    // 0x2f0c58: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2f0c58u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2f0c5c:
    // 0x2f0c5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f0c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0c60:
    // 0x2f0c60: 0x0  nop
    ctx->pc = 0x2f0c60u;
    // NOP
label_2f0c64:
    // 0x2f0c64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f0c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0c68:
    // 0x2f0c68: 0x0  nop
    ctx->pc = 0x2f0c68u;
    // NOP
label_2f0c6c:
    // 0x2f0c6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f0c70:
    if (ctx->pc == 0x2F0C70u) {
        ctx->pc = 0x2F0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C6Cu;
        // 0x2f0c70: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C74u;
        goto label_2f0c74;
    }
    ctx->pc = 0x2F0C6Cu;
    {
        const bool branch_taken_0x2f0c6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0c6c) {
            ctx->pc = 0x2F0C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0C6Cu;
            // 0x2f0c70: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0C74u;
            goto label_2f0c74;
        }
    }
    ctx->pc = 0x2F0C74u;
label_2f0c74:
    // 0x2f0c74: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_2f0c78:
    if (ctx->pc == 0x2F0C78u) {
        ctx->pc = 0x2F0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C74u;
        // 0x2f0c78: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C7Cu;
        goto label_2f0c7c;
    }
    ctx->pc = 0x2F0C74u;
    {
        const bool branch_taken_0x2f0c74 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C74u;
        // 0x2f0c78: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c74) {
            ctx->pc = 0x2F0C84u;
            goto label_2f0c84;
        }
    }
    ctx->pc = 0x2F0C7Cu;
label_2f0c7c:
    // 0x2f0c7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f0c80:
    if (ctx->pc == 0x2F0C80u) {
        ctx->pc = 0x2F0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C7Cu;
        // 0x2f0c80: 0x24424d90  addiu       $v0, $v0, 0x4D90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C84u;
        goto label_2f0c84;
    }
    ctx->pc = 0x2F0C7Cu;
    {
        const bool branch_taken_0x2f0c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C7Cu;
        // 0x2f0c80: 0x24424d90  addiu       $v0, $v0, 0x4D90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c7c) {
            ctx->pc = 0x2F0C8Cu;
            goto label_2f0c8c;
        }
    }
    ctx->pc = 0x2F0C84u;
label_2f0c84:
    // 0x2f0c84: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2f0c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2f0c88:
    // 0x2f0c88: 0x24424d80  addiu       $v0, $v0, 0x4D80
    ctx->pc = 0x2f0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19840));
label_2f0c8c:
    // 0x2f0c8c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f0c8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0c90:
    // 0x2f0c90: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2f0c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0c94:
    // 0x2f0c94: 0x8e620334  lw          $v0, 0x334($s3)
    ctx->pc = 0x2f0c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_2f0c98:
    // 0x2f0c98: 0x904301a4  lbu         $v1, 0x1A4($v0)
    ctx->pc = 0x2f0c98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 420)));
label_2f0c9c:
    // 0x2f0c9c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_2f0ca0:
    if (ctx->pc == 0x2F0CA0u) {
        ctx->pc = 0x2F0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C9Cu;
        // 0x2f0ca0: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0CA4u;
        goto label_2f0ca4;
    }
    ctx->pc = 0x2F0C9Cu;
    {
        const bool branch_taken_0x2f0c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C9Cu;
        // 0x2f0ca0: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c9c) {
            ctx->pc = 0x2F0CD4u;
            goto label_2f0cd4;
        }
    }
    ctx->pc = 0x2F0CA4u;
label_2f0ca4:
    // 0x2f0ca4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2f0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f0ca8:
    // 0x2f0ca8: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2f0ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0cac:
    // 0x2f0cac: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2f0cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0cb0:
    // 0x2f0cb0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2f0cb0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2f0cb4:
    // 0x2f0cb4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f0cb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2f0cb8:
    // 0x2f0cb8: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2f0cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_2f0cbc:
    // 0x2f0cbc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2f0cbcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2f0cc0:
    // 0x2f0cc0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x2f0cc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2f0cc4:
    // 0x2f0cc4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2f0cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2f0cc8:
    // 0x2f0cc8: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x2f0cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2f0ccc:
    // 0x2f0ccc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f0cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0cd0:
    // 0x2f0cd0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2f0cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0cd4:
    // 0x2f0cd4: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x2f0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f0cd8:
    // 0x2f0cd8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2f0cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f0cdc:
    // 0x2f0cdc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f0cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f0ce0:
    // 0x2f0ce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f0ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f0ce4:
    // 0x2f0ce4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2f0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2f0ce8:
    // 0x2f0ce8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2f0ce8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2f0cec:
    // 0x2f0cec: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f0cecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0cf0:
    // 0x2f0cf0: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2f0cf0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2f0cf4:
    // 0x2f0cf4: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2f0cf4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2f0cf8:
    // 0x2f0cf8: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2f0cf8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2f0cfc:
    // 0x2f0cfc: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2f0cfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2f0d00:
    // 0x2f0d00: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2f0d00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2f0d04:
    // 0x2f0d04: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2f0d04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2f0d08:
    // 0x2f0d08: 0xfba50060  sqc2        $vf5, 0x60($sp)
    ctx->pc = 0x2f0d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[5]));
label_2f0d0c:
    // 0x2f0d0c: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x2f0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f0d10:
    // 0x2f0d10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f0d14:
    // 0x2f0d14: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f0d18:
    // 0x2f0d18: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f0d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f0d1c:
    // 0x2f0d1c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f0d1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0d20:
    // 0x2f0d20: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f0d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0d24:
    // 0x2f0d24: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2f0d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0d28:
    // 0x2f0d28: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x2f0d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f0d2c:
    // 0x2f0d2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f0d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f0d30:
    // 0x2f0d30: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x2f0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2f0d34:
    // 0x2f0d34: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f0d34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0d38:
    // 0x2f0d38: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f0d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0d3c:
    // 0x2f0d3c: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x2f0d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_2f0d40:
    // 0x2f0d40: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f0d40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f0d44:
    // 0x2f0d44: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2f0d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0d48:
    // 0x2f0d48: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x2f0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2f0d4c:
    // 0x2f0d4c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f0d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0d50:
    // 0x2f0d50: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f0d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0d54:
    // 0x2f0d54: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2f0d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2f0d58:
    // 0x2f0d58: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f0d58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0d5c:
    // 0x2f0d5c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f0d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0d60:
    // 0x2f0d60: 0x8e620334  lw          $v0, 0x334($s3)
    ctx->pc = 0x2f0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_2f0d64:
    // 0x2f0d64: 0x904201a4  lbu         $v0, 0x1A4($v0)
    ctx->pc = 0x2f0d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 420)));
label_2f0d68:
    // 0x2f0d68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2f0d6c:
    if (ctx->pc == 0x2F0D6Cu) {
        ctx->pc = 0x2F0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D68u;
        // 0x2f0d6c: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0D70u;
        goto label_2f0d70;
    }
    ctx->pc = 0x2F0D68u;
    {
        const bool branch_taken_0x2f0d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D68u;
        // 0x2f0d6c: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d68) {
            ctx->pc = 0x2F0D78u;
            goto label_2f0d78;
        }
    }
    ctx->pc = 0x2F0D70u;
label_2f0d70:
    // 0x2f0d70: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_2f0d74:
    if (ctx->pc == 0x2F0D74u) {
        ctx->pc = 0x2F0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D70u;
        // 0x2f0d74: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0D78u;
        goto label_2f0d78;
    }
    ctx->pc = 0x2F0D70u;
    {
        const bool branch_taken_0x2f0d70 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D70u;
        // 0x2f0d74: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d70) {
            ctx->pc = 0x2F0D88u;
            goto label_2f0d88;
        }
    }
    ctx->pc = 0x2F0D78u;
label_2f0d78:
    // 0x2f0d78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f0d7c:
    if (ctx->pc == 0x2F0D7Cu) {
        ctx->pc = 0x2F0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D78u;
        // 0x2f0d7c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0D80u;
        goto label_2f0d80;
    }
    ctx->pc = 0x2F0D78u;
    {
        const bool branch_taken_0x2f0d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D78u;
        // 0x2f0d7c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d78) {
            ctx->pc = 0x2F0D9Cu;
            goto label_2f0d9c;
        }
    }
    ctx->pc = 0x2F0D80u;
label_2f0d80:
    // 0x2f0d80: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_2f0d84:
    if (ctx->pc == 0x2F0D84u) {
        ctx->pc = 0x2F0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D80u;
        // 0x2f0d84: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0D88u;
        goto label_2f0d88;
    }
    ctx->pc = 0x2F0D80u;
    {
        const bool branch_taken_0x2f0d80 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D80u;
        // 0x2f0d84: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d80) {
            ctx->pc = 0x2F0DA0u;
            goto label_2f0da0;
        }
    }
    ctx->pc = 0x2F0D88u;
label_2f0d88:
    // 0x2f0d88: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2f0d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_2f0d8c:
    // 0x2f0d8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f0d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f0d90:
    // 0x2f0d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0d94:
    // 0x2f0d94: 0xc0b15e8  jal         func_2C57A0
label_2f0d98:
    if (ctx->pc == 0x2F0D98u) {
        ctx->pc = 0x2F0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D94u;
        // 0x2f0d98: 0x26255b40  addiu       $a1, $s1, 0x5B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 23360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0D9Cu;
        goto label_2f0d9c;
    }
    ctx->pc = 0x2F0D94u;
    SET_GPR_U32(ctx, 31, 0x2F0D9Cu);
    ctx->pc = 0x2F0D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D94u;
    // 0x2f0d98: 0x26255b40  addiu       $a1, $s1, 0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 23360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x2F0D94u, 0x2F0D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D9Cu;
label_2f0d9c:
    // 0x2f0d9c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2f0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f0da0:
    // 0x2f0da0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2f0da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2f0da4:
    // 0x2f0da4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f0da4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0da8:
    // 0x2f0da8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f0da8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f0dac:
    // 0x2f0dac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f0dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f0db0:
    // 0x2f0db0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f0db0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f0db4:
    // 0x2f0db4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f0db4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f0db8:
    // 0x2f0db8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f0db8u;
    // VWAITQ (Q already resolved in this runtime)
label_2f0dbc:
    // 0x2f0dbc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f0dbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0dc0:
    // 0x2f0dc0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f0dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0dc4:
    // 0x2f0dc4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f0dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f0dc8:
    // 0x2f0dc8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f0dc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f0dcc:
    // 0x2f0dcc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f0dccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f0dd0:
    // 0x2f0dd0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f0dd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f0dd4:
    // 0x2f0dd4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f0dd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f0dd8:
    // 0x2f0dd8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f0dd8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f0ddc:
    // 0x2f0ddc: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f0ddcu;
    // VWAITQ (Q already resolved in this runtime)
label_2f0de0:
    // 0x2f0de0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f0de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0de4:
    // 0x2f0de4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f0de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0de8:
    // 0x2f0de8: 0x26225b40  addiu       $v0, $s1, 0x5B40
    ctx->pc = 0x2f0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 23360));
label_2f0dec:
    // 0x2f0dec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f0decu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0df0:
    // 0x2f0df0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2f0df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0df4:
    // 0x2f0df4: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x2f0df4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2f0df8:
    // 0x2f0df8: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2f0df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f0dfc:
    // 0x2f0dfc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f0dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0e00:
    // 0x2f0e00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f0e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2f0e04:
    // 0x2f0e04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f0e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0e08:
    // 0x2f0e08: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2f0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2f0e0c:
    // 0x2f0e0c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2f0e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_2f0e10:
    // 0x2f0e10: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x2f0e10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2f0e14:
    // 0x2f0e14: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f0e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2f0e18:
    // 0x2f0e18: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2f0e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_2f0e1c:
    // 0x2f0e1c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2f0e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_2f0e20:
    // 0x2f0e20: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2f0e20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f0e24:
    // 0x2f0e24: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f0e24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0e28:
    // 0x2f0e28: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f0e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0e2c:
    // 0x2f0e2c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2f0e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0e30:
    // 0x2f0e30: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2f0e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0e34:
    // 0x2f0e34: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x2f0e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2f0e38:
    // 0x2f0e38: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x2f0e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0e3c:
    // 0x2f0e3c: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x2f0e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0e40:
    // 0x2f0e40: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2f0e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0e44:
    // 0x2f0e44: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2f0e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_2f0e48:
    // 0x2f0e48: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2f0e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2f0e4c:
    // 0x2f0e4c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2f0e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2f0e50:
    // 0x2f0e50: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2f0e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2f0e54:
    // 0x2f0e54: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2f0e54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2f0e58:
    // 0x2f0e58: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x2f0e58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_2f0e5c:
    // 0x2f0e5c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x2f0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_2f0e60:
    // 0x2f0e60: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x2f0e60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2f0e64:
    // 0x2f0e64: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x2f0e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_2f0e68:
    // 0x2f0e68: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x2f0e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_2f0e6c:
    // 0x2f0e6c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2f0e6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f0e70:
    // 0x2f0e70: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x2f0e70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2f0e74:
    // 0x2f0e74: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f0e74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0e78:
    // 0x2f0e78: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2f0e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0e7c:
    // 0x2f0e7c: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x2f0e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0e80:
    // 0x2f0e80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2f0e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f0e84:
    // 0x2f0e84: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f0e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0e88:
    // 0x2f0e88: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2f0e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0e8c:
    // 0x2f0e8c: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x2f0e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0e90:
    // 0x2f0e90: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x2f0e90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2f0e94:
    // 0x2f0e94: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2f0e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2f0e98:
    // 0x2f0e98: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2f0e98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2f0e9c:
    // 0x2f0e9c: 0xc0f6a96  jal         func_3DAA58
label_2f0ea0:
    if (ctx->pc == 0x2F0EA0u) {
        ctx->pc = 0x2F0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E9Cu;
        // 0x2f0ea0: 0xe7a2008c  swc1        $f2, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0EA4u;
        goto label_2f0ea4;
    }
    ctx->pc = 0x2F0E9Cu;
    SET_GPR_U32(ctx, 31, 0x2F0EA4u);
    ctx->pc = 0x2F0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0E9Cu;
    // 0x2f0ea0: 0xe7a2008c  swc1        $f2, 0x8C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F0E9Cu, 0x2F0EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0EA4u;
label_2f0ea4:
    // 0x2f0ea4: 0xc0f6a96  jal         func_3DAA58
label_2f0ea8:
    if (ctx->pc == 0x2F0EA8u) {
        ctx->pc = 0x2F0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EA4u;
        // 0x2f0ea8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0EACu;
        goto label_2f0eac;
    }
    ctx->pc = 0x2F0EA4u;
    SET_GPR_U32(ctx, 31, 0x2F0EACu);
    ctx->pc = 0x2F0EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0EA4u;
    // 0x2f0ea8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F0EA4u, 0x2F0EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0EACu;
label_2f0eac:
    // 0x2f0eac: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x2f0eacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f0eb0:
    // 0x2f0eb0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2f0eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f0eb4:
    // 0x2f0eb4: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x2f0eb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f0eb8:
    // 0x2f0eb8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2f0eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2f0ebc:
    // 0x2f0ebc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2f0ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2f0ec0:
    // 0x2f0ec0: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x2f0ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_2f0ec4:
    // 0x2f0ec4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f0ec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0ec8:
    // 0x2f0ec8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2f0ec8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f0ecc:
    // 0x2f0ecc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f0eccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0ed0:
    // 0x2f0ed0: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2f0ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0ed4:
    // 0x2f0ed4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2f0ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0ed8:
    // 0x2f0ed8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2f0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f0edc:
    // 0x2f0edc: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x2f0edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f0ee0:
    // 0x2f0ee0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f0ee0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f0ee4:
    // 0x2f0ee4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f0ee4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f0ee8:
    // 0x2f0ee8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2f0ee8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f0eec:
    // 0x2f0eec: 0x0  nop
    ctx->pc = 0x2f0eecu;
    // NOP
label_2f0ef0:
    // 0x2f0ef0: 0x0  nop
    ctx->pc = 0x2f0ef0u;
    // NOP
label_2f0ef4:
    // 0x2f0ef4: 0x46010084  c1          0x10084
    ctx->pc = 0x2f0ef4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_2f0ef8:
    // 0x2f0ef8: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x2f0ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2f0efc:
    // 0x2f0efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f0efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0f00:
    // 0x2f0f00: 0x0  nop
    ctx->pc = 0x2f0f00u;
    // NOP
label_2f0f04:
    // 0x2f0f04: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f0f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f0f08:
    // 0x2f0f08: 0x0  nop
    ctx->pc = 0x2f0f08u;
    // NOP
label_2f0f0c:
    // 0x2f0f0c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2f0f10:
    if (ctx->pc == 0x2F0F10u) {
        ctx->pc = 0x2F0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F0Cu;
        // 0x2f0f10: 0xe7a200e0  swc1        $f2, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F14u;
        goto label_2f0f14;
    }
    ctx->pc = 0x2F0F0Cu;
    {
        const bool branch_taken_0x2f0f0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F0Cu;
        // 0x2f0f10: 0xe7a200e0  swc1        $f2, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f0c) {
            ctx->pc = 0x2F0F38u;
            goto label_2f0f38;
        }
    }
    ctx->pc = 0x2F0F14u;
label_2f0f14:
    // 0x2f0f14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f0f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f0f18:
    // 0x2f0f18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f0f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f0f1c:
    // 0x2f0f1c: 0x0  nop
    ctx->pc = 0x2f0f1cu;
    // NOP
label_2f0f20:
    // 0x2f0f20: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f0f20u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2f0f24:
    // 0x2f0f24: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2f0f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2f0f28:
    // 0x2f0f28: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f0f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f0f2c:
    // 0x2f0f2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2f0f2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2f0f30:
    // 0x2f0f30: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2f0f30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0f34:
    // 0x2f0f34: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2f0f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0f38:
    // 0x2f0f38: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x2f0f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2f0f3c:
    // 0x2f0f3c: 0xc07a8b2  jal         func_1EA2C8
label_2f0f40:
    if (ctx->pc == 0x2F0F40u) {
        ctx->pc = 0x2F0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F3Cu;
        // 0x2f0f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F44u;
        goto label_2f0f44;
    }
    ctx->pc = 0x2F0F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F0F44u);
    ctx->pc = 0x2F0F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F3Cu;
    // 0x2f0f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x2F0F3Cu, 0x2F0F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F44u;
label_2f0f44:
    // 0x2f0f44: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2f0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_2f0f48:
    // 0x2f0f48: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x2f0f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
label_2f0f4c:
    // 0x2f0f4c: 0xc4601a9c  lwc1        $f0, 0x1A9C($v1)
    ctx->pc = 0x2f0f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0f50:
    // 0x2f0f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f0f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f54:
    // 0x2f0f54: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2f0f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f58:
    // 0x2f0f58: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x2f0f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
label_2f0f5c:
    // 0x2f0f5c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2f0f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2f0f60:
    // 0x2f0f60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f0f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0f64:
    // 0x2f0f64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f0f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0f68:
    // 0x2f0f68: 0x27a90158  addiu       $t1, $sp, 0x158
    ctx->pc = 0x2f0f68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_2f0f6c:
    // 0x2f0f6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f0f6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f70:
    // 0x2f0f70: 0xc077940  jal         func_1DE500
label_2f0f74:
    if (ctx->pc == 0x2F0F74u) {
        ctx->pc = 0x2F0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F70u;
        // 0x2f0f74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F78u;
        goto label_2f0f78;
    }
    ctx->pc = 0x2F0F70u;
    SET_GPR_U32(ctx, 31, 0x2F0F78u);
    ctx->pc = 0x2F0F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0F70u;
    // 0x2f0f74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x2F0F70u, 0x2F0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0F78u;
label_2f0f78:
    // 0x2f0f78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2f0f7c:
    if (ctx->pc == 0x2F0F7Cu) {
        ctx->pc = 0x2F0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F78u;
        // 0x2f0f7c: 0xc7a000f4  lwc1        $f0, 0xF4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F80u;
        goto label_2f0f80;
    }
    ctx->pc = 0x2F0F78u;
    {
        const bool branch_taken_0x2f0f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F78u;
        // 0x2f0f7c: 0xc7a000f4  lwc1        $f0, 0xF4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f78) {
            ctx->pc = 0x2F0FB8u;
            goto label_2f0fb8;
        }
    }
    ctx->pc = 0x2F0F80u;
label_2f0f80:
    // 0x2f0f80: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x2f0f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_2f0f84:
    // 0x2f0f84: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2f0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_2f0f88:
    // 0x2f0f88: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x2f0f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_2f0f8c:
    // 0x2f0f8c: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_2f0f90:
    if (ctx->pc == 0x2F0F90u) {
        ctx->pc = 0x2F0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F8Cu;
        // 0x2f0f90: 0x8fa20160  lw          $v0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0F94u;
        goto label_2f0f94;
    }
    ctx->pc = 0x2F0F8Cu;
    {
        const bool branch_taken_0x2f0f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0F8Cu;
        // 0x2f0f90: 0x8fa20160  lw          $v0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f8c) {
            ctx->pc = 0x2F10A8u;
            goto label_2f10a8;
        }
    }
    ctx->pc = 0x2F0F94u;
label_2f0f94:
    // 0x2f0f94: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x2f0f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_2f0f98:
    // 0x2f0f98: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2f0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2f0f9c:
    // 0x2f0f9c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2f0f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2f0fa0:
    // 0x2f0fa0: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2f0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_2f0fa4:
    // 0x2f0fa4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f0fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f0fa8:
    // 0x2f0fa8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2f0fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_2f0fac:
    // 0x2f0fac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f0facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f0fb0:
    // 0x2f0fb0: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2f0fb4:
    if (ctx->pc == 0x2F0FB4u) {
        ctx->pc = 0x2F0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FB0u;
        // 0x2f0fb4: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0FB8u;
        goto label_2f0fb8;
    }
    ctx->pc = 0x2F0FB0u;
    {
        const bool branch_taken_0x2f0fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FB0u;
        // 0x2f0fb4: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fb0) {
            ctx->pc = 0x2F10A4u;
            goto label_2f10a4;
        }
    }
    ctx->pc = 0x2F0FB8u;
label_2f0fb8:
    // 0x2f0fb8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2f0fbc:
    if (ctx->pc == 0x2F0FBCu) {
        ctx->pc = 0x2F0FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FB8u;
        // 0x2f0fbc: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0FC0u;
        goto label_2f0fc0;
    }
    ctx->pc = 0x2F0FB8u;
    {
        const bool branch_taken_0x2f0fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0FB8u;
        // 0x2f0fbc: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fb8) {
            ctx->pc = 0x2F10A4u;
            goto label_2f10a4;
        }
    }
    ctx->pc = 0x2F0FC0u;
label_2f0fc0:
    // 0x2f0fc0: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x2f0fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f0fc4:
    // 0x2f0fc4: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x2f0fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f0fc8:
    // 0x2f0fc8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f0fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0fcc:
    // 0x2f0fcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f0fd0:
    // 0x2f0fd0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f0fd4:
    // 0x2f0fd4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f0fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f0fd8:
    // 0x2f0fd8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f0fd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f0fdc:
    // 0x2f0fdc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f0fdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0fe0:
    // 0x2f0fe0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f0fe0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f0fe4:
    // 0x2f0fe4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2f0fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f0fe8:
    // 0x2f0fe8: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x2f0fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f0fec:
    // 0x2f0fec: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2f0fecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f0ff0:
    // 0x2f0ff0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2f0ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f0ff4:
    // 0x2f0ff4: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2f0ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f0ff8:
    // 0x2f0ff8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f0ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f0ffc:
    // 0x2f0ffc: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x2f0ffcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2f1000:
    // 0x2f1000: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2f1000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2f1004:
    // 0x2f1004: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f1004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_2f1008:
    // 0x2f1008: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2f1008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_2f100c:
    // 0x2f100c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f100cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f1010:
    // 0x2f1010: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f1010u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f1014:
    // 0x2f1014: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f1014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f1018:
    // 0x2f1018: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f1018u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f101c:
    // 0x2f101c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f101cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f1020:
    // 0x2f1020: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f1020u;
    // VWAITQ (Q already resolved in this runtime)
label_2f1024:
    // 0x2f1024: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f1024u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f1028:
    // 0x2f1028: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2f1028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f102c:
    // 0x2f102c: 0xc0f6a96  jal         func_3DAA58
label_2f1030:
    if (ctx->pc == 0x2F1030u) {
        ctx->pc = 0x2F1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F102Cu;
        // 0x2f1030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1034u;
        goto label_2f1034;
    }
    ctx->pc = 0x2F102Cu;
    SET_GPR_U32(ctx, 31, 0x2F1034u);
    ctx->pc = 0x2F1030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F102Cu;
    // 0x2f1030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2F102Cu, 0x2F1034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1034u;
label_2f1034:
    // 0x2f1034: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f1034u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f1038:
    // 0x2f1038: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x2f1038u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2f103c:
    // 0x2f103c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2f103cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2f1040:
    // 0x2f1040: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2f1040u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f1044:
    // 0x2f1044: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2f1044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1048:
    // 0x2f1048: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2f1048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2f104c:
    // 0x2f104c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2f104cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1050:
    // 0x2f1050: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x2f1050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f1054:
    // 0x2f1054: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2f1054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2f1058:
    // 0x2f1058: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2f1058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f105c:
    // 0x2f105c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2f105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1060:
    // 0x2f1060: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2f1060u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2f1064:
    // 0x2f1064: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f1064u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2f1068:
    // 0x2f1068: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2f1068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_2f106c:
    // 0x2f106c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2f106cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2f1070:
    // 0x2f1070: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x2f1070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2f1074:
    // 0x2f1074: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2f1074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2f1078:
    // 0x2f1078: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x2f1078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2f107c:
    // 0x2f107c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f107cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1080:
    // 0x2f1080: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f1080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1084:
    // 0x2f1084: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2f1084u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2f1088:
    // 0x2f1088: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f1088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f108c:
    // 0x2f108c: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f108cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1090:
    // 0x2f1090: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f1090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1094:
    // 0x2f1094: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f1094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f1098:
    // 0x2f1098: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f1098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f109c:
    // 0x2f109c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f109cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f10a0:
    // 0x2f10a0: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2f10a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f10a4:
    // 0x2f10a4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2f10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2f10a8:
    // 0x2f10a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2f10ac:
    if (ctx->pc == 0x2F10ACu) {
        ctx->pc = 0x2F10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10A8u;
        // 0x2f10ac: 0xae5311e4  sw          $s3, 0x11E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4580), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F10B0u;
        goto label_2f10b0;
    }
    ctx->pc = 0x2F10A8u;
    {
        const bool branch_taken_0x2f10a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f10a8) {
            ctx->pc = 0x2F10ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F10A8u;
            // 0x2f10ac: 0xae5311e4  sw          $s3, 0x11E4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4580), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F10C8u;
            goto label_2f10c8;
        }
    }
    ctx->pc = 0x2F10B0u;
label_2f10b0:
    // 0x2f10b0: 0x924211b9  lbu         $v0, 0x11B9($s2)
    ctx->pc = 0x2f10b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4537)));
label_2f10b4:
    // 0x2f10b4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2f10b8:
    if (ctx->pc == 0x2F10B8u) {
        ctx->pc = 0x2F10B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10B4u;
        // 0x2f10b8: 0xa24011b9  sb          $zero, 0x11B9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4537), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F10BCu;
        goto label_2f10bc;
    }
    ctx->pc = 0x2F10B4u;
    {
        const bool branch_taken_0x2f10b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f10b4) {
            ctx->pc = 0x2F10B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F10B4u;
            // 0x2f10b8: 0xa24011b9  sb          $zero, 0x11B9($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 4537), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F10C4u;
            goto label_2f10c4;
        }
    }
    ctx->pc = 0x2F10BCu;
label_2f10bc:
    // 0x2f10bc: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_2f10c0:
    if (ctx->pc == 0x2F10C0u) {
        ctx->pc = 0x2F10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10BCu;
        // 0x2f10c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F10C4u;
        goto label_2f10c4;
    }
    ctx->pc = 0x2F10BCu;
    {
        const bool branch_taken_0x2f10bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10BCu;
        // 0x2f10c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10bc) {
            ctx->pc = 0x2F1360u;
            goto label_2f1360;
        }
    }
    ctx->pc = 0x2F10C4u;
label_2f10c4:
    // 0x2f10c4: 0xae5311e4  sw          $s3, 0x11E4($s2)
    ctx->pc = 0x2f10c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4580), GPR_U32(ctx, 19));
label_2f10c8:
    // 0x2f10c8: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2f10c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f10cc:
    // 0x2f10cc: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x2f10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_2f10d0:
    // 0x2f10d0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f10d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2f10d4:
    // 0x2f10d4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2f10d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2f10d8:
    // 0x2f10d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2f10dc:
    if (ctx->pc == 0x2F10DCu) {
        ctx->pc = 0x2F10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10D8u;
        // 0x2f10dc: 0x8c90014c  lw          $s0, 0x14C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F10E0u;
        goto label_2f10e0;
    }
    ctx->pc = 0x2F10D8u;
    {
        const bool branch_taken_0x2f10d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10D8u;
        // 0x2f10dc: 0x8c90014c  lw          $s0, 0x14C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10d8) {
            ctx->pc = 0x2F10F8u;
            goto label_2f10f8;
        }
    }
    ctx->pc = 0x2F10E0u;
label_2f10e0:
    // 0x2f10e0: 0x8e620334  lw          $v0, 0x334($s3)
    ctx->pc = 0x2f10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_2f10e4:
    // 0x2f10e4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2f10e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f10e8:
    // 0x2f10e8: 0xc069be4  jal         func_1A6F90
label_2f10ec:
    if (ctx->pc == 0x2F10ECu) {
        ctx->pc = 0x2F10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10E8u;
        // 0x2f10ec: 0x904501a4  lbu         $a1, 0x1A4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F10F0u;
        goto label_2f10f0;
    }
    ctx->pc = 0x2F10E8u;
    SET_GPR_U32(ctx, 31, 0x2F10F0u);
    ctx->pc = 0x2F10ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F10E8u;
    // 0x2f10ec: 0x904501a4  lbu         $a1, 0x1A4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6F90u, 0x2F10E8u, 0x2F10F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F10F0u;
label_2f10f0:
    // 0x2f10f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2f10f4:
    if (ctx->pc == 0x2F10F4u) {
        ctx->pc = 0x2F10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10F0u;
        // 0x2f10f4: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F10F8u;
        goto label_2f10f8;
    }
    ctx->pc = 0x2F10F0u;
    {
        const bool branch_taken_0x2f10f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F10F0u;
        // 0x2f10f4: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f10f0) {
            ctx->pc = 0x2F1104u;
            goto label_2f1104;
        }
    }
    ctx->pc = 0x2F10F8u;
label_2f10f8:
    // 0x2f10f8: 0xc069bdc  jal         func_1A6F70
label_2f10fc:
    if (ctx->pc == 0x2F10FCu) {
        ctx->pc = 0x2F1100u;
        goto label_2f1100;
    }
    ctx->pc = 0x2F10F8u;
    SET_GPR_U32(ctx, 31, 0x2F1100u);
    ctx->pc = 0x1A6F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6F70u, 0x2F10F8u, 0x2F1100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1100u;
label_2f1100:
    // 0x2f1100: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2f1100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f1104:
    // 0x2f1104: 0xc06a23e  jal         func_1A88F8
label_2f1108:
    if (ctx->pc == 0x2F1108u) {
        ctx->pc = 0x2F1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1104u;
        // 0x2f1108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F110Cu;
        goto label_2f110c;
    }
    ctx->pc = 0x2F1104u;
    SET_GPR_U32(ctx, 31, 0x2F110Cu);
    ctx->pc = 0x2F1108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1104u;
    // 0x2f1108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x2F1104u, 0x2F110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F110Cu;
label_2f110c:
    // 0x2f110c: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2f110cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_2f1110:
    // 0x2f1110: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2f1110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2f1114:
    // 0x2f1114: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2f1114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2f1118:
    // 0x2f1118: 0x5443008d  bnel        $v0, $v1, . + 4 + (0x8D << 2)
label_2f111c:
    if (ctx->pc == 0x2F111Cu) {
        ctx->pc = 0x2F111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1118u;
        // 0x2f111c: 0xae4011e4  sw          $zero, 0x11E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1120u;
        goto label_2f1120;
    }
    ctx->pc = 0x2F1118u;
    {
        const bool branch_taken_0x2f1118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f1118) {
            ctx->pc = 0x2F111Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1118u;
            // 0x2f111c: 0xae4011e4  sw          $zero, 0x11E4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4580), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1350u;
            goto label_2f1350;
        }
    }
    ctx->pc = 0x2F1120u;
label_2f1120:
    // 0x2f1120: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x2f1120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2f1124:
    // 0x2f1124: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f1124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1128:
    // 0x2f1128: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2f1128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f112c:
    // 0x2f112c: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x2f112cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2f1130:
    // 0x2f1130: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2f1130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2f1134:
    // 0x2f1134: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2f1134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2f1138:
    // 0x2f1138: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f1138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f113c:
    // 0x2f113c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f113cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2f1140:
    // 0x2f1140: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f1140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1144:
    // 0x2f1144: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2f1144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2f1148:
    // 0x2f1148: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f1148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f114c:
    // 0x2f114c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f114cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_2f1150:
    // 0x2f1150: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2f1150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1154:
    // 0x2f1154: 0xc0763f2  jal         func_1D8FC8
label_2f1158:
    if (ctx->pc == 0x2F1158u) {
        ctx->pc = 0x2F1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1154u;
        // 0x2f1158: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F115Cu;
        goto label_2f115c;
    }
    ctx->pc = 0x2F1154u;
    SET_GPR_U32(ctx, 31, 0x2F115Cu);
    ctx->pc = 0x2F1158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1154u;
    // 0x2f1158: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x2F1154u, 0x2F115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F115Cu;
label_2f115c:
    // 0x2f115c: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2f115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f1160:
    // 0x2f1160: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2f1160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f1164:
    // 0x2f1164: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x2f1164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2f1168:
    // 0x2f1168: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f1168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f116c:
    // 0x2f116c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2f116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2f1170:
    // 0x2f1170: 0x12800030  beqz        $s4, . + 4 + (0x30 << 2)
label_2f1174:
    if (ctx->pc == 0x2F1174u) {
        ctx->pc = 0x2F1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1170u;
        // 0x2f1174: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1178u;
        goto label_2f1178;
    }
    ctx->pc = 0x2F1170u;
    {
        const bool branch_taken_0x2f1170 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1170u;
        // 0x2f1174: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1170) {
            ctx->pc = 0x2F1234u;
            goto label_2f1234;
        }
    }
    ctx->pc = 0x2F1178u;
label_2f1178:
    // 0x2f1178: 0x57c00007  bnel        $fp, $zero, . + 4 + (0x7 << 2)
label_2f117c:
    if (ctx->pc == 0x2F117Cu) {
        ctx->pc = 0x2F117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1178u;
        // 0x2f117c: 0x8e840104  lw          $a0, 0x104($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1180u;
        goto label_2f1180;
    }
    ctx->pc = 0x2F1178u;
    {
        const bool branch_taken_0x2f1178 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1178) {
            ctx->pc = 0x2F117Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1178u;
            // 0x2f117c: 0x8e840104  lw          $a0, 0x104($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1198u;
            goto label_2f1198;
        }
    }
    ctx->pc = 0x2F1180u;
label_2f1180:
    // 0x2f1180: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1184:
    // 0x2f1184: 0xc08e0fa  jal         func_2383E8
label_2f1188:
    if (ctx->pc == 0x2F1188u) {
        ctx->pc = 0x2F1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1184u;
        // 0x2f1188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F118Cu;
        goto label_2f118c;
    }
    ctx->pc = 0x2F1184u;
    SET_GPR_U32(ctx, 31, 0x2F118Cu);
    ctx->pc = 0x2F1188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1184u;
    // 0x2f1188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E8u, 0x2F1184u, 0x2F118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F118Cu;
label_2f118c:
    // 0x2f118c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_2f1190:
    if (ctx->pc == 0x2F1190u) {
        ctx->pc = 0x2F1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F118Cu;
        // 0x2f1190: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1194u;
        goto label_2f1194;
    }
    ctx->pc = 0x2F118Cu;
    {
        const bool branch_taken_0x2f118c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F118Cu;
        // 0x2f1190: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f118c) {
            ctx->pc = 0x2F1238u;
            goto label_2f1238;
        }
    }
    ctx->pc = 0x2F1194u;
label_2f1194:
    // 0x2f1194: 0x8e840104  lw          $a0, 0x104($s4)
    ctx->pc = 0x2f1194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_2f1198:
    // 0x2f1198: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2f1198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f119c:
    // 0x2f119c: 0x8e460104  lw          $a2, 0x104($s2)
    ctx->pc = 0x2f119cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f11a0:
    // 0x2f11a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f11a4:
    // 0x2f11a4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f11a8:
    // 0x2f11a8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f11a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f11ac:
    // 0x2f11ac: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f11acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f11b0:
    // 0x2f11b0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f11b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f11b4:
    // 0x2f11b4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f11b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f11b8:
    // 0x2f11b8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f11b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f11bc:
    // 0x2f11bc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2f11bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f11c0:
    // 0x2f11c0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2f11c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f11c4:
    // 0x2f11c4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2f11c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f11c8:
    // 0x2f11c8: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2f11c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f11cc:
    // 0x2f11cc: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x2f11ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f11d0:
    // 0x2f11d0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2f11d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2f11d4:
    // 0x2f11d4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2f11d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2f11d8:
    // 0x2f11d8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2f11d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2f11dc:
    // 0x2f11dc: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x2f11dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2f11e0:
    // 0x2f11e0: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2f11e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_2f11e4:
    // 0x2f11e4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f11e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f11e8:
    // 0x2f11e8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f11e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f11ec:
    // 0x2f11ec: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f11ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f11f0:
    // 0x2f11f0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2f11f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f11f4:
    // 0x2f11f4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2f11f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f11f8:
    // 0x2f11f8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2f11f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2f11fc:
    // 0x2f11fc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2f11fcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2f1200:
    // 0x2f1200: 0x4a0003bf  vwaitq
    ctx->pc = 0x2f1200u;
    // VWAITQ (Q already resolved in this runtime)
label_2f1204:
    // 0x2f1204: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2f1204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f1208:
    // 0x2f1208: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f1208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f120c:
    // 0x2f120c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2f120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f1210:
    // 0x2f1210: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f1210u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1214:
    // 0x2f1214: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2f1214u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2f1218:
    // 0x2f1218: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2f1218u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2f121c:
    // 0x2f121c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2f121cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f1220:
    // 0x2f1220: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2f1220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1224:
    // 0x2f1224: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f1224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2f1228:
    // 0x2f1228: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f1228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f122c:
    // 0x2f122c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f122cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1230:
    // 0x2f1230: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2f1230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f1234:
    // 0x2f1234: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f1234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f1238:
    // 0x2f1238: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f123c:
    // 0x2f123c: 0xc44c96ac  lwc1        $f12, -0x6954($v0)
    ctx->pc = 0x2f123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2f1240:
    // 0x2f1240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1244:
    // 0x2f1244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f1244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1248:
    // 0x2f1248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f124c:
    // 0x2f124c: 0xc08e23a  jal         func_2388E8
label_2f1250:
    if (ctx->pc == 0x2F1250u) {
        ctx->pc = 0x2F1250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F124Cu;
        // 0x2f1250: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1254u;
        goto label_2f1254;
    }
    ctx->pc = 0x2F124Cu;
    SET_GPR_U32(ctx, 31, 0x2F1254u);
    ctx->pc = 0x2F1250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F124Cu;
    // 0x2f1250: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x2F124Cu, 0x2F1254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1254u;
label_2f1254:
    // 0x2f1254: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x2f1254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_2f1258:
    // 0x2f1258: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2f125c:
    if (ctx->pc == 0x2F125Cu) {
        ctx->pc = 0x2F125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1258u;
        // 0x2f125c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1260u;
        goto label_2f1260;
    }
    ctx->pc = 0x2F1258u;
    {
        const bool branch_taken_0x2f1258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1258u;
        // 0x2f125c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1258) {
            ctx->pc = 0x2F128Cu;
            goto label_2f128c;
        }
    }
    ctx->pc = 0x2F1260u;
label_2f1260:
    // 0x2f1260: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x2f1260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_2f1264:
    // 0x2f1264: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2f1264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_2f1268:
    // 0x2f1268: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x2f1268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2f126c:
    // 0x2f126c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2f126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2f1270:
    // 0x2f1270: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2f1270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2f1274:
    // 0x2f1274: 0x40f809  jalr        $v0
label_2f1278:
    if (ctx->pc == 0x2F1278u) {
        ctx->pc = 0x2F127Cu;
        goto label_2f127c;
    }
    ctx->pc = 0x2F1274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F127Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1274u, 0x2F127Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F127Cu;
label_2f127c:
    // 0x2f127c: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x2f127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_2f1280:
    // 0x2f1280: 0xc0b7264  jal         func_2DC990
label_2f1284:
    if (ctx->pc == 0x2F1284u) {
        ctx->pc = 0x2F1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1280u;
        // 0x2f1284: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1288u;
        goto label_2f1288;
    }
    ctx->pc = 0x2F1280u;
    SET_GPR_U32(ctx, 31, 0x2F1288u);
    ctx->pc = 0x2F1284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1280u;
    // 0x2f1284: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2F1280u, 0x2F1288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1288u;
label_2f1288:
    // 0x2f1288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f128c:
    // 0x2f128c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2f128cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2f1290:
    // 0x2f1290: 0xc08fed2  jal         func_23FB48
label_2f1294:
    if (ctx->pc == 0x2F1294u) {
        ctx->pc = 0x2F1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1290u;
        // 0x2f1294: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1298u;
        goto label_2f1298;
    }
    ctx->pc = 0x2F1290u;
    SET_GPR_U32(ctx, 31, 0x2F1298u);
    ctx->pc = 0x2F1294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1290u;
    // 0x2f1294: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F1290u, 0x2F1298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1298u;
label_2f1298:
    // 0x2f1298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f129c:
    // 0x2f129c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x2f129cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2f12a0:
    // 0x2f12a0: 0xc08fed2  jal         func_23FB48
label_2f12a4:
    if (ctx->pc == 0x2F12A4u) {
        ctx->pc = 0x2F12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12A0u;
        // 0x2f12a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12A8u;
        goto label_2f12a8;
    }
    ctx->pc = 0x2F12A0u;
    SET_GPR_U32(ctx, 31, 0x2F12A8u);
    ctx->pc = 0x2F12A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12A0u;
    // 0x2f12a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F12A0u, 0x2F12A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12A8u;
label_2f12a8:
    // 0x2f12a8: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x2f12a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_2f12ac:
    // 0x2f12ac: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2f12acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_2f12b0:
    // 0x2f12b0: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x2f12b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
label_2f12b4:
    // 0x2f12b4: 0x8e6300bc  lw          $v1, 0xBC($s3)
    ctx->pc = 0x2f12b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_2f12b8:
    // 0x2f12b8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2f12b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_2f12bc:
    // 0x2f12bc: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x2f12bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_2f12c0:
    // 0x2f12c0: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
label_2f12c4:
    if (ctx->pc == 0x2F12C4u) {
        ctx->pc = 0x2F12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12C0u;
        // 0x2f12c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12C8u;
        goto label_2f12c8;
    }
    ctx->pc = 0x2F12C0u;
    {
        const bool branch_taken_0x2f12c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12C0u;
        // 0x2f12c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12c0) {
            ctx->pc = 0x2F1360u;
            goto label_2f1360;
        }
    }
    ctx->pc = 0x2F12C8u;
label_2f12c8:
    // 0x2f12c8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2f12c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2f12cc:
    // 0x2f12cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f12ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f12d0:
    // 0x2f12d0: 0xc06a0ca  jal         func_1A8328
label_2f12d4:
    if (ctx->pc == 0x2F12D4u) {
        ctx->pc = 0x2F12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12D0u;
        // 0x2f12d4: 0x8e640334  lw          $a0, 0x334($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12D8u;
        goto label_2f12d8;
    }
    ctx->pc = 0x2F12D0u;
    SET_GPR_U32(ctx, 31, 0x2F12D8u);
    ctx->pc = 0x2F12D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12D0u;
    // 0x2f12d4: 0x8e640334  lw          $a0, 0x334($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8328u, 0x2F12D0u, 0x2F12D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12D8u;
label_2f12d8:
    // 0x2f12d8: 0xc08e528  jal         func_2394A0
label_2f12dc:
    if (ctx->pc == 0x2F12DCu) {
        ctx->pc = 0x2F12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12D8u;
        // 0x2f12dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12E0u;
        goto label_2f12e0;
    }
    ctx->pc = 0x2F12D8u;
    SET_GPR_U32(ctx, 31, 0x2F12E0u);
    ctx->pc = 0x2F12DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12D8u;
    // 0x2f12dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x2F12D8u, 0x2F12E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12E0u;
label_2f12e0:
    // 0x2f12e0: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x2f12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_2f12e4:
    // 0x2f12e4: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x2f12e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_2f12e8:
    // 0x2f12e8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2f12e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2f12ec:
    // 0x2f12ec: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x2f12ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_2f12f0:
    // 0x2f12f0: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x2f12f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_2f12f4:
    // 0x2f12f4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2f12f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2f12f8:
    // 0x2f12f8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2f12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2f12fc:
    // 0x2f12fc: 0x40f809  jalr        $v0
label_2f1300:
    if (ctx->pc == 0x2F1300u) {
        ctx->pc = 0x2F1304u;
        goto label_2f1304;
    }
    ctx->pc = 0x2F12FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1304u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F12FCu, 0x2F1304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1304u;
label_2f1304:
    // 0x2f1304: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x2f1304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_2f1308:
    // 0x2f1308: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2f1308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2f130c:
    // 0x2f130c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2f130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2f1310:
    // 0x2f1310: 0x40f809  jalr        $v0
label_2f1314:
    if (ctx->pc == 0x2F1314u) {
        ctx->pc = 0x2F1318u;
        goto label_2f1318;
    }
    ctx->pc = 0x2F1310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F1318u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1310u, 0x2F1318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1318u;
label_2f1318:
    // 0x2f1318: 0xc6610378  lwc1        $f1, 0x378($s3)
    ctx->pc = 0x2f1318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f131c:
    // 0x2f131c: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x2f131cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_2f1320:
    // 0x2f1320: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f1320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1324:
    // 0x2f1324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f1324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1328:
    // 0x2f1328: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x2f1328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_2f132c:
    // 0x2f132c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f132cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f1330:
    // 0x2f1330: 0xae630430  sw          $v1, 0x430($s3)
    ctx->pc = 0x2f1330u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1072), GPR_U32(ctx, 3));
label_2f1334:
    // 0x2f1334: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2f1334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2f1338:
    // 0x2f1338: 0x4500ff60  bc1f        . + 4 + (-0xA0 << 2)
label_2f133c:
    if (ctx->pc == 0x2F133Cu) {
        ctx->pc = 0x2F133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1338u;
        // 0x2f133c: 0xae6200c0  sw          $v0, 0xC0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1340u;
        goto label_2f1340;
    }
    ctx->pc = 0x2F1338u;
    {
        const bool branch_taken_0x2f1338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1338u;
        // 0x2f133c: 0xae6200c0  sw          $v0, 0xC0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1338) {
            ctx->pc = 0x2F10BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f10bc;
        }
    }
    ctx->pc = 0x2F1340u;
label_2f1340:
    // 0x2f1340: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2f1340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_2f1344:
    // 0x2f1344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f1344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1348:
    // 0x2f1348: 0x1000ff5c  b           . + 4 + (-0xA4 << 2)
label_2f134c:
    if (ctx->pc == 0x2F134Cu) {
        ctx->pc = 0x2F134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1348u;
        // 0x2f134c: 0xe6600378  swc1        $f0, 0x378($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 888), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1350u;
        goto label_2f1350;
    }
    ctx->pc = 0x2F1348u;
    {
        const bool branch_taken_0x2f1348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1348u;
        // 0x2f134c: 0xe6600378  swc1        $f0, 0x378($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 888), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1348) {
            ctx->pc = 0x2F10BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f10bc;
        }
    }
    ctx->pc = 0x2F1350u;
label_2f1350:
    // 0x2f1350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1354:
    // 0x2f1354: 0xc069712  jal         func_1A5C48
label_2f1358:
    if (ctx->pc == 0x2F1358u) {
        ctx->pc = 0x2F1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1354u;
        // 0x2f1358: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F135Cu;
        goto label_2f135c;
    }
    ctx->pc = 0x2F1354u;
    SET_GPR_U32(ctx, 31, 0x2F135Cu);
    ctx->pc = 0x2F1358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1354u;
    // 0x2f1358: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2F1354u, 0x2F135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F135Cu;
label_2f135c:
    // 0x2f135c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f135cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1360:
    // 0x2f1360: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x2f1360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_2f1364:
    // 0x2f1364: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x2f1364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
label_2f1368:
    // 0x2f1368: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x2f1368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_2f136c:
    // 0x2f136c: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x2f136cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
label_2f1370:
    // 0x2f1370: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x2f1370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_2f1374:
    // 0x2f1374: 0xdfb50198  ld          $s5, 0x198($sp)
    ctx->pc = 0x2f1374u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 408)));
label_2f1378:
    // 0x2f1378: 0xdfb601a0  ld          $s6, 0x1A0($sp)
    ctx->pc = 0x2f1378u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_2f137c:
    // 0x2f137c: 0xdfb701a8  ld          $s7, 0x1A8($sp)
    ctx->pc = 0x2f137cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 424)));
label_2f1380:
    // 0x2f1380: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x2f1380u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_2f1384:
    // 0x2f1384: 0xdfbf01b8  ld          $ra, 0x1B8($sp)
    ctx->pc = 0x2f1384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 440)));
label_2f1388:
    // 0x2f1388: 0xc7b701d8  lwc1        $f23, 0x1D8($sp)
    ctx->pc = 0x2f1388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2f138c:
    // 0x2f138c: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x2f138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2f1390:
    // 0x2f1390: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x2f1390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f1394:
    // 0x2f1394: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x2f1394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f1398:
    // 0x2f1398: 0x3e00008  jr          $ra
label_2f139c:
    if (ctx->pc == 0x2F139Cu) {
        ctx->pc = 0x2F139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1398u;
        // 0x2f139c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F13A0u;
        goto label_fallthrough_0x2f1398;
    }
    ctx->pc = 0x2F1398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1398u;
        // 0x2f139c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f1398:
    ctx->pc = 0x2F13A0u;
}
