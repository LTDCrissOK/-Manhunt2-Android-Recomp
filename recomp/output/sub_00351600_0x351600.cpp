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

// Function: sub_00351600
// Address: 0x351600 - 0x351ce8
void sub_00351600_0x351600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351600_0x351600");
#endif

    switch (ctx->pc) {
        case 0x351600u: goto label_351600;
        case 0x351604u: goto label_351604;
        case 0x351608u: goto label_351608;
        case 0x35160cu: goto label_35160c;
        case 0x351610u: goto label_351610;
        case 0x351614u: goto label_351614;
        case 0x351618u: goto label_351618;
        case 0x35161cu: goto label_35161c;
        case 0x351620u: goto label_351620;
        case 0x351624u: goto label_351624;
        case 0x351628u: goto label_351628;
        case 0x35162cu: goto label_35162c;
        case 0x351630u: goto label_351630;
        case 0x351634u: goto label_351634;
        case 0x351638u: goto label_351638;
        case 0x35163cu: goto label_35163c;
        case 0x351640u: goto label_351640;
        case 0x351644u: goto label_351644;
        case 0x351648u: goto label_351648;
        case 0x35164cu: goto label_35164c;
        case 0x351650u: goto label_351650;
        case 0x351654u: goto label_351654;
        case 0x351658u: goto label_351658;
        case 0x35165cu: goto label_35165c;
        case 0x351660u: goto label_351660;
        case 0x351664u: goto label_351664;
        case 0x351668u: goto label_351668;
        case 0x35166cu: goto label_35166c;
        case 0x351670u: goto label_351670;
        case 0x351674u: goto label_351674;
        case 0x351678u: goto label_351678;
        case 0x35167cu: goto label_35167c;
        case 0x351680u: goto label_351680;
        case 0x351684u: goto label_351684;
        case 0x351688u: goto label_351688;
        case 0x35168cu: goto label_35168c;
        case 0x351690u: goto label_351690;
        case 0x351694u: goto label_351694;
        case 0x351698u: goto label_351698;
        case 0x35169cu: goto label_35169c;
        case 0x3516a0u: goto label_3516a0;
        case 0x3516a4u: goto label_3516a4;
        case 0x3516a8u: goto label_3516a8;
        case 0x3516acu: goto label_3516ac;
        case 0x3516b0u: goto label_3516b0;
        case 0x3516b4u: goto label_3516b4;
        case 0x3516b8u: goto label_3516b8;
        case 0x3516bcu: goto label_3516bc;
        case 0x3516c0u: goto label_3516c0;
        case 0x3516c4u: goto label_3516c4;
        case 0x3516c8u: goto label_3516c8;
        case 0x3516ccu: goto label_3516cc;
        case 0x3516d0u: goto label_3516d0;
        case 0x3516d4u: goto label_3516d4;
        case 0x3516d8u: goto label_3516d8;
        case 0x3516dcu: goto label_3516dc;
        case 0x3516e0u: goto label_3516e0;
        case 0x3516e4u: goto label_3516e4;
        case 0x3516e8u: goto label_3516e8;
        case 0x3516ecu: goto label_3516ec;
        case 0x3516f0u: goto label_3516f0;
        case 0x3516f4u: goto label_3516f4;
        case 0x3516f8u: goto label_3516f8;
        case 0x3516fcu: goto label_3516fc;
        case 0x351700u: goto label_351700;
        case 0x351704u: goto label_351704;
        case 0x351708u: goto label_351708;
        case 0x35170cu: goto label_35170c;
        case 0x351710u: goto label_351710;
        case 0x351714u: goto label_351714;
        case 0x351718u: goto label_351718;
        case 0x35171cu: goto label_35171c;
        case 0x351720u: goto label_351720;
        case 0x351724u: goto label_351724;
        case 0x351728u: goto label_351728;
        case 0x35172cu: goto label_35172c;
        case 0x351730u: goto label_351730;
        case 0x351734u: goto label_351734;
        case 0x351738u: goto label_351738;
        case 0x35173cu: goto label_35173c;
        case 0x351740u: goto label_351740;
        case 0x351744u: goto label_351744;
        case 0x351748u: goto label_351748;
        case 0x35174cu: goto label_35174c;
        case 0x351750u: goto label_351750;
        case 0x351754u: goto label_351754;
        case 0x351758u: goto label_351758;
        case 0x35175cu: goto label_35175c;
        case 0x351760u: goto label_351760;
        case 0x351764u: goto label_351764;
        case 0x351768u: goto label_351768;
        case 0x35176cu: goto label_35176c;
        case 0x351770u: goto label_351770;
        case 0x351774u: goto label_351774;
        case 0x351778u: goto label_351778;
        case 0x35177cu: goto label_35177c;
        case 0x351780u: goto label_351780;
        case 0x351784u: goto label_351784;
        case 0x351788u: goto label_351788;
        case 0x35178cu: goto label_35178c;
        case 0x351790u: goto label_351790;
        case 0x351794u: goto label_351794;
        case 0x351798u: goto label_351798;
        case 0x35179cu: goto label_35179c;
        case 0x3517a0u: goto label_3517a0;
        case 0x3517a4u: goto label_3517a4;
        case 0x3517a8u: goto label_3517a8;
        case 0x3517acu: goto label_3517ac;
        case 0x3517b0u: goto label_3517b0;
        case 0x3517b4u: goto label_3517b4;
        case 0x3517b8u: goto label_3517b8;
        case 0x3517bcu: goto label_3517bc;
        case 0x3517c0u: goto label_3517c0;
        case 0x3517c4u: goto label_3517c4;
        case 0x3517c8u: goto label_3517c8;
        case 0x3517ccu: goto label_3517cc;
        case 0x3517d0u: goto label_3517d0;
        case 0x3517d4u: goto label_3517d4;
        case 0x3517d8u: goto label_3517d8;
        case 0x3517dcu: goto label_3517dc;
        case 0x3517e0u: goto label_3517e0;
        case 0x3517e4u: goto label_3517e4;
        case 0x3517e8u: goto label_3517e8;
        case 0x3517ecu: goto label_3517ec;
        case 0x3517f0u: goto label_3517f0;
        case 0x3517f4u: goto label_3517f4;
        case 0x3517f8u: goto label_3517f8;
        case 0x3517fcu: goto label_3517fc;
        case 0x351800u: goto label_351800;
        case 0x351804u: goto label_351804;
        case 0x351808u: goto label_351808;
        case 0x35180cu: goto label_35180c;
        case 0x351810u: goto label_351810;
        case 0x351814u: goto label_351814;
        case 0x351818u: goto label_351818;
        case 0x35181cu: goto label_35181c;
        case 0x351820u: goto label_351820;
        case 0x351824u: goto label_351824;
        case 0x351828u: goto label_351828;
        case 0x35182cu: goto label_35182c;
        case 0x351830u: goto label_351830;
        case 0x351834u: goto label_351834;
        case 0x351838u: goto label_351838;
        case 0x35183cu: goto label_35183c;
        case 0x351840u: goto label_351840;
        case 0x351844u: goto label_351844;
        case 0x351848u: goto label_351848;
        case 0x35184cu: goto label_35184c;
        case 0x351850u: goto label_351850;
        case 0x351854u: goto label_351854;
        case 0x351858u: goto label_351858;
        case 0x35185cu: goto label_35185c;
        case 0x351860u: goto label_351860;
        case 0x351864u: goto label_351864;
        case 0x351868u: goto label_351868;
        case 0x35186cu: goto label_35186c;
        case 0x351870u: goto label_351870;
        case 0x351874u: goto label_351874;
        case 0x351878u: goto label_351878;
        case 0x35187cu: goto label_35187c;
        case 0x351880u: goto label_351880;
        case 0x351884u: goto label_351884;
        case 0x351888u: goto label_351888;
        case 0x35188cu: goto label_35188c;
        case 0x351890u: goto label_351890;
        case 0x351894u: goto label_351894;
        case 0x351898u: goto label_351898;
        case 0x35189cu: goto label_35189c;
        case 0x3518a0u: goto label_3518a0;
        case 0x3518a4u: goto label_3518a4;
        case 0x3518a8u: goto label_3518a8;
        case 0x3518acu: goto label_3518ac;
        case 0x3518b0u: goto label_3518b0;
        case 0x3518b4u: goto label_3518b4;
        case 0x3518b8u: goto label_3518b8;
        case 0x3518bcu: goto label_3518bc;
        case 0x3518c0u: goto label_3518c0;
        case 0x3518c4u: goto label_3518c4;
        case 0x3518c8u: goto label_3518c8;
        case 0x3518ccu: goto label_3518cc;
        case 0x3518d0u: goto label_3518d0;
        case 0x3518d4u: goto label_3518d4;
        case 0x3518d8u: goto label_3518d8;
        case 0x3518dcu: goto label_3518dc;
        case 0x3518e0u: goto label_3518e0;
        case 0x3518e4u: goto label_3518e4;
        case 0x3518e8u: goto label_3518e8;
        case 0x3518ecu: goto label_3518ec;
        case 0x3518f0u: goto label_3518f0;
        case 0x3518f4u: goto label_3518f4;
        case 0x3518f8u: goto label_3518f8;
        case 0x3518fcu: goto label_3518fc;
        case 0x351900u: goto label_351900;
        case 0x351904u: goto label_351904;
        case 0x351908u: goto label_351908;
        case 0x35190cu: goto label_35190c;
        case 0x351910u: goto label_351910;
        case 0x351914u: goto label_351914;
        case 0x351918u: goto label_351918;
        case 0x35191cu: goto label_35191c;
        case 0x351920u: goto label_351920;
        case 0x351924u: goto label_351924;
        case 0x351928u: goto label_351928;
        case 0x35192cu: goto label_35192c;
        case 0x351930u: goto label_351930;
        case 0x351934u: goto label_351934;
        case 0x351938u: goto label_351938;
        case 0x35193cu: goto label_35193c;
        case 0x351940u: goto label_351940;
        case 0x351944u: goto label_351944;
        case 0x351948u: goto label_351948;
        case 0x35194cu: goto label_35194c;
        case 0x351950u: goto label_351950;
        case 0x351954u: goto label_351954;
        case 0x351958u: goto label_351958;
        case 0x35195cu: goto label_35195c;
        case 0x351960u: goto label_351960;
        case 0x351964u: goto label_351964;
        case 0x351968u: goto label_351968;
        case 0x35196cu: goto label_35196c;
        case 0x351970u: goto label_351970;
        case 0x351974u: goto label_351974;
        case 0x351978u: goto label_351978;
        case 0x35197cu: goto label_35197c;
        case 0x351980u: goto label_351980;
        case 0x351984u: goto label_351984;
        case 0x351988u: goto label_351988;
        case 0x35198cu: goto label_35198c;
        case 0x351990u: goto label_351990;
        case 0x351994u: goto label_351994;
        case 0x351998u: goto label_351998;
        case 0x35199cu: goto label_35199c;
        case 0x3519a0u: goto label_3519a0;
        case 0x3519a4u: goto label_3519a4;
        case 0x3519a8u: goto label_3519a8;
        case 0x3519acu: goto label_3519ac;
        case 0x3519b0u: goto label_3519b0;
        case 0x3519b4u: goto label_3519b4;
        case 0x3519b8u: goto label_3519b8;
        case 0x3519bcu: goto label_3519bc;
        case 0x3519c0u: goto label_3519c0;
        case 0x3519c4u: goto label_3519c4;
        case 0x3519c8u: goto label_3519c8;
        case 0x3519ccu: goto label_3519cc;
        case 0x3519d0u: goto label_3519d0;
        case 0x3519d4u: goto label_3519d4;
        case 0x3519d8u: goto label_3519d8;
        case 0x3519dcu: goto label_3519dc;
        case 0x3519e0u: goto label_3519e0;
        case 0x3519e4u: goto label_3519e4;
        case 0x3519e8u: goto label_3519e8;
        case 0x3519ecu: goto label_3519ec;
        case 0x3519f0u: goto label_3519f0;
        case 0x3519f4u: goto label_3519f4;
        case 0x3519f8u: goto label_3519f8;
        case 0x3519fcu: goto label_3519fc;
        case 0x351a00u: goto label_351a00;
        case 0x351a04u: goto label_351a04;
        case 0x351a08u: goto label_351a08;
        case 0x351a0cu: goto label_351a0c;
        case 0x351a10u: goto label_351a10;
        case 0x351a14u: goto label_351a14;
        case 0x351a18u: goto label_351a18;
        case 0x351a1cu: goto label_351a1c;
        case 0x351a20u: goto label_351a20;
        case 0x351a24u: goto label_351a24;
        case 0x351a28u: goto label_351a28;
        case 0x351a2cu: goto label_351a2c;
        case 0x351a30u: goto label_351a30;
        case 0x351a34u: goto label_351a34;
        case 0x351a38u: goto label_351a38;
        case 0x351a3cu: goto label_351a3c;
        case 0x351a40u: goto label_351a40;
        case 0x351a44u: goto label_351a44;
        case 0x351a48u: goto label_351a48;
        case 0x351a4cu: goto label_351a4c;
        case 0x351a50u: goto label_351a50;
        case 0x351a54u: goto label_351a54;
        case 0x351a58u: goto label_351a58;
        case 0x351a5cu: goto label_351a5c;
        case 0x351a60u: goto label_351a60;
        case 0x351a64u: goto label_351a64;
        case 0x351a68u: goto label_351a68;
        case 0x351a6cu: goto label_351a6c;
        case 0x351a70u: goto label_351a70;
        case 0x351a74u: goto label_351a74;
        case 0x351a78u: goto label_351a78;
        case 0x351a7cu: goto label_351a7c;
        case 0x351a80u: goto label_351a80;
        case 0x351a84u: goto label_351a84;
        case 0x351a88u: goto label_351a88;
        case 0x351a8cu: goto label_351a8c;
        case 0x351a90u: goto label_351a90;
        case 0x351a94u: goto label_351a94;
        case 0x351a98u: goto label_351a98;
        case 0x351a9cu: goto label_351a9c;
        case 0x351aa0u: goto label_351aa0;
        case 0x351aa4u: goto label_351aa4;
        case 0x351aa8u: goto label_351aa8;
        case 0x351aacu: goto label_351aac;
        case 0x351ab0u: goto label_351ab0;
        case 0x351ab4u: goto label_351ab4;
        case 0x351ab8u: goto label_351ab8;
        case 0x351abcu: goto label_351abc;
        case 0x351ac0u: goto label_351ac0;
        case 0x351ac4u: goto label_351ac4;
        case 0x351ac8u: goto label_351ac8;
        case 0x351accu: goto label_351acc;
        case 0x351ad0u: goto label_351ad0;
        case 0x351ad4u: goto label_351ad4;
        case 0x351ad8u: goto label_351ad8;
        case 0x351adcu: goto label_351adc;
        case 0x351ae0u: goto label_351ae0;
        case 0x351ae4u: goto label_351ae4;
        case 0x351ae8u: goto label_351ae8;
        case 0x351aecu: goto label_351aec;
        case 0x351af0u: goto label_351af0;
        case 0x351af4u: goto label_351af4;
        case 0x351af8u: goto label_351af8;
        case 0x351afcu: goto label_351afc;
        case 0x351b00u: goto label_351b00;
        case 0x351b04u: goto label_351b04;
        case 0x351b08u: goto label_351b08;
        case 0x351b0cu: goto label_351b0c;
        case 0x351b10u: goto label_351b10;
        case 0x351b14u: goto label_351b14;
        case 0x351b18u: goto label_351b18;
        case 0x351b1cu: goto label_351b1c;
        case 0x351b20u: goto label_351b20;
        case 0x351b24u: goto label_351b24;
        case 0x351b28u: goto label_351b28;
        case 0x351b2cu: goto label_351b2c;
        case 0x351b30u: goto label_351b30;
        case 0x351b34u: goto label_351b34;
        case 0x351b38u: goto label_351b38;
        case 0x351b3cu: goto label_351b3c;
        case 0x351b40u: goto label_351b40;
        case 0x351b44u: goto label_351b44;
        case 0x351b48u: goto label_351b48;
        case 0x351b4cu: goto label_351b4c;
        case 0x351b50u: goto label_351b50;
        case 0x351b54u: goto label_351b54;
        case 0x351b58u: goto label_351b58;
        case 0x351b5cu: goto label_351b5c;
        case 0x351b60u: goto label_351b60;
        case 0x351b64u: goto label_351b64;
        case 0x351b68u: goto label_351b68;
        case 0x351b6cu: goto label_351b6c;
        case 0x351b70u: goto label_351b70;
        case 0x351b74u: goto label_351b74;
        case 0x351b78u: goto label_351b78;
        case 0x351b7cu: goto label_351b7c;
        case 0x351b80u: goto label_351b80;
        case 0x351b84u: goto label_351b84;
        case 0x351b88u: goto label_351b88;
        case 0x351b8cu: goto label_351b8c;
        case 0x351b90u: goto label_351b90;
        case 0x351b94u: goto label_351b94;
        case 0x351b98u: goto label_351b98;
        case 0x351b9cu: goto label_351b9c;
        case 0x351ba0u: goto label_351ba0;
        case 0x351ba4u: goto label_351ba4;
        case 0x351ba8u: goto label_351ba8;
        case 0x351bacu: goto label_351bac;
        case 0x351bb0u: goto label_351bb0;
        case 0x351bb4u: goto label_351bb4;
        case 0x351bb8u: goto label_351bb8;
        case 0x351bbcu: goto label_351bbc;
        case 0x351bc0u: goto label_351bc0;
        case 0x351bc4u: goto label_351bc4;
        case 0x351bc8u: goto label_351bc8;
        case 0x351bccu: goto label_351bcc;
        case 0x351bd0u: goto label_351bd0;
        case 0x351bd4u: goto label_351bd4;
        case 0x351bd8u: goto label_351bd8;
        case 0x351bdcu: goto label_351bdc;
        case 0x351be0u: goto label_351be0;
        case 0x351be4u: goto label_351be4;
        case 0x351be8u: goto label_351be8;
        case 0x351becu: goto label_351bec;
        case 0x351bf0u: goto label_351bf0;
        case 0x351bf4u: goto label_351bf4;
        case 0x351bf8u: goto label_351bf8;
        case 0x351bfcu: goto label_351bfc;
        case 0x351c00u: goto label_351c00;
        case 0x351c04u: goto label_351c04;
        case 0x351c08u: goto label_351c08;
        case 0x351c0cu: goto label_351c0c;
        case 0x351c10u: goto label_351c10;
        case 0x351c14u: goto label_351c14;
        case 0x351c18u: goto label_351c18;
        case 0x351c1cu: goto label_351c1c;
        case 0x351c20u: goto label_351c20;
        case 0x351c24u: goto label_351c24;
        case 0x351c28u: goto label_351c28;
        case 0x351c2cu: goto label_351c2c;
        case 0x351c30u: goto label_351c30;
        case 0x351c34u: goto label_351c34;
        case 0x351c38u: goto label_351c38;
        case 0x351c3cu: goto label_351c3c;
        case 0x351c40u: goto label_351c40;
        case 0x351c44u: goto label_351c44;
        case 0x351c48u: goto label_351c48;
        case 0x351c4cu: goto label_351c4c;
        case 0x351c50u: goto label_351c50;
        case 0x351c54u: goto label_351c54;
        case 0x351c58u: goto label_351c58;
        case 0x351c5cu: goto label_351c5c;
        case 0x351c60u: goto label_351c60;
        case 0x351c64u: goto label_351c64;
        case 0x351c68u: goto label_351c68;
        case 0x351c6cu: goto label_351c6c;
        case 0x351c70u: goto label_351c70;
        case 0x351c74u: goto label_351c74;
        case 0x351c78u: goto label_351c78;
        case 0x351c7cu: goto label_351c7c;
        case 0x351c80u: goto label_351c80;
        case 0x351c84u: goto label_351c84;
        case 0x351c88u: goto label_351c88;
        case 0x351c8cu: goto label_351c8c;
        case 0x351c90u: goto label_351c90;
        case 0x351c94u: goto label_351c94;
        case 0x351c98u: goto label_351c98;
        case 0x351c9cu: goto label_351c9c;
        case 0x351ca0u: goto label_351ca0;
        case 0x351ca4u: goto label_351ca4;
        case 0x351ca8u: goto label_351ca8;
        case 0x351cacu: goto label_351cac;
        case 0x351cb0u: goto label_351cb0;
        case 0x351cb4u: goto label_351cb4;
        case 0x351cb8u: goto label_351cb8;
        case 0x351cbcu: goto label_351cbc;
        case 0x351cc0u: goto label_351cc0;
        case 0x351cc4u: goto label_351cc4;
        case 0x351cc8u: goto label_351cc8;
        case 0x351cccu: goto label_351ccc;
        case 0x351cd0u: goto label_351cd0;
        case 0x351cd4u: goto label_351cd4;
        case 0x351cd8u: goto label_351cd8;
        case 0x351cdcu: goto label_351cdc;
        case 0x351ce0u: goto label_351ce0;
        case 0x351ce4u: goto label_351ce4;
        default: break;
    }

    ctx->pc = 0x351600u;

label_351600:
    // 0x351600: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x351600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_351604:
    // 0x351604: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x351604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
label_351608:
    // 0x351608: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x351608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
label_35160c:
    // 0x35160c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35160cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_351610:
    // 0x351610: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x351610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
label_351614:
    // 0x351614: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x351614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
label_351618:
    // 0x351618: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x351618u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_35161c:
    // 0x35161c: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x35161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
label_351620:
    // 0x351620: 0x3c13005c  lui         $s3, 0x5C
    ctx->pc = 0x351620u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)92 << 16));
label_351624:
    // 0x351624: 0xffb50118  sd          $s5, 0x118($sp)
    ctx->pc = 0x351624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 21));
label_351628:
    // 0x351628: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x351628u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
label_35162c:
    // 0x35162c: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x35162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
label_351630:
    // 0x351630: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x351630u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
label_351634:
    // 0x351634: 0xffb70128  sd          $s7, 0x128($sp)
    ctx->pc = 0x351634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 23));
label_351638:
    // 0x351638: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x351638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_35163c:
    // 0x35163c: 0x3c17004b  lui         $s7, 0x4B
    ctx->pc = 0x35163cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)75 << 16));
label_351640:
    // 0x351640: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x351640u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_351644:
    // 0x351644: 0xc0d4578  jal         func_3515E0
label_351648:
    if (ctx->pc == 0x351648u) {
        ctx->pc = 0x351648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351644u;
        // 0x351648: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x35164Cu;
        goto label_35164c;
    }
    ctx->pc = 0x351644u;
    SET_GPR_U32(ctx, 31, 0x35164Cu);
    ctx->pc = 0x351648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351644u;
    // 0x351648: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3515E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3515E0u, 0x351644u, 0x35164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35164Cu;
label_35164c:
    // 0x35164c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x35164cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_351650:
    // 0x351650: 0x8c43be50  lw          $v1, -0x41B0($v0)
    ctx->pc = 0x351650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950480)));
label_351654:
    // 0x351654: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x351654u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351658:
    // 0x351658: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
label_35165c:
    if (ctx->pc == 0x35165Cu) {
        ctx->pc = 0x35165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351658u;
        // 0x35165c: 0x2450be50  addiu       $s0, $v0, -0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351660u;
        goto label_351660;
    }
    ctx->pc = 0x351658u;
    {
        const bool branch_taken_0x351658 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x35165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351658u;
        // 0x35165c: 0x2450be50  addiu       $s0, $v0, -0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351658) {
            ctx->pc = 0x3516D4u;
            goto label_3516d4;
        }
    }
    ctx->pc = 0x351660u;
label_351660:
    // 0x351660: 0xc0db198  jal         func_36C660
label_351664:
    if (ctx->pc == 0x351664u) {
        ctx->pc = 0x351668u;
        goto label_351668;
    }
    ctx->pc = 0x351660u;
    SET_GPR_U32(ctx, 31, 0x351668u);
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x351660u, 0x351668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351668u;
label_351668:
    // 0x351668: 0xc0d13f4  jal         func_344FD0
label_35166c:
    if (ctx->pc == 0x35166Cu) {
        ctx->pc = 0x351670u;
        goto label_351670;
    }
    ctx->pc = 0x351668u;
    SET_GPR_U32(ctx, 31, 0x351670u);
    ctx->pc = 0x344FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344FD0u, 0x351668u, 0x351670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351670u;
label_351670:
    // 0x351670: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x351670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_351674:
    // 0x351674: 0x10000005  b           . + 4 + (0x5 << 2)
label_351678:
    if (ctx->pc == 0x351678u) {
        ctx->pc = 0x351678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351674u;
        // 0x351678: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35167Cu;
        goto label_35167c;
    }
    ctx->pc = 0x351674u;
    {
        const bool branch_taken_0x351674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351674u;
        // 0x351678: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351674) {
            ctx->pc = 0x35168Cu;
            goto label_35168c;
        }
    }
    ctx->pc = 0x35167Cu;
label_35167c:
    // 0x35167c: 0x0  nop
    ctx->pc = 0x35167cu;
    // NOP
label_351680:
    // 0x351680: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x351680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_351684:
    // 0x351684: 0x60f809  jalr        $v1
label_351688:
    if (ctx->pc == 0x351688u) {
        ctx->pc = 0x35168Cu;
        goto label_35168c;
    }
    ctx->pc = 0x351684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x35168Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351684u, 0x35168Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35168Cu;
label_35168c:
    // 0x35168c: 0x26c6be50  addiu       $a2, $s6, -0x41B0
    ctx->pc = 0x35168cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950480));
label_351690:
    // 0x351690: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x351690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_351694:
    // 0x351694: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x351694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_351698:
    // 0x351698: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_35169c:
    if (ctx->pc == 0x35169Cu) {
        ctx->pc = 0x35169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351698u;
        // 0x35169c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3516A0u;
        goto label_3516a0;
    }
    ctx->pc = 0x351698u;
    {
        const bool branch_taken_0x351698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351698u;
        // 0x35169c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351698) {
            ctx->pc = 0x3516A4u;
            goto label_3516a4;
        }
    }
    ctx->pc = 0x3516A0u;
label_3516a0:
    // 0x3516a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3516a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3516a4:
    // 0x3516a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3516a8:
    if (ctx->pc == 0x3516A8u) {
        ctx->pc = 0x3516A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516A4u;
        // 0x3516a8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3516ACu;
        goto label_3516ac;
    }
    ctx->pc = 0x3516A4u;
    {
        const bool branch_taken_0x3516a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516A4u;
        // 0x3516a8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516a4) {
            ctx->pc = 0x3516B4u;
            goto label_3516b4;
        }
    }
    ctx->pc = 0x3516ACu;
label_3516ac:
    // 0x3516ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3516acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3516b0:
    // 0x3516b0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x3516b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_3516b4:
    // 0x3516b4: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
label_3516b8:
    if (ctx->pc == 0x3516B8u) {
        ctx->pc = 0x3516B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516B4u;
        // 0x3516b8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3516BCu;
        goto label_3516bc;
    }
    ctx->pc = 0x3516B4u;
    {
        const bool branch_taken_0x3516b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3516b4) {
            ctx->pc = 0x3516B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3516B4u;
            // 0x3516b8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351680;
        }
    }
    ctx->pc = 0x3516BCu;
label_3516bc:
    // 0x3516bc: 0xc0dac54  jal         func_36B150
label_3516c0:
    if (ctx->pc == 0x3516C0u) {
        ctx->pc = 0x3516C4u;
        goto label_3516c4;
    }
    ctx->pc = 0x3516BCu;
    SET_GPR_U32(ctx, 31, 0x3516C4u);
    ctx->pc = 0x36B150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B150u, 0x3516BCu, 0x3516C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3516C4u;
label_3516c4:
    // 0x3516c4: 0xc0db20a  jal         func_36C828
label_3516c8:
    if (ctx->pc == 0x3516C8u) {
        ctx->pc = 0x3516CCu;
        goto label_3516cc;
    }
    ctx->pc = 0x3516C4u;
    SET_GPR_U32(ctx, 31, 0x3516CCu);
    ctx->pc = 0x36C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C828u, 0x3516C4u, 0x3516CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3516CCu;
label_3516cc:
    // 0x3516cc: 0xc0db1ae  jal         func_36C6B8
label_3516d0:
    if (ctx->pc == 0x3516D0u) {
        ctx->pc = 0x3516D4u;
        goto label_3516d4;
    }
    ctx->pc = 0x3516CCu;
    SET_GPR_U32(ctx, 31, 0x3516D4u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x3516CCu, 0x3516D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3516D4u;
label_3516d4:
    // 0x3516d4: 0x8e22bcf0  lw          $v0, -0x4310($s1)
    ctx->pc = 0x3516d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
label_3516d8:
    // 0x3516d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3516d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3516dc:
    // 0x3516dc: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x3516dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_3516e0:
    // 0x3516e0: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x3516e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_3516e4:
    // 0x3516e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3516e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3516e8:
    // 0x3516e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3516e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3516ec:
    // 0x3516ec: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3516ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3516f0:
    // 0x3516f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3516f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3516f4:
    // 0x3516f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3516f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3516f8:
    // 0x3516f8: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x3516f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
label_3516fc:
    // 0x3516fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3516fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_351700:
    // 0x351700: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x351700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_351704:
    // 0x351704: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x351704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_351708:
    // 0x351708: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x351708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_35170c:
    // 0x35170c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x35170cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_351710:
    // 0x351710: 0xc0b1548  jal         func_2C5520
label_351714:
    if (ctx->pc == 0x351714u) {
        ctx->pc = 0x351714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351710u;
        // 0x351714: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351718u;
        goto label_351718;
    }
    ctx->pc = 0x351710u;
    SET_GPR_U32(ctx, 31, 0x351718u);
    ctx->pc = 0x351714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351710u;
    // 0x351714: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x351710u, 0x351718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351718u;
label_351718:
    // 0x351718: 0xc0c48da  jal         func_312368
label_35171c:
    if (ctx->pc == 0x35171Cu) {
        ctx->pc = 0x35171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351718u;
        // 0x35171c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351720u;
        goto label_351720;
    }
    ctx->pc = 0x351718u;
    SET_GPR_U32(ctx, 31, 0x351720u);
    ctx->pc = 0x35171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351718u;
    // 0x35171c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x351718u, 0x351720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351720u;
label_351720:
    // 0x351720: 0x268566b8  addiu       $a1, $s4, 0x66B8
    ctx->pc = 0x351720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 26296));
label_351724:
    // 0x351724: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x351724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_351728:
    // 0x351728: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x351728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_35172c:
    // 0x35172c: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x35172cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_351730:
    // 0x351730: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x351730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_351734:
    // 0x351734: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x351734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_351738:
    // 0x351738: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x351738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_35173c:
    // 0x35173c: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x35173cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_351740:
    // 0x351740: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x351740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_351744:
    // 0x351744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x351744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351748:
    // 0x351748: 0x2665be70  addiu       $a1, $s3, -0x4190
    ctx->pc = 0x351748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950512));
label_35174c:
    // 0x35174c: 0xaea2bce4  sw          $v0, -0x431C($s5)
    ctx->pc = 0x35174cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294950116), GPR_U32(ctx, 2));
label_351750:
    // 0x351750: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x351750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_351754:
    // 0x351754: 0x8e22bcf0  lw          $v0, -0x4310($s1)
    ctx->pc = 0x351754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
label_351758:
    // 0x351758: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x351758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_35175c:
    // 0x35175c: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x35175cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_351760:
    // 0x351760: 0x6ba7001f  ldl         $a3, 0x1F($sp)
    ctx->pc = 0x351760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_351764:
    // 0x351764: 0x6fa70018  ldr         $a3, 0x18($sp)
    ctx->pc = 0x351764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_351768:
    // 0x351768: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x351768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_35176c:
    // 0x35176c: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x35176cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_351770:
    // 0x351770: 0xb047001f  sdl         $a3, 0x1F($v0)
    ctx->pc = 0x351770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_351774:
    // 0x351774: 0xb4470018  sdr         $a3, 0x18($v0)
    ctx->pc = 0x351774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_351778:
    // 0x351778: 0x8e24bcf0  lw          $a0, -0x4310($s1)
    ctx->pc = 0x351778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
label_35177c:
    // 0x35177c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x35177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_351780:
    // 0x351780: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x351780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_351784:
    // 0x351784: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x351784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_351788:
    // 0x351788: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x351788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_35178c:
    // 0x35178c: 0x10000004  b           . + 4 + (0x4 << 2)
label_351790:
    if (ctx->pc == 0x351790u) {
        ctx->pc = 0x351790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35178Cu;
        // 0x351790: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351794u;
        goto label_351794;
    }
    ctx->pc = 0x35178Cu;
    {
        const bool branch_taken_0x35178c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35178Cu;
        // 0x351790: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35178c) {
            ctx->pc = 0x3517A0u;
            goto label_3517a0;
        }
    }
    ctx->pc = 0x351794u;
label_351794:
    // 0x351794: 0x0  nop
    ctx->pc = 0x351794u;
    // NOP
label_351798:
    // 0x351798: 0xc0d22ac  jal         func_348AB0
label_35179c:
    if (ctx->pc == 0x35179Cu) {
        ctx->pc = 0x3517A0u;
        goto label_3517a0;
    }
    ctx->pc = 0x351798u;
    SET_GPR_U32(ctx, 31, 0x3517A0u);
    ctx->pc = 0x348AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348AB0u, 0x351798u, 0x3517A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3517A0u;
label_3517a0:
    // 0x3517a0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3517a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3517a4:
    // 0x3517a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3517a8:
    if (ctx->pc == 0x3517A8u) {
        ctx->pc = 0x3517A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517A4u;
        // 0x3517a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3517ACu;
        goto label_3517ac;
    }
    ctx->pc = 0x3517A4u;
    {
        const bool branch_taken_0x3517a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3517A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517A4u;
        // 0x3517a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3517a4) {
            ctx->pc = 0x3517B0u;
            goto label_3517b0;
        }
    }
    ctx->pc = 0x3517ACu;
label_3517ac:
    // 0x3517ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3517acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3517b0:
    // 0x3517b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3517b4:
    if (ctx->pc == 0x3517B4u) {
        ctx->pc = 0x3517B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517B0u;
        // 0x3517b4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3517B8u;
        goto label_3517b8;
    }
    ctx->pc = 0x3517B0u;
    {
        const bool branch_taken_0x3517b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3517B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517B0u;
        // 0x3517b4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3517b0) {
            ctx->pc = 0x3517C0u;
            goto label_3517c0;
        }
    }
    ctx->pc = 0x3517B8u;
label_3517b8:
    // 0x3517b8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3517b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3517bc:
    // 0x3517bc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3517bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_3517c0:
    // 0x3517c0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_3517c4:
    if (ctx->pc == 0x3517C4u) {
        ctx->pc = 0x3517C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517C0u;
        // 0x3517c4: 0x8e26bcf0  lw          $a2, -0x4310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3517C8u;
        goto label_3517c8;
    }
    ctx->pc = 0x3517C0u;
    {
        const bool branch_taken_0x3517c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3517C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517C0u;
        // 0x3517c4: 0x8e26bcf0  lw          $a2, -0x4310($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3517c0) {
            ctx->pc = 0x351798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351798;
        }
    }
    ctx->pc = 0x3517C8u;
label_3517c8:
    // 0x3517c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3517c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3517cc:
    // 0x3517cc: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3517ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_3517d0:
    // 0x3517d0: 0x26e53d20  addiu       $a1, $s7, 0x3D20
    ctx->pc = 0x3517d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 15648));
label_3517d4:
    // 0x3517d4: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x3517d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_3517d8:
    // 0x3517d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3517d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3517dc:
    // 0x3517dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3517dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3517e0:
    // 0x3517e0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3517e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3517e4:
    // 0x3517e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3517e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3517e8:
    // 0x3517e8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3517e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3517ec:
    // 0x3517ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3517ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3517f0:
    // 0x3517f0: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x3517f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
label_3517f4:
    // 0x3517f4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3517f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3517f8:
    // 0x3517f8: 0xc0f6a96  jal         func_3DAA58
label_3517fc:
    if (ctx->pc == 0x3517FCu) {
        ctx->pc = 0x3517FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517F8u;
        // 0x3517fc: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351800u;
        goto label_351800;
    }
    ctx->pc = 0x3517F8u;
    SET_GPR_U32(ctx, 31, 0x351800u);
    ctx->pc = 0x3517FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3517F8u;
    // 0x3517fc: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3517F8u, 0x351800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351800u;
label_351800:
    // 0x351800: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x351800u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_351804:
    // 0x351804: 0x10000121  b           . + 4 + (0x121 << 2)
label_351808:
    if (ctx->pc == 0x351808u) {
        ctx->pc = 0x351808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351804u;
        // 0x351808: 0x27b400b0  addiu       $s4, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35180Cu;
        goto label_35180c;
    }
    ctx->pc = 0x351804u;
    {
        const bool branch_taken_0x351804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351804u;
        // 0x351808: 0x27b400b0  addiu       $s4, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351804) {
            ctx->pc = 0x351C8Cu;
            goto label_351c8c;
        }
    }
    ctx->pc = 0x35180Cu;
label_35180c:
    // 0x35180c: 0x0  nop
    ctx->pc = 0x35180cu;
    // NOP
label_351810:
    // 0x351810: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x351810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351814:
    // 0x351814: 0xc06e0f0  jal         func_1B83C0
label_351818:
    if (ctx->pc == 0x351818u) {
        ctx->pc = 0x351818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351814u;
        // 0x351818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35181Cu;
        goto label_35181c;
    }
    ctx->pc = 0x351814u;
    SET_GPR_U32(ctx, 31, 0x35181Cu);
    ctx->pc = 0x351818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351814u;
    // 0x351818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x351814u, 0x35181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35181Cu;
label_35181c:
    // 0x35181c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_351820:
    if (ctx->pc == 0x351820u) {
        ctx->pc = 0x351824u;
        goto label_351824;
    }
    ctx->pc = 0x35181Cu;
    {
        const bool branch_taken_0x35181c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35181c) {
            ctx->pc = 0x35182Cu;
            goto label_35182c;
        }
    }
    ctx->pc = 0x351824u;
label_351824:
    // 0x351824: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x351824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_351828:
    // 0x351828: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x351828u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_35182c:
    // 0x35182c: 0x52200118  beql        $s1, $zero, . + 4 + (0x118 << 2)
label_351830:
    if (ctx->pc == 0x351830u) {
        ctx->pc = 0x351830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35182Cu;
        // 0x351830: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351834u;
        goto label_351834;
    }
    ctx->pc = 0x35182Cu;
    {
        const bool branch_taken_0x35182c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35182c) {
            ctx->pc = 0x351830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35182Cu;
            // 0x351830: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x351834u;
label_351834:
    // 0x351834: 0x8e420ff0  lw          $v0, 0xFF0($s2)
    ctx->pc = 0x351834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4080)));
label_351838:
    // 0x351838: 0x8c43021c  lw          $v1, 0x21C($v0)
    ctx->pc = 0x351838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_35183c:
    // 0x35183c: 0x54600114  bnel        $v1, $zero, . + 4 + (0x114 << 2)
label_351840:
    if (ctx->pc == 0x351840u) {
        ctx->pc = 0x351840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35183Cu;
        // 0x351840: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351844u;
        goto label_351844;
    }
    ctx->pc = 0x35183Cu;
    {
        const bool branch_taken_0x35183c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35183c) {
            ctx->pc = 0x351840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35183Cu;
            // 0x351840: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x351844u;
label_351844:
    // 0x351844: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x351844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_351848:
    // 0x351848: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x351848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_35184c:
    // 0x35184c: 0x54400110  bnel        $v0, $zero, . + 4 + (0x110 << 2)
label_351850:
    if (ctx->pc == 0x351850u) {
        ctx->pc = 0x351850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35184Cu;
        // 0x351850: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351854u;
        goto label_351854;
    }
    ctx->pc = 0x35184Cu;
    {
        const bool branch_taken_0x35184c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35184c) {
            ctx->pc = 0x351850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35184Cu;
            // 0x351850: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x351854u;
label_351854:
    // 0x351854: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x351854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_351858:
    // 0x351858: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x351858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_35185c:
    // 0x35185c: 0x2482ffd9  addiu       $v0, $a0, -0x27
    ctx->pc = 0x35185cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967257));
label_351860:
    // 0x351860: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x351860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_351864:
    // 0x351864: 0x5440010a  bnel        $v0, $zero, . + 4 + (0x10A << 2)
label_351868:
    if (ctx->pc == 0x351868u) {
        ctx->pc = 0x351868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351864u;
        // 0x351868: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35186Cu;
        goto label_35186c;
    }
    ctx->pc = 0x351864u;
    {
        const bool branch_taken_0x351864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351864) {
            ctx->pc = 0x351868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351864u;
            // 0x351868: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x35186Cu;
label_35186c:
    // 0x35186c: 0xde431020  ld          $v1, 0x1020($s2)
    ctx->pc = 0x35186cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 4128)));
label_351870:
    // 0x351870: 0x317b8  dsll        $v0, $v1, 30
    ctx->pc = 0x351870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 30);
label_351874:
    // 0x351874: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x351874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
label_351878:
    // 0x351878: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x351878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_35187c:
    // 0x35187c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35187cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_351880:
    // 0x351880: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
label_351884:
    if (ctx->pc == 0x351884u) {
        ctx->pc = 0x351884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351880u;
        // 0x351884: 0x317f8  dsll        $v0, $v1, 31 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x351888u;
        goto label_351888;
    }
    ctx->pc = 0x351880u;
    {
        const bool branch_taken_0x351880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351880u;
        // 0x351884: 0x317f8  dsll        $v0, $v1, 31 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x351880) {
            ctx->pc = 0x351C8Cu;
            goto label_351c8c;
        }
    }
    ctx->pc = 0x351888u;
label_351888:
    // 0x351888: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x351888u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
label_35188c:
    // 0x35188c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_351890:
    // 0x351890: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x351890u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_351894:
    // 0x351894: 0x504000fe  beql        $v0, $zero, . + 4 + (0xFE << 2)
label_351898:
    if (ctx->pc == 0x351898u) {
        ctx->pc = 0x351898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351894u;
        // 0x351898: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35189Cu;
        goto label_35189c;
    }
    ctx->pc = 0x351894u;
    {
        const bool branch_taken_0x351894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351894) {
            ctx->pc = 0x351898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351894u;
            // 0x351898: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x35189Cu;
label_35189c:
    // 0x35189c: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x35189cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_3518a0:
    // 0x3518a0: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x3518a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_3518a4:
    // 0x3518a4: 0x38420014  xori        $v0, $v0, 0x14
    ctx->pc = 0x3518a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)20);
label_3518a8:
    // 0x3518a8: 0x104000f8  beqz        $v0, . + 4 + (0xF8 << 2)
label_3518ac:
    if (ctx->pc == 0x3518ACu) {
        ctx->pc = 0x3518ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518A8u;
        // 0x3518ac: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3518B0u;
        goto label_3518b0;
    }
    ctx->pc = 0x3518A8u;
    {
        const bool branch_taken_0x3518a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3518ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518A8u;
        // 0x3518ac: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3518a8) {
            ctx->pc = 0x351C8Cu;
            goto label_351c8c;
        }
    }
    ctx->pc = 0x3518B0u;
label_3518b0:
    // 0x3518b0: 0x508200f7  beql        $a0, $v0, . + 4 + (0xF7 << 2)
label_3518b4:
    if (ctx->pc == 0x3518B4u) {
        ctx->pc = 0x3518B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518B0u;
        // 0x3518b4: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3518B8u;
        goto label_3518b8;
    }
    ctx->pc = 0x3518B0u;
    {
        const bool branch_taken_0x3518b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3518b0) {
            ctx->pc = 0x3518B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3518B0u;
            // 0x3518b4: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x3518B8u;
label_3518b8:
    // 0x3518b8: 0xc0899bc  jal         func_2266F0
label_3518bc:
    if (ctx->pc == 0x3518BCu) {
        ctx->pc = 0x3518BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518B8u;
        // 0x3518bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3518C0u;
        goto label_3518c0;
    }
    ctx->pc = 0x3518B8u;
    SET_GPR_U32(ctx, 31, 0x3518C0u);
    ctx->pc = 0x3518BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3518B8u;
    // 0x3518bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x3518B8u, 0x3518C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3518C0u;
label_3518c0:
    // 0x3518c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3518c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3518c4:
    // 0x3518c4: 0x520000f2  beql        $s0, $zero, . + 4 + (0xF2 << 2)
label_3518c8:
    if (ctx->pc == 0x3518C8u) {
        ctx->pc = 0x3518C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518C4u;
        // 0x3518c8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3518CCu;
        goto label_3518cc;
    }
    ctx->pc = 0x3518C4u;
    {
        const bool branch_taken_0x3518c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3518c4) {
            ctx->pc = 0x3518C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3518C4u;
            // 0x3518c8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x3518CCu;
label_3518cc:
    // 0x3518cc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x3518ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_3518d0:
    // 0x3518d0: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x3518d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_3518d4:
    // 0x3518d4: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x3518d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_3518d8:
    // 0x3518d8: 0x544000ed  bnel        $v0, $zero, . + 4 + (0xED << 2)
label_3518dc:
    if (ctx->pc == 0x3518DCu) {
        ctx->pc = 0x3518DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518D8u;
        // 0x3518dc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3518E0u;
        goto label_3518e0;
    }
    ctx->pc = 0x3518D8u;
    {
        const bool branch_taken_0x3518d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3518d8) {
            ctx->pc = 0x3518DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3518D8u;
            // 0x3518dc: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x3518E0u;
label_3518e0:
    // 0x3518e0: 0xc097f76  jal         func_25FDD8
label_3518e4:
    if (ctx->pc == 0x3518E4u) {
        ctx->pc = 0x3518E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518E0u;
        // 0x3518e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3518E8u;
        goto label_3518e8;
    }
    ctx->pc = 0x3518E0u;
    SET_GPR_U32(ctx, 31, 0x3518E8u);
    ctx->pc = 0x3518E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3518E0u;
    // 0x3518e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x3518E0u, 0x3518E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3518E8u;
label_3518e8:
    // 0x3518e8: 0x504000e9  beql        $v0, $zero, . + 4 + (0xE9 << 2)
label_3518ec:
    if (ctx->pc == 0x3518ECu) {
        ctx->pc = 0x3518ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518E8u;
        // 0x3518ec: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3518F0u;
        goto label_3518f0;
    }
    ctx->pc = 0x3518E8u;
    {
        const bool branch_taken_0x3518e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3518e8) {
            ctx->pc = 0x3518ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3518E8u;
            // 0x3518ec: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x3518F0u;
label_3518f0:
    // 0x3518f0: 0xc097f26  jal         func_25FC98
label_3518f4:
    if (ctx->pc == 0x3518F4u) {
        ctx->pc = 0x3518F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518F0u;
        // 0x3518f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3518F8u;
        goto label_3518f8;
    }
    ctx->pc = 0x3518F0u;
    SET_GPR_U32(ctx, 31, 0x3518F8u);
    ctx->pc = 0x3518F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3518F0u;
    // 0x3518f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x3518F0u, 0x3518F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3518F8u;
label_3518f8:
    // 0x3518f8: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x3518f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_3518fc:
    // 0x3518fc: 0x504300e4  beql        $v0, $v1, . + 4 + (0xE4 << 2)
label_351900:
    if (ctx->pc == 0x351900u) {
        ctx->pc = 0x351900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518FCu;
        // 0x351900: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351904u;
        goto label_351904;
    }
    ctx->pc = 0x3518FCu;
    {
        const bool branch_taken_0x3518fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3518fc) {
            ctx->pc = 0x351900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3518FCu;
            // 0x351900: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x351904u;
label_351904:
    // 0x351904: 0x8e421060  lw          $v0, 0x1060($s2)
    ctx->pc = 0x351904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4192)));
label_351908:
    // 0x351908: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x351908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
label_35190c:
    // 0x35190c: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
label_351910:
    if (ctx->pc == 0x351910u) {
        ctx->pc = 0x351914u;
        goto label_351914;
    }
    ctx->pc = 0x35190Cu;
    {
        const bool branch_taken_0x35190c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35190c) {
            ctx->pc = 0x351C7Cu;
            goto label_351c7c;
        }
    }
    ctx->pc = 0x351914u;
label_351914:
    // 0x351914: 0x9242047d  lbu         $v0, 0x47D($s2)
    ctx->pc = 0x351914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
label_351918:
    // 0x351918: 0x144000d8  bnez        $v0, . + 4 + (0xD8 << 2)
label_35191c:
    if (ctx->pc == 0x35191Cu) {
        ctx->pc = 0x351920u;
        goto label_351920;
    }
    ctx->pc = 0x351918u;
    {
        const bool branch_taken_0x351918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351918) {
            ctx->pc = 0x351C7Cu;
            goto label_351c7c;
        }
    }
    ctx->pc = 0x351920u;
label_351920:
    // 0x351920: 0xc0899bc  jal         func_2266F0
label_351924:
    if (ctx->pc == 0x351924u) {
        ctx->pc = 0x351924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351920u;
        // 0x351924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351928u;
        goto label_351928;
    }
    ctx->pc = 0x351920u;
    SET_GPR_U32(ctx, 31, 0x351928u);
    ctx->pc = 0x351924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351920u;
    // 0x351924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x351920u, 0x351928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351928u;
label_351928:
    // 0x351928: 0x8c50029c  lw          $s0, 0x29C($v0)
    ctx->pc = 0x351928u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
label_35192c:
    // 0x35192c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_351930:
    if (ctx->pc == 0x351930u) {
        ctx->pc = 0x351930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35192Cu;
        // 0x351930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351934u;
        goto label_351934;
    }
    ctx->pc = 0x35192Cu;
    {
        const bool branch_taken_0x35192c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x351930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35192Cu;
        // 0x351930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35192c) {
            ctx->pc = 0x351950u;
            goto label_351950;
        }
    }
    ctx->pc = 0x351934u;
label_351934:
    // 0x351934: 0xc0f70ce  jal         func_3DC338
label_351938:
    if (ctx->pc == 0x351938u) {
        ctx->pc = 0x351938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351934u;
        // 0x351938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35193Cu;
        goto label_35193c;
    }
    ctx->pc = 0x351934u;
    SET_GPR_U32(ctx, 31, 0x35193Cu);
    ctx->pc = 0x351938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351934u;
    // 0x351938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x351934u, 0x35193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35193Cu;
label_35193c:
    // 0x35193c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_351940:
    if (ctx->pc == 0x351940u) {
        ctx->pc = 0x351940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35193Cu;
        // 0x351940: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351944u;
        goto label_351944;
    }
    ctx->pc = 0x35193Cu;
    {
        const bool branch_taken_0x35193c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35193Cu;
        // 0x351940: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35193c) {
            ctx->pc = 0x351950u;
            goto label_351950;
        }
    }
    ctx->pc = 0x351944u;
label_351944:
    // 0x351944: 0xc0c4900  jal         func_312400
label_351948:
    if (ctx->pc == 0x351948u) {
        ctx->pc = 0x351948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351944u;
        // 0x351948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35194Cu;
        goto label_35194c;
    }
    ctx->pc = 0x351944u;
    SET_GPR_U32(ctx, 31, 0x35194Cu);
    ctx->pc = 0x351948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351944u;
    // 0x351948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x351944u, 0x35194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35194Cu;
label_35194c:
    // 0x35194c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x35194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_351950:
    // 0x351950: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x351950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_351954:
    // 0x351954: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x351954u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_351958:
    // 0x351958: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x351958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_35195c:
    // 0x35195c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x35195cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_351960:
    // 0x351960: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x351960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351964:
    // 0x351964: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x351964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351968:
    // 0x351968: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x351968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35196c:
    // 0x35196c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x35196cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_351970:
    // 0x351970: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x351970u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_351974:
    // 0x351974: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x351974u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_351978:
    // 0x351978: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x351978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_35197c:
    // 0x35197c: 0x0  nop
    ctx->pc = 0x35197cu;
    // NOP
label_351980:
    // 0x351980: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x351980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_351984:
    // 0x351984: 0x0  nop
    ctx->pc = 0x351984u;
    // NOP
label_351988:
    // 0x351988: 0x450200c1  bc1fl       . + 4 + (0xC1 << 2)
label_35198c:
    if (ctx->pc == 0x35198Cu) {
        ctx->pc = 0x35198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351988u;
        // 0x35198c: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351990u;
        goto label_351990;
    }
    ctx->pc = 0x351988u;
    {
        const bool branch_taken_0x351988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x351988) {
            ctx->pc = 0x35198Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351988u;
            // 0x35198c: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x351990u;
label_351990:
    // 0x351990: 0xc08951c  jal         func_225470
label_351994:
    if (ctx->pc == 0x351994u) {
        ctx->pc = 0x351994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351990u;
        // 0x351994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351998u;
        goto label_351998;
    }
    ctx->pc = 0x351990u;
    SET_GPR_U32(ctx, 31, 0x351998u);
    ctx->pc = 0x351994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351990u;
    // 0x351994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x351990u, 0x351998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351998u;
label_351998:
    // 0x351998: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x351998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_35199c:
    // 0x35199c: 0x8e430ff0  lw          $v1, 0xFF0($s2)
    ctx->pc = 0x35199cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4080)));
label_3519a0:
    // 0x3519a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3519a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3519a4:
    // 0x3519a4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3519a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3519a8:
    // 0x3519a8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3519a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3519ac:
    // 0x3519ac: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x3519acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_3519b0:
    // 0x3519b0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x3519b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3519b4:
    // 0x3519b4: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x3519b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3519b8:
    // 0x3519b8: 0xc7a60064  lwc1        $f6, 0x64($sp)
    ctx->pc = 0x3519b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3519bc:
    // 0x3519bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3519bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3519c0:
    // 0x3519c0: 0xc7a70068  lwc1        $f7, 0x68($sp)
    ctx->pc = 0x3519c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3519c4:
    // 0x3519c4: 0x46150902  mul.s       $f4, $f1, $f21
    ctx->pc = 0x3519c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_3519c8:
    // 0x3519c8: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x3519c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3519cc:
    // 0x3519cc: 0x46153082  mul.s       $f2, $f6, $f21
    ctx->pc = 0x3519ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[21]);
label_3519d0:
    // 0x3519d0: 0x461538c2  mul.s       $f3, $f7, $f21
    ctx->pc = 0x3519d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
label_3519d4:
    // 0x3519d4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x3519d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3519d8:
    // 0x3519d8: 0x46152802  mul.s       $f0, $f5, $f21
    ctx->pc = 0x3519d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
label_3519dc:
    // 0x3519dc: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x3519dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3519e0:
    // 0x3519e0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x3519e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3519e4:
    // 0x3519e4: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x3519e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3519e8:
    // 0x3519e8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3519e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3519ec:
    // 0x3519ec: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x3519ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3519f0:
    // 0x3519f0: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x3519f0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3519f4:
    // 0x3519f4: 0xe7a5005c  swc1        $f5, 0x5C($sp)
    ctx->pc = 0x3519f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3519f8:
    // 0x3519f8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3519f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3519fc:
    // 0x3519fc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x3519fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_351a00:
    // 0x351a00: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x351a00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_351a04:
    // 0x351a04: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x351a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_351a08:
    // 0x351a08: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x351a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351a0c:
    // 0x351a0c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x351a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_351a10:
    // 0x351a10: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x351a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351a14:
    // 0x351a14: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x351a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351a18:
    // 0x351a18: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x351a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351a1c:
    // 0x351a1c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x351a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_351a20:
    // 0x351a20: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x351a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_351a24:
    // 0x351a24: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x351a24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_351a28:
    // 0x351a28: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x351a28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_351a2c:
    // 0x351a2c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x351a2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_351a30:
    // 0x351a30: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x351a30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_351a34:
    // 0x351a34: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x351a34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_351a38:
    // 0x351a38: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x351a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_351a3c:
    // 0x351a3c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x351a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351a40:
    // 0x351a40: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x351a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351a44:
    // 0x351a44: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x351a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351a48:
    // 0x351a48: 0xc7a5005c  lwc1        $f5, 0x5C($sp)
    ctx->pc = 0x351a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_351a4c:
    // 0x351a4c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x351a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_351a50:
    // 0x351a50: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x351a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_351a54:
    // 0x351a54: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x351a54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_351a58:
    // 0x351a58: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x351a58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_351a5c:
    // 0x351a5c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x351a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351a60:
    // 0x351a60: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x351a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351a64:
    // 0x351a64: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x351a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_351a68:
    // 0x351a68: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x351a68u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_351a6c:
    // 0x351a6c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x351a6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_351a70:
    // 0x351a70: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x351a70u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_351a74:
    // 0x351a74: 0x46060184  c1          0x60184
    ctx->pc = 0x351a74u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
label_351a78:
    // 0x351a78: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x351a78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_351a7c:
    // 0x351a7c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x351a7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_351a80:
    // 0x351a80: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x351a80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_351a84:
    // 0x351a84: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x351a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_351a88:
    // 0x351a88: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x351a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351a8c:
    // 0x351a8c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x351a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351a90:
    // 0x351a90: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x351a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351a94:
    // 0x351a94: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x351a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_351a98:
    // 0x351a98: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x351a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_351a9c:
    // 0x351a9c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x351a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_351aa0:
    // 0x351aa0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x351aa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_351aa4:
    // 0x351aa4: 0xe7a5005c  swc1        $f5, 0x5C($sp)
    ctx->pc = 0x351aa4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_351aa8:
    // 0x351aa8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x351aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351aac:
    // 0x351aac: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x351aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351ab0:
    // 0x351ab0: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x351ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_351ab4:
    // 0x351ab4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x351ab4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_351ab8:
    // 0x351ab8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x351ab8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_351abc:
    // 0x351abc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x351abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_351ac0:
    // 0x351ac0: 0x46000004  c1          0x4
    ctx->pc = 0x351ac0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_351ac4:
    // 0x351ac4: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x351ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_351ac8:
    // 0x351ac8: 0x0  nop
    ctx->pc = 0x351ac8u;
    // NOP
label_351acc:
    // 0x351acc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_351ad0:
    if (ctx->pc == 0x351AD0u) {
        ctx->pc = 0x351AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351ACCu;
        // 0x351ad0: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x351AD4u;
        goto label_351ad4;
    }
    ctx->pc = 0x351ACCu;
    {
        const bool branch_taken_0x351acc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x351AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351ACCu;
        // 0x351ad0: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x351acc) {
            ctx->pc = 0x351AD8u;
            goto label_351ad8;
        }
    }
    ctx->pc = 0x351AD4u;
label_351ad4:
    // 0x351ad4: 0x46003146  mov.s       $f5, $f6
    ctx->pc = 0x351ad4u;
    ctx->f[5] = FPU_MOV_S(ctx->f[6]);
label_351ad8:
    // 0x351ad8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x351ad8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_351adc:
    // 0x351adc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x351adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_351ae0:
    // 0x351ae0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x351ae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_351ae4:
    // 0x351ae4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x351ae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_351ae8:
    // 0x351ae8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x351ae8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_351aec:
    // 0x351aec: 0x4a0003bf  vwaitq
    ctx->pc = 0x351aecu;
    // VWAITQ (Q already resolved in this runtime)
label_351af0:
    // 0x351af0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x351af0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_351af4:
    // 0x351af4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x351af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_351af8:
    // 0x351af8: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x351af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_351afc:
    // 0x351afc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x351afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_351b00:
    // 0x351b00: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x351b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_351b04:
    // 0x351b04: 0x460030c6  mov.s       $f3, $f6
    ctx->pc = 0x351b04u;
    ctx->f[3] = FPU_MOV_S(ctx->f[6]);
label_351b08:
    // 0x351b08: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x351b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351b0c:
    // 0x351b0c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x351b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351b10:
    // 0x351b10: 0x46062034  c.lt.s      $f4, $f6
    ctx->pc = 0x351b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_351b14:
    // 0x351b14: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x351b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351b18:
    // 0x351b18: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x351b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_351b1c:
    // 0x351b1c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x351b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_351b20:
    // 0x351b20: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x351b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_351b24:
    // 0x351b24: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_351b28:
    if (ctx->pc == 0x351B28u) {
        ctx->pc = 0x351B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B24u;
        // 0x351b28: 0xe7b40054  swc1        $f20, 0x54($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B2Cu;
        goto label_351b2c;
    }
    ctx->pc = 0x351B24u;
    {
        const bool branch_taken_0x351b24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x351B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B24u;
        // 0x351b28: 0xe7b40054  swc1        $f20, 0x54($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x351b24) {
            ctx->pc = 0x351B30u;
            goto label_351b30;
        }
    }
    ctx->pc = 0x351B2Cu;
label_351b2c:
    // 0x351b2c: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x351b2cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
label_351b30:
    // 0x351b30: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x351b30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_351b34:
    // 0x351b34: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x351b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_351b38:
    // 0x351b38: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x351b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_351b3c:
    // 0x351b3c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x351b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_351b40:
    // 0x351b40: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x351b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_351b44:
    // 0x351b44: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x351b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_351b48:
    // 0x351b48: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x351b48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_351b4c:
    // 0x351b4c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x351b4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_351b50:
    // 0x351b50: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x351b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_351b54:
    // 0x351b54: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x351b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_351b58:
    // 0x351b58: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x351b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351b5c:
    // 0x351b5c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x351b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351b60:
    // 0x351b60: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x351b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351b64:
    // 0x351b64: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x351b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351b68:
    // 0x351b68: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x351b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_351b6c:
    // 0x351b6c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x351b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_351b70:
    // 0x351b70: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x351b70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_351b74:
    // 0x351b74: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x351b74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_351b78:
    // 0x351b78: 0x44062800  mfc1        $a2, $f5
    ctx->pc = 0x351b78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_351b7c:
    // 0x351b7c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x351b7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_351b80:
    // 0x351b80: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x351b80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_351b84:
    // 0x351b84: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x351b84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_351b88:
    // 0x351b88: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x351b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_351b8c:
    // 0x351b8c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x351b8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_351b90:
    // 0x351b90: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x351b90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_351b94:
    // 0x351b94: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x351b94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_351b98:
    // 0x351b98: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x351b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_351b9c:
    // 0x351b9c: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x351b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351ba0:
    // 0x351ba0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x351ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_351ba4:
    // 0x351ba4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x351ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351ba8:
    // 0x351ba8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x351ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351bac:
    // 0x351bac: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x351bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351bb0:
    // 0x351bb0: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x351bb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_351bb4:
    // 0x351bb4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x351bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_351bb8:
    // 0x351bb8: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x351bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_351bbc:
    // 0x351bbc: 0xc0f6a96  jal         func_3DAA58
label_351bc0:
    if (ctx->pc == 0x351BC0u) {
        ctx->pc = 0x351BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351BBCu;
        // 0x351bc0: 0xe7a2007c  swc1        $f2, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x351BC4u;
        goto label_351bc4;
    }
    ctx->pc = 0x351BBCu;
    SET_GPR_U32(ctx, 31, 0x351BC4u);
    ctx->pc = 0x351BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351BBCu;
    // 0x351bc0: 0xe7a2007c  swc1        $f2, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x351BBCu, 0x351BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351BC4u;
label_351bc4:
    // 0x351bc4: 0xc0f6a96  jal         func_3DAA58
label_351bc8:
    if (ctx->pc == 0x351BC8u) {
        ctx->pc = 0x351BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351BC4u;
        // 0x351bc8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351BCCu;
        goto label_351bcc;
    }
    ctx->pc = 0x351BC4u;
    SET_GPR_U32(ctx, 31, 0x351BCCu);
    ctx->pc = 0x351BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351BC4u;
    // 0x351bc8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x351BC4u, 0x351BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351BCCu;
label_351bcc:
    // 0x351bcc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x351bccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_351bd0:
    // 0x351bd0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x351bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_351bd4:
    // 0x351bd4: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x351bd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_351bd8:
    // 0x351bd8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x351bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_351bdc:
    // 0x351bdc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x351bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_351be0:
    // 0x351be0: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x351be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_351be4:
    // 0x351be4: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x351be4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_351be8:
    // 0x351be8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x351be8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_351bec:
    // 0x351bec: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x351becu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_351bf0:
    // 0x351bf0: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x351bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_351bf4:
    // 0x351bf4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x351bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351bf8:
    // 0x351bf8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x351bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_351bfc:
    // 0x351bfc: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x351bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_351c00:
    // 0x351c00: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x351c00u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_351c04:
    // 0x351c04: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x351c04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_351c08:
    // 0x351c08: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x351c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_351c0c:
    // 0x351c0c: 0x0  nop
    ctx->pc = 0x351c0cu;
    // NOP
label_351c10:
    // 0x351c10: 0x0  nop
    ctx->pc = 0x351c10u;
    // NOP
label_351c14:
    // 0x351c14: 0x46000044  c1          0x44
    ctx->pc = 0x351c14u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_351c18:
    // 0x351c18: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x351c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_351c1c:
    // 0x351c1c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x351c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_351c20:
    // 0x351c20: 0x0  nop
    ctx->pc = 0x351c20u;
    // NOP
label_351c24:
    // 0x351c24: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_351c28:
    if (ctx->pc == 0x351C28u) {
        ctx->pc = 0x351C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C24u;
        // 0x351c28: 0xe7a100e0  swc1        $f1, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x351C2Cu;
        goto label_351c2c;
    }
    ctx->pc = 0x351C24u;
    {
        const bool branch_taken_0x351c24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x351C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C24u;
        // 0x351c28: 0xe7a100e0  swc1        $f1, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c24) {
            ctx->pc = 0x351C50u;
            goto label_351c50;
        }
    }
    ctx->pc = 0x351C2Cu;
label_351c2c:
    // 0x351c2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x351c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_351c30:
    // 0x351c30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x351c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351c34:
    // 0x351c34: 0x0  nop
    ctx->pc = 0x351c34u;
    // NOP
label_351c38:
    // 0x351c38: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x351c38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_351c3c:
    // 0x351c3c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x351c3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_351c40:
    // 0x351c40: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x351c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_351c44:
    // 0x351c44: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x351c44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_351c48:
    // 0x351c48: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x351c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_351c4c:
    // 0x351c4c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x351c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_351c50:
    // 0x351c50: 0xc07a248  jal         func_1E8920
label_351c54:
    if (ctx->pc == 0x351C54u) {
        ctx->pc = 0x351C58u;
        goto label_351c58;
    }
    ctx->pc = 0x351C50u;
    SET_GPR_U32(ctx, 31, 0x351C58u);
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x351C50u, 0x351C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351C58u;
label_351c58:
    // 0x351c58: 0xc077ade  jal         func_1DEB78
label_351c5c:
    if (ctx->pc == 0x351C5Cu) {
        ctx->pc = 0x351C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C58u;
        // 0x351c5c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351C60u;
        goto label_351c60;
    }
    ctx->pc = 0x351C58u;
    SET_GPR_U32(ctx, 31, 0x351C60u);
    ctx->pc = 0x351C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351C58u;
    // 0x351c5c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB78u, 0x351C58u, 0x351C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351C60u;
label_351c60:
    // 0x351c60: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_351c64:
    if (ctx->pc == 0x351C64u) {
        ctx->pc = 0x351C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C60u;
        // 0x351c64: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351C68u;
        goto label_351c68;
    }
    ctx->pc = 0x351C60u;
    {
        const bool branch_taken_0x351c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351c60) {
            ctx->pc = 0x351C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351C60u;
            // 0x351c64: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x351C68u;
label_351c68:
    // 0x351c68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x351c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_351c6c:
    // 0x351c6c: 0xc09fea2  jal         func_27FA88
label_351c70:
    if (ctx->pc == 0x351C70u) {
        ctx->pc = 0x351C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C6Cu;
        // 0x351c70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351C74u;
        goto label_351c74;
    }
    ctx->pc = 0x351C6Cu;
    SET_GPR_U32(ctx, 31, 0x351C74u);
    ctx->pc = 0x351C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351C6Cu;
    // 0x351c70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FA88u, 0x351C6Cu, 0x351C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351C74u;
label_351c74:
    // 0x351c74: 0x10000006  b           . + 4 + (0x6 << 2)
label_351c78:
    if (ctx->pc == 0x351C78u) {
        ctx->pc = 0x351C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C74u;
        // 0x351c78: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351C7Cu;
        goto label_351c7c;
    }
    ctx->pc = 0x351C74u;
    {
        const bool branch_taken_0x351c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C74u;
        // 0x351c78: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c74) {
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x351C7Cu;
label_351c7c:
    // 0x351c7c: 0xc08951c  jal         func_225470
label_351c80:
    if (ctx->pc == 0x351C80u) {
        ctx->pc = 0x351C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C7Cu;
        // 0x351c80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351C84u;
        goto label_351c84;
    }
    ctx->pc = 0x351C7Cu;
    SET_GPR_U32(ctx, 31, 0x351C84u);
    ctx->pc = 0x351C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351C7Cu;
    // 0x351c80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x351C7Cu, 0x351C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351C84u;
label_351c84:
    // 0x351c84: 0xc0d94b6  jal         func_3652D8
label_351c88:
    if (ctx->pc == 0x351C88u) {
        ctx->pc = 0x351C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C84u;
        // 0x351c88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351C8Cu;
        goto label_351c8c;
    }
    ctx->pc = 0x351C84u;
    SET_GPR_U32(ctx, 31, 0x351C8Cu);
    ctx->pc = 0x351C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351C84u;
    // 0x351c88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3652D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3652D8u, 0x351C84u, 0x351C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351C8Cu;
label_351c8c:
    // 0x351c8c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x351c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_351c90:
    // 0x351c90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_351c94:
    if (ctx->pc == 0x351C94u) {
        ctx->pc = 0x351C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C90u;
        // 0x351c94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351C98u;
        goto label_351c98;
    }
    ctx->pc = 0x351C90u;
    {
        const bool branch_taken_0x351c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C90u;
        // 0x351c94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c90) {
            ctx->pc = 0x351C9Cu;
            goto label_351c9c;
        }
    }
    ctx->pc = 0x351C98u;
label_351c98:
    // 0x351c98: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x351c98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351c9c:
    // 0x351c9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_351ca0:
    if (ctx->pc == 0x351CA0u) {
        ctx->pc = 0x351CA4u;
        goto label_351ca4;
    }
    ctx->pc = 0x351C9Cu;
    {
        const bool branch_taken_0x351c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c9c) {
            ctx->pc = 0x351CACu;
            goto label_351cac;
        }
    }
    ctx->pc = 0x351CA4u;
label_351ca4:
    // 0x351ca4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x351ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_351ca8:
    // 0x351ca8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x351ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_351cac:
    // 0x351cac: 0x5640fed8  bnel        $s2, $zero, . + 4 + (-0x128 << 2)
label_351cb0:
    if (ctx->pc == 0x351CB0u) {
        ctx->pc = 0x351CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CACu;
        // 0x351cb0: 0x8e500ff0  lw          $s0, 0xFF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351CB4u;
        goto label_351cb4;
    }
    ctx->pc = 0x351CACu;
    {
        const bool branch_taken_0x351cac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x351cac) {
            ctx->pc = 0x351CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351CACu;
            // 0x351cb0: 0x8e500ff0  lw          $s0, 0xFF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351810;
        }
    }
    ctx->pc = 0x351CB4u;
label_351cb4:
    // 0x351cb4: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x351cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_351cb8:
    // 0x351cb8: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x351cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_351cbc:
    // 0x351cbc: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x351cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_351cc0:
    // 0x351cc0: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x351cc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_351cc4:
    // 0x351cc4: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x351cc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_351cc8:
    // 0x351cc8: 0xdfb50118  ld          $s5, 0x118($sp)
    ctx->pc = 0x351cc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_351ccc:
    // 0x351ccc: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x351cccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_351cd0:
    // 0x351cd0: 0xdfb70128  ld          $s7, 0x128($sp)
    ctx->pc = 0x351cd0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 296)));
label_351cd4:
    // 0x351cd4: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x351cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_351cd8:
    // 0x351cd8: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x351cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_351cdc:
    // 0x351cdc: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x351cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_351ce0:
    // 0x351ce0: 0x3e00008  jr          $ra
label_351ce4:
    if (ctx->pc == 0x351CE4u) {
        ctx->pc = 0x351CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CE0u;
        // 0x351ce4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351CE8u;
        goto label_fallthrough_0x351ce0;
    }
    ctx->pc = 0x351CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CE0u;
        // 0x351ce4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x351ce0:
    ctx->pc = 0x351CE8u;
}
