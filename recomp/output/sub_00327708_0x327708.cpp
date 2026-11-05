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

// Function: sub_00327708
// Address: 0x327708 - 0x329b70
void sub_00327708_0x327708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327708_0x327708");
#endif

    switch (ctx->pc) {
        case 0x327708u: goto label_327708;
        case 0x32770cu: goto label_32770c;
        case 0x327710u: goto label_327710;
        case 0x327714u: goto label_327714;
        case 0x327718u: goto label_327718;
        case 0x32771cu: goto label_32771c;
        case 0x327720u: goto label_327720;
        case 0x327724u: goto label_327724;
        case 0x327728u: goto label_327728;
        case 0x32772cu: goto label_32772c;
        case 0x327730u: goto label_327730;
        case 0x327734u: goto label_327734;
        case 0x327738u: goto label_327738;
        case 0x32773cu: goto label_32773c;
        case 0x327740u: goto label_327740;
        case 0x327744u: goto label_327744;
        case 0x327748u: goto label_327748;
        case 0x32774cu: goto label_32774c;
        case 0x327750u: goto label_327750;
        case 0x327754u: goto label_327754;
        case 0x327758u: goto label_327758;
        case 0x32775cu: goto label_32775c;
        case 0x327760u: goto label_327760;
        case 0x327764u: goto label_327764;
        case 0x327768u: goto label_327768;
        case 0x32776cu: goto label_32776c;
        case 0x327770u: goto label_327770;
        case 0x327774u: goto label_327774;
        case 0x327778u: goto label_327778;
        case 0x32777cu: goto label_32777c;
        case 0x327780u: goto label_327780;
        case 0x327784u: goto label_327784;
        case 0x327788u: goto label_327788;
        case 0x32778cu: goto label_32778c;
        case 0x327790u: goto label_327790;
        case 0x327794u: goto label_327794;
        case 0x327798u: goto label_327798;
        case 0x32779cu: goto label_32779c;
        case 0x3277a0u: goto label_3277a0;
        case 0x3277a4u: goto label_3277a4;
        case 0x3277a8u: goto label_3277a8;
        case 0x3277acu: goto label_3277ac;
        case 0x3277b0u: goto label_3277b0;
        case 0x3277b4u: goto label_3277b4;
        case 0x3277b8u: goto label_3277b8;
        case 0x3277bcu: goto label_3277bc;
        case 0x3277c0u: goto label_3277c0;
        case 0x3277c4u: goto label_3277c4;
        case 0x3277c8u: goto label_3277c8;
        case 0x3277ccu: goto label_3277cc;
        case 0x3277d0u: goto label_3277d0;
        case 0x3277d4u: goto label_3277d4;
        case 0x3277d8u: goto label_3277d8;
        case 0x3277dcu: goto label_3277dc;
        case 0x3277e0u: goto label_3277e0;
        case 0x3277e4u: goto label_3277e4;
        case 0x3277e8u: goto label_3277e8;
        case 0x3277ecu: goto label_3277ec;
        case 0x3277f0u: goto label_3277f0;
        case 0x3277f4u: goto label_3277f4;
        case 0x3277f8u: goto label_3277f8;
        case 0x3277fcu: goto label_3277fc;
        case 0x327800u: goto label_327800;
        case 0x327804u: goto label_327804;
        case 0x327808u: goto label_327808;
        case 0x32780cu: goto label_32780c;
        case 0x327810u: goto label_327810;
        case 0x327814u: goto label_327814;
        case 0x327818u: goto label_327818;
        case 0x32781cu: goto label_32781c;
        case 0x327820u: goto label_327820;
        case 0x327824u: goto label_327824;
        case 0x327828u: goto label_327828;
        case 0x32782cu: goto label_32782c;
        case 0x327830u: goto label_327830;
        case 0x327834u: goto label_327834;
        case 0x327838u: goto label_327838;
        case 0x32783cu: goto label_32783c;
        case 0x327840u: goto label_327840;
        case 0x327844u: goto label_327844;
        case 0x327848u: goto label_327848;
        case 0x32784cu: goto label_32784c;
        case 0x327850u: goto label_327850;
        case 0x327854u: goto label_327854;
        case 0x327858u: goto label_327858;
        case 0x32785cu: goto label_32785c;
        case 0x327860u: goto label_327860;
        case 0x327864u: goto label_327864;
        case 0x327868u: goto label_327868;
        case 0x32786cu: goto label_32786c;
        case 0x327870u: goto label_327870;
        case 0x327874u: goto label_327874;
        case 0x327878u: goto label_327878;
        case 0x32787cu: goto label_32787c;
        case 0x327880u: goto label_327880;
        case 0x327884u: goto label_327884;
        case 0x327888u: goto label_327888;
        case 0x32788cu: goto label_32788c;
        case 0x327890u: goto label_327890;
        case 0x327894u: goto label_327894;
        case 0x327898u: goto label_327898;
        case 0x32789cu: goto label_32789c;
        case 0x3278a0u: goto label_3278a0;
        case 0x3278a4u: goto label_3278a4;
        case 0x3278a8u: goto label_3278a8;
        case 0x3278acu: goto label_3278ac;
        case 0x3278b0u: goto label_3278b0;
        case 0x3278b4u: goto label_3278b4;
        case 0x3278b8u: goto label_3278b8;
        case 0x3278bcu: goto label_3278bc;
        case 0x3278c0u: goto label_3278c0;
        case 0x3278c4u: goto label_3278c4;
        case 0x3278c8u: goto label_3278c8;
        case 0x3278ccu: goto label_3278cc;
        case 0x3278d0u: goto label_3278d0;
        case 0x3278d4u: goto label_3278d4;
        case 0x3278d8u: goto label_3278d8;
        case 0x3278dcu: goto label_3278dc;
        case 0x3278e0u: goto label_3278e0;
        case 0x3278e4u: goto label_3278e4;
        case 0x3278e8u: goto label_3278e8;
        case 0x3278ecu: goto label_3278ec;
        case 0x3278f0u: goto label_3278f0;
        case 0x3278f4u: goto label_3278f4;
        case 0x3278f8u: goto label_3278f8;
        case 0x3278fcu: goto label_3278fc;
        case 0x327900u: goto label_327900;
        case 0x327904u: goto label_327904;
        case 0x327908u: goto label_327908;
        case 0x32790cu: goto label_32790c;
        case 0x327910u: goto label_327910;
        case 0x327914u: goto label_327914;
        case 0x327918u: goto label_327918;
        case 0x32791cu: goto label_32791c;
        case 0x327920u: goto label_327920;
        case 0x327924u: goto label_327924;
        case 0x327928u: goto label_327928;
        case 0x32792cu: goto label_32792c;
        case 0x327930u: goto label_327930;
        case 0x327934u: goto label_327934;
        case 0x327938u: goto label_327938;
        case 0x32793cu: goto label_32793c;
        case 0x327940u: goto label_327940;
        case 0x327944u: goto label_327944;
        case 0x327948u: goto label_327948;
        case 0x32794cu: goto label_32794c;
        case 0x327950u: goto label_327950;
        case 0x327954u: goto label_327954;
        case 0x327958u: goto label_327958;
        case 0x32795cu: goto label_32795c;
        case 0x327960u: goto label_327960;
        case 0x327964u: goto label_327964;
        case 0x327968u: goto label_327968;
        case 0x32796cu: goto label_32796c;
        case 0x327970u: goto label_327970;
        case 0x327974u: goto label_327974;
        case 0x327978u: goto label_327978;
        case 0x32797cu: goto label_32797c;
        case 0x327980u: goto label_327980;
        case 0x327984u: goto label_327984;
        case 0x327988u: goto label_327988;
        case 0x32798cu: goto label_32798c;
        case 0x327990u: goto label_327990;
        case 0x327994u: goto label_327994;
        case 0x327998u: goto label_327998;
        case 0x32799cu: goto label_32799c;
        case 0x3279a0u: goto label_3279a0;
        case 0x3279a4u: goto label_3279a4;
        case 0x3279a8u: goto label_3279a8;
        case 0x3279acu: goto label_3279ac;
        case 0x3279b0u: goto label_3279b0;
        case 0x3279b4u: goto label_3279b4;
        case 0x3279b8u: goto label_3279b8;
        case 0x3279bcu: goto label_3279bc;
        case 0x3279c0u: goto label_3279c0;
        case 0x3279c4u: goto label_3279c4;
        case 0x3279c8u: goto label_3279c8;
        case 0x3279ccu: goto label_3279cc;
        case 0x3279d0u: goto label_3279d0;
        case 0x3279d4u: goto label_3279d4;
        case 0x3279d8u: goto label_3279d8;
        case 0x3279dcu: goto label_3279dc;
        case 0x3279e0u: goto label_3279e0;
        case 0x3279e4u: goto label_3279e4;
        case 0x3279e8u: goto label_3279e8;
        case 0x3279ecu: goto label_3279ec;
        case 0x3279f0u: goto label_3279f0;
        case 0x3279f4u: goto label_3279f4;
        case 0x3279f8u: goto label_3279f8;
        case 0x3279fcu: goto label_3279fc;
        case 0x327a00u: goto label_327a00;
        case 0x327a04u: goto label_327a04;
        case 0x327a08u: goto label_327a08;
        case 0x327a0cu: goto label_327a0c;
        case 0x327a10u: goto label_327a10;
        case 0x327a14u: goto label_327a14;
        case 0x327a18u: goto label_327a18;
        case 0x327a1cu: goto label_327a1c;
        case 0x327a20u: goto label_327a20;
        case 0x327a24u: goto label_327a24;
        case 0x327a28u: goto label_327a28;
        case 0x327a2cu: goto label_327a2c;
        case 0x327a30u: goto label_327a30;
        case 0x327a34u: goto label_327a34;
        case 0x327a38u: goto label_327a38;
        case 0x327a3cu: goto label_327a3c;
        case 0x327a40u: goto label_327a40;
        case 0x327a44u: goto label_327a44;
        case 0x327a48u: goto label_327a48;
        case 0x327a4cu: goto label_327a4c;
        case 0x327a50u: goto label_327a50;
        case 0x327a54u: goto label_327a54;
        case 0x327a58u: goto label_327a58;
        case 0x327a5cu: goto label_327a5c;
        case 0x327a60u: goto label_327a60;
        case 0x327a64u: goto label_327a64;
        case 0x327a68u: goto label_327a68;
        case 0x327a6cu: goto label_327a6c;
        case 0x327a70u: goto label_327a70;
        case 0x327a74u: goto label_327a74;
        case 0x327a78u: goto label_327a78;
        case 0x327a7cu: goto label_327a7c;
        case 0x327a80u: goto label_327a80;
        case 0x327a84u: goto label_327a84;
        case 0x327a88u: goto label_327a88;
        case 0x327a8cu: goto label_327a8c;
        case 0x327a90u: goto label_327a90;
        case 0x327a94u: goto label_327a94;
        case 0x327a98u: goto label_327a98;
        case 0x327a9cu: goto label_327a9c;
        case 0x327aa0u: goto label_327aa0;
        case 0x327aa4u: goto label_327aa4;
        case 0x327aa8u: goto label_327aa8;
        case 0x327aacu: goto label_327aac;
        case 0x327ab0u: goto label_327ab0;
        case 0x327ab4u: goto label_327ab4;
        case 0x327ab8u: goto label_327ab8;
        case 0x327abcu: goto label_327abc;
        case 0x327ac0u: goto label_327ac0;
        case 0x327ac4u: goto label_327ac4;
        case 0x327ac8u: goto label_327ac8;
        case 0x327accu: goto label_327acc;
        case 0x327ad0u: goto label_327ad0;
        case 0x327ad4u: goto label_327ad4;
        case 0x327ad8u: goto label_327ad8;
        case 0x327adcu: goto label_327adc;
        case 0x327ae0u: goto label_327ae0;
        case 0x327ae4u: goto label_327ae4;
        case 0x327ae8u: goto label_327ae8;
        case 0x327aecu: goto label_327aec;
        case 0x327af0u: goto label_327af0;
        case 0x327af4u: goto label_327af4;
        case 0x327af8u: goto label_327af8;
        case 0x327afcu: goto label_327afc;
        case 0x327b00u: goto label_327b00;
        case 0x327b04u: goto label_327b04;
        case 0x327b08u: goto label_327b08;
        case 0x327b0cu: goto label_327b0c;
        case 0x327b10u: goto label_327b10;
        case 0x327b14u: goto label_327b14;
        case 0x327b18u: goto label_327b18;
        case 0x327b1cu: goto label_327b1c;
        case 0x327b20u: goto label_327b20;
        case 0x327b24u: goto label_327b24;
        case 0x327b28u: goto label_327b28;
        case 0x327b2cu: goto label_327b2c;
        case 0x327b30u: goto label_327b30;
        case 0x327b34u: goto label_327b34;
        case 0x327b38u: goto label_327b38;
        case 0x327b3cu: goto label_327b3c;
        case 0x327b40u: goto label_327b40;
        case 0x327b44u: goto label_327b44;
        case 0x327b48u: goto label_327b48;
        case 0x327b4cu: goto label_327b4c;
        case 0x327b50u: goto label_327b50;
        case 0x327b54u: goto label_327b54;
        case 0x327b58u: goto label_327b58;
        case 0x327b5cu: goto label_327b5c;
        case 0x327b60u: goto label_327b60;
        case 0x327b64u: goto label_327b64;
        case 0x327b68u: goto label_327b68;
        case 0x327b6cu: goto label_327b6c;
        case 0x327b70u: goto label_327b70;
        case 0x327b74u: goto label_327b74;
        case 0x327b78u: goto label_327b78;
        case 0x327b7cu: goto label_327b7c;
        case 0x327b80u: goto label_327b80;
        case 0x327b84u: goto label_327b84;
        case 0x327b88u: goto label_327b88;
        case 0x327b8cu: goto label_327b8c;
        case 0x327b90u: goto label_327b90;
        case 0x327b94u: goto label_327b94;
        case 0x327b98u: goto label_327b98;
        case 0x327b9cu: goto label_327b9c;
        case 0x327ba0u: goto label_327ba0;
        case 0x327ba4u: goto label_327ba4;
        case 0x327ba8u: goto label_327ba8;
        case 0x327bacu: goto label_327bac;
        case 0x327bb0u: goto label_327bb0;
        case 0x327bb4u: goto label_327bb4;
        case 0x327bb8u: goto label_327bb8;
        case 0x327bbcu: goto label_327bbc;
        case 0x327bc0u: goto label_327bc0;
        case 0x327bc4u: goto label_327bc4;
        case 0x327bc8u: goto label_327bc8;
        case 0x327bccu: goto label_327bcc;
        case 0x327bd0u: goto label_327bd0;
        case 0x327bd4u: goto label_327bd4;
        case 0x327bd8u: goto label_327bd8;
        case 0x327bdcu: goto label_327bdc;
        case 0x327be0u: goto label_327be0;
        case 0x327be4u: goto label_327be4;
        case 0x327be8u: goto label_327be8;
        case 0x327becu: goto label_327bec;
        case 0x327bf0u: goto label_327bf0;
        case 0x327bf4u: goto label_327bf4;
        case 0x327bf8u: goto label_327bf8;
        case 0x327bfcu: goto label_327bfc;
        case 0x327c00u: goto label_327c00;
        case 0x327c04u: goto label_327c04;
        case 0x327c08u: goto label_327c08;
        case 0x327c0cu: goto label_327c0c;
        case 0x327c10u: goto label_327c10;
        case 0x327c14u: goto label_327c14;
        case 0x327c18u: goto label_327c18;
        case 0x327c1cu: goto label_327c1c;
        case 0x327c20u: goto label_327c20;
        case 0x327c24u: goto label_327c24;
        case 0x327c28u: goto label_327c28;
        case 0x327c2cu: goto label_327c2c;
        case 0x327c30u: goto label_327c30;
        case 0x327c34u: goto label_327c34;
        case 0x327c38u: goto label_327c38;
        case 0x327c3cu: goto label_327c3c;
        case 0x327c40u: goto label_327c40;
        case 0x327c44u: goto label_327c44;
        case 0x327c48u: goto label_327c48;
        case 0x327c4cu: goto label_327c4c;
        case 0x327c50u: goto label_327c50;
        case 0x327c54u: goto label_327c54;
        case 0x327c58u: goto label_327c58;
        case 0x327c5cu: goto label_327c5c;
        case 0x327c60u: goto label_327c60;
        case 0x327c64u: goto label_327c64;
        case 0x327c68u: goto label_327c68;
        case 0x327c6cu: goto label_327c6c;
        case 0x327c70u: goto label_327c70;
        case 0x327c74u: goto label_327c74;
        case 0x327c78u: goto label_327c78;
        case 0x327c7cu: goto label_327c7c;
        case 0x327c80u: goto label_327c80;
        case 0x327c84u: goto label_327c84;
        case 0x327c88u: goto label_327c88;
        case 0x327c8cu: goto label_327c8c;
        case 0x327c90u: goto label_327c90;
        case 0x327c94u: goto label_327c94;
        case 0x327c98u: goto label_327c98;
        case 0x327c9cu: goto label_327c9c;
        case 0x327ca0u: goto label_327ca0;
        case 0x327ca4u: goto label_327ca4;
        case 0x327ca8u: goto label_327ca8;
        case 0x327cacu: goto label_327cac;
        case 0x327cb0u: goto label_327cb0;
        case 0x327cb4u: goto label_327cb4;
        case 0x327cb8u: goto label_327cb8;
        case 0x327cbcu: goto label_327cbc;
        case 0x327cc0u: goto label_327cc0;
        case 0x327cc4u: goto label_327cc4;
        case 0x327cc8u: goto label_327cc8;
        case 0x327cccu: goto label_327ccc;
        case 0x327cd0u: goto label_327cd0;
        case 0x327cd4u: goto label_327cd4;
        case 0x327cd8u: goto label_327cd8;
        case 0x327cdcu: goto label_327cdc;
        case 0x327ce0u: goto label_327ce0;
        case 0x327ce4u: goto label_327ce4;
        case 0x327ce8u: goto label_327ce8;
        case 0x327cecu: goto label_327cec;
        case 0x327cf0u: goto label_327cf0;
        case 0x327cf4u: goto label_327cf4;
        case 0x327cf8u: goto label_327cf8;
        case 0x327cfcu: goto label_327cfc;
        case 0x327d00u: goto label_327d00;
        case 0x327d04u: goto label_327d04;
        case 0x327d08u: goto label_327d08;
        case 0x327d0cu: goto label_327d0c;
        case 0x327d10u: goto label_327d10;
        case 0x327d14u: goto label_327d14;
        case 0x327d18u: goto label_327d18;
        case 0x327d1cu: goto label_327d1c;
        case 0x327d20u: goto label_327d20;
        case 0x327d24u: goto label_327d24;
        case 0x327d28u: goto label_327d28;
        case 0x327d2cu: goto label_327d2c;
        case 0x327d30u: goto label_327d30;
        case 0x327d34u: goto label_327d34;
        case 0x327d38u: goto label_327d38;
        case 0x327d3cu: goto label_327d3c;
        case 0x327d40u: goto label_327d40;
        case 0x327d44u: goto label_327d44;
        case 0x327d48u: goto label_327d48;
        case 0x327d4cu: goto label_327d4c;
        case 0x327d50u: goto label_327d50;
        case 0x327d54u: goto label_327d54;
        case 0x327d58u: goto label_327d58;
        case 0x327d5cu: goto label_327d5c;
        case 0x327d60u: goto label_327d60;
        case 0x327d64u: goto label_327d64;
        case 0x327d68u: goto label_327d68;
        case 0x327d6cu: goto label_327d6c;
        case 0x327d70u: goto label_327d70;
        case 0x327d74u: goto label_327d74;
        case 0x327d78u: goto label_327d78;
        case 0x327d7cu: goto label_327d7c;
        case 0x327d80u: goto label_327d80;
        case 0x327d84u: goto label_327d84;
        case 0x327d88u: goto label_327d88;
        case 0x327d8cu: goto label_327d8c;
        case 0x327d90u: goto label_327d90;
        case 0x327d94u: goto label_327d94;
        case 0x327d98u: goto label_327d98;
        case 0x327d9cu: goto label_327d9c;
        case 0x327da0u: goto label_327da0;
        case 0x327da4u: goto label_327da4;
        case 0x327da8u: goto label_327da8;
        case 0x327dacu: goto label_327dac;
        case 0x327db0u: goto label_327db0;
        case 0x327db4u: goto label_327db4;
        case 0x327db8u: goto label_327db8;
        case 0x327dbcu: goto label_327dbc;
        case 0x327dc0u: goto label_327dc0;
        case 0x327dc4u: goto label_327dc4;
        case 0x327dc8u: goto label_327dc8;
        case 0x327dccu: goto label_327dcc;
        case 0x327dd0u: goto label_327dd0;
        case 0x327dd4u: goto label_327dd4;
        case 0x327dd8u: goto label_327dd8;
        case 0x327ddcu: goto label_327ddc;
        case 0x327de0u: goto label_327de0;
        case 0x327de4u: goto label_327de4;
        case 0x327de8u: goto label_327de8;
        case 0x327decu: goto label_327dec;
        case 0x327df0u: goto label_327df0;
        case 0x327df4u: goto label_327df4;
        case 0x327df8u: goto label_327df8;
        case 0x327dfcu: goto label_327dfc;
        case 0x327e00u: goto label_327e00;
        case 0x327e04u: goto label_327e04;
        case 0x327e08u: goto label_327e08;
        case 0x327e0cu: goto label_327e0c;
        case 0x327e10u: goto label_327e10;
        case 0x327e14u: goto label_327e14;
        case 0x327e18u: goto label_327e18;
        case 0x327e1cu: goto label_327e1c;
        case 0x327e20u: goto label_327e20;
        case 0x327e24u: goto label_327e24;
        case 0x327e28u: goto label_327e28;
        case 0x327e2cu: goto label_327e2c;
        case 0x327e30u: goto label_327e30;
        case 0x327e34u: goto label_327e34;
        case 0x327e38u: goto label_327e38;
        case 0x327e3cu: goto label_327e3c;
        case 0x327e40u: goto label_327e40;
        case 0x327e44u: goto label_327e44;
        case 0x327e48u: goto label_327e48;
        case 0x327e4cu: goto label_327e4c;
        case 0x327e50u: goto label_327e50;
        case 0x327e54u: goto label_327e54;
        case 0x327e58u: goto label_327e58;
        case 0x327e5cu: goto label_327e5c;
        case 0x327e60u: goto label_327e60;
        case 0x327e64u: goto label_327e64;
        case 0x327e68u: goto label_327e68;
        case 0x327e6cu: goto label_327e6c;
        case 0x327e70u: goto label_327e70;
        case 0x327e74u: goto label_327e74;
        case 0x327e78u: goto label_327e78;
        case 0x327e7cu: goto label_327e7c;
        case 0x327e80u: goto label_327e80;
        case 0x327e84u: goto label_327e84;
        case 0x327e88u: goto label_327e88;
        case 0x327e8cu: goto label_327e8c;
        case 0x327e90u: goto label_327e90;
        case 0x327e94u: goto label_327e94;
        case 0x327e98u: goto label_327e98;
        case 0x327e9cu: goto label_327e9c;
        case 0x327ea0u: goto label_327ea0;
        case 0x327ea4u: goto label_327ea4;
        case 0x327ea8u: goto label_327ea8;
        case 0x327eacu: goto label_327eac;
        case 0x327eb0u: goto label_327eb0;
        case 0x327eb4u: goto label_327eb4;
        case 0x327eb8u: goto label_327eb8;
        case 0x327ebcu: goto label_327ebc;
        case 0x327ec0u: goto label_327ec0;
        case 0x327ec4u: goto label_327ec4;
        case 0x327ec8u: goto label_327ec8;
        case 0x327eccu: goto label_327ecc;
        case 0x327ed0u: goto label_327ed0;
        case 0x327ed4u: goto label_327ed4;
        case 0x327ed8u: goto label_327ed8;
        case 0x327edcu: goto label_327edc;
        case 0x327ee0u: goto label_327ee0;
        case 0x327ee4u: goto label_327ee4;
        case 0x327ee8u: goto label_327ee8;
        case 0x327eecu: goto label_327eec;
        case 0x327ef0u: goto label_327ef0;
        case 0x327ef4u: goto label_327ef4;
        case 0x327ef8u: goto label_327ef8;
        case 0x327efcu: goto label_327efc;
        case 0x327f00u: goto label_327f00;
        case 0x327f04u: goto label_327f04;
        case 0x327f08u: goto label_327f08;
        case 0x327f0cu: goto label_327f0c;
        case 0x327f10u: goto label_327f10;
        case 0x327f14u: goto label_327f14;
        case 0x327f18u: goto label_327f18;
        case 0x327f1cu: goto label_327f1c;
        case 0x327f20u: goto label_327f20;
        case 0x327f24u: goto label_327f24;
        case 0x327f28u: goto label_327f28;
        case 0x327f2cu: goto label_327f2c;
        case 0x327f30u: goto label_327f30;
        case 0x327f34u: goto label_327f34;
        case 0x327f38u: goto label_327f38;
        case 0x327f3cu: goto label_327f3c;
        case 0x327f40u: goto label_327f40;
        case 0x327f44u: goto label_327f44;
        case 0x327f48u: goto label_327f48;
        case 0x327f4cu: goto label_327f4c;
        case 0x327f50u: goto label_327f50;
        case 0x327f54u: goto label_327f54;
        case 0x327f58u: goto label_327f58;
        case 0x327f5cu: goto label_327f5c;
        case 0x327f60u: goto label_327f60;
        case 0x327f64u: goto label_327f64;
        case 0x327f68u: goto label_327f68;
        case 0x327f6cu: goto label_327f6c;
        case 0x327f70u: goto label_327f70;
        case 0x327f74u: goto label_327f74;
        case 0x327f78u: goto label_327f78;
        case 0x327f7cu: goto label_327f7c;
        case 0x327f80u: goto label_327f80;
        case 0x327f84u: goto label_327f84;
        case 0x327f88u: goto label_327f88;
        case 0x327f8cu: goto label_327f8c;
        case 0x327f90u: goto label_327f90;
        case 0x327f94u: goto label_327f94;
        case 0x327f98u: goto label_327f98;
        case 0x327f9cu: goto label_327f9c;
        case 0x327fa0u: goto label_327fa0;
        case 0x327fa4u: goto label_327fa4;
        case 0x327fa8u: goto label_327fa8;
        case 0x327facu: goto label_327fac;
        case 0x327fb0u: goto label_327fb0;
        case 0x327fb4u: goto label_327fb4;
        case 0x327fb8u: goto label_327fb8;
        case 0x327fbcu: goto label_327fbc;
        case 0x327fc0u: goto label_327fc0;
        case 0x327fc4u: goto label_327fc4;
        case 0x327fc8u: goto label_327fc8;
        case 0x327fccu: goto label_327fcc;
        case 0x327fd0u: goto label_327fd0;
        case 0x327fd4u: goto label_327fd4;
        case 0x327fd8u: goto label_327fd8;
        case 0x327fdcu: goto label_327fdc;
        case 0x327fe0u: goto label_327fe0;
        case 0x327fe4u: goto label_327fe4;
        case 0x327fe8u: goto label_327fe8;
        case 0x327fecu: goto label_327fec;
        case 0x327ff0u: goto label_327ff0;
        case 0x327ff4u: goto label_327ff4;
        case 0x327ff8u: goto label_327ff8;
        case 0x327ffcu: goto label_327ffc;
        case 0x328000u: goto label_328000;
        case 0x328004u: goto label_328004;
        case 0x328008u: goto label_328008;
        case 0x32800cu: goto label_32800c;
        case 0x328010u: goto label_328010;
        case 0x328014u: goto label_328014;
        case 0x328018u: goto label_328018;
        case 0x32801cu: goto label_32801c;
        case 0x328020u: goto label_328020;
        case 0x328024u: goto label_328024;
        case 0x328028u: goto label_328028;
        case 0x32802cu: goto label_32802c;
        case 0x328030u: goto label_328030;
        case 0x328034u: goto label_328034;
        case 0x328038u: goto label_328038;
        case 0x32803cu: goto label_32803c;
        case 0x328040u: goto label_328040;
        case 0x328044u: goto label_328044;
        case 0x328048u: goto label_328048;
        case 0x32804cu: goto label_32804c;
        case 0x328050u: goto label_328050;
        case 0x328054u: goto label_328054;
        case 0x328058u: goto label_328058;
        case 0x32805cu: goto label_32805c;
        case 0x328060u: goto label_328060;
        case 0x328064u: goto label_328064;
        case 0x328068u: goto label_328068;
        case 0x32806cu: goto label_32806c;
        case 0x328070u: goto label_328070;
        case 0x328074u: goto label_328074;
        case 0x328078u: goto label_328078;
        case 0x32807cu: goto label_32807c;
        case 0x328080u: goto label_328080;
        case 0x328084u: goto label_328084;
        case 0x328088u: goto label_328088;
        case 0x32808cu: goto label_32808c;
        case 0x328090u: goto label_328090;
        case 0x328094u: goto label_328094;
        case 0x328098u: goto label_328098;
        case 0x32809cu: goto label_32809c;
        case 0x3280a0u: goto label_3280a0;
        case 0x3280a4u: goto label_3280a4;
        case 0x3280a8u: goto label_3280a8;
        case 0x3280acu: goto label_3280ac;
        case 0x3280b0u: goto label_3280b0;
        case 0x3280b4u: goto label_3280b4;
        case 0x3280b8u: goto label_3280b8;
        case 0x3280bcu: goto label_3280bc;
        case 0x3280c0u: goto label_3280c0;
        case 0x3280c4u: goto label_3280c4;
        case 0x3280c8u: goto label_3280c8;
        case 0x3280ccu: goto label_3280cc;
        case 0x3280d0u: goto label_3280d0;
        case 0x3280d4u: goto label_3280d4;
        case 0x3280d8u: goto label_3280d8;
        case 0x3280dcu: goto label_3280dc;
        case 0x3280e0u: goto label_3280e0;
        case 0x3280e4u: goto label_3280e4;
        case 0x3280e8u: goto label_3280e8;
        case 0x3280ecu: goto label_3280ec;
        case 0x3280f0u: goto label_3280f0;
        case 0x3280f4u: goto label_3280f4;
        case 0x3280f8u: goto label_3280f8;
        case 0x3280fcu: goto label_3280fc;
        case 0x328100u: goto label_328100;
        case 0x328104u: goto label_328104;
        case 0x328108u: goto label_328108;
        case 0x32810cu: goto label_32810c;
        case 0x328110u: goto label_328110;
        case 0x328114u: goto label_328114;
        case 0x328118u: goto label_328118;
        case 0x32811cu: goto label_32811c;
        case 0x328120u: goto label_328120;
        case 0x328124u: goto label_328124;
        case 0x328128u: goto label_328128;
        case 0x32812cu: goto label_32812c;
        case 0x328130u: goto label_328130;
        case 0x328134u: goto label_328134;
        case 0x328138u: goto label_328138;
        case 0x32813cu: goto label_32813c;
        case 0x328140u: goto label_328140;
        case 0x328144u: goto label_328144;
        case 0x328148u: goto label_328148;
        case 0x32814cu: goto label_32814c;
        case 0x328150u: goto label_328150;
        case 0x328154u: goto label_328154;
        case 0x328158u: goto label_328158;
        case 0x32815cu: goto label_32815c;
        case 0x328160u: goto label_328160;
        case 0x328164u: goto label_328164;
        case 0x328168u: goto label_328168;
        case 0x32816cu: goto label_32816c;
        case 0x328170u: goto label_328170;
        case 0x328174u: goto label_328174;
        case 0x328178u: goto label_328178;
        case 0x32817cu: goto label_32817c;
        case 0x328180u: goto label_328180;
        case 0x328184u: goto label_328184;
        case 0x328188u: goto label_328188;
        case 0x32818cu: goto label_32818c;
        case 0x328190u: goto label_328190;
        case 0x328194u: goto label_328194;
        case 0x328198u: goto label_328198;
        case 0x32819cu: goto label_32819c;
        case 0x3281a0u: goto label_3281a0;
        case 0x3281a4u: goto label_3281a4;
        case 0x3281a8u: goto label_3281a8;
        case 0x3281acu: goto label_3281ac;
        case 0x3281b0u: goto label_3281b0;
        case 0x3281b4u: goto label_3281b4;
        case 0x3281b8u: goto label_3281b8;
        case 0x3281bcu: goto label_3281bc;
        case 0x3281c0u: goto label_3281c0;
        case 0x3281c4u: goto label_3281c4;
        case 0x3281c8u: goto label_3281c8;
        case 0x3281ccu: goto label_3281cc;
        case 0x3281d0u: goto label_3281d0;
        case 0x3281d4u: goto label_3281d4;
        case 0x3281d8u: goto label_3281d8;
        case 0x3281dcu: goto label_3281dc;
        case 0x3281e0u: goto label_3281e0;
        case 0x3281e4u: goto label_3281e4;
        case 0x3281e8u: goto label_3281e8;
        case 0x3281ecu: goto label_3281ec;
        case 0x3281f0u: goto label_3281f0;
        case 0x3281f4u: goto label_3281f4;
        case 0x3281f8u: goto label_3281f8;
        case 0x3281fcu: goto label_3281fc;
        case 0x328200u: goto label_328200;
        case 0x328204u: goto label_328204;
        case 0x328208u: goto label_328208;
        case 0x32820cu: goto label_32820c;
        case 0x328210u: goto label_328210;
        case 0x328214u: goto label_328214;
        case 0x328218u: goto label_328218;
        case 0x32821cu: goto label_32821c;
        case 0x328220u: goto label_328220;
        case 0x328224u: goto label_328224;
        case 0x328228u: goto label_328228;
        case 0x32822cu: goto label_32822c;
        case 0x328230u: goto label_328230;
        case 0x328234u: goto label_328234;
        case 0x328238u: goto label_328238;
        case 0x32823cu: goto label_32823c;
        case 0x328240u: goto label_328240;
        case 0x328244u: goto label_328244;
        case 0x328248u: goto label_328248;
        case 0x32824cu: goto label_32824c;
        case 0x328250u: goto label_328250;
        case 0x328254u: goto label_328254;
        case 0x328258u: goto label_328258;
        case 0x32825cu: goto label_32825c;
        case 0x328260u: goto label_328260;
        case 0x328264u: goto label_328264;
        case 0x328268u: goto label_328268;
        case 0x32826cu: goto label_32826c;
        case 0x328270u: goto label_328270;
        case 0x328274u: goto label_328274;
        case 0x328278u: goto label_328278;
        case 0x32827cu: goto label_32827c;
        case 0x328280u: goto label_328280;
        case 0x328284u: goto label_328284;
        case 0x328288u: goto label_328288;
        case 0x32828cu: goto label_32828c;
        case 0x328290u: goto label_328290;
        case 0x328294u: goto label_328294;
        case 0x328298u: goto label_328298;
        case 0x32829cu: goto label_32829c;
        case 0x3282a0u: goto label_3282a0;
        case 0x3282a4u: goto label_3282a4;
        case 0x3282a8u: goto label_3282a8;
        case 0x3282acu: goto label_3282ac;
        case 0x3282b0u: goto label_3282b0;
        case 0x3282b4u: goto label_3282b4;
        case 0x3282b8u: goto label_3282b8;
        case 0x3282bcu: goto label_3282bc;
        case 0x3282c0u: goto label_3282c0;
        case 0x3282c4u: goto label_3282c4;
        case 0x3282c8u: goto label_3282c8;
        case 0x3282ccu: goto label_3282cc;
        case 0x3282d0u: goto label_3282d0;
        case 0x3282d4u: goto label_3282d4;
        case 0x3282d8u: goto label_3282d8;
        case 0x3282dcu: goto label_3282dc;
        case 0x3282e0u: goto label_3282e0;
        case 0x3282e4u: goto label_3282e4;
        case 0x3282e8u: goto label_3282e8;
        case 0x3282ecu: goto label_3282ec;
        case 0x3282f0u: goto label_3282f0;
        case 0x3282f4u: goto label_3282f4;
        case 0x3282f8u: goto label_3282f8;
        case 0x3282fcu: goto label_3282fc;
        case 0x328300u: goto label_328300;
        case 0x328304u: goto label_328304;
        case 0x328308u: goto label_328308;
        case 0x32830cu: goto label_32830c;
        case 0x328310u: goto label_328310;
        case 0x328314u: goto label_328314;
        case 0x328318u: goto label_328318;
        case 0x32831cu: goto label_32831c;
        case 0x328320u: goto label_328320;
        case 0x328324u: goto label_328324;
        case 0x328328u: goto label_328328;
        case 0x32832cu: goto label_32832c;
        case 0x328330u: goto label_328330;
        case 0x328334u: goto label_328334;
        case 0x328338u: goto label_328338;
        case 0x32833cu: goto label_32833c;
        case 0x328340u: goto label_328340;
        case 0x328344u: goto label_328344;
        case 0x328348u: goto label_328348;
        case 0x32834cu: goto label_32834c;
        case 0x328350u: goto label_328350;
        case 0x328354u: goto label_328354;
        case 0x328358u: goto label_328358;
        case 0x32835cu: goto label_32835c;
        case 0x328360u: goto label_328360;
        case 0x328364u: goto label_328364;
        case 0x328368u: goto label_328368;
        case 0x32836cu: goto label_32836c;
        case 0x328370u: goto label_328370;
        case 0x328374u: goto label_328374;
        case 0x328378u: goto label_328378;
        case 0x32837cu: goto label_32837c;
        case 0x328380u: goto label_328380;
        case 0x328384u: goto label_328384;
        case 0x328388u: goto label_328388;
        case 0x32838cu: goto label_32838c;
        case 0x328390u: goto label_328390;
        case 0x328394u: goto label_328394;
        case 0x328398u: goto label_328398;
        case 0x32839cu: goto label_32839c;
        case 0x3283a0u: goto label_3283a0;
        case 0x3283a4u: goto label_3283a4;
        case 0x3283a8u: goto label_3283a8;
        case 0x3283acu: goto label_3283ac;
        case 0x3283b0u: goto label_3283b0;
        case 0x3283b4u: goto label_3283b4;
        case 0x3283b8u: goto label_3283b8;
        case 0x3283bcu: goto label_3283bc;
        case 0x3283c0u: goto label_3283c0;
        case 0x3283c4u: goto label_3283c4;
        case 0x3283c8u: goto label_3283c8;
        case 0x3283ccu: goto label_3283cc;
        case 0x3283d0u: goto label_3283d0;
        case 0x3283d4u: goto label_3283d4;
        case 0x3283d8u: goto label_3283d8;
        case 0x3283dcu: goto label_3283dc;
        case 0x3283e0u: goto label_3283e0;
        case 0x3283e4u: goto label_3283e4;
        case 0x3283e8u: goto label_3283e8;
        case 0x3283ecu: goto label_3283ec;
        case 0x3283f0u: goto label_3283f0;
        case 0x3283f4u: goto label_3283f4;
        case 0x3283f8u: goto label_3283f8;
        case 0x3283fcu: goto label_3283fc;
        case 0x328400u: goto label_328400;
        case 0x328404u: goto label_328404;
        case 0x328408u: goto label_328408;
        case 0x32840cu: goto label_32840c;
        case 0x328410u: goto label_328410;
        case 0x328414u: goto label_328414;
        case 0x328418u: goto label_328418;
        case 0x32841cu: goto label_32841c;
        case 0x328420u: goto label_328420;
        case 0x328424u: goto label_328424;
        case 0x328428u: goto label_328428;
        case 0x32842cu: goto label_32842c;
        case 0x328430u: goto label_328430;
        case 0x328434u: goto label_328434;
        case 0x328438u: goto label_328438;
        case 0x32843cu: goto label_32843c;
        case 0x328440u: goto label_328440;
        case 0x328444u: goto label_328444;
        case 0x328448u: goto label_328448;
        case 0x32844cu: goto label_32844c;
        case 0x328450u: goto label_328450;
        case 0x328454u: goto label_328454;
        case 0x328458u: goto label_328458;
        case 0x32845cu: goto label_32845c;
        case 0x328460u: goto label_328460;
        case 0x328464u: goto label_328464;
        case 0x328468u: goto label_328468;
        case 0x32846cu: goto label_32846c;
        case 0x328470u: goto label_328470;
        case 0x328474u: goto label_328474;
        case 0x328478u: goto label_328478;
        case 0x32847cu: goto label_32847c;
        case 0x328480u: goto label_328480;
        case 0x328484u: goto label_328484;
        case 0x328488u: goto label_328488;
        case 0x32848cu: goto label_32848c;
        case 0x328490u: goto label_328490;
        case 0x328494u: goto label_328494;
        case 0x328498u: goto label_328498;
        case 0x32849cu: goto label_32849c;
        case 0x3284a0u: goto label_3284a0;
        case 0x3284a4u: goto label_3284a4;
        case 0x3284a8u: goto label_3284a8;
        case 0x3284acu: goto label_3284ac;
        case 0x3284b0u: goto label_3284b0;
        case 0x3284b4u: goto label_3284b4;
        case 0x3284b8u: goto label_3284b8;
        case 0x3284bcu: goto label_3284bc;
        case 0x3284c0u: goto label_3284c0;
        case 0x3284c4u: goto label_3284c4;
        case 0x3284c8u: goto label_3284c8;
        case 0x3284ccu: goto label_3284cc;
        case 0x3284d0u: goto label_3284d0;
        case 0x3284d4u: goto label_3284d4;
        case 0x3284d8u: goto label_3284d8;
        case 0x3284dcu: goto label_3284dc;
        case 0x3284e0u: goto label_3284e0;
        case 0x3284e4u: goto label_3284e4;
        case 0x3284e8u: goto label_3284e8;
        case 0x3284ecu: goto label_3284ec;
        case 0x3284f0u: goto label_3284f0;
        case 0x3284f4u: goto label_3284f4;
        case 0x3284f8u: goto label_3284f8;
        case 0x3284fcu: goto label_3284fc;
        case 0x328500u: goto label_328500;
        case 0x328504u: goto label_328504;
        case 0x328508u: goto label_328508;
        case 0x32850cu: goto label_32850c;
        case 0x328510u: goto label_328510;
        case 0x328514u: goto label_328514;
        case 0x328518u: goto label_328518;
        case 0x32851cu: goto label_32851c;
        case 0x328520u: goto label_328520;
        case 0x328524u: goto label_328524;
        case 0x328528u: goto label_328528;
        case 0x32852cu: goto label_32852c;
        case 0x328530u: goto label_328530;
        case 0x328534u: goto label_328534;
        case 0x328538u: goto label_328538;
        case 0x32853cu: goto label_32853c;
        case 0x328540u: goto label_328540;
        case 0x328544u: goto label_328544;
        case 0x328548u: goto label_328548;
        case 0x32854cu: goto label_32854c;
        case 0x328550u: goto label_328550;
        case 0x328554u: goto label_328554;
        case 0x328558u: goto label_328558;
        case 0x32855cu: goto label_32855c;
        case 0x328560u: goto label_328560;
        case 0x328564u: goto label_328564;
        case 0x328568u: goto label_328568;
        case 0x32856cu: goto label_32856c;
        case 0x328570u: goto label_328570;
        case 0x328574u: goto label_328574;
        case 0x328578u: goto label_328578;
        case 0x32857cu: goto label_32857c;
        case 0x328580u: goto label_328580;
        case 0x328584u: goto label_328584;
        case 0x328588u: goto label_328588;
        case 0x32858cu: goto label_32858c;
        case 0x328590u: goto label_328590;
        case 0x328594u: goto label_328594;
        case 0x328598u: goto label_328598;
        case 0x32859cu: goto label_32859c;
        case 0x3285a0u: goto label_3285a0;
        case 0x3285a4u: goto label_3285a4;
        case 0x3285a8u: goto label_3285a8;
        case 0x3285acu: goto label_3285ac;
        case 0x3285b0u: goto label_3285b0;
        case 0x3285b4u: goto label_3285b4;
        case 0x3285b8u: goto label_3285b8;
        case 0x3285bcu: goto label_3285bc;
        case 0x3285c0u: goto label_3285c0;
        case 0x3285c4u: goto label_3285c4;
        case 0x3285c8u: goto label_3285c8;
        case 0x3285ccu: goto label_3285cc;
        case 0x3285d0u: goto label_3285d0;
        case 0x3285d4u: goto label_3285d4;
        case 0x3285d8u: goto label_3285d8;
        case 0x3285dcu: goto label_3285dc;
        case 0x3285e0u: goto label_3285e0;
        case 0x3285e4u: goto label_3285e4;
        case 0x3285e8u: goto label_3285e8;
        case 0x3285ecu: goto label_3285ec;
        case 0x3285f0u: goto label_3285f0;
        case 0x3285f4u: goto label_3285f4;
        case 0x3285f8u: goto label_3285f8;
        case 0x3285fcu: goto label_3285fc;
        case 0x328600u: goto label_328600;
        case 0x328604u: goto label_328604;
        case 0x328608u: goto label_328608;
        case 0x32860cu: goto label_32860c;
        case 0x328610u: goto label_328610;
        case 0x328614u: goto label_328614;
        case 0x328618u: goto label_328618;
        case 0x32861cu: goto label_32861c;
        case 0x328620u: goto label_328620;
        case 0x328624u: goto label_328624;
        case 0x328628u: goto label_328628;
        case 0x32862cu: goto label_32862c;
        case 0x328630u: goto label_328630;
        case 0x328634u: goto label_328634;
        case 0x328638u: goto label_328638;
        case 0x32863cu: goto label_32863c;
        case 0x328640u: goto label_328640;
        case 0x328644u: goto label_328644;
        case 0x328648u: goto label_328648;
        case 0x32864cu: goto label_32864c;
        case 0x328650u: goto label_328650;
        case 0x328654u: goto label_328654;
        case 0x328658u: goto label_328658;
        case 0x32865cu: goto label_32865c;
        case 0x328660u: goto label_328660;
        case 0x328664u: goto label_328664;
        case 0x328668u: goto label_328668;
        case 0x32866cu: goto label_32866c;
        case 0x328670u: goto label_328670;
        case 0x328674u: goto label_328674;
        case 0x328678u: goto label_328678;
        case 0x32867cu: goto label_32867c;
        case 0x328680u: goto label_328680;
        case 0x328684u: goto label_328684;
        case 0x328688u: goto label_328688;
        case 0x32868cu: goto label_32868c;
        case 0x328690u: goto label_328690;
        case 0x328694u: goto label_328694;
        case 0x328698u: goto label_328698;
        case 0x32869cu: goto label_32869c;
        case 0x3286a0u: goto label_3286a0;
        case 0x3286a4u: goto label_3286a4;
        case 0x3286a8u: goto label_3286a8;
        case 0x3286acu: goto label_3286ac;
        case 0x3286b0u: goto label_3286b0;
        case 0x3286b4u: goto label_3286b4;
        case 0x3286b8u: goto label_3286b8;
        case 0x3286bcu: goto label_3286bc;
        case 0x3286c0u: goto label_3286c0;
        case 0x3286c4u: goto label_3286c4;
        case 0x3286c8u: goto label_3286c8;
        case 0x3286ccu: goto label_3286cc;
        case 0x3286d0u: goto label_3286d0;
        case 0x3286d4u: goto label_3286d4;
        case 0x3286d8u: goto label_3286d8;
        case 0x3286dcu: goto label_3286dc;
        case 0x3286e0u: goto label_3286e0;
        case 0x3286e4u: goto label_3286e4;
        case 0x3286e8u: goto label_3286e8;
        case 0x3286ecu: goto label_3286ec;
        case 0x3286f0u: goto label_3286f0;
        case 0x3286f4u: goto label_3286f4;
        case 0x3286f8u: goto label_3286f8;
        case 0x3286fcu: goto label_3286fc;
        case 0x328700u: goto label_328700;
        case 0x328704u: goto label_328704;
        case 0x328708u: goto label_328708;
        case 0x32870cu: goto label_32870c;
        case 0x328710u: goto label_328710;
        case 0x328714u: goto label_328714;
        case 0x328718u: goto label_328718;
        case 0x32871cu: goto label_32871c;
        case 0x328720u: goto label_328720;
        case 0x328724u: goto label_328724;
        case 0x328728u: goto label_328728;
        case 0x32872cu: goto label_32872c;
        case 0x328730u: goto label_328730;
        case 0x328734u: goto label_328734;
        case 0x328738u: goto label_328738;
        case 0x32873cu: goto label_32873c;
        case 0x328740u: goto label_328740;
        case 0x328744u: goto label_328744;
        case 0x328748u: goto label_328748;
        case 0x32874cu: goto label_32874c;
        case 0x328750u: goto label_328750;
        case 0x328754u: goto label_328754;
        case 0x328758u: goto label_328758;
        case 0x32875cu: goto label_32875c;
        case 0x328760u: goto label_328760;
        case 0x328764u: goto label_328764;
        case 0x328768u: goto label_328768;
        case 0x32876cu: goto label_32876c;
        case 0x328770u: goto label_328770;
        case 0x328774u: goto label_328774;
        case 0x328778u: goto label_328778;
        case 0x32877cu: goto label_32877c;
        case 0x328780u: goto label_328780;
        case 0x328784u: goto label_328784;
        case 0x328788u: goto label_328788;
        case 0x32878cu: goto label_32878c;
        case 0x328790u: goto label_328790;
        case 0x328794u: goto label_328794;
        case 0x328798u: goto label_328798;
        case 0x32879cu: goto label_32879c;
        case 0x3287a0u: goto label_3287a0;
        case 0x3287a4u: goto label_3287a4;
        case 0x3287a8u: goto label_3287a8;
        case 0x3287acu: goto label_3287ac;
        case 0x3287b0u: goto label_3287b0;
        case 0x3287b4u: goto label_3287b4;
        case 0x3287b8u: goto label_3287b8;
        case 0x3287bcu: goto label_3287bc;
        case 0x3287c0u: goto label_3287c0;
        case 0x3287c4u: goto label_3287c4;
        case 0x3287c8u: goto label_3287c8;
        case 0x3287ccu: goto label_3287cc;
        case 0x3287d0u: goto label_3287d0;
        case 0x3287d4u: goto label_3287d4;
        case 0x3287d8u: goto label_3287d8;
        case 0x3287dcu: goto label_3287dc;
        case 0x3287e0u: goto label_3287e0;
        case 0x3287e4u: goto label_3287e4;
        case 0x3287e8u: goto label_3287e8;
        case 0x3287ecu: goto label_3287ec;
        case 0x3287f0u: goto label_3287f0;
        case 0x3287f4u: goto label_3287f4;
        case 0x3287f8u: goto label_3287f8;
        case 0x3287fcu: goto label_3287fc;
        case 0x328800u: goto label_328800;
        case 0x328804u: goto label_328804;
        case 0x328808u: goto label_328808;
        case 0x32880cu: goto label_32880c;
        case 0x328810u: goto label_328810;
        case 0x328814u: goto label_328814;
        case 0x328818u: goto label_328818;
        case 0x32881cu: goto label_32881c;
        case 0x328820u: goto label_328820;
        case 0x328824u: goto label_328824;
        case 0x328828u: goto label_328828;
        case 0x32882cu: goto label_32882c;
        case 0x328830u: goto label_328830;
        case 0x328834u: goto label_328834;
        case 0x328838u: goto label_328838;
        case 0x32883cu: goto label_32883c;
        case 0x328840u: goto label_328840;
        case 0x328844u: goto label_328844;
        case 0x328848u: goto label_328848;
        case 0x32884cu: goto label_32884c;
        case 0x328850u: goto label_328850;
        case 0x328854u: goto label_328854;
        case 0x328858u: goto label_328858;
        case 0x32885cu: goto label_32885c;
        case 0x328860u: goto label_328860;
        case 0x328864u: goto label_328864;
        case 0x328868u: goto label_328868;
        case 0x32886cu: goto label_32886c;
        case 0x328870u: goto label_328870;
        case 0x328874u: goto label_328874;
        case 0x328878u: goto label_328878;
        case 0x32887cu: goto label_32887c;
        case 0x328880u: goto label_328880;
        case 0x328884u: goto label_328884;
        case 0x328888u: goto label_328888;
        case 0x32888cu: goto label_32888c;
        case 0x328890u: goto label_328890;
        case 0x328894u: goto label_328894;
        case 0x328898u: goto label_328898;
        case 0x32889cu: goto label_32889c;
        case 0x3288a0u: goto label_3288a0;
        case 0x3288a4u: goto label_3288a4;
        case 0x3288a8u: goto label_3288a8;
        case 0x3288acu: goto label_3288ac;
        case 0x3288b0u: goto label_3288b0;
        case 0x3288b4u: goto label_3288b4;
        case 0x3288b8u: goto label_3288b8;
        case 0x3288bcu: goto label_3288bc;
        case 0x3288c0u: goto label_3288c0;
        case 0x3288c4u: goto label_3288c4;
        case 0x3288c8u: goto label_3288c8;
        case 0x3288ccu: goto label_3288cc;
        case 0x3288d0u: goto label_3288d0;
        case 0x3288d4u: goto label_3288d4;
        case 0x3288d8u: goto label_3288d8;
        case 0x3288dcu: goto label_3288dc;
        case 0x3288e0u: goto label_3288e0;
        case 0x3288e4u: goto label_3288e4;
        case 0x3288e8u: goto label_3288e8;
        case 0x3288ecu: goto label_3288ec;
        case 0x3288f0u: goto label_3288f0;
        case 0x3288f4u: goto label_3288f4;
        case 0x3288f8u: goto label_3288f8;
        case 0x3288fcu: goto label_3288fc;
        case 0x328900u: goto label_328900;
        case 0x328904u: goto label_328904;
        case 0x328908u: goto label_328908;
        case 0x32890cu: goto label_32890c;
        case 0x328910u: goto label_328910;
        case 0x328914u: goto label_328914;
        case 0x328918u: goto label_328918;
        case 0x32891cu: goto label_32891c;
        case 0x328920u: goto label_328920;
        case 0x328924u: goto label_328924;
        case 0x328928u: goto label_328928;
        case 0x32892cu: goto label_32892c;
        case 0x328930u: goto label_328930;
        case 0x328934u: goto label_328934;
        case 0x328938u: goto label_328938;
        case 0x32893cu: goto label_32893c;
        case 0x328940u: goto label_328940;
        case 0x328944u: goto label_328944;
        case 0x328948u: goto label_328948;
        case 0x32894cu: goto label_32894c;
        case 0x328950u: goto label_328950;
        case 0x328954u: goto label_328954;
        case 0x328958u: goto label_328958;
        case 0x32895cu: goto label_32895c;
        case 0x328960u: goto label_328960;
        case 0x328964u: goto label_328964;
        case 0x328968u: goto label_328968;
        case 0x32896cu: goto label_32896c;
        case 0x328970u: goto label_328970;
        case 0x328974u: goto label_328974;
        case 0x328978u: goto label_328978;
        case 0x32897cu: goto label_32897c;
        case 0x328980u: goto label_328980;
        case 0x328984u: goto label_328984;
        case 0x328988u: goto label_328988;
        case 0x32898cu: goto label_32898c;
        case 0x328990u: goto label_328990;
        case 0x328994u: goto label_328994;
        case 0x328998u: goto label_328998;
        case 0x32899cu: goto label_32899c;
        case 0x3289a0u: goto label_3289a0;
        case 0x3289a4u: goto label_3289a4;
        case 0x3289a8u: goto label_3289a8;
        case 0x3289acu: goto label_3289ac;
        case 0x3289b0u: goto label_3289b0;
        case 0x3289b4u: goto label_3289b4;
        case 0x3289b8u: goto label_3289b8;
        case 0x3289bcu: goto label_3289bc;
        case 0x3289c0u: goto label_3289c0;
        case 0x3289c4u: goto label_3289c4;
        case 0x3289c8u: goto label_3289c8;
        case 0x3289ccu: goto label_3289cc;
        case 0x3289d0u: goto label_3289d0;
        case 0x3289d4u: goto label_3289d4;
        case 0x3289d8u: goto label_3289d8;
        case 0x3289dcu: goto label_3289dc;
        case 0x3289e0u: goto label_3289e0;
        case 0x3289e4u: goto label_3289e4;
        case 0x3289e8u: goto label_3289e8;
        case 0x3289ecu: goto label_3289ec;
        case 0x3289f0u: goto label_3289f0;
        case 0x3289f4u: goto label_3289f4;
        case 0x3289f8u: goto label_3289f8;
        case 0x3289fcu: goto label_3289fc;
        case 0x328a00u: goto label_328a00;
        case 0x328a04u: goto label_328a04;
        case 0x328a08u: goto label_328a08;
        case 0x328a0cu: goto label_328a0c;
        case 0x328a10u: goto label_328a10;
        case 0x328a14u: goto label_328a14;
        case 0x328a18u: goto label_328a18;
        case 0x328a1cu: goto label_328a1c;
        case 0x328a20u: goto label_328a20;
        case 0x328a24u: goto label_328a24;
        case 0x328a28u: goto label_328a28;
        case 0x328a2cu: goto label_328a2c;
        case 0x328a30u: goto label_328a30;
        case 0x328a34u: goto label_328a34;
        case 0x328a38u: goto label_328a38;
        case 0x328a3cu: goto label_328a3c;
        case 0x328a40u: goto label_328a40;
        case 0x328a44u: goto label_328a44;
        case 0x328a48u: goto label_328a48;
        case 0x328a4cu: goto label_328a4c;
        case 0x328a50u: goto label_328a50;
        case 0x328a54u: goto label_328a54;
        case 0x328a58u: goto label_328a58;
        case 0x328a5cu: goto label_328a5c;
        case 0x328a60u: goto label_328a60;
        case 0x328a64u: goto label_328a64;
        case 0x328a68u: goto label_328a68;
        case 0x328a6cu: goto label_328a6c;
        case 0x328a70u: goto label_328a70;
        case 0x328a74u: goto label_328a74;
        case 0x328a78u: goto label_328a78;
        case 0x328a7cu: goto label_328a7c;
        case 0x328a80u: goto label_328a80;
        case 0x328a84u: goto label_328a84;
        case 0x328a88u: goto label_328a88;
        case 0x328a8cu: goto label_328a8c;
        case 0x328a90u: goto label_328a90;
        case 0x328a94u: goto label_328a94;
        case 0x328a98u: goto label_328a98;
        case 0x328a9cu: goto label_328a9c;
        case 0x328aa0u: goto label_328aa0;
        case 0x328aa4u: goto label_328aa4;
        case 0x328aa8u: goto label_328aa8;
        case 0x328aacu: goto label_328aac;
        case 0x328ab0u: goto label_328ab0;
        case 0x328ab4u: goto label_328ab4;
        case 0x328ab8u: goto label_328ab8;
        case 0x328abcu: goto label_328abc;
        case 0x328ac0u: goto label_328ac0;
        case 0x328ac4u: goto label_328ac4;
        case 0x328ac8u: goto label_328ac8;
        case 0x328accu: goto label_328acc;
        case 0x328ad0u: goto label_328ad0;
        case 0x328ad4u: goto label_328ad4;
        case 0x328ad8u: goto label_328ad8;
        case 0x328adcu: goto label_328adc;
        case 0x328ae0u: goto label_328ae0;
        case 0x328ae4u: goto label_328ae4;
        case 0x328ae8u: goto label_328ae8;
        case 0x328aecu: goto label_328aec;
        case 0x328af0u: goto label_328af0;
        case 0x328af4u: goto label_328af4;
        case 0x328af8u: goto label_328af8;
        case 0x328afcu: goto label_328afc;
        case 0x328b00u: goto label_328b00;
        case 0x328b04u: goto label_328b04;
        case 0x328b08u: goto label_328b08;
        case 0x328b0cu: goto label_328b0c;
        case 0x328b10u: goto label_328b10;
        case 0x328b14u: goto label_328b14;
        case 0x328b18u: goto label_328b18;
        case 0x328b1cu: goto label_328b1c;
        case 0x328b20u: goto label_328b20;
        case 0x328b24u: goto label_328b24;
        case 0x328b28u: goto label_328b28;
        case 0x328b2cu: goto label_328b2c;
        case 0x328b30u: goto label_328b30;
        case 0x328b34u: goto label_328b34;
        case 0x328b38u: goto label_328b38;
        case 0x328b3cu: goto label_328b3c;
        case 0x328b40u: goto label_328b40;
        case 0x328b44u: goto label_328b44;
        case 0x328b48u: goto label_328b48;
        case 0x328b4cu: goto label_328b4c;
        case 0x328b50u: goto label_328b50;
        case 0x328b54u: goto label_328b54;
        case 0x328b58u: goto label_328b58;
        case 0x328b5cu: goto label_328b5c;
        case 0x328b60u: goto label_328b60;
        case 0x328b64u: goto label_328b64;
        case 0x328b68u: goto label_328b68;
        case 0x328b6cu: goto label_328b6c;
        case 0x328b70u: goto label_328b70;
        case 0x328b74u: goto label_328b74;
        case 0x328b78u: goto label_328b78;
        case 0x328b7cu: goto label_328b7c;
        case 0x328b80u: goto label_328b80;
        case 0x328b84u: goto label_328b84;
        case 0x328b88u: goto label_328b88;
        case 0x328b8cu: goto label_328b8c;
        case 0x328b90u: goto label_328b90;
        case 0x328b94u: goto label_328b94;
        case 0x328b98u: goto label_328b98;
        case 0x328b9cu: goto label_328b9c;
        case 0x328ba0u: goto label_328ba0;
        case 0x328ba4u: goto label_328ba4;
        case 0x328ba8u: goto label_328ba8;
        case 0x328bacu: goto label_328bac;
        case 0x328bb0u: goto label_328bb0;
        case 0x328bb4u: goto label_328bb4;
        case 0x328bb8u: goto label_328bb8;
        case 0x328bbcu: goto label_328bbc;
        case 0x328bc0u: goto label_328bc0;
        case 0x328bc4u: goto label_328bc4;
        case 0x328bc8u: goto label_328bc8;
        case 0x328bccu: goto label_328bcc;
        case 0x328bd0u: goto label_328bd0;
        case 0x328bd4u: goto label_328bd4;
        case 0x328bd8u: goto label_328bd8;
        case 0x328bdcu: goto label_328bdc;
        case 0x328be0u: goto label_328be0;
        case 0x328be4u: goto label_328be4;
        case 0x328be8u: goto label_328be8;
        case 0x328becu: goto label_328bec;
        case 0x328bf0u: goto label_328bf0;
        case 0x328bf4u: goto label_328bf4;
        case 0x328bf8u: goto label_328bf8;
        case 0x328bfcu: goto label_328bfc;
        case 0x328c00u: goto label_328c00;
        case 0x328c04u: goto label_328c04;
        case 0x328c08u: goto label_328c08;
        case 0x328c0cu: goto label_328c0c;
        case 0x328c10u: goto label_328c10;
        case 0x328c14u: goto label_328c14;
        case 0x328c18u: goto label_328c18;
        case 0x328c1cu: goto label_328c1c;
        case 0x328c20u: goto label_328c20;
        case 0x328c24u: goto label_328c24;
        case 0x328c28u: goto label_328c28;
        case 0x328c2cu: goto label_328c2c;
        case 0x328c30u: goto label_328c30;
        case 0x328c34u: goto label_328c34;
        case 0x328c38u: goto label_328c38;
        case 0x328c3cu: goto label_328c3c;
        case 0x328c40u: goto label_328c40;
        case 0x328c44u: goto label_328c44;
        case 0x328c48u: goto label_328c48;
        case 0x328c4cu: goto label_328c4c;
        case 0x328c50u: goto label_328c50;
        case 0x328c54u: goto label_328c54;
        case 0x328c58u: goto label_328c58;
        case 0x328c5cu: goto label_328c5c;
        case 0x328c60u: goto label_328c60;
        case 0x328c64u: goto label_328c64;
        case 0x328c68u: goto label_328c68;
        case 0x328c6cu: goto label_328c6c;
        case 0x328c70u: goto label_328c70;
        case 0x328c74u: goto label_328c74;
        case 0x328c78u: goto label_328c78;
        case 0x328c7cu: goto label_328c7c;
        case 0x328c80u: goto label_328c80;
        case 0x328c84u: goto label_328c84;
        case 0x328c88u: goto label_328c88;
        case 0x328c8cu: goto label_328c8c;
        case 0x328c90u: goto label_328c90;
        case 0x328c94u: goto label_328c94;
        case 0x328c98u: goto label_328c98;
        case 0x328c9cu: goto label_328c9c;
        case 0x328ca0u: goto label_328ca0;
        case 0x328ca4u: goto label_328ca4;
        case 0x328ca8u: goto label_328ca8;
        case 0x328cacu: goto label_328cac;
        case 0x328cb0u: goto label_328cb0;
        case 0x328cb4u: goto label_328cb4;
        case 0x328cb8u: goto label_328cb8;
        case 0x328cbcu: goto label_328cbc;
        case 0x328cc0u: goto label_328cc0;
        case 0x328cc4u: goto label_328cc4;
        case 0x328cc8u: goto label_328cc8;
        case 0x328cccu: goto label_328ccc;
        case 0x328cd0u: goto label_328cd0;
        case 0x328cd4u: goto label_328cd4;
        case 0x328cd8u: goto label_328cd8;
        case 0x328cdcu: goto label_328cdc;
        case 0x328ce0u: goto label_328ce0;
        case 0x328ce4u: goto label_328ce4;
        case 0x328ce8u: goto label_328ce8;
        case 0x328cecu: goto label_328cec;
        case 0x328cf0u: goto label_328cf0;
        case 0x328cf4u: goto label_328cf4;
        case 0x328cf8u: goto label_328cf8;
        case 0x328cfcu: goto label_328cfc;
        case 0x328d00u: goto label_328d00;
        case 0x328d04u: goto label_328d04;
        case 0x328d08u: goto label_328d08;
        case 0x328d0cu: goto label_328d0c;
        case 0x328d10u: goto label_328d10;
        case 0x328d14u: goto label_328d14;
        case 0x328d18u: goto label_328d18;
        case 0x328d1cu: goto label_328d1c;
        case 0x328d20u: goto label_328d20;
        case 0x328d24u: goto label_328d24;
        case 0x328d28u: goto label_328d28;
        case 0x328d2cu: goto label_328d2c;
        case 0x328d30u: goto label_328d30;
        case 0x328d34u: goto label_328d34;
        case 0x328d38u: goto label_328d38;
        case 0x328d3cu: goto label_328d3c;
        case 0x328d40u: goto label_328d40;
        case 0x328d44u: goto label_328d44;
        case 0x328d48u: goto label_328d48;
        case 0x328d4cu: goto label_328d4c;
        case 0x328d50u: goto label_328d50;
        case 0x328d54u: goto label_328d54;
        case 0x328d58u: goto label_328d58;
        case 0x328d5cu: goto label_328d5c;
        case 0x328d60u: goto label_328d60;
        case 0x328d64u: goto label_328d64;
        case 0x328d68u: goto label_328d68;
        case 0x328d6cu: goto label_328d6c;
        case 0x328d70u: goto label_328d70;
        case 0x328d74u: goto label_328d74;
        case 0x328d78u: goto label_328d78;
        case 0x328d7cu: goto label_328d7c;
        case 0x328d80u: goto label_328d80;
        case 0x328d84u: goto label_328d84;
        case 0x328d88u: goto label_328d88;
        case 0x328d8cu: goto label_328d8c;
        case 0x328d90u: goto label_328d90;
        case 0x328d94u: goto label_328d94;
        case 0x328d98u: goto label_328d98;
        case 0x328d9cu: goto label_328d9c;
        case 0x328da0u: goto label_328da0;
        case 0x328da4u: goto label_328da4;
        case 0x328da8u: goto label_328da8;
        case 0x328dacu: goto label_328dac;
        case 0x328db0u: goto label_328db0;
        case 0x328db4u: goto label_328db4;
        case 0x328db8u: goto label_328db8;
        case 0x328dbcu: goto label_328dbc;
        case 0x328dc0u: goto label_328dc0;
        case 0x328dc4u: goto label_328dc4;
        case 0x328dc8u: goto label_328dc8;
        case 0x328dccu: goto label_328dcc;
        case 0x328dd0u: goto label_328dd0;
        case 0x328dd4u: goto label_328dd4;
        case 0x328dd8u: goto label_328dd8;
        case 0x328ddcu: goto label_328ddc;
        case 0x328de0u: goto label_328de0;
        case 0x328de4u: goto label_328de4;
        case 0x328de8u: goto label_328de8;
        case 0x328decu: goto label_328dec;
        case 0x328df0u: goto label_328df0;
        case 0x328df4u: goto label_328df4;
        case 0x328df8u: goto label_328df8;
        case 0x328dfcu: goto label_328dfc;
        case 0x328e00u: goto label_328e00;
        case 0x328e04u: goto label_328e04;
        case 0x328e08u: goto label_328e08;
        case 0x328e0cu: goto label_328e0c;
        case 0x328e10u: goto label_328e10;
        case 0x328e14u: goto label_328e14;
        case 0x328e18u: goto label_328e18;
        case 0x328e1cu: goto label_328e1c;
        case 0x328e20u: goto label_328e20;
        case 0x328e24u: goto label_328e24;
        case 0x328e28u: goto label_328e28;
        case 0x328e2cu: goto label_328e2c;
        case 0x328e30u: goto label_328e30;
        case 0x328e34u: goto label_328e34;
        case 0x328e38u: goto label_328e38;
        case 0x328e3cu: goto label_328e3c;
        case 0x328e40u: goto label_328e40;
        case 0x328e44u: goto label_328e44;
        case 0x328e48u: goto label_328e48;
        case 0x328e4cu: goto label_328e4c;
        case 0x328e50u: goto label_328e50;
        case 0x328e54u: goto label_328e54;
        case 0x328e58u: goto label_328e58;
        case 0x328e5cu: goto label_328e5c;
        case 0x328e60u: goto label_328e60;
        case 0x328e64u: goto label_328e64;
        case 0x328e68u: goto label_328e68;
        case 0x328e6cu: goto label_328e6c;
        case 0x328e70u: goto label_328e70;
        case 0x328e74u: goto label_328e74;
        case 0x328e78u: goto label_328e78;
        case 0x328e7cu: goto label_328e7c;
        case 0x328e80u: goto label_328e80;
        case 0x328e84u: goto label_328e84;
        case 0x328e88u: goto label_328e88;
        case 0x328e8cu: goto label_328e8c;
        case 0x328e90u: goto label_328e90;
        case 0x328e94u: goto label_328e94;
        case 0x328e98u: goto label_328e98;
        case 0x328e9cu: goto label_328e9c;
        case 0x328ea0u: goto label_328ea0;
        case 0x328ea4u: goto label_328ea4;
        case 0x328ea8u: goto label_328ea8;
        case 0x328eacu: goto label_328eac;
        case 0x328eb0u: goto label_328eb0;
        case 0x328eb4u: goto label_328eb4;
        case 0x328eb8u: goto label_328eb8;
        case 0x328ebcu: goto label_328ebc;
        case 0x328ec0u: goto label_328ec0;
        case 0x328ec4u: goto label_328ec4;
        case 0x328ec8u: goto label_328ec8;
        case 0x328eccu: goto label_328ecc;
        case 0x328ed0u: goto label_328ed0;
        case 0x328ed4u: goto label_328ed4;
        case 0x328ed8u: goto label_328ed8;
        case 0x328edcu: goto label_328edc;
        case 0x328ee0u: goto label_328ee0;
        case 0x328ee4u: goto label_328ee4;
        case 0x328ee8u: goto label_328ee8;
        case 0x328eecu: goto label_328eec;
        case 0x328ef0u: goto label_328ef0;
        case 0x328ef4u: goto label_328ef4;
        case 0x328ef8u: goto label_328ef8;
        case 0x328efcu: goto label_328efc;
        case 0x328f00u: goto label_328f00;
        case 0x328f04u: goto label_328f04;
        case 0x328f08u: goto label_328f08;
        case 0x328f0cu: goto label_328f0c;
        case 0x328f10u: goto label_328f10;
        case 0x328f14u: goto label_328f14;
        case 0x328f18u: goto label_328f18;
        case 0x328f1cu: goto label_328f1c;
        case 0x328f20u: goto label_328f20;
        case 0x328f24u: goto label_328f24;
        case 0x328f28u: goto label_328f28;
        case 0x328f2cu: goto label_328f2c;
        case 0x328f30u: goto label_328f30;
        case 0x328f34u: goto label_328f34;
        case 0x328f38u: goto label_328f38;
        case 0x328f3cu: goto label_328f3c;
        case 0x328f40u: goto label_328f40;
        case 0x328f44u: goto label_328f44;
        case 0x328f48u: goto label_328f48;
        case 0x328f4cu: goto label_328f4c;
        case 0x328f50u: goto label_328f50;
        case 0x328f54u: goto label_328f54;
        case 0x328f58u: goto label_328f58;
        case 0x328f5cu: goto label_328f5c;
        case 0x328f60u: goto label_328f60;
        case 0x328f64u: goto label_328f64;
        case 0x328f68u: goto label_328f68;
        case 0x328f6cu: goto label_328f6c;
        case 0x328f70u: goto label_328f70;
        case 0x328f74u: goto label_328f74;
        case 0x328f78u: goto label_328f78;
        case 0x328f7cu: goto label_328f7c;
        case 0x328f80u: goto label_328f80;
        case 0x328f84u: goto label_328f84;
        case 0x328f88u: goto label_328f88;
        case 0x328f8cu: goto label_328f8c;
        case 0x328f90u: goto label_328f90;
        case 0x328f94u: goto label_328f94;
        case 0x328f98u: goto label_328f98;
        case 0x328f9cu: goto label_328f9c;
        case 0x328fa0u: goto label_328fa0;
        case 0x328fa4u: goto label_328fa4;
        case 0x328fa8u: goto label_328fa8;
        case 0x328facu: goto label_328fac;
        case 0x328fb0u: goto label_328fb0;
        case 0x328fb4u: goto label_328fb4;
        case 0x328fb8u: goto label_328fb8;
        case 0x328fbcu: goto label_328fbc;
        case 0x328fc0u: goto label_328fc0;
        case 0x328fc4u: goto label_328fc4;
        case 0x328fc8u: goto label_328fc8;
        case 0x328fccu: goto label_328fcc;
        case 0x328fd0u: goto label_328fd0;
        case 0x328fd4u: goto label_328fd4;
        case 0x328fd8u: goto label_328fd8;
        case 0x328fdcu: goto label_328fdc;
        case 0x328fe0u: goto label_328fe0;
        case 0x328fe4u: goto label_328fe4;
        case 0x328fe8u: goto label_328fe8;
        case 0x328fecu: goto label_328fec;
        case 0x328ff0u: goto label_328ff0;
        case 0x328ff4u: goto label_328ff4;
        case 0x328ff8u: goto label_328ff8;
        case 0x328ffcu: goto label_328ffc;
        case 0x329000u: goto label_329000;
        case 0x329004u: goto label_329004;
        case 0x329008u: goto label_329008;
        case 0x32900cu: goto label_32900c;
        case 0x329010u: goto label_329010;
        case 0x329014u: goto label_329014;
        case 0x329018u: goto label_329018;
        case 0x32901cu: goto label_32901c;
        case 0x329020u: goto label_329020;
        case 0x329024u: goto label_329024;
        case 0x329028u: goto label_329028;
        case 0x32902cu: goto label_32902c;
        case 0x329030u: goto label_329030;
        case 0x329034u: goto label_329034;
        case 0x329038u: goto label_329038;
        case 0x32903cu: goto label_32903c;
        case 0x329040u: goto label_329040;
        case 0x329044u: goto label_329044;
        case 0x329048u: goto label_329048;
        case 0x32904cu: goto label_32904c;
        case 0x329050u: goto label_329050;
        case 0x329054u: goto label_329054;
        case 0x329058u: goto label_329058;
        case 0x32905cu: goto label_32905c;
        case 0x329060u: goto label_329060;
        case 0x329064u: goto label_329064;
        case 0x329068u: goto label_329068;
        case 0x32906cu: goto label_32906c;
        case 0x329070u: goto label_329070;
        case 0x329074u: goto label_329074;
        case 0x329078u: goto label_329078;
        case 0x32907cu: goto label_32907c;
        case 0x329080u: goto label_329080;
        case 0x329084u: goto label_329084;
        case 0x329088u: goto label_329088;
        case 0x32908cu: goto label_32908c;
        case 0x329090u: goto label_329090;
        case 0x329094u: goto label_329094;
        case 0x329098u: goto label_329098;
        case 0x32909cu: goto label_32909c;
        case 0x3290a0u: goto label_3290a0;
        case 0x3290a4u: goto label_3290a4;
        case 0x3290a8u: goto label_3290a8;
        case 0x3290acu: goto label_3290ac;
        case 0x3290b0u: goto label_3290b0;
        case 0x3290b4u: goto label_3290b4;
        case 0x3290b8u: goto label_3290b8;
        case 0x3290bcu: goto label_3290bc;
        case 0x3290c0u: goto label_3290c0;
        case 0x3290c4u: goto label_3290c4;
        case 0x3290c8u: goto label_3290c8;
        case 0x3290ccu: goto label_3290cc;
        case 0x3290d0u: goto label_3290d0;
        case 0x3290d4u: goto label_3290d4;
        case 0x3290d8u: goto label_3290d8;
        case 0x3290dcu: goto label_3290dc;
        case 0x3290e0u: goto label_3290e0;
        case 0x3290e4u: goto label_3290e4;
        case 0x3290e8u: goto label_3290e8;
        case 0x3290ecu: goto label_3290ec;
        case 0x3290f0u: goto label_3290f0;
        case 0x3290f4u: goto label_3290f4;
        case 0x3290f8u: goto label_3290f8;
        case 0x3290fcu: goto label_3290fc;
        case 0x329100u: goto label_329100;
        case 0x329104u: goto label_329104;
        case 0x329108u: goto label_329108;
        case 0x32910cu: goto label_32910c;
        case 0x329110u: goto label_329110;
        case 0x329114u: goto label_329114;
        case 0x329118u: goto label_329118;
        case 0x32911cu: goto label_32911c;
        case 0x329120u: goto label_329120;
        case 0x329124u: goto label_329124;
        case 0x329128u: goto label_329128;
        case 0x32912cu: goto label_32912c;
        case 0x329130u: goto label_329130;
        case 0x329134u: goto label_329134;
        case 0x329138u: goto label_329138;
        case 0x32913cu: goto label_32913c;
        case 0x329140u: goto label_329140;
        case 0x329144u: goto label_329144;
        case 0x329148u: goto label_329148;
        case 0x32914cu: goto label_32914c;
        case 0x329150u: goto label_329150;
        case 0x329154u: goto label_329154;
        case 0x329158u: goto label_329158;
        case 0x32915cu: goto label_32915c;
        case 0x329160u: goto label_329160;
        case 0x329164u: goto label_329164;
        case 0x329168u: goto label_329168;
        case 0x32916cu: goto label_32916c;
        case 0x329170u: goto label_329170;
        case 0x329174u: goto label_329174;
        case 0x329178u: goto label_329178;
        case 0x32917cu: goto label_32917c;
        case 0x329180u: goto label_329180;
        case 0x329184u: goto label_329184;
        case 0x329188u: goto label_329188;
        case 0x32918cu: goto label_32918c;
        case 0x329190u: goto label_329190;
        case 0x329194u: goto label_329194;
        case 0x329198u: goto label_329198;
        case 0x32919cu: goto label_32919c;
        case 0x3291a0u: goto label_3291a0;
        case 0x3291a4u: goto label_3291a4;
        case 0x3291a8u: goto label_3291a8;
        case 0x3291acu: goto label_3291ac;
        case 0x3291b0u: goto label_3291b0;
        case 0x3291b4u: goto label_3291b4;
        case 0x3291b8u: goto label_3291b8;
        case 0x3291bcu: goto label_3291bc;
        case 0x3291c0u: goto label_3291c0;
        case 0x3291c4u: goto label_3291c4;
        case 0x3291c8u: goto label_3291c8;
        case 0x3291ccu: goto label_3291cc;
        case 0x3291d0u: goto label_3291d0;
        case 0x3291d4u: goto label_3291d4;
        case 0x3291d8u: goto label_3291d8;
        case 0x3291dcu: goto label_3291dc;
        case 0x3291e0u: goto label_3291e0;
        case 0x3291e4u: goto label_3291e4;
        case 0x3291e8u: goto label_3291e8;
        case 0x3291ecu: goto label_3291ec;
        case 0x3291f0u: goto label_3291f0;
        case 0x3291f4u: goto label_3291f4;
        case 0x3291f8u: goto label_3291f8;
        case 0x3291fcu: goto label_3291fc;
        case 0x329200u: goto label_329200;
        case 0x329204u: goto label_329204;
        case 0x329208u: goto label_329208;
        case 0x32920cu: goto label_32920c;
        case 0x329210u: goto label_329210;
        case 0x329214u: goto label_329214;
        case 0x329218u: goto label_329218;
        case 0x32921cu: goto label_32921c;
        case 0x329220u: goto label_329220;
        case 0x329224u: goto label_329224;
        case 0x329228u: goto label_329228;
        case 0x32922cu: goto label_32922c;
        case 0x329230u: goto label_329230;
        case 0x329234u: goto label_329234;
        case 0x329238u: goto label_329238;
        case 0x32923cu: goto label_32923c;
        case 0x329240u: goto label_329240;
        case 0x329244u: goto label_329244;
        case 0x329248u: goto label_329248;
        case 0x32924cu: goto label_32924c;
        case 0x329250u: goto label_329250;
        case 0x329254u: goto label_329254;
        case 0x329258u: goto label_329258;
        case 0x32925cu: goto label_32925c;
        case 0x329260u: goto label_329260;
        case 0x329264u: goto label_329264;
        case 0x329268u: goto label_329268;
        case 0x32926cu: goto label_32926c;
        case 0x329270u: goto label_329270;
        case 0x329274u: goto label_329274;
        case 0x329278u: goto label_329278;
        case 0x32927cu: goto label_32927c;
        case 0x329280u: goto label_329280;
        case 0x329284u: goto label_329284;
        case 0x329288u: goto label_329288;
        case 0x32928cu: goto label_32928c;
        case 0x329290u: goto label_329290;
        case 0x329294u: goto label_329294;
        case 0x329298u: goto label_329298;
        case 0x32929cu: goto label_32929c;
        case 0x3292a0u: goto label_3292a0;
        case 0x3292a4u: goto label_3292a4;
        case 0x3292a8u: goto label_3292a8;
        case 0x3292acu: goto label_3292ac;
        case 0x3292b0u: goto label_3292b0;
        case 0x3292b4u: goto label_3292b4;
        case 0x3292b8u: goto label_3292b8;
        case 0x3292bcu: goto label_3292bc;
        case 0x3292c0u: goto label_3292c0;
        case 0x3292c4u: goto label_3292c4;
        case 0x3292c8u: goto label_3292c8;
        case 0x3292ccu: goto label_3292cc;
        case 0x3292d0u: goto label_3292d0;
        case 0x3292d4u: goto label_3292d4;
        case 0x3292d8u: goto label_3292d8;
        case 0x3292dcu: goto label_3292dc;
        case 0x3292e0u: goto label_3292e0;
        case 0x3292e4u: goto label_3292e4;
        case 0x3292e8u: goto label_3292e8;
        case 0x3292ecu: goto label_3292ec;
        case 0x3292f0u: goto label_3292f0;
        case 0x3292f4u: goto label_3292f4;
        case 0x3292f8u: goto label_3292f8;
        case 0x3292fcu: goto label_3292fc;
        case 0x329300u: goto label_329300;
        case 0x329304u: goto label_329304;
        case 0x329308u: goto label_329308;
        case 0x32930cu: goto label_32930c;
        case 0x329310u: goto label_329310;
        case 0x329314u: goto label_329314;
        case 0x329318u: goto label_329318;
        case 0x32931cu: goto label_32931c;
        case 0x329320u: goto label_329320;
        case 0x329324u: goto label_329324;
        case 0x329328u: goto label_329328;
        case 0x32932cu: goto label_32932c;
        case 0x329330u: goto label_329330;
        case 0x329334u: goto label_329334;
        case 0x329338u: goto label_329338;
        case 0x32933cu: goto label_32933c;
        case 0x329340u: goto label_329340;
        case 0x329344u: goto label_329344;
        case 0x329348u: goto label_329348;
        case 0x32934cu: goto label_32934c;
        case 0x329350u: goto label_329350;
        case 0x329354u: goto label_329354;
        case 0x329358u: goto label_329358;
        case 0x32935cu: goto label_32935c;
        case 0x329360u: goto label_329360;
        case 0x329364u: goto label_329364;
        case 0x329368u: goto label_329368;
        case 0x32936cu: goto label_32936c;
        case 0x329370u: goto label_329370;
        case 0x329374u: goto label_329374;
        case 0x329378u: goto label_329378;
        case 0x32937cu: goto label_32937c;
        case 0x329380u: goto label_329380;
        case 0x329384u: goto label_329384;
        case 0x329388u: goto label_329388;
        case 0x32938cu: goto label_32938c;
        case 0x329390u: goto label_329390;
        case 0x329394u: goto label_329394;
        case 0x329398u: goto label_329398;
        case 0x32939cu: goto label_32939c;
        case 0x3293a0u: goto label_3293a0;
        case 0x3293a4u: goto label_3293a4;
        case 0x3293a8u: goto label_3293a8;
        case 0x3293acu: goto label_3293ac;
        case 0x3293b0u: goto label_3293b0;
        case 0x3293b4u: goto label_3293b4;
        case 0x3293b8u: goto label_3293b8;
        case 0x3293bcu: goto label_3293bc;
        case 0x3293c0u: goto label_3293c0;
        case 0x3293c4u: goto label_3293c4;
        case 0x3293c8u: goto label_3293c8;
        case 0x3293ccu: goto label_3293cc;
        case 0x3293d0u: goto label_3293d0;
        case 0x3293d4u: goto label_3293d4;
        case 0x3293d8u: goto label_3293d8;
        case 0x3293dcu: goto label_3293dc;
        case 0x3293e0u: goto label_3293e0;
        case 0x3293e4u: goto label_3293e4;
        case 0x3293e8u: goto label_3293e8;
        case 0x3293ecu: goto label_3293ec;
        case 0x3293f0u: goto label_3293f0;
        case 0x3293f4u: goto label_3293f4;
        case 0x3293f8u: goto label_3293f8;
        case 0x3293fcu: goto label_3293fc;
        case 0x329400u: goto label_329400;
        case 0x329404u: goto label_329404;
        case 0x329408u: goto label_329408;
        case 0x32940cu: goto label_32940c;
        case 0x329410u: goto label_329410;
        case 0x329414u: goto label_329414;
        case 0x329418u: goto label_329418;
        case 0x32941cu: goto label_32941c;
        case 0x329420u: goto label_329420;
        case 0x329424u: goto label_329424;
        case 0x329428u: goto label_329428;
        case 0x32942cu: goto label_32942c;
        case 0x329430u: goto label_329430;
        case 0x329434u: goto label_329434;
        case 0x329438u: goto label_329438;
        case 0x32943cu: goto label_32943c;
        case 0x329440u: goto label_329440;
        case 0x329444u: goto label_329444;
        case 0x329448u: goto label_329448;
        case 0x32944cu: goto label_32944c;
        case 0x329450u: goto label_329450;
        case 0x329454u: goto label_329454;
        case 0x329458u: goto label_329458;
        case 0x32945cu: goto label_32945c;
        case 0x329460u: goto label_329460;
        case 0x329464u: goto label_329464;
        case 0x329468u: goto label_329468;
        case 0x32946cu: goto label_32946c;
        case 0x329470u: goto label_329470;
        case 0x329474u: goto label_329474;
        case 0x329478u: goto label_329478;
        case 0x32947cu: goto label_32947c;
        case 0x329480u: goto label_329480;
        case 0x329484u: goto label_329484;
        case 0x329488u: goto label_329488;
        case 0x32948cu: goto label_32948c;
        case 0x329490u: goto label_329490;
        case 0x329494u: goto label_329494;
        case 0x329498u: goto label_329498;
        case 0x32949cu: goto label_32949c;
        case 0x3294a0u: goto label_3294a0;
        case 0x3294a4u: goto label_3294a4;
        case 0x3294a8u: goto label_3294a8;
        case 0x3294acu: goto label_3294ac;
        case 0x3294b0u: goto label_3294b0;
        case 0x3294b4u: goto label_3294b4;
        case 0x3294b8u: goto label_3294b8;
        case 0x3294bcu: goto label_3294bc;
        case 0x3294c0u: goto label_3294c0;
        case 0x3294c4u: goto label_3294c4;
        case 0x3294c8u: goto label_3294c8;
        case 0x3294ccu: goto label_3294cc;
        case 0x3294d0u: goto label_3294d0;
        case 0x3294d4u: goto label_3294d4;
        case 0x3294d8u: goto label_3294d8;
        case 0x3294dcu: goto label_3294dc;
        case 0x3294e0u: goto label_3294e0;
        case 0x3294e4u: goto label_3294e4;
        case 0x3294e8u: goto label_3294e8;
        case 0x3294ecu: goto label_3294ec;
        case 0x3294f0u: goto label_3294f0;
        case 0x3294f4u: goto label_3294f4;
        case 0x3294f8u: goto label_3294f8;
        case 0x3294fcu: goto label_3294fc;
        case 0x329500u: goto label_329500;
        case 0x329504u: goto label_329504;
        case 0x329508u: goto label_329508;
        case 0x32950cu: goto label_32950c;
        case 0x329510u: goto label_329510;
        case 0x329514u: goto label_329514;
        case 0x329518u: goto label_329518;
        case 0x32951cu: goto label_32951c;
        case 0x329520u: goto label_329520;
        case 0x329524u: goto label_329524;
        case 0x329528u: goto label_329528;
        case 0x32952cu: goto label_32952c;
        case 0x329530u: goto label_329530;
        case 0x329534u: goto label_329534;
        case 0x329538u: goto label_329538;
        case 0x32953cu: goto label_32953c;
        case 0x329540u: goto label_329540;
        case 0x329544u: goto label_329544;
        case 0x329548u: goto label_329548;
        case 0x32954cu: goto label_32954c;
        case 0x329550u: goto label_329550;
        case 0x329554u: goto label_329554;
        case 0x329558u: goto label_329558;
        case 0x32955cu: goto label_32955c;
        case 0x329560u: goto label_329560;
        case 0x329564u: goto label_329564;
        case 0x329568u: goto label_329568;
        case 0x32956cu: goto label_32956c;
        case 0x329570u: goto label_329570;
        case 0x329574u: goto label_329574;
        case 0x329578u: goto label_329578;
        case 0x32957cu: goto label_32957c;
        case 0x329580u: goto label_329580;
        case 0x329584u: goto label_329584;
        case 0x329588u: goto label_329588;
        case 0x32958cu: goto label_32958c;
        case 0x329590u: goto label_329590;
        case 0x329594u: goto label_329594;
        case 0x329598u: goto label_329598;
        case 0x32959cu: goto label_32959c;
        case 0x3295a0u: goto label_3295a0;
        case 0x3295a4u: goto label_3295a4;
        case 0x3295a8u: goto label_3295a8;
        case 0x3295acu: goto label_3295ac;
        case 0x3295b0u: goto label_3295b0;
        case 0x3295b4u: goto label_3295b4;
        case 0x3295b8u: goto label_3295b8;
        case 0x3295bcu: goto label_3295bc;
        case 0x3295c0u: goto label_3295c0;
        case 0x3295c4u: goto label_3295c4;
        case 0x3295c8u: goto label_3295c8;
        case 0x3295ccu: goto label_3295cc;
        case 0x3295d0u: goto label_3295d0;
        case 0x3295d4u: goto label_3295d4;
        case 0x3295d8u: goto label_3295d8;
        case 0x3295dcu: goto label_3295dc;
        case 0x3295e0u: goto label_3295e0;
        case 0x3295e4u: goto label_3295e4;
        case 0x3295e8u: goto label_3295e8;
        case 0x3295ecu: goto label_3295ec;
        case 0x3295f0u: goto label_3295f0;
        case 0x3295f4u: goto label_3295f4;
        case 0x3295f8u: goto label_3295f8;
        case 0x3295fcu: goto label_3295fc;
        case 0x329600u: goto label_329600;
        case 0x329604u: goto label_329604;
        case 0x329608u: goto label_329608;
        case 0x32960cu: goto label_32960c;
        case 0x329610u: goto label_329610;
        case 0x329614u: goto label_329614;
        case 0x329618u: goto label_329618;
        case 0x32961cu: goto label_32961c;
        case 0x329620u: goto label_329620;
        case 0x329624u: goto label_329624;
        case 0x329628u: goto label_329628;
        case 0x32962cu: goto label_32962c;
        case 0x329630u: goto label_329630;
        case 0x329634u: goto label_329634;
        case 0x329638u: goto label_329638;
        case 0x32963cu: goto label_32963c;
        case 0x329640u: goto label_329640;
        case 0x329644u: goto label_329644;
        case 0x329648u: goto label_329648;
        case 0x32964cu: goto label_32964c;
        case 0x329650u: goto label_329650;
        case 0x329654u: goto label_329654;
        case 0x329658u: goto label_329658;
        case 0x32965cu: goto label_32965c;
        case 0x329660u: goto label_329660;
        case 0x329664u: goto label_329664;
        case 0x329668u: goto label_329668;
        case 0x32966cu: goto label_32966c;
        case 0x329670u: goto label_329670;
        case 0x329674u: goto label_329674;
        case 0x329678u: goto label_329678;
        case 0x32967cu: goto label_32967c;
        case 0x329680u: goto label_329680;
        case 0x329684u: goto label_329684;
        case 0x329688u: goto label_329688;
        case 0x32968cu: goto label_32968c;
        case 0x329690u: goto label_329690;
        case 0x329694u: goto label_329694;
        case 0x329698u: goto label_329698;
        case 0x32969cu: goto label_32969c;
        case 0x3296a0u: goto label_3296a0;
        case 0x3296a4u: goto label_3296a4;
        case 0x3296a8u: goto label_3296a8;
        case 0x3296acu: goto label_3296ac;
        case 0x3296b0u: goto label_3296b0;
        case 0x3296b4u: goto label_3296b4;
        case 0x3296b8u: goto label_3296b8;
        case 0x3296bcu: goto label_3296bc;
        case 0x3296c0u: goto label_3296c0;
        case 0x3296c4u: goto label_3296c4;
        case 0x3296c8u: goto label_3296c8;
        case 0x3296ccu: goto label_3296cc;
        case 0x3296d0u: goto label_3296d0;
        case 0x3296d4u: goto label_3296d4;
        case 0x3296d8u: goto label_3296d8;
        case 0x3296dcu: goto label_3296dc;
        case 0x3296e0u: goto label_3296e0;
        case 0x3296e4u: goto label_3296e4;
        case 0x3296e8u: goto label_3296e8;
        case 0x3296ecu: goto label_3296ec;
        case 0x3296f0u: goto label_3296f0;
        case 0x3296f4u: goto label_3296f4;
        case 0x3296f8u: goto label_3296f8;
        case 0x3296fcu: goto label_3296fc;
        case 0x329700u: goto label_329700;
        case 0x329704u: goto label_329704;
        case 0x329708u: goto label_329708;
        case 0x32970cu: goto label_32970c;
        case 0x329710u: goto label_329710;
        case 0x329714u: goto label_329714;
        case 0x329718u: goto label_329718;
        case 0x32971cu: goto label_32971c;
        case 0x329720u: goto label_329720;
        case 0x329724u: goto label_329724;
        case 0x329728u: goto label_329728;
        case 0x32972cu: goto label_32972c;
        case 0x329730u: goto label_329730;
        case 0x329734u: goto label_329734;
        case 0x329738u: goto label_329738;
        case 0x32973cu: goto label_32973c;
        case 0x329740u: goto label_329740;
        case 0x329744u: goto label_329744;
        case 0x329748u: goto label_329748;
        case 0x32974cu: goto label_32974c;
        case 0x329750u: goto label_329750;
        case 0x329754u: goto label_329754;
        case 0x329758u: goto label_329758;
        case 0x32975cu: goto label_32975c;
        case 0x329760u: goto label_329760;
        case 0x329764u: goto label_329764;
        case 0x329768u: goto label_329768;
        case 0x32976cu: goto label_32976c;
        case 0x329770u: goto label_329770;
        case 0x329774u: goto label_329774;
        case 0x329778u: goto label_329778;
        case 0x32977cu: goto label_32977c;
        case 0x329780u: goto label_329780;
        case 0x329784u: goto label_329784;
        case 0x329788u: goto label_329788;
        case 0x32978cu: goto label_32978c;
        case 0x329790u: goto label_329790;
        case 0x329794u: goto label_329794;
        case 0x329798u: goto label_329798;
        case 0x32979cu: goto label_32979c;
        case 0x3297a0u: goto label_3297a0;
        case 0x3297a4u: goto label_3297a4;
        case 0x3297a8u: goto label_3297a8;
        case 0x3297acu: goto label_3297ac;
        case 0x3297b0u: goto label_3297b0;
        case 0x3297b4u: goto label_3297b4;
        case 0x3297b8u: goto label_3297b8;
        case 0x3297bcu: goto label_3297bc;
        case 0x3297c0u: goto label_3297c0;
        case 0x3297c4u: goto label_3297c4;
        case 0x3297c8u: goto label_3297c8;
        case 0x3297ccu: goto label_3297cc;
        case 0x3297d0u: goto label_3297d0;
        case 0x3297d4u: goto label_3297d4;
        case 0x3297d8u: goto label_3297d8;
        case 0x3297dcu: goto label_3297dc;
        case 0x3297e0u: goto label_3297e0;
        case 0x3297e4u: goto label_3297e4;
        case 0x3297e8u: goto label_3297e8;
        case 0x3297ecu: goto label_3297ec;
        case 0x3297f0u: goto label_3297f0;
        case 0x3297f4u: goto label_3297f4;
        case 0x3297f8u: goto label_3297f8;
        case 0x3297fcu: goto label_3297fc;
        case 0x329800u: goto label_329800;
        case 0x329804u: goto label_329804;
        case 0x329808u: goto label_329808;
        case 0x32980cu: goto label_32980c;
        case 0x329810u: goto label_329810;
        case 0x329814u: goto label_329814;
        case 0x329818u: goto label_329818;
        case 0x32981cu: goto label_32981c;
        case 0x329820u: goto label_329820;
        case 0x329824u: goto label_329824;
        case 0x329828u: goto label_329828;
        case 0x32982cu: goto label_32982c;
        case 0x329830u: goto label_329830;
        case 0x329834u: goto label_329834;
        case 0x329838u: goto label_329838;
        case 0x32983cu: goto label_32983c;
        case 0x329840u: goto label_329840;
        case 0x329844u: goto label_329844;
        case 0x329848u: goto label_329848;
        case 0x32984cu: goto label_32984c;
        case 0x329850u: goto label_329850;
        case 0x329854u: goto label_329854;
        case 0x329858u: goto label_329858;
        case 0x32985cu: goto label_32985c;
        case 0x329860u: goto label_329860;
        case 0x329864u: goto label_329864;
        case 0x329868u: goto label_329868;
        case 0x32986cu: goto label_32986c;
        case 0x329870u: goto label_329870;
        case 0x329874u: goto label_329874;
        case 0x329878u: goto label_329878;
        case 0x32987cu: goto label_32987c;
        case 0x329880u: goto label_329880;
        case 0x329884u: goto label_329884;
        case 0x329888u: goto label_329888;
        case 0x32988cu: goto label_32988c;
        case 0x329890u: goto label_329890;
        case 0x329894u: goto label_329894;
        case 0x329898u: goto label_329898;
        case 0x32989cu: goto label_32989c;
        case 0x3298a0u: goto label_3298a0;
        case 0x3298a4u: goto label_3298a4;
        case 0x3298a8u: goto label_3298a8;
        case 0x3298acu: goto label_3298ac;
        case 0x3298b0u: goto label_3298b0;
        case 0x3298b4u: goto label_3298b4;
        case 0x3298b8u: goto label_3298b8;
        case 0x3298bcu: goto label_3298bc;
        case 0x3298c0u: goto label_3298c0;
        case 0x3298c4u: goto label_3298c4;
        case 0x3298c8u: goto label_3298c8;
        case 0x3298ccu: goto label_3298cc;
        case 0x3298d0u: goto label_3298d0;
        case 0x3298d4u: goto label_3298d4;
        case 0x3298d8u: goto label_3298d8;
        case 0x3298dcu: goto label_3298dc;
        case 0x3298e0u: goto label_3298e0;
        case 0x3298e4u: goto label_3298e4;
        case 0x3298e8u: goto label_3298e8;
        case 0x3298ecu: goto label_3298ec;
        case 0x3298f0u: goto label_3298f0;
        case 0x3298f4u: goto label_3298f4;
        case 0x3298f8u: goto label_3298f8;
        case 0x3298fcu: goto label_3298fc;
        case 0x329900u: goto label_329900;
        case 0x329904u: goto label_329904;
        case 0x329908u: goto label_329908;
        case 0x32990cu: goto label_32990c;
        case 0x329910u: goto label_329910;
        case 0x329914u: goto label_329914;
        case 0x329918u: goto label_329918;
        case 0x32991cu: goto label_32991c;
        case 0x329920u: goto label_329920;
        case 0x329924u: goto label_329924;
        case 0x329928u: goto label_329928;
        case 0x32992cu: goto label_32992c;
        case 0x329930u: goto label_329930;
        case 0x329934u: goto label_329934;
        case 0x329938u: goto label_329938;
        case 0x32993cu: goto label_32993c;
        case 0x329940u: goto label_329940;
        case 0x329944u: goto label_329944;
        case 0x329948u: goto label_329948;
        case 0x32994cu: goto label_32994c;
        case 0x329950u: goto label_329950;
        case 0x329954u: goto label_329954;
        case 0x329958u: goto label_329958;
        case 0x32995cu: goto label_32995c;
        case 0x329960u: goto label_329960;
        case 0x329964u: goto label_329964;
        case 0x329968u: goto label_329968;
        case 0x32996cu: goto label_32996c;
        case 0x329970u: goto label_329970;
        case 0x329974u: goto label_329974;
        case 0x329978u: goto label_329978;
        case 0x32997cu: goto label_32997c;
        case 0x329980u: goto label_329980;
        case 0x329984u: goto label_329984;
        case 0x329988u: goto label_329988;
        case 0x32998cu: goto label_32998c;
        case 0x329990u: goto label_329990;
        case 0x329994u: goto label_329994;
        case 0x329998u: goto label_329998;
        case 0x32999cu: goto label_32999c;
        case 0x3299a0u: goto label_3299a0;
        case 0x3299a4u: goto label_3299a4;
        case 0x3299a8u: goto label_3299a8;
        case 0x3299acu: goto label_3299ac;
        case 0x3299b0u: goto label_3299b0;
        case 0x3299b4u: goto label_3299b4;
        case 0x3299b8u: goto label_3299b8;
        case 0x3299bcu: goto label_3299bc;
        case 0x3299c0u: goto label_3299c0;
        case 0x3299c4u: goto label_3299c4;
        case 0x3299c8u: goto label_3299c8;
        case 0x3299ccu: goto label_3299cc;
        case 0x3299d0u: goto label_3299d0;
        case 0x3299d4u: goto label_3299d4;
        case 0x3299d8u: goto label_3299d8;
        case 0x3299dcu: goto label_3299dc;
        case 0x3299e0u: goto label_3299e0;
        case 0x3299e4u: goto label_3299e4;
        case 0x3299e8u: goto label_3299e8;
        case 0x3299ecu: goto label_3299ec;
        case 0x3299f0u: goto label_3299f0;
        case 0x3299f4u: goto label_3299f4;
        case 0x3299f8u: goto label_3299f8;
        case 0x3299fcu: goto label_3299fc;
        case 0x329a00u: goto label_329a00;
        case 0x329a04u: goto label_329a04;
        case 0x329a08u: goto label_329a08;
        case 0x329a0cu: goto label_329a0c;
        case 0x329a10u: goto label_329a10;
        case 0x329a14u: goto label_329a14;
        case 0x329a18u: goto label_329a18;
        case 0x329a1cu: goto label_329a1c;
        case 0x329a20u: goto label_329a20;
        case 0x329a24u: goto label_329a24;
        case 0x329a28u: goto label_329a28;
        case 0x329a2cu: goto label_329a2c;
        case 0x329a30u: goto label_329a30;
        case 0x329a34u: goto label_329a34;
        case 0x329a38u: goto label_329a38;
        case 0x329a3cu: goto label_329a3c;
        case 0x329a40u: goto label_329a40;
        case 0x329a44u: goto label_329a44;
        case 0x329a48u: goto label_329a48;
        case 0x329a4cu: goto label_329a4c;
        case 0x329a50u: goto label_329a50;
        case 0x329a54u: goto label_329a54;
        case 0x329a58u: goto label_329a58;
        case 0x329a5cu: goto label_329a5c;
        case 0x329a60u: goto label_329a60;
        case 0x329a64u: goto label_329a64;
        case 0x329a68u: goto label_329a68;
        case 0x329a6cu: goto label_329a6c;
        case 0x329a70u: goto label_329a70;
        case 0x329a74u: goto label_329a74;
        case 0x329a78u: goto label_329a78;
        case 0x329a7cu: goto label_329a7c;
        case 0x329a80u: goto label_329a80;
        case 0x329a84u: goto label_329a84;
        case 0x329a88u: goto label_329a88;
        case 0x329a8cu: goto label_329a8c;
        case 0x329a90u: goto label_329a90;
        case 0x329a94u: goto label_329a94;
        case 0x329a98u: goto label_329a98;
        case 0x329a9cu: goto label_329a9c;
        case 0x329aa0u: goto label_329aa0;
        case 0x329aa4u: goto label_329aa4;
        case 0x329aa8u: goto label_329aa8;
        case 0x329aacu: goto label_329aac;
        case 0x329ab0u: goto label_329ab0;
        case 0x329ab4u: goto label_329ab4;
        case 0x329ab8u: goto label_329ab8;
        case 0x329abcu: goto label_329abc;
        case 0x329ac0u: goto label_329ac0;
        case 0x329ac4u: goto label_329ac4;
        case 0x329ac8u: goto label_329ac8;
        case 0x329accu: goto label_329acc;
        case 0x329ad0u: goto label_329ad0;
        case 0x329ad4u: goto label_329ad4;
        case 0x329ad8u: goto label_329ad8;
        case 0x329adcu: goto label_329adc;
        case 0x329ae0u: goto label_329ae0;
        case 0x329ae4u: goto label_329ae4;
        case 0x329ae8u: goto label_329ae8;
        case 0x329aecu: goto label_329aec;
        case 0x329af0u: goto label_329af0;
        case 0x329af4u: goto label_329af4;
        case 0x329af8u: goto label_329af8;
        case 0x329afcu: goto label_329afc;
        case 0x329b00u: goto label_329b00;
        case 0x329b04u: goto label_329b04;
        case 0x329b08u: goto label_329b08;
        case 0x329b0cu: goto label_329b0c;
        case 0x329b10u: goto label_329b10;
        case 0x329b14u: goto label_329b14;
        case 0x329b18u: goto label_329b18;
        case 0x329b1cu: goto label_329b1c;
        case 0x329b20u: goto label_329b20;
        case 0x329b24u: goto label_329b24;
        case 0x329b28u: goto label_329b28;
        case 0x329b2cu: goto label_329b2c;
        case 0x329b30u: goto label_329b30;
        case 0x329b34u: goto label_329b34;
        case 0x329b38u: goto label_329b38;
        case 0x329b3cu: goto label_329b3c;
        case 0x329b40u: goto label_329b40;
        case 0x329b44u: goto label_329b44;
        case 0x329b48u: goto label_329b48;
        case 0x329b4cu: goto label_329b4c;
        case 0x329b50u: goto label_329b50;
        case 0x329b54u: goto label_329b54;
        case 0x329b58u: goto label_329b58;
        case 0x329b5cu: goto label_329b5c;
        case 0x329b60u: goto label_329b60;
        case 0x329b64u: goto label_329b64;
        case 0x329b68u: goto label_329b68;
        case 0x329b6cu: goto label_329b6c;
        default: break;
    }

    ctx->pc = 0x327708u;

label_327708:
    // 0x327708: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x327708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_32770c:
    // 0x32770c: 0xffb20190  sd          $s2, 0x190($sp)
    ctx->pc = 0x32770cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 18));
label_327710:
    // 0x327710: 0xffb00180  sd          $s0, 0x180($sp)
    ctx->pc = 0x327710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 16));
label_327714:
    // 0x327714: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x327714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327718:
    // 0x327718: 0xffb10188  sd          $s1, 0x188($sp)
    ctx->pc = 0x327718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 17));
label_32771c:
    // 0x32771c: 0xffb30198  sd          $s3, 0x198($sp)
    ctx->pc = 0x32771cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 19));
label_327720:
    // 0x327720: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x327720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
label_327724:
    // 0x327724: 0xffb501a8  sd          $s5, 0x1A8($sp)
    ctx->pc = 0x327724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 21));
label_327728:
    // 0x327728: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x327728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
label_32772c:
    // 0x32772c: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x32772cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_327730:
    // 0x327730: 0x8e420484  lw          $v0, 0x484($s2)
    ctx->pc = 0x327730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
label_327734:
    // 0x327734: 0x2444ff89  addiu       $a0, $v0, -0x77
    ctx->pc = 0x327734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967177));
label_327738:
    // 0x327738: 0x2c8300d6  sltiu       $v1, $a0, 0xD6
    ctx->pc = 0x327738u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)214) ? 1 : 0);
label_32773c:
    // 0x32773c: 0x10600900  beqz        $v1, . + 4 + (0x900 << 2)
label_327740:
    if (ctx->pc == 0x327740u) {
        ctx->pc = 0x327740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32773Cu;
        // 0x327740: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327744u;
        goto label_327744;
    }
    ctx->pc = 0x32773Cu;
    {
        const bool branch_taken_0x32773c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32773Cu;
        // 0x327740: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32773c) {
            ctx->pc = 0x329B40u;
            goto label_329b40;
        }
    }
    ctx->pc = 0x327744u;
label_327744:
    // 0x327744: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x327744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_327748:
    // 0x327748: 0x244248e0  addiu       $v0, $v0, 0x48E0
    ctx->pc = 0x327748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18656));
label_32774c:
    // 0x32774c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32774cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_327750:
    // 0x327750: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x327750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_327754:
    // 0x327754: 0x800008  jr          $a0
label_327758:
    if (ctx->pc == 0x327758u) {
        ctx->pc = 0x32775Cu;
        goto label_32775c;
    }
    ctx->pc = 0x327754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x32775Cu: goto label_32775c;
            case 0x3277ACu: goto label_3277ac;
            case 0x3277F8u: goto label_3277f8;
            case 0x327918u: goto label_327918;
            case 0x327A28u: goto label_327a28;
            case 0x327C28u: goto label_327c28;
            case 0x327D4Cu: goto label_327d4c;
            case 0x327DB8u: goto label_327db8;
            case 0x327E2Cu: goto label_327e2c;
            case 0x327E70u: goto label_327e70;
            case 0x327E9Cu: goto label_327e9c;
            case 0x327ED8u: goto label_327ed8;
            case 0x327F0Cu: goto label_327f0c;
            case 0x327F54u: goto label_327f54;
            case 0x327FB8u: goto label_327fb8;
            case 0x327FFCu: goto label_327ffc;
            case 0x328070u: goto label_328070;
            case 0x3280A0u: goto label_3280a0;
            case 0x3280BCu: goto label_3280bc;
            case 0x3280E0u: goto label_3280e0;
            case 0x328108u: goto label_328108;
            case 0x328118u: goto label_328118;
            case 0x3281C8u: goto label_3281c8;
            case 0x3281FCu: goto label_3281fc;
            case 0x328238u: goto label_328238;
            case 0x3282C4u: goto label_3282c4;
            case 0x32831Cu: goto label_32831c;
            case 0x32839Cu: goto label_32839c;
            case 0x328434u: goto label_328434;
            case 0x328468u: goto label_328468;
            case 0x3284A4u: goto label_3284a4;
            case 0x328570u: goto label_328570;
            case 0x3285B0u: goto label_3285b0;
            case 0x3285F4u: goto label_3285f4;
            case 0x328678u: goto label_328678;
            case 0x3286B4u: goto label_3286b4;
            case 0x328700u: goto label_328700;
            case 0x328738u: goto label_328738;
            case 0x328768u: goto label_328768;
            case 0x3287A4u: goto label_3287a4;
            case 0x3287E0u: goto label_3287e0;
            case 0x328814u: goto label_328814;
            case 0x328848u: goto label_328848;
            case 0x32887Cu: goto label_32887c;
            case 0x3288CCu: goto label_3288cc;
            case 0x328934u: goto label_328934;
            case 0x32897Cu: goto label_32897c;
            case 0x3289E0u: goto label_3289e0;
            case 0x328A2Cu: goto label_328a2c;
            case 0x328A9Cu: goto label_328a9c;
            case 0x328AF0u: goto label_328af0;
            case 0x328B78u: goto label_328b78;
            case 0x328C0Cu: goto label_328c0c;
            case 0x328C60u: goto label_328c60;
            case 0x328C9Cu: goto label_328c9c;
            case 0x328CDCu: goto label_328cdc;
            case 0x328D90u: goto label_328d90;
            case 0x328E1Cu: goto label_328e1c;
            case 0x328E4Cu: goto label_328e4c;
            case 0x328E7Cu: goto label_328e7c;
            case 0x328EC0u: goto label_328ec0;
            case 0x328F3Cu: goto label_328f3c;
            case 0x328F9Cu: goto label_328f9c;
            case 0x328FFCu: goto label_328ffc;
            case 0x329088u: goto label_329088;
            case 0x329094u: goto label_329094;
            case 0x3290A0u: goto label_3290a0;
            case 0x3290D0u: goto label_3290d0;
            case 0x329134u: goto label_329134;
            case 0x329144u: goto label_329144;
            case 0x329150u: goto label_329150;
            case 0x329174u: goto label_329174;
            case 0x3291B8u: goto label_3291b8;
            case 0x329204u: goto label_329204;
            case 0x3292B8u: goto label_3292b8;
            case 0x3292C8u: goto label_3292c8;
            case 0x3292E8u: goto label_3292e8;
            case 0x329300u: goto label_329300;
            case 0x329314u: goto label_329314;
            case 0x329328u: goto label_329328;
            case 0x329370u: goto label_329370;
            case 0x3293B4u: goto label_3293b4;
            case 0x3293C4u: goto label_3293c4;
            case 0x32942Cu: goto label_32942c;
            case 0x32943Cu: goto label_32943c;
            case 0x3294D8u: goto label_3294d8;
            case 0x3295A8u: goto label_3295a8;
            case 0x329654u: goto label_329654;
            case 0x329698u: goto label_329698;
            case 0x3296C8u: goto label_3296c8;
            case 0x329708u: goto label_329708;
            case 0x329748u: goto label_329748;
            case 0x3297B8u: goto label_3297b8;
            case 0x3297F0u: goto label_3297f0;
            case 0x329820u: goto label_329820;
            case 0x32984Cu: goto label_32984c;
            case 0x329888u: goto label_329888;
            case 0x3298C0u: goto label_3298c0;
            case 0x32991Cu: goto label_32991c;
            case 0x32994Cu: goto label_32994c;
            case 0x32997Cu: goto label_32997c;
            case 0x3299B4u: goto label_3299b4;
            case 0x3299E8u: goto label_3299e8;
            case 0x329A90u: goto label_329a90;
            case 0x329ABCu: goto label_329abc;
            case 0x329B00u: goto label_329b00;
            case 0x329B40u: goto label_329b40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327754u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x32775Cu;
label_32775c:
    // 0x32775c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32775cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327760:
    // 0x327760: 0xc0cdf2e  jal         func_337CB8
label_327764:
    if (ctx->pc == 0x327764u) {
        ctx->pc = 0x327764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327760u;
        // 0x327764: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327768u;
        goto label_327768;
    }
    ctx->pc = 0x327760u;
    SET_GPR_U32(ctx, 31, 0x327768u);
    ctx->pc = 0x327764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327760u;
    // 0x327764: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x327760u, 0x327768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327768u;
label_327768:
    // 0x327768: 0xc0cdf52  jal         func_337D48
label_32776c:
    if (ctx->pc == 0x32776Cu) {
        ctx->pc = 0x32776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327768u;
        // 0x32776c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327770u;
        goto label_327770;
    }
    ctx->pc = 0x327768u;
    SET_GPR_U32(ctx, 31, 0x327770u);
    ctx->pc = 0x32776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327768u;
    // 0x32776c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x327768u, 0x327770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327770u;
label_327770:
    // 0x327770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327774:
    // 0x327774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327778:
    // 0x327778: 0xc0cdbf6  jal         func_336FD8
label_32777c:
    if (ctx->pc == 0x32777Cu) {
        ctx->pc = 0x32777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327778u;
        // 0x32777c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327780u;
        goto label_327780;
    }
    ctx->pc = 0x327778u;
    SET_GPR_U32(ctx, 31, 0x327780u);
    ctx->pc = 0x32777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327778u;
    // 0x32777c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x327778u, 0x327780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327780u;
label_327780:
    // 0x327780: 0x504008f0  beql        $v0, $zero, . + 4 + (0x8F0 << 2)
label_327784:
    if (ctx->pc == 0x327784u) {
        ctx->pc = 0x327784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327780u;
        // 0x327784: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327788u;
        goto label_327788;
    }
    ctx->pc = 0x327780u;
    {
        const bool branch_taken_0x327780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327780) {
            ctx->pc = 0x327784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327780u;
            // 0x327784: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327788u;
label_327788:
    // 0x327788: 0xc085d4e  jal         func_217538
label_32778c:
    if (ctx->pc == 0x32778Cu) {
        ctx->pc = 0x32778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327788u;
        // 0x32778c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327790u;
        goto label_327790;
    }
    ctx->pc = 0x327788u;
    SET_GPR_U32(ctx, 31, 0x327790u);
    ctx->pc = 0x32778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327788u;
    // 0x32778c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x327788u, 0x327790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327790u;
label_327790:
    // 0x327790: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x327790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327794:
    // 0x327794: 0x562008eb  bnel        $s1, $zero, . + 4 + (0x8EB << 2)
label_327798:
    if (ctx->pc == 0x327798u) {
        ctx->pc = 0x327798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327794u;
        // 0x327798: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32779Cu;
        goto label_32779c;
    }
    ctx->pc = 0x327794u;
    {
        const bool branch_taken_0x327794 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x327794) {
            ctx->pc = 0x327798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327794u;
            // 0x327798: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x32779Cu;
label_32779c:
    // 0x32779c: 0xc097110  jal         func_25C440
label_3277a0:
    if (ctx->pc == 0x3277A0u) {
        ctx->pc = 0x3277A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32779Cu;
        // 0x3277a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277A4u;
        goto label_3277a4;
    }
    ctx->pc = 0x32779Cu;
    SET_GPR_U32(ctx, 31, 0x3277A4u);
    ctx->pc = 0x3277A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32779Cu;
    // 0x3277a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x32779Cu, 0x3277A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3277A4u;
label_3277a4:
    // 0x3277a4: 0x10000827  b           . + 4 + (0x827 << 2)
label_3277a8:
    if (ctx->pc == 0x3277A8u) {
        ctx->pc = 0x3277A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277A4u;
        // 0x3277a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277ACu;
        goto label_3277ac;
    }
    ctx->pc = 0x3277A4u;
    {
        const bool branch_taken_0x3277a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277A4u;
        // 0x3277a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277a4) {
            ctx->pc = 0x329844u;
            goto label_329844;
        }
    }
    ctx->pc = 0x3277ACu;
label_3277ac:
    // 0x3277ac: 0xc0cdec0  jal         func_337B00
label_3277b0:
    if (ctx->pc == 0x3277B0u) {
        ctx->pc = 0x3277B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277ACu;
        // 0x3277b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277B4u;
        goto label_3277b4;
    }
    ctx->pc = 0x3277ACu;
    SET_GPR_U32(ctx, 31, 0x3277B4u);
    ctx->pc = 0x3277B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3277ACu;
    // 0x3277b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3277ACu, 0x3277B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3277B4u;
label_3277b4:
    // 0x3277b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3277b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3277b8:
    // 0x3277b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3277b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3277bc:
    // 0x3277bc: 0xc0cdbde  jal         func_336F78
label_3277c0:
    if (ctx->pc == 0x3277C0u) {
        ctx->pc = 0x3277C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277BCu;
        // 0x3277c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277C4u;
        goto label_3277c4;
    }
    ctx->pc = 0x3277BCu;
    SET_GPR_U32(ctx, 31, 0x3277C4u);
    ctx->pc = 0x3277C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3277BCu;
    // 0x3277c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x3277BCu, 0x3277C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3277C4u;
label_3277c4:
    // 0x3277c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3277c8:
    if (ctx->pc == 0x3277C8u) {
        ctx->pc = 0x3277C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277C4u;
        // 0x3277c8: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277CCu;
        goto label_3277cc;
    }
    ctx->pc = 0x3277C4u;
    {
        const bool branch_taken_0x3277c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3277c4) {
            ctx->pc = 0x3277C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3277C4u;
            // 0x3277c8: 0x8e020104  lw          $v0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3277D8u;
            goto label_3277d8;
        }
    }
    ctx->pc = 0x3277CCu;
label_3277cc:
    // 0x3277cc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x3277ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_3277d0:
    // 0x3277d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3277d4:
    if (ctx->pc == 0x3277D4u) {
        ctx->pc = 0x3277D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277D0u;
        // 0x3277d4: 0x24425b60  addiu       $v0, $v0, 0x5B60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277D8u;
        goto label_3277d8;
    }
    ctx->pc = 0x3277D0u;
    {
        const bool branch_taken_0x3277d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277D0u;
        // 0x3277d4: 0x24425b60  addiu       $v0, $v0, 0x5B60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277d0) {
            ctx->pc = 0x3277E0u;
            goto label_3277e0;
        }
    }
    ctx->pc = 0x3277D8u;
label_3277d8:
    // 0x3277d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3277d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3277dc:
    // 0x3277dc: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x3277dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_3277e0:
    // 0x3277e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3277e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3277e4:
    // 0x3277e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3277e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3277e8:
    // 0x3277e8: 0xc0cdea8  jal         func_337AA0
label_3277ec:
    if (ctx->pc == 0x3277ECu) {
        ctx->pc = 0x3277ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277E8u;
        // 0x3277ec: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277F0u;
        goto label_3277f0;
    }
    ctx->pc = 0x3277E8u;
    SET_GPR_U32(ctx, 31, 0x3277F0u);
    ctx->pc = 0x3277ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3277E8u;
    // 0x3277ec: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x3277E8u, 0x3277F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3277F0u;
label_3277f0:
    // 0x3277f0: 0x100008d5  b           . + 4 + (0x8D5 << 2)
label_3277f4:
    if (ctx->pc == 0x3277F4u) {
        ctx->pc = 0x3277F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277F0u;
        // 0x3277f4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3277F8u;
        goto label_3277f8;
    }
    ctx->pc = 0x3277F0u;
    {
        const bool branch_taken_0x3277f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277F0u;
        // 0x3277f4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277f0) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3277F8u;
label_3277f8:
    // 0x3277f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3277f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3277fc:
    // 0x3277fc: 0xc0cdf2e  jal         func_337CB8
label_327800:
    if (ctx->pc == 0x327800u) {
        ctx->pc = 0x327800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277FCu;
        // 0x327800: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327804u;
        goto label_327804;
    }
    ctx->pc = 0x3277FCu;
    SET_GPR_U32(ctx, 31, 0x327804u);
    ctx->pc = 0x327800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3277FCu;
    // 0x327800: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3277FCu, 0x327804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327804u;
label_327804:
    // 0x327804: 0xc0cdf52  jal         func_337D48
label_327808:
    if (ctx->pc == 0x327808u) {
        ctx->pc = 0x327808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327804u;
        // 0x327808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32780Cu;
        goto label_32780c;
    }
    ctx->pc = 0x327804u;
    SET_GPR_U32(ctx, 31, 0x32780Cu);
    ctx->pc = 0x327808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327804u;
    // 0x327808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x327804u, 0x32780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32780Cu;
label_32780c:
    // 0x32780c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327810:
    // 0x327810: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x327810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327814:
    // 0x327814: 0xc0cdee8  jal         func_337BA0
label_327818:
    if (ctx->pc == 0x327818u) {
        ctx->pc = 0x327818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327814u;
        // 0x327818: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32781Cu;
        goto label_32781c;
    }
    ctx->pc = 0x327814u;
    SET_GPR_U32(ctx, 31, 0x32781Cu);
    ctx->pc = 0x327818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327814u;
    // 0x327818: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x327814u, 0x32781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32781Cu;
label_32781c:
    // 0x32781c: 0xc0cdf2e  jal         func_337CB8
label_327820:
    if (ctx->pc == 0x327820u) {
        ctx->pc = 0x327820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32781Cu;
        // 0x327820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327824u;
        goto label_327824;
    }
    ctx->pc = 0x32781Cu;
    SET_GPR_U32(ctx, 31, 0x327824u);
    ctx->pc = 0x327820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32781Cu;
    // 0x327820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32781Cu, 0x327824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327824u;
label_327824:
    // 0x327824: 0xc0cdf52  jal         func_337D48
label_327828:
    if (ctx->pc == 0x327828u) {
        ctx->pc = 0x327828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327824u;
        // 0x327828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32782Cu;
        goto label_32782c;
    }
    ctx->pc = 0x327824u;
    SET_GPR_U32(ctx, 31, 0x32782Cu);
    ctx->pc = 0x327828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327824u;
    // 0x327828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x327824u, 0x32782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32782Cu;
label_32782c:
    // 0x32782c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32782cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327830:
    // 0x327830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327834:
    // 0x327834: 0xc0cdbf6  jal         func_336FD8
label_327838:
    if (ctx->pc == 0x327838u) {
        ctx->pc = 0x327838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327834u;
        // 0x327838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32783Cu;
        goto label_32783c;
    }
    ctx->pc = 0x327834u;
    SET_GPR_U32(ctx, 31, 0x32783Cu);
    ctx->pc = 0x327838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327834u;
    // 0x327838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x327834u, 0x32783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32783Cu;
label_32783c:
    // 0x32783c: 0x504008c1  beql        $v0, $zero, . + 4 + (0x8C1 << 2)
label_327840:
    if (ctx->pc == 0x327840u) {
        ctx->pc = 0x327840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32783Cu;
        // 0x327840: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327844u;
        goto label_327844;
    }
    ctx->pc = 0x32783Cu;
    {
        const bool branch_taken_0x32783c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32783c) {
            ctx->pc = 0x327840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32783Cu;
            // 0x327840: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327844u;
label_327844:
    // 0x327844: 0xc085d2a  jal         func_2174A8
label_327848:
    if (ctx->pc == 0x327848u) {
        ctx->pc = 0x327848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327844u;
        // 0x327848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32784Cu;
        goto label_32784c;
    }
    ctx->pc = 0x327844u;
    SET_GPR_U32(ctx, 31, 0x32784Cu);
    ctx->pc = 0x327848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327844u;
    // 0x327848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x327844u, 0x32784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32784Cu;
label_32784c:
    // 0x32784c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32784cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327850:
    // 0x327850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327854:
    // 0x327854: 0xc0cdbd2  jal         func_336F48
label_327858:
    if (ctx->pc == 0x327858u) {
        ctx->pc = 0x327858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327854u;
        // 0x327858: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32785Cu;
        goto label_32785c;
    }
    ctx->pc = 0x327854u;
    SET_GPR_U32(ctx, 31, 0x32785Cu);
    ctx->pc = 0x327858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327854u;
    // 0x327858: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F48u, 0x327854u, 0x32785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32785Cu;
label_32785c:
    // 0x32785c: 0x504008b9  beql        $v0, $zero, . + 4 + (0x8B9 << 2)
label_327860:
    if (ctx->pc == 0x327860u) {
        ctx->pc = 0x327860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32785Cu;
        // 0x327860: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327864u;
        goto label_327864;
    }
    ctx->pc = 0x32785Cu;
    {
        const bool branch_taken_0x32785c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32785c) {
            ctx->pc = 0x327860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32785Cu;
            // 0x327860: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327864u;
label_327864:
    // 0x327864: 0xc083072  jal         func_20C1C8
label_327868:
    if (ctx->pc == 0x327868u) {
        ctx->pc = 0x327868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327864u;
        // 0x327868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32786Cu;
        goto label_32786c;
    }
    ctx->pc = 0x327864u;
    SET_GPR_U32(ctx, 31, 0x32786Cu);
    ctx->pc = 0x327868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327864u;
    // 0x327868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x327864u, 0x32786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32786Cu;
label_32786c:
    // 0x32786c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32786cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327870:
    // 0x327870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327874:
    // 0x327874: 0xc0cdbde  jal         func_336F78
label_327878:
    if (ctx->pc == 0x327878u) {
        ctx->pc = 0x327878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327874u;
        // 0x327878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32787Cu;
        goto label_32787c;
    }
    ctx->pc = 0x327874u;
    SET_GPR_U32(ctx, 31, 0x32787Cu);
    ctx->pc = 0x327878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327874u;
    // 0x327878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327874u, 0x32787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32787Cu;
label_32787c:
    // 0x32787c: 0x104007f1  beqz        $v0, . + 4 + (0x7F1 << 2)
label_327880:
    if (ctx->pc == 0x327880u) {
        ctx->pc = 0x327880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32787Cu;
        // 0x327880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327884u;
        goto label_327884;
    }
    ctx->pc = 0x32787Cu;
    {
        const bool branch_taken_0x32787c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32787Cu;
        // 0x327880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32787c) {
            ctx->pc = 0x329844u;
            goto label_329844;
        }
    }
    ctx->pc = 0x327884u;
label_327884:
    // 0x327884: 0xc0cdbf6  jal         func_336FD8
label_327888:
    if (ctx->pc == 0x327888u) {
        ctx->pc = 0x327888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327884u;
        // 0x327888: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32788Cu;
        goto label_32788c;
    }
    ctx->pc = 0x327884u;
    SET_GPR_U32(ctx, 31, 0x32788Cu);
    ctx->pc = 0x327888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327884u;
    // 0x327888: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x327884u, 0x32788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32788Cu;
label_32788c:
    // 0x32788c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_327890:
    if (ctx->pc == 0x327890u) {
        ctx->pc = 0x327890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32788Cu;
        // 0x327890: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327894u;
        goto label_327894;
    }
    ctx->pc = 0x32788Cu;
    {
        const bool branch_taken_0x32788c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32788Cu;
        // 0x327890: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32788c) {
            ctx->pc = 0x327908u;
            goto label_327908;
        }
    }
    ctx->pc = 0x327894u;
label_327894:
    // 0x327894: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327898:
    // 0x327898: 0xc0efb95  jal         func_3BEE54
label_32789c:
    if (ctx->pc == 0x32789Cu) {
        ctx->pc = 0x32789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327898u;
        // 0x32789c: 0x24a5bef8  addiu       $a1, $a1, -0x4108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3278A0u;
        goto label_3278a0;
    }
    ctx->pc = 0x327898u;
    SET_GPR_U32(ctx, 31, 0x3278A0u);
    ctx->pc = 0x32789Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327898u;
    // 0x32789c: 0x24a5bef8  addiu       $a1, $a1, -0x4108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x327898u, 0x3278A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3278A0u;
label_3278a0:
    // 0x3278a0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3278a4:
    if (ctx->pc == 0x3278A4u) {
        ctx->pc = 0x3278A8u;
        goto label_3278a8;
    }
    ctx->pc = 0x3278A0u;
    {
        const bool branch_taken_0x3278a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3278a0) {
            ctx->pc = 0x3278C4u;
            goto label_3278c4;
        }
    }
    ctx->pc = 0x3278A8u;
label_3278a8:
    // 0x3278a8: 0xc0c9d9a  jal         func_327668
label_3278ac:
    if (ctx->pc == 0x3278ACu) {
        ctx->pc = 0x3278B0u;
        goto label_3278b0;
    }
    ctx->pc = 0x3278A8u;
    SET_GPR_U32(ctx, 31, 0x3278B0u);
    ctx->pc = 0x327668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327668u, 0x3278A8u, 0x3278B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3278B0u;
label_3278b0:
    // 0x3278b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3278b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3278b4:
    // 0x3278b4: 0xc083942  jal         func_20E508
label_3278b8:
    if (ctx->pc == 0x3278B8u) {
        ctx->pc = 0x3278B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278B4u;
        // 0x3278b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3278BCu;
        goto label_3278bc;
    }
    ctx->pc = 0x3278B4u;
    SET_GPR_U32(ctx, 31, 0x3278BCu);
    ctx->pc = 0x3278B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3278B4u;
    // 0x3278b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x3278B4u, 0x3278BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3278BCu;
label_3278bc:
    // 0x3278bc: 0x10000012  b           . + 4 + (0x12 << 2)
label_3278c0:
    if (ctx->pc == 0x3278C0u) {
        ctx->pc = 0x3278C4u;
        goto label_3278c4;
    }
    ctx->pc = 0x3278BCu;
    {
        const bool branch_taken_0x3278bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3278bc) {
            ctx->pc = 0x327908u;
            goto label_327908;
        }
    }
    ctx->pc = 0x3278C4u;
label_3278c4:
    // 0x3278c4: 0xc085d4e  jal         func_217538
label_3278c8:
    if (ctx->pc == 0x3278C8u) {
        ctx->pc = 0x3278C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278C4u;
        // 0x3278c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3278CCu;
        goto label_3278cc;
    }
    ctx->pc = 0x3278C4u;
    SET_GPR_U32(ctx, 31, 0x3278CCu);
    ctx->pc = 0x3278C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3278C4u;
    // 0x3278c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x3278C4u, 0x3278CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3278CCu;
label_3278cc:
    // 0x3278cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3278d0:
    if (ctx->pc == 0x3278D0u) {
        ctx->pc = 0x3278D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278CCu;
        // 0x3278d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3278D4u;
        goto label_3278d4;
    }
    ctx->pc = 0x3278CCu;
    {
        const bool branch_taken_0x3278cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278CCu;
        // 0x3278d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278cc) {
            ctx->pc = 0x3278FCu;
            goto label_3278fc;
        }
    }
    ctx->pc = 0x3278D4u;
label_3278d4:
    // 0x3278d4: 0xc0cdfdc  jal         func_337F70
label_3278d8:
    if (ctx->pc == 0x3278D8u) {
        ctx->pc = 0x3278D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278D4u;
        // 0x3278d8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3278DCu;
        goto label_3278dc;
    }
    ctx->pc = 0x3278D4u;
    SET_GPR_U32(ctx, 31, 0x3278DCu);
    ctx->pc = 0x3278D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3278D4u;
    // 0x3278d8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x3278D4u, 0x3278DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3278DCu;
label_3278dc:
    // 0x3278dc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_3278e0:
    if (ctx->pc == 0x3278E0u) {
        ctx->pc = 0x3278E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278DCu;
        // 0x3278e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3278E4u;
        goto label_3278e4;
    }
    ctx->pc = 0x3278DCu;
    {
        const bool branch_taken_0x3278dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278DCu;
        // 0x3278e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278dc) {
            ctx->pc = 0x3278F4u;
            goto label_3278f4;
        }
    }
    ctx->pc = 0x3278E4u;
label_3278e4:
    // 0x3278e4: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x3278e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_3278e8:
    // 0x3278e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3278e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3278ec:
    // 0x3278ec: 0x40f809  jalr        $v0
label_3278f0:
    if (ctx->pc == 0x3278F0u) {
        ctx->pc = 0x3278F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278ECu;
        // 0x3278f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3278F4u;
        goto label_3278f4;
    }
    ctx->pc = 0x3278ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3278F4u);
        ctx->pc = 0x3278F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278ECu;
        // 0x3278f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3278ECu, 0x3278F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3278F4u;
label_3278f4:
    // 0x3278f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3278f8:
    if (ctx->pc == 0x3278F8u) {
        ctx->pc = 0x3278F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278F4u;
        // 0x3278f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3278FCu;
        goto label_3278fc;
    }
    ctx->pc = 0x3278F4u;
    {
        const bool branch_taken_0x3278f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3278F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278F4u;
        // 0x3278f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278f4) {
            ctx->pc = 0x327908u;
            goto label_327908;
        }
    }
    ctx->pc = 0x3278FCu;
label_3278fc:
    // 0x3278fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3278fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327900:
    // 0x327900: 0xc083942  jal         func_20E508
label_327904:
    if (ctx->pc == 0x327904u) {
        ctx->pc = 0x327904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327900u;
        // 0x327904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327908u;
        goto label_327908;
    }
    ctx->pc = 0x327900u;
    SET_GPR_U32(ctx, 31, 0x327908u);
    ctx->pc = 0x327904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327900u;
    // 0x327904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x327900u, 0x327908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327908u;
label_327908:
    // 0x327908: 0x5220088e  beql        $s1, $zero, . + 4 + (0x88E << 2)
label_32790c:
    if (ctx->pc == 0x32790Cu) {
        ctx->pc = 0x32790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327908u;
        // 0x32790c: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327910u;
        goto label_327910;
    }
    ctx->pc = 0x327908u;
    {
        const bool branch_taken_0x327908 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x327908) {
            ctx->pc = 0x32790Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327908u;
            // 0x32790c: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327910u;
label_327910:
    // 0x327910: 0x1000003e  b           . + 4 + (0x3E << 2)
label_327914:
    if (ctx->pc == 0x327914u) {
        ctx->pc = 0x327914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327910u;
        // 0x327914: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327918u;
        goto label_327918;
    }
    ctx->pc = 0x327910u;
    {
        const bool branch_taken_0x327910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327910u;
        // 0x327914: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327910) {
            ctx->pc = 0x327A0Cu;
            goto label_327a0c;
        }
    }
    ctx->pc = 0x327918u;
label_327918:
    // 0x327918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32791c:
    // 0x32791c: 0xc0cdf2e  jal         func_337CB8
label_327920:
    if (ctx->pc == 0x327920u) {
        ctx->pc = 0x327920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32791Cu;
        // 0x327920: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327924u;
        goto label_327924;
    }
    ctx->pc = 0x32791Cu;
    SET_GPR_U32(ctx, 31, 0x327924u);
    ctx->pc = 0x327920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32791Cu;
    // 0x327920: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32791Cu, 0x327924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327924u;
label_327924:
    // 0x327924: 0xc0cdf52  jal         func_337D48
label_327928:
    if (ctx->pc == 0x327928u) {
        ctx->pc = 0x327928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327924u;
        // 0x327928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32792Cu;
        goto label_32792c;
    }
    ctx->pc = 0x327924u;
    SET_GPR_U32(ctx, 31, 0x32792Cu);
    ctx->pc = 0x327928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327924u;
    // 0x327928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x327924u, 0x32792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32792Cu;
label_32792c:
    // 0x32792c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32792cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327930:
    // 0x327930: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x327930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327934:
    // 0x327934: 0xc0cdee8  jal         func_337BA0
label_327938:
    if (ctx->pc == 0x327938u) {
        ctx->pc = 0x327938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327934u;
        // 0x327938: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32793Cu;
        goto label_32793c;
    }
    ctx->pc = 0x327934u;
    SET_GPR_U32(ctx, 31, 0x32793Cu);
    ctx->pc = 0x327938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327934u;
    // 0x327938: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x327934u, 0x32793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32793Cu;
label_32793c:
    // 0x32793c: 0xc0cdf2e  jal         func_337CB8
label_327940:
    if (ctx->pc == 0x327940u) {
        ctx->pc = 0x327940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32793Cu;
        // 0x327940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327944u;
        goto label_327944;
    }
    ctx->pc = 0x32793Cu;
    SET_GPR_U32(ctx, 31, 0x327944u);
    ctx->pc = 0x327940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32793Cu;
    // 0x327940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32793Cu, 0x327944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327944u;
label_327944:
    // 0x327944: 0xc0cdf52  jal         func_337D48
label_327948:
    if (ctx->pc == 0x327948u) {
        ctx->pc = 0x327948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327944u;
        // 0x327948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32794Cu;
        goto label_32794c;
    }
    ctx->pc = 0x327944u;
    SET_GPR_U32(ctx, 31, 0x32794Cu);
    ctx->pc = 0x327948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327944u;
    // 0x327948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x327944u, 0x32794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32794Cu;
label_32794c:
    // 0x32794c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32794cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327950:
    // 0x327950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327954:
    // 0x327954: 0xc0cdbf6  jal         func_336FD8
label_327958:
    if (ctx->pc == 0x327958u) {
        ctx->pc = 0x327958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327954u;
        // 0x327958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32795Cu;
        goto label_32795c;
    }
    ctx->pc = 0x327954u;
    SET_GPR_U32(ctx, 31, 0x32795Cu);
    ctx->pc = 0x327958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327954u;
    // 0x327958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x327954u, 0x32795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32795Cu;
label_32795c:
    // 0x32795c: 0x50400879  beql        $v0, $zero, . + 4 + (0x879 << 2)
label_327960:
    if (ctx->pc == 0x327960u) {
        ctx->pc = 0x327960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32795Cu;
        // 0x327960: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327964u;
        goto label_327964;
    }
    ctx->pc = 0x32795Cu;
    {
        const bool branch_taken_0x32795c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32795c) {
            ctx->pc = 0x327960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32795Cu;
            // 0x327960: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327964u;
label_327964:
    // 0x327964: 0xc085d2a  jal         func_2174A8
label_327968:
    if (ctx->pc == 0x327968u) {
        ctx->pc = 0x327968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327964u;
        // 0x327968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32796Cu;
        goto label_32796c;
    }
    ctx->pc = 0x327964u;
    SET_GPR_U32(ctx, 31, 0x32796Cu);
    ctx->pc = 0x327968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327964u;
    // 0x327968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x327964u, 0x32796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32796Cu;
label_32796c:
    // 0x32796c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32796cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327970:
    // 0x327970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327974:
    // 0x327974: 0xc0cdbd2  jal         func_336F48
label_327978:
    if (ctx->pc == 0x327978u) {
        ctx->pc = 0x327978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327974u;
        // 0x327978: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32797Cu;
        goto label_32797c;
    }
    ctx->pc = 0x327974u;
    SET_GPR_U32(ctx, 31, 0x32797Cu);
    ctx->pc = 0x327978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327974u;
    // 0x327978: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F48u, 0x327974u, 0x32797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32797Cu;
label_32797c:
    // 0x32797c: 0x50400871  beql        $v0, $zero, . + 4 + (0x871 << 2)
label_327980:
    if (ctx->pc == 0x327980u) {
        ctx->pc = 0x327980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32797Cu;
        // 0x327980: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327984u;
        goto label_327984;
    }
    ctx->pc = 0x32797Cu;
    {
        const bool branch_taken_0x32797c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32797c) {
            ctx->pc = 0x327980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32797Cu;
            // 0x327980: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327984u;
label_327984:
    // 0x327984: 0xc083072  jal         func_20C1C8
label_327988:
    if (ctx->pc == 0x327988u) {
        ctx->pc = 0x327988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327984u;
        // 0x327988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32798Cu;
        goto label_32798c;
    }
    ctx->pc = 0x327984u;
    SET_GPR_U32(ctx, 31, 0x32798Cu);
    ctx->pc = 0x327988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327984u;
    // 0x327988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x327984u, 0x32798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32798Cu;
label_32798c:
    // 0x32798c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32798cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327990:
    // 0x327990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327994:
    // 0x327994: 0xc0cdbde  jal         func_336F78
label_327998:
    if (ctx->pc == 0x327998u) {
        ctx->pc = 0x327998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327994u;
        // 0x327998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32799Cu;
        goto label_32799c;
    }
    ctx->pc = 0x327994u;
    SET_GPR_U32(ctx, 31, 0x32799Cu);
    ctx->pc = 0x327998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327994u;
    // 0x327998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327994u, 0x32799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32799Cu;
label_32799c:
    // 0x32799c: 0x104007a9  beqz        $v0, . + 4 + (0x7A9 << 2)
label_3279a0:
    if (ctx->pc == 0x3279A0u) {
        ctx->pc = 0x3279A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32799Cu;
        // 0x3279a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3279A4u;
        goto label_3279a4;
    }
    ctx->pc = 0x32799Cu;
    {
        const bool branch_taken_0x32799c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32799Cu;
        // 0x3279a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32799c) {
            ctx->pc = 0x329844u;
            goto label_329844;
        }
    }
    ctx->pc = 0x3279A4u;
label_3279a4:
    // 0x3279a4: 0xc0cdbf6  jal         func_336FD8
label_3279a8:
    if (ctx->pc == 0x3279A8u) {
        ctx->pc = 0x3279A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279A4u;
        // 0x3279a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3279ACu;
        goto label_3279ac;
    }
    ctx->pc = 0x3279A4u;
    SET_GPR_U32(ctx, 31, 0x3279ACu);
    ctx->pc = 0x3279A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3279A4u;
    // 0x3279a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x3279A4u, 0x3279ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3279ACu;
label_3279ac:
    // 0x3279ac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3279b0:
    if (ctx->pc == 0x3279B0u) {
        ctx->pc = 0x3279B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279ACu;
        // 0x3279b0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3279B4u;
        goto label_3279b4;
    }
    ctx->pc = 0x3279ACu;
    {
        const bool branch_taken_0x3279ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279ACu;
        // 0x3279b0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279ac) {
            ctx->pc = 0x3279ECu;
            goto label_3279ec;
        }
    }
    ctx->pc = 0x3279B4u;
label_3279b4:
    // 0x3279b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3279b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3279b8:
    // 0x3279b8: 0xc0efb95  jal         func_3BEE54
label_3279bc:
    if (ctx->pc == 0x3279BCu) {
        ctx->pc = 0x3279BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279B8u;
        // 0x3279bc: 0x24a5bef8  addiu       $a1, $a1, -0x4108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3279C0u;
        goto label_3279c0;
    }
    ctx->pc = 0x3279B8u;
    SET_GPR_U32(ctx, 31, 0x3279C0u);
    ctx->pc = 0x3279BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3279B8u;
    // 0x3279bc: 0x24a5bef8  addiu       $a1, $a1, -0x4108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3279B8u, 0x3279C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3279C0u;
label_3279c0:
    // 0x3279c0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3279c4:
    if (ctx->pc == 0x3279C4u) {
        ctx->pc = 0x3279C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279C0u;
        // 0x3279c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3279C8u;
        goto label_3279c8;
    }
    ctx->pc = 0x3279C0u;
    {
        const bool branch_taken_0x3279c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3279C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279C0u;
        // 0x3279c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279c0) {
            ctx->pc = 0x3279E4u;
            goto label_3279e4;
        }
    }
    ctx->pc = 0x3279C8u;
label_3279c8:
    // 0x3279c8: 0xc0c9d9a  jal         func_327668
label_3279cc:
    if (ctx->pc == 0x3279CCu) {
        ctx->pc = 0x3279D0u;
        goto label_3279d0;
    }
    ctx->pc = 0x3279C8u;
    SET_GPR_U32(ctx, 31, 0x3279D0u);
    ctx->pc = 0x327668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327668u, 0x3279C8u, 0x3279D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3279D0u;
label_3279d0:
    // 0x3279d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3279d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3279d4:
    // 0x3279d4: 0xc083942  jal         func_20E508
label_3279d8:
    if (ctx->pc == 0x3279D8u) {
        ctx->pc = 0x3279D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279D4u;
        // 0x3279d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3279DCu;
        goto label_3279dc;
    }
    ctx->pc = 0x3279D4u;
    SET_GPR_U32(ctx, 31, 0x3279DCu);
    ctx->pc = 0x3279D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3279D4u;
    // 0x3279d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x3279D4u, 0x3279DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3279DCu;
label_3279dc:
    // 0x3279dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3279e0:
    if (ctx->pc == 0x3279E0u) {
        ctx->pc = 0x3279E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279DCu;
        // 0x3279e0: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3279E4u;
        goto label_3279e4;
    }
    ctx->pc = 0x3279DCu;
    {
        const bool branch_taken_0x3279dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279DCu;
        // 0x3279e0: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279dc) {
            ctx->pc = 0x3279F0u;
            goto label_3279f0;
        }
    }
    ctx->pc = 0x3279E4u;
label_3279e4:
    // 0x3279e4: 0xc083942  jal         func_20E508
label_3279e8:
    if (ctx->pc == 0x3279E8u) {
        ctx->pc = 0x3279E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279E4u;
        // 0x3279e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3279ECu;
        goto label_3279ec;
    }
    ctx->pc = 0x3279E4u;
    SET_GPR_U32(ctx, 31, 0x3279ECu);
    ctx->pc = 0x3279E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3279E4u;
    // 0x3279e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x3279E4u, 0x3279ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3279ECu;
label_3279ec:
    // 0x3279ec: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x3279ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_3279f0:
    // 0x3279f0: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x3279f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_3279f4:
    // 0x3279f4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3279f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3279f8:
    // 0x3279f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3279fc:
    if (ctx->pc == 0x3279FCu) {
        ctx->pc = 0x3279FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279F8u;
        // 0x3279fc: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A00u;
        goto label_327a00;
    }
    ctx->pc = 0x3279F8u;
    {
        const bool branch_taken_0x3279f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279F8u;
        // 0x3279fc: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279f8) {
            ctx->pc = 0x327A08u;
            goto label_327a08;
        }
    }
    ctx->pc = 0x327A00u;
label_327a00:
    // 0x327a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x327a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327a04:
    // 0x327a04: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x327a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_327a08:
    // 0x327a08: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x327a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_327a0c:
    // 0x327a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_327a10:
    // 0x327a10: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x327a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327a14:
    // 0x327a14: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x327a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_327a18:
    // 0x327a18: 0x40f809  jalr        $v0
label_327a1c:
    if (ctx->pc == 0x327A1Cu) {
        ctx->pc = 0x327A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A18u;
        // 0x327a1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A20u;
        goto label_327a20;
    }
    ctx->pc = 0x327A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327A20u);
        ctx->pc = 0x327A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A18u;
        // 0x327a1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327A18u, 0x327A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327A20u;
label_327a20:
    // 0x327a20: 0x10000848  b           . + 4 + (0x848 << 2)
label_327a24:
    if (ctx->pc == 0x327A24u) {
        ctx->pc = 0x327A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A20u;
        // 0x327a24: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A28u;
        goto label_327a28;
    }
    ctx->pc = 0x327A20u;
    {
        const bool branch_taken_0x327a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A20u;
        // 0x327a24: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327a20) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327A28u;
label_327a28:
    // 0x327a28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x327a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327a2c:
    // 0x327a2c: 0xc0cdee8  jal         func_337BA0
label_327a30:
    if (ctx->pc == 0x327A30u) {
        ctx->pc = 0x327A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A2Cu;
        // 0x327a30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A34u;
        goto label_327a34;
    }
    ctx->pc = 0x327A2Cu;
    SET_GPR_U32(ctx, 31, 0x327A34u);
    ctx->pc = 0x327A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A2Cu;
    // 0x327a30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x327A2Cu, 0x327A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A34u;
label_327a34:
    // 0x327a34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x327a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327a38:
    // 0x327a38: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x327a38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327a3c:
    // 0x327a3c: 0xc0cdf2e  jal         func_337CB8
label_327a40:
    if (ctx->pc == 0x327A40u) {
        ctx->pc = 0x327A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A3Cu;
        // 0x327a40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A44u;
        goto label_327a44;
    }
    ctx->pc = 0x327A3Cu;
    SET_GPR_U32(ctx, 31, 0x327A44u);
    ctx->pc = 0x327A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A3Cu;
    // 0x327a40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x327A3Cu, 0x327A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A44u;
label_327a44:
    // 0x327a44: 0xc0cdf52  jal         func_337D48
label_327a48:
    if (ctx->pc == 0x327A48u) {
        ctx->pc = 0x327A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A44u;
        // 0x327a48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A4Cu;
        goto label_327a4c;
    }
    ctx->pc = 0x327A44u;
    SET_GPR_U32(ctx, 31, 0x327A4Cu);
    ctx->pc = 0x327A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A44u;
    // 0x327a48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x327A44u, 0x327A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A4Cu;
label_327a4c:
    // 0x327a4c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x327a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_327a50:
    // 0x327a50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x327a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327a54:
    // 0x327a54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x327a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327a58:
    // 0x327a58: 0xc0cdee8  jal         func_337BA0
label_327a5c:
    if (ctx->pc == 0x327A5Cu) {
        ctx->pc = 0x327A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A58u;
        // 0x327a5c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A60u;
        goto label_327a60;
    }
    ctx->pc = 0x327A58u;
    SET_GPR_U32(ctx, 31, 0x327A60u);
    ctx->pc = 0x327A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A58u;
    // 0x327a5c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x327A58u, 0x327A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A60u;
label_327a60:
    // 0x327a60: 0xc0cdf2e  jal         func_337CB8
label_327a64:
    if (ctx->pc == 0x327A64u) {
        ctx->pc = 0x327A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A60u;
        // 0x327a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A68u;
        goto label_327a68;
    }
    ctx->pc = 0x327A60u;
    SET_GPR_U32(ctx, 31, 0x327A68u);
    ctx->pc = 0x327A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A60u;
    // 0x327a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x327A60u, 0x327A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A68u;
label_327a68:
    // 0x327a68: 0xc0cdf52  jal         func_337D48
label_327a6c:
    if (ctx->pc == 0x327A6Cu) {
        ctx->pc = 0x327A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A68u;
        // 0x327a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A70u;
        goto label_327a70;
    }
    ctx->pc = 0x327A68u;
    SET_GPR_U32(ctx, 31, 0x327A70u);
    ctx->pc = 0x327A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A68u;
    // 0x327a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x327A68u, 0x327A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A70u;
label_327a70:
    // 0x327a70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327a74:
    // 0x327a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327a78:
    // 0x327a78: 0xc0cdbf6  jal         func_336FD8
label_327a7c:
    if (ctx->pc == 0x327A7Cu) {
        ctx->pc = 0x327A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A78u;
        // 0x327a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A80u;
        goto label_327a80;
    }
    ctx->pc = 0x327A78u;
    SET_GPR_U32(ctx, 31, 0x327A80u);
    ctx->pc = 0x327A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A78u;
    // 0x327a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x327A78u, 0x327A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A80u;
label_327a80:
    // 0x327a80: 0x50400830  beql        $v0, $zero, . + 4 + (0x830 << 2)
label_327a84:
    if (ctx->pc == 0x327A84u) {
        ctx->pc = 0x327A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A80u;
        // 0x327a84: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A88u;
        goto label_327a88;
    }
    ctx->pc = 0x327A80u;
    {
        const bool branch_taken_0x327a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327a80) {
            ctx->pc = 0x327A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327A80u;
            // 0x327a84: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327A88u;
label_327a88:
    // 0x327a88: 0xc085d2a  jal         func_2174A8
label_327a8c:
    if (ctx->pc == 0x327A8Cu) {
        ctx->pc = 0x327A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A88u;
        // 0x327a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327A90u;
        goto label_327a90;
    }
    ctx->pc = 0x327A88u;
    SET_GPR_U32(ctx, 31, 0x327A90u);
    ctx->pc = 0x327A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A88u;
    // 0x327a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x327A88u, 0x327A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A90u;
label_327a90:
    // 0x327a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327a94:
    // 0x327a94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327a98:
    // 0x327a98: 0xc0cdbd2  jal         func_336F48
label_327a9c:
    if (ctx->pc == 0x327A9Cu) {
        ctx->pc = 0x327A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A98u;
        // 0x327a9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AA0u;
        goto label_327aa0;
    }
    ctx->pc = 0x327A98u;
    SET_GPR_U32(ctx, 31, 0x327AA0u);
    ctx->pc = 0x327A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A98u;
    // 0x327a9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F48u, 0x327A98u, 0x327AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327AA0u;
label_327aa0:
    // 0x327aa0: 0x50400828  beql        $v0, $zero, . + 4 + (0x828 << 2)
label_327aa4:
    if (ctx->pc == 0x327AA4u) {
        ctx->pc = 0x327AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AA0u;
        // 0x327aa4: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AA8u;
        goto label_327aa8;
    }
    ctx->pc = 0x327AA0u;
    {
        const bool branch_taken_0x327aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327aa0) {
            ctx->pc = 0x327AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327AA0u;
            // 0x327aa4: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327AA8u;
label_327aa8:
    // 0x327aa8: 0xc083072  jal         func_20C1C8
label_327aac:
    if (ctx->pc == 0x327AACu) {
        ctx->pc = 0x327AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AA8u;
        // 0x327aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AB0u;
        goto label_327ab0;
    }
    ctx->pc = 0x327AA8u;
    SET_GPR_U32(ctx, 31, 0x327AB0u);
    ctx->pc = 0x327AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327AA8u;
    // 0x327aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x327AA8u, 0x327AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327AB0u;
label_327ab0:
    // 0x327ab0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x327ab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327ab4:
    // 0x327ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327ab8:
    // 0x327ab8: 0xc0cdbde  jal         func_336F78
label_327abc:
    if (ctx->pc == 0x327ABCu) {
        ctx->pc = 0x327ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AB8u;
        // 0x327abc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AC0u;
        goto label_327ac0;
    }
    ctx->pc = 0x327AB8u;
    SET_GPR_U32(ctx, 31, 0x327AC0u);
    ctx->pc = 0x327ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327AB8u;
    // 0x327abc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327AB8u, 0x327AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327AC0u;
label_327ac0:
    // 0x327ac0: 0x1040056f  beqz        $v0, . + 4 + (0x56F << 2)
label_327ac4:
    if (ctx->pc == 0x327AC4u) {
        ctx->pc = 0x327AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AC0u;
        // 0x327ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AC8u;
        goto label_327ac8;
    }
    ctx->pc = 0x327AC0u;
    {
        const bool branch_taken_0x327ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AC0u;
        // 0x327ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ac0) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x327AC8u;
label_327ac8:
    // 0x327ac8: 0xc0cdbf6  jal         func_336FD8
label_327acc:
    if (ctx->pc == 0x327ACCu) {
        ctx->pc = 0x327ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AC8u;
        // 0x327acc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AD0u;
        goto label_327ad0;
    }
    ctx->pc = 0x327AC8u;
    SET_GPR_U32(ctx, 31, 0x327AD0u);
    ctx->pc = 0x327ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327AC8u;
    // 0x327acc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x327AC8u, 0x327AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327AD0u;
label_327ad0:
    // 0x327ad0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_327ad4:
    if (ctx->pc == 0x327AD4u) {
        ctx->pc = 0x327AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AD0u;
        // 0x327ad4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AD8u;
        goto label_327ad8;
    }
    ctx->pc = 0x327AD0u;
    {
        const bool branch_taken_0x327ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AD0u;
        // 0x327ad4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ad0) {
            ctx->pc = 0x327B4Cu;
            goto label_327b4c;
        }
    }
    ctx->pc = 0x327AD8u;
label_327ad8:
    // 0x327ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x327ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_327adc:
    // 0x327adc: 0xc0efb95  jal         func_3BEE54
label_327ae0:
    if (ctx->pc == 0x327AE0u) {
        ctx->pc = 0x327AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327ADCu;
        // 0x327ae0: 0x24a5bef8  addiu       $a1, $a1, -0x4108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327AE4u;
        goto label_327ae4;
    }
    ctx->pc = 0x327ADCu;
    SET_GPR_U32(ctx, 31, 0x327AE4u);
    ctx->pc = 0x327AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327ADCu;
    // 0x327ae0: 0x24a5bef8  addiu       $a1, $a1, -0x4108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x327ADCu, 0x327AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327AE4u;
label_327ae4:
    // 0x327ae4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_327ae8:
    if (ctx->pc == 0x327AE8u) {
        ctx->pc = 0x327AECu;
        goto label_327aec;
    }
    ctx->pc = 0x327AE4u;
    {
        const bool branch_taken_0x327ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327ae4) {
            ctx->pc = 0x327B08u;
            goto label_327b08;
        }
    }
    ctx->pc = 0x327AECu;
label_327aec:
    // 0x327aec: 0xc0c9d9a  jal         func_327668
label_327af0:
    if (ctx->pc == 0x327AF0u) {
        ctx->pc = 0x327AF4u;
        goto label_327af4;
    }
    ctx->pc = 0x327AECu;
    SET_GPR_U32(ctx, 31, 0x327AF4u);
    ctx->pc = 0x327668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327668u, 0x327AECu, 0x327AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327AF4u;
label_327af4:
    // 0x327af4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327af8:
    // 0x327af8: 0xc083942  jal         func_20E508
label_327afc:
    if (ctx->pc == 0x327AFCu) {
        ctx->pc = 0x327AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AF8u;
        // 0x327afc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B00u;
        goto label_327b00;
    }
    ctx->pc = 0x327AF8u;
    SET_GPR_U32(ctx, 31, 0x327B00u);
    ctx->pc = 0x327AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327AF8u;
    // 0x327afc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x327AF8u, 0x327B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B00u;
label_327b00:
    // 0x327b00: 0x10000012  b           . + 4 + (0x12 << 2)
label_327b04:
    if (ctx->pc == 0x327B04u) {
        ctx->pc = 0x327B08u;
        goto label_327b08;
    }
    ctx->pc = 0x327B00u;
    {
        const bool branch_taken_0x327b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327b00) {
            ctx->pc = 0x327B4Cu;
            goto label_327b4c;
        }
    }
    ctx->pc = 0x327B08u;
label_327b08:
    // 0x327b08: 0xc085d4e  jal         func_217538
label_327b0c:
    if (ctx->pc == 0x327B0Cu) {
        ctx->pc = 0x327B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B08u;
        // 0x327b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B10u;
        goto label_327b10;
    }
    ctx->pc = 0x327B08u;
    SET_GPR_U32(ctx, 31, 0x327B10u);
    ctx->pc = 0x327B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327B08u;
    // 0x327b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x327B08u, 0x327B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B10u;
label_327b10:
    // 0x327b10: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_327b14:
    if (ctx->pc == 0x327B14u) {
        ctx->pc = 0x327B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B10u;
        // 0x327b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B18u;
        goto label_327b18;
    }
    ctx->pc = 0x327B10u;
    {
        const bool branch_taken_0x327b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B10u;
        // 0x327b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b10) {
            ctx->pc = 0x327B40u;
            goto label_327b40;
        }
    }
    ctx->pc = 0x327B18u;
label_327b18:
    // 0x327b18: 0xc0cdfdc  jal         func_337F70
label_327b1c:
    if (ctx->pc == 0x327B1Cu) {
        ctx->pc = 0x327B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B18u;
        // 0x327b1c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B20u;
        goto label_327b20;
    }
    ctx->pc = 0x327B18u;
    SET_GPR_U32(ctx, 31, 0x327B20u);
    ctx->pc = 0x327B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327B18u;
    // 0x327b1c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x327B18u, 0x327B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B20u;
label_327b20:
    // 0x327b20: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_327b24:
    if (ctx->pc == 0x327B24u) {
        ctx->pc = 0x327B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B20u;
        // 0x327b24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B28u;
        goto label_327b28;
    }
    ctx->pc = 0x327B20u;
    {
        const bool branch_taken_0x327b20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x327B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B20u;
        // 0x327b24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b20) {
            ctx->pc = 0x327B38u;
            goto label_327b38;
        }
    }
    ctx->pc = 0x327B28u;
label_327b28:
    // 0x327b28: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x327b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_327b2c:
    // 0x327b2c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x327b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_327b30:
    // 0x327b30: 0x40f809  jalr        $v0
label_327b34:
    if (ctx->pc == 0x327B34u) {
        ctx->pc = 0x327B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B30u;
        // 0x327b34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B38u;
        goto label_327b38;
    }
    ctx->pc = 0x327B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327B38u);
        ctx->pc = 0x327B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B30u;
        // 0x327b34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327B30u, 0x327B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327B38u;
label_327b38:
    // 0x327b38: 0x10000004  b           . + 4 + (0x4 << 2)
label_327b3c:
    if (ctx->pc == 0x327B3Cu) {
        ctx->pc = 0x327B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B38u;
        // 0x327b3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B40u;
        goto label_327b40;
    }
    ctx->pc = 0x327B38u;
    {
        const bool branch_taken_0x327b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B38u;
        // 0x327b3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327b38) {
            ctx->pc = 0x327B4Cu;
            goto label_327b4c;
        }
    }
    ctx->pc = 0x327B40u;
label_327b40:
    // 0x327b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x327b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_327b44:
    // 0x327b44: 0xc083942  jal         func_20E508
label_327b48:
    if (ctx->pc == 0x327B48u) {
        ctx->pc = 0x327B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B44u;
        // 0x327b48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B4Cu;
        goto label_327b4c;
    }
    ctx->pc = 0x327B44u;
    SET_GPR_U32(ctx, 31, 0x327B4Cu);
    ctx->pc = 0x327B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327B44u;
    // 0x327b48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x327B44u, 0x327B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B4Cu;
label_327b4c:
    // 0x327b4c: 0xc0b1488  jal         func_2C5220
label_327b50:
    if (ctx->pc == 0x327B50u) {
        ctx->pc = 0x327B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B4Cu;
        // 0x327b50: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327B54u;
        goto label_327b54;
    }
    ctx->pc = 0x327B4Cu;
    SET_GPR_U32(ctx, 31, 0x327B54u);
    ctx->pc = 0x327B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327B4Cu;
    // 0x327b50: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x327B4Cu, 0x327B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B54u;
label_327b54:
    // 0x327b54: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x327b54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_327b58:
    // 0x327b58: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x327b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_327b5c:
    // 0x327b5c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x327b5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_327b60:
    // 0x327b60: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x327b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_327b64:
    // 0x327b64: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x327b64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_327b68:
    // 0x327b68: 0x4a0003bf  vwaitq
    ctx->pc = 0x327b68u;
    // VWAITQ (Q already resolved in this runtime)
label_327b6c:
    // 0x327b6c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x327b6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_327b70:
    // 0x327b70: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x327b70u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_327b74:
    // 0x327b74: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x327b74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_327b78:
    // 0x327b78: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x327b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_327b7c:
    // 0x327b7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x327b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_327b80:
    // 0x327b80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x327b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_327b84:
    // 0x327b84: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x327b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_327b88:
    // 0x327b88: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x327b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_327b8c:
    // 0x327b8c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x327b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_327b90:
    // 0x327b90: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x327b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_327b94:
    // 0x327b94: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x327b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_327b98:
    // 0x327b98: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x327b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_327b9c:
    // 0x327b9c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x327b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_327ba0:
    // 0x327ba0: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x327ba0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_327ba4:
    // 0x327ba4: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x327ba4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_327ba8:
    // 0x327ba8: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x327ba8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_327bac:
    // 0x327bac: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x327bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_327bb0:
    // 0x327bb0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x327bb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_327bb4:
    // 0x327bb4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x327bb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_327bb8:
    // 0x327bb8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x327bb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_327bbc:
    // 0x327bbc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x327bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_327bc0:
    // 0x327bc0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x327bc0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_327bc4:
    // 0x327bc4: 0x4a0003bf  vwaitq
    ctx->pc = 0x327bc4u;
    // VWAITQ (Q already resolved in this runtime)
label_327bc8:
    // 0x327bc8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x327bc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_327bcc:
    // 0x327bcc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x327bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_327bd0:
    // 0x327bd0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x327bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_327bd4:
    // 0x327bd4: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x327bd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_327bd8:
    // 0x327bd8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x327bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_327bdc:
    // 0x327bdc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x327bdcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_327be0:
    // 0x327be0: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x327be0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_327be4:
    // 0x327be4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x327be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_327be8:
    // 0x327be8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x327be8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_327bec:
    // 0x327bec: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x327becu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_327bf0:
    // 0x327bf0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x327bf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_327bf4:
    // 0x327bf4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x327bf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_327bf8:
    // 0x327bf8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x327bf8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_327bfc:
    // 0x327bfc: 0x4a0003bf  vwaitq
    ctx->pc = 0x327bfcu;
    // VWAITQ (Q already resolved in this runtime)
label_327c00:
    // 0x327c00: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x327c00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_327c04:
    // 0x327c04: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x327c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_327c08:
    // 0x327c08: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x327c08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_327c0c:
    // 0x327c0c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x327c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_327c10:
    // 0x327c10: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x327c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_327c14:
    // 0x327c14: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x327c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_327c18:
    // 0x327c18: 0x40f809  jalr        $v0
label_327c1c:
    if (ctx->pc == 0x327C1Cu) {
        ctx->pc = 0x327C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C18u;
        // 0x327c1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C20u;
        goto label_327c20;
    }
    ctx->pc = 0x327C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327C20u);
        ctx->pc = 0x327C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C18u;
        // 0x327c1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327C18u, 0x327C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327C20u;
label_327c20:
    // 0x327c20: 0x100007c8  b           . + 4 + (0x7C8 << 2)
label_327c24:
    if (ctx->pc == 0x327C24u) {
        ctx->pc = 0x327C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C20u;
        // 0x327c24: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C28u;
        goto label_327c28;
    }
    ctx->pc = 0x327C20u;
    {
        const bool branch_taken_0x327c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C20u;
        // 0x327c24: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c20) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327C28u;
label_327c28:
    // 0x327c28: 0xc0cdf2e  jal         func_337CB8
label_327c2c:
    if (ctx->pc == 0x327C2Cu) {
        ctx->pc = 0x327C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C28u;
        // 0x327c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C30u;
        goto label_327c30;
    }
    ctx->pc = 0x327C28u;
    SET_GPR_U32(ctx, 31, 0x327C30u);
    ctx->pc = 0x327C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C28u;
    // 0x327c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x327C28u, 0x327C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C30u;
label_327c30:
    // 0x327c30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x327c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327c34:
    // 0x327c34: 0xc0cdee8  jal         func_337BA0
label_327c38:
    if (ctx->pc == 0x327C38u) {
        ctx->pc = 0x327C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C34u;
        // 0x327c38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C3Cu;
        goto label_327c3c;
    }
    ctx->pc = 0x327C34u;
    SET_GPR_U32(ctx, 31, 0x327C3Cu);
    ctx->pc = 0x327C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C34u;
    // 0x327c38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x327C34u, 0x327C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C3Cu;
label_327c3c:
    // 0x327c3c: 0xc0cdec0  jal         func_337B00
label_327c40:
    if (ctx->pc == 0x327C40u) {
        ctx->pc = 0x327C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C3Cu;
        // 0x327c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C44u;
        goto label_327c44;
    }
    ctx->pc = 0x327C3Cu;
    SET_GPR_U32(ctx, 31, 0x327C44u);
    ctx->pc = 0x327C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C3Cu;
    // 0x327c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x327C3Cu, 0x327C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C44u;
label_327c44:
    // 0x327c44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327c48:
    // 0x327c48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327c4c:
    // 0x327c4c: 0xc0cdbde  jal         func_336F78
label_327c50:
    if (ctx->pc == 0x327C50u) {
        ctx->pc = 0x327C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C4Cu;
        // 0x327c50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C54u;
        goto label_327c54;
    }
    ctx->pc = 0x327C4Cu;
    SET_GPR_U32(ctx, 31, 0x327C54u);
    ctx->pc = 0x327C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C4Cu;
    // 0x327c50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327C4Cu, 0x327C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C54u;
label_327c54:
    // 0x327c54: 0x504007bc  beql        $v0, $zero, . + 4 + (0x7BC << 2)
label_327c58:
    if (ctx->pc == 0x327C58u) {
        ctx->pc = 0x327C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C54u;
        // 0x327c58: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C5Cu;
        goto label_327c5c;
    }
    ctx->pc = 0x327C54u;
    {
        const bool branch_taken_0x327c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327c54) {
            ctx->pc = 0x327C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327C54u;
            // 0x327c58: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327C5Cu;
label_327c5c:
    // 0x327c5c: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x327c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_327c60:
    // 0x327c60: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x327c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_327c64:
    // 0x327c64: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_327c68:
    if (ctx->pc == 0x327C68u) {
        ctx->pc = 0x327C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C64u;
        // 0x327c68: 0x3862001f  xori        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C6Cu;
        goto label_327c6c;
    }
    ctx->pc = 0x327C64u;
    {
        const bool branch_taken_0x327c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C64u;
        // 0x327c68: 0x3862001f  xori        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c64) {
            ctx->pc = 0x327CF0u;
            goto label_327cf0;
        }
    }
    ctx->pc = 0x327C6Cu;
label_327c6c:
    // 0x327c6c: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x327c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_327c70:
    // 0x327c70: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x327c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_327c74:
    // 0x327c74: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x327c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
label_327c78:
    // 0x327c78: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x327c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_327c7c:
    // 0x327c7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_327c80:
    if (ctx->pc == 0x327C80u) {
        ctx->pc = 0x327C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C7Cu;
        // 0x327c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C84u;
        goto label_327c84;
    }
    ctx->pc = 0x327C7Cu;
    {
        const bool branch_taken_0x327c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C7Cu;
        // 0x327c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c7c) {
            ctx->pc = 0x327CA8u;
            goto label_327ca8;
        }
    }
    ctx->pc = 0x327C84u;
label_327c84:
    // 0x327c84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x327c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327c88:
    // 0x327c88: 0xc08bf70  jal         func_22FDC0
label_327c8c:
    if (ctx->pc == 0x327C8Cu) {
        ctx->pc = 0x327C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C88u;
        // 0x327c8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C90u;
        goto label_327c90;
    }
    ctx->pc = 0x327C88u;
    SET_GPR_U32(ctx, 31, 0x327C90u);
    ctx->pc = 0x327C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C88u;
    // 0x327c8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x327C88u, 0x327C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C90u;
label_327c90:
    // 0x327c90: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x327c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_327c94:
    // 0x327c94: 0xc06974a  jal         func_1A5D28
label_327c98:
    if (ctx->pc == 0x327C98u) {
        ctx->pc = 0x327C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C94u;
        // 0x327c98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C9Cu;
        goto label_327c9c;
    }
    ctx->pc = 0x327C94u;
    SET_GPR_U32(ctx, 31, 0x327C9Cu);
    ctx->pc = 0x327C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C94u;
    // 0x327c98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x327C94u, 0x327C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C9Cu;
label_327c9c:
    // 0x327c9c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x327c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_327ca0:
    // 0x327ca0: 0xc06a05e  jal         func_1A8178
label_327ca4:
    if (ctx->pc == 0x327CA4u) {
        ctx->pc = 0x327CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CA0u;
        // 0x327ca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327CA8u;
        goto label_327ca8;
    }
    ctx->pc = 0x327CA0u;
    SET_GPR_U32(ctx, 31, 0x327CA8u);
    ctx->pc = 0x327CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327CA0u;
    // 0x327ca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x327CA0u, 0x327CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327CA8u;
label_327ca8:
    // 0x327ca8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x327ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_327cac:
    // 0x327cac: 0x904300a8  lbu         $v1, 0xA8($v0)
    ctx->pc = 0x327cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 168)));
label_327cb0:
    // 0x327cb0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_327cb4:
    if (ctx->pc == 0x327CB4u) {
        ctx->pc = 0x327CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CB0u;
        // 0x327cb4: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327CB8u;
        goto label_327cb8;
    }
    ctx->pc = 0x327CB0u;
    {
        const bool branch_taken_0x327cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327cb0) {
            ctx->pc = 0x327CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327CB0u;
            // 0x327cb4: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327CC4u;
            goto label_327cc4;
        }
    }
    ctx->pc = 0x327CB8u;
label_327cb8:
    // 0x327cb8: 0xc09414a  jal         func_250528
label_327cbc:
    if (ctx->pc == 0x327CBCu) {
        ctx->pc = 0x327CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CB8u;
        // 0x327cbc: 0x260407a0  addiu       $a0, $s0, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327CC0u;
        goto label_327cc0;
    }
    ctx->pc = 0x327CB8u;
    SET_GPR_U32(ctx, 31, 0x327CC0u);
    ctx->pc = 0x327CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327CB8u;
    // 0x327cbc: 0x260407a0  addiu       $a0, $s0, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250528u, 0x327CB8u, 0x327CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327CC0u;
label_327cc0:
    // 0x327cc0: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x327cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_327cc4:
    // 0x327cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327cc8:
    // 0x327cc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x327cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327ccc:
    // 0x327ccc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x327cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_327cd0:
    // 0x327cd0: 0x60f809  jalr        $v1
label_327cd4:
    if (ctx->pc == 0x327CD4u) {
        ctx->pc = 0x327CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CD0u;
        // 0x327cd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327CD8u;
        goto label_327cd8;
    }
    ctx->pc = 0x327CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x327CD8u);
        ctx->pc = 0x327CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CD0u;
        // 0x327cd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327CD0u, 0x327CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327CD8u;
label_327cd8:
    // 0x327cd8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x327cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_327cdc:
    // 0x327cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327ce0:
    // 0x327ce0: 0xc08961e  jal         func_225878
label_327ce4:
    if (ctx->pc == 0x327CE4u) {
        ctx->pc = 0x327CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CE0u;
        // 0x327ce4: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327CE8u;
        goto label_327ce8;
    }
    ctx->pc = 0x327CE0u;
    SET_GPR_U32(ctx, 31, 0x327CE8u);
    ctx->pc = 0x327CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327CE0u;
    // 0x327ce4: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225878u, 0x327CE0u, 0x327CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327CE8u;
label_327ce8:
    // 0x327ce8: 0x10000797  b           . + 4 + (0x797 << 2)
label_327cec:
    if (ctx->pc == 0x327CECu) {
        ctx->pc = 0x327CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CE8u;
        // 0x327cec: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327CF0u;
        goto label_327cf0;
    }
    ctx->pc = 0x327CE8u;
    {
        const bool branch_taken_0x327ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CE8u;
        // 0x327cec: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ce8) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327CF0u;
label_327cf0:
    // 0x327cf0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_327cf4:
    if (ctx->pc == 0x327CF4u) {
        ctx->pc = 0x327CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CF0u;
        // 0x327cf4: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327CF8u;
        goto label_327cf8;
    }
    ctx->pc = 0x327CF0u;
    {
        const bool branch_taken_0x327cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327cf0) {
            ctx->pc = 0x327CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327CF0u;
            // 0x327cf4: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327D30u;
            goto label_327d30;
        }
    }
    ctx->pc = 0x327CF8u;
label_327cf8:
    // 0x327cf8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x327cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_327cfc:
    // 0x327cfc: 0x904300a8  lbu         $v1, 0xA8($v0)
    ctx->pc = 0x327cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 168)));
label_327d00:
    // 0x327d00: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_327d04:
    if (ctx->pc == 0x327D04u) {
        ctx->pc = 0x327D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D00u;
        // 0x327d04: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D08u;
        goto label_327d08;
    }
    ctx->pc = 0x327D00u;
    {
        const bool branch_taken_0x327d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327d00) {
            ctx->pc = 0x327D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327D00u;
            // 0x327d04: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327D14u;
            goto label_327d14;
        }
    }
    ctx->pc = 0x327D08u;
label_327d08:
    // 0x327d08: 0xc09414a  jal         func_250528
label_327d0c:
    if (ctx->pc == 0x327D0Cu) {
        ctx->pc = 0x327D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D08u;
        // 0x327d0c: 0x260407a0  addiu       $a0, $s0, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D10u;
        goto label_327d10;
    }
    ctx->pc = 0x327D08u;
    SET_GPR_U32(ctx, 31, 0x327D10u);
    ctx->pc = 0x327D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D08u;
    // 0x327d0c: 0x260407a0  addiu       $a0, $s0, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250528u, 0x327D08u, 0x327D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D10u;
label_327d10:
    // 0x327d10: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x327d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_327d14:
    // 0x327d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327d18:
    // 0x327d18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x327d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327d1c:
    // 0x327d1c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x327d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_327d20:
    // 0x327d20: 0x40f809  jalr        $v0
label_327d24:
    if (ctx->pc == 0x327D24u) {
        ctx->pc = 0x327D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D20u;
        // 0x327d24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D28u;
        goto label_327d28;
    }
    ctx->pc = 0x327D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327D28u);
        ctx->pc = 0x327D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D20u;
        // 0x327d24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327D20u, 0x327D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327D28u;
label_327d28:
    // 0x327d28: 0x10000787  b           . + 4 + (0x787 << 2)
label_327d2c:
    if (ctx->pc == 0x327D2Cu) {
        ctx->pc = 0x327D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D28u;
        // 0x327d2c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D30u;
        goto label_327d30;
    }
    ctx->pc = 0x327D28u;
    {
        const bool branch_taken_0x327d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D28u;
        // 0x327d2c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d28) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327D30u;
label_327d30:
    // 0x327d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327d34:
    // 0x327d34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x327d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327d38:
    // 0x327d38: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x327d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_327d3c:
    // 0x327d3c: 0x40f809  jalr        $v0
label_327d40:
    if (ctx->pc == 0x327D40u) {
        ctx->pc = 0x327D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D3Cu;
        // 0x327d40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D44u;
        goto label_327d44;
    }
    ctx->pc = 0x327D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327D44u);
        ctx->pc = 0x327D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D3Cu;
        // 0x327d40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327D3Cu, 0x327D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327D44u;
label_327d44:
    // 0x327d44: 0x10000780  b           . + 4 + (0x780 << 2)
label_327d48:
    if (ctx->pc == 0x327D48u) {
        ctx->pc = 0x327D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D44u;
        // 0x327d48: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D4Cu;
        goto label_327d4c;
    }
    ctx->pc = 0x327D44u;
    {
        const bool branch_taken_0x327d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D44u;
        // 0x327d48: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d44) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327D4Cu;
label_327d4c:
    // 0x327d4c: 0xc0cdf40  jal         func_337D00
label_327d50:
    if (ctx->pc == 0x327D50u) {
        ctx->pc = 0x327D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D4Cu;
        // 0x327d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D54u;
        goto label_327d54;
    }
    ctx->pc = 0x327D4Cu;
    SET_GPR_U32(ctx, 31, 0x327D54u);
    ctx->pc = 0x327D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D4Cu;
    // 0x327d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x327D4Cu, 0x327D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D54u;
label_327d54:
    // 0x327d54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327d58:
    // 0x327d58: 0xc0cdec0  jal         func_337B00
label_327d5c:
    if (ctx->pc == 0x327D5Cu) {
        ctx->pc = 0x327D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D58u;
        // 0x327d5c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D60u;
        goto label_327d60;
    }
    ctx->pc = 0x327D58u;
    SET_GPR_U32(ctx, 31, 0x327D60u);
    ctx->pc = 0x327D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D58u;
    // 0x327d5c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x327D58u, 0x327D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D60u;
label_327d60:
    // 0x327d60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327d64:
    // 0x327d64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327d68:
    // 0x327d68: 0xc0cdbde  jal         func_336F78
label_327d6c:
    if (ctx->pc == 0x327D6Cu) {
        ctx->pc = 0x327D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D68u;
        // 0x327d6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D70u;
        goto label_327d70;
    }
    ctx->pc = 0x327D68u;
    SET_GPR_U32(ctx, 31, 0x327D70u);
    ctx->pc = 0x327D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D68u;
    // 0x327d6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327D68u, 0x327D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D70u;
label_327d70:
    // 0x327d70: 0x10400774  beqz        $v0, . + 4 + (0x774 << 2)
label_327d74:
    if (ctx->pc == 0x327D74u) {
        ctx->pc = 0x327D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D70u;
        // 0x327d74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D78u;
        goto label_327d78;
    }
    ctx->pc = 0x327D70u;
    {
        const bool branch_taken_0x327d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D70u;
        // 0x327d74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d70) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327D78u;
label_327d78:
    // 0x327d78: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x327d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_327d7c:
    // 0x327d7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x327d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_327d80:
    // 0x327d80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x327d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_327d84:
    // 0x327d84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x327d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327d88:
    // 0x327d88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x327d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_327d8c:
    // 0x327d8c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x327d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_327d90:
    // 0x327d90: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x327d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_327d94:
    // 0x327d94: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x327d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_327d98:
    // 0x327d98: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x327d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_327d9c:
    // 0x327d9c: 0xc0b15d0  jal         func_2C5740
label_327da0:
    if (ctx->pc == 0x327DA0u) {
        ctx->pc = 0x327DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D9Cu;
        // 0x327da0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327DA4u;
        goto label_327da4;
    }
    ctx->pc = 0x327D9Cu;
    SET_GPR_U32(ctx, 31, 0x327DA4u);
    ctx->pc = 0x327DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D9Cu;
    // 0x327da0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x327D9Cu, 0x327DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327DA4u;
label_327da4:
    // 0x327da4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x327da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_327da8:
    // 0x327da8: 0xc0c48de  jal         func_312378
label_327dac:
    if (ctx->pc == 0x327DACu) {
        ctx->pc = 0x327DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DA8u;
        // 0x327dac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327DB0u;
        goto label_327db0;
    }
    ctx->pc = 0x327DA8u;
    SET_GPR_U32(ctx, 31, 0x327DB0u);
    ctx->pc = 0x327DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327DA8u;
    // 0x327dac: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312378u, 0x327DA8u, 0x327DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327DB0u;
label_327db0:
    // 0x327db0: 0x10000765  b           . + 4 + (0x765 << 2)
label_327db4:
    if (ctx->pc == 0x327DB4u) {
        ctx->pc = 0x327DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DB0u;
        // 0x327db4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327DB8u;
        goto label_327db8;
    }
    ctx->pc = 0x327DB0u;
    {
        const bool branch_taken_0x327db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DB0u;
        // 0x327db4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327db0) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327DB8u;
label_327db8:
    // 0x327db8: 0xc0cdec0  jal         func_337B00
label_327dbc:
    if (ctx->pc == 0x327DBCu) {
        ctx->pc = 0x327DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DB8u;
        // 0x327dbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327DC0u;
        goto label_327dc0;
    }
    ctx->pc = 0x327DB8u;
    SET_GPR_U32(ctx, 31, 0x327DC0u);
    ctx->pc = 0x327DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327DB8u;
    // 0x327dbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x327DB8u, 0x327DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327DC0u;
label_327dc0:
    // 0x327dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327dc4:
    // 0x327dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327dc8:
    // 0x327dc8: 0xc0cdbde  jal         func_336F78
label_327dcc:
    if (ctx->pc == 0x327DCCu) {
        ctx->pc = 0x327DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DC8u;
        // 0x327dcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327DD0u;
        goto label_327dd0;
    }
    ctx->pc = 0x327DC8u;
    SET_GPR_U32(ctx, 31, 0x327DD0u);
    ctx->pc = 0x327DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327DC8u;
    // 0x327dcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327DC8u, 0x327DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327DD0u;
label_327dd0:
    // 0x327dd0: 0x1040075c  beqz        $v0, . + 4 + (0x75C << 2)
label_327dd4:
    if (ctx->pc == 0x327DD4u) {
        ctx->pc = 0x327DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DD0u;
        // 0x327dd4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327DD8u;
        goto label_327dd8;
    }
    ctx->pc = 0x327DD0u;
    {
        const bool branch_taken_0x327dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DD0u;
        // 0x327dd4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327dd0) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327DD8u;
label_327dd8:
    // 0x327dd8: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x327dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_327ddc:
    // 0x327ddc: 0x56030006  bnel        $s0, $v1, . + 4 + (0x6 << 2)
label_327de0:
    if (ctx->pc == 0x327DE0u) {
        ctx->pc = 0x327DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DDCu;
        // 0x327de0: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327DE4u;
        goto label_327de4;
    }
    ctx->pc = 0x327DDCu;
    {
        const bool branch_taken_0x327ddc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x327ddc) {
            ctx->pc = 0x327DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327DDCu;
            // 0x327de0: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327DF8u;
            goto label_327df8;
        }
    }
    ctx->pc = 0x327DE4u;
label_327de4:
    // 0x327de4: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x327de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_327de8:
    // 0x327de8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x327de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_327dec:
    // 0x327dec: 0x54400756  bnel        $v0, $zero, . + 4 + (0x756 << 2)
label_327df0:
    if (ctx->pc == 0x327DF0u) {
        ctx->pc = 0x327DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DECu;
        // 0x327df0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327DF4u;
        goto label_327df4;
    }
    ctx->pc = 0x327DECu;
    {
        const bool branch_taken_0x327dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327dec) {
            ctx->pc = 0x327DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327DECu;
            // 0x327df0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327DF4u;
label_327df4:
    // 0x327df4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x327df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_327df8:
    // 0x327df8: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_327dfc:
    if (ctx->pc == 0x327DFCu) {
        ctx->pc = 0x327DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DF8u;
        // 0x327dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E00u;
        goto label_327e00;
    }
    ctx->pc = 0x327DF8u;
    {
        const bool branch_taken_0x327df8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x327DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DF8u;
        // 0x327dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327df8) {
            ctx->pc = 0x327E18u;
            goto label_327e18;
        }
    }
    ctx->pc = 0x327E00u;
label_327e00:
    // 0x327e00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x327e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327e04:
    // 0x327e04: 0xc0cdf66  jal         func_337D98
label_327e08:
    if (ctx->pc == 0x327E08u) {
        ctx->pc = 0x327E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E04u;
        // 0x327e08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E0Cu;
        goto label_327e0c;
    }
    ctx->pc = 0x327E04u;
    SET_GPR_U32(ctx, 31, 0x327E0Cu);
    ctx->pc = 0x327E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E04u;
    // 0x327e08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D98u, 0x327E04u, 0x327E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E0Cu;
label_327e0c:
    // 0x327e0c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x327e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_327e10:
    // 0x327e10: 0x1000074c  b           . + 4 + (0x74C << 2)
label_327e14:
    if (ctx->pc == 0x327E14u) {
        ctx->pc = 0x327E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E10u;
        // 0x327e14: 0xae430498  sw          $v1, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E18u;
        goto label_327e18;
    }
    ctx->pc = 0x327E10u;
    {
        const bool branch_taken_0x327e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E10u;
        // 0x327e14: 0xae430498  sw          $v1, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e10) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327E18u;
label_327e18:
    // 0x327e18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x327e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327e1c:
    // 0x327e1c: 0xc0cdf66  jal         func_337D98
label_327e20:
    if (ctx->pc == 0x327E20u) {
        ctx->pc = 0x327E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E1Cu;
        // 0x327e20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E24u;
        goto label_327e24;
    }
    ctx->pc = 0x327E1Cu;
    SET_GPR_U32(ctx, 31, 0x327E24u);
    ctx->pc = 0x327E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E1Cu;
    // 0x327e20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D98u, 0x327E1Cu, 0x327E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E24u;
label_327e24:
    // 0x327e24: 0x10000748  b           . + 4 + (0x748 << 2)
label_327e28:
    if (ctx->pc == 0x327E28u) {
        ctx->pc = 0x327E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E24u;
        // 0x327e28: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E2Cu;
        goto label_327e2c;
    }
    ctx->pc = 0x327E24u;
    {
        const bool branch_taken_0x327e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E24u;
        // 0x327e28: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e24) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327E2Cu;
label_327e2c:
    // 0x327e2c: 0xc0cdec0  jal         func_337B00
label_327e30:
    if (ctx->pc == 0x327E30u) {
        ctx->pc = 0x327E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E2Cu;
        // 0x327e30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E34u;
        goto label_327e34;
    }
    ctx->pc = 0x327E2Cu;
    SET_GPR_U32(ctx, 31, 0x327E34u);
    ctx->pc = 0x327E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E2Cu;
    // 0x327e30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x327E2Cu, 0x327E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E34u;
label_327e34:
    // 0x327e34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327e38:
    // 0x327e38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327e3c:
    // 0x327e3c: 0xc0cdbde  jal         func_336F78
label_327e40:
    if (ctx->pc == 0x327E40u) {
        ctx->pc = 0x327E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E3Cu;
        // 0x327e40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E44u;
        goto label_327e44;
    }
    ctx->pc = 0x327E3Cu;
    SET_GPR_U32(ctx, 31, 0x327E44u);
    ctx->pc = 0x327E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E3Cu;
    // 0x327e40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327E3Cu, 0x327E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E44u;
label_327e44:
    // 0x327e44: 0x1040073f  beqz        $v0, . + 4 + (0x73F << 2)
label_327e48:
    if (ctx->pc == 0x327E48u) {
        ctx->pc = 0x327E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E44u;
        // 0x327e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E4Cu;
        goto label_327e4c;
    }
    ctx->pc = 0x327E44u;
    {
        const bool branch_taken_0x327e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E44u;
        // 0x327e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e44) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327E4Cu;
label_327e4c:
    // 0x327e4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x327e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327e50:
    // 0x327e50: 0xc0cdf66  jal         func_337D98
label_327e54:
    if (ctx->pc == 0x327E54u) {
        ctx->pc = 0x327E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E50u;
        // 0x327e54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E58u;
        goto label_327e58;
    }
    ctx->pc = 0x327E50u;
    SET_GPR_U32(ctx, 31, 0x327E58u);
    ctx->pc = 0x327E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E50u;
    // 0x327e54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D98u, 0x327E50u, 0x327E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E58u;
label_327e58:
    // 0x327e58: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x327e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_327e5c:
    // 0x327e5c: 0x1603073a  bne         $s0, $v1, . + 4 + (0x73A << 2)
label_327e60:
    if (ctx->pc == 0x327E60u) {
        ctx->pc = 0x327E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E5Cu;
        // 0x327e60: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E64u;
        goto label_327e64;
    }
    ctx->pc = 0x327E5Cu;
    {
        const bool branch_taken_0x327e5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x327E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E5Cu;
        // 0x327e60: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e5c) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327E64u;
label_327e64:
    // 0x327e64: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x327e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_327e68:
    // 0x327e68: 0x10000737  b           . + 4 + (0x737 << 2)
label_327e6c:
    if (ctx->pc == 0x327E6Cu) {
        ctx->pc = 0x327E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E68u;
        // 0x327e6c: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E70u;
        goto label_327e70;
    }
    ctx->pc = 0x327E68u;
    {
        const bool branch_taken_0x327e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E68u;
        // 0x327e6c: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e68) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327E70u;
label_327e70:
    // 0x327e70: 0xc0cdec0  jal         func_337B00
label_327e74:
    if (ctx->pc == 0x327E74u) {
        ctx->pc = 0x327E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E70u;
        // 0x327e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E78u;
        goto label_327e78;
    }
    ctx->pc = 0x327E70u;
    SET_GPR_U32(ctx, 31, 0x327E78u);
    ctx->pc = 0x327E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E70u;
    // 0x327e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x327E70u, 0x327E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E78u;
label_327e78:
    // 0x327e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327e7c:
    // 0x327e7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327e80:
    // 0x327e80: 0xc0cdbde  jal         func_336F78
label_327e84:
    if (ctx->pc == 0x327E84u) {
        ctx->pc = 0x327E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E80u;
        // 0x327e84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E88u;
        goto label_327e88;
    }
    ctx->pc = 0x327E80u;
    SET_GPR_U32(ctx, 31, 0x327E88u);
    ctx->pc = 0x327E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E80u;
    // 0x327e84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327E80u, 0x327E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E88u;
label_327e88:
    // 0x327e88: 0x1040072e  beqz        $v0, . + 4 + (0x72E << 2)
label_327e8c:
    if (ctx->pc == 0x327E8Cu) {
        ctx->pc = 0x327E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E88u;
        // 0x327e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E90u;
        goto label_327e90;
    }
    ctx->pc = 0x327E88u;
    {
        const bool branch_taken_0x327e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E88u;
        // 0x327e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e88) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327E90u;
label_327e90:
    // 0x327e90: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x327e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_327e94:
    // 0x327e94: 0x1000000b  b           . + 4 + (0xB << 2)
label_327e98:
    if (ctx->pc == 0x327E98u) {
        ctx->pc = 0x327E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E94u;
        // 0x327e98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E9Cu;
        goto label_327e9c;
    }
    ctx->pc = 0x327E94u;
    {
        const bool branch_taken_0x327e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E94u;
        // 0x327e98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e94) {
            ctx->pc = 0x327EC4u;
            goto label_327ec4;
        }
    }
    ctx->pc = 0x327E9Cu;
label_327e9c:
    // 0x327e9c: 0xc0cdec0  jal         func_337B00
label_327ea0:
    if (ctx->pc == 0x327EA0u) {
        ctx->pc = 0x327EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E9Cu;
        // 0x327ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327EA4u;
        goto label_327ea4;
    }
    ctx->pc = 0x327E9Cu;
    SET_GPR_U32(ctx, 31, 0x327EA4u);
    ctx->pc = 0x327EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E9Cu;
    // 0x327ea0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x327E9Cu, 0x327EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327EA4u;
label_327ea4:
    // 0x327ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327ea8:
    // 0x327ea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327eac:
    // 0x327eac: 0xc0cdbde  jal         func_336F78
label_327eb0:
    if (ctx->pc == 0x327EB0u) {
        ctx->pc = 0x327EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EACu;
        // 0x327eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327EB4u;
        goto label_327eb4;
    }
    ctx->pc = 0x327EACu;
    SET_GPR_U32(ctx, 31, 0x327EB4u);
    ctx->pc = 0x327EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327EACu;
    // 0x327eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327EACu, 0x327EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327EB4u;
label_327eb4:
    // 0x327eb4: 0x10400723  beqz        $v0, . + 4 + (0x723 << 2)
label_327eb8:
    if (ctx->pc == 0x327EB8u) {
        ctx->pc = 0x327EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EB4u;
        // 0x327eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327EBCu;
        goto label_327ebc;
    }
    ctx->pc = 0x327EB4u;
    {
        const bool branch_taken_0x327eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EB4u;
        // 0x327eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327eb4) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327EBCu;
label_327ebc:
    // 0x327ebc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x327ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_327ec0:
    // 0x327ec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x327ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327ec4:
    // 0x327ec4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x327ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_327ec8:
    // 0x327ec8: 0x40f809  jalr        $v0
label_327ecc:
    if (ctx->pc == 0x327ECCu) {
        ctx->pc = 0x327ED0u;
        goto label_327ed0;
    }
    ctx->pc = 0x327EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327ED0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327EC8u, 0x327ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327ED0u;
label_327ed0:
    // 0x327ed0: 0x1000071d  b           . + 4 + (0x71D << 2)
label_327ed4:
    if (ctx->pc == 0x327ED4u) {
        ctx->pc = 0x327ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327ED0u;
        // 0x327ed4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327ED8u;
        goto label_327ed8;
    }
    ctx->pc = 0x327ED0u;
    {
        const bool branch_taken_0x327ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327ED0u;
        // 0x327ed4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ed0) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327ED8u;
label_327ed8:
    // 0x327ed8: 0xc0cdec0  jal         func_337B00
label_327edc:
    if (ctx->pc == 0x327EDCu) {
        ctx->pc = 0x327EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327ED8u;
        // 0x327edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327EE0u;
        goto label_327ee0;
    }
    ctx->pc = 0x327ED8u;
    SET_GPR_U32(ctx, 31, 0x327EE0u);
    ctx->pc = 0x327EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327ED8u;
    // 0x327edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x327ED8u, 0x327EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327EE0u;
label_327ee0:
    // 0x327ee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327ee4:
    // 0x327ee4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327ee8:
    // 0x327ee8: 0xc0cdbde  jal         func_336F78
label_327eec:
    if (ctx->pc == 0x327EECu) {
        ctx->pc = 0x327EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EE8u;
        // 0x327eec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327EF0u;
        goto label_327ef0;
    }
    ctx->pc = 0x327EE8u;
    SET_GPR_U32(ctx, 31, 0x327EF0u);
    ctx->pc = 0x327EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327EE8u;
    // 0x327eec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327EE8u, 0x327EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327EF0u;
label_327ef0:
    // 0x327ef0: 0x50400715  beql        $v0, $zero, . + 4 + (0x715 << 2)
label_327ef4:
    if (ctx->pc == 0x327EF4u) {
        ctx->pc = 0x327EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EF0u;
        // 0x327ef4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327EF8u;
        goto label_327ef8;
    }
    ctx->pc = 0x327EF0u;
    {
        const bool branch_taken_0x327ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327ef0) {
            ctx->pc = 0x327EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327EF0u;
            // 0x327ef4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327EF8u;
label_327ef8:
    // 0x327ef8: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x327ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_327efc:
    // 0x327efc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x327efcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_327f00:
    // 0x327f00: 0xe641003c  swc1        $f1, 0x3C($s2)
    ctx->pc = 0x327f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_327f04:
    // 0x327f04: 0x10000710  b           . + 4 + (0x710 << 2)
label_327f08:
    if (ctx->pc == 0x327F08u) {
        ctx->pc = 0x327F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F04u;
        // 0x327f08: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F0Cu;
        goto label_327f0c;
    }
    ctx->pc = 0x327F04u;
    {
        const bool branch_taken_0x327f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F04u;
        // 0x327f08: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f04) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327F0Cu;
label_327f0c:
    // 0x327f0c: 0xc0cdf2e  jal         func_337CB8
label_327f10:
    if (ctx->pc == 0x327F10u) {
        ctx->pc = 0x327F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F0Cu;
        // 0x327f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F14u;
        goto label_327f14;
    }
    ctx->pc = 0x327F0Cu;
    SET_GPR_U32(ctx, 31, 0x327F14u);
    ctx->pc = 0x327F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F0Cu;
    // 0x327f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x327F0Cu, 0x327F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F14u;
label_327f14:
    // 0x327f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327f18:
    // 0x327f18: 0xc0cdec0  jal         func_337B00
label_327f1c:
    if (ctx->pc == 0x327F1Cu) {
        ctx->pc = 0x327F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F18u;
        // 0x327f1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F20u;
        goto label_327f20;
    }
    ctx->pc = 0x327F18u;
    SET_GPR_U32(ctx, 31, 0x327F20u);
    ctx->pc = 0x327F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F18u;
    // 0x327f1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x327F18u, 0x327F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F20u;
label_327f20:
    // 0x327f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327f24:
    // 0x327f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327f28:
    // 0x327f28: 0xc0cdbde  jal         func_336F78
label_327f2c:
    if (ctx->pc == 0x327F2Cu) {
        ctx->pc = 0x327F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F28u;
        // 0x327f2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F30u;
        goto label_327f30;
    }
    ctx->pc = 0x327F28u;
    SET_GPR_U32(ctx, 31, 0x327F30u);
    ctx->pc = 0x327F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F28u;
    // 0x327f2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327F28u, 0x327F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F30u;
label_327f30:
    // 0x327f30: 0x50400705  beql        $v0, $zero, . + 4 + (0x705 << 2)
label_327f34:
    if (ctx->pc == 0x327F34u) {
        ctx->pc = 0x327F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F30u;
        // 0x327f34: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F38u;
        goto label_327f38;
    }
    ctx->pc = 0x327F30u;
    {
        const bool branch_taken_0x327f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327f30) {
            ctx->pc = 0x327F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327F30u;
            // 0x327f34: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327F38u;
label_327f38:
    // 0x327f38: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x327f38u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_327f3c:
    // 0x327f3c: 0x0  nop
    ctx->pc = 0x327f3cu;
    // NOP
label_327f40:
    // 0x327f40: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x327f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_327f44:
    // 0x327f44: 0xc083976  jal         func_20E5D8
label_327f48:
    if (ctx->pc == 0x327F48u) {
        ctx->pc = 0x327F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F44u;
        // 0x327f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F4Cu;
        goto label_327f4c;
    }
    ctx->pc = 0x327F44u;
    SET_GPR_U32(ctx, 31, 0x327F4Cu);
    ctx->pc = 0x327F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F44u;
    // 0x327f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x327F44u, 0x327F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F4Cu;
label_327f4c:
    // 0x327f4c: 0x100006fe  b           . + 4 + (0x6FE << 2)
label_327f50:
    if (ctx->pc == 0x327F50u) {
        ctx->pc = 0x327F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F4Cu;
        // 0x327f50: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F54u;
        goto label_327f54;
    }
    ctx->pc = 0x327F4Cu;
    {
        const bool branch_taken_0x327f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F4Cu;
        // 0x327f50: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f4c) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327F54u;
label_327f54:
    // 0x327f54: 0xc0cdf2e  jal         func_337CB8
label_327f58:
    if (ctx->pc == 0x327F58u) {
        ctx->pc = 0x327F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F54u;
        // 0x327f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F5Cu;
        goto label_327f5c;
    }
    ctx->pc = 0x327F54u;
    SET_GPR_U32(ctx, 31, 0x327F5Cu);
    ctx->pc = 0x327F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F54u;
    // 0x327f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x327F54u, 0x327F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F5Cu;
label_327f5c:
    // 0x327f5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327f60:
    // 0x327f60: 0xc0cdf2e  jal         func_337CB8
label_327f64:
    if (ctx->pc == 0x327F64u) {
        ctx->pc = 0x327F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F60u;
        // 0x327f64: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F68u;
        goto label_327f68;
    }
    ctx->pc = 0x327F60u;
    SET_GPR_U32(ctx, 31, 0x327F68u);
    ctx->pc = 0x327F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F60u;
    // 0x327f64: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x327F60u, 0x327F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F68u;
label_327f68:
    // 0x327f68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327f6c:
    // 0x327f6c: 0xc0cdec0  jal         func_337B00
label_327f70:
    if (ctx->pc == 0x327F70u) {
        ctx->pc = 0x327F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F6Cu;
        // 0x327f70: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F74u;
        goto label_327f74;
    }
    ctx->pc = 0x327F6Cu;
    SET_GPR_U32(ctx, 31, 0x327F74u);
    ctx->pc = 0x327F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F6Cu;
    // 0x327f70: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x327F6Cu, 0x327F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F74u;
label_327f74:
    // 0x327f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327f78:
    // 0x327f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327f7c:
    // 0x327f7c: 0xc0cdbde  jal         func_336F78
label_327f80:
    if (ctx->pc == 0x327F80u) {
        ctx->pc = 0x327F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F7Cu;
        // 0x327f80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F84u;
        goto label_327f84;
    }
    ctx->pc = 0x327F7Cu;
    SET_GPR_U32(ctx, 31, 0x327F84u);
    ctx->pc = 0x327F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F7Cu;
    // 0x327f80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327F7Cu, 0x327F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F84u;
label_327f84:
    // 0x327f84: 0x104006ef  beqz        $v0, . + 4 + (0x6EF << 2)
label_327f88:
    if (ctx->pc == 0x327F88u) {
        ctx->pc = 0x327F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F84u;
        // 0x327f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F8Cu;
        goto label_327f8c;
    }
    ctx->pc = 0x327F84u;
    {
        const bool branch_taken_0x327f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F84u;
        // 0x327f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f84) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x327F8Cu;
label_327f8c:
    // 0x327f8c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x327f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_327f90:
    // 0x327f90: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x327f90u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_327f94:
    // 0x327f94: 0x0  nop
    ctx->pc = 0x327f94u;
    // NOP
label_327f98:
    // 0x327f98: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x327f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_327f9c:
    // 0x327f9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x327f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327fa0:
    // 0x327fa0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x327fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_327fa4:
    // 0x327fa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x327fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327fa8:
    // 0x327fa8: 0x40f809  jalr        $v0
label_327fac:
    if (ctx->pc == 0x327FACu) {
        ctx->pc = 0x327FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FA8u;
        // 0x327fac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327FB0u;
        goto label_327fb0;
    }
    ctx->pc = 0x327FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327FB0u);
        ctx->pc = 0x327FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FA8u;
        // 0x327fac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327FA8u, 0x327FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327FB0u;
label_327fb0:
    // 0x327fb0: 0x100006e5  b           . + 4 + (0x6E5 << 2)
label_327fb4:
    if (ctx->pc == 0x327FB4u) {
        ctx->pc = 0x327FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FB0u;
        // 0x327fb4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327FB8u;
        goto label_327fb8;
    }
    ctx->pc = 0x327FB0u;
    {
        const bool branch_taken_0x327fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FB0u;
        // 0x327fb4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327fb0) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x327FB8u;
label_327fb8:
    // 0x327fb8: 0xc0cdec0  jal         func_337B00
label_327fbc:
    if (ctx->pc == 0x327FBCu) {
        ctx->pc = 0x327FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FB8u;
        // 0x327fbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327FC0u;
        goto label_327fc0;
    }
    ctx->pc = 0x327FB8u;
    SET_GPR_U32(ctx, 31, 0x327FC0u);
    ctx->pc = 0x327FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FB8u;
    // 0x327fbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x327FB8u, 0x327FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FC0u;
label_327fc0:
    // 0x327fc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327fc4:
    // 0x327fc4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x327fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_327fc8:
    // 0x327fc8: 0x2442bf10  addiu       $v0, $v0, -0x40F0
    ctx->pc = 0x327fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950672));
label_327fcc:
    // 0x327fcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x327fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327fd0:
    // 0x327fd0: 0xc0efc2e  jal         func_3BF0B8
label_327fd4:
    if (ctx->pc == 0x327FD4u) {
        ctx->pc = 0x327FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FD0u;
        // 0x327fd4: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327FD8u;
        goto label_327fd8;
    }
    ctx->pc = 0x327FD0u;
    SET_GPR_U32(ctx, 31, 0x327FD8u);
    ctx->pc = 0x327FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FD0u;
    // 0x327fd4: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x327FD0u, 0x327FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FD8u;
label_327fd8:
    // 0x327fd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x327fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327fdc:
    // 0x327fdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327fe0:
    // 0x327fe0: 0xc0cdbde  jal         func_336F78
label_327fe4:
    if (ctx->pc == 0x327FE4u) {
        ctx->pc = 0x327FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FE0u;
        // 0x327fe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327FE8u;
        goto label_327fe8;
    }
    ctx->pc = 0x327FE0u;
    SET_GPR_U32(ctx, 31, 0x327FE8u);
    ctx->pc = 0x327FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FE0u;
    // 0x327fe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x327FE0u, 0x327FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FE8u;
label_327fe8:
    // 0x327fe8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_327fec:
    if (ctx->pc == 0x327FECu) {
        ctx->pc = 0x327FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FE8u;
        // 0x327fec: 0x8e45003c  lw          $a1, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327FF0u;
        goto label_327ff0;
    }
    ctx->pc = 0x327FE8u;
    {
        const bool branch_taken_0x327fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327fe8) {
            ctx->pc = 0x327FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327FE8u;
            // 0x327fec: 0x8e45003c  lw          $a1, 0x3C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328054u;
            goto label_328054;
        }
    }
    ctx->pc = 0x327FF0u;
label_327ff0:
    // 0x327ff0: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x327ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_327ff4:
    // 0x327ff4: 0x10000013  b           . + 4 + (0x13 << 2)
label_327ff8:
    if (ctx->pc == 0x327FF8u) {
        ctx->pc = 0x327FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FF4u;
        // 0x327ff8: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327FFCu;
        goto label_327ffc;
    }
    ctx->pc = 0x327FF4u;
    {
        const bool branch_taken_0x327ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FF4u;
        // 0x327ff8: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ff4) {
            ctx->pc = 0x328044u;
            goto label_328044;
        }
    }
    ctx->pc = 0x327FFCu;
label_327ffc:
    // 0x327ffc: 0xc0cdec0  jal         func_337B00
label_328000:
    if (ctx->pc == 0x328000u) {
        ctx->pc = 0x328000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FFCu;
        // 0x328000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328004u;
        goto label_328004;
    }
    ctx->pc = 0x327FFCu;
    SET_GPR_U32(ctx, 31, 0x328004u);
    ctx->pc = 0x328000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FFCu;
    // 0x328000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x327FFCu, 0x328004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328004u;
label_328004:
    // 0x328004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328008:
    // 0x328008: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x328008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_32800c:
    // 0x32800c: 0x2442bf10  addiu       $v0, $v0, -0x40F0
    ctx->pc = 0x32800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950672));
label_328010:
    // 0x328010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x328010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328014:
    // 0x328014: 0xc0efc2e  jal         func_3BF0B8
label_328018:
    if (ctx->pc == 0x328018u) {
        ctx->pc = 0x328018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328014u;
        // 0x328018: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32801Cu;
        goto label_32801c;
    }
    ctx->pc = 0x328014u;
    SET_GPR_U32(ctx, 31, 0x32801Cu);
    ctx->pc = 0x328018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328014u;
    // 0x328018: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x328014u, 0x32801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32801Cu;
label_32801c:
    // 0x32801c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32801cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328020:
    // 0x328020: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328024:
    // 0x328024: 0xc0cdbde  jal         func_336F78
label_328028:
    if (ctx->pc == 0x328028u) {
        ctx->pc = 0x328028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328024u;
        // 0x328028: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32802Cu;
        goto label_32802c;
    }
    ctx->pc = 0x328024u;
    SET_GPR_U32(ctx, 31, 0x32802Cu);
    ctx->pc = 0x328028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328024u;
    // 0x328028: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x328024u, 0x32802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32802Cu;
label_32802c:
    // 0x32802c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_328030:
    if (ctx->pc == 0x328030u) {
        ctx->pc = 0x328030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32802Cu;
        // 0x328030: 0x8e45003c  lw          $a1, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328034u;
        goto label_328034;
    }
    ctx->pc = 0x32802Cu;
    {
        const bool branch_taken_0x32802c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32802c) {
            ctx->pc = 0x328030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32802Cu;
            // 0x328030: 0x8e45003c  lw          $a1, 0x3C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328054u;
            goto label_328054;
        }
    }
    ctx->pc = 0x328034u;
label_328034:
    // 0x328034: 0xc083bae  jal         func_20EEB8
label_328038:
    if (ctx->pc == 0x328038u) {
        ctx->pc = 0x328038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328034u;
        // 0x328038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32803Cu;
        goto label_32803c;
    }
    ctx->pc = 0x328034u;
    SET_GPR_U32(ctx, 31, 0x32803Cu);
    ctx->pc = 0x328038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328034u;
    // 0x328038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEB8u, 0x328034u, 0x32803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32803Cu;
label_32803c:
    // 0x32803c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32803cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_328040:
    // 0x328040: 0xae43003c  sw          $v1, 0x3C($s2)
    ctx->pc = 0x328040u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
label_328044:
    // 0x328044: 0xc0efc2e  jal         func_3BF0B8
label_328048:
    if (ctx->pc == 0x328048u) {
        ctx->pc = 0x328048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328044u;
        // 0x328048: 0x8e0400f8  lw          $a0, 0xF8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32804Cu;
        goto label_32804c;
    }
    ctx->pc = 0x328044u;
    SET_GPR_U32(ctx, 31, 0x32804Cu);
    ctx->pc = 0x328048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328044u;
    // 0x328048: 0x8e0400f8  lw          $a0, 0xF8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x328044u, 0x32804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32804Cu;
label_32804c:
    // 0x32804c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32804cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328050:
    // 0x328050: 0x8e45003c  lw          $a1, 0x3C($s2)
    ctx->pc = 0x328050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_328054:
    // 0x328054: 0xc0cdea8  jal         func_337AA0
label_328058:
    if (ctx->pc == 0x328058u) {
        ctx->pc = 0x328058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328054u;
        // 0x328058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32805Cu;
        goto label_32805c;
    }
    ctx->pc = 0x328054u;
    SET_GPR_U32(ctx, 31, 0x32805Cu);
    ctx->pc = 0x328058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328054u;
    // 0x328058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x328054u, 0x32805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32805Cu;
label_32805c:
    // 0x32805c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32805cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328060:
    // 0x328060: 0xc0cdea8  jal         func_337AA0
label_328064:
    if (ctx->pc == 0x328064u) {
        ctx->pc = 0x328064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328060u;
        // 0x328064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328068u;
        goto label_328068;
    }
    ctx->pc = 0x328060u;
    SET_GPR_U32(ctx, 31, 0x328068u);
    ctx->pc = 0x328064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328060u;
    // 0x328064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x328060u, 0x328068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328068u;
label_328068:
    // 0x328068: 0x100006b7  b           . + 4 + (0x6B7 << 2)
label_32806c:
    if (ctx->pc == 0x32806Cu) {
        ctx->pc = 0x32806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328068u;
        // 0x32806c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328070u;
        goto label_328070;
    }
    ctx->pc = 0x328068u;
    {
        const bool branch_taken_0x328068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328068u;
        // 0x32806c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328068) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328070u;
label_328070:
    // 0x328070: 0xc0cdec0  jal         func_337B00
label_328074:
    if (ctx->pc == 0x328074u) {
        ctx->pc = 0x328074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328070u;
        // 0x328074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328078u;
        goto label_328078;
    }
    ctx->pc = 0x328070u;
    SET_GPR_U32(ctx, 31, 0x328078u);
    ctx->pc = 0x328074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328070u;
    // 0x328074: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328070u, 0x328078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328078u;
label_328078:
    // 0x328078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32807c:
    // 0x32807c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32807cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328080:
    // 0x328080: 0xc0cdbde  jal         func_336F78
label_328084:
    if (ctx->pc == 0x328084u) {
        ctx->pc = 0x328084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328080u;
        // 0x328084: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328088u;
        goto label_328088;
    }
    ctx->pc = 0x328080u;
    SET_GPR_U32(ctx, 31, 0x328088u);
    ctx->pc = 0x328084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328080u;
    // 0x328084: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x328080u, 0x328088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328088u;
label_328088:
    // 0x328088: 0x504006af  beql        $v0, $zero, . + 4 + (0x6AF << 2)
label_32808c:
    if (ctx->pc == 0x32808Cu) {
        ctx->pc = 0x32808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328088u;
        // 0x32808c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328090u;
        goto label_328090;
    }
    ctx->pc = 0x328088u;
    {
        const bool branch_taken_0x328088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328088) {
            ctx->pc = 0x32808Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328088u;
            // 0x32808c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328090u;
label_328090:
    // 0x328090: 0xc083ba8  jal         func_20EEA0
label_328094:
    if (ctx->pc == 0x328094u) {
        ctx->pc = 0x328094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328090u;
        // 0x328094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328098u;
        goto label_328098;
    }
    ctx->pc = 0x328090u;
    SET_GPR_U32(ctx, 31, 0x328098u);
    ctx->pc = 0x328094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328090u;
    // 0x328094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEA0u, 0x328090u, 0x328098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328098u;
label_328098:
    // 0x328098: 0x100006aa  b           . + 4 + (0x6AA << 2)
label_32809c:
    if (ctx->pc == 0x32809Cu) {
        ctx->pc = 0x32809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328098u;
        // 0x32809c: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280A0u;
        goto label_3280a0;
    }
    ctx->pc = 0x328098u;
    {
        const bool branch_taken_0x328098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328098u;
        // 0x32809c: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328098) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3280A0u;
label_3280a0:
    // 0x3280a0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3280a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3280a4:
    // 0x3280a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3280a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3280a8:
    // 0x3280a8: 0x8c50bd50  lw          $s0, -0x42B0($v0)
    ctx->pc = 0x3280a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_3280ac:
    // 0x3280ac: 0xc0cdbde  jal         func_336F78
label_3280b0:
    if (ctx->pc == 0x3280B0u) {
        ctx->pc = 0x3280B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280ACu;
        // 0x3280b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280B4u;
        goto label_3280b4;
    }
    ctx->pc = 0x3280ACu;
    SET_GPR_U32(ctx, 31, 0x3280B4u);
    ctx->pc = 0x3280B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280ACu;
    // 0x3280b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x3280ACu, 0x3280B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280B4u;
label_3280b4:
    // 0x3280b4: 0x100006a3  b           . + 4 + (0x6A3 << 2)
label_3280b8:
    if (ctx->pc == 0x3280B8u) {
        ctx->pc = 0x3280B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280B4u;
        // 0x3280b8: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280BCu;
        goto label_3280bc;
    }
    ctx->pc = 0x3280B4u;
    {
        const bool branch_taken_0x3280b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3280B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280B4u;
        // 0x3280b8: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280b4) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3280BCu;
label_3280bc:
    // 0x3280bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3280bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3280c0:
    // 0x3280c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3280c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3280c4:
    // 0x3280c4: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x3280c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_3280c8:
    // 0x3280c8: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x3280c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_3280cc:
    // 0x3280cc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3280ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3280d0:
    // 0x3280d0: 0xc0cdbde  jal         func_336F78
label_3280d4:
    if (ctx->pc == 0x3280D4u) {
        ctx->pc = 0x3280D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280D0u;
        // 0x3280d4: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280D8u;
        goto label_3280d8;
    }
    ctx->pc = 0x3280D0u;
    SET_GPR_U32(ctx, 31, 0x3280D8u);
    ctx->pc = 0x3280D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280D0u;
    // 0x3280d4: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x3280D0u, 0x3280D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280D8u;
label_3280d8:
    // 0x3280d8: 0x1000052e  b           . + 4 + (0x52E << 2)
label_3280dc:
    if (ctx->pc == 0x3280DCu) {
        ctx->pc = 0x3280DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280D8u;
        // 0x3280dc: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280E0u;
        goto label_3280e0;
    }
    ctx->pc = 0x3280D8u;
    {
        const bool branch_taken_0x3280d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3280DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280D8u;
        // 0x3280dc: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280d8) {
            ctx->pc = 0x329594u;
            goto label_329594;
        }
    }
    ctx->pc = 0x3280E0u;
label_3280e0:
    // 0x3280e0: 0xc0cdf2e  jal         func_337CB8
label_3280e4:
    if (ctx->pc == 0x3280E4u) {
        ctx->pc = 0x3280E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280E0u;
        // 0x3280e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280E8u;
        goto label_3280e8;
    }
    ctx->pc = 0x3280E0u;
    SET_GPR_U32(ctx, 31, 0x3280E8u);
    ctx->pc = 0x3280E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280E0u;
    // 0x3280e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3280E0u, 0x3280E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280E8u;
label_3280e8:
    // 0x3280e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3280e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3280ec:
    // 0x3280ec: 0x28820080  slti        $v0, $a0, 0x80
    ctx->pc = 0x3280ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
label_3280f0:
    // 0x3280f0: 0x10400695  beqz        $v0, . + 4 + (0x695 << 2)
label_3280f4:
    if (ctx->pc == 0x3280F4u) {
        ctx->pc = 0x3280F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280F0u;
        // 0x3280f4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280F8u;
        goto label_3280f8;
    }
    ctx->pc = 0x3280F0u;
    {
        const bool branch_taken_0x3280f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3280F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280F0u;
        // 0x3280f4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280f0) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3280F8u;
label_3280f8:
    // 0x3280f8: 0xc075cc2  jal         func_1D7308
label_3280fc:
    if (ctx->pc == 0x3280FCu) {
        ctx->pc = 0x328100u;
        goto label_328100;
    }
    ctx->pc = 0x3280F8u;
    SET_GPR_U32(ctx, 31, 0x328100u);
    ctx->pc = 0x1D7308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7308u, 0x3280F8u, 0x328100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328100u;
label_328100:
    // 0x328100: 0x10000691  b           . + 4 + (0x691 << 2)
label_328104:
    if (ctx->pc == 0x328104u) {
        ctx->pc = 0x328104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328100u;
        // 0x328104: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328108u;
        goto label_328108;
    }
    ctx->pc = 0x328100u;
    {
        const bool branch_taken_0x328100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328100u;
        // 0x328104: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328100) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328108u;
label_328108:
    // 0x328108: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x328108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_32810c:
    // 0x32810c: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x32810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_328110:
    // 0x328110: 0x1000068c  b           . + 4 + (0x68C << 2)
label_328114:
    if (ctx->pc == 0x328114u) {
        ctx->pc = 0x328114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328110u;
        // 0x328114: 0xae43003c  sw          $v1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328118u;
        goto label_328118;
    }
    ctx->pc = 0x328110u;
    {
        const bool branch_taken_0x328110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328110u;
        // 0x328114: 0xae43003c  sw          $v1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328110) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328118u;
label_328118:
    // 0x328118: 0xc0cdec0  jal         func_337B00
label_32811c:
    if (ctx->pc == 0x32811Cu) {
        ctx->pc = 0x32811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328118u;
        // 0x32811c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328120u;
        goto label_328120;
    }
    ctx->pc = 0x328118u;
    SET_GPR_U32(ctx, 31, 0x328120u);
    ctx->pc = 0x32811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328118u;
    // 0x32811c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328118u, 0x328120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328120u;
label_328120:
    // 0x328120: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328124:
    // 0x328124: 0xc0cdec0  jal         func_337B00
label_328128:
    if (ctx->pc == 0x328128u) {
        ctx->pc = 0x328128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328124u;
        // 0x328128: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32812Cu;
        goto label_32812c;
    }
    ctx->pc = 0x328124u;
    SET_GPR_U32(ctx, 31, 0x32812Cu);
    ctx->pc = 0x328128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328124u;
    // 0x328128: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328124u, 0x32812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32812Cu;
label_32812c:
    // 0x32812c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32812cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328130:
    // 0x328130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328134:
    // 0x328134: 0xc0cdcd4  jal         func_337350
label_328138:
    if (ctx->pc == 0x328138u) {
        ctx->pc = 0x328138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328134u;
        // 0x328138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32813Cu;
        goto label_32813c;
    }
    ctx->pc = 0x328134u;
    SET_GPR_U32(ctx, 31, 0x32813Cu);
    ctx->pc = 0x328138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328134u;
    // 0x328138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337350u, 0x328134u, 0x32813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32813Cu;
label_32813c:
    // 0x32813c: 0x10400681  beqz        $v0, . + 4 + (0x681 << 2)
label_328140:
    if (ctx->pc == 0x328140u) {
        ctx->pc = 0x328140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32813Cu;
        // 0x328140: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328144u;
        goto label_328144;
    }
    ctx->pc = 0x32813Cu;
    {
        const bool branch_taken_0x32813c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32813Cu;
        // 0x328140: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32813c) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328144u;
label_328144:
    // 0x328144: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x328144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_328148:
    // 0x328148: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x328148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_32814c:
    // 0x32814c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x32814cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_328150:
    // 0x328150: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_328154:
    if (ctx->pc == 0x328154u) {
        ctx->pc = 0x328154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328150u;
        // 0x328154: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328158u;
        goto label_328158;
    }
    ctx->pc = 0x328150u;
    {
        const bool branch_taken_0x328150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x328150) {
            ctx->pc = 0x328154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328150u;
            // 0x328154: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328168u;
            goto label_328168;
        }
    }
    ctx->pc = 0x328158u;
label_328158:
    // 0x328158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32815c:
    // 0x32815c: 0xc09bb9a  jal         func_26EE68
label_328160:
    if (ctx->pc == 0x328160u) {
        ctx->pc = 0x328160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32815Cu;
        // 0x328160: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328164u;
        goto label_328164;
    }
    ctx->pc = 0x32815Cu;
    SET_GPR_U32(ctx, 31, 0x328164u);
    ctx->pc = 0x328160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32815Cu;
    // 0x328160: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE68u, 0x32815Cu, 0x328164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328164u;
label_328164:
    // 0x328164: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x328164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_328168:
    // 0x328168: 0x30420401  andi        $v0, $v0, 0x401
    ctx->pc = 0x328168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1025);
label_32816c:
    // 0x32816c: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x32816cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
label_328170:
    // 0x328170: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_328174:
    if (ctx->pc == 0x328174u) {
        ctx->pc = 0x328174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328170u;
        // 0x328174: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328178u;
        goto label_328178;
    }
    ctx->pc = 0x328170u;
    {
        const bool branch_taken_0x328170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328170u;
        // 0x328174: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328170) {
            ctx->pc = 0x328188u;
            goto label_328188;
        }
    }
    ctx->pc = 0x328178u;
label_328178:
    // 0x328178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32817c:
    // 0x32817c: 0xc09a040  jal         func_268100
label_328180:
    if (ctx->pc == 0x328180u) {
        ctx->pc = 0x328180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32817Cu;
        // 0x328180: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328184u;
        goto label_328184;
    }
    ctx->pc = 0x32817Cu;
    SET_GPR_U32(ctx, 31, 0x328184u);
    ctx->pc = 0x328180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32817Cu;
    // 0x328180: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268100u, 0x32817Cu, 0x328184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328184u;
label_328184:
    // 0x328184: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x328184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_328188:
    // 0x328188: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x328188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_32818c:
    // 0x32818c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x32818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_328190:
    // 0x328190: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x328190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_328194:
    // 0x328194: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_328198:
    if (ctx->pc == 0x328198u) {
        ctx->pc = 0x328198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328194u;
        // 0x328198: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32819Cu;
        goto label_32819c;
    }
    ctx->pc = 0x328194u;
    {
        const bool branch_taken_0x328194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x328198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328194u;
        // 0x328198: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328194) {
            ctx->pc = 0x3281ACu;
            goto label_3281ac;
        }
    }
    ctx->pc = 0x32819Cu;
label_32819c:
    // 0x32819c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32819cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3281a0:
    // 0x3281a0: 0xc09ac18  jal         func_26B060
label_3281a4:
    if (ctx->pc == 0x3281A4u) {
        ctx->pc = 0x3281A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281A0u;
        // 0x3281a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281A8u;
        goto label_3281a8;
    }
    ctx->pc = 0x3281A0u;
    SET_GPR_U32(ctx, 31, 0x3281A8u);
    ctx->pc = 0x3281A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3281A0u;
    // 0x3281a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B060u, 0x3281A0u, 0x3281A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3281A8u;
label_3281a8:
    // 0x3281a8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3281a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_3281ac:
    // 0x3281ac: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x3281acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_3281b0:
    // 0x3281b0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3281b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3281b4:
    // 0x3281b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3281b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3281b8:
    // 0x3281b8: 0x50430662  beql        $v0, $v1, . + 4 + (0x662 << 2)
label_3281bc:
    if (ctx->pc == 0x3281BCu) {
        ctx->pc = 0x3281BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281B8u;
        // 0x3281bc: 0xae110270  sw          $s1, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281C0u;
        goto label_3281c0;
    }
    ctx->pc = 0x3281B8u;
    {
        const bool branch_taken_0x3281b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3281b8) {
            ctx->pc = 0x3281BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3281B8u;
            // 0x3281bc: 0xae110270  sw          $s1, 0x270($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3281C0u;
label_3281c0:
    // 0x3281c0: 0x10000661  b           . + 4 + (0x661 << 2)
label_3281c4:
    if (ctx->pc == 0x3281C4u) {
        ctx->pc = 0x3281C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281C0u;
        // 0x3281c4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281C8u;
        goto label_3281c8;
    }
    ctx->pc = 0x3281C0u;
    {
        const bool branch_taken_0x3281c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3281C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281C0u;
        // 0x3281c4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281c0) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3281C8u;
label_3281c8:
    // 0x3281c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3281c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3281cc:
    // 0x3281cc: 0xc0cdec0  jal         func_337B00
label_3281d0:
    if (ctx->pc == 0x3281D0u) {
        ctx->pc = 0x3281D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281CCu;
        // 0x3281d0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281D4u;
        goto label_3281d4;
    }
    ctx->pc = 0x3281CCu;
    SET_GPR_U32(ctx, 31, 0x3281D4u);
    ctx->pc = 0x3281D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3281CCu;
    // 0x3281d0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3281CCu, 0x3281D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3281D4u;
label_3281d4:
    // 0x3281d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3281d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3281d8:
    // 0x3281d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3281d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3281dc:
    // 0x3281dc: 0xc0cdc0e  jal         func_337038
label_3281e0:
    if (ctx->pc == 0x3281E0u) {
        ctx->pc = 0x3281E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281DCu;
        // 0x3281e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281E4u;
        goto label_3281e4;
    }
    ctx->pc = 0x3281DCu;
    SET_GPR_U32(ctx, 31, 0x3281E4u);
    ctx->pc = 0x3281E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3281DCu;
    // 0x3281e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337038u, 0x3281DCu, 0x3281E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3281E4u;
label_3281e4:
    // 0x3281e4: 0x50400657  beql        $v0, $zero, . + 4 + (0x657 << 2)
label_3281e8:
    if (ctx->pc == 0x3281E8u) {
        ctx->pc = 0x3281E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281E4u;
        // 0x3281e8: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281ECu;
        goto label_3281ec;
    }
    ctx->pc = 0x3281E4u;
    {
        const bool branch_taken_0x3281e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3281e4) {
            ctx->pc = 0x3281E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3281E4u;
            // 0x3281e8: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3281ECu;
label_3281ec:
    // 0x3281ec: 0xc09af3c  jal         func_26BCF0
label_3281f0:
    if (ctx->pc == 0x3281F0u) {
        ctx->pc = 0x3281F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281ECu;
        // 0x3281f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281F4u;
        goto label_3281f4;
    }
    ctx->pc = 0x3281ECu;
    SET_GPR_U32(ctx, 31, 0x3281F4u);
    ctx->pc = 0x3281F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3281ECu;
    // 0x3281f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BCF0u, 0x3281ECu, 0x3281F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3281F4u;
label_3281f4:
    // 0x3281f4: 0x10000593  b           . + 4 + (0x593 << 2)
label_3281f8:
    if (ctx->pc == 0x3281F8u) {
        ctx->pc = 0x3281F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281F4u;
        // 0x3281f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281FCu;
        goto label_3281fc;
    }
    ctx->pc = 0x3281F4u;
    {
        const bool branch_taken_0x3281f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3281F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281F4u;
        // 0x3281f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281f4) {
            ctx->pc = 0x329844u;
            goto label_329844;
        }
    }
    ctx->pc = 0x3281FCu;
label_3281fc:
    // 0x3281fc: 0xc0cdf2e  jal         func_337CB8
label_328200:
    if (ctx->pc == 0x328200u) {
        ctx->pc = 0x328200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281FCu;
        // 0x328200: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328204u;
        goto label_328204;
    }
    ctx->pc = 0x3281FCu;
    SET_GPR_U32(ctx, 31, 0x328204u);
    ctx->pc = 0x328200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3281FCu;
    // 0x328200: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3281FCu, 0x328204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328204u;
label_328204:
    // 0x328204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328208:
    // 0x328208: 0xc0cdec0  jal         func_337B00
label_32820c:
    if (ctx->pc == 0x32820Cu) {
        ctx->pc = 0x32820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328208u;
        // 0x32820c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328210u;
        goto label_328210;
    }
    ctx->pc = 0x328208u;
    SET_GPR_U32(ctx, 31, 0x328210u);
    ctx->pc = 0x32820Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328208u;
    // 0x32820c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328208u, 0x328210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328210u;
label_328210:
    // 0x328210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328214:
    // 0x328214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328218:
    // 0x328218: 0xc0cdc0e  jal         func_337038
label_32821c:
    if (ctx->pc == 0x32821Cu) {
        ctx->pc = 0x32821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328218u;
        // 0x32821c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328220u;
        goto label_328220;
    }
    ctx->pc = 0x328218u;
    SET_GPR_U32(ctx, 31, 0x328220u);
    ctx->pc = 0x32821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328218u;
    // 0x32821c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337038u, 0x328218u, 0x328220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328220u;
label_328220:
    // 0x328220: 0x10400648  beqz        $v0, . + 4 + (0x648 << 2)
label_328224:
    if (ctx->pc == 0x328224u) {
        ctx->pc = 0x328224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328220u;
        // 0x328224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328228u;
        goto label_328228;
    }
    ctx->pc = 0x328220u;
    {
        const bool branch_taken_0x328220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328220u;
        // 0x328224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328220) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328228u;
label_328228:
    // 0x328228: 0xc09af0c  jal         func_26BC30
label_32822c:
    if (ctx->pc == 0x32822Cu) {
        ctx->pc = 0x32822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328228u;
        // 0x32822c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328230u;
        goto label_328230;
    }
    ctx->pc = 0x328228u;
    SET_GPR_U32(ctx, 31, 0x328230u);
    ctx->pc = 0x32822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328228u;
    // 0x32822c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC30u, 0x328228u, 0x328230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328230u;
label_328230:
    // 0x328230: 0x10000645  b           . + 4 + (0x645 << 2)
label_328234:
    if (ctx->pc == 0x328234u) {
        ctx->pc = 0x328234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328230u;
        // 0x328234: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328238u;
        goto label_328238;
    }
    ctx->pc = 0x328230u;
    {
        const bool branch_taken_0x328230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328230u;
        // 0x328234: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328230) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328238u;
label_328238:
    // 0x328238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32823c:
    // 0x32823c: 0xc0cdec0  jal         func_337B00
label_328240:
    if (ctx->pc == 0x328240u) {
        ctx->pc = 0x328240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32823Cu;
        // 0x328240: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328244u;
        goto label_328244;
    }
    ctx->pc = 0x32823Cu;
    SET_GPR_U32(ctx, 31, 0x328244u);
    ctx->pc = 0x328240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32823Cu;
    // 0x328240: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32823Cu, 0x328244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328244u;
label_328244:
    // 0x328244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328248:
    // 0x328248: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32824c:
    // 0x32824c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32824cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328250:
    // 0x328250: 0xc0cdc22  jal         func_337088
label_328254:
    if (ctx->pc == 0x328254u) {
        ctx->pc = 0x328254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328250u;
        // 0x328254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328258u;
        goto label_328258;
    }
    ctx->pc = 0x328250u;
    SET_GPR_U32(ctx, 31, 0x328258u);
    ctx->pc = 0x328254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328250u;
    // 0x328254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337088u, 0x328250u, 0x328258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328258u;
label_328258:
    // 0x328258: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_32825c:
    if (ctx->pc == 0x32825Cu) {
        ctx->pc = 0x32825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328258u;
        // 0x32825c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328260u;
        goto label_328260;
    }
    ctx->pc = 0x328258u;
    {
        const bool branch_taken_0x328258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328258u;
        // 0x32825c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328258) {
            ctx->pc = 0x3282A8u;
            goto label_3282a8;
        }
    }
    ctx->pc = 0x328260u;
label_328260:
    // 0x328260: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x328260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_328264:
    // 0x328264: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x328264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_328268:
    // 0x328268: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x328268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_32826c:
    // 0x32826c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32826cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_328270:
    // 0x328270: 0xc44000f4  lwc1        $f0, 0xF4($v0)
    ctx->pc = 0x328270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_328274:
    // 0x328274: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x328274u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_328278:
    // 0x328278: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x328278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32827c:
    // 0x32827c: 0x0  nop
    ctx->pc = 0x32827cu;
    // NOP
label_328280:
    // 0x328280: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_328284:
    if (ctx->pc == 0x328284u) {
        ctx->pc = 0x328284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328280u;
        // 0x328284: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328288u;
        goto label_328288;
    }
    ctx->pc = 0x328280u;
    {
        const bool branch_taken_0x328280 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x328284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328280u;
        // 0x328284: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328280) {
            ctx->pc = 0x3282A0u;
            goto label_3282a0;
        }
    }
    ctx->pc = 0x328288u;
label_328288:
    // 0x328288: 0xc44000f8  lwc1        $f0, 0xF8($v0)
    ctx->pc = 0x328288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32828c:
    // 0x32828c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x32828cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_328290:
    // 0x328290: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x328290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_328294:
    // 0x328294: 0x0  nop
    ctx->pc = 0x328294u;
    // NOP
label_328298:
    // 0x328298: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_32829c:
    if (ctx->pc == 0x32829Cu) {
        ctx->pc = 0x32829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328298u;
        // 0x32829c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282A0u;
        goto label_3282a0;
    }
    ctx->pc = 0x328298u;
    {
        const bool branch_taken_0x328298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x328298) {
            ctx->pc = 0x32829Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328298u;
            // 0x32829c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3282A0u;
            goto label_3282a0;
        }
    }
    ctx->pc = 0x3282A0u;
label_3282a0:
    // 0x3282a0: 0x10000568  b           . + 4 + (0x568 << 2)
label_3282a4:
    if (ctx->pc == 0x3282A4u) {
        ctx->pc = 0x3282A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282A0u;
        // 0x3282a4: 0x38840  sll         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282A8u;
        goto label_3282a8;
    }
    ctx->pc = 0x3282A0u;
    {
        const bool branch_taken_0x3282a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3282A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282A0u;
        // 0x3282a4: 0x38840  sll         $s1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282a0) {
            ctx->pc = 0x329844u;
            goto label_329844;
        }
    }
    ctx->pc = 0x3282A8u;
label_3282a8:
    // 0x3282a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3282a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3282ac:
    // 0x3282ac: 0xc0cdc38  jal         func_3370E0
label_3282b0:
    if (ctx->pc == 0x3282B0u) {
        ctx->pc = 0x3282B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282ACu;
        // 0x3282b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282B4u;
        goto label_3282b4;
    }
    ctx->pc = 0x3282ACu;
    SET_GPR_U32(ctx, 31, 0x3282B4u);
    ctx->pc = 0x3282B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282ACu;
    // 0x3282b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3370E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3370E0u, 0x3282ACu, 0x3282B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282B4u;
label_3282b4:
    // 0x3282b4: 0x54400563  bnel        $v0, $zero, . + 4 + (0x563 << 2)
label_3282b8:
    if (ctx->pc == 0x3282B8u) {
        ctx->pc = 0x3282B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282B4u;
        // 0x3282b8: 0x8e110254  lw          $s1, 0x254($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282BCu;
        goto label_3282bc;
    }
    ctx->pc = 0x3282B4u;
    {
        const bool branch_taken_0x3282b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3282b4) {
            ctx->pc = 0x3282B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3282B4u;
            // 0x3282b8: 0x8e110254  lw          $s1, 0x254($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329844u;
            goto label_329844;
        }
    }
    ctx->pc = 0x3282BCu;
label_3282bc:
    // 0x3282bc: 0x10000621  b           . + 4 + (0x621 << 2)
label_3282c0:
    if (ctx->pc == 0x3282C0u) {
        ctx->pc = 0x3282C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282BCu;
        // 0x3282c0: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282C4u;
        goto label_3282c4;
    }
    ctx->pc = 0x3282BCu;
    {
        const bool branch_taken_0x3282bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3282C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282BCu;
        // 0x3282c0: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3282bc) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3282C4u;
label_3282c4:
    // 0x3282c4: 0xc0cdf2e  jal         func_337CB8
label_3282c8:
    if (ctx->pc == 0x3282C8u) {
        ctx->pc = 0x3282C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282C4u;
        // 0x3282c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282CCu;
        goto label_3282cc;
    }
    ctx->pc = 0x3282C4u;
    SET_GPR_U32(ctx, 31, 0x3282CCu);
    ctx->pc = 0x3282C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282C4u;
    // 0x3282c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3282C4u, 0x3282CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282CCu;
label_3282cc:
    // 0x3282cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3282ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3282d0:
    // 0x3282d0: 0xc0cdec0  jal         func_337B00
label_3282d4:
    if (ctx->pc == 0x3282D4u) {
        ctx->pc = 0x3282D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282D0u;
        // 0x3282d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282D8u;
        goto label_3282d8;
    }
    ctx->pc = 0x3282D0u;
    SET_GPR_U32(ctx, 31, 0x3282D8u);
    ctx->pc = 0x3282D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282D0u;
    // 0x3282d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3282D0u, 0x3282D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282D8u;
label_3282d8:
    // 0x3282d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3282d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3282dc:
    // 0x3282dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3282dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3282e0:
    // 0x3282e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3282e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3282e4:
    // 0x3282e4: 0xc0cdc22  jal         func_337088
label_3282e8:
    if (ctx->pc == 0x3282E8u) {
        ctx->pc = 0x3282E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282E4u;
        // 0x3282e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282ECu;
        goto label_3282ec;
    }
    ctx->pc = 0x3282E4u;
    SET_GPR_U32(ctx, 31, 0x3282ECu);
    ctx->pc = 0x3282E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282E4u;
    // 0x3282e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337088u, 0x3282E4u, 0x3282ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282ECu;
label_3282ec:
    // 0x3282ec: 0x54400616  bnel        $v0, $zero, . + 4 + (0x616 << 2)
label_3282f0:
    if (ctx->pc == 0x3282F0u) {
        ctx->pc = 0x3282F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282ECu;
        // 0x3282f0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3282F4u;
        goto label_3282f4;
    }
    ctx->pc = 0x3282ECu;
    {
        const bool branch_taken_0x3282ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3282ec) {
            ctx->pc = 0x3282F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3282ECu;
            // 0x3282f0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3282F4u;
label_3282f4:
    // 0x3282f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3282f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3282f8:
    // 0x3282f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3282f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3282fc:
    // 0x3282fc: 0xc0cdc38  jal         func_3370E0
label_328300:
    if (ctx->pc == 0x328300u) {
        ctx->pc = 0x328300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3282FCu;
        // 0x328300: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328304u;
        goto label_328304;
    }
    ctx->pc = 0x3282FCu;
    SET_GPR_U32(ctx, 31, 0x328304u);
    ctx->pc = 0x328300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3282FCu;
    // 0x328300: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3370E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3370E0u, 0x3282FCu, 0x328304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328304u;
label_328304:
    // 0x328304: 0x1040060f  beqz        $v0, . + 4 + (0x60F << 2)
label_328308:
    if (ctx->pc == 0x328308u) {
        ctx->pc = 0x328308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328304u;
        // 0x328308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32830Cu;
        goto label_32830c;
    }
    ctx->pc = 0x328304u;
    {
        const bool branch_taken_0x328304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328304u;
        // 0x328308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328304) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x32830Cu;
label_32830c:
    // 0x32830c: 0xc09ac9c  jal         func_26B270
label_328310:
    if (ctx->pc == 0x328310u) {
        ctx->pc = 0x328310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32830Cu;
        // 0x328310: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328314u;
        goto label_328314;
    }
    ctx->pc = 0x32830Cu;
    SET_GPR_U32(ctx, 31, 0x328314u);
    ctx->pc = 0x328310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32830Cu;
    // 0x328310: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B270u, 0x32830Cu, 0x328314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328314u;
label_328314:
    // 0x328314: 0x1000060c  b           . + 4 + (0x60C << 2)
label_328318:
    if (ctx->pc == 0x328318u) {
        ctx->pc = 0x328318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328314u;
        // 0x328318: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32831Cu;
        goto label_32831c;
    }
    ctx->pc = 0x328314u;
    {
        const bool branch_taken_0x328314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328314u;
        // 0x328318: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328314) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x32831Cu;
label_32831c:
    // 0x32831c: 0xc0cdec0  jal         func_337B00
label_328320:
    if (ctx->pc == 0x328320u) {
        ctx->pc = 0x328320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32831Cu;
        // 0x328320: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328324u;
        goto label_328324;
    }
    ctx->pc = 0x32831Cu;
    SET_GPR_U32(ctx, 31, 0x328324u);
    ctx->pc = 0x328320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32831Cu;
    // 0x328320: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32831Cu, 0x328324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328324u;
label_328324:
    // 0x328324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328328:
    // 0x328328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32832c:
    // 0x32832c: 0xc0cdbde  jal         func_336F78
label_328330:
    if (ctx->pc == 0x328330u) {
        ctx->pc = 0x328330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32832Cu;
        // 0x328330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328334u;
        goto label_328334;
    }
    ctx->pc = 0x32832Cu;
    SET_GPR_U32(ctx, 31, 0x328334u);
    ctx->pc = 0x328330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32832Cu;
    // 0x328330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x32832Cu, 0x328334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328334u;
label_328334:
    // 0x328334: 0x10400603  beqz        $v0, . + 4 + (0x603 << 2)
label_328338:
    if (ctx->pc == 0x328338u) {
        ctx->pc = 0x328338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328334u;
        // 0x328338: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32833Cu;
        goto label_32833c;
    }
    ctx->pc = 0x328334u;
    {
        const bool branch_taken_0x328334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328334u;
        // 0x328338: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328334) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x32833Cu;
label_32833c:
    // 0x32833c: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x32833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_328340:
    // 0x328340: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x328340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_328344:
    // 0x328344: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x328344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_328348:
    // 0x328348: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_32834c:
    if (ctx->pc == 0x32834Cu) {
        ctx->pc = 0x32834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328348u;
        // 0x32834c: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x328350u;
        goto label_328350;
    }
    ctx->pc = 0x328348u;
    {
        const bool branch_taken_0x328348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328348u;
        // 0x32834c: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328348) {
            ctx->pc = 0x328360u;
            goto label_328360;
        }
    }
    ctx->pc = 0x328350u;
label_328350:
    // 0x328350: 0xc099894  jal         func_266250
label_328354:
    if (ctx->pc == 0x328354u) {
        ctx->pc = 0x328354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328350u;
        // 0x328354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328358u;
        goto label_328358;
    }
    ctx->pc = 0x328350u;
    SET_GPR_U32(ctx, 31, 0x328358u);
    ctx->pc = 0x328354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328350u;
    // 0x328354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266250u, 0x328350u, 0x328358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328358u;
label_328358:
    // 0x328358: 0x100005fb  b           . + 4 + (0x5FB << 2)
label_32835c:
    if (ctx->pc == 0x32835Cu) {
        ctx->pc = 0x32835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328358u;
        // 0x32835c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328360u;
        goto label_328360;
    }
    ctx->pc = 0x328358u;
    {
        const bool branch_taken_0x328358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328358u;
        // 0x32835c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328358) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328360u;
label_328360:
    // 0x328360: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x328360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_328364:
    // 0x328364: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_328368:
    if (ctx->pc == 0x328368u) {
        ctx->pc = 0x328368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328364u;
        // 0x328368: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32836Cu;
        goto label_32836c;
    }
    ctx->pc = 0x328364u;
    {
        const bool branch_taken_0x328364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328364) {
            ctx->pc = 0x328368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328364u;
            // 0x328368: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328380u;
            goto label_328380;
        }
    }
    ctx->pc = 0x32836Cu;
label_32836c:
    // 0x32836c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32836cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328370:
    // 0x328370: 0xc0cdfdc  jal         func_337F70
label_328374:
    if (ctx->pc == 0x328374u) {
        ctx->pc = 0x328374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328370u;
        // 0x328374: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328378u;
        goto label_328378;
    }
    ctx->pc = 0x328370u;
    SET_GPR_U32(ctx, 31, 0x328378u);
    ctx->pc = 0x328374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328370u;
    // 0x328374: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x328370u, 0x328378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328378u;
label_328378:
    // 0x328378: 0x100005f3  b           . + 4 + (0x5F3 << 2)
label_32837c:
    if (ctx->pc == 0x32837Cu) {
        ctx->pc = 0x32837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328378u;
        // 0x32837c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328380u;
        goto label_328380;
    }
    ctx->pc = 0x328378u;
    {
        const bool branch_taken_0x328378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328378u;
        // 0x32837c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328378) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328380u;
label_328380:
    // 0x328380: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x328380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_328384:
    // 0x328384: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x328384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_328388:
    // 0x328388: 0x106005ee  beqz        $v1, . + 4 + (0x5EE << 2)
label_32838c:
    if (ctx->pc == 0x32838Cu) {
        ctx->pc = 0x32838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328388u;
        // 0x32838c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328390u;
        goto label_328390;
    }
    ctx->pc = 0x328388u;
    {
        const bool branch_taken_0x328388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328388u;
        // 0x32838c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328388) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328390u;
label_328390:
    // 0x328390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_328394:
    // 0x328394: 0x100005eb  b           . + 4 + (0x5EB << 2)
label_328398:
    if (ctx->pc == 0x328398u) {
        ctx->pc = 0x328398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328394u;
        // 0x328398: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32839Cu;
        goto label_32839c;
    }
    ctx->pc = 0x328394u;
    {
        const bool branch_taken_0x328394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328394u;
        // 0x328398: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328394) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x32839Cu;
label_32839c:
    // 0x32839c: 0xc0cdec0  jal         func_337B00
label_3283a0:
    if (ctx->pc == 0x3283A0u) {
        ctx->pc = 0x3283A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32839Cu;
        // 0x3283a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3283A4u;
        goto label_3283a4;
    }
    ctx->pc = 0x32839Cu;
    SET_GPR_U32(ctx, 31, 0x3283A4u);
    ctx->pc = 0x3283A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32839Cu;
    // 0x3283a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32839Cu, 0x3283A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283A4u;
label_3283a4:
    // 0x3283a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3283a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3283a8:
    // 0x3283a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3283a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3283ac:
    // 0x3283ac: 0xc0cdbde  jal         func_336F78
label_3283b0:
    if (ctx->pc == 0x3283B0u) {
        ctx->pc = 0x3283B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283ACu;
        // 0x3283b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3283B4u;
        goto label_3283b4;
    }
    ctx->pc = 0x3283ACu;
    SET_GPR_U32(ctx, 31, 0x3283B4u);
    ctx->pc = 0x3283B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3283ACu;
    // 0x3283b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x3283ACu, 0x3283B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283B4u;
label_3283b4:
    // 0x3283b4: 0x104005e3  beqz        $v0, . + 4 + (0x5E3 << 2)
label_3283b8:
    if (ctx->pc == 0x3283B8u) {
        ctx->pc = 0x3283B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283B4u;
        // 0x3283b8: 0x3c030006  lui         $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3283BCu;
        goto label_3283bc;
    }
    ctx->pc = 0x3283B4u;
    {
        const bool branch_taken_0x3283b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3283B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283B4u;
        // 0x3283b8: 0x3c030006  lui         $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3283b4) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3283BCu;
label_3283bc:
    // 0x3283bc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x3283bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_3283c0:
    // 0x3283c0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3283c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3283c4:
    // 0x3283c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3283c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3283c8:
    // 0x3283c8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_3283cc:
    if (ctx->pc == 0x3283CCu) {
        ctx->pc = 0x3283CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283C8u;
        // 0x3283cc: 0x8e11010c  lw          $s1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3283D0u;
        goto label_3283d0;
    }
    ctx->pc = 0x3283C8u;
    {
        const bool branch_taken_0x3283c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3283c8) {
            ctx->pc = 0x3283CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3283C8u;
            // 0x3283cc: 0x8e11010c  lw          $s1, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3283E0u;
            goto label_3283e0;
        }
    }
    ctx->pc = 0x3283D0u;
label_3283d0:
    // 0x3283d0: 0xc0998a4  jal         func_266290
label_3283d4:
    if (ctx->pc == 0x3283D4u) {
        ctx->pc = 0x3283D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283D0u;
        // 0x3283d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3283D8u;
        goto label_3283d8;
    }
    ctx->pc = 0x3283D0u;
    SET_GPR_U32(ctx, 31, 0x3283D8u);
    ctx->pc = 0x3283D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3283D0u;
    // 0x3283d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266290u, 0x3283D0u, 0x3283D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283D8u;
label_3283d8:
    // 0x3283d8: 0x100005db  b           . + 4 + (0x5DB << 2)
label_3283dc:
    if (ctx->pc == 0x3283DCu) {
        ctx->pc = 0x3283DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283D8u;
        // 0x3283dc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3283E0u;
        goto label_3283e0;
    }
    ctx->pc = 0x3283D8u;
    {
        const bool branch_taken_0x3283d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3283DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283D8u;
        // 0x3283dc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3283d8) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3283E0u;
label_3283e0:
    // 0x3283e0: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
label_3283e4:
    if (ctx->pc == 0x3283E4u) {
        ctx->pc = 0x3283E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283E0u;
        // 0x3283e4: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3283E8u;
        goto label_3283e8;
    }
    ctx->pc = 0x3283E0u;
    {
        const bool branch_taken_0x3283e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3283e0) {
            ctx->pc = 0x3283E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3283E0u;
            // 0x3283e4: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3283FCu;
            goto label_3283fc;
        }
    }
    ctx->pc = 0x3283E8u;
label_3283e8:
    // 0x3283e8: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x3283e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_3283ec:
    // 0x3283ec: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3283ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3283f0:
    // 0x3283f0: 0x40f809  jalr        $v0
label_3283f4:
    if (ctx->pc == 0x3283F4u) {
        ctx->pc = 0x3283F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283F0u;
        // 0x3283f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3283F8u;
        goto label_3283f8;
    }
    ctx->pc = 0x3283F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3283F8u);
        ctx->pc = 0x3283F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3283F0u;
        // 0x3283f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3283F0u, 0x3283F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3283F8u;
label_3283f8:
    // 0x3283f8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x3283f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_3283fc:
    // 0x3283fc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x3283fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_328400:
    // 0x328400: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x328400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_328404:
    // 0x328404: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x328404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_328408:
    // 0x328408: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_32840c:
    if (ctx->pc == 0x32840Cu) {
        ctx->pc = 0x32840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328408u;
        // 0x32840c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328410u;
        goto label_328410;
    }
    ctx->pc = 0x328408u;
    {
        const bool branch_taken_0x328408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328408u;
        // 0x32840c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328408) {
            ctx->pc = 0x328414u;
            goto label_328414;
        }
    }
    ctx->pc = 0x328410u;
label_328410:
    // 0x328410: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x328410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_328414:
    // 0x328414: 0x122005cb  beqz        $s1, . + 4 + (0x5CB << 2)
label_328418:
    if (ctx->pc == 0x328418u) {
        ctx->pc = 0x328418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328414u;
        // 0x328418: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32841Cu;
        goto label_32841c;
    }
    ctx->pc = 0x328414u;
    {
        const bool branch_taken_0x328414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x328418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328414u;
        // 0x328418: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328414) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x32841Cu;
label_32841c:
    // 0x32841c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x32841cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_328420:
    // 0x328420: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x328420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_328424:
    // 0x328424: 0x546405c8  bnel        $v1, $a0, . + 4 + (0x5C8 << 2)
label_328428:
    if (ctx->pc == 0x328428u) {
        ctx->pc = 0x328428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328424u;
        // 0x328428: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32842Cu;
        goto label_32842c;
    }
    ctx->pc = 0x328424u;
    {
        const bool branch_taken_0x328424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x328424) {
            ctx->pc = 0x328428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328424u;
            // 0x328428: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x32842Cu;
label_32842c:
    // 0x32842c: 0x100004f8  b           . + 4 + (0x4F8 << 2)
label_328430:
    if (ctx->pc == 0x328430u) {
        ctx->pc = 0x328434u;
        goto label_328434;
    }
    ctx->pc = 0x32842Cu;
    {
        const bool branch_taken_0x32842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32842c) {
            ctx->pc = 0x329810u;
            goto label_329810;
        }
    }
    ctx->pc = 0x328434u;
label_328434:
    // 0x328434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328438:
    // 0x328438: 0xc0cdec0  jal         func_337B00
label_32843c:
    if (ctx->pc == 0x32843Cu) {
        ctx->pc = 0x32843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328438u;
        // 0x32843c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328440u;
        goto label_328440;
    }
    ctx->pc = 0x328438u;
    SET_GPR_U32(ctx, 31, 0x328440u);
    ctx->pc = 0x32843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328438u;
    // 0x32843c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328438u, 0x328440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328440u;
label_328440:
    // 0x328440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328444:
    // 0x328444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328448:
    // 0x328448: 0xc0cdbde  jal         func_336F78
label_32844c:
    if (ctx->pc == 0x32844Cu) {
        ctx->pc = 0x32844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328448u;
        // 0x32844c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328450u;
        goto label_328450;
    }
    ctx->pc = 0x328448u;
    SET_GPR_U32(ctx, 31, 0x328450u);
    ctx->pc = 0x32844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328448u;
    // 0x32844c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x328448u, 0x328450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328450u;
label_328450:
    // 0x328450: 0x504005bc  beql        $v0, $zero, . + 4 + (0x5BC << 2)
label_328454:
    if (ctx->pc == 0x328454u) {
        ctx->pc = 0x328454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328450u;
        // 0x328454: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328458u;
        goto label_328458;
    }
    ctx->pc = 0x328450u;
    {
        const bool branch_taken_0x328450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328450) {
            ctx->pc = 0x328454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328450u;
            // 0x328454: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328458u;
label_328458:
    // 0x328458: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x328458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_32845c:
    // 0x32845c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x32845cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_328460:
    // 0x328460: 0x100004f8  b           . + 4 + (0x4F8 << 2)
label_328464:
    if (ctx->pc == 0x328464u) {
        ctx->pc = 0x328464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328460u;
        // 0x328464: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x328468u;
        goto label_328468;
    }
    ctx->pc = 0x328460u;
    {
        const bool branch_taken_0x328460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328460u;
        // 0x328464: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328460) {
            ctx->pc = 0x329844u;
            goto label_329844;
        }
    }
    ctx->pc = 0x328468u;
label_328468:
    // 0x328468: 0xc0cdf2e  jal         func_337CB8
label_32846c:
    if (ctx->pc == 0x32846Cu) {
        ctx->pc = 0x32846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328468u;
        // 0x32846c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328470u;
        goto label_328470;
    }
    ctx->pc = 0x328468u;
    SET_GPR_U32(ctx, 31, 0x328470u);
    ctx->pc = 0x32846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328468u;
    // 0x32846c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328468u, 0x328470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328470u;
label_328470:
    // 0x328470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328474:
    // 0x328474: 0xc0cdec0  jal         func_337B00
label_328478:
    if (ctx->pc == 0x328478u) {
        ctx->pc = 0x328478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328474u;
        // 0x328478: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32847Cu;
        goto label_32847c;
    }
    ctx->pc = 0x328474u;
    SET_GPR_U32(ctx, 31, 0x32847Cu);
    ctx->pc = 0x328478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328474u;
    // 0x328478: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328474u, 0x32847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32847Cu;
label_32847c:
    // 0x32847c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32847cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328480:
    // 0x328480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328484:
    // 0x328484: 0xc0cdc50  jal         func_337140
label_328488:
    if (ctx->pc == 0x328488u) {
        ctx->pc = 0x328488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328484u;
        // 0x328488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32848Cu;
        goto label_32848c;
    }
    ctx->pc = 0x328484u;
    SET_GPR_U32(ctx, 31, 0x32848Cu);
    ctx->pc = 0x328488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328484u;
    // 0x328488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337140u, 0x328484u, 0x32848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32848Cu;
label_32848c:
    // 0x32848c: 0x104005ad  beqz        $v0, . + 4 + (0x5AD << 2)
label_328490:
    if (ctx->pc == 0x328490u) {
        ctx->pc = 0x328490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32848Cu;
        // 0x328490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328494u;
        goto label_328494;
    }
    ctx->pc = 0x32848Cu;
    {
        const bool branch_taken_0x32848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32848Cu;
        // 0x328490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32848c) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328494u;
label_328494:
    // 0x328494: 0xc09afb0  jal         func_26BEC0
label_328498:
    if (ctx->pc == 0x328498u) {
        ctx->pc = 0x328498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328494u;
        // 0x328498: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32849Cu;
        goto label_32849c;
    }
    ctx->pc = 0x328494u;
    SET_GPR_U32(ctx, 31, 0x32849Cu);
    ctx->pc = 0x328498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328494u;
    // 0x328498: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEC0u, 0x328494u, 0x32849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32849Cu;
label_32849c:
    // 0x32849c: 0x100005aa  b           . + 4 + (0x5AA << 2)
label_3284a0:
    if (ctx->pc == 0x3284A0u) {
        ctx->pc = 0x3284A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32849Cu;
        // 0x3284a0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3284A4u;
        goto label_3284a4;
    }
    ctx->pc = 0x32849Cu;
    {
        const bool branch_taken_0x32849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3284A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32849Cu;
        // 0x3284a0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32849c) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3284A4u;
label_3284a4:
    // 0x3284a4: 0xc0cdf2e  jal         func_337CB8
label_3284a8:
    if (ctx->pc == 0x3284A8u) {
        ctx->pc = 0x3284A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284A4u;
        // 0x3284a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3284ACu;
        goto label_3284ac;
    }
    ctx->pc = 0x3284A4u;
    SET_GPR_U32(ctx, 31, 0x3284ACu);
    ctx->pc = 0x3284A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284A4u;
    // 0x3284a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3284A4u, 0x3284ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284ACu;
label_3284ac:
    // 0x3284ac: 0xc0cdf52  jal         func_337D48
label_3284b0:
    if (ctx->pc == 0x3284B0u) {
        ctx->pc = 0x3284B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284ACu;
        // 0x3284b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3284B4u;
        goto label_3284b4;
    }
    ctx->pc = 0x3284ACu;
    SET_GPR_U32(ctx, 31, 0x3284B4u);
    ctx->pc = 0x3284B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284ACu;
    // 0x3284b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x3284ACu, 0x3284B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284B4u;
label_3284b4:
    // 0x3284b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3284b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3284b8:
    // 0x3284b8: 0xc0cdf40  jal         func_337D00
label_3284bc:
    if (ctx->pc == 0x3284BCu) {
        ctx->pc = 0x3284BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284B8u;
        // 0x3284bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3284C0u;
        goto label_3284c0;
    }
    ctx->pc = 0x3284B8u;
    SET_GPR_U32(ctx, 31, 0x3284C0u);
    ctx->pc = 0x3284BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284B8u;
    // 0x3284bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x3284B8u, 0x3284C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284C0u;
label_3284c0:
    // 0x3284c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3284c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3284c4:
    // 0x3284c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3284c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3284c8:
    // 0x3284c8: 0xc0cdee8  jal         func_337BA0
label_3284cc:
    if (ctx->pc == 0x3284CCu) {
        ctx->pc = 0x3284CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284C8u;
        // 0x3284cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3284D0u;
        goto label_3284d0;
    }
    ctx->pc = 0x3284C8u;
    SET_GPR_U32(ctx, 31, 0x3284D0u);
    ctx->pc = 0x3284CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284C8u;
    // 0x3284cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x3284C8u, 0x3284D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284D0u;
label_3284d0:
    // 0x3284d0: 0xc085d4e  jal         func_217538
label_3284d4:
    if (ctx->pc == 0x3284D4u) {
        ctx->pc = 0x3284D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284D0u;
        // 0x3284d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3284D8u;
        goto label_3284d8;
    }
    ctx->pc = 0x3284D0u;
    SET_GPR_U32(ctx, 31, 0x3284D8u);
    ctx->pc = 0x3284D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284D0u;
    // 0x3284d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x3284D0u, 0x3284D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284D8u;
label_3284d8:
    // 0x3284d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3284d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3284dc:
    // 0x3284dc: 0x56000599  bnel        $s0, $zero, . + 4 + (0x599 << 2)
label_3284e0:
    if (ctx->pc == 0x3284E0u) {
        ctx->pc = 0x3284E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284DCu;
        // 0x3284e0: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3284E4u;
        goto label_3284e4;
    }
    ctx->pc = 0x3284DCu;
    {
        const bool branch_taken_0x3284dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3284dc) {
            ctx->pc = 0x3284E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3284DCu;
            // 0x3284e0: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3284E4u;
label_3284e4:
    // 0x3284e4: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x3284e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_3284e8:
    // 0x3284e8: 0xc085d2a  jal         func_2174A8
label_3284ec:
    if (ctx->pc == 0x3284ECu) {
        ctx->pc = 0x3284ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284E8u;
        // 0x3284ec: 0x24844878  addiu       $a0, $a0, 0x4878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3284F0u;
        goto label_3284f0;
    }
    ctx->pc = 0x3284E8u;
    SET_GPR_U32(ctx, 31, 0x3284F0u);
    ctx->pc = 0x3284ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284E8u;
    // 0x3284ec: 0x24844878  addiu       $a0, $a0, 0x4878 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x3284E8u, 0x3284F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284F0u;
label_3284f0:
    // 0x3284f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3284f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3284f4:
    // 0x3284f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3284f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3284f8:
    // 0x3284f8: 0xc0cdbd2  jal         func_336F48
label_3284fc:
    if (ctx->pc == 0x3284FCu) {
        ctx->pc = 0x3284FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284F8u;
        // 0x3284fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328500u;
        goto label_328500;
    }
    ctx->pc = 0x3284F8u;
    SET_GPR_U32(ctx, 31, 0x328500u);
    ctx->pc = 0x3284FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284F8u;
    // 0x3284fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F48u, 0x3284F8u, 0x328500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328500u;
label_328500:
    // 0x328500: 0x50400424  beql        $v0, $zero, . + 4 + (0x424 << 2)
label_328504:
    if (ctx->pc == 0x328504u) {
        ctx->pc = 0x328504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328500u;
        // 0x328504: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328508u;
        goto label_328508;
    }
    ctx->pc = 0x328500u;
    {
        const bool branch_taken_0x328500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328500) {
            ctx->pc = 0x328504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328500u;
            // 0x328504: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329594u;
            goto label_329594;
        }
    }
    ctx->pc = 0x328508u;
label_328508:
    // 0x328508: 0xc083072  jal         func_20C1C8
label_32850c:
    if (ctx->pc == 0x32850Cu) {
        ctx->pc = 0x32850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328508u;
        // 0x32850c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328510u;
        goto label_328510;
    }
    ctx->pc = 0x328508u;
    SET_GPR_U32(ctx, 31, 0x328510u);
    ctx->pc = 0x32850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328508u;
    // 0x32850c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x328508u, 0x328510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328510u;
label_328510:
    // 0x328510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328514:
    // 0x328514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328518:
    // 0x328518: 0xc0cdbde  jal         func_336F78
label_32851c:
    if (ctx->pc == 0x32851Cu) {
        ctx->pc = 0x32851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328518u;
        // 0x32851c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328520u;
        goto label_328520;
    }
    ctx->pc = 0x328518u;
    SET_GPR_U32(ctx, 31, 0x328520u);
    ctx->pc = 0x32851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328518u;
    // 0x32851c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x328518u, 0x328520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328520u;
label_328520:
    // 0x328520: 0x1040041b  beqz        $v0, . + 4 + (0x41B << 2)
label_328524:
    if (ctx->pc == 0x328524u) {
        ctx->pc = 0x328524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328520u;
        // 0x328524: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x328528u;
        goto label_328528;
    }
    ctx->pc = 0x328520u;
    {
        const bool branch_taken_0x328520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328520u;
        // 0x328524: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x328520) {
            ctx->pc = 0x329590u;
            goto label_329590;
        }
    }
    ctx->pc = 0x328528u;
label_328528:
    // 0x328528: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x328528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32852c:
    // 0x32852c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x32852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_328530:
    // 0x328530: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x328530u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_328534:
    // 0x328534: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x328534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_328538:
    // 0x328538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32853c:
    // 0x32853c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x32853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_328540:
    // 0x328540: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x328540u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_328544:
    // 0x328544: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x328544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_328548:
    // 0x328548: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x328548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_32854c:
    // 0x32854c: 0xc09b082  jal         func_26C208
label_328550:
    if (ctx->pc == 0x328550u) {
        ctx->pc = 0x328550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32854Cu;
        // 0x328550: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x328554u;
        goto label_328554;
    }
    ctx->pc = 0x32854Cu;
    SET_GPR_U32(ctx, 31, 0x328554u);
    ctx->pc = 0x328550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32854Cu;
    // 0x328550: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C208u, 0x32854Cu, 0x328554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328554u;
label_328554:
    // 0x328554: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x328554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_328558:
    // 0x328558: 0xc083942  jal         func_20E508
label_32855c:
    if (ctx->pc == 0x32855Cu) {
        ctx->pc = 0x32855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328558u;
        // 0x32855c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328560u;
        goto label_328560;
    }
    ctx->pc = 0x328558u;
    SET_GPR_U32(ctx, 31, 0x328560u);
    ctx->pc = 0x32855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328558u;
    // 0x32855c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x328558u, 0x328560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328560u;
label_328560:
    // 0x328560: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x328560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_328564:
    // 0x328564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328568:
    // 0x328568: 0x10000406  b           . + 4 + (0x406 << 2)
label_32856c:
    if (ctx->pc == 0x32856Cu) {
        ctx->pc = 0x32856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328568u;
        // 0x32856c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328570u;
        goto label_328570;
    }
    ctx->pc = 0x328568u;
    {
        const bool branch_taken_0x328568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328568u;
        // 0x32856c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328568) {
            ctx->pc = 0x329584u;
            goto label_329584;
        }
    }
    ctx->pc = 0x328570u;
label_328570:
    // 0x328570: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x328570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_328574:
    // 0x328574: 0xc0cdec0  jal         func_337B00
label_328578:
    if (ctx->pc == 0x328578u) {
        ctx->pc = 0x328578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328574u;
        // 0x328578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32857Cu;
        goto label_32857c;
    }
    ctx->pc = 0x328574u;
    SET_GPR_U32(ctx, 31, 0x32857Cu);
    ctx->pc = 0x328578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328574u;
    // 0x328578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328574u, 0x32857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32857Cu;
label_32857c:
    // 0x32857c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32857cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328580:
    // 0x328580: 0xc0cdec0  jal         func_337B00
label_328584:
    if (ctx->pc == 0x328584u) {
        ctx->pc = 0x328584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328580u;
        // 0x328584: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328588u;
        goto label_328588;
    }
    ctx->pc = 0x328580u;
    SET_GPR_U32(ctx, 31, 0x328588u);
    ctx->pc = 0x328584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328580u;
    // 0x328584: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328580u, 0x328588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328588u;
label_328588:
    // 0x328588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32858c:
    // 0x32858c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32858cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328590:
    // 0x328590: 0xc0cdc50  jal         func_337140
label_328594:
    if (ctx->pc == 0x328594u) {
        ctx->pc = 0x328594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328590u;
        // 0x328594: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328598u;
        goto label_328598;
    }
    ctx->pc = 0x328590u;
    SET_GPR_U32(ctx, 31, 0x328598u);
    ctx->pc = 0x328594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328590u;
    // 0x328594: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337140u, 0x328590u, 0x328598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328598u;
label_328598:
    // 0x328598: 0x1040056a  beqz        $v0, . + 4 + (0x56A << 2)
label_32859c:
    if (ctx->pc == 0x32859Cu) {
        ctx->pc = 0x32859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328598u;
        // 0x32859c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285A0u;
        goto label_3285a0;
    }
    ctx->pc = 0x328598u;
    {
        const bool branch_taken_0x328598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328598u;
        // 0x32859c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328598) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3285A0u;
label_3285a0:
    // 0x3285a0: 0xc09b80a  jal         func_26E028
label_3285a4:
    if (ctx->pc == 0x3285A4u) {
        ctx->pc = 0x3285A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285A0u;
        // 0x3285a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285A8u;
        goto label_3285a8;
    }
    ctx->pc = 0x3285A0u;
    SET_GPR_U32(ctx, 31, 0x3285A8u);
    ctx->pc = 0x3285A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285A0u;
    // 0x3285a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E028u, 0x3285A0u, 0x3285A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3285A8u;
label_3285a8:
    // 0x3285a8: 0x10000566  b           . + 4 + (0x566 << 2)
label_3285ac:
    if (ctx->pc == 0x3285ACu) {
        ctx->pc = 0x3285ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285A8u;
        // 0x3285ac: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285B0u;
        goto label_3285b0;
    }
    ctx->pc = 0x3285A8u;
    {
        const bool branch_taken_0x3285a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3285ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285A8u;
        // 0x3285ac: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3285a8) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3285B0u;
label_3285b0:
    // 0x3285b0: 0xc0cdec0  jal         func_337B00
label_3285b4:
    if (ctx->pc == 0x3285B4u) {
        ctx->pc = 0x3285B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285B0u;
        // 0x3285b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285B8u;
        goto label_3285b8;
    }
    ctx->pc = 0x3285B0u;
    SET_GPR_U32(ctx, 31, 0x3285B8u);
    ctx->pc = 0x3285B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285B0u;
    // 0x3285b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3285B0u, 0x3285B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3285B8u;
label_3285b8:
    // 0x3285b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3285b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3285bc:
    // 0x3285bc: 0xc0cdec0  jal         func_337B00
label_3285c0:
    if (ctx->pc == 0x3285C0u) {
        ctx->pc = 0x3285C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285BCu;
        // 0x3285c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285C4u;
        goto label_3285c4;
    }
    ctx->pc = 0x3285BCu;
    SET_GPR_U32(ctx, 31, 0x3285C4u);
    ctx->pc = 0x3285C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285BCu;
    // 0x3285c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3285BCu, 0x3285C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3285C4u;
label_3285c4:
    // 0x3285c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3285c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3285c8:
    // 0x3285c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3285c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3285cc:
    // 0x3285cc: 0xc0cdc50  jal         func_337140
label_3285d0:
    if (ctx->pc == 0x3285D0u) {
        ctx->pc = 0x3285D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285CCu;
        // 0x3285d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285D4u;
        goto label_3285d4;
    }
    ctx->pc = 0x3285CCu;
    SET_GPR_U32(ctx, 31, 0x3285D4u);
    ctx->pc = 0x3285D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285CCu;
    // 0x3285d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337140u, 0x3285CCu, 0x3285D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3285D4u;
label_3285d4:
    // 0x3285d4: 0x1040055b  beqz        $v0, . + 4 + (0x55B << 2)
label_3285d8:
    if (ctx->pc == 0x3285D8u) {
        ctx->pc = 0x3285D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285D4u;
        // 0x3285d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285DCu;
        goto label_3285dc;
    }
    ctx->pc = 0x3285D4u;
    {
        const bool branch_taken_0x3285d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3285D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285D4u;
        // 0x3285d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3285d4) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3285DCu;
label_3285dc:
    // 0x3285dc: 0xc09b820  jal         func_26E080
label_3285e0:
    if (ctx->pc == 0x3285E0u) {
        ctx->pc = 0x3285E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285DCu;
        // 0x3285e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285E4u;
        goto label_3285e4;
    }
    ctx->pc = 0x3285DCu;
    SET_GPR_U32(ctx, 31, 0x3285E4u);
    ctx->pc = 0x3285E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285DCu;
    // 0x3285e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E080u, 0x3285DCu, 0x3285E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3285E4u;
label_3285e4:
    // 0x3285e4: 0x1440feac  bnez        $v0, . + 4 + (-0x154 << 2)
label_3285e8:
    if (ctx->pc == 0x3285E8u) {
        ctx->pc = 0x3285E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285E4u;
        // 0x3285e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285ECu;
        goto label_3285ec;
    }
    ctx->pc = 0x3285E4u;
    {
        const bool branch_taken_0x3285e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3285E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285E4u;
        // 0x3285e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3285e4) {
            ctx->pc = 0x328098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328098;
        }
    }
    ctx->pc = 0x3285ECu;
label_3285ec:
    // 0x3285ec: 0x10000555  b           . + 4 + (0x555 << 2)
label_3285f0:
    if (ctx->pc == 0x3285F0u) {
        ctx->pc = 0x3285F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285ECu;
        // 0x3285f0: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285F4u;
        goto label_3285f4;
    }
    ctx->pc = 0x3285ECu;
    {
        const bool branch_taken_0x3285ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3285F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285ECu;
        // 0x3285f0: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3285ec) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3285F4u;
label_3285f4:
    // 0x3285f4: 0xc0cdec0  jal         func_337B00
label_3285f8:
    if (ctx->pc == 0x3285F8u) {
        ctx->pc = 0x3285F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285F4u;
        // 0x3285f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3285FCu;
        goto label_3285fc;
    }
    ctx->pc = 0x3285F4u;
    SET_GPR_U32(ctx, 31, 0x3285FCu);
    ctx->pc = 0x3285F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3285F4u;
    // 0x3285f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3285F4u, 0x3285FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3285FCu;
label_3285fc:
    // 0x3285fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3285fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328600:
    // 0x328600: 0xc0cdec0  jal         func_337B00
label_328604:
    if (ctx->pc == 0x328604u) {
        ctx->pc = 0x328604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328600u;
        // 0x328604: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328608u;
        goto label_328608;
    }
    ctx->pc = 0x328600u;
    SET_GPR_U32(ctx, 31, 0x328608u);
    ctx->pc = 0x328604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328600u;
    // 0x328604: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328600u, 0x328608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328608u;
label_328608:
    // 0x328608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32860c:
    // 0x32860c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32860cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328610:
    // 0x328610: 0xc0cdc50  jal         func_337140
label_328614:
    if (ctx->pc == 0x328614u) {
        ctx->pc = 0x328614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328610u;
        // 0x328614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328618u;
        goto label_328618;
    }
    ctx->pc = 0x328610u;
    SET_GPR_U32(ctx, 31, 0x328618u);
    ctx->pc = 0x328614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328610u;
    // 0x328614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337140u, 0x328610u, 0x328618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328618u;
label_328618:
    // 0x328618: 0x5040054b  beql        $v0, $zero, . + 4 + (0x54B << 2)
label_32861c:
    if (ctx->pc == 0x32861Cu) {
        ctx->pc = 0x32861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328618u;
        // 0x32861c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328620u;
        goto label_328620;
    }
    ctx->pc = 0x328618u;
    {
        const bool branch_taken_0x328618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328618) {
            ctx->pc = 0x32861Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328618u;
            // 0x32861c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328620u;
label_328620:
    // 0x328620: 0x8e03026c  lw          $v1, 0x26C($s0)
    ctx->pc = 0x328620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_328624:
    // 0x328624: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x328624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_328628:
    // 0x328628: 0x10000007  b           . + 4 + (0x7 << 2)
label_32862c:
    if (ctx->pc == 0x32862Cu) {
        ctx->pc = 0x32862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328628u;
        // 0x32862c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328630u;
        goto label_328630;
    }
    ctx->pc = 0x328628u;
    {
        const bool branch_taken_0x328628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328628u;
        // 0x32862c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328628) {
            ctx->pc = 0x328648u;
            goto label_328648;
        }
    }
    ctx->pc = 0x328630u;
label_328630:
    // 0x328630: 0x5071000d  beql        $v1, $s1, . + 4 + (0xD << 2)
label_328634:
    if (ctx->pc == 0x328634u) {
        ctx->pc = 0x328634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328630u;
        // 0x328634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328638u;
        goto label_328638;
    }
    ctx->pc = 0x328630u;
    {
        const bool branch_taken_0x328630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x328630) {
            ctx->pc = 0x328634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328630u;
            // 0x328634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328668u;
            goto label_328668;
        }
    }
    ctx->pc = 0x328638u;
label_328638:
    // 0x328638: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_32863c:
    if (ctx->pc == 0x32863Cu) {
        ctx->pc = 0x32863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328638u;
        // 0x32863c: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328640u;
        goto label_328640;
    }
    ctx->pc = 0x328638u;
    {
        const bool branch_taken_0x328638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328638) {
            ctx->pc = 0x32863Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328638u;
            // 0x32863c: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32864Cu;
            goto label_32864c;
        }
    }
    ctx->pc = 0x328640u;
label_328640:
    // 0x328640: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x328640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_328644:
    // 0x328644: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x328644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_328648:
    // 0x328648: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x328648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_32864c:
    // 0x32864c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x32864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_328650:
    // 0x328650: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_328654:
    if (ctx->pc == 0x328654u) {
        ctx->pc = 0x328654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328650u;
        // 0x328654: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328658u;
        goto label_328658;
    }
    ctx->pc = 0x328650u;
    {
        const bool branch_taken_0x328650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328650u;
        // 0x328654: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328650) {
            ctx->pc = 0x32865Cu;
            goto label_32865c;
        }
    }
    ctx->pc = 0x328658u;
label_328658:
    // 0x328658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x328658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32865c:
    // 0x32865c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_328660:
    if (ctx->pc == 0x328660u) {
        ctx->pc = 0x328664u;
        goto label_328664;
    }
    ctx->pc = 0x32865Cu;
    {
        const bool branch_taken_0x32865c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32865c) {
            ctx->pc = 0x328630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328630;
        }
    }
    ctx->pc = 0x328664u;
label_328664:
    // 0x328664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x328664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328668:
    // 0x328668: 0x1440fe8b  bnez        $v0, . + 4 + (-0x175 << 2)
label_32866c:
    if (ctx->pc == 0x32866Cu) {
        ctx->pc = 0x32866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328668u;
        // 0x32866c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328670u;
        goto label_328670;
    }
    ctx->pc = 0x328668u;
    {
        const bool branch_taken_0x328668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328668u;
        // 0x32866c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328668) {
            ctx->pc = 0x328098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328098;
        }
    }
    ctx->pc = 0x328670u;
label_328670:
    // 0x328670: 0x10000534  b           . + 4 + (0x534 << 2)
label_328674:
    if (ctx->pc == 0x328674u) {
        ctx->pc = 0x328674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328670u;
        // 0x328674: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328678u;
        goto label_328678;
    }
    ctx->pc = 0x328670u;
    {
        const bool branch_taken_0x328670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328670u;
        // 0x328674: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328670) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328678u;
label_328678:
    // 0x328678: 0xc0cdf40  jal         func_337D00
label_32867c:
    if (ctx->pc == 0x32867Cu) {
        ctx->pc = 0x32867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328678u;
        // 0x32867c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328680u;
        goto label_328680;
    }
    ctx->pc = 0x328678u;
    SET_GPR_U32(ctx, 31, 0x328680u);
    ctx->pc = 0x32867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328678u;
    // 0x32867c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x328678u, 0x328680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328680u;
label_328680:
    // 0x328680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328684:
    // 0x328684: 0xc0cdec0  jal         func_337B00
label_328688:
    if (ctx->pc == 0x328688u) {
        ctx->pc = 0x328688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328684u;
        // 0x328688: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32868Cu;
        goto label_32868c;
    }
    ctx->pc = 0x328684u;
    SET_GPR_U32(ctx, 31, 0x32868Cu);
    ctx->pc = 0x328688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328684u;
    // 0x328688: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328684u, 0x32868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32868Cu;
label_32868c:
    // 0x32868c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32868cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328690:
    // 0x328690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328694:
    // 0x328694: 0xc0cdc50  jal         func_337140
label_328698:
    if (ctx->pc == 0x328698u) {
        ctx->pc = 0x328698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328694u;
        // 0x328698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32869Cu;
        goto label_32869c;
    }
    ctx->pc = 0x328694u;
    SET_GPR_U32(ctx, 31, 0x32869Cu);
    ctx->pc = 0x328698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328694u;
    // 0x328698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337140u, 0x328694u, 0x32869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32869Cu;
label_32869c:
    // 0x32869c: 0x10400529  beqz        $v0, . + 4 + (0x529 << 2)
label_3286a0:
    if (ctx->pc == 0x3286A0u) {
        ctx->pc = 0x3286A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32869Cu;
        // 0x3286a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286A4u;
        goto label_3286a4;
    }
    ctx->pc = 0x32869Cu;
    {
        const bool branch_taken_0x32869c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3286A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32869Cu;
        // 0x3286a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32869c) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3286A4u;
label_3286a4:
    // 0x3286a4: 0xc09b19e  jal         func_26C678
label_3286a8:
    if (ctx->pc == 0x3286A8u) {
        ctx->pc = 0x3286A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286A4u;
        // 0x3286a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286ACu;
        goto label_3286ac;
    }
    ctx->pc = 0x3286A4u;
    SET_GPR_U32(ctx, 31, 0x3286ACu);
    ctx->pc = 0x3286A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286A4u;
    // 0x3286a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C678u, 0x3286A4u, 0x3286ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3286ACu;
label_3286ac:
    // 0x3286ac: 0x10000526  b           . + 4 + (0x526 << 2)
label_3286b0:
    if (ctx->pc == 0x3286B0u) {
        ctx->pc = 0x3286B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286ACu;
        // 0x3286b0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286B4u;
        goto label_3286b4;
    }
    ctx->pc = 0x3286ACu;
    {
        const bool branch_taken_0x3286ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3286B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286ACu;
        // 0x3286b0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3286ac) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3286B4u;
label_3286b4:
    // 0x3286b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3286b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3286b8:
    // 0x3286b8: 0xc0cdf2e  jal         func_337CB8
label_3286bc:
    if (ctx->pc == 0x3286BCu) {
        ctx->pc = 0x3286BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286B8u;
        // 0x3286bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286C0u;
        goto label_3286c0;
    }
    ctx->pc = 0x3286B8u;
    SET_GPR_U32(ctx, 31, 0x3286C0u);
    ctx->pc = 0x3286BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286B8u;
    // 0x3286bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3286B8u, 0x3286C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3286C0u;
label_3286c0:
    // 0x3286c0: 0xc0cdf52  jal         func_337D48
label_3286c4:
    if (ctx->pc == 0x3286C4u) {
        ctx->pc = 0x3286C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286C0u;
        // 0x3286c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286C8u;
        goto label_3286c8;
    }
    ctx->pc = 0x3286C0u;
    SET_GPR_U32(ctx, 31, 0x3286C8u);
    ctx->pc = 0x3286C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286C0u;
    // 0x3286c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x3286C0u, 0x3286C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3286C8u;
label_3286c8:
    // 0x3286c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3286c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3286cc:
    // 0x3286cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3286ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3286d0:
    // 0x3286d0: 0xc0cdbf6  jal         func_336FD8
label_3286d4:
    if (ctx->pc == 0x3286D4u) {
        ctx->pc = 0x3286D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286D0u;
        // 0x3286d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286D8u;
        goto label_3286d8;
    }
    ctx->pc = 0x3286D0u;
    SET_GPR_U32(ctx, 31, 0x3286D8u);
    ctx->pc = 0x3286D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286D0u;
    // 0x3286d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x3286D0u, 0x3286D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3286D8u;
label_3286d8:
    // 0x3286d8: 0x5040051a  beql        $v0, $zero, . + 4 + (0x51A << 2)
label_3286dc:
    if (ctx->pc == 0x3286DCu) {
        ctx->pc = 0x3286DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286D8u;
        // 0x3286dc: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286E0u;
        goto label_3286e0;
    }
    ctx->pc = 0x3286D8u;
    {
        const bool branch_taken_0x3286d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3286d8) {
            ctx->pc = 0x3286DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3286D8u;
            // 0x3286dc: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3286E0u;
label_3286e0:
    // 0x3286e0: 0xc0d432a  jal         func_350CA8
label_3286e4:
    if (ctx->pc == 0x3286E4u) {
        ctx->pc = 0x3286E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286E0u;
        // 0x3286e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286E8u;
        goto label_3286e8;
    }
    ctx->pc = 0x3286E0u;
    SET_GPR_U32(ctx, 31, 0x3286E8u);
    ctx->pc = 0x3286E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286E0u;
    // 0x3286e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CA8u, 0x3286E0u, 0x3286E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3286E8u;
label_3286e8:
    // 0x3286e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3286e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3286ec:
    // 0x3286ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3286ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3286f0:
    // 0x3286f0: 0xc0cdc02  jal         func_337008
label_3286f4:
    if (ctx->pc == 0x3286F4u) {
        ctx->pc = 0x3286F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286F0u;
        // 0x3286f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3286F8u;
        goto label_3286f8;
    }
    ctx->pc = 0x3286F0u;
    SET_GPR_U32(ctx, 31, 0x3286F8u);
    ctx->pc = 0x3286F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3286F0u;
    // 0x3286f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337008u, 0x3286F0u, 0x3286F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3286F8u;
label_3286f8:
    // 0x3286f8: 0x10000512  b           . + 4 + (0x512 << 2)
label_3286fc:
    if (ctx->pc == 0x3286FCu) {
        ctx->pc = 0x3286FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286F8u;
        // 0x3286fc: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328700u;
        goto label_328700;
    }
    ctx->pc = 0x3286F8u;
    {
        const bool branch_taken_0x3286f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3286FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3286F8u;
        // 0x3286fc: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3286f8) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328700u;
label_328700:
    // 0x328700: 0xc0cdf2e  jal         func_337CB8
label_328704:
    if (ctx->pc == 0x328704u) {
        ctx->pc = 0x328704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328700u;
        // 0x328704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328708u;
        goto label_328708;
    }
    ctx->pc = 0x328700u;
    SET_GPR_U32(ctx, 31, 0x328708u);
    ctx->pc = 0x328704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328700u;
    // 0x328704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328700u, 0x328708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328708u;
label_328708:
    // 0x328708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32870c:
    // 0x32870c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32870cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328710:
    // 0x328710: 0xc0cdc02  jal         func_337008
label_328714:
    if (ctx->pc == 0x328714u) {
        ctx->pc = 0x328714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328710u;
        // 0x328714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328718u;
        goto label_328718;
    }
    ctx->pc = 0x328710u;
    SET_GPR_U32(ctx, 31, 0x328718u);
    ctx->pc = 0x328714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328710u;
    // 0x328714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337008u, 0x328710u, 0x328718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328718u;
label_328718:
    // 0x328718: 0x5040050b  beql        $v0, $zero, . + 4 + (0x50B << 2)
label_32871c:
    if (ctx->pc == 0x32871Cu) {
        ctx->pc = 0x32871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328718u;
        // 0x32871c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328720u;
        goto label_328720;
    }
    ctx->pc = 0x328718u;
    {
        const bool branch_taken_0x328718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328718) {
            ctx->pc = 0x32871Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328718u;
            // 0x32871c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328720u;
label_328720:
    // 0x328720: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x328720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_328724:
    // 0x328724: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x328724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_328728:
    // 0x328728: 0x40f809  jalr        $v0
label_32872c:
    if (ctx->pc == 0x32872Cu) {
        ctx->pc = 0x32872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328728u;
        // 0x32872c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328730u;
        goto label_328730;
    }
    ctx->pc = 0x328728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328730u);
        ctx->pc = 0x32872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328728u;
        // 0x32872c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328728u, 0x328730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328730u;
label_328730:
    // 0x328730: 0x10000505  b           . + 4 + (0x505 << 2)
label_328734:
    if (ctx->pc == 0x328734u) {
        ctx->pc = 0x328734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328730u;
        // 0x328734: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328738u;
        goto label_328738;
    }
    ctx->pc = 0x328730u;
    {
        const bool branch_taken_0x328730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328730u;
        // 0x328734: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328730) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328738u;
label_328738:
    // 0x328738: 0xc0cdf2e  jal         func_337CB8
label_32873c:
    if (ctx->pc == 0x32873Cu) {
        ctx->pc = 0x32873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328738u;
        // 0x32873c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328740u;
        goto label_328740;
    }
    ctx->pc = 0x328738u;
    SET_GPR_U32(ctx, 31, 0x328740u);
    ctx->pc = 0x32873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328738u;
    // 0x32873c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328738u, 0x328740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328740u;
label_328740:
    // 0x328740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328744:
    // 0x328744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328748:
    // 0x328748: 0xc0cdc02  jal         func_337008
label_32874c:
    if (ctx->pc == 0x32874Cu) {
        ctx->pc = 0x32874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328748u;
        // 0x32874c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328750u;
        goto label_328750;
    }
    ctx->pc = 0x328748u;
    SET_GPR_U32(ctx, 31, 0x328750u);
    ctx->pc = 0x32874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328748u;
    // 0x32874c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337008u, 0x328748u, 0x328750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328750u;
label_328750:
    // 0x328750: 0x104004fc  beqz        $v0, . + 4 + (0x4FC << 2)
label_328754:
    if (ctx->pc == 0x328754u) {
        ctx->pc = 0x328754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328750u;
        // 0x328754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328758u;
        goto label_328758;
    }
    ctx->pc = 0x328750u;
    {
        const bool branch_taken_0x328750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328750u;
        // 0x328754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328750) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328758u;
label_328758:
    // 0x328758: 0xc0d4406  jal         func_351018
label_32875c:
    if (ctx->pc == 0x32875Cu) {
        ctx->pc = 0x32875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328758u;
        // 0x32875c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328760u;
        goto label_328760;
    }
    ctx->pc = 0x328758u;
    SET_GPR_U32(ctx, 31, 0x328760u);
    ctx->pc = 0x32875Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328758u;
    // 0x32875c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351018u, 0x328758u, 0x328760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328760u;
label_328760:
    // 0x328760: 0x100004f9  b           . + 4 + (0x4F9 << 2)
label_328764:
    if (ctx->pc == 0x328764u) {
        ctx->pc = 0x328764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328760u;
        // 0x328764: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328768u;
        goto label_328768;
    }
    ctx->pc = 0x328760u;
    {
        const bool branch_taken_0x328760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328760u;
        // 0x328764: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328760) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328768u;
label_328768:
    // 0x328768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x328768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32876c:
    // 0x32876c: 0xc0cdee8  jal         func_337BA0
label_328770:
    if (ctx->pc == 0x328770u) {
        ctx->pc = 0x328770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32876Cu;
        // 0x328770: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328774u;
        goto label_328774;
    }
    ctx->pc = 0x32876Cu;
    SET_GPR_U32(ctx, 31, 0x328774u);
    ctx->pc = 0x328770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32876Cu;
    // 0x328770: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x32876Cu, 0x328774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328774u;
label_328774:
    // 0x328774: 0xc0cdf2e  jal         func_337CB8
label_328778:
    if (ctx->pc == 0x328778u) {
        ctx->pc = 0x328778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328774u;
        // 0x328778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32877Cu;
        goto label_32877c;
    }
    ctx->pc = 0x328774u;
    SET_GPR_U32(ctx, 31, 0x32877Cu);
    ctx->pc = 0x328778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328774u;
    // 0x328778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328774u, 0x32877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32877Cu;
label_32877c:
    // 0x32877c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32877cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328780:
    // 0x328780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328784:
    // 0x328784: 0xc0cdc02  jal         func_337008
label_328788:
    if (ctx->pc == 0x328788u) {
        ctx->pc = 0x328788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328784u;
        // 0x328788: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32878Cu;
        goto label_32878c;
    }
    ctx->pc = 0x328784u;
    SET_GPR_U32(ctx, 31, 0x32878Cu);
    ctx->pc = 0x328788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328784u;
    // 0x328788: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337008u, 0x328784u, 0x32878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32878Cu;
label_32878c:
    // 0x32878c: 0x504004ee  beql        $v0, $zero, . + 4 + (0x4EE << 2)
label_328790:
    if (ctx->pc == 0x328790u) {
        ctx->pc = 0x328790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32878Cu;
        // 0x328790: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328794u;
        goto label_328794;
    }
    ctx->pc = 0x32878Cu;
    {
        const bool branch_taken_0x32878c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32878c) {
            ctx->pc = 0x328790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32878Cu;
            // 0x328790: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328794u;
label_328794:
    // 0x328794: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x328794u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_328798:
    // 0x328798: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x328798u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_32879c:
    // 0x32879c: 0x100004ea  b           . + 4 + (0x4EA << 2)
label_3287a0:
    if (ctx->pc == 0x3287A0u) {
        ctx->pc = 0x3287A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32879Cu;
        // 0x3287a0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287A4u;
        goto label_3287a4;
    }
    ctx->pc = 0x32879Cu;
    {
        const bool branch_taken_0x32879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3287A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32879Cu;
        // 0x3287a0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32879c) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3287A4u;
label_3287a4:
    // 0x3287a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3287a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3287a8:
    // 0x3287a8: 0xc0cdee8  jal         func_337BA0
label_3287ac:
    if (ctx->pc == 0x3287ACu) {
        ctx->pc = 0x3287ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287A8u;
        // 0x3287ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287B0u;
        goto label_3287b0;
    }
    ctx->pc = 0x3287A8u;
    SET_GPR_U32(ctx, 31, 0x3287B0u);
    ctx->pc = 0x3287ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287A8u;
    // 0x3287ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x3287A8u, 0x3287B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3287B0u;
label_3287b0:
    // 0x3287b0: 0xc0cdf2e  jal         func_337CB8
label_3287b4:
    if (ctx->pc == 0x3287B4u) {
        ctx->pc = 0x3287B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287B0u;
        // 0x3287b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287B8u;
        goto label_3287b8;
    }
    ctx->pc = 0x3287B0u;
    SET_GPR_U32(ctx, 31, 0x3287B8u);
    ctx->pc = 0x3287B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287B0u;
    // 0x3287b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3287B0u, 0x3287B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3287B8u;
label_3287b8:
    // 0x3287b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3287b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3287bc:
    // 0x3287bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3287bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3287c0:
    // 0x3287c0: 0xc0cdc02  jal         func_337008
label_3287c4:
    if (ctx->pc == 0x3287C4u) {
        ctx->pc = 0x3287C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287C0u;
        // 0x3287c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287C8u;
        goto label_3287c8;
    }
    ctx->pc = 0x3287C0u;
    SET_GPR_U32(ctx, 31, 0x3287C8u);
    ctx->pc = 0x3287C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287C0u;
    // 0x3287c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337008u, 0x3287C0u, 0x3287C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3287C8u;
label_3287c8:
    // 0x3287c8: 0x504004df  beql        $v0, $zero, . + 4 + (0x4DF << 2)
label_3287cc:
    if (ctx->pc == 0x3287CCu) {
        ctx->pc = 0x3287CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287C8u;
        // 0x3287cc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287D0u;
        goto label_3287d0;
    }
    ctx->pc = 0x3287C8u;
    {
        const bool branch_taken_0x3287c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3287c8) {
            ctx->pc = 0x3287CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3287C8u;
            // 0x3287cc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3287D0u;
label_3287d0:
    // 0x3287d0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3287d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3287d4:
    // 0x3287d4: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x3287d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_3287d8:
    // 0x3287d8: 0x100004db  b           . + 4 + (0x4DB << 2)
label_3287dc:
    if (ctx->pc == 0x3287DCu) {
        ctx->pc = 0x3287DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287D8u;
        // 0x3287dc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287E0u;
        goto label_3287e0;
    }
    ctx->pc = 0x3287D8u;
    {
        const bool branch_taken_0x3287d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3287DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287D8u;
        // 0x3287dc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287d8) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3287E0u;
label_3287e0:
    // 0x3287e0: 0xc0cdf40  jal         func_337D00
label_3287e4:
    if (ctx->pc == 0x3287E4u) {
        ctx->pc = 0x3287E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287E0u;
        // 0x3287e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287E8u;
        goto label_3287e8;
    }
    ctx->pc = 0x3287E0u;
    SET_GPR_U32(ctx, 31, 0x3287E8u);
    ctx->pc = 0x3287E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287E0u;
    // 0x3287e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x3287E0u, 0x3287E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3287E8u;
label_3287e8:
    // 0x3287e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3287e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3287ec:
    // 0x3287ec: 0xc0cdf2e  jal         func_337CB8
label_3287f0:
    if (ctx->pc == 0x3287F0u) {
        ctx->pc = 0x3287F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287ECu;
        // 0x3287f0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287F4u;
        goto label_3287f4;
    }
    ctx->pc = 0x3287ECu;
    SET_GPR_U32(ctx, 31, 0x3287F4u);
    ctx->pc = 0x3287F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287ECu;
    // 0x3287f0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3287ECu, 0x3287F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3287F4u;
label_3287f4:
    // 0x3287f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3287f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3287f8:
    // 0x3287f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3287f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3287fc:
    // 0x3287fc: 0xc0cdc02  jal         func_337008
label_328800:
    if (ctx->pc == 0x328800u) {
        ctx->pc = 0x328800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287FCu;
        // 0x328800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328804u;
        goto label_328804;
    }
    ctx->pc = 0x3287FCu;
    SET_GPR_U32(ctx, 31, 0x328804u);
    ctx->pc = 0x328800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287FCu;
    // 0x328800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337008u, 0x3287FCu, 0x328804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328804u;
label_328804:
    // 0x328804: 0x544004cf  bnel        $v0, $zero, . + 4 + (0x4CF << 2)
label_328808:
    if (ctx->pc == 0x328808u) {
        ctx->pc = 0x328808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328804u;
        // 0x328808: 0xe6140080  swc1        $f20, 0x80($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32880Cu;
        goto label_32880c;
    }
    ctx->pc = 0x328804u;
    {
        const bool branch_taken_0x328804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328804) {
            ctx->pc = 0x328808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328804u;
            // 0x328808: 0xe6140080  swc1        $f20, 0x80($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x32880Cu;
label_32880c:
    // 0x32880c: 0x100004ce  b           . + 4 + (0x4CE << 2)
label_328810:
    if (ctx->pc == 0x328810u) {
        ctx->pc = 0x328810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32880Cu;
        // 0x328810: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328814u;
        goto label_328814;
    }
    ctx->pc = 0x32880Cu;
    {
        const bool branch_taken_0x32880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32880Cu;
        // 0x328810: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32880c) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328814u;
label_328814:
    // 0x328814: 0xc0cdf40  jal         func_337D00
label_328818:
    if (ctx->pc == 0x328818u) {
        ctx->pc = 0x328818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328814u;
        // 0x328818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32881Cu;
        goto label_32881c;
    }
    ctx->pc = 0x328814u;
    SET_GPR_U32(ctx, 31, 0x32881Cu);
    ctx->pc = 0x328818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328814u;
    // 0x328818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x328814u, 0x32881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32881Cu;
label_32881c:
    // 0x32881c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32881cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328820:
    // 0x328820: 0xc0cdf2e  jal         func_337CB8
label_328824:
    if (ctx->pc == 0x328824u) {
        ctx->pc = 0x328824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328820u;
        // 0x328824: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x328828u;
        goto label_328828;
    }
    ctx->pc = 0x328820u;
    SET_GPR_U32(ctx, 31, 0x328828u);
    ctx->pc = 0x328824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328820u;
    // 0x328824: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328820u, 0x328828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328828u;
label_328828:
    // 0x328828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32882c:
    // 0x32882c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32882cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328830:
    // 0x328830: 0xc0cdc02  jal         func_337008
label_328834:
    if (ctx->pc == 0x328834u) {
        ctx->pc = 0x328834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328830u;
        // 0x328834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328838u;
        goto label_328838;
    }
    ctx->pc = 0x328830u;
    SET_GPR_U32(ctx, 31, 0x328838u);
    ctx->pc = 0x328834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328830u;
    // 0x328834: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337008u, 0x328830u, 0x328838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328838u;
label_328838:
    // 0x328838: 0x544004c2  bnel        $v0, $zero, . + 4 + (0x4C2 << 2)
label_32883c:
    if (ctx->pc == 0x32883Cu) {
        ctx->pc = 0x32883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328838u;
        // 0x32883c: 0xe6140108  swc1        $f20, 0x108($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x328840u;
        goto label_328840;
    }
    ctx->pc = 0x328838u;
    {
        const bool branch_taken_0x328838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328838) {
            ctx->pc = 0x32883Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328838u;
            // 0x32883c: 0xe6140108  swc1        $f20, 0x108($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328840u;
label_328840:
    // 0x328840: 0x100004c1  b           . + 4 + (0x4C1 << 2)
label_328844:
    if (ctx->pc == 0x328844u) {
        ctx->pc = 0x328844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328840u;
        // 0x328844: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328848u;
        goto label_328848;
    }
    ctx->pc = 0x328840u;
    {
        const bool branch_taken_0x328840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328840u;
        // 0x328844: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328840) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328848u;
label_328848:
    // 0x328848: 0xc0cdf40  jal         func_337D00
label_32884c:
    if (ctx->pc == 0x32884Cu) {
        ctx->pc = 0x32884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328848u;
        // 0x32884c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328850u;
        goto label_328850;
    }
    ctx->pc = 0x328848u;
    SET_GPR_U32(ctx, 31, 0x328850u);
    ctx->pc = 0x32884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328848u;
    // 0x32884c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x328848u, 0x328850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328850u;
label_328850:
    // 0x328850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328854:
    // 0x328854: 0xc0cdf2e  jal         func_337CB8
label_328858:
    if (ctx->pc == 0x328858u) {
        ctx->pc = 0x328858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328854u;
        // 0x328858: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32885Cu;
        goto label_32885c;
    }
    ctx->pc = 0x328854u;
    SET_GPR_U32(ctx, 31, 0x32885Cu);
    ctx->pc = 0x328858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328854u;
    // 0x328858: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328854u, 0x32885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32885Cu;
label_32885c:
    // 0x32885c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32885cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328860:
    // 0x328860: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328864:
    // 0x328864: 0xc0cdc02  jal         func_337008
label_328868:
    if (ctx->pc == 0x328868u) {
        ctx->pc = 0x328868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328864u;
        // 0x328868: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32886Cu;
        goto label_32886c;
    }
    ctx->pc = 0x328864u;
    SET_GPR_U32(ctx, 31, 0x32886Cu);
    ctx->pc = 0x328868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328864u;
    // 0x328868: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337008u, 0x328864u, 0x32886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32886Cu;
label_32886c:
    // 0x32886c: 0x544004b5  bnel        $v0, $zero, . + 4 + (0x4B5 << 2)
label_328870:
    if (ctx->pc == 0x328870u) {
        ctx->pc = 0x328870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32886Cu;
        // 0x328870: 0xe6140104  swc1        $f20, 0x104($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x328874u;
        goto label_328874;
    }
    ctx->pc = 0x32886Cu;
    {
        const bool branch_taken_0x32886c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32886c) {
            ctx->pc = 0x328870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32886Cu;
            // 0x328870: 0xe6140104  swc1        $f20, 0x104($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328874u;
label_328874:
    // 0x328874: 0x100004b4  b           . + 4 + (0x4B4 << 2)
label_328878:
    if (ctx->pc == 0x328878u) {
        ctx->pc = 0x328878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328874u;
        // 0x328878: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32887Cu;
        goto label_32887c;
    }
    ctx->pc = 0x328874u;
    {
        const bool branch_taken_0x328874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328874u;
        // 0x328878: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328874) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x32887Cu;
label_32887c:
    // 0x32887c: 0xc0cdf2e  jal         func_337CB8
label_328880:
    if (ctx->pc == 0x328880u) {
        ctx->pc = 0x328880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32887Cu;
        // 0x328880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328884u;
        goto label_328884;
    }
    ctx->pc = 0x32887Cu;
    SET_GPR_U32(ctx, 31, 0x328884u);
    ctx->pc = 0x328880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32887Cu;
    // 0x328880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32887Cu, 0x328884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328884u;
label_328884:
    // 0x328884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328888:
    // 0x328888: 0xc0cdec0  jal         func_337B00
label_32888c:
    if (ctx->pc == 0x32888Cu) {
        ctx->pc = 0x32888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328888u;
        // 0x32888c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328890u;
        goto label_328890;
    }
    ctx->pc = 0x328888u;
    SET_GPR_U32(ctx, 31, 0x328890u);
    ctx->pc = 0x32888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328888u;
    // 0x32888c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328888u, 0x328890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328890u;
label_328890:
    // 0x328890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328894:
    // 0x328894: 0xc0cdf2e  jal         func_337CB8
label_328898:
    if (ctx->pc == 0x328898u) {
        ctx->pc = 0x328898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328894u;
        // 0x328898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32889Cu;
        goto label_32889c;
    }
    ctx->pc = 0x328894u;
    SET_GPR_U32(ctx, 31, 0x32889Cu);
    ctx->pc = 0x328898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328894u;
    // 0x328898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328894u, 0x32889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32889Cu;
label_32889c:
    // 0x32889c: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x32889cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_3288a0:
    // 0x3288a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3288a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3288a4:
    // 0x3288a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3288a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3288a8:
    // 0x3288a8: 0xc0cdc76  jal         func_3371D8
label_3288ac:
    if (ctx->pc == 0x3288ACu) {
        ctx->pc = 0x3288ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288A8u;
        // 0x3288ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288B0u;
        goto label_3288b0;
    }
    ctx->pc = 0x3288A8u;
    SET_GPR_U32(ctx, 31, 0x3288B0u);
    ctx->pc = 0x3288ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3288A8u;
    // 0x3288ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x3288A8u, 0x3288B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3288B0u;
label_3288b0:
    // 0x3288b0: 0x104004a4  beqz        $v0, . + 4 + (0x4A4 << 2)
label_3288b4:
    if (ctx->pc == 0x3288B4u) {
        ctx->pc = 0x3288B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288B0u;
        // 0x3288b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288B8u;
        goto label_3288b8;
    }
    ctx->pc = 0x3288B0u;
    {
        const bool branch_taken_0x3288b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3288B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288B0u;
        // 0x3288b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288b0) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3288B8u;
label_3288b8:
    // 0x3288b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3288b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3288bc:
    // 0x3288bc: 0xc0895e0  jal         func_225780
label_3288c0:
    if (ctx->pc == 0x3288C0u) {
        ctx->pc = 0x3288C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288BCu;
        // 0x3288c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288C4u;
        goto label_3288c4;
    }
    ctx->pc = 0x3288BCu;
    SET_GPR_U32(ctx, 31, 0x3288C4u);
    ctx->pc = 0x3288C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3288BCu;
    // 0x3288c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225780u, 0x3288BCu, 0x3288C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3288C4u;
label_3288c4:
    // 0x3288c4: 0x1000049f  b           . + 4 + (0x49F << 2)
label_3288c8:
    if (ctx->pc == 0x3288C8u) {
        ctx->pc = 0x3288C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288C4u;
        // 0x3288c8: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288CCu;
        goto label_3288cc;
    }
    ctx->pc = 0x3288C4u;
    {
        const bool branch_taken_0x3288c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3288C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288C4u;
        // 0x3288c8: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288c4) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3288CCu;
label_3288cc:
    // 0x3288cc: 0xc0cdec0  jal         func_337B00
label_3288d0:
    if (ctx->pc == 0x3288D0u) {
        ctx->pc = 0x3288D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288CCu;
        // 0x3288d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288D4u;
        goto label_3288d4;
    }
    ctx->pc = 0x3288CCu;
    SET_GPR_U32(ctx, 31, 0x3288D4u);
    ctx->pc = 0x3288D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3288CCu;
    // 0x3288d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3288CCu, 0x3288D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3288D4u;
label_3288d4:
    // 0x3288d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3288d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3288d8:
    // 0x3288d8: 0xc0cdec0  jal         func_337B00
label_3288dc:
    if (ctx->pc == 0x3288DCu) {
        ctx->pc = 0x3288DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288D8u;
        // 0x3288dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288E0u;
        goto label_3288e0;
    }
    ctx->pc = 0x3288D8u;
    SET_GPR_U32(ctx, 31, 0x3288E0u);
    ctx->pc = 0x3288DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3288D8u;
    // 0x3288dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3288D8u, 0x3288E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3288E0u;
label_3288e0:
    // 0x3288e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3288e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3288e4:
    // 0x3288e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3288e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3288e8:
    // 0x3288e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3288e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3288ec:
    // 0x3288ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3288ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3288f0:
    // 0x3288f0: 0xc0cdc76  jal         func_3371D8
label_3288f4:
    if (ctx->pc == 0x3288F4u) {
        ctx->pc = 0x3288F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288F0u;
        // 0x3288f4: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288F8u;
        goto label_3288f8;
    }
    ctx->pc = 0x3288F0u;
    SET_GPR_U32(ctx, 31, 0x3288F8u);
    ctx->pc = 0x3288F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3288F0u;
    // 0x3288f4: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x3288F0u, 0x3288F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3288F8u;
label_3288f8:
    // 0x3288f8: 0x10400492  beqz        $v0, . + 4 + (0x492 << 2)
label_3288fc:
    if (ctx->pc == 0x3288FCu) {
        ctx->pc = 0x3288FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288F8u;
        // 0x3288fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328900u;
        goto label_328900;
    }
    ctx->pc = 0x3288F8u;
    {
        const bool branch_taken_0x3288f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3288FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288F8u;
        // 0x3288fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288f8) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328900u;
label_328900:
    // 0x328900: 0xc0cdc64  jal         func_337190
label_328904:
    if (ctx->pc == 0x328904u) {
        ctx->pc = 0x328904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328900u;
        // 0x328904: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328908u;
        goto label_328908;
    }
    ctx->pc = 0x328900u;
    SET_GPR_U32(ctx, 31, 0x328908u);
    ctx->pc = 0x328904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328900u;
    // 0x328904: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337190u, 0x328900u, 0x328908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328908u;
label_328908:
    // 0x328908: 0x1040048e  beqz        $v0, . + 4 + (0x48E << 2)
label_32890c:
    if (ctx->pc == 0x32890Cu) {
        ctx->pc = 0x32890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328908u;
        // 0x32890c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328910u;
        goto label_328910;
    }
    ctx->pc = 0x328908u;
    {
        const bool branch_taken_0x328908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328908u;
        // 0x32890c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328908) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328910u;
label_328910:
    // 0x328910: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x328910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_328914:
    // 0x328914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x328914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_328918:
    // 0x328918: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x328918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32891c:
    // 0x32891c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x32891cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_328920:
    // 0x328920: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x328920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328924:
    // 0x328924: 0x40f809  jalr        $v0
label_328928:
    if (ctx->pc == 0x328928u) {
        ctx->pc = 0x328928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328924u;
        // 0x328928: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32892Cu;
        goto label_32892c;
    }
    ctx->pc = 0x328924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32892Cu);
        ctx->pc = 0x328928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328924u;
        // 0x328928: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328924u, 0x32892Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32892Cu;
label_32892c:
    // 0x32892c: 0x10000486  b           . + 4 + (0x486 << 2)
label_328930:
    if (ctx->pc == 0x328930u) {
        ctx->pc = 0x328930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32892Cu;
        // 0x328930: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328934u;
        goto label_328934;
    }
    ctx->pc = 0x32892Cu;
    {
        const bool branch_taken_0x32892c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32892Cu;
        // 0x328930: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32892c) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328934u;
label_328934:
    // 0x328934: 0xc0cdec0  jal         func_337B00
label_328938:
    if (ctx->pc == 0x328938u) {
        ctx->pc = 0x328938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328934u;
        // 0x328938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32893Cu;
        goto label_32893c;
    }
    ctx->pc = 0x328934u;
    SET_GPR_U32(ctx, 31, 0x32893Cu);
    ctx->pc = 0x328938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328934u;
    // 0x328938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328934u, 0x32893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32893Cu;
label_32893c:
    // 0x32893c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328940:
    // 0x328940: 0xc0cdec0  jal         func_337B00
label_328944:
    if (ctx->pc == 0x328944u) {
        ctx->pc = 0x328944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328940u;
        // 0x328944: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328948u;
        goto label_328948;
    }
    ctx->pc = 0x328940u;
    SET_GPR_U32(ctx, 31, 0x328948u);
    ctx->pc = 0x328944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328940u;
    // 0x328944: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328940u, 0x328948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328948u;
label_328948:
    // 0x328948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32894c:
    // 0x32894c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32894cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328950:
    // 0x328950: 0xc0cdc76  jal         func_3371D8
label_328954:
    if (ctx->pc == 0x328954u) {
        ctx->pc = 0x328954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328950u;
        // 0x328954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328958u;
        goto label_328958;
    }
    ctx->pc = 0x328950u;
    SET_GPR_U32(ctx, 31, 0x328958u);
    ctx->pc = 0x328954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328950u;
    // 0x328954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x328950u, 0x328958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328958u;
label_328958:
    // 0x328958: 0x1040047a  beqz        $v0, . + 4 + (0x47A << 2)
label_32895c:
    if (ctx->pc == 0x32895Cu) {
        ctx->pc = 0x32895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328958u;
        // 0x32895c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328960u;
        goto label_328960;
    }
    ctx->pc = 0x328958u;
    {
        const bool branch_taken_0x328958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328958u;
        // 0x32895c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328958) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328960u;
label_328960:
    // 0x328960: 0xc0cdc64  jal         func_337190
label_328964:
    if (ctx->pc == 0x328964u) {
        ctx->pc = 0x328964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328960u;
        // 0x328964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328968u;
        goto label_328968;
    }
    ctx->pc = 0x328960u;
    SET_GPR_U32(ctx, 31, 0x328968u);
    ctx->pc = 0x328964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328960u;
    // 0x328964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337190u, 0x328960u, 0x328968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328968u;
label_328968:
    // 0x328968: 0x10400476  beqz        $v0, . + 4 + (0x476 << 2)
label_32896c:
    if (ctx->pc == 0x32896Cu) {
        ctx->pc = 0x32896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328968u;
        // 0x32896c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328970u;
        goto label_328970;
    }
    ctx->pc = 0x328968u;
    {
        const bool branch_taken_0x328968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328968u;
        // 0x32896c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328968) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328970u;
label_328970:
    // 0x328970: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x328970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_328974:
    // 0x328974: 0x10000028  b           . + 4 + (0x28 << 2)
label_328978:
    if (ctx->pc == 0x328978u) {
        ctx->pc = 0x328978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328974u;
        // 0x328978: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32897Cu;
        goto label_32897c;
    }
    ctx->pc = 0x328974u;
    {
        const bool branch_taken_0x328974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328974u;
        // 0x328978: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328974) {
            ctx->pc = 0x328A18u;
            goto label_328a18;
        }
    }
    ctx->pc = 0x32897Cu;
label_32897c:
    // 0x32897c: 0xc0cdf2e  jal         func_337CB8
label_328980:
    if (ctx->pc == 0x328980u) {
        ctx->pc = 0x328980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32897Cu;
        // 0x328980: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328984u;
        goto label_328984;
    }
    ctx->pc = 0x32897Cu;
    SET_GPR_U32(ctx, 31, 0x328984u);
    ctx->pc = 0x328980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32897Cu;
    // 0x328980: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32897Cu, 0x328984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328984u;
label_328984:
    // 0x328984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328988:
    // 0x328988: 0xc0cdec0  jal         func_337B00
label_32898c:
    if (ctx->pc == 0x32898Cu) {
        ctx->pc = 0x32898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328988u;
        // 0x32898c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328990u;
        goto label_328990;
    }
    ctx->pc = 0x328988u;
    SET_GPR_U32(ctx, 31, 0x328990u);
    ctx->pc = 0x32898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328988u;
    // 0x32898c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328988u, 0x328990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328990u;
label_328990:
    // 0x328990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328994:
    // 0x328994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328998:
    // 0x328998: 0xc0cdc76  jal         func_3371D8
label_32899c:
    if (ctx->pc == 0x32899Cu) {
        ctx->pc = 0x32899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328998u;
        // 0x32899c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3289A0u;
        goto label_3289a0;
    }
    ctx->pc = 0x328998u;
    SET_GPR_U32(ctx, 31, 0x3289A0u);
    ctx->pc = 0x32899Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328998u;
    // 0x32899c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x328998u, 0x3289A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3289A0u;
label_3289a0:
    // 0x3289a0: 0x50400469  beql        $v0, $zero, . + 4 + (0x469 << 2)
label_3289a4:
    if (ctx->pc == 0x3289A4u) {
        ctx->pc = 0x3289A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289A0u;
        // 0x3289a4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3289A8u;
        goto label_3289a8;
    }
    ctx->pc = 0x3289A0u;
    {
        const bool branch_taken_0x3289a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3289a0) {
            ctx->pc = 0x3289A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3289A0u;
            // 0x3289a4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3289A8u;
label_3289a8:
    // 0x3289a8: 0x6200033  bltz        $s1, . + 4 + (0x33 << 2)
label_3289ac:
    if (ctx->pc == 0x3289ACu) {
        ctx->pc = 0x3289ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289A8u;
        // 0x3289ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3289B0u;
        goto label_3289b0;
    }
    ctx->pc = 0x3289A8u;
    {
        const bool branch_taken_0x3289a8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3289ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289A8u;
        // 0x3289ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3289a8) {
            ctx->pc = 0x328A78u;
            goto label_328a78;
        }
    }
    ctx->pc = 0x3289B0u;
label_3289b0:
    // 0x3289b0: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x3289b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_3289b4:
    // 0x3289b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3289b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3289b8:
    // 0x3289b8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3289b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3289bc:
    // 0x3289bc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_3289c0:
    if (ctx->pc == 0x3289C0u) {
        ctx->pc = 0x3289C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289BCu;
        // 0x3289c0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3289C4u;
        goto label_3289c4;
    }
    ctx->pc = 0x3289BCu;
    {
        const bool branch_taken_0x3289bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3289C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289BCu;
        // 0x3289c0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3289bc) {
            ctx->pc = 0x328A78u;
            goto label_328a78;
        }
    }
    ctx->pc = 0x3289C4u;
label_3289c4:
    // 0x3289c4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3289c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3289c8:
    // 0x3289c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3289c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3289cc:
    // 0x3289cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3289ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3289d0:
    // 0x3289d0: 0x50a0045d  beql        $a1, $zero, . + 4 + (0x45D << 2)
label_3289d4:
    if (ctx->pc == 0x3289D4u) {
        ctx->pc = 0x3289D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289D0u;
        // 0x3289d4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3289D8u;
        goto label_3289d8;
    }
    ctx->pc = 0x3289D0u;
    {
        const bool branch_taken_0x3289d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3289d0) {
            ctx->pc = 0x3289D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3289D0u;
            // 0x3289d4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3289D8u;
label_3289d8:
    // 0x3289d8: 0x1000000e  b           . + 4 + (0xE << 2)
label_3289dc:
    if (ctx->pc == 0x3289DCu) {
        ctx->pc = 0x3289DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289D8u;
        // 0x3289dc: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3289E0u;
        goto label_3289e0;
    }
    ctx->pc = 0x3289D8u;
    {
        const bool branch_taken_0x3289d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3289DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289D8u;
        // 0x3289dc: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3289d8) {
            ctx->pc = 0x328A14u;
            goto label_328a14;
        }
    }
    ctx->pc = 0x3289E0u;
label_3289e0:
    // 0x3289e0: 0xc0cdec0  jal         func_337B00
label_3289e4:
    if (ctx->pc == 0x3289E4u) {
        ctx->pc = 0x3289E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289E0u;
        // 0x3289e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3289E8u;
        goto label_3289e8;
    }
    ctx->pc = 0x3289E0u;
    SET_GPR_U32(ctx, 31, 0x3289E8u);
    ctx->pc = 0x3289E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3289E0u;
    // 0x3289e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3289E0u, 0x3289E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3289E8u;
label_3289e8:
    // 0x3289e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3289e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3289ec:
    // 0x3289ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3289ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3289f0:
    // 0x3289f0: 0xc0cdc76  jal         func_3371D8
label_3289f4:
    if (ctx->pc == 0x3289F4u) {
        ctx->pc = 0x3289F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289F0u;
        // 0x3289f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3289F8u;
        goto label_3289f8;
    }
    ctx->pc = 0x3289F0u;
    SET_GPR_U32(ctx, 31, 0x3289F8u);
    ctx->pc = 0x3289F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3289F0u;
    // 0x3289f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x3289F0u, 0x3289F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3289F8u;
label_3289f8:
    // 0x3289f8: 0x50400453  beql        $v0, $zero, . + 4 + (0x453 << 2)
label_3289fc:
    if (ctx->pc == 0x3289FCu) {
        ctx->pc = 0x3289FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3289F8u;
        // 0x3289fc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A00u;
        goto label_328a00;
    }
    ctx->pc = 0x3289F8u;
    {
        const bool branch_taken_0x3289f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3289f8) {
            ctx->pc = 0x3289FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3289F8u;
            // 0x3289fc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328A00u;
label_328a00:
    // 0x328a00: 0xc0899bc  jal         func_2266F0
label_328a04:
    if (ctx->pc == 0x328A04u) {
        ctx->pc = 0x328A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A00u;
        // 0x328a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A08u;
        goto label_328a08;
    }
    ctx->pc = 0x328A00u;
    SET_GPR_U32(ctx, 31, 0x328A08u);
    ctx->pc = 0x328A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A00u;
    // 0x328a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x328A00u, 0x328A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A08u;
label_328a08:
    // 0x328a08: 0x1040044e  beqz        $v0, . + 4 + (0x44E << 2)
label_328a0c:
    if (ctx->pc == 0x328A0Cu) {
        ctx->pc = 0x328A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A08u;
        // 0x328a0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A10u;
        goto label_328a10;
    }
    ctx->pc = 0x328A08u;
    {
        const bool branch_taken_0x328a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A08u;
        // 0x328a0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a08) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328A10u;
label_328a10:
    // 0x328a10: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x328a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_328a14:
    // 0x328a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328a18:
    // 0x328a18: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x328a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_328a1c:
    // 0x328a1c: 0x40f809  jalr        $v0
label_328a20:
    if (ctx->pc == 0x328A20u) {
        ctx->pc = 0x328A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A1Cu;
        // 0x328a20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A24u;
        goto label_328a24;
    }
    ctx->pc = 0x328A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328A24u);
        ctx->pc = 0x328A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A1Cu;
        // 0x328a20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328A1Cu, 0x328A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328A24u;
label_328a24:
    // 0x328a24: 0x10000448  b           . + 4 + (0x448 << 2)
label_328a28:
    if (ctx->pc == 0x328A28u) {
        ctx->pc = 0x328A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A24u;
        // 0x328a28: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A2Cu;
        goto label_328a2c;
    }
    ctx->pc = 0x328A24u;
    {
        const bool branch_taken_0x328a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A24u;
        // 0x328a28: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a24) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328A2Cu;
label_328a2c:
    // 0x328a2c: 0xc0cdf2e  jal         func_337CB8
label_328a30:
    if (ctx->pc == 0x328A30u) {
        ctx->pc = 0x328A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A2Cu;
        // 0x328a30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A34u;
        goto label_328a34;
    }
    ctx->pc = 0x328A2Cu;
    SET_GPR_U32(ctx, 31, 0x328A34u);
    ctx->pc = 0x328A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A2Cu;
    // 0x328a30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328A2Cu, 0x328A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A34u;
label_328a34:
    // 0x328a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328a38:
    // 0x328a38: 0xc0cdec0  jal         func_337B00
label_328a3c:
    if (ctx->pc == 0x328A3Cu) {
        ctx->pc = 0x328A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A38u;
        // 0x328a3c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A40u;
        goto label_328a40;
    }
    ctx->pc = 0x328A38u;
    SET_GPR_U32(ctx, 31, 0x328A40u);
    ctx->pc = 0x328A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A38u;
    // 0x328a3c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328A38u, 0x328A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A40u;
label_328a40:
    // 0x328a40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328a44:
    // 0x328a44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328a48:
    // 0x328a48: 0xc0cdc76  jal         func_3371D8
label_328a4c:
    if (ctx->pc == 0x328A4Cu) {
        ctx->pc = 0x328A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A48u;
        // 0x328a4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A50u;
        goto label_328a50;
    }
    ctx->pc = 0x328A48u;
    SET_GPR_U32(ctx, 31, 0x328A50u);
    ctx->pc = 0x328A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A48u;
    // 0x328a4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x328A48u, 0x328A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A50u;
label_328a50:
    // 0x328a50: 0x5040043d  beql        $v0, $zero, . + 4 + (0x43D << 2)
label_328a54:
    if (ctx->pc == 0x328A54u) {
        ctx->pc = 0x328A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A50u;
        // 0x328a54: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A58u;
        goto label_328a58;
    }
    ctx->pc = 0x328A50u;
    {
        const bool branch_taken_0x328a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328a50) {
            ctx->pc = 0x328A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328A50u;
            // 0x328a54: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328A58u;
label_328a58:
    // 0x328a58: 0x621000b  bgez        $s1, . + 4 + (0xB << 2)
label_328a5c:
    if (ctx->pc == 0x328A5Cu) {
        ctx->pc = 0x328A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A58u;
        // 0x328a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A60u;
        goto label_328a60;
    }
    ctx->pc = 0x328A58u;
    {
        const bool branch_taken_0x328a58 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x328A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A58u;
        // 0x328a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a58) {
            ctx->pc = 0x328A88u;
            goto label_328a88;
        }
    }
    ctx->pc = 0x328A60u;
label_328a60:
    // 0x328a60: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x328a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_328a64:
    // 0x328a64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x328a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_328a68:
    // 0x328a68: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x328a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_328a6c:
    // 0x328a6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_328a70:
    if (ctx->pc == 0x328A70u) {
        ctx->pc = 0x328A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A6Cu;
        // 0x328a70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A74u;
        goto label_328a74;
    }
    ctx->pc = 0x328A6Cu;
    {
        const bool branch_taken_0x328a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A6Cu;
        // 0x328a70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a6c) {
            ctx->pc = 0x328A8Cu;
            goto label_328a8c;
        }
    }
    ctx->pc = 0x328A74u;
label_328a74:
    // 0x328a74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328a78:
    // 0x328a78: 0xc0cdfdc  jal         func_337F70
label_328a7c:
    if (ctx->pc == 0x328A7Cu) {
        ctx->pc = 0x328A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A78u;
        // 0x328a7c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A80u;
        goto label_328a80;
    }
    ctx->pc = 0x328A78u;
    SET_GPR_U32(ctx, 31, 0x328A80u);
    ctx->pc = 0x328A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A78u;
    // 0x328a7c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x328A78u, 0x328A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A80u;
label_328a80:
    // 0x328a80: 0x10000431  b           . + 4 + (0x431 << 2)
label_328a84:
    if (ctx->pc == 0x328A84u) {
        ctx->pc = 0x328A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A80u;
        // 0x328a84: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A88u;
        goto label_328a88;
    }
    ctx->pc = 0x328A80u;
    {
        const bool branch_taken_0x328a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A80u;
        // 0x328a84: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a80) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328A88u;
label_328a88:
    // 0x328a88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x328a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_328a8c:
    // 0x328a8c: 0xc08db1e  jal         func_236C78
label_328a90:
    if (ctx->pc == 0x328A90u) {
        ctx->pc = 0x328A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A8Cu;
        // 0x328a90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A94u;
        goto label_328a94;
    }
    ctx->pc = 0x328A8Cu;
    SET_GPR_U32(ctx, 31, 0x328A94u);
    ctx->pc = 0x328A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A8Cu;
    // 0x328a90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x328A8Cu, 0x328A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A94u;
label_328a94:
    // 0x328a94: 0x1000042c  b           . + 4 + (0x42C << 2)
label_328a98:
    if (ctx->pc == 0x328A98u) {
        ctx->pc = 0x328A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A94u;
        // 0x328a98: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328A9Cu;
        goto label_328a9c;
    }
    ctx->pc = 0x328A94u;
    {
        const bool branch_taken_0x328a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A94u;
        // 0x328a98: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a94) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328A9Cu;
label_328a9c:
    // 0x328a9c: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x328a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_328aa0:
    // 0x328aa0: 0xc0cdec0  jal         func_337B00
label_328aa4:
    if (ctx->pc == 0x328AA4u) {
        ctx->pc = 0x328AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AA0u;
        // 0x328aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328AA8u;
        goto label_328aa8;
    }
    ctx->pc = 0x328AA0u;
    SET_GPR_U32(ctx, 31, 0x328AA8u);
    ctx->pc = 0x328AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AA0u;
    // 0x328aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328AA0u, 0x328AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AA8u;
label_328aa8:
    // 0x328aa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328aac:
    // 0x328aac: 0xc0cdec0  jal         func_337B00
label_328ab0:
    if (ctx->pc == 0x328AB0u) {
        ctx->pc = 0x328AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AACu;
        // 0x328ab0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328AB4u;
        goto label_328ab4;
    }
    ctx->pc = 0x328AACu;
    SET_GPR_U32(ctx, 31, 0x328AB4u);
    ctx->pc = 0x328AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AACu;
    // 0x328ab0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328AACu, 0x328AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AB4u;
label_328ab4:
    // 0x328ab4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328ab8:
    // 0x328ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328abc:
    // 0x328abc: 0xc0cdc76  jal         func_3371D8
label_328ac0:
    if (ctx->pc == 0x328AC0u) {
        ctx->pc = 0x328AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328ABCu;
        // 0x328ac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328AC4u;
        goto label_328ac4;
    }
    ctx->pc = 0x328ABCu;
    SET_GPR_U32(ctx, 31, 0x328AC4u);
    ctx->pc = 0x328AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328ABCu;
    // 0x328ac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x328ABCu, 0x328AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AC4u;
label_328ac4:
    // 0x328ac4: 0x1040041f  beqz        $v0, . + 4 + (0x41F << 2)
label_328ac8:
    if (ctx->pc == 0x328AC8u) {
        ctx->pc = 0x328AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AC4u;
        // 0x328ac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328ACCu;
        goto label_328acc;
    }
    ctx->pc = 0x328AC4u;
    {
        const bool branch_taken_0x328ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AC4u;
        // 0x328ac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328ac4) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328ACCu;
label_328acc:
    // 0x328acc: 0xc0cdc64  jal         func_337190
label_328ad0:
    if (ctx->pc == 0x328AD0u) {
        ctx->pc = 0x328AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328ACCu;
        // 0x328ad0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328AD4u;
        goto label_328ad4;
    }
    ctx->pc = 0x328ACCu;
    SET_GPR_U32(ctx, 31, 0x328AD4u);
    ctx->pc = 0x328AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328ACCu;
    // 0x328ad0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337190u, 0x328ACCu, 0x328AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AD4u;
label_328ad4:
    // 0x328ad4: 0x5040041c  beql        $v0, $zero, . + 4 + (0x41C << 2)
label_328ad8:
    if (ctx->pc == 0x328AD8u) {
        ctx->pc = 0x328AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AD4u;
        // 0x328ad8: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328ADCu;
        goto label_328adc;
    }
    ctx->pc = 0x328AD4u;
    {
        const bool branch_taken_0x328ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328ad4) {
            ctx->pc = 0x328AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328AD4u;
            // 0x328ad8: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328ADCu;
label_328adc:
    // 0x328adc: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x328adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_328ae0:
    // 0x328ae0: 0xc0ac91c  jal         func_2B2470
label_328ae4:
    if (ctx->pc == 0x328AE4u) {
        ctx->pc = 0x328AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AE0u;
        // 0x328ae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328AE8u;
        goto label_328ae8;
    }
    ctx->pc = 0x328AE0u;
    SET_GPR_U32(ctx, 31, 0x328AE8u);
    ctx->pc = 0x328AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AE0u;
    // 0x328ae4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2470u, 0x328AE0u, 0x328AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AE8u;
label_328ae8:
    // 0x328ae8: 0x10000416  b           . + 4 + (0x416 << 2)
label_328aec:
    if (ctx->pc == 0x328AECu) {
        ctx->pc = 0x328AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AE8u;
        // 0x328aec: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328AF0u;
        goto label_328af0;
    }
    ctx->pc = 0x328AE8u;
    {
        const bool branch_taken_0x328ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AE8u;
        // 0x328aec: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328ae8) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328AF0u;
label_328af0:
    // 0x328af0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328af4:
    // 0x328af4: 0xc0cdf2e  jal         func_337CB8
label_328af8:
    if (ctx->pc == 0x328AF8u) {
        ctx->pc = 0x328AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AF4u;
        // 0x328af8: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328AFCu;
        goto label_328afc;
    }
    ctx->pc = 0x328AF4u;
    SET_GPR_U32(ctx, 31, 0x328AFCu);
    ctx->pc = 0x328AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AF4u;
    // 0x328af8: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328AF4u, 0x328AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328AFCu;
label_328afc:
    // 0x328afc: 0xc0cdf52  jal         func_337D48
label_328b00:
    if (ctx->pc == 0x328B00u) {
        ctx->pc = 0x328B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AFCu;
        // 0x328b00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328B04u;
        goto label_328b04;
    }
    ctx->pc = 0x328AFCu;
    SET_GPR_U32(ctx, 31, 0x328B04u);
    ctx->pc = 0x328B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328AFCu;
    // 0x328b00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x328AFCu, 0x328B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B04u;
label_328b04:
    // 0x328b04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328b08:
    // 0x328b08: 0xc0cdec0  jal         func_337B00
label_328b0c:
    if (ctx->pc == 0x328B0Cu) {
        ctx->pc = 0x328B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B08u;
        // 0x328b0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328B10u;
        goto label_328b10;
    }
    ctx->pc = 0x328B08u;
    SET_GPR_U32(ctx, 31, 0x328B10u);
    ctx->pc = 0x328B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B08u;
    // 0x328b0c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328B08u, 0x328B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B10u;
label_328b10:
    // 0x328b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328b14:
    // 0x328b14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328b18:
    // 0x328b18: 0xc0cdc76  jal         func_3371D8
label_328b1c:
    if (ctx->pc == 0x328B1Cu) {
        ctx->pc = 0x328B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B18u;
        // 0x328b1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328B20u;
        goto label_328b20;
    }
    ctx->pc = 0x328B18u;
    SET_GPR_U32(ctx, 31, 0x328B20u);
    ctx->pc = 0x328B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B18u;
    // 0x328b1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x328B18u, 0x328B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B20u;
label_328b20:
    // 0x328b20: 0x50400408  beql        $v0, $zero, . + 4 + (0x408 << 2)
label_328b24:
    if (ctx->pc == 0x328B24u) {
        ctx->pc = 0x328B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B20u;
        // 0x328b24: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328B28u;
        goto label_328b28;
    }
    ctx->pc = 0x328B20u;
    {
        const bool branch_taken_0x328b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328b20) {
            ctx->pc = 0x328B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328B20u;
            // 0x328b24: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328B28u;
label_328b28:
    // 0x328b28: 0x8e110224  lw          $s1, 0x224($s0)
    ctx->pc = 0x328b28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_328b2c:
    // 0x328b2c: 0x12200154  beqz        $s1, . + 4 + (0x154 << 2)
label_328b30:
    if (ctx->pc == 0x328B30u) {
        ctx->pc = 0x328B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B2Cu;
        // 0x328b30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328B34u;
        goto label_328b34;
    }
    ctx->pc = 0x328B2Cu;
    {
        const bool branch_taken_0x328b2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x328B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B2Cu;
        // 0x328b30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b2c) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x328B34u;
label_328b34:
    // 0x328b34: 0x0  nop
    ctx->pc = 0x328b34u;
    // NOP
label_328b38:
    // 0x328b38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x328b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_328b3c:
    // 0x328b3c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x328b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_328b40:
    // 0x328b40: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
label_328b44:
    if (ctx->pc == 0x328B44u) {
        ctx->pc = 0x328B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B40u;
        // 0x328b44: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328B48u;
        goto label_328b48;
    }
    ctx->pc = 0x328B40u;
    {
        const bool branch_taken_0x328b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B40u;
        // 0x328b44: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b40) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x328B48u;
label_328b48:
    // 0x328b48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x328b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_328b4c:
    // 0x328b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_328b50:
    // 0x328b50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x328b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_328b54:
    // 0x328b54: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_328b58:
    if (ctx->pc == 0x328B58u) {
        ctx->pc = 0x328B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B54u;
        // 0x328b58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328B5Cu;
        goto label_328b5c;
    }
    ctx->pc = 0x328B54u;
    {
        const bool branch_taken_0x328b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328b54) {
            ctx->pc = 0x328B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328B54u;
            // 0x328b58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328b38;
        }
    }
    ctx->pc = 0x328B5Cu;
label_328b5c:
    // 0x328b5c: 0x8c4400f8  lw          $a0, 0xF8($v0)
    ctx->pc = 0x328b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
label_328b60:
    // 0x328b60: 0xc0efb95  jal         func_3BEE54
label_328b64:
    if (ctx->pc == 0x328B64u) {
        ctx->pc = 0x328B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B60u;
        // 0x328b64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328B68u;
        goto label_328b68;
    }
    ctx->pc = 0x328B60u;
    SET_GPR_U32(ctx, 31, 0x328B68u);
    ctx->pc = 0x328B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B60u;
    // 0x328b64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x328B60u, 0x328B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B68u;
label_328b68:
    // 0x328b68: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_328b6c:
    if (ctx->pc == 0x328B6Cu) {
        ctx->pc = 0x328B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B68u;
        // 0x328b6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328B70u;
        goto label_328b70;
    }
    ctx->pc = 0x328B68u;
    {
        const bool branch_taken_0x328b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328b68) {
            ctx->pc = 0x328B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328B68u;
            // 0x328b6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328b38;
        }
    }
    ctx->pc = 0x328B70u;
label_328b70:
    // 0x328b70: 0x10000143  b           . + 4 + (0x143 << 2)
label_328b74:
    if (ctx->pc == 0x328B74u) {
        ctx->pc = 0x328B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B70u;
        // 0x328b74: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328B78u;
        goto label_328b78;
    }
    ctx->pc = 0x328B70u;
    {
        const bool branch_taken_0x328b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B70u;
        // 0x328b74: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b70) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x328B78u;
label_328b78:
    // 0x328b78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328b7c:
    // 0x328b7c: 0xc0cdf2e  jal         func_337CB8
label_328b80:
    if (ctx->pc == 0x328B80u) {
        ctx->pc = 0x328B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B7Cu;
        // 0x328b80: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328B84u;
        goto label_328b84;
    }
    ctx->pc = 0x328B7Cu;
    SET_GPR_U32(ctx, 31, 0x328B84u);
    ctx->pc = 0x328B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B7Cu;
    // 0x328b80: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328B7Cu, 0x328B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B84u;
label_328b84:
    // 0x328b84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328b88:
    // 0x328b88: 0xc0cdec0  jal         func_337B00
label_328b8c:
    if (ctx->pc == 0x328B8Cu) {
        ctx->pc = 0x328B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B88u;
        // 0x328b8c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328B90u;
        goto label_328b90;
    }
    ctx->pc = 0x328B88u;
    SET_GPR_U32(ctx, 31, 0x328B90u);
    ctx->pc = 0x328B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B88u;
    // 0x328b8c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328B88u, 0x328B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B90u;
label_328b90:
    // 0x328b90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328b94:
    // 0x328b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328b98:
    // 0x328b98: 0xc0cdc76  jal         func_3371D8
label_328b9c:
    if (ctx->pc == 0x328B9Cu) {
        ctx->pc = 0x328B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B98u;
        // 0x328b9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328BA0u;
        goto label_328ba0;
    }
    ctx->pc = 0x328B98u;
    SET_GPR_U32(ctx, 31, 0x328BA0u);
    ctx->pc = 0x328B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B98u;
    // 0x328b9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x328B98u, 0x328BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BA0u;
label_328ba0:
    // 0x328ba0: 0x504003e8  beql        $v0, $zero, . + 4 + (0x3E8 << 2)
label_328ba4:
    if (ctx->pc == 0x328BA4u) {
        ctx->pc = 0x328BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BA0u;
        // 0x328ba4: 0xae54003c  sw          $s4, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328BA8u;
        goto label_328ba8;
    }
    ctx->pc = 0x328BA0u;
    {
        const bool branch_taken_0x328ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328ba0) {
            ctx->pc = 0x328BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328BA0u;
            // 0x328ba4: 0xae54003c  sw          $s4, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328BA8u;
label_328ba8:
    // 0x328ba8: 0x8e110224  lw          $s1, 0x224($s0)
    ctx->pc = 0x328ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_328bac:
    // 0x328bac: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_328bb0:
    if (ctx->pc == 0x328BB0u) {
        ctx->pc = 0x328BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BACu;
        // 0x328bb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328BB4u;
        goto label_328bb4;
    }
    ctx->pc = 0x328BACu;
    {
        const bool branch_taken_0x328bac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x328BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BACu;
        // 0x328bb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328bac) {
            ctx->pc = 0x328C04u;
            goto label_328c04;
        }
    }
    ctx->pc = 0x328BB4u;
label_328bb4:
    // 0x328bb4: 0xc097c12  jal         func_25F048
label_328bb8:
    if (ctx->pc == 0x328BB8u) {
        ctx->pc = 0x328BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BB4u;
        // 0x328bb8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328BBCu;
        goto label_328bbc;
    }
    ctx->pc = 0x328BB4u;
    SET_GPR_U32(ctx, 31, 0x328BBCu);
    ctx->pc = 0x328BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328BB4u;
    // 0x328bb8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F048u, 0x328BB4u, 0x328BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BBCu;
label_328bbc:
    // 0x328bbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x328bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328bc0:
    // 0x328bc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x328bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_328bc4:
    // 0x328bc4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x328bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_328bc8:
    // 0x328bc8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_328bcc:
    if (ctx->pc == 0x328BCCu) {
        ctx->pc = 0x328BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BC8u;
        // 0x328bcc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328BD0u;
        goto label_328bd0;
    }
    ctx->pc = 0x328BC8u;
    {
        const bool branch_taken_0x328bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BC8u;
        // 0x328bcc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328bc8) {
            ctx->pc = 0x328C04u;
            goto label_328c04;
        }
    }
    ctx->pc = 0x328BD0u;
label_328bd0:
    // 0x328bd0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x328bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_328bd4:
    // 0x328bd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_328bd8:
    // 0x328bd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x328bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_328bdc:
    // 0x328bdc: 0x5080fff8  beql        $a0, $zero, . + 4 + (-0x8 << 2)
label_328be0:
    if (ctx->pc == 0x328BE0u) {
        ctx->pc = 0x328BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BDCu;
        // 0x328be0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328BE4u;
        goto label_328be4;
    }
    ctx->pc = 0x328BDCu;
    {
        const bool branch_taken_0x328bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328bdc) {
            ctx->pc = 0x328BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328BDCu;
            // 0x328be0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328bc0;
        }
    }
    ctx->pc = 0x328BE4u;
label_328be4:
    // 0x328be4: 0xc083bae  jal         func_20EEB8
label_328be8:
    if (ctx->pc == 0x328BE8u) {
        ctx->pc = 0x328BECu;
        goto label_328bec;
    }
    ctx->pc = 0x328BE4u;
    SET_GPR_U32(ctx, 31, 0x328BECu);
    ctx->pc = 0x20EEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEB8u, 0x328BE4u, 0x328BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BECu;
label_328bec:
    // 0x328bec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x328becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_328bf0:
    // 0x328bf0: 0xc0efb95  jal         func_3BEE54
label_328bf4:
    if (ctx->pc == 0x328BF4u) {
        ctx->pc = 0x328BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BF0u;
        // 0x328bf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328BF8u;
        goto label_328bf8;
    }
    ctx->pc = 0x328BF0u;
    SET_GPR_U32(ctx, 31, 0x328BF8u);
    ctx->pc = 0x328BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328BF0u;
    // 0x328bf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x328BF0u, 0x328BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BF8u;
label_328bf8:
    // 0x328bf8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
label_328bfc:
    if (ctx->pc == 0x328BFCu) {
        ctx->pc = 0x328BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BF8u;
        // 0x328bfc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C00u;
        goto label_328c00;
    }
    ctx->pc = 0x328BF8u;
    {
        const bool branch_taken_0x328bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328bf8) {
            ctx->pc = 0x328BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328BF8u;
            // 0x328bfc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328bc0;
        }
    }
    ctx->pc = 0x328C00u;
label_328c00:
    // 0x328c00: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x328c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328c04:
    // 0x328c04: 0x100003cf  b           . + 4 + (0x3CF << 2)
label_328c08:
    if (ctx->pc == 0x328C08u) {
        ctx->pc = 0x328C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C04u;
        // 0x328c08: 0xae54003c  sw          $s4, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C0Cu;
        goto label_328c0c;
    }
    ctx->pc = 0x328C04u;
    {
        const bool branch_taken_0x328c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C04u;
        // 0x328c08: 0xae54003c  sw          $s4, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c04) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328C0Cu;
label_328c0c:
    // 0x328c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328c10:
    // 0x328c10: 0xc0cdf2e  jal         func_337CB8
label_328c14:
    if (ctx->pc == 0x328C14u) {
        ctx->pc = 0x328C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C10u;
        // 0x328c14: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C18u;
        goto label_328c18;
    }
    ctx->pc = 0x328C10u;
    SET_GPR_U32(ctx, 31, 0x328C18u);
    ctx->pc = 0x328C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C10u;
    // 0x328c14: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328C10u, 0x328C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C18u;
label_328c18:
    // 0x328c18: 0xc0cdf52  jal         func_337D48
label_328c1c:
    if (ctx->pc == 0x328C1Cu) {
        ctx->pc = 0x328C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C18u;
        // 0x328c1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C20u;
        goto label_328c20;
    }
    ctx->pc = 0x328C18u;
    SET_GPR_U32(ctx, 31, 0x328C20u);
    ctx->pc = 0x328C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C18u;
    // 0x328c1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x328C18u, 0x328C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C20u;
label_328c20:
    // 0x328c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328c24:
    // 0x328c24: 0xc0cdec0  jal         func_337B00
label_328c28:
    if (ctx->pc == 0x328C28u) {
        ctx->pc = 0x328C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C24u;
        // 0x328c28: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C2Cu;
        goto label_328c2c;
    }
    ctx->pc = 0x328C24u;
    SET_GPR_U32(ctx, 31, 0x328C2Cu);
    ctx->pc = 0x328C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C24u;
    // 0x328c28: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328C24u, 0x328C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C2Cu;
label_328c2c:
    // 0x328c2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328c30:
    // 0x328c30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328c34:
    // 0x328c34: 0xc0cdc76  jal         func_3371D8
label_328c38:
    if (ctx->pc == 0x328C38u) {
        ctx->pc = 0x328C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C34u;
        // 0x328c38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C3Cu;
        goto label_328c3c;
    }
    ctx->pc = 0x328C34u;
    SET_GPR_U32(ctx, 31, 0x328C3Cu);
    ctx->pc = 0x328C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C34u;
    // 0x328c38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x328C34u, 0x328C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C3Cu;
label_328c3c:
    // 0x328c3c: 0x504003c1  beql        $v0, $zero, . + 4 + (0x3C1 << 2)
label_328c40:
    if (ctx->pc == 0x328C40u) {
        ctx->pc = 0x328C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C3Cu;
        // 0x328c40: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C44u;
        goto label_328c44;
    }
    ctx->pc = 0x328C3Cu;
    {
        const bool branch_taken_0x328c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c3c) {
            ctx->pc = 0x328C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328C3Cu;
            // 0x328c40: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328C44u;
label_328c44:
    // 0x328c44: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x328c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_328c48:
    // 0x328c48: 0x508003be  beql        $a0, $zero, . + 4 + (0x3BE << 2)
label_328c4c:
    if (ctx->pc == 0x328C4Cu) {
        ctx->pc = 0x328C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C48u;
        // 0x328c4c: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C50u;
        goto label_328c50;
    }
    ctx->pc = 0x328C48u;
    {
        const bool branch_taken_0x328c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c48) {
            ctx->pc = 0x328C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328C48u;
            // 0x328c4c: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328C50u;
label_328c50:
    // 0x328c50: 0xc0ac970  jal         func_2B25C0
label_328c54:
    if (ctx->pc == 0x328C54u) {
        ctx->pc = 0x328C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C50u;
        // 0x328c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C58u;
        goto label_328c58;
    }
    ctx->pc = 0x328C50u;
    SET_GPR_U32(ctx, 31, 0x328C58u);
    ctx->pc = 0x328C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C50u;
    // 0x328c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B25C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B25C0u, 0x328C50u, 0x328C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C58u;
label_328c58:
    // 0x328c58: 0x10000109  b           . + 4 + (0x109 << 2)
label_328c5c:
    if (ctx->pc == 0x328C5Cu) {
        ctx->pc = 0x328C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C58u;
        // 0x328c5c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C60u;
        goto label_328c60;
    }
    ctx->pc = 0x328C58u;
    {
        const bool branch_taken_0x328c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C58u;
        // 0x328c5c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c58) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x328C60u;
label_328c60:
    // 0x328c60: 0xc0cdec0  jal         func_337B00
label_328c64:
    if (ctx->pc == 0x328C64u) {
        ctx->pc = 0x328C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C60u;
        // 0x328c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C68u;
        goto label_328c68;
    }
    ctx->pc = 0x328C60u;
    SET_GPR_U32(ctx, 31, 0x328C68u);
    ctx->pc = 0x328C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C60u;
    // 0x328c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328C60u, 0x328C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C68u;
label_328c68:
    // 0x328c68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328c6c:
    // 0x328c6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328c70:
    // 0x328c70: 0xc0cdbde  jal         func_336F78
label_328c74:
    if (ctx->pc == 0x328C74u) {
        ctx->pc = 0x328C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C70u;
        // 0x328c74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C78u;
        goto label_328c78;
    }
    ctx->pc = 0x328C70u;
    SET_GPR_U32(ctx, 31, 0x328C78u);
    ctx->pc = 0x328C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C70u;
    // 0x328c74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x328C70u, 0x328C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C78u;
label_328c78:
    // 0x328c78: 0x504003b3  beql        $v0, $zero, . + 4 + (0x3B3 << 2)
label_328c7c:
    if (ctx->pc == 0x328C7Cu) {
        ctx->pc = 0x328C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C78u;
        // 0x328c7c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C80u;
        goto label_328c80;
    }
    ctx->pc = 0x328C78u;
    {
        const bool branch_taken_0x328c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328c78) {
            ctx->pc = 0x328C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328C78u;
            // 0x328c7c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328C80u;
label_328c80:
    // 0x328c80: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x328c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_328c84:
    // 0x328c84: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x328c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_328c88:
    // 0x328c88: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x328c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_328c8c:
    // 0x328c8c: 0x40f809  jalr        $v0
label_328c90:
    if (ctx->pc == 0x328C90u) {
        ctx->pc = 0x328C94u;
        goto label_328c94;
    }
    ctx->pc = 0x328C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328C94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328C8Cu, 0x328C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328C94u;
label_328c94:
    // 0x328c94: 0x100003ac  b           . + 4 + (0x3AC << 2)
label_328c98:
    if (ctx->pc == 0x328C98u) {
        ctx->pc = 0x328C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C94u;
        // 0x328c98: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C9Cu;
        goto label_328c9c;
    }
    ctx->pc = 0x328C94u;
    {
        const bool branch_taken_0x328c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C94u;
        // 0x328c98: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c94) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328C9Cu;
label_328c9c:
    // 0x328c9c: 0xc0cdec0  jal         func_337B00
label_328ca0:
    if (ctx->pc == 0x328CA0u) {
        ctx->pc = 0x328CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C9Cu;
        // 0x328ca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328CA4u;
        goto label_328ca4;
    }
    ctx->pc = 0x328C9Cu;
    SET_GPR_U32(ctx, 31, 0x328CA4u);
    ctx->pc = 0x328CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C9Cu;
    // 0x328ca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328C9Cu, 0x328CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CA4u;
label_328ca4:
    // 0x328ca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328ca8:
    // 0x328ca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328cac:
    // 0x328cac: 0xc0cdc76  jal         func_3371D8
label_328cb0:
    if (ctx->pc == 0x328CB0u) {
        ctx->pc = 0x328CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CACu;
        // 0x328cb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328CB4u;
        goto label_328cb4;
    }
    ctx->pc = 0x328CACu;
    SET_GPR_U32(ctx, 31, 0x328CB4u);
    ctx->pc = 0x328CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CACu;
    // 0x328cb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x328CACu, 0x328CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CB4u;
label_328cb4:
    // 0x328cb4: 0x504003a4  beql        $v0, $zero, . + 4 + (0x3A4 << 2)
label_328cb8:
    if (ctx->pc == 0x328CB8u) {
        ctx->pc = 0x328CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CB4u;
        // 0x328cb8: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328CBCu;
        goto label_328cbc;
    }
    ctx->pc = 0x328CB4u;
    {
        const bool branch_taken_0x328cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328cb4) {
            ctx->pc = 0x328CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328CB4u;
            // 0x328cb8: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328CBCu;
label_328cbc:
    // 0x328cbc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x328cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_328cc0:
    // 0x328cc0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x328cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_328cc4:
    // 0x328cc4: 0x40f809  jalr        $v0
label_328cc8:
    if (ctx->pc == 0x328CC8u) {
        ctx->pc = 0x328CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CC4u;
        // 0x328cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328CCCu;
        goto label_328ccc;
    }
    ctx->pc = 0x328CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328CCCu);
        ctx->pc = 0x328CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CC4u;
        // 0x328cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328CC4u, 0x328CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328CCCu;
label_328ccc:
    // 0x328ccc: 0xc0734a6  jal         func_1CD298
label_328cd0:
    if (ctx->pc == 0x328CD0u) {
        ctx->pc = 0x328CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CCCu;
        // 0x328cd0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328CD4u;
        goto label_328cd4;
    }
    ctx->pc = 0x328CCCu;
    SET_GPR_U32(ctx, 31, 0x328CD4u);
    ctx->pc = 0x328CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CCCu;
    // 0x328cd0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD298u, 0x328CCCu, 0x328CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CD4u;
label_328cd4:
    // 0x328cd4: 0x1000039b  b           . + 4 + (0x39B << 2)
label_328cd8:
    if (ctx->pc == 0x328CD8u) {
        ctx->pc = 0x328CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CD4u;
        // 0x328cd8: 0xe640003c  swc1        $f0, 0x3C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x328CDCu;
        goto label_328cdc;
    }
    ctx->pc = 0x328CD4u;
    {
        const bool branch_taken_0x328cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CD4u;
        // 0x328cd8: 0xe640003c  swc1        $f0, 0x3C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x328cd4) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328CDCu;
label_328cdc:
    // 0x328cdc: 0xc0cdf2e  jal         func_337CB8
label_328ce0:
    if (ctx->pc == 0x328CE0u) {
        ctx->pc = 0x328CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CDCu;
        // 0x328ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328CE4u;
        goto label_328ce4;
    }
    ctx->pc = 0x328CDCu;
    SET_GPR_U32(ctx, 31, 0x328CE4u);
    ctx->pc = 0x328CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CDCu;
    // 0x328ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328CDCu, 0x328CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CE4u;
label_328ce4:
    // 0x328ce4: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x328ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_328ce8:
    // 0x328ce8: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x328ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_328cec:
    // 0x328cec: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x328cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_328cf0:
    // 0x328cf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328cf4:
    // 0x328cf4: 0xc0cdec0  jal         func_337B00
label_328cf8:
    if (ctx->pc == 0x328CF8u) {
        ctx->pc = 0x328CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CF4u;
        // 0x328cf8: 0xbba30000  swr         $v1, 0x0($sp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x328CFCu;
        goto label_328cfc;
    }
    ctx->pc = 0x328CF4u;
    SET_GPR_U32(ctx, 31, 0x328CFCu);
    ctx->pc = 0x328CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CF4u;
    // 0x328cf8: 0xbba30000  swr         $v1, 0x0($sp) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328CF4u, 0x328CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CFCu;
label_328cfc:
    // 0x328cfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328d00:
    // 0x328d00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328d04:
    // 0x328d04: 0xc0cdcac  jal         func_3372B0
label_328d08:
    if (ctx->pc == 0x328D08u) {
        ctx->pc = 0x328D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D04u;
        // 0x328d08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328D0Cu;
        goto label_328d0c;
    }
    ctx->pc = 0x328D04u;
    SET_GPR_U32(ctx, 31, 0x328D0Cu);
    ctx->pc = 0x328D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D04u;
    // 0x328d08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3372B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3372B0u, 0x328D04u, 0x328D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D0Cu;
label_328d0c:
    // 0x328d0c: 0x1040038d  beqz        $v0, . + 4 + (0x38D << 2)
label_328d10:
    if (ctx->pc == 0x328D10u) {
        ctx->pc = 0x328D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D0Cu;
        // 0x328d10: 0x93a60003  lbu         $a2, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328D14u;
        goto label_328d14;
    }
    ctx->pc = 0x328D0Cu;
    {
        const bool branch_taken_0x328d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D0Cu;
        // 0x328d10: 0x93a60003  lbu         $a2, 0x3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328d0c) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328D14u;
label_328d14:
    // 0x328d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328d18:
    // 0x328d18: 0x93a70000  lbu         $a3, 0x0($sp)
    ctx->pc = 0x328d18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_328d1c:
    // 0x328d1c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x328d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_328d20:
    // 0x328d20: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x328d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_328d24:
    // 0x328d24: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x328d24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_328d28:
    // 0x328d28: 0x0  nop
    ctx->pc = 0x328d28u;
    // NOP
label_328d2c:
    // 0x328d2c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x328d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_328d30:
    // 0x328d30: 0x93a30002  lbu         $v1, 0x2($sp)
    ctx->pc = 0x328d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_328d34:
    // 0x328d34: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x328d34u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_328d38:
    // 0x328d38: 0x0  nop
    ctx->pc = 0x328d38u;
    // NOP
label_328d3c:
    // 0x328d3c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x328d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_328d40:
    // 0x328d40: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x328d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_328d44:
    // 0x328d44: 0x0  nop
    ctx->pc = 0x328d44u;
    // NOP
label_328d48:
    // 0x328d48: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x328d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_328d4c:
    // 0x328d4c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x328d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_328d50:
    // 0x328d50: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x328d50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_328d54:
    // 0x328d54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x328d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_328d58:
    // 0x328d58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x328d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_328d5c:
    // 0x328d5c: 0x0  nop
    ctx->pc = 0x328d5cu;
    // NOP
label_328d60:
    // 0x328d60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x328d60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_328d64:
    // 0x328d64: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x328d64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_328d68:
    // 0x328d68: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x328d68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_328d6c:
    // 0x328d6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328d6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_328d70:
    // 0x328d70: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x328d70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_328d74:
    // 0x328d74: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x328d74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_328d78:
    // 0x328d78: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x328d78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_328d7c:
    // 0x328d7c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x328d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_328d80:
    // 0x328d80: 0xc099c44  jal         func_267110
label_328d84:
    if (ctx->pc == 0x328D84u) {
        ctx->pc = 0x328D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D80u;
        // 0x328d84: 0xe7a40014  swc1        $f4, 0x14($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x328D88u;
        goto label_328d88;
    }
    ctx->pc = 0x328D80u;
    SET_GPR_U32(ctx, 31, 0x328D88u);
    ctx->pc = 0x328D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D80u;
    // 0x328d84: 0xe7a40014  swc1        $f4, 0x14($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x267110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267110u, 0x328D80u, 0x328D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D88u;
label_328d88:
    // 0x328d88: 0x1000036f  b           . + 4 + (0x36F << 2)
label_328d8c:
    if (ctx->pc == 0x328D8Cu) {
        ctx->pc = 0x328D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D88u;
        // 0x328d8c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328D90u;
        goto label_328d90;
    }
    ctx->pc = 0x328D88u;
    {
        const bool branch_taken_0x328d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D88u;
        // 0x328d8c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328d88) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328D90u;
label_328d90:
    // 0x328d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328d94:
    // 0x328d94: 0xc0cdf2e  jal         func_337CB8
label_328d98:
    if (ctx->pc == 0x328D98u) {
        ctx->pc = 0x328D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D94u;
        // 0x328d98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328D9Cu;
        goto label_328d9c;
    }
    ctx->pc = 0x328D94u;
    SET_GPR_U32(ctx, 31, 0x328D9Cu);
    ctx->pc = 0x328D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D94u;
    // 0x328d98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328D94u, 0x328D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D9Cu;
label_328d9c:
    // 0x328d9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x328d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_328da0:
    // 0x328da0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x328da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328da4:
    // 0x328da4: 0xc0cdee8  jal         func_337BA0
label_328da8:
    if (ctx->pc == 0x328DA8u) {
        ctx->pc = 0x328DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DA4u;
        // 0x328da8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328DACu;
        goto label_328dac;
    }
    ctx->pc = 0x328DA4u;
    SET_GPR_U32(ctx, 31, 0x328DACu);
    ctx->pc = 0x328DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DA4u;
    // 0x328da8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x328DA4u, 0x328DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DACu;
label_328dac:
    // 0x328dac: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x328dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_328db0:
    // 0x328db0: 0xc085d2a  jal         func_2174A8
label_328db4:
    if (ctx->pc == 0x328DB4u) {
        ctx->pc = 0x328DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DB0u;
        // 0x328db4: 0x24844880  addiu       $a0, $a0, 0x4880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328DB8u;
        goto label_328db8;
    }
    ctx->pc = 0x328DB0u;
    SET_GPR_U32(ctx, 31, 0x328DB8u);
    ctx->pc = 0x328DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DB0u;
    // 0x328db4: 0x24844880  addiu       $a0, $a0, 0x4880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x328DB0u, 0x328DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DB8u;
label_328db8:
    // 0x328db8: 0x50400362  beql        $v0, $zero, . + 4 + (0x362 << 2)
label_328dbc:
    if (ctx->pc == 0x328DBCu) {
        ctx->pc = 0x328DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DB8u;
        // 0x328dbc: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328DC0u;
        goto label_328dc0;
    }
    ctx->pc = 0x328DB8u;
    {
        const bool branch_taken_0x328db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328db8) {
            ctx->pc = 0x328DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328DB8u;
            // 0x328dbc: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328DC0u;
label_328dc0:
    // 0x328dc0: 0xc083072  jal         func_20C1C8
label_328dc4:
    if (ctx->pc == 0x328DC4u) {
        ctx->pc = 0x328DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DC0u;
        // 0x328dc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328DC8u;
        goto label_328dc8;
    }
    ctx->pc = 0x328DC0u;
    SET_GPR_U32(ctx, 31, 0x328DC8u);
    ctx->pc = 0x328DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DC0u;
    // 0x328dc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x328DC0u, 0x328DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DC8u;
label_328dc8:
    // 0x328dc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328dcc:
    // 0x328dcc: 0x1200fcb9  beqz        $s0, . + 4 + (-0x347 << 2)
label_328dd0:
    if (ctx->pc == 0x328DD0u) {
        ctx->pc = 0x328DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DCCu;
        // 0x328dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328DD4u;
        goto label_328dd4;
    }
    ctx->pc = 0x328DCCu;
    {
        const bool branch_taken_0x328dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x328DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DCCu;
        // 0x328dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328dcc) {
            ctx->pc = 0x3280B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3280b4;
        }
    }
    ctx->pc = 0x328DD4u;
label_328dd4:
    // 0x328dd4: 0xc099c02  jal         func_267008
label_328dd8:
    if (ctx->pc == 0x328DD8u) {
        ctx->pc = 0x328DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DD4u;
        // 0x328dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328DDCu;
        goto label_328ddc;
    }
    ctx->pc = 0x328DD4u;
    SET_GPR_U32(ctx, 31, 0x328DDCu);
    ctx->pc = 0x328DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328DD4u;
    // 0x328dd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267008u, 0x328DD4u, 0x328DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328DDCu;
label_328ddc:
    // 0x328ddc: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
label_328de0:
    if (ctx->pc == 0x328DE0u) {
        ctx->pc = 0x328DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DDCu;
        // 0x328de0: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328DE4u;
        goto label_328de4;
    }
    ctx->pc = 0x328DDCu;
    {
        const bool branch_taken_0x328ddc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x328ddc) {
            ctx->pc = 0x328DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328DDCu;
            // 0x328de0: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328E00u;
            goto label_328e00;
        }
    }
    ctx->pc = 0x328DE4u;
label_328de4:
    // 0x328de4: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x328de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_328de8:
    // 0x328de8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x328de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_328dec:
    // 0x328dec: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x328decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_328df0:
    // 0x328df0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x328df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_328df4:
    // 0x328df4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x328df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_328df8:
    // 0x328df8: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x328df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_328dfc:
    // 0x328dfc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x328dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_328e00:
    // 0x328e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328e04:
    // 0x328e04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x328e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_328e08:
    // 0x328e08: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x328e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_328e0c:
    // 0x328e0c: 0x40f809  jalr        $v0
label_328e10:
    if (ctx->pc == 0x328E10u) {
        ctx->pc = 0x328E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E0Cu;
        // 0x328e10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E14u;
        goto label_328e14;
    }
    ctx->pc = 0x328E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328E14u);
        ctx->pc = 0x328E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E0Cu;
        // 0x328e10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328E0Cu, 0x328E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328E14u;
label_328e14:
    // 0x328e14: 0x1000034b  b           . + 4 + (0x34B << 2)
label_328e18:
    if (ctx->pc == 0x328E18u) {
        ctx->pc = 0x328E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E14u;
        // 0x328e18: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E1Cu;
        goto label_328e1c;
    }
    ctx->pc = 0x328E14u;
    {
        const bool branch_taken_0x328e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E14u;
        // 0x328e18: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e14) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328E1Cu;
label_328e1c:
    // 0x328e1c: 0xc0cdec0  jal         func_337B00
label_328e20:
    if (ctx->pc == 0x328E20u) {
        ctx->pc = 0x328E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E1Cu;
        // 0x328e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E24u;
        goto label_328e24;
    }
    ctx->pc = 0x328E1Cu;
    SET_GPR_U32(ctx, 31, 0x328E24u);
    ctx->pc = 0x328E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E1Cu;
    // 0x328e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328E1Cu, 0x328E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E24u;
label_328e24:
    // 0x328e24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328e28:
    // 0x328e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328e2c:
    // 0x328e2c: 0xc0cdcac  jal         func_3372B0
label_328e30:
    if (ctx->pc == 0x328E30u) {
        ctx->pc = 0x328E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E2Cu;
        // 0x328e30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E34u;
        goto label_328e34;
    }
    ctx->pc = 0x328E2Cu;
    SET_GPR_U32(ctx, 31, 0x328E34u);
    ctx->pc = 0x328E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E2Cu;
    // 0x328e30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3372B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3372B0u, 0x328E2Cu, 0x328E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E34u;
label_328e34:
    // 0x328e34: 0x50400344  beql        $v0, $zero, . + 4 + (0x344 << 2)
label_328e38:
    if (ctx->pc == 0x328E38u) {
        ctx->pc = 0x328E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E34u;
        // 0x328e38: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E3Cu;
        goto label_328e3c;
    }
    ctx->pc = 0x328E34u;
    {
        const bool branch_taken_0x328e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e34) {
            ctx->pc = 0x328E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328E34u;
            // 0x328e38: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328E3Cu;
label_328e3c:
    // 0x328e3c: 0xc09a07e  jal         func_2681F8
label_328e40:
    if (ctx->pc == 0x328E40u) {
        ctx->pc = 0x328E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E3Cu;
        // 0x328e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E44u;
        goto label_328e44;
    }
    ctx->pc = 0x328E3Cu;
    SET_GPR_U32(ctx, 31, 0x328E44u);
    ctx->pc = 0x328E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E3Cu;
    // 0x328e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2681F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2681F8u, 0x328E3Cu, 0x328E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E44u;
label_328e44:
    // 0x328e44: 0x10000340  b           . + 4 + (0x340 << 2)
label_328e48:
    if (ctx->pc == 0x328E48u) {
        ctx->pc = 0x328E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E44u;
        // 0x328e48: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E4Cu;
        goto label_328e4c;
    }
    ctx->pc = 0x328E44u;
    {
        const bool branch_taken_0x328e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E44u;
        // 0x328e48: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e44) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328E4Cu;
label_328e4c:
    // 0x328e4c: 0xc0cdec0  jal         func_337B00
label_328e50:
    if (ctx->pc == 0x328E50u) {
        ctx->pc = 0x328E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E4Cu;
        // 0x328e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E54u;
        goto label_328e54;
    }
    ctx->pc = 0x328E4Cu;
    SET_GPR_U32(ctx, 31, 0x328E54u);
    ctx->pc = 0x328E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E4Cu;
    // 0x328e50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328E4Cu, 0x328E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E54u;
label_328e54:
    // 0x328e54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328e58:
    // 0x328e58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328e5c:
    // 0x328e5c: 0xc0cdcac  jal         func_3372B0
label_328e60:
    if (ctx->pc == 0x328E60u) {
        ctx->pc = 0x328E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E5Cu;
        // 0x328e60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E64u;
        goto label_328e64;
    }
    ctx->pc = 0x328E5Cu;
    SET_GPR_U32(ctx, 31, 0x328E64u);
    ctx->pc = 0x328E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E5Cu;
    // 0x328e60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3372B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3372B0u, 0x328E5Cu, 0x328E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E64u;
label_328e64:
    // 0x328e64: 0x50400338  beql        $v0, $zero, . + 4 + (0x338 << 2)
label_328e68:
    if (ctx->pc == 0x328E68u) {
        ctx->pc = 0x328E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E64u;
        // 0x328e68: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E6Cu;
        goto label_328e6c;
    }
    ctx->pc = 0x328E64u;
    {
        const bool branch_taken_0x328e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e64) {
            ctx->pc = 0x328E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328E64u;
            // 0x328e68: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328E6Cu;
label_328e6c:
    // 0x328e6c: 0xc09a0a6  jal         func_268298
label_328e70:
    if (ctx->pc == 0x328E70u) {
        ctx->pc = 0x328E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E6Cu;
        // 0x328e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E74u;
        goto label_328e74;
    }
    ctx->pc = 0x328E6Cu;
    SET_GPR_U32(ctx, 31, 0x328E74u);
    ctx->pc = 0x328E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E6Cu;
    // 0x328e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268298u, 0x328E6Cu, 0x328E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E74u;
label_328e74:
    // 0x328e74: 0x10000334  b           . + 4 + (0x334 << 2)
label_328e78:
    if (ctx->pc == 0x328E78u) {
        ctx->pc = 0x328E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E74u;
        // 0x328e78: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E7Cu;
        goto label_328e7c;
    }
    ctx->pc = 0x328E74u;
    {
        const bool branch_taken_0x328e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E74u;
        // 0x328e78: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e74) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x328E7Cu;
label_328e7c:
    // 0x328e7c: 0xc0cdec0  jal         func_337B00
label_328e80:
    if (ctx->pc == 0x328E80u) {
        ctx->pc = 0x328E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E7Cu;
        // 0x328e80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E84u;
        goto label_328e84;
    }
    ctx->pc = 0x328E7Cu;
    SET_GPR_U32(ctx, 31, 0x328E84u);
    ctx->pc = 0x328E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E7Cu;
    // 0x328e80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328E7Cu, 0x328E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E84u;
label_328e84:
    // 0x328e84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328e88:
    // 0x328e88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328e8c:
    // 0x328e8c: 0xc0cdcac  jal         func_3372B0
label_328e90:
    if (ctx->pc == 0x328E90u) {
        ctx->pc = 0x328E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E8Cu;
        // 0x328e90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E94u;
        goto label_328e94;
    }
    ctx->pc = 0x328E8Cu;
    SET_GPR_U32(ctx, 31, 0x328E94u);
    ctx->pc = 0x328E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E8Cu;
    // 0x328e90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3372B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3372B0u, 0x328E8Cu, 0x328E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E94u;
label_328e94:
    // 0x328e94: 0x1040032b  beqz        $v0, . + 4 + (0x32B << 2)
label_328e98:
    if (ctx->pc == 0x328E98u) {
        ctx->pc = 0x328E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E94u;
        // 0x328e98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E9Cu;
        goto label_328e9c;
    }
    ctx->pc = 0x328E94u;
    {
        const bool branch_taken_0x328e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E94u;
        // 0x328e98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e94) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328E9Cu;
label_328e9c:
    // 0x328e9c: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x328e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
label_328ea0:
    // 0x328ea0: 0xa2020295  sb          $v0, 0x295($s0)
    ctx->pc = 0x328ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 661), (uint8_t)GPR_U32(ctx, 2));
label_328ea4:
    // 0x328ea4: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x328ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_328ea8:
    // 0x328ea8: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x328ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_328eac:
    // 0x328eac: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x328eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
label_328eb0:
    // 0x328eb0: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x328eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
label_328eb4:
    // 0x328eb4: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x328eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
label_328eb8:
    // 0x328eb8: 0x10000322  b           . + 4 + (0x322 << 2)
label_328ebc:
    if (ctx->pc == 0x328EBCu) {
        ctx->pc = 0x328EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EB8u;
        // 0x328ebc: 0xa2000244  sb          $zero, 0x244($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 580), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328EC0u;
        goto label_328ec0;
    }
    ctx->pc = 0x328EB8u;
    {
        const bool branch_taken_0x328eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EB8u;
        // 0x328ebc: 0xa2000244  sb          $zero, 0x244($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 580), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328eb8) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328EC0u;
label_328ec0:
    // 0x328ec0: 0xc0cdf2e  jal         func_337CB8
label_328ec4:
    if (ctx->pc == 0x328EC4u) {
        ctx->pc = 0x328EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EC0u;
        // 0x328ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328EC8u;
        goto label_328ec8;
    }
    ctx->pc = 0x328EC0u;
    SET_GPR_U32(ctx, 31, 0x328EC8u);
    ctx->pc = 0x328EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328EC0u;
    // 0x328ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328EC0u, 0x328EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328EC8u;
label_328ec8:
    // 0x328ec8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328ecc:
    // 0x328ecc: 0xc0cdf2e  jal         func_337CB8
label_328ed0:
    if (ctx->pc == 0x328ED0u) {
        ctx->pc = 0x328ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328ECCu;
        // 0x328ed0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328ED4u;
        goto label_328ed4;
    }
    ctx->pc = 0x328ECCu;
    SET_GPR_U32(ctx, 31, 0x328ED4u);
    ctx->pc = 0x328ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328ECCu;
    // 0x328ed0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328ECCu, 0x328ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328ED4u;
label_328ed4:
    // 0x328ed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328ed8:
    // 0x328ed8: 0xc0cdf2e  jal         func_337CB8
label_328edc:
    if (ctx->pc == 0x328EDCu) {
        ctx->pc = 0x328EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328ED8u;
        // 0x328edc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328EE0u;
        goto label_328ee0;
    }
    ctx->pc = 0x328ED8u;
    SET_GPR_U32(ctx, 31, 0x328EE0u);
    ctx->pc = 0x328EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328ED8u;
    // 0x328edc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328ED8u, 0x328EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328EE0u;
label_328ee0:
    // 0x328ee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328ee4:
    // 0x328ee4: 0xc0cdf2e  jal         func_337CB8
label_328ee8:
    if (ctx->pc == 0x328EE8u) {
        ctx->pc = 0x328EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EE4u;
        // 0x328ee8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328EECu;
        goto label_328eec;
    }
    ctx->pc = 0x328EE4u;
    SET_GPR_U32(ctx, 31, 0x328EECu);
    ctx->pc = 0x328EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328EE4u;
    // 0x328ee8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328EE4u, 0x328EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328EECu;
label_328eec:
    // 0x328eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328ef0:
    // 0x328ef0: 0xc0cdec0  jal         func_337B00
label_328ef4:
    if (ctx->pc == 0x328EF4u) {
        ctx->pc = 0x328EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EF0u;
        // 0x328ef4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328EF8u;
        goto label_328ef8;
    }
    ctx->pc = 0x328EF0u;
    SET_GPR_U32(ctx, 31, 0x328EF8u);
    ctx->pc = 0x328EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328EF0u;
    // 0x328ef4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x328EF0u, 0x328EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328EF8u;
label_328ef8:
    // 0x328ef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328efc:
    // 0x328efc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328f00:
    // 0x328f00: 0xc0cdcac  jal         func_3372B0
label_328f04:
    if (ctx->pc == 0x328F04u) {
        ctx->pc = 0x328F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F00u;
        // 0x328f04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F08u;
        goto label_328f08;
    }
    ctx->pc = 0x328F00u;
    SET_GPR_U32(ctx, 31, 0x328F08u);
    ctx->pc = 0x328F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F00u;
    // 0x328f04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3372B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3372B0u, 0x328F00u, 0x328F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F08u;
label_328f08:
    // 0x328f08: 0x1040030e  beqz        $v0, . + 4 + (0x30E << 2)
label_328f0c:
    if (ctx->pc == 0x328F0Cu) {
        ctx->pc = 0x328F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F08u;
        // 0x328f0c: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F10u;
        goto label_328f10;
    }
    ctx->pc = 0x328F08u;
    {
        const bool branch_taken_0x328f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F08u;
        // 0x328f0c: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f08) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328F10u;
label_328f10:
    // 0x328f10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x328f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_328f14:
    // 0x328f14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x328f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_328f18:
    // 0x328f18: 0xae030224  sw          $v1, 0x224($s0)
    ctx->pc = 0x328f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 3));
label_328f1c:
    // 0x328f1c: 0xa2040295  sb          $a0, 0x295($s0)
    ctx->pc = 0x328f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 661), (uint8_t)GPR_U32(ctx, 4));
label_328f20:
    // 0x328f20: 0xae110228  sw          $s1, 0x228($s0)
    ctx->pc = 0x328f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 17));
label_328f24:
    // 0x328f24: 0xae140230  sw          $s4, 0x230($s0)
    ctx->pc = 0x328f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 20));
label_328f28:
    // 0x328f28: 0xae150238  sw          $s5, 0x238($s0)
    ctx->pc = 0x328f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 21));
label_328f2c:
    // 0x328f2c: 0xa2020244  sb          $v0, 0x244($s0)
    ctx->pc = 0x328f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 580), (uint8_t)GPR_U32(ctx, 2));
label_328f30:
    // 0x328f30: 0xae11022c  sw          $s1, 0x22C($s0)
    ctx->pc = 0x328f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 17));
label_328f34:
    // 0x328f34: 0x10000303  b           . + 4 + (0x303 << 2)
label_328f38:
    if (ctx->pc == 0x328F38u) {
        ctx->pc = 0x328F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F34u;
        // 0x328f38: 0xae000240  sw          $zero, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F3Cu;
        goto label_328f3c;
    }
    ctx->pc = 0x328F34u;
    {
        const bool branch_taken_0x328f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F34u;
        // 0x328f38: 0xae000240  sw          $zero, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f34) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x328F3Cu;
label_328f3c:
    // 0x328f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328f40:
    // 0x328f40: 0xc0cdf2e  jal         func_337CB8
label_328f44:
    if (ctx->pc == 0x328F44u) {
        ctx->pc = 0x328F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F40u;
        // 0x328f44: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F48u;
        goto label_328f48;
    }
    ctx->pc = 0x328F40u;
    SET_GPR_U32(ctx, 31, 0x328F48u);
    ctx->pc = 0x328F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F40u;
    // 0x328f44: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328F40u, 0x328F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F48u;
label_328f48:
    // 0x328f48: 0xc0cdf52  jal         func_337D48
label_328f4c:
    if (ctx->pc == 0x328F4Cu) {
        ctx->pc = 0x328F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F48u;
        // 0x328f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F50u;
        goto label_328f50;
    }
    ctx->pc = 0x328F48u;
    SET_GPR_U32(ctx, 31, 0x328F50u);
    ctx->pc = 0x328F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F48u;
    // 0x328f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x328F48u, 0x328F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F50u;
label_328f50:
    // 0x328f50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x328f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328f54:
    // 0x328f54: 0xc0cdf2e  jal         func_337CB8
label_328f58:
    if (ctx->pc == 0x328F58u) {
        ctx->pc = 0x328F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F54u;
        // 0x328f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F5Cu;
        goto label_328f5c;
    }
    ctx->pc = 0x328F54u;
    SET_GPR_U32(ctx, 31, 0x328F5Cu);
    ctx->pc = 0x328F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F54u;
    // 0x328f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328F54u, 0x328F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F5Cu;
label_328f5c:
    // 0x328f5c: 0xc0cdf52  jal         func_337D48
label_328f60:
    if (ctx->pc == 0x328F60u) {
        ctx->pc = 0x328F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F5Cu;
        // 0x328f60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F64u;
        goto label_328f64;
    }
    ctx->pc = 0x328F5Cu;
    SET_GPR_U32(ctx, 31, 0x328F64u);
    ctx->pc = 0x328F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F5Cu;
    // 0x328f60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x328F5Cu, 0x328F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F64u;
label_328f64:
    // 0x328f64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328f68:
    // 0x328f68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328f6c:
    // 0x328f6c: 0xc0cdbf6  jal         func_336FD8
label_328f70:
    if (ctx->pc == 0x328F70u) {
        ctx->pc = 0x328F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F6Cu;
        // 0x328f70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F74u;
        goto label_328f74;
    }
    ctx->pc = 0x328F6Cu;
    SET_GPR_U32(ctx, 31, 0x328F74u);
    ctx->pc = 0x328F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F6Cu;
    // 0x328f70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x328F6Cu, 0x328F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F74u;
label_328f74:
    // 0x328f74: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_328f78:
    if (ctx->pc == 0x328F78u) {
        ctx->pc = 0x328F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F74u;
        // 0x328f78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F7Cu;
        goto label_328f7c;
    }
    ctx->pc = 0x328F74u;
    {
        const bool branch_taken_0x328f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F74u;
        // 0x328f78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f74) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x328F7Cu;
label_328f7c:
    // 0x328f7c: 0xc0cdbf6  jal         func_336FD8
label_328f80:
    if (ctx->pc == 0x328F80u) {
        ctx->pc = 0x328F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F7Cu;
        // 0x328f80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F84u;
        goto label_328f84;
    }
    ctx->pc = 0x328F7Cu;
    SET_GPR_U32(ctx, 31, 0x328F84u);
    ctx->pc = 0x328F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F7Cu;
    // 0x328f80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x328F7Cu, 0x328F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F84u;
label_328f84:
    // 0x328f84: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_328f88:
    if (ctx->pc == 0x328F88u) {
        ctx->pc = 0x328F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F84u;
        // 0x328f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F8Cu;
        goto label_328f8c;
    }
    ctx->pc = 0x328F84u;
    {
        const bool branch_taken_0x328f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F84u;
        // 0x328f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f84) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x328F8Cu;
label_328f8c:
    // 0x328f8c: 0xc0cd3c6  jal         func_334F18
label_328f90:
    if (ctx->pc == 0x328F90u) {
        ctx->pc = 0x328F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F8Cu;
        // 0x328f90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F94u;
        goto label_328f94;
    }
    ctx->pc = 0x328F8Cu;
    SET_GPR_U32(ctx, 31, 0x328F94u);
    ctx->pc = 0x328F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328F8Cu;
    // 0x328f90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334F18u, 0x328F8Cu, 0x328F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328F94u;
label_328f94:
    // 0x328f94: 0x1000003a  b           . + 4 + (0x3A << 2)
label_328f98:
    if (ctx->pc == 0x328F98u) {
        ctx->pc = 0x328F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F94u;
        // 0x328f98: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F9Cu;
        goto label_328f9c;
    }
    ctx->pc = 0x328F94u;
    {
        const bool branch_taken_0x328f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F94u;
        // 0x328f98: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f94) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x328F9Cu;
label_328f9c:
    // 0x328f9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328fa0:
    // 0x328fa0: 0xc0cdf2e  jal         func_337CB8
label_328fa4:
    if (ctx->pc == 0x328FA4u) {
        ctx->pc = 0x328FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FA0u;
        // 0x328fa4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FA8u;
        goto label_328fa8;
    }
    ctx->pc = 0x328FA0u;
    SET_GPR_U32(ctx, 31, 0x328FA8u);
    ctx->pc = 0x328FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FA0u;
    // 0x328fa4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328FA0u, 0x328FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FA8u;
label_328fa8:
    // 0x328fa8: 0xc0cdf52  jal         func_337D48
label_328fac:
    if (ctx->pc == 0x328FACu) {
        ctx->pc = 0x328FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FA8u;
        // 0x328fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FB0u;
        goto label_328fb0;
    }
    ctx->pc = 0x328FA8u;
    SET_GPR_U32(ctx, 31, 0x328FB0u);
    ctx->pc = 0x328FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FA8u;
    // 0x328fac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x328FA8u, 0x328FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FB0u;
label_328fb0:
    // 0x328fb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x328fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328fb4:
    // 0x328fb4: 0xc0cdf2e  jal         func_337CB8
label_328fb8:
    if (ctx->pc == 0x328FB8u) {
        ctx->pc = 0x328FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FB4u;
        // 0x328fb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FBCu;
        goto label_328fbc;
    }
    ctx->pc = 0x328FB4u;
    SET_GPR_U32(ctx, 31, 0x328FBCu);
    ctx->pc = 0x328FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FB4u;
    // 0x328fb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x328FB4u, 0x328FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FBCu;
label_328fbc:
    // 0x328fbc: 0xc0cdf52  jal         func_337D48
label_328fc0:
    if (ctx->pc == 0x328FC0u) {
        ctx->pc = 0x328FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FBCu;
        // 0x328fc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FC4u;
        goto label_328fc4;
    }
    ctx->pc = 0x328FBCu;
    SET_GPR_U32(ctx, 31, 0x328FC4u);
    ctx->pc = 0x328FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FBCu;
    // 0x328fc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x328FBCu, 0x328FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FC4u;
label_328fc4:
    // 0x328fc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328fc8:
    // 0x328fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328fcc:
    // 0x328fcc: 0xc0cdbf6  jal         func_336FD8
label_328fd0:
    if (ctx->pc == 0x328FD0u) {
        ctx->pc = 0x328FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FCCu;
        // 0x328fd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FD4u;
        goto label_328fd4;
    }
    ctx->pc = 0x328FCCu;
    SET_GPR_U32(ctx, 31, 0x328FD4u);
    ctx->pc = 0x328FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FCCu;
    // 0x328fd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x328FCCu, 0x328FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FD4u;
label_328fd4:
    // 0x328fd4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_328fd8:
    if (ctx->pc == 0x328FD8u) {
        ctx->pc = 0x328FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FD4u;
        // 0x328fd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FDCu;
        goto label_328fdc;
    }
    ctx->pc = 0x328FD4u;
    {
        const bool branch_taken_0x328fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FD4u;
        // 0x328fd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328fd4) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x328FDCu;
label_328fdc:
    // 0x328fdc: 0xc0cdbf6  jal         func_336FD8
label_328fe0:
    if (ctx->pc == 0x328FE0u) {
        ctx->pc = 0x328FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FDCu;
        // 0x328fe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FE4u;
        goto label_328fe4;
    }
    ctx->pc = 0x328FDCu;
    SET_GPR_U32(ctx, 31, 0x328FE4u);
    ctx->pc = 0x328FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FDCu;
    // 0x328fe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x328FDCu, 0x328FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FE4u;
label_328fe4:
    // 0x328fe4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_328fe8:
    if (ctx->pc == 0x328FE8u) {
        ctx->pc = 0x328FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FE4u;
        // 0x328fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FECu;
        goto label_328fec;
    }
    ctx->pc = 0x328FE4u;
    {
        const bool branch_taken_0x328fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FE4u;
        // 0x328fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328fe4) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x328FECu;
label_328fec:
    // 0x328fec: 0xc0cd48e  jal         func_335238
label_328ff0:
    if (ctx->pc == 0x328FF0u) {
        ctx->pc = 0x328FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FECu;
        // 0x328ff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FF4u;
        goto label_328ff4;
    }
    ctx->pc = 0x328FECu;
    SET_GPR_U32(ctx, 31, 0x328FF4u);
    ctx->pc = 0x328FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FECu;
    // 0x328ff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335238u, 0x328FECu, 0x328FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FF4u;
label_328ff4:
    // 0x328ff4: 0x10000022  b           . + 4 + (0x22 << 2)
label_328ff8:
    if (ctx->pc == 0x328FF8u) {
        ctx->pc = 0x328FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FF4u;
        // 0x328ff8: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FFCu;
        goto label_328ffc;
    }
    ctx->pc = 0x328FF4u;
    {
        const bool branch_taken_0x328ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FF4u;
        // 0x328ff8: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328ff4) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x328FFCu;
label_328ffc:
    // 0x328ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329000:
    // 0x329000: 0xc0cdf2e  jal         func_337CB8
label_329004:
    if (ctx->pc == 0x329004u) {
        ctx->pc = 0x329004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329000u;
        // 0x329004: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329008u;
        goto label_329008;
    }
    ctx->pc = 0x329000u;
    SET_GPR_U32(ctx, 31, 0x329008u);
    ctx->pc = 0x329004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329000u;
    // 0x329004: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329000u, 0x329008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329008u;
label_329008:
    // 0x329008: 0xc0cdf52  jal         func_337D48
label_32900c:
    if (ctx->pc == 0x32900Cu) {
        ctx->pc = 0x32900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329008u;
        // 0x32900c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329010u;
        goto label_329010;
    }
    ctx->pc = 0x329008u;
    SET_GPR_U32(ctx, 31, 0x329010u);
    ctx->pc = 0x32900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329008u;
    // 0x32900c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329008u, 0x329010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329010u;
label_329010:
    // 0x329010: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x329010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329014:
    // 0x329014: 0xc0cdf2e  jal         func_337CB8
label_329018:
    if (ctx->pc == 0x329018u) {
        ctx->pc = 0x329018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329014u;
        // 0x329018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32901Cu;
        goto label_32901c;
    }
    ctx->pc = 0x329014u;
    SET_GPR_U32(ctx, 31, 0x32901Cu);
    ctx->pc = 0x329018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329014u;
    // 0x329018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329014u, 0x32901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32901Cu;
label_32901c:
    // 0x32901c: 0xc0cdf52  jal         func_337D48
label_329020:
    if (ctx->pc == 0x329020u) {
        ctx->pc = 0x329020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32901Cu;
        // 0x329020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329024u;
        goto label_329024;
    }
    ctx->pc = 0x32901Cu;
    SET_GPR_U32(ctx, 31, 0x329024u);
    ctx->pc = 0x329020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32901Cu;
    // 0x329020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32901Cu, 0x329024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329024u;
label_329024:
    // 0x329024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329028:
    // 0x329028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32902c:
    // 0x32902c: 0xc0cdbf6  jal         func_336FD8
label_329030:
    if (ctx->pc == 0x329030u) {
        ctx->pc = 0x329030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32902Cu;
        // 0x329030: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329034u;
        goto label_329034;
    }
    ctx->pc = 0x32902Cu;
    SET_GPR_U32(ctx, 31, 0x329034u);
    ctx->pc = 0x329030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32902Cu;
    // 0x329030: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x32902Cu, 0x329034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329034u;
label_329034:
    // 0x329034: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_329038:
    if (ctx->pc == 0x329038u) {
        ctx->pc = 0x329038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329034u;
        // 0x329038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32903Cu;
        goto label_32903c;
    }
    ctx->pc = 0x329034u;
    {
        const bool branch_taken_0x329034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329034u;
        // 0x329038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329034) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x32903Cu;
label_32903c:
    // 0x32903c: 0xc0cdbf6  jal         func_336FD8
label_329040:
    if (ctx->pc == 0x329040u) {
        ctx->pc = 0x329040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32903Cu;
        // 0x329040: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329044u;
        goto label_329044;
    }
    ctx->pc = 0x32903Cu;
    SET_GPR_U32(ctx, 31, 0x329044u);
    ctx->pc = 0x329040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32903Cu;
    // 0x329040: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FD8u, 0x32903Cu, 0x329044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329044u;
label_329044:
    // 0x329044: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_329048:
    if (ctx->pc == 0x329048u) {
        ctx->pc = 0x329048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329044u;
        // 0x329048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32904Cu;
        goto label_32904c;
    }
    ctx->pc = 0x329044u;
    {
        const bool branch_taken_0x329044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329044u;
        // 0x329048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329044) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x32904Cu;
label_32904c:
    // 0x32904c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32904cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329050:
    // 0x329050: 0xc0cd476  jal         func_3351D8
label_329054:
    if (ctx->pc == 0x329054u) {
        ctx->pc = 0x329054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329050u;
        // 0x329054: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329058u;
        goto label_329058;
    }
    ctx->pc = 0x329050u;
    SET_GPR_U32(ctx, 31, 0x329058u);
    ctx->pc = 0x329054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329050u;
    // 0x329054: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3351D8u, 0x329050u, 0x329058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329058u;
label_329058:
    // 0x329058: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32905c:
    if (ctx->pc == 0x32905Cu) {
        ctx->pc = 0x32905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329058u;
        // 0x32905c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329060u;
        goto label_329060;
    }
    ctx->pc = 0x329058u;
    {
        const bool branch_taken_0x329058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329058u;
        // 0x32905c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329058) {
            ctx->pc = 0x32906Cu;
            goto label_32906c;
        }
    }
    ctx->pc = 0x329060u;
label_329060:
    // 0x329060: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x329060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_329064:
    // 0x329064: 0x10000006  b           . + 4 + (0x6 << 2)
label_329068:
    if (ctx->pc == 0x329068u) {
        ctx->pc = 0x329068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329064u;
        // 0x329068: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32906Cu;
        goto label_32906c;
    }
    ctx->pc = 0x329064u;
    {
        const bool branch_taken_0x329064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329064u;
        // 0x329068: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329064) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x32906Cu;
label_32906c:
    // 0x32906c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32906cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329070:
    // 0x329070: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x329070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329074:
    // 0x329074: 0xc0cd442  jal         func_335108
label_329078:
    if (ctx->pc == 0x329078u) {
        ctx->pc = 0x329078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329074u;
        // 0x329078: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32907Cu;
        goto label_32907c;
    }
    ctx->pc = 0x329074u;
    SET_GPR_U32(ctx, 31, 0x32907Cu);
    ctx->pc = 0x329078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329074u;
    // 0x329078: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335108u, 0x329074u, 0x32907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32907Cu;
label_32907c:
    // 0x32907c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x32907cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_329080:
    // 0x329080: 0x100002b0  b           . + 4 + (0x2B0 << 2)
label_329084:
    if (ctx->pc == 0x329084u) {
        ctx->pc = 0x329084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329080u;
        // 0x329084: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329088u;
        goto label_329088;
    }
    ctx->pc = 0x329080u;
    {
        const bool branch_taken_0x329080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329080u;
        // 0x329084: 0xae53003c  sw          $s3, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329080) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329088u;
label_329088:
    // 0x329088: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x329088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32908c:
    // 0x32908c: 0x100002ad  b           . + 4 + (0x2AD << 2)
label_329090:
    if (ctx->pc == 0x329090u) {
        ctx->pc = 0x329090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32908Cu;
        // 0x329090: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329094u;
        goto label_329094;
    }
    ctx->pc = 0x32908Cu;
    {
        const bool branch_taken_0x32908c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32908Cu;
        // 0x329090: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32908c) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329094u;
label_329094:
    // 0x329094: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x329094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_329098:
    // 0x329098: 0x100002aa  b           . + 4 + (0x2AA << 2)
label_32909c:
    if (ctx->pc == 0x32909Cu) {
        ctx->pc = 0x32909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329098u;
        // 0x32909c: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290A0u;
        goto label_3290a0;
    }
    ctx->pc = 0x329098u;
    {
        const bool branch_taken_0x329098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329098u;
        // 0x32909c: 0xae420498  sw          $v0, 0x498($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329098) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3290A0u;
label_3290a0:
    // 0x3290a0: 0xc0cdf2e  jal         func_337CB8
label_3290a4:
    if (ctx->pc == 0x3290A4u) {
        ctx->pc = 0x3290A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290A0u;
        // 0x3290a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290A8u;
        goto label_3290a8;
    }
    ctx->pc = 0x3290A0u;
    SET_GPR_U32(ctx, 31, 0x3290A8u);
    ctx->pc = 0x3290A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290A0u;
    // 0x3290a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3290A0u, 0x3290A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290A8u;
label_3290a8:
    // 0x3290a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3290a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3290ac:
    // 0x3290ac: 0xc0cdec0  jal         func_337B00
label_3290b0:
    if (ctx->pc == 0x3290B0u) {
        ctx->pc = 0x3290B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290ACu;
        // 0x3290b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290B4u;
        goto label_3290b4;
    }
    ctx->pc = 0x3290ACu;
    SET_GPR_U32(ctx, 31, 0x3290B4u);
    ctx->pc = 0x3290B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290ACu;
    // 0x3290b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3290ACu, 0x3290B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290B4u;
label_3290b4:
    // 0x3290b4: 0x104002a3  beqz        $v0, . + 4 + (0x2A3 << 2)
label_3290b8:
    if (ctx->pc == 0x3290B8u) {
        ctx->pc = 0x3290B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290B4u;
        // 0x3290b8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290BCu;
        goto label_3290bc;
    }
    ctx->pc = 0x3290B4u;
    {
        const bool branch_taken_0x3290b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3290B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290B4u;
        // 0x3290b8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3290b4) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3290BCu;
label_3290bc:
    // 0x3290bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3290bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3290c0:
    // 0x3290c0: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x3290c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_3290c4:
    // 0x3290c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3290c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3290c8:
    // 0x3290c8: 0x10000010  b           . + 4 + (0x10 << 2)
label_3290cc:
    if (ctx->pc == 0x3290CCu) {
        ctx->pc = 0x3290CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290C8u;
        // 0x3290cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290D0u;
        goto label_3290d0;
    }
    ctx->pc = 0x3290C8u;
    {
        const bool branch_taken_0x3290c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3290CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290C8u;
        // 0x3290cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3290c8) {
            ctx->pc = 0x32910Cu;
            goto label_32910c;
        }
    }
    ctx->pc = 0x3290D0u;
label_3290d0:
    // 0x3290d0: 0xc0cdf2e  jal         func_337CB8
label_3290d4:
    if (ctx->pc == 0x3290D4u) {
        ctx->pc = 0x3290D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290D0u;
        // 0x3290d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290D8u;
        goto label_3290d8;
    }
    ctx->pc = 0x3290D0u;
    SET_GPR_U32(ctx, 31, 0x3290D8u);
    ctx->pc = 0x3290D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290D0u;
    // 0x3290d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3290D0u, 0x3290D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290D8u;
label_3290d8:
    // 0x3290d8: 0xc0cdf52  jal         func_337D48
label_3290dc:
    if (ctx->pc == 0x3290DCu) {
        ctx->pc = 0x3290DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290D8u;
        // 0x3290dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290E0u;
        goto label_3290e0;
    }
    ctx->pc = 0x3290D8u;
    SET_GPR_U32(ctx, 31, 0x3290E0u);
    ctx->pc = 0x3290DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290D8u;
    // 0x3290dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x3290D8u, 0x3290E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290E0u;
label_3290e0:
    // 0x3290e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3290e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3290e4:
    // 0x3290e4: 0xc0cdf2e  jal         func_337CB8
label_3290e8:
    if (ctx->pc == 0x3290E8u) {
        ctx->pc = 0x3290E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290E4u;
        // 0x3290e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290ECu;
        goto label_3290ec;
    }
    ctx->pc = 0x3290E4u;
    SET_GPR_U32(ctx, 31, 0x3290ECu);
    ctx->pc = 0x3290E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290E4u;
    // 0x3290e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3290E4u, 0x3290ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290ECu;
label_3290ec:
    // 0x3290ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3290ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3290f0:
    // 0x3290f0: 0xc0cdec0  jal         func_337B00
label_3290f4:
    if (ctx->pc == 0x3290F4u) {
        ctx->pc = 0x3290F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290F0u;
        // 0x3290f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290F8u;
        goto label_3290f8;
    }
    ctx->pc = 0x3290F0u;
    SET_GPR_U32(ctx, 31, 0x3290F8u);
    ctx->pc = 0x3290F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3290F0u;
    // 0x3290f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3290F0u, 0x3290F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3290F8u;
label_3290f8:
    // 0x3290f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x3290f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_3290fc:
    // 0x3290fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3290fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329100:
    // 0x329100: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x329100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
label_329104:
    // 0x329104: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x329104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329108:
    // 0x329108: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x329108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32910c:
    // 0x32910c: 0xc0491c4  jal         func_124710
label_329110:
    if (ctx->pc == 0x329110u) {
        ctx->pc = 0x329114u;
        goto label_329114;
    }
    ctx->pc = 0x32910Cu;
    SET_GPR_U32(ctx, 31, 0x329114u);
    ctx->pc = 0x124710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124710u, 0x32910Cu, 0x329114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329114u;
label_329114:
    // 0x329114: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x329114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_329118:
    // 0x329118: 0x1443028a  bne         $v0, $v1, . + 4 + (0x28A << 2)
label_32911c:
    if (ctx->pc == 0x32911Cu) {
        ctx->pc = 0x32911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329118u;
        // 0x32911c: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329120u;
        goto label_329120;
    }
    ctx->pc = 0x329118u;
    {
        const bool branch_taken_0x329118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329118u;
        // 0x32911c: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329118) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329120u;
label_329120:
    // 0x329120: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329124:
    // 0x329124: 0xc0cdfdc  jal         func_337F70
label_329128:
    if (ctx->pc == 0x329128u) {
        ctx->pc = 0x329128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329124u;
        // 0x329128: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32912Cu;
        goto label_32912c;
    }
    ctx->pc = 0x329124u;
    SET_GPR_U32(ctx, 31, 0x32912Cu);
    ctx->pc = 0x329128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329124u;
    // 0x329128: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x329124u, 0x32912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32912Cu;
label_32912c:
    // 0x32912c: 0x10000286  b           . + 4 + (0x286 << 2)
label_329130:
    if (ctx->pc == 0x329130u) {
        ctx->pc = 0x329130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32912Cu;
        // 0x329130: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329134u;
        goto label_329134;
    }
    ctx->pc = 0x32912Cu;
    {
        const bool branch_taken_0x32912c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32912Cu;
        // 0x329130: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32912c) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329134u;
label_329134:
    // 0x329134: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x329134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_329138:
    // 0x329138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x329138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32913c:
    // 0x32913c: 0x10000281  b           . + 4 + (0x281 << 2)
label_329140:
    if (ctx->pc == 0x329140u) {
        ctx->pc = 0x329140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32913Cu;
        // 0x329140: 0xac62aa88  sw          $v0, -0x5578($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329144u;
        goto label_329144;
    }
    ctx->pc = 0x32913Cu;
    {
        const bool branch_taken_0x32913c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32913Cu;
        // 0x329140: 0xac62aa88  sw          $v0, -0x5578($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32913c) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329144u;
label_329144:
    // 0x329144: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x329144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_329148:
    // 0x329148: 0x1000027e  b           . + 4 + (0x27E << 2)
label_32914c:
    if (ctx->pc == 0x32914Cu) {
        ctx->pc = 0x32914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329148u;
        // 0x32914c: 0xac40aa88  sw          $zero, -0x5578($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329150u;
        goto label_329150;
    }
    ctx->pc = 0x329148u;
    {
        const bool branch_taken_0x329148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329148u;
        // 0x32914c: 0xac40aa88  sw          $zero, -0x5578($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329148) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329150u;
label_329150:
    // 0x329150: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x329150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_329154:
    // 0x329154: 0xc0abe3e  jal         func_2AF8F8
label_329158:
    if (ctx->pc == 0x329158u) {
        ctx->pc = 0x329158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329154u;
        // 0x329158: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32915Cu;
        goto label_32915c;
    }
    ctx->pc = 0x329154u;
    SET_GPR_U32(ctx, 31, 0x32915Cu);
    ctx->pc = 0x329158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329154u;
    // 0x329158: 0x24842450  addiu       $a0, $a0, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF8F8u, 0x329154u, 0x32915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32915Cu;
label_32915c:
    // 0x32915c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x32915cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_329160:
    // 0x329160: 0x24432470  addiu       $v1, $v0, 0x2470
    ctx->pc = 0x329160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
label_329164:
    // 0x329164: 0xac402470  sw          $zero, 0x2470($v0)
    ctx->pc = 0x329164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9328), GPR_U32(ctx, 0));
label_329168:
    // 0x329168: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x329168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_32916c:
    // 0x32916c: 0x10000275  b           . + 4 + (0x275 << 2)
label_329170:
    if (ctx->pc == 0x329170u) {
        ctx->pc = 0x329170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32916Cu;
        // 0x329170: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329174u;
        goto label_329174;
    }
    ctx->pc = 0x32916Cu;
    {
        const bool branch_taken_0x32916c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32916Cu;
        // 0x329170: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32916c) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329174u;
label_329174:
    // 0x329174: 0xc0cdf2e  jal         func_337CB8
label_329178:
    if (ctx->pc == 0x329178u) {
        ctx->pc = 0x329178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329174u;
        // 0x329178: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32917Cu;
        goto label_32917c;
    }
    ctx->pc = 0x329174u;
    SET_GPR_U32(ctx, 31, 0x32917Cu);
    ctx->pc = 0x329178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329174u;
    // 0x329178: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329174u, 0x32917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32917Cu;
label_32917c:
    // 0x32917c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329180:
    // 0x329180: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x329180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_329184:
    // 0x329184: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x329184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_329188:
    // 0x329188: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_32918c:
    if (ctx->pc == 0x32918Cu) {
        ctx->pc = 0x32918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329188u;
        // 0x32918c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329190u;
        goto label_329190;
    }
    ctx->pc = 0x329188u;
    {
        const bool branch_taken_0x329188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329188u;
        // 0x32918c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329188) {
            ctx->pc = 0x3291A4u;
            goto label_3291a4;
        }
    }
    ctx->pc = 0x329190u;
label_329190:
    // 0x329190: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x329190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_329194:
    // 0x329194: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x329194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_329198:
    // 0x329198: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x329198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_32919c:
    // 0x32919c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_3291a0:
    if (ctx->pc == 0x3291A0u) {
        ctx->pc = 0x3291A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32919Cu;
        // 0x3291a0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3291A4u;
        goto label_3291a4;
    }
    ctx->pc = 0x32919Cu;
    {
        const bool branch_taken_0x32919c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32919c) {
            ctx->pc = 0x3291A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32919Cu;
            // 0x3291a0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3291ACu;
            goto label_3291ac;
        }
    }
    ctx->pc = 0x3291A4u;
label_3291a4:
    // 0x3291a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3291a8:
    if (ctx->pc == 0x3291A8u) {
        ctx->pc = 0x3291A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291A4u;
        // 0x3291a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3291ACu;
        goto label_3291ac;
    }
    ctx->pc = 0x3291A4u;
    {
        const bool branch_taken_0x3291a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3291A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291A4u;
        // 0x3291a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291a4) {
            ctx->pc = 0x3291B0u;
            goto label_3291b0;
        }
    }
    ctx->pc = 0x3291ACu;
label_3291ac:
    // 0x3291ac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3291acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3291b0:
    // 0x3291b0: 0x1000fbb9  b           . + 4 + (-0x447 << 2)
label_3291b4:
    if (ctx->pc == 0x3291B4u) {
        ctx->pc = 0x3291B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291B0u;
        // 0x3291b4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3291B8u;
        goto label_3291b8;
    }
    ctx->pc = 0x3291B0u;
    {
        const bool branch_taken_0x3291b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3291B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291B0u;
        // 0x3291b4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291b0) {
            ctx->pc = 0x328098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328098;
        }
    }
    ctx->pc = 0x3291B8u;
label_3291b8:
    // 0x3291b8: 0xc0cdf2e  jal         func_337CB8
label_3291bc:
    if (ctx->pc == 0x3291BCu) {
        ctx->pc = 0x3291BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291B8u;
        // 0x3291bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3291C0u;
        goto label_3291c0;
    }
    ctx->pc = 0x3291B8u;
    SET_GPR_U32(ctx, 31, 0x3291C0u);
    ctx->pc = 0x3291BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3291B8u;
    // 0x3291bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3291B8u, 0x3291C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3291C0u;
label_3291c0:
    // 0x3291c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3291c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3291c4:
    // 0x3291c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3291c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3291c8:
    // 0x3291c8: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x3291c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_3291cc:
    // 0x3291cc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_3291d0:
    if (ctx->pc == 0x3291D0u) {
        ctx->pc = 0x3291D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291CCu;
        // 0x3291d0: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3291D4u;
        goto label_3291d4;
    }
    ctx->pc = 0x3291CCu;
    {
        const bool branch_taken_0x3291cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3291D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291CCu;
        // 0x3291d0: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291cc) {
            ctx->pc = 0x3291FCu;
            goto label_3291fc;
        }
    }
    ctx->pc = 0x3291D4u;
label_3291d4:
    // 0x3291d4: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x3291d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
label_3291d8:
    // 0x3291d8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3291d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3291dc:
    // 0x3291dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3291dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3291e0:
    // 0x3291e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3291e4:
    if (ctx->pc == 0x3291E4u) {
        ctx->pc = 0x3291E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291E0u;
        // 0x3291e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3291E8u;
        goto label_3291e8;
    }
    ctx->pc = 0x3291E0u;
    {
        const bool branch_taken_0x3291e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3291E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291E0u;
        // 0x3291e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291e0) {
            ctx->pc = 0x3291F4u;
            goto label_3291f4;
        }
    }
    ctx->pc = 0x3291E8u;
label_3291e8:
    // 0x3291e8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3291e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3291ec:
    // 0x3291ec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3291ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3291f0:
    // 0x3291f0: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3291f0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3291f4:
    // 0x3291f4: 0x1000fba8  b           . + 4 + (-0x458 << 2)
label_3291f8:
    if (ctx->pc == 0x3291F8u) {
        ctx->pc = 0x3291F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291F4u;
        // 0x3291f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3291FCu;
        goto label_3291fc;
    }
    ctx->pc = 0x3291F4u;
    {
        const bool branch_taken_0x3291f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3291F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291F4u;
        // 0x3291f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291f4) {
            ctx->pc = 0x328098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328098;
        }
    }
    ctx->pc = 0x3291FCu;
label_3291fc:
    // 0x3291fc: 0x1000fba6  b           . + 4 + (-0x45A << 2)
label_329200:
    if (ctx->pc == 0x329200u) {
        ctx->pc = 0x329200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291FCu;
        // 0x329200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329204u;
        goto label_329204;
    }
    ctx->pc = 0x3291FCu;
    {
        const bool branch_taken_0x3291fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3291FCu;
        // 0x329200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3291fc) {
            ctx->pc = 0x328098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328098;
        }
    }
    ctx->pc = 0x329204u;
label_329204:
    // 0x329204: 0xc0cdf2e  jal         func_337CB8
label_329208:
    if (ctx->pc == 0x329208u) {
        ctx->pc = 0x329208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329204u;
        // 0x329208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32920Cu;
        goto label_32920c;
    }
    ctx->pc = 0x329204u;
    SET_GPR_U32(ctx, 31, 0x32920Cu);
    ctx->pc = 0x329208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329204u;
    // 0x329208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329204u, 0x32920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32920Cu;
label_32920c:
    // 0x32920c: 0xc0cdf52  jal         func_337D48
label_329210:
    if (ctx->pc == 0x329210u) {
        ctx->pc = 0x329210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32920Cu;
        // 0x329210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329214u;
        goto label_329214;
    }
    ctx->pc = 0x32920Cu;
    SET_GPR_U32(ctx, 31, 0x329214u);
    ctx->pc = 0x329210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32920Cu;
    // 0x329210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x32920Cu, 0x329214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329214u;
label_329214:
    // 0x329214: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x329214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329218:
    // 0x329218: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x329218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_32921c:
    // 0x32921c: 0x24844ed8  addiu       $a0, $a0, 0x4ED8
    ctx->pc = 0x32921cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20184));
label_329220:
    // 0x329220: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x329220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_329224:
    // 0x329224: 0xc0aebd6  jal         func_2BAF58
label_329228:
    if (ctx->pc == 0x329228u) {
        ctx->pc = 0x329228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329224u;
        // 0x329228: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32922Cu;
        goto label_32922c;
    }
    ctx->pc = 0x329224u;
    SET_GPR_U32(ctx, 31, 0x32922Cu);
    ctx->pc = 0x329228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329224u;
    // 0x329228: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x329224u, 0x32922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32922Cu;
label_32922c:
    // 0x32922c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32922cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329230:
    // 0x329230: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_329234:
    if (ctx->pc == 0x329234u) {
        ctx->pc = 0x329234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329230u;
        // 0x329234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329238u;
        goto label_329238;
    }
    ctx->pc = 0x329230u;
    {
        const bool branch_taken_0x329230 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x329234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329230u;
        // 0x329234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329230) {
            ctx->pc = 0x329248u;
            goto label_329248;
        }
    }
    ctx->pc = 0x329238u;
label_329238:
    // 0x329238: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x329238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_32923c:
    // 0x32923c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_329240:
    if (ctx->pc == 0x329240u) {
        ctx->pc = 0x329240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32923Cu;
        // 0x329240: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329244u;
        goto label_329244;
    }
    ctx->pc = 0x32923Cu;
    {
        const bool branch_taken_0x32923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32923Cu;
        // 0x329240: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32923c) {
            ctx->pc = 0x329258u;
            goto label_329258;
        }
    }
    ctx->pc = 0x329244u;
label_329244:
    // 0x329244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329248:
    // 0x329248: 0xc0cdfdc  jal         func_337F70
label_32924c:
    if (ctx->pc == 0x32924Cu) {
        ctx->pc = 0x32924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329248u;
        // 0x32924c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329250u;
        goto label_329250;
    }
    ctx->pc = 0x329248u;
    SET_GPR_U32(ctx, 31, 0x329250u);
    ctx->pc = 0x32924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329248u;
    // 0x32924c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x329248u, 0x329250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329250u;
label_329250:
    // 0x329250: 0x1000023c  b           . + 4 + (0x23C << 2)
label_329254:
    if (ctx->pc == 0x329254u) {
        ctx->pc = 0x329254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329250u;
        // 0x329254: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329258u;
        goto label_329258;
    }
    ctx->pc = 0x329250u;
    {
        const bool branch_taken_0x329250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329250u;
        // 0x329254: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329250) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329258u;
label_329258:
    // 0x329258: 0x2454b0e0  addiu       $s4, $v0, -0x4F20
    ctx->pc = 0x329258u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
label_32925c:
    // 0x32925c: 0xc0b7186  jal         func_2DC618
label_329260:
    if (ctx->pc == 0x329260u) {
        ctx->pc = 0x329260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32925Cu;
        // 0x329260: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329264u;
        goto label_329264;
    }
    ctx->pc = 0x32925Cu;
    SET_GPR_U32(ctx, 31, 0x329264u);
    ctx->pc = 0x329260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32925Cu;
    // 0x329260: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC618u, 0x32925Cu, 0x329264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329264u;
label_329264:
    // 0x329264: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x329264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329268:
    // 0x329268: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_32926c:
    if (ctx->pc == 0x32926Cu) {
        ctx->pc = 0x32926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329268u;
        // 0x32926c: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329270u;
        goto label_329270;
    }
    ctx->pc = 0x329268u;
    {
        const bool branch_taken_0x329268 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x32926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329268u;
        // 0x32926c: 0x27b00070  addiu       $s0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329268) {
            ctx->pc = 0x32929Cu;
            goto label_32929c;
        }
    }
    ctx->pc = 0x329270u;
label_329270:
    // 0x329270: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x329270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_329274:
    // 0x329274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329278:
    // 0x329278: 0xc0efab3  jal         func_3BEACC
label_32927c:
    if (ctx->pc == 0x32927Cu) {
        ctx->pc = 0x32927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329278u;
        // 0x32927c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329280u;
        goto label_329280;
    }
    ctx->pc = 0x329278u;
    SET_GPR_U32(ctx, 31, 0x329280u);
    ctx->pc = 0x32927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329278u;
    // 0x32927c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x329278u, 0x329280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329280u;
label_329280:
    // 0x329280: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x329280u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
label_329284:
    // 0x329284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329288:
    // 0x329288: 0x24c64888  addiu       $a2, $a2, 0x4888
    ctx->pc = 0x329288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18568));
label_32928c:
    // 0x32928c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x32928cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_329290:
    // 0x329290: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x329290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329294:
    // 0x329294: 0xc0efed0  jal         func_3BFB40
label_329298:
    if (ctx->pc == 0x329298u) {
        ctx->pc = 0x329298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329294u;
        // 0x329298: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32929Cu;
        goto label_32929c;
    }
    ctx->pc = 0x329294u;
    SET_GPR_U32(ctx, 31, 0x32929Cu);
    ctx->pc = 0x329298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329294u;
    // 0x329298: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x329294u, 0x32929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32929Cu;
label_32929c:
    // 0x32929c: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x32929cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_3292a0:
    // 0x3292a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3292a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3292a4:
    // 0x3292a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3292a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3292a8:
    // 0x3292a8: 0xc0b6e3c  jal         func_2DB8F0
label_3292ac:
    if (ctx->pc == 0x3292ACu) {
        ctx->pc = 0x3292ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292A8u;
        // 0x3292ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3292B0u;
        goto label_3292b0;
    }
    ctx->pc = 0x3292A8u;
    SET_GPR_U32(ctx, 31, 0x3292B0u);
    ctx->pc = 0x3292ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292A8u;
    // 0x3292ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x3292A8u, 0x3292B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292B0u;
label_3292b0:
    // 0x3292b0: 0x10000225  b           . + 4 + (0x225 << 2)
label_3292b4:
    if (ctx->pc == 0x3292B4u) {
        ctx->pc = 0x3292B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292B0u;
        // 0x3292b4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3292B8u;
        goto label_3292b8;
    }
    ctx->pc = 0x3292B0u;
    {
        const bool branch_taken_0x3292b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3292B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292B0u;
        // 0x3292b4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3292b0) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3292B8u;
label_3292b8:
    // 0x3292b8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3292b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3292bc:
    // 0x3292bc: 0x8c431474  lw          $v1, 0x1474($v0)
    ctx->pc = 0x3292bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5236)));
label_3292c0:
    // 0x3292c0: 0x10000220  b           . + 4 + (0x220 << 2)
label_3292c4:
    if (ctx->pc == 0x3292C4u) {
        ctx->pc = 0x3292C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292C0u;
        // 0x3292c4: 0xae43003c  sw          $v1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3292C8u;
        goto label_3292c8;
    }
    ctx->pc = 0x3292C0u;
    {
        const bool branch_taken_0x3292c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3292C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292C0u;
        // 0x3292c4: 0xae43003c  sw          $v1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3292c0) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3292C8u;
label_3292c8:
    // 0x3292c8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3292c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3292cc:
    // 0x3292cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3292ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3292d0:
    // 0x3292d0: 0x2442b0e0  addiu       $v0, $v0, -0x4F20
    ctx->pc = 0x3292d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
label_3292d4:
    // 0x3292d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3292d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3292d8:
    // 0x3292d8: 0xc0b7082  jal         func_2DC208
label_3292dc:
    if (ctx->pc == 0x3292DCu) {
        ctx->pc = 0x3292DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292D8u;
        // 0x3292dc: 0xac406394  sw          $zero, 0x6394($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3292E0u;
        goto label_3292e0;
    }
    ctx->pc = 0x3292D8u;
    SET_GPR_U32(ctx, 31, 0x3292E0u);
    ctx->pc = 0x3292DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292D8u;
    // 0x3292dc: 0xac406394  sw          $zero, 0x6394($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x3292D8u, 0x3292E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292E0u;
label_3292e0:
    // 0x3292e0: 0x10000219  b           . + 4 + (0x219 << 2)
label_3292e4:
    if (ctx->pc == 0x3292E4u) {
        ctx->pc = 0x3292E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292E0u;
        // 0x3292e4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3292E8u;
        goto label_3292e8;
    }
    ctx->pc = 0x3292E0u;
    {
        const bool branch_taken_0x3292e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3292E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292E0u;
        // 0x3292e4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3292e0) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3292E8u;
label_3292e8:
    // 0x3292e8: 0xc0cdf40  jal         func_337D00
label_3292ec:
    if (ctx->pc == 0x3292ECu) {
        ctx->pc = 0x3292ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292E8u;
        // 0x3292ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3292F0u;
        goto label_3292f0;
    }
    ctx->pc = 0x3292E8u;
    SET_GPR_U32(ctx, 31, 0x3292F0u);
    ctx->pc = 0x3292ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292E8u;
    // 0x3292ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x3292E8u, 0x3292F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292F0u;
label_3292f0:
    // 0x3292f0: 0xc0cdf40  jal         func_337D00
label_3292f4:
    if (ctx->pc == 0x3292F4u) {
        ctx->pc = 0x3292F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292F0u;
        // 0x3292f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3292F8u;
        goto label_3292f8;
    }
    ctx->pc = 0x3292F0u;
    SET_GPR_U32(ctx, 31, 0x3292F8u);
    ctx->pc = 0x3292F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3292F0u;
    // 0x3292f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x3292F0u, 0x3292F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3292F8u;
label_3292f8:
    // 0x3292f8: 0x10000212  b           . + 4 + (0x212 << 2)
label_3292fc:
    if (ctx->pc == 0x3292FCu) {
        ctx->pc = 0x3292FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292F8u;
        // 0x3292fc: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329300u;
        goto label_329300;
    }
    ctx->pc = 0x3292F8u;
    {
        const bool branch_taken_0x3292f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3292FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3292F8u;
        // 0x3292fc: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3292f8) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329300u;
label_329300:
    // 0x329300: 0xc0cdf2e  jal         func_337CB8
label_329304:
    if (ctx->pc == 0x329304u) {
        ctx->pc = 0x329304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329300u;
        // 0x329304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329308u;
        goto label_329308;
    }
    ctx->pc = 0x329300u;
    SET_GPR_U32(ctx, 31, 0x329308u);
    ctx->pc = 0x329304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329300u;
    // 0x329304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329300u, 0x329308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329308u;
label_329308:
    // 0x329308: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x329308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_32930c:
    // 0x32930c: 0x1000020d  b           . + 4 + (0x20D << 2)
label_329310:
    if (ctx->pc == 0x329310u) {
        ctx->pc = 0x329310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32930Cu;
        // 0x329310: 0xac621490  sw          $v0, 0x1490($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329314u;
        goto label_329314;
    }
    ctx->pc = 0x32930Cu;
    {
        const bool branch_taken_0x32930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32930Cu;
        // 0x329310: 0xac621490  sw          $v0, 0x1490($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32930c) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329314u;
label_329314:
    // 0x329314: 0xc0cdf2e  jal         func_337CB8
label_329318:
    if (ctx->pc == 0x329318u) {
        ctx->pc = 0x329318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329314u;
        // 0x329318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32931Cu;
        goto label_32931c;
    }
    ctx->pc = 0x329314u;
    SET_GPR_U32(ctx, 31, 0x32931Cu);
    ctx->pc = 0x329318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329314u;
    // 0x329318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329314u, 0x32931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32931Cu;
label_32931c:
    // 0x32931c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x32931cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_329320:
    // 0x329320: 0x10000208  b           . + 4 + (0x208 << 2)
label_329324:
    if (ctx->pc == 0x329324u) {
        ctx->pc = 0x329324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329320u;
        // 0x329324: 0xac621498  sw          $v0, 0x1498($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329328u;
        goto label_329328;
    }
    ctx->pc = 0x329320u;
    {
        const bool branch_taken_0x329320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329320u;
        // 0x329324: 0xac621498  sw          $v0, 0x1498($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329320) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329328u;
label_329328:
    // 0x329328: 0xc0cdec0  jal         func_337B00
label_32932c:
    if (ctx->pc == 0x32932Cu) {
        ctx->pc = 0x32932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329328u;
        // 0x32932c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329330u;
        goto label_329330;
    }
    ctx->pc = 0x329328u;
    SET_GPR_U32(ctx, 31, 0x329330u);
    ctx->pc = 0x32932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329328u;
    // 0x32932c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x329328u, 0x329330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329330u;
label_329330:
    // 0x329330: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329334:
    // 0x329334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329338:
    // 0x329338: 0xc0cdbde  jal         func_336F78
label_32933c:
    if (ctx->pc == 0x32933Cu) {
        ctx->pc = 0x32933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329338u;
        // 0x32933c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329340u;
        goto label_329340;
    }
    ctx->pc = 0x329338u;
    SET_GPR_U32(ctx, 31, 0x329340u);
    ctx->pc = 0x32933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329338u;
    // 0x32933c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x329338u, 0x329340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329340u;
label_329340:
    // 0x329340: 0x50400200  beql        $v0, $zero, . + 4 + (0x200 << 2)
label_329344:
    if (ctx->pc == 0x329344u) {
        ctx->pc = 0x329344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329340u;
        // 0x329344: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329348u;
        goto label_329348;
    }
    ctx->pc = 0x329340u;
    {
        const bool branch_taken_0x329340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329340) {
            ctx->pc = 0x329344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329340u;
            // 0x329344: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329348u;
label_329348:
    // 0x329348: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x329348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_32934c:
    // 0x32934c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x32934cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_329350:
    // 0x329350: 0xc0f70ce  jal         func_3DC338
label_329354:
    if (ctx->pc == 0x329354u) {
        ctx->pc = 0x329354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329350u;
        // 0x329354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329358u;
        goto label_329358;
    }
    ctx->pc = 0x329350u;
    SET_GPR_U32(ctx, 31, 0x329358u);
    ctx->pc = 0x329354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329350u;
    // 0x329354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x329350u, 0x329358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329358u;
label_329358:
    // 0x329358: 0x1040fb4f  beqz        $v0, . + 4 + (-0x4B1 << 2)
label_32935c:
    if (ctx->pc == 0x32935Cu) {
        ctx->pc = 0x32935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329358u;
        // 0x32935c: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329360u;
        goto label_329360;
    }
    ctx->pc = 0x329358u;
    {
        const bool branch_taken_0x329358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329358u;
        // 0x32935c: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329358) {
            ctx->pc = 0x328098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328098;
        }
    }
    ctx->pc = 0x329360u;
label_329360:
    // 0x329360: 0xc0c4900  jal         func_312400
label_329364:
    if (ctx->pc == 0x329364u) {
        ctx->pc = 0x329364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329360u;
        // 0x329364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329368u;
        goto label_329368;
    }
    ctx->pc = 0x329360u;
    SET_GPR_U32(ctx, 31, 0x329368u);
    ctx->pc = 0x329364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329360u;
    // 0x329364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x329360u, 0x329368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329368u;
label_329368:
    // 0x329368: 0x1000fb4b  b           . + 4 + (-0x4B5 << 2)
label_32936c:
    if (ctx->pc == 0x32936Cu) {
        ctx->pc = 0x32936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329368u;
        // 0x32936c: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329370u;
        goto label_329370;
    }
    ctx->pc = 0x329368u;
    {
        const bool branch_taken_0x329368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329368u;
        // 0x32936c: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329368) {
            ctx->pc = 0x328098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328098;
        }
    }
    ctx->pc = 0x329370u;
label_329370:
    // 0x329370: 0xc0cded6  jal         func_337B58
label_329374:
    if (ctx->pc == 0x329374u) {
        ctx->pc = 0x329374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329370u;
        // 0x329374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329378u;
        goto label_329378;
    }
    ctx->pc = 0x329370u;
    SET_GPR_U32(ctx, 31, 0x329378u);
    ctx->pc = 0x329374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329370u;
    // 0x329374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B58u, 0x329370u, 0x329378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329378u;
label_329378:
    // 0x329378: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x329378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32937c:
    // 0x32937c: 0xc0cdf06  jal         func_337C18
label_329380:
    if (ctx->pc == 0x329380u) {
        ctx->pc = 0x329380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32937Cu;
        // 0x329380: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329384u;
        goto label_329384;
    }
    ctx->pc = 0x32937Cu;
    SET_GPR_U32(ctx, 31, 0x329384u);
    ctx->pc = 0x329380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32937Cu;
    // 0x329380: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337C18u, 0x32937Cu, 0x329384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329384u;
label_329384:
    // 0x329384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329388:
    // 0x329388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32938c:
    // 0x32938c: 0xc0cdbea  jal         func_336FA8
label_329390:
    if (ctx->pc == 0x329390u) {
        ctx->pc = 0x329390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32938Cu;
        // 0x329390: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329394u;
        goto label_329394;
    }
    ctx->pc = 0x32938Cu;
    SET_GPR_U32(ctx, 31, 0x329394u);
    ctx->pc = 0x329390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32938Cu;
    // 0x329390: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336FA8u, 0x32938Cu, 0x329394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329394u;
label_329394:
    // 0x329394: 0x104001eb  beqz        $v0, . + 4 + (0x1EB << 2)
label_329398:
    if (ctx->pc == 0x329398u) {
        ctx->pc = 0x329398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329394u;
        // 0x329398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32939Cu;
        goto label_32939c;
    }
    ctx->pc = 0x329394u;
    {
        const bool branch_taken_0x329394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329394u;
        // 0x329398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329394) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x32939Cu;
label_32939c:
    // 0x32939c: 0xc0cdc02  jal         func_337008
label_3293a0:
    if (ctx->pc == 0x3293A0u) {
        ctx->pc = 0x3293A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32939Cu;
        // 0x3293a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3293A4u;
        goto label_3293a4;
    }
    ctx->pc = 0x32939Cu;
    SET_GPR_U32(ctx, 31, 0x3293A4u);
    ctx->pc = 0x3293A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32939Cu;
    // 0x3293a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337008u, 0x32939Cu, 0x3293A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293A4u;
label_3293a4:
    // 0x3293a4: 0x544001e7  bnel        $v0, $zero, . + 4 + (0x1E7 << 2)
label_3293a8:
    if (ctx->pc == 0x3293A8u) {
        ctx->pc = 0x3293A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293A4u;
        // 0x3293a8: 0xae110060  sw          $s1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3293ACu;
        goto label_3293ac;
    }
    ctx->pc = 0x3293A4u;
    {
        const bool branch_taken_0x3293a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3293a4) {
            ctx->pc = 0x3293A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3293A4u;
            // 0x3293a8: 0xae110060  sw          $s1, 0x60($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3293ACu;
label_3293ac:
    // 0x3293ac: 0x100001e6  b           . + 4 + (0x1E6 << 2)
label_3293b0:
    if (ctx->pc == 0x3293B0u) {
        ctx->pc = 0x3293B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293ACu;
        // 0x3293b0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3293B4u;
        goto label_3293b4;
    }
    ctx->pc = 0x3293ACu;
    {
        const bool branch_taken_0x3293ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3293B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293ACu;
        // 0x3293b0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3293ac) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3293B4u;
label_3293b4:
    // 0x3293b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3293b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3293b8:
    // 0x3293b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3293b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3293bc:
    // 0x3293bc: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_3293c0:
    if (ctx->pc == 0x3293C0u) {
        ctx->pc = 0x3293C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293BCu;
        // 0x3293c0: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3293C4u;
        goto label_3293c4;
    }
    ctx->pc = 0x3293BCu;
    {
        const bool branch_taken_0x3293bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3293C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293BCu;
        // 0x3293c0: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3293bc) {
            ctx->pc = 0x329758u;
            goto label_329758;
        }
    }
    ctx->pc = 0x3293C4u;
label_3293c4:
    // 0x3293c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3293c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3293c8:
    // 0x3293c8: 0xc0cdec0  jal         func_337B00
label_3293cc:
    if (ctx->pc == 0x3293CCu) {
        ctx->pc = 0x3293CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293C8u;
        // 0x3293cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3293D0u;
        goto label_3293d0;
    }
    ctx->pc = 0x3293C8u;
    SET_GPR_U32(ctx, 31, 0x3293D0u);
    ctx->pc = 0x3293CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3293C8u;
    // 0x3293cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3293C8u, 0x3293D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293D0u;
label_3293d0:
    // 0x3293d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3293d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3293d4:
    // 0x3293d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3293d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3293d8:
    // 0x3293d8: 0xc0cdbde  jal         func_336F78
label_3293dc:
    if (ctx->pc == 0x3293DCu) {
        ctx->pc = 0x3293DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293D8u;
        // 0x3293dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3293E0u;
        goto label_3293e0;
    }
    ctx->pc = 0x3293D8u;
    SET_GPR_U32(ctx, 31, 0x3293E0u);
    ctx->pc = 0x3293DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3293D8u;
    // 0x3293dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x3293D8u, 0x3293E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293E0u;
label_3293e0:
    // 0x3293e0: 0x504001d9  beql        $v0, $zero, . + 4 + (0x1D9 << 2)
label_3293e4:
    if (ctx->pc == 0x3293E4u) {
        ctx->pc = 0x3293E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293E0u;
        // 0x3293e4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3293E8u;
        goto label_3293e8;
    }
    ctx->pc = 0x3293E0u;
    {
        const bool branch_taken_0x3293e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3293e0) {
            ctx->pc = 0x3293E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3293E0u;
            // 0x3293e4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3293E8u;
label_3293e8:
    // 0x3293e8: 0xc095368  jal         func_254DA0
label_3293ec:
    if (ctx->pc == 0x3293ECu) {
        ctx->pc = 0x3293ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293E8u;
        // 0x3293ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3293F0u;
        goto label_3293f0;
    }
    ctx->pc = 0x3293E8u;
    SET_GPR_U32(ctx, 31, 0x3293F0u);
    ctx->pc = 0x3293ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3293E8u;
    // 0x3293ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x3293E8u, 0x3293F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3293F0u;
label_3293f0:
    // 0x3293f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3293f4:
    if (ctx->pc == 0x3293F4u) {
        ctx->pc = 0x3293F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293F0u;
        // 0x3293f4: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3293F8u;
        goto label_3293f8;
    }
    ctx->pc = 0x3293F0u;
    {
        const bool branch_taken_0x3293f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3293F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293F0u;
        // 0x3293f4: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3293f0) {
            ctx->pc = 0x329414u;
            goto label_329414;
        }
    }
    ctx->pc = 0x3293F8u;
label_3293f8:
    // 0x3293f8: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x3293f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_3293fc:
    // 0x3293fc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x3293fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_329400:
    // 0x329400: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x329400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_329404:
    // 0x329404: 0x8ca20720  lw          $v0, 0x720($a1)
    ctx->pc = 0x329404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1824)));
label_329408:
    // 0x329408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x329408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32940c:
    // 0x32940c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_329410:
    if (ctx->pc == 0x329410u) {
        ctx->pc = 0x329410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32940Cu;
        // 0x329410: 0x8c510034  lw          $s1, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329414u;
        goto label_329414;
    }
    ctx->pc = 0x32940Cu;
    {
        const bool branch_taken_0x32940c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32940c) {
            ctx->pc = 0x329410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32940Cu;
            // 0x329410: 0x8c510034  lw          $s1, 0x34($v0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329414u;
            goto label_329414;
        }
    }
    ctx->pc = 0x329414u;
label_329414:
    // 0x329414: 0xae51003c  sw          $s1, 0x3C($s2)
    ctx->pc = 0x329414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
label_329418:
    // 0x329418: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x329418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32941c:
    // 0x32941c: 0xc0cdea8  jal         func_337AA0
label_329420:
    if (ctx->pc == 0x329420u) {
        ctx->pc = 0x329420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32941Cu;
        // 0x329420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329424u;
        goto label_329424;
    }
    ctx->pc = 0x32941Cu;
    SET_GPR_U32(ctx, 31, 0x329424u);
    ctx->pc = 0x329420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32941Cu;
    // 0x329420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x32941Cu, 0x329424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329424u;
label_329424:
    // 0x329424: 0x100000dc  b           . + 4 + (0xDC << 2)
label_329428:
    if (ctx->pc == 0x329428u) {
        ctx->pc = 0x329428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329424u;
        // 0x329428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32942Cu;
        goto label_32942c;
    }
    ctx->pc = 0x329424u;
    {
        const bool branch_taken_0x329424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329424u;
        // 0x329428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329424) {
            ctx->pc = 0x329798u;
            goto label_329798;
        }
    }
    ctx->pc = 0x32942Cu;
label_32942c:
    // 0x32942c: 0xc0cdf2e  jal         func_337CB8
label_329430:
    if (ctx->pc == 0x329430u) {
        ctx->pc = 0x329430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32942Cu;
        // 0x329430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329434u;
        goto label_329434;
    }
    ctx->pc = 0x32942Cu;
    SET_GPR_U32(ctx, 31, 0x329434u);
    ctx->pc = 0x329430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32942Cu;
    // 0x329430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32942Cu, 0x329434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329434u;
label_329434:
    // 0x329434: 0x100001c4  b           . + 4 + (0x1C4 << 2)
label_329438:
    if (ctx->pc == 0x329438u) {
        ctx->pc = 0x329438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329434u;
        // 0x329438: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32943Cu;
        goto label_32943c;
    }
    ctx->pc = 0x329434u;
    {
        const bool branch_taken_0x329434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329434u;
        // 0x329438: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329434) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x32943Cu;
label_32943c:
    // 0x32943c: 0xc0cdf2e  jal         func_337CB8
label_329440:
    if (ctx->pc == 0x329440u) {
        ctx->pc = 0x329440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32943Cu;
        // 0x329440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329444u;
        goto label_329444;
    }
    ctx->pc = 0x32943Cu;
    SET_GPR_U32(ctx, 31, 0x329444u);
    ctx->pc = 0x329440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32943Cu;
    // 0x329440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32943Cu, 0x329444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329444u;
label_329444:
    // 0x329444: 0xc0cdf52  jal         func_337D48
label_329448:
    if (ctx->pc == 0x329448u) {
        ctx->pc = 0x329448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329444u;
        // 0x329448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32944Cu;
        goto label_32944c;
    }
    ctx->pc = 0x329444u;
    SET_GPR_U32(ctx, 31, 0x32944Cu);
    ctx->pc = 0x329448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329444u;
    // 0x329448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x329444u, 0x32944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32944Cu;
label_32944c:
    // 0x32944c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32944cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329450:
    // 0x329450: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x329450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_329454:
    // 0x329454: 0xc0cdee8  jal         func_337BA0
label_329458:
    if (ctx->pc == 0x329458u) {
        ctx->pc = 0x329458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329454u;
        // 0x329458: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32945Cu;
        goto label_32945c;
    }
    ctx->pc = 0x329454u;
    SET_GPR_U32(ctx, 31, 0x32945Cu);
    ctx->pc = 0x329458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329454u;
    // 0x329458: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x329454u, 0x32945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32945Cu;
label_32945c:
    // 0x32945c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x32945cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_329460:
    // 0x329460: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x329460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329464:
    // 0x329464: 0xc0cdee8  jal         func_337BA0
label_329468:
    if (ctx->pc == 0x329468u) {
        ctx->pc = 0x329468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329464u;
        // 0x329468: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32946Cu;
        goto label_32946c;
    }
    ctx->pc = 0x329464u;
    SET_GPR_U32(ctx, 31, 0x32946Cu);
    ctx->pc = 0x329468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329464u;
    // 0x329468: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x329464u, 0x32946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32946Cu;
label_32946c:
    // 0x32946c: 0xc085d4e  jal         func_217538
label_329470:
    if (ctx->pc == 0x329470u) {
        ctx->pc = 0x329470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32946Cu;
        // 0x329470: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329474u;
        goto label_329474;
    }
    ctx->pc = 0x32946Cu;
    SET_GPR_U32(ctx, 31, 0x329474u);
    ctx->pc = 0x329470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32946Cu;
    // 0x329470: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x32946Cu, 0x329474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329474u;
label_329474:
    // 0x329474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329478:
    // 0x329478: 0x560001b2  bnel        $s0, $zero, . + 4 + (0x1B2 << 2)
label_32947c:
    if (ctx->pc == 0x32947Cu) {
        ctx->pc = 0x32947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329478u;
        // 0x32947c: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329480u;
        goto label_329480;
    }
    ctx->pc = 0x329478u;
    {
        const bool branch_taken_0x329478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x329478) {
            ctx->pc = 0x32947Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329478u;
            // 0x32947c: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329480u;
label_329480:
    // 0x329480: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x329480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_329484:
    // 0x329484: 0xc085d2a  jal         func_2174A8
label_329488:
    if (ctx->pc == 0x329488u) {
        ctx->pc = 0x329488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329484u;
        // 0x329488: 0x2484bef0  addiu       $a0, $a0, -0x4110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32948Cu;
        goto label_32948c;
    }
    ctx->pc = 0x329484u;
    SET_GPR_U32(ctx, 31, 0x32948Cu);
    ctx->pc = 0x329488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329484u;
    // 0x329488: 0x2484bef0  addiu       $a0, $a0, -0x4110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x329484u, 0x32948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32948Cu;
label_32948c:
    // 0x32948c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32948cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329490:
    // 0x329490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329494:
    // 0x329494: 0xc0cdbd2  jal         func_336F48
label_329498:
    if (ctx->pc == 0x329498u) {
        ctx->pc = 0x329498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329494u;
        // 0x329498: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32949Cu;
        goto label_32949c;
    }
    ctx->pc = 0x329494u;
    SET_GPR_U32(ctx, 31, 0x32949Cu);
    ctx->pc = 0x329498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329494u;
    // 0x329498: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F48u, 0x329494u, 0x32949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32949Cu;
label_32949c:
    // 0x32949c: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
label_3294a0:
    if (ctx->pc == 0x3294A0u) {
        ctx->pc = 0x3294A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32949Cu;
        // 0x3294a0: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3294A4u;
        goto label_3294a4;
    }
    ctx->pc = 0x32949Cu;
    {
        const bool branch_taken_0x32949c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32949c) {
            ctx->pc = 0x3294A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32949Cu;
            // 0x3294a0: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329594u;
            goto label_329594;
        }
    }
    ctx->pc = 0x3294A4u;
label_3294a4:
    // 0x3294a4: 0xc083072  jal         func_20C1C8
label_3294a8:
    if (ctx->pc == 0x3294A8u) {
        ctx->pc = 0x3294A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294A4u;
        // 0x3294a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3294ACu;
        goto label_3294ac;
    }
    ctx->pc = 0x3294A4u;
    SET_GPR_U32(ctx, 31, 0x3294ACu);
    ctx->pc = 0x3294A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294A4u;
    // 0x3294a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x3294A4u, 0x3294ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294ACu;
label_3294ac:
    // 0x3294ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3294acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3294b0:
    // 0x3294b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3294b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3294b4:
    // 0x3294b4: 0xc0cdbde  jal         func_336F78
label_3294b8:
    if (ctx->pc == 0x3294B8u) {
        ctx->pc = 0x3294B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294B4u;
        // 0x3294b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3294BCu;
        goto label_3294bc;
    }
    ctx->pc = 0x3294B4u;
    SET_GPR_U32(ctx, 31, 0x3294BCu);
    ctx->pc = 0x3294B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294B4u;
    // 0x3294b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x3294B4u, 0x3294BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294BCu;
label_3294bc:
    // 0x3294bc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_3294c0:
    if (ctx->pc == 0x3294C0u) {
        ctx->pc = 0x3294C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294BCu;
        // 0x3294c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3294C4u;
        goto label_3294c4;
    }
    ctx->pc = 0x3294BCu;
    {
        const bool branch_taken_0x3294bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3294C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294BCu;
        // 0x3294c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294bc) {
            ctx->pc = 0x329590u;
            goto label_329590;
        }
    }
    ctx->pc = 0x3294C4u;
label_3294c4:
    // 0x3294c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3294c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3294c8:
    // 0x3294c8: 0xc09b0ba  jal         func_26C2E8
label_3294cc:
    if (ctx->pc == 0x3294CCu) {
        ctx->pc = 0x3294CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294C8u;
        // 0x3294cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3294D0u;
        goto label_3294d0;
    }
    ctx->pc = 0x3294C8u;
    SET_GPR_U32(ctx, 31, 0x3294D0u);
    ctx->pc = 0x3294CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294C8u;
    // 0x3294cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C2E8u, 0x3294C8u, 0x3294D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294D0u;
label_3294d0:
    // 0x3294d0: 0x10000027  b           . + 4 + (0x27 << 2)
label_3294d4:
    if (ctx->pc == 0x3294D4u) {
        ctx->pc = 0x3294D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294D0u;
        // 0x3294d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3294D8u;
        goto label_3294d8;
    }
    ctx->pc = 0x3294D0u;
    {
        const bool branch_taken_0x3294d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3294D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294D0u;
        // 0x3294d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3294d0) {
            ctx->pc = 0x329570u;
            goto label_329570;
        }
    }
    ctx->pc = 0x3294D8u;
label_3294d8:
    // 0x3294d8: 0xc0cdf2e  jal         func_337CB8
label_3294dc:
    if (ctx->pc == 0x3294DCu) {
        ctx->pc = 0x3294DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294D8u;
        // 0x3294dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3294E0u;
        goto label_3294e0;
    }
    ctx->pc = 0x3294D8u;
    SET_GPR_U32(ctx, 31, 0x3294E0u);
    ctx->pc = 0x3294DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294D8u;
    // 0x3294dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3294D8u, 0x3294E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294E0u;
label_3294e0:
    // 0x3294e0: 0xc0cdf52  jal         func_337D48
label_3294e4:
    if (ctx->pc == 0x3294E4u) {
        ctx->pc = 0x3294E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294E0u;
        // 0x3294e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3294E8u;
        goto label_3294e8;
    }
    ctx->pc = 0x3294E0u;
    SET_GPR_U32(ctx, 31, 0x3294E8u);
    ctx->pc = 0x3294E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294E0u;
    // 0x3294e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x3294E0u, 0x3294E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294E8u;
label_3294e8:
    // 0x3294e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3294e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3294ec:
    // 0x3294ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3294ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3294f0:
    // 0x3294f0: 0xc0cdee8  jal         func_337BA0
label_3294f4:
    if (ctx->pc == 0x3294F4u) {
        ctx->pc = 0x3294F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294F0u;
        // 0x3294f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3294F8u;
        goto label_3294f8;
    }
    ctx->pc = 0x3294F0u;
    SET_GPR_U32(ctx, 31, 0x3294F8u);
    ctx->pc = 0x3294F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3294F0u;
    // 0x3294f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x3294F0u, 0x3294F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294F8u;
label_3294f8:
    // 0x3294f8: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x3294f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3294fc:
    // 0x3294fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3294fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329500:
    // 0x329500: 0xc0cdee8  jal         func_337BA0
label_329504:
    if (ctx->pc == 0x329504u) {
        ctx->pc = 0x329504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329500u;
        // 0x329504: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329508u;
        goto label_329508;
    }
    ctx->pc = 0x329500u;
    SET_GPR_U32(ctx, 31, 0x329508u);
    ctx->pc = 0x329504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329500u;
    // 0x329504: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x329500u, 0x329508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329508u;
label_329508:
    // 0x329508: 0xc085d4e  jal         func_217538
label_32950c:
    if (ctx->pc == 0x32950Cu) {
        ctx->pc = 0x32950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329508u;
        // 0x32950c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329510u;
        goto label_329510;
    }
    ctx->pc = 0x329508u;
    SET_GPR_U32(ctx, 31, 0x329510u);
    ctx->pc = 0x32950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329508u;
    // 0x32950c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x329508u, 0x329510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329510u;
label_329510:
    // 0x329510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329514:
    // 0x329514: 0x5600018b  bnel        $s0, $zero, . + 4 + (0x18B << 2)
label_329518:
    if (ctx->pc == 0x329518u) {
        ctx->pc = 0x329518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329514u;
        // 0x329518: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32951Cu;
        goto label_32951c;
    }
    ctx->pc = 0x329514u;
    {
        const bool branch_taken_0x329514 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x329514) {
            ctx->pc = 0x329518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329514u;
            // 0x329518: 0xae40003c  sw          $zero, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x32951Cu;
label_32951c:
    // 0x32951c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x32951cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_329520:
    // 0x329520: 0xc085d2a  jal         func_2174A8
label_329524:
    if (ctx->pc == 0x329524u) {
        ctx->pc = 0x329524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329520u;
        // 0x329524: 0x2484bef0  addiu       $a0, $a0, -0x4110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329528u;
        goto label_329528;
    }
    ctx->pc = 0x329520u;
    SET_GPR_U32(ctx, 31, 0x329528u);
    ctx->pc = 0x329524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329520u;
    // 0x329524: 0x2484bef0  addiu       $a0, $a0, -0x4110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x329520u, 0x329528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329528u;
label_329528:
    // 0x329528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x329528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32952c:
    // 0x32952c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329530:
    // 0x329530: 0xc0cdbd2  jal         func_336F48
label_329534:
    if (ctx->pc == 0x329534u) {
        ctx->pc = 0x329534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329530u;
        // 0x329534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329538u;
        goto label_329538;
    }
    ctx->pc = 0x329530u;
    SET_GPR_U32(ctx, 31, 0x329538u);
    ctx->pc = 0x329534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329530u;
    // 0x329534: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F48u, 0x329530u, 0x329538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329538u;
label_329538:
    // 0x329538: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_32953c:
    if (ctx->pc == 0x32953Cu) {
        ctx->pc = 0x32953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329538u;
        // 0x32953c: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329540u;
        goto label_329540;
    }
    ctx->pc = 0x329538u;
    {
        const bool branch_taken_0x329538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329538) {
            ctx->pc = 0x32953Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329538u;
            // 0x32953c: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329594u;
            goto label_329594;
        }
    }
    ctx->pc = 0x329540u;
label_329540:
    // 0x329540: 0xc083072  jal         func_20C1C8
label_329544:
    if (ctx->pc == 0x329544u) {
        ctx->pc = 0x329544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329540u;
        // 0x329544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329548u;
        goto label_329548;
    }
    ctx->pc = 0x329540u;
    SET_GPR_U32(ctx, 31, 0x329548u);
    ctx->pc = 0x329544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329540u;
    // 0x329544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x329540u, 0x329548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329548u;
label_329548:
    // 0x329548: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32954c:
    // 0x32954c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32954cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329550:
    // 0x329550: 0xc0cdbde  jal         func_336F78
label_329554:
    if (ctx->pc == 0x329554u) {
        ctx->pc = 0x329554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329550u;
        // 0x329554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329558u;
        goto label_329558;
    }
    ctx->pc = 0x329550u;
    SET_GPR_U32(ctx, 31, 0x329558u);
    ctx->pc = 0x329554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329550u;
    // 0x329554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x329550u, 0x329558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329558u;
label_329558:
    // 0x329558: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_32955c:
    if (ctx->pc == 0x32955Cu) {
        ctx->pc = 0x32955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329558u;
        // 0x32955c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329560u;
        goto label_329560;
    }
    ctx->pc = 0x329558u;
    {
        const bool branch_taken_0x329558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329558u;
        // 0x32955c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329558) {
            ctx->pc = 0x329590u;
            goto label_329590;
        }
    }
    ctx->pc = 0x329560u;
label_329560:
    // 0x329560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329564:
    // 0x329564: 0xc09b12a  jal         func_26C4A8
label_329568:
    if (ctx->pc == 0x329568u) {
        ctx->pc = 0x329568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329564u;
        // 0x329568: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32956Cu;
        goto label_32956c;
    }
    ctx->pc = 0x329564u;
    SET_GPR_U32(ctx, 31, 0x32956Cu);
    ctx->pc = 0x329568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329564u;
    // 0x329568: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C4A8u, 0x329564u, 0x32956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32956Cu;
label_32956c:
    // 0x32956c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x32956cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_329570:
    // 0x329570: 0xc083942  jal         func_20E508
label_329574:
    if (ctx->pc == 0x329574u) {
        ctx->pc = 0x329574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329570u;
        // 0x329574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329578u;
        goto label_329578;
    }
    ctx->pc = 0x329570u;
    SET_GPR_U32(ctx, 31, 0x329578u);
    ctx->pc = 0x329574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329570u;
    // 0x329574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x329570u, 0x329578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329578u;
label_329578:
    // 0x329578: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x329578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_32957c:
    // 0x32957c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32957cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_329580:
    // 0x329580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329584:
    // 0x329584: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x329584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_329588:
    // 0x329588: 0x40f809  jalr        $v0
label_32958c:
    if (ctx->pc == 0x32958Cu) {
        ctx->pc = 0x32958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329588u;
        // 0x32958c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329590u;
        goto label_329590;
    }
    ctx->pc = 0x329588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x329590u);
        ctx->pc = 0x32958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329588u;
        // 0x32958c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329588u, 0x329590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329590u;
label_329590:
    // 0x329590: 0xae50003c  sw          $s0, 0x3C($s2)
    ctx->pc = 0x329590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
label_329594:
    // 0x329594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329598:
    // 0x329598: 0xc0cdea8  jal         func_337AA0
label_32959c:
    if (ctx->pc == 0x32959Cu) {
        ctx->pc = 0x32959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329598u;
        // 0x32959c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3295A0u;
        goto label_3295a0;
    }
    ctx->pc = 0x329598u;
    SET_GPR_U32(ctx, 31, 0x3295A0u);
    ctx->pc = 0x32959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329598u;
    // 0x32959c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x329598u, 0x3295A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295A0u;
label_3295a0:
    // 0x3295a0: 0x10000169  b           . + 4 + (0x169 << 2)
label_3295a4:
    if (ctx->pc == 0x3295A4u) {
        ctx->pc = 0x3295A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295A0u;
        // 0x3295a4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3295A8u;
        goto label_3295a8;
    }
    ctx->pc = 0x3295A0u;
    {
        const bool branch_taken_0x3295a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3295A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295A0u;
        // 0x3295a4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295a0) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3295A8u;
label_3295a8:
    // 0x3295a8: 0xc0cdf2e  jal         func_337CB8
label_3295ac:
    if (ctx->pc == 0x3295ACu) {
        ctx->pc = 0x3295ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295A8u;
        // 0x3295ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3295B0u;
        goto label_3295b0;
    }
    ctx->pc = 0x3295A8u;
    SET_GPR_U32(ctx, 31, 0x3295B0u);
    ctx->pc = 0x3295ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295A8u;
    // 0x3295ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3295A8u, 0x3295B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295B0u;
label_3295b0:
    // 0x3295b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3295b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3295b4:
    // 0x3295b4: 0xc0cdf2e  jal         func_337CB8
label_3295b8:
    if (ctx->pc == 0x3295B8u) {
        ctx->pc = 0x3295B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295B4u;
        // 0x3295b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3295BCu;
        goto label_3295bc;
    }
    ctx->pc = 0x3295B4u;
    SET_GPR_U32(ctx, 31, 0x3295BCu);
    ctx->pc = 0x3295B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295B4u;
    // 0x3295b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3295B4u, 0x3295BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295BCu;
label_3295bc:
    // 0x3295bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3295bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3295c0:
    // 0x3295c0: 0xc0cdec0  jal         func_337B00
label_3295c4:
    if (ctx->pc == 0x3295C4u) {
        ctx->pc = 0x3295C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295C0u;
        // 0x3295c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3295C8u;
        goto label_3295c8;
    }
    ctx->pc = 0x3295C0u;
    SET_GPR_U32(ctx, 31, 0x3295C8u);
    ctx->pc = 0x3295C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295C0u;
    // 0x3295c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3295C0u, 0x3295C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295C8u;
label_3295c8:
    // 0x3295c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3295c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3295cc:
    // 0x3295cc: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x3295ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_3295d0:
    // 0x3295d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3295d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3295d4:
    // 0x3295d4: 0xc0cdc76  jal         func_3371D8
label_3295d8:
    if (ctx->pc == 0x3295D8u) {
        ctx->pc = 0x3295D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295D4u;
        // 0x3295d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3295DCu;
        goto label_3295dc;
    }
    ctx->pc = 0x3295D4u;
    SET_GPR_U32(ctx, 31, 0x3295DCu);
    ctx->pc = 0x3295D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295D4u;
    // 0x3295d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x3295D4u, 0x3295DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295DCu;
label_3295dc:
    // 0x3295dc: 0x5040015a  beql        $v0, $zero, . + 4 + (0x15A << 2)
label_3295e0:
    if (ctx->pc == 0x3295E0u) {
        ctx->pc = 0x3295E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295DCu;
        // 0x3295e0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3295E4u;
        goto label_3295e4;
    }
    ctx->pc = 0x3295DCu;
    {
        const bool branch_taken_0x3295dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3295dc) {
            ctx->pc = 0x3295E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3295DCu;
            // 0x3295e0: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3295E4u;
label_3295e4:
    // 0x3295e4: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x3295e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_3295e8:
    // 0x3295e8: 0x50800157  beql        $a0, $zero, . + 4 + (0x157 << 2)
label_3295ec:
    if (ctx->pc == 0x3295ECu) {
        ctx->pc = 0x3295ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295E8u;
        // 0x3295ec: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3295F0u;
        goto label_3295f0;
    }
    ctx->pc = 0x3295E8u;
    {
        const bool branch_taken_0x3295e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3295e8) {
            ctx->pc = 0x3295ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3295E8u;
            // 0x3295ec: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3295F0u;
label_3295f0:
    // 0x3295f0: 0xc0ac9b2  jal         func_2B26C8
label_3295f4:
    if (ctx->pc == 0x3295F4u) {
        ctx->pc = 0x3295F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295F0u;
        // 0x3295f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3295F8u;
        goto label_3295f8;
    }
    ctx->pc = 0x3295F0u;
    SET_GPR_U32(ctx, 31, 0x3295F8u);
    ctx->pc = 0x3295F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3295F0u;
    // 0x3295f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B26C8u, 0x3295F0u, 0x3295F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3295F8u;
label_3295f8:
    // 0x3295f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3295f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3295fc:
    // 0x3295fc: 0x10800152  beqz        $a0, . + 4 + (0x152 << 2)
label_329600:
    if (ctx->pc == 0x329600u) {
        ctx->pc = 0x329600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295FCu;
        // 0x329600: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329604u;
        goto label_329604;
    }
    ctx->pc = 0x3295FCu;
    {
        const bool branch_taken_0x3295fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x329600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3295FCu;
        // 0x329600: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3295fc) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329604u;
label_329604:
    // 0x329604: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x329604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_329608:
    // 0x329608: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x329608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_32960c:
    // 0x32960c: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x32960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_329610:
    // 0x329610: 0x5440014e  bnel        $v0, $zero, . + 4 + (0x14E << 2)
label_329614:
    if (ctx->pc == 0x329614u) {
        ctx->pc = 0x329614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329610u;
        // 0x329614: 0xdfb10188  ld          $s1, 0x188($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329618u;
        goto label_329618;
    }
    ctx->pc = 0x329610u;
    {
        const bool branch_taken_0x329610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329610) {
            ctx->pc = 0x329614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329610u;
            // 0x329614: 0xdfb10188  ld          $s1, 0x188($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 392)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B4Cu;
            goto label_329b4c;
        }
    }
    ctx->pc = 0x329618u;
label_329618:
    // 0x329618: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x329618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
label_32961c:
    // 0x32961c: 0x5200014a  beql        $s0, $zero, . + 4 + (0x14A << 2)
label_329620:
    if (ctx->pc == 0x329620u) {
        ctx->pc = 0x329620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32961Cu;
        // 0x329620: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329624u;
        goto label_329624;
    }
    ctx->pc = 0x32961Cu;
    {
        const bool branch_taken_0x32961c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32961c) {
            ctx->pc = 0x329620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32961Cu;
            // 0x329620: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329624u;
label_329624:
    // 0x329624: 0xc0d8de2  jal         func_363788
label_329628:
    if (ctx->pc == 0x329628u) {
        ctx->pc = 0x329628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329624u;
        // 0x329628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32962Cu;
        goto label_32962c;
    }
    ctx->pc = 0x329624u;
    SET_GPR_U32(ctx, 31, 0x32962Cu);
    ctx->pc = 0x329628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329624u;
    // 0x329628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x329624u, 0x32962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32962Cu;
label_32962c:
    // 0x32962c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x32962cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_329630:
    // 0x329630: 0x54400145  bnel        $v0, $zero, . + 4 + (0x145 << 2)
label_329634:
    if (ctx->pc == 0x329634u) {
        ctx->pc = 0x329634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329630u;
        // 0x329634: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329638u;
        goto label_329638;
    }
    ctx->pc = 0x329630u;
    {
        const bool branch_taken_0x329630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329630) {
            ctx->pc = 0x329634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329630u;
            // 0x329634: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329638u;
label_329638:
    // 0x329638: 0xc0fbd8e  jal         func_3EF638
label_32963c:
    if (ctx->pc == 0x32963Cu) {
        ctx->pc = 0x32963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329638u;
        // 0x32963c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329640u;
        goto label_329640;
    }
    ctx->pc = 0x329638u;
    SET_GPR_U32(ctx, 31, 0x329640u);
    ctx->pc = 0x32963Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329638u;
    // 0x32963c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF638u, 0x329638u, 0x329640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329640u;
label_329640:
    // 0x329640: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x329640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_329644:
    // 0x329644: 0xc0d9080  jal         func_364200
label_329648:
    if (ctx->pc == 0x329648u) {
        ctx->pc = 0x329648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329644u;
        // 0x329648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32964Cu;
        goto label_32964c;
    }
    ctx->pc = 0x329644u;
    SET_GPR_U32(ctx, 31, 0x32964Cu);
    ctx->pc = 0x329648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329644u;
    // 0x329648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364200u, 0x329644u, 0x32964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32964Cu;
label_32964c:
    // 0x32964c: 0x1000fa92  b           . + 4 + (-0x56E << 2)
label_329650:
    if (ctx->pc == 0x329650u) {
        ctx->pc = 0x329650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32964Cu;
        // 0x329650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329654u;
        goto label_329654;
    }
    ctx->pc = 0x32964Cu;
    {
        const bool branch_taken_0x32964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32964Cu;
        // 0x329650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32964c) {
            ctx->pc = 0x328098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328098;
        }
    }
    ctx->pc = 0x329654u;
label_329654:
    // 0x329654: 0xc0cdec0  jal         func_337B00
label_329658:
    if (ctx->pc == 0x329658u) {
        ctx->pc = 0x329658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329654u;
        // 0x329658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32965Cu;
        goto label_32965c;
    }
    ctx->pc = 0x329654u;
    SET_GPR_U32(ctx, 31, 0x32965Cu);
    ctx->pc = 0x329658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329654u;
    // 0x329658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x329654u, 0x32965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32965Cu;
label_32965c:
    // 0x32965c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32965cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329660:
    // 0x329660: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x329660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_329664:
    // 0x329664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329668:
    // 0x329668: 0xc0cdc76  jal         func_3371D8
label_32966c:
    if (ctx->pc == 0x32966Cu) {
        ctx->pc = 0x32966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329668u;
        // 0x32966c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329670u;
        goto label_329670;
    }
    ctx->pc = 0x329668u;
    SET_GPR_U32(ctx, 31, 0x329670u);
    ctx->pc = 0x32966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329668u;
    // 0x32966c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x329668u, 0x329670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329670u;
label_329670:
    // 0x329670: 0x50400135  beql        $v0, $zero, . + 4 + (0x135 << 2)
label_329674:
    if (ctx->pc == 0x329674u) {
        ctx->pc = 0x329674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329670u;
        // 0x329674: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329678u;
        goto label_329678;
    }
    ctx->pc = 0x329670u;
    {
        const bool branch_taken_0x329670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329670) {
            ctx->pc = 0x329674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329670u;
            // 0x329674: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329678u;
label_329678:
    // 0x329678: 0xc0899bc  jal         func_2266F0
label_32967c:
    if (ctx->pc == 0x32967Cu) {
        ctx->pc = 0x32967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329678u;
        // 0x32967c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329680u;
        goto label_329680;
    }
    ctx->pc = 0x329678u;
    SET_GPR_U32(ctx, 31, 0x329680u);
    ctx->pc = 0x32967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329678u;
    // 0x32967c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x329678u, 0x329680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329680u;
label_329680:
    // 0x329680: 0x10400131  beqz        $v0, . + 4 + (0x131 << 2)
label_329684:
    if (ctx->pc == 0x329684u) {
        ctx->pc = 0x329684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329680u;
        // 0x329684: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329688u;
        goto label_329688;
    }
    ctx->pc = 0x329680u;
    {
        const bool branch_taken_0x329680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329680u;
        // 0x329684: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329680) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329688u;
label_329688:
    // 0x329688: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x329688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_32968c:
    // 0x32968c: 0x8c430220  lw          $v1, 0x220($v0)
    ctx->pc = 0x32968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
label_329690:
    // 0x329690: 0x1000012d  b           . + 4 + (0x12D << 2)
label_329694:
    if (ctx->pc == 0x329694u) {
        ctx->pc = 0x329694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329690u;
        // 0x329694: 0xae43003c  sw          $v1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329698u;
        goto label_329698;
    }
    ctx->pc = 0x329690u;
    {
        const bool branch_taken_0x329690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329690u;
        // 0x329694: 0xae43003c  sw          $v1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329690) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329698u;
label_329698:
    // 0x329698: 0xc0cdec0  jal         func_337B00
label_32969c:
    if (ctx->pc == 0x32969Cu) {
        ctx->pc = 0x32969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329698u;
        // 0x32969c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3296A0u;
        goto label_3296a0;
    }
    ctx->pc = 0x329698u;
    SET_GPR_U32(ctx, 31, 0x3296A0u);
    ctx->pc = 0x32969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329698u;
    // 0x32969c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x329698u, 0x3296A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3296A0u;
label_3296a0:
    // 0x3296a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3296a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3296a4:
    // 0x3296a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3296a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3296a8:
    // 0x3296a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3296a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3296ac:
    // 0x3296ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3296acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3296b0:
    // 0x3296b0: 0xc0cdbde  jal         func_336F78
label_3296b4:
    if (ctx->pc == 0x3296B4u) {
        ctx->pc = 0x3296B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296B0u;
        // 0x3296b4: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3296B8u;
        goto label_3296b8;
    }
    ctx->pc = 0x3296B0u;
    SET_GPR_U32(ctx, 31, 0x3296B8u);
    ctx->pc = 0x3296B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3296B0u;
    // 0x3296b4: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x3296B0u, 0x3296B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3296B8u;
label_3296b8:
    // 0x3296b8: 0x50400123  beql        $v0, $zero, . + 4 + (0x123 << 2)
label_3296bc:
    if (ctx->pc == 0x3296BCu) {
        ctx->pc = 0x3296BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296B8u;
        // 0x3296bc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3296C0u;
        goto label_3296c0;
    }
    ctx->pc = 0x3296B8u;
    {
        const bool branch_taken_0x3296b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3296b8) {
            ctx->pc = 0x3296BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3296B8u;
            // 0x3296bc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3296C0u;
label_3296c0:
    // 0x3296c0: 0x1000fa75  b           . + 4 + (-0x58B << 2)
label_3296c4:
    if (ctx->pc == 0x3296C4u) {
        ctx->pc = 0x3296C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296C0u;
        // 0x3296c4: 0x8e020138  lw          $v0, 0x138($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3296C8u;
        goto label_3296c8;
    }
    ctx->pc = 0x3296C0u;
    {
        const bool branch_taken_0x3296c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3296C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296C0u;
        // 0x3296c4: 0x8e020138  lw          $v0, 0x138($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3296c0) {
            ctx->pc = 0x328098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328098;
        }
    }
    ctx->pc = 0x3296C8u;
label_3296c8:
    // 0x3296c8: 0xc0cdf2e  jal         func_337CB8
label_3296cc:
    if (ctx->pc == 0x3296CCu) {
        ctx->pc = 0x3296CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296C8u;
        // 0x3296cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3296D0u;
        goto label_3296d0;
    }
    ctx->pc = 0x3296C8u;
    SET_GPR_U32(ctx, 31, 0x3296D0u);
    ctx->pc = 0x3296CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3296C8u;
    // 0x3296cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3296C8u, 0x3296D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3296D0u;
label_3296d0:
    // 0x3296d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3296d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3296d4:
    // 0x3296d4: 0xc0cdec0  jal         func_337B00
label_3296d8:
    if (ctx->pc == 0x3296D8u) {
        ctx->pc = 0x3296D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296D4u;
        // 0x3296d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3296DCu;
        goto label_3296dc;
    }
    ctx->pc = 0x3296D4u;
    SET_GPR_U32(ctx, 31, 0x3296DCu);
    ctx->pc = 0x3296D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3296D4u;
    // 0x3296d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3296D4u, 0x3296DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3296DCu;
label_3296dc:
    // 0x3296dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3296dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3296e0:
    // 0x3296e0: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x3296e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_3296e4:
    // 0x3296e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3296e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3296e8:
    // 0x3296e8: 0xc0cdbde  jal         func_336F78
label_3296ec:
    if (ctx->pc == 0x3296ECu) {
        ctx->pc = 0x3296ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296E8u;
        // 0x3296ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3296F0u;
        goto label_3296f0;
    }
    ctx->pc = 0x3296E8u;
    SET_GPR_U32(ctx, 31, 0x3296F0u);
    ctx->pc = 0x3296ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3296E8u;
    // 0x3296ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x3296E8u, 0x3296F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3296F0u;
label_3296f0:
    // 0x3296f0: 0x10400114  beqz        $v0, . + 4 + (0x114 << 2)
label_3296f4:
    if (ctx->pc == 0x3296F4u) {
        ctx->pc = 0x3296F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296F0u;
        // 0x3296f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3296F8u;
        goto label_3296f8;
    }
    ctx->pc = 0x3296F0u;
    {
        const bool branch_taken_0x3296f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3296F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296F0u;
        // 0x3296f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3296f0) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3296F8u;
label_3296f8:
    // 0x3296f8: 0xc0848ba  jal         func_2122E8
label_3296fc:
    if (ctx->pc == 0x3296FCu) {
        ctx->pc = 0x3296FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3296F8u;
        // 0x3296fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329700u;
        goto label_329700;
    }
    ctx->pc = 0x3296F8u;
    SET_GPR_U32(ctx, 31, 0x329700u);
    ctx->pc = 0x3296FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3296F8u;
    // 0x3296fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2122E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2122E8u, 0x3296F8u, 0x329700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329700u;
label_329700:
    // 0x329700: 0x10000110  b           . + 4 + (0x110 << 2)
label_329704:
    if (ctx->pc == 0x329704u) {
        ctx->pc = 0x329704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329700u;
        // 0x329704: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329708u;
        goto label_329708;
    }
    ctx->pc = 0x329700u;
    {
        const bool branch_taken_0x329700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329700u;
        // 0x329704: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329700) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329708u;
label_329708:
    // 0x329708: 0xc0cdf2e  jal         func_337CB8
label_32970c:
    if (ctx->pc == 0x32970Cu) {
        ctx->pc = 0x32970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329708u;
        // 0x32970c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329710u;
        goto label_329710;
    }
    ctx->pc = 0x329708u;
    SET_GPR_U32(ctx, 31, 0x329710u);
    ctx->pc = 0x32970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329708u;
    // 0x32970c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329708u, 0x329710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329710u;
label_329710:
    // 0x329710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329714:
    // 0x329714: 0xc0cdec0  jal         func_337B00
label_329718:
    if (ctx->pc == 0x329718u) {
        ctx->pc = 0x329718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329714u;
        // 0x329718: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32971Cu;
        goto label_32971c;
    }
    ctx->pc = 0x329714u;
    SET_GPR_U32(ctx, 31, 0x32971Cu);
    ctx->pc = 0x329718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329714u;
    // 0x329718: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x329714u, 0x32971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32971Cu;
label_32971c:
    // 0x32971c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32971cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329720:
    // 0x329720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329724:
    // 0x329724: 0xc0cdc76  jal         func_3371D8
label_329728:
    if (ctx->pc == 0x329728u) {
        ctx->pc = 0x329728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329724u;
        // 0x329728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32972Cu;
        goto label_32972c;
    }
    ctx->pc = 0x329724u;
    SET_GPR_U32(ctx, 31, 0x32972Cu);
    ctx->pc = 0x329728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329724u;
    // 0x329728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3371D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3371D8u, 0x329724u, 0x32972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32972Cu;
label_32972c:
    // 0x32972c: 0x50400106  beql        $v0, $zero, . + 4 + (0x106 << 2)
label_329730:
    if (ctx->pc == 0x329730u) {
        ctx->pc = 0x329730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32972Cu;
        // 0x329730: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329734u;
        goto label_329734;
    }
    ctx->pc = 0x32972Cu;
    {
        const bool branch_taken_0x32972c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32972c) {
            ctx->pc = 0x329730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32972Cu;
            // 0x329730: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329734u;
label_329734:
    // 0x329734: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x329734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_329738:
    // 0x329738: 0xc0ac9c6  jal         func_2B2718
label_32973c:
    if (ctx->pc == 0x32973Cu) {
        ctx->pc = 0x32973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329738u;
        // 0x32973c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329740u;
        goto label_329740;
    }
    ctx->pc = 0x329738u;
    SET_GPR_U32(ctx, 31, 0x329740u);
    ctx->pc = 0x32973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329738u;
    // 0x32973c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2718u, 0x329738u, 0x329740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329740u;
label_329740:
    // 0x329740: 0x10000100  b           . + 4 + (0x100 << 2)
label_329744:
    if (ctx->pc == 0x329744u) {
        ctx->pc = 0x329744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329740u;
        // 0x329744: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329748u;
        goto label_329748;
    }
    ctx->pc = 0x329740u;
    {
        const bool branch_taken_0x329740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329740u;
        // 0x329744: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329740) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329748u;
label_329748:
    // 0x329748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32974c:
    // 0x32974c: 0xc0cdec0  jal         func_337B00
label_329750:
    if (ctx->pc == 0x329750u) {
        ctx->pc = 0x329750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32974Cu;
        // 0x329750: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329754u;
        goto label_329754;
    }
    ctx->pc = 0x32974Cu;
    SET_GPR_U32(ctx, 31, 0x329754u);
    ctx->pc = 0x329750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32974Cu;
    // 0x329750: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32974Cu, 0x329754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329754u;
label_329754:
    // 0x329754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x329754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329758:
    // 0x329758: 0xc095368  jal         func_254DA0
label_32975c:
    if (ctx->pc == 0x32975Cu) {
        ctx->pc = 0x329760u;
        goto label_329760;
    }
    ctx->pc = 0x329758u;
    SET_GPR_U32(ctx, 31, 0x329760u);
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x329758u, 0x329760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329760u;
label_329760:
    // 0x329760: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_329764:
    if (ctx->pc == 0x329764u) {
        ctx->pc = 0x329764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329760u;
        // 0x329764: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329768u;
        goto label_329768;
    }
    ctx->pc = 0x329760u;
    {
        const bool branch_taken_0x329760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329760u;
        // 0x329764: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329760) {
            ctx->pc = 0x329784u;
            goto label_329784;
        }
    }
    ctx->pc = 0x329768u;
label_329768:
    // 0x329768: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x329768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_32976c:
    // 0x32976c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x32976cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_329770:
    // 0x329770: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x329770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_329774:
    // 0x329774: 0x8ca20720  lw          $v0, 0x720($a1)
    ctx->pc = 0x329774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1824)));
label_329778:
    // 0x329778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x329778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32977c:
    // 0x32977c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_329780:
    if (ctx->pc == 0x329780u) {
        ctx->pc = 0x329780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32977Cu;
        // 0x329780: 0x8c500034  lw          $s0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329784u;
        goto label_329784;
    }
    ctx->pc = 0x32977Cu;
    {
        const bool branch_taken_0x32977c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32977c) {
            ctx->pc = 0x329780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32977Cu;
            // 0x329780: 0x8c500034  lw          $s0, 0x34($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329784u;
            goto label_329784;
        }
    }
    ctx->pc = 0x329784u;
label_329784:
    // 0x329784: 0xae50003c  sw          $s0, 0x3C($s2)
    ctx->pc = 0x329784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
label_329788:
    // 0x329788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x329788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32978c:
    // 0x32978c: 0xc0cdea8  jal         func_337AA0
label_329790:
    if (ctx->pc == 0x329790u) {
        ctx->pc = 0x329790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32978Cu;
        // 0x329790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329794u;
        goto label_329794;
    }
    ctx->pc = 0x32978Cu;
    SET_GPR_U32(ctx, 31, 0x329794u);
    ctx->pc = 0x329790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32978Cu;
    // 0x329790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x32978Cu, 0x329794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329794u;
label_329794:
    // 0x329794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329798:
    // 0x329798: 0xc0efc2e  jal         func_3BF0B8
label_32979c:
    if (ctx->pc == 0x32979Cu) {
        ctx->pc = 0x3297A0u;
        goto label_3297a0;
    }
    ctx->pc = 0x329798u;
    SET_GPR_U32(ctx, 31, 0x3297A0u);
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x329798u, 0x3297A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3297A0u;
label_3297a0:
    // 0x3297a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3297a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3297a4:
    // 0x3297a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3297a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3297a8:
    // 0x3297a8: 0xc0cdea8  jal         func_337AA0
label_3297ac:
    if (ctx->pc == 0x3297ACu) {
        ctx->pc = 0x3297ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297A8u;
        // 0x3297ac: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3297B0u;
        goto label_3297b0;
    }
    ctx->pc = 0x3297A8u;
    SET_GPR_U32(ctx, 31, 0x3297B0u);
    ctx->pc = 0x3297ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297A8u;
    // 0x3297ac: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x3297A8u, 0x3297B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3297B0u;
label_3297b0:
    // 0x3297b0: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_3297b4:
    if (ctx->pc == 0x3297B4u) {
        ctx->pc = 0x3297B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297B0u;
        // 0x3297b4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3297B8u;
        goto label_3297b8;
    }
    ctx->pc = 0x3297B0u;
    {
        const bool branch_taken_0x3297b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3297B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297B0u;
        // 0x3297b4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3297b0) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3297B8u;
label_3297b8:
    // 0x3297b8: 0xc0cdec0  jal         func_337B00
label_3297bc:
    if (ctx->pc == 0x3297BCu) {
        ctx->pc = 0x3297BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297B8u;
        // 0x3297bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3297C0u;
        goto label_3297c0;
    }
    ctx->pc = 0x3297B8u;
    SET_GPR_U32(ctx, 31, 0x3297C0u);
    ctx->pc = 0x3297BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297B8u;
    // 0x3297bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3297B8u, 0x3297C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3297C0u;
label_3297c0:
    // 0x3297c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3297c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3297c4:
    // 0x3297c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3297c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3297c8:
    // 0x3297c8: 0xc0cdbde  jal         func_336F78
label_3297cc:
    if (ctx->pc == 0x3297CCu) {
        ctx->pc = 0x3297CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297C8u;
        // 0x3297cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3297D0u;
        goto label_3297d0;
    }
    ctx->pc = 0x3297C8u;
    SET_GPR_U32(ctx, 31, 0x3297D0u);
    ctx->pc = 0x3297CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297C8u;
    // 0x3297cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x3297C8u, 0x3297D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3297D0u;
label_3297d0:
    // 0x3297d0: 0x504000dd  beql        $v0, $zero, . + 4 + (0xDD << 2)
label_3297d4:
    if (ctx->pc == 0x3297D4u) {
        ctx->pc = 0x3297D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297D0u;
        // 0x3297d4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3297D8u;
        goto label_3297d8;
    }
    ctx->pc = 0x3297D0u;
    {
        const bool branch_taken_0x3297d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3297d0) {
            ctx->pc = 0x3297D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3297D0u;
            // 0x3297d4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3297D8u;
label_3297d8:
    // 0x3297d8: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x3297d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_3297dc:
    // 0x3297dc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3297dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3297e0:
    // 0x3297e0: 0x40f809  jalr        $v0
label_3297e4:
    if (ctx->pc == 0x3297E4u) {
        ctx->pc = 0x3297E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297E0u;
        // 0x3297e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3297E8u;
        goto label_3297e8;
    }
    ctx->pc = 0x3297E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3297E8u);
        ctx->pc = 0x3297E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297E0u;
        // 0x3297e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3297E0u, 0x3297E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3297E8u;
label_3297e8:
    // 0x3297e8: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_3297ec:
    if (ctx->pc == 0x3297ECu) {
        ctx->pc = 0x3297ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297E8u;
        // 0x3297ec: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3297F0u;
        goto label_3297f0;
    }
    ctx->pc = 0x3297E8u;
    {
        const bool branch_taken_0x3297e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3297ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297E8u;
        // 0x3297ec: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3297e8) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3297F0u;
label_3297f0:
    // 0x3297f0: 0xc0cdec0  jal         func_337B00
label_3297f4:
    if (ctx->pc == 0x3297F4u) {
        ctx->pc = 0x3297F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297F0u;
        // 0x3297f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3297F8u;
        goto label_3297f8;
    }
    ctx->pc = 0x3297F0u;
    SET_GPR_U32(ctx, 31, 0x3297F8u);
    ctx->pc = 0x3297F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297F0u;
    // 0x3297f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3297F0u, 0x3297F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3297F8u;
label_3297f8:
    // 0x3297f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3297f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3297fc:
    // 0x3297fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3297fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329800:
    // 0x329800: 0xc0cdbde  jal         func_336F78
label_329804:
    if (ctx->pc == 0x329804u) {
        ctx->pc = 0x329804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329800u;
        // 0x329804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329808u;
        goto label_329808;
    }
    ctx->pc = 0x329800u;
    SET_GPR_U32(ctx, 31, 0x329808u);
    ctx->pc = 0x329804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329800u;
    // 0x329804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F78u, 0x329800u, 0x329808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329808u;
label_329808:
    // 0x329808: 0x504000cf  beql        $v0, $zero, . + 4 + (0xCF << 2)
label_32980c:
    if (ctx->pc == 0x32980Cu) {
        ctx->pc = 0x32980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329808u;
        // 0x32980c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329810u;
        goto label_329810;
    }
    ctx->pc = 0x329808u;
    {
        const bool branch_taken_0x329808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329808) {
            ctx->pc = 0x32980Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329808u;
            // 0x32980c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329810u;
label_329810:
    // 0x329810: 0xc083bc0  jal         func_20EF00
label_329814:
    if (ctx->pc == 0x329814u) {
        ctx->pc = 0x329814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329810u;
        // 0x329814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329818u;
        goto label_329818;
    }
    ctx->pc = 0x329810u;
    SET_GPR_U32(ctx, 31, 0x329818u);
    ctx->pc = 0x329814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329810u;
    // 0x329814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x329810u, 0x329818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329818u;
label_329818:
    // 0x329818: 0x100000cb  b           . + 4 + (0xCB << 2)
label_32981c:
    if (ctx->pc == 0x32981Cu) {
        ctx->pc = 0x32981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329818u;
        // 0x32981c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329820u;
        goto label_329820;
    }
    ctx->pc = 0x329818u;
    {
        const bool branch_taken_0x329818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329818u;
        // 0x32981c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329818) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329820u;
label_329820:
    // 0x329820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329824:
    // 0x329824: 0xc0cdec0  jal         func_337B00
label_329828:
    if (ctx->pc == 0x329828u) {
        ctx->pc = 0x329828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329824u;
        // 0x329828: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32982Cu;
        goto label_32982c;
    }
    ctx->pc = 0x329824u;
    SET_GPR_U32(ctx, 31, 0x32982Cu);
    ctx->pc = 0x329828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329824u;
    // 0x329828: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x329824u, 0x32982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32982Cu;
label_32982c:
    // 0x32982c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32982cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329830:
    // 0x329830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329834:
    // 0x329834: 0xc0cdcf2  jal         func_3373C8
label_329838:
    if (ctx->pc == 0x329838u) {
        ctx->pc = 0x329838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329834u;
        // 0x329838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32983Cu;
        goto label_32983c;
    }
    ctx->pc = 0x329834u;
    SET_GPR_U32(ctx, 31, 0x32983Cu);
    ctx->pc = 0x329838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329834u;
    // 0x329838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3373C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3373C8u, 0x329834u, 0x32983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32983Cu;
label_32983c:
    // 0x32983c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_329840:
    if (ctx->pc == 0x329840u) {
        ctx->pc = 0x329840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32983Cu;
        // 0x329840: 0x8e110220  lw          $s1, 0x220($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329844u;
        goto label_329844;
    }
    ctx->pc = 0x32983Cu;
    {
        const bool branch_taken_0x32983c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32983c) {
            ctx->pc = 0x329840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32983Cu;
            // 0x329840: 0x8e110220  lw          $s1, 0x220($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329844u;
            goto label_329844;
        }
    }
    ctx->pc = 0x329844u;
label_329844:
    // 0x329844: 0x100000bf  b           . + 4 + (0xBF << 2)
label_329848:
    if (ctx->pc == 0x329848u) {
        ctx->pc = 0x329848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329844u;
        // 0x329848: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32984Cu;
        goto label_32984c;
    }
    ctx->pc = 0x329844u;
    {
        const bool branch_taken_0x329844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329844u;
        // 0x329848: 0xae51003c  sw          $s1, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329844) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x32984Cu;
label_32984c:
    // 0x32984c: 0xc0cdf2e  jal         func_337CB8
label_329850:
    if (ctx->pc == 0x329850u) {
        ctx->pc = 0x329850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32984Cu;
        // 0x329850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329854u;
        goto label_329854;
    }
    ctx->pc = 0x32984Cu;
    SET_GPR_U32(ctx, 31, 0x329854u);
    ctx->pc = 0x329850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32984Cu;
    // 0x329850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x32984Cu, 0x329854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329854u;
label_329854:
    // 0x329854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329858:
    // 0x329858: 0xc0cdec0  jal         func_337B00
label_32985c:
    if (ctx->pc == 0x32985Cu) {
        ctx->pc = 0x32985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329858u;
        // 0x32985c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329860u;
        goto label_329860;
    }
    ctx->pc = 0x329858u;
    SET_GPR_U32(ctx, 31, 0x329860u);
    ctx->pc = 0x32985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329858u;
    // 0x32985c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x329858u, 0x329860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329860u;
label_329860:
    // 0x329860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329864:
    // 0x329864: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329868:
    // 0x329868: 0xc0cdcf2  jal         func_3373C8
label_32986c:
    if (ctx->pc == 0x32986Cu) {
        ctx->pc = 0x32986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329868u;
        // 0x32986c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329870u;
        goto label_329870;
    }
    ctx->pc = 0x329868u;
    SET_GPR_U32(ctx, 31, 0x329870u);
    ctx->pc = 0x32986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329868u;
    // 0x32986c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3373C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3373C8u, 0x329868u, 0x329870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329870u;
label_329870:
    // 0x329870: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
label_329874:
    if (ctx->pc == 0x329874u) {
        ctx->pc = 0x329874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329870u;
        // 0x329874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329878u;
        goto label_329878;
    }
    ctx->pc = 0x329870u;
    {
        const bool branch_taken_0x329870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329870u;
        // 0x329874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329870) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329878u;
label_329878:
    // 0x329878: 0xc09a6e4  jal         func_269B90
label_32987c:
    if (ctx->pc == 0x32987Cu) {
        ctx->pc = 0x32987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329878u;
        // 0x32987c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329880u;
        goto label_329880;
    }
    ctx->pc = 0x329878u;
    SET_GPR_U32(ctx, 31, 0x329880u);
    ctx->pc = 0x32987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329878u;
    // 0x32987c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B90u, 0x329878u, 0x329880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329880u;
label_329880:
    // 0x329880: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_329884:
    if (ctx->pc == 0x329884u) {
        ctx->pc = 0x329884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329880u;
        // 0x329884: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329888u;
        goto label_329888;
    }
    ctx->pc = 0x329880u;
    {
        const bool branch_taken_0x329880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329880u;
        // 0x329884: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329880) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329888u;
label_329888:
    // 0x329888: 0xc0cdec0  jal         func_337B00
label_32988c:
    if (ctx->pc == 0x32988Cu) {
        ctx->pc = 0x32988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329888u;
        // 0x32988c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329890u;
        goto label_329890;
    }
    ctx->pc = 0x329888u;
    SET_GPR_U32(ctx, 31, 0x329890u);
    ctx->pc = 0x32988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329888u;
    // 0x32988c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x329888u, 0x329890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329890u;
label_329890:
    // 0x329890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329894:
    // 0x329894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329898:
    // 0x329898: 0xc0cdcf2  jal         func_3373C8
label_32989c:
    if (ctx->pc == 0x32989Cu) {
        ctx->pc = 0x32989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329898u;
        // 0x32989c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3298A0u;
        goto label_3298a0;
    }
    ctx->pc = 0x329898u;
    SET_GPR_U32(ctx, 31, 0x3298A0u);
    ctx->pc = 0x32989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329898u;
    // 0x32989c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3373C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3373C8u, 0x329898u, 0x3298A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3298A0u;
label_3298a0:
    // 0x3298a0: 0x26100230  addiu       $s0, $s0, 0x230
    ctx->pc = 0x3298a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_3298a4:
    // 0x3298a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3298a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3298a8:
    // 0x3298a8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3298a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_3298ac:
    // 0x3298ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3298acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3298b0:
    // 0x3298b0: 0xc0cdea8  jal         func_337AA0
label_3298b4:
    if (ctx->pc == 0x3298B4u) {
        ctx->pc = 0x3298B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298B0u;
        // 0x3298b4: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3298B8u;
        goto label_3298b8;
    }
    ctx->pc = 0x3298B0u;
    SET_GPR_U32(ctx, 31, 0x3298B8u);
    ctx->pc = 0x3298B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3298B0u;
    // 0x3298b4: 0xae50003c  sw          $s0, 0x3C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337AA0u, 0x3298B0u, 0x3298B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3298B8u;
label_3298b8:
    // 0x3298b8: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3298bc:
    if (ctx->pc == 0x3298BCu) {
        ctx->pc = 0x3298BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298B8u;
        // 0x3298bc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3298C0u;
        goto label_3298c0;
    }
    ctx->pc = 0x3298B8u;
    {
        const bool branch_taken_0x3298b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3298BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298B8u;
        // 0x3298bc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298b8) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3298C0u;
label_3298c0:
    // 0x3298c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3298c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3298c4:
    // 0x3298c4: 0xc0cdee8  jal         func_337BA0
label_3298c8:
    if (ctx->pc == 0x3298C8u) {
        ctx->pc = 0x3298C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298C4u;
        // 0x3298c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3298CCu;
        goto label_3298cc;
    }
    ctx->pc = 0x3298C4u;
    SET_GPR_U32(ctx, 31, 0x3298CCu);
    ctx->pc = 0x3298C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3298C4u;
    // 0x3298c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x3298C4u, 0x3298CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3298CCu;
label_3298cc:
    // 0x3298cc: 0xc0cdec0  jal         func_337B00
label_3298d0:
    if (ctx->pc == 0x3298D0u) {
        ctx->pc = 0x3298D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298CCu;
        // 0x3298d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3298D4u;
        goto label_3298d4;
    }
    ctx->pc = 0x3298CCu;
    SET_GPR_U32(ctx, 31, 0x3298D4u);
    ctx->pc = 0x3298D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3298CCu;
    // 0x3298d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3298CCu, 0x3298D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3298D4u;
label_3298d4:
    // 0x3298d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3298d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3298d8:
    // 0x3298d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3298d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3298dc:
    // 0x3298dc: 0xc0cdcf2  jal         func_3373C8
label_3298e0:
    if (ctx->pc == 0x3298E0u) {
        ctx->pc = 0x3298E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298DCu;
        // 0x3298e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3298E4u;
        goto label_3298e4;
    }
    ctx->pc = 0x3298DCu;
    SET_GPR_U32(ctx, 31, 0x3298E4u);
    ctx->pc = 0x3298E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3298DCu;
    // 0x3298e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3373C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3373C8u, 0x3298DCu, 0x3298E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3298E4u;
label_3298e4:
    // 0x3298e4: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
label_3298e8:
    if (ctx->pc == 0x3298E8u) {
        ctx->pc = 0x3298E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298E4u;
        // 0x3298e8: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3298ECu;
        goto label_3298ec;
    }
    ctx->pc = 0x3298E4u;
    {
        const bool branch_taken_0x3298e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3298E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3298E4u;
        // 0x3298e8: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3298e4) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3298ECu;
label_3298ec:
    // 0x3298ec: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3298ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3298f0:
    // 0x3298f0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3298f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3298f4:
    // 0x3298f4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3298f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3298f8:
    // 0x3298f8: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x3298f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3298fc:
    // 0x3298fc: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x3298fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_329900:
    // 0x329900: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x329900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_329904:
    // 0x329904: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x329904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_329908:
    // 0x329908: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x329908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_32990c:
    // 0x32990c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32990cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_329910:
    // 0x329910: 0xfa010230  sqc2        $vf1, 0x230($s0)
    ctx->pc = 0x329910u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 560), _mm_castps_si128(ctx->vu0_vf[1]));
label_329914:
    // 0x329914: 0x1000008c  b           . + 4 + (0x8C << 2)
label_329918:
    if (ctx->pc == 0x329918u) {
        ctx->pc = 0x329918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329914u;
        // 0x329918: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32991Cu;
        goto label_32991c;
    }
    ctx->pc = 0x329914u;
    {
        const bool branch_taken_0x329914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329914u;
        // 0x329918: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329914) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x32991Cu;
label_32991c:
    // 0x32991c: 0xc0cdec0  jal         func_337B00
label_329920:
    if (ctx->pc == 0x329920u) {
        ctx->pc = 0x329920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32991Cu;
        // 0x329920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329924u;
        goto label_329924;
    }
    ctx->pc = 0x32991Cu;
    SET_GPR_U32(ctx, 31, 0x329924u);
    ctx->pc = 0x329920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32991Cu;
    // 0x329920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32991Cu, 0x329924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329924u;
label_329924:
    // 0x329924: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329928:
    // 0x329928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32992c:
    // 0x32992c: 0xc0cdcf2  jal         func_3373C8
label_329930:
    if (ctx->pc == 0x329930u) {
        ctx->pc = 0x329930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32992Cu;
        // 0x329930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329934u;
        goto label_329934;
    }
    ctx->pc = 0x32992Cu;
    SET_GPR_U32(ctx, 31, 0x329934u);
    ctx->pc = 0x329930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32992Cu;
    // 0x329930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3373C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3373C8u, 0x32992Cu, 0x329934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329934u;
label_329934:
    // 0x329934: 0x50400084  beql        $v0, $zero, . + 4 + (0x84 << 2)
label_329938:
    if (ctx->pc == 0x329938u) {
        ctx->pc = 0x329938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329934u;
        // 0x329938: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32993Cu;
        goto label_32993c;
    }
    ctx->pc = 0x329934u;
    {
        const bool branch_taken_0x329934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329934) {
            ctx->pc = 0x329938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329934u;
            // 0x329938: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x32993Cu;
label_32993c:
    // 0x32993c: 0xc09a716  jal         func_269C58
label_329940:
    if (ctx->pc == 0x329940u) {
        ctx->pc = 0x329940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32993Cu;
        // 0x329940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329944u;
        goto label_329944;
    }
    ctx->pc = 0x32993Cu;
    SET_GPR_U32(ctx, 31, 0x329944u);
    ctx->pc = 0x329940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32993Cu;
    // 0x329940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C58u, 0x32993Cu, 0x329944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329944u;
label_329944:
    // 0x329944: 0x1000007f  b           . + 4 + (0x7F << 2)
label_329948:
    if (ctx->pc == 0x329948u) {
        ctx->pc = 0x329948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329944u;
        // 0x329948: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32994Cu;
        goto label_32994c;
    }
    ctx->pc = 0x329944u;
    {
        const bool branch_taken_0x329944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329944u;
        // 0x329948: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329944) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x32994Cu;
label_32994c:
    // 0x32994c: 0xc0cdec0  jal         func_337B00
label_329950:
    if (ctx->pc == 0x329950u) {
        ctx->pc = 0x329950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32994Cu;
        // 0x329950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329954u;
        goto label_329954;
    }
    ctx->pc = 0x32994Cu;
    SET_GPR_U32(ctx, 31, 0x329954u);
    ctx->pc = 0x329950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32994Cu;
    // 0x329950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x32994Cu, 0x329954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329954u;
label_329954:
    // 0x329954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329958:
    // 0x329958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32995c:
    // 0x32995c: 0xc0cdcf2  jal         func_3373C8
label_329960:
    if (ctx->pc == 0x329960u) {
        ctx->pc = 0x329960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32995Cu;
        // 0x329960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329964u;
        goto label_329964;
    }
    ctx->pc = 0x32995Cu;
    SET_GPR_U32(ctx, 31, 0x329964u);
    ctx->pc = 0x329960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32995Cu;
    // 0x329960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3373C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3373C8u, 0x32995Cu, 0x329964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329964u;
label_329964:
    // 0x329964: 0x50400078  beql        $v0, $zero, . + 4 + (0x78 << 2)
label_329968:
    if (ctx->pc == 0x329968u) {
        ctx->pc = 0x329968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329964u;
        // 0x329968: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32996Cu;
        goto label_32996c;
    }
    ctx->pc = 0x329964u;
    {
        const bool branch_taken_0x329964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329964) {
            ctx->pc = 0x329968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329964u;
            // 0x329968: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x32996Cu;
label_32996c:
    // 0x32996c: 0xc09a736  jal         func_269CD8
label_329970:
    if (ctx->pc == 0x329970u) {
        ctx->pc = 0x329970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32996Cu;
        // 0x329970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329974u;
        goto label_329974;
    }
    ctx->pc = 0x32996Cu;
    SET_GPR_U32(ctx, 31, 0x329974u);
    ctx->pc = 0x329970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32996Cu;
    // 0x329970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269CD8u, 0x32996Cu, 0x329974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329974u;
label_329974:
    // 0x329974: 0x10000074  b           . + 4 + (0x74 << 2)
label_329978:
    if (ctx->pc == 0x329978u) {
        ctx->pc = 0x329978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329974u;
        // 0x329978: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32997Cu;
        goto label_32997c;
    }
    ctx->pc = 0x329974u;
    {
        const bool branch_taken_0x329974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329974u;
        // 0x329978: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329974) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x32997Cu;
label_32997c:
    // 0x32997c: 0xc0cdf40  jal         func_337D00
label_329980:
    if (ctx->pc == 0x329980u) {
        ctx->pc = 0x329980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32997Cu;
        // 0x329980: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329984u;
        goto label_329984;
    }
    ctx->pc = 0x32997Cu;
    SET_GPR_U32(ctx, 31, 0x329984u);
    ctx->pc = 0x329980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32997Cu;
    // 0x329980: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x32997Cu, 0x329984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329984u;
label_329984:
    // 0x329984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329988:
    // 0x329988: 0xc0cdec0  jal         func_337B00
label_32998c:
    if (ctx->pc == 0x32998Cu) {
        ctx->pc = 0x32998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329988u;
        // 0x32998c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x329990u;
        goto label_329990;
    }
    ctx->pc = 0x329988u;
    SET_GPR_U32(ctx, 31, 0x329990u);
    ctx->pc = 0x32998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329988u;
    // 0x32998c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x329988u, 0x329990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329990u;
label_329990:
    // 0x329990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329994:
    // 0x329994: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329998:
    // 0x329998: 0xc0cdcf2  jal         func_3373C8
label_32999c:
    if (ctx->pc == 0x32999Cu) {
        ctx->pc = 0x32999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329998u;
        // 0x32999c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299A0u;
        goto label_3299a0;
    }
    ctx->pc = 0x329998u;
    SET_GPR_U32(ctx, 31, 0x3299A0u);
    ctx->pc = 0x32999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329998u;
    // 0x32999c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3373C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3373C8u, 0x329998u, 0x3299A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299A0u;
label_3299a0:
    // 0x3299a0: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
label_3299a4:
    if (ctx->pc == 0x3299A4u) {
        ctx->pc = 0x3299A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299A0u;
        // 0x3299a4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299A8u;
        goto label_3299a8;
    }
    ctx->pc = 0x3299A0u;
    {
        const bool branch_taken_0x3299a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3299a0) {
            ctx->pc = 0x3299A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3299A0u;
            // 0x3299a4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3299A8u;
label_3299a8:
    // 0x3299a8: 0x4600a005  abs.s       $f0, $f20
    ctx->pc = 0x3299a8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
label_3299ac:
    // 0x3299ac: 0x10000065  b           . + 4 + (0x65 << 2)
label_3299b0:
    if (ctx->pc == 0x3299B0u) {
        ctx->pc = 0x3299B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299ACu;
        // 0x3299b0: 0xe6000228  swc1        $f0, 0x228($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299B4u;
        goto label_3299b4;
    }
    ctx->pc = 0x3299ACu;
    {
        const bool branch_taken_0x3299ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3299B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299ACu;
        // 0x3299b0: 0xe6000228  swc1        $f0, 0x228($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3299ac) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3299B4u;
label_3299b4:
    // 0x3299b4: 0xc0cdf2e  jal         func_337CB8
label_3299b8:
    if (ctx->pc == 0x3299B8u) {
        ctx->pc = 0x3299B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299B4u;
        // 0x3299b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299BCu;
        goto label_3299bc;
    }
    ctx->pc = 0x3299B4u;
    SET_GPR_U32(ctx, 31, 0x3299BCu);
    ctx->pc = 0x3299B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299B4u;
    // 0x3299b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x3299B4u, 0x3299BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299BCu;
label_3299bc:
    // 0x3299bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3299bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3299c0:
    // 0x3299c0: 0xc0cdec0  jal         func_337B00
label_3299c4:
    if (ctx->pc == 0x3299C4u) {
        ctx->pc = 0x3299C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299C0u;
        // 0x3299c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299C8u;
        goto label_3299c8;
    }
    ctx->pc = 0x3299C0u;
    SET_GPR_U32(ctx, 31, 0x3299C8u);
    ctx->pc = 0x3299C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299C0u;
    // 0x3299c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B00u, 0x3299C0u, 0x3299C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299C8u;
label_3299c8:
    // 0x3299c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3299c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3299cc:
    // 0x3299cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3299ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3299d0:
    // 0x3299d0: 0xc0cdcf2  jal         func_3373C8
label_3299d4:
    if (ctx->pc == 0x3299D4u) {
        ctx->pc = 0x3299D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299D0u;
        // 0x3299d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299D8u;
        goto label_3299d8;
    }
    ctx->pc = 0x3299D0u;
    SET_GPR_U32(ctx, 31, 0x3299D8u);
    ctx->pc = 0x3299D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299D0u;
    // 0x3299d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3373C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3373C8u, 0x3299D0u, 0x3299D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299D8u;
label_3299d8:
    // 0x3299d8: 0x5440005a  bnel        $v0, $zero, . + 4 + (0x5A << 2)
label_3299dc:
    if (ctx->pc == 0x3299DCu) {
        ctx->pc = 0x3299DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299D8u;
        // 0x3299dc: 0xae110224  sw          $s1, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299E0u;
        goto label_3299e0;
    }
    ctx->pc = 0x3299D8u;
    {
        const bool branch_taken_0x3299d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3299d8) {
            ctx->pc = 0x3299DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3299D8u;
            // 0x3299dc: 0xae110224  sw          $s1, 0x224($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x3299E0u;
label_3299e0:
    // 0x3299e0: 0x10000059  b           . + 4 + (0x59 << 2)
label_3299e4:
    if (ctx->pc == 0x3299E4u) {
        ctx->pc = 0x3299E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299E0u;
        // 0x3299e4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299E8u;
        goto label_3299e8;
    }
    ctx->pc = 0x3299E0u;
    {
        const bool branch_taken_0x3299e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3299E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299E0u;
        // 0x3299e4: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3299e0) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x3299E8u;
label_3299e8:
    // 0x3299e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3299e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3299ec:
    // 0x3299ec: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x3299ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_3299f0:
    // 0x3299f0: 0x8c50bd50  lw          $s0, -0x42B0($v0)
    ctx->pc = 0x3299f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_3299f4:
    // 0x3299f4: 0xc04952c  jal         func_1254B0
label_3299f8:
    if (ctx->pc == 0x3299F8u) {
        ctx->pc = 0x3299F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299F4u;
        // 0x3299f8: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3299FCu;
        goto label_3299fc;
    }
    ctx->pc = 0x3299F4u;
    SET_GPR_U32(ctx, 31, 0x3299FCu);
    ctx->pc = 0x3299F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299F4u;
    // 0x3299f8: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254B0u, 0x3299F4u, 0x3299FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299FCu;
label_3299fc:
    // 0x3299fc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_329a00:
    if (ctx->pc == 0x329A00u) {
        ctx->pc = 0x329A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299FCu;
        // 0x329a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A04u;
        goto label_329a04;
    }
    ctx->pc = 0x3299FCu;
    {
        const bool branch_taken_0x3299fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299FCu;
        // 0x329a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3299fc) {
            ctx->pc = 0x329A38u;
            goto label_329a38;
        }
    }
    ctx->pc = 0x329A04u;
label_329a04:
    // 0x329a04: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_329a08:
    if (ctx->pc == 0x329A08u) {
        ctx->pc = 0x329A0Cu;
        goto label_329a0c;
    }
    ctx->pc = 0x329A04u;
    {
        const bool branch_taken_0x329a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x329a04) {
            ctx->pc = 0x329A38u;
            goto label_329a38;
        }
    }
    ctx->pc = 0x329A0Cu;
label_329a0c:
    // 0x329a0c: 0x8e021060  lw          $v0, 0x1060($s0)
    ctx->pc = 0x329a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
label_329a10:
    // 0x329a10: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x329a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
label_329a14:
    // 0x329a14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_329a18:
    if (ctx->pc == 0x329A18u) {
        ctx->pc = 0x329A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A14u;
        // 0x329a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A1Cu;
        goto label_329a1c;
    }
    ctx->pc = 0x329A14u;
    {
        const bool branch_taken_0x329a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A14u;
        // 0x329a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a14) {
            ctx->pc = 0x329A38u;
            goto label_329a38;
        }
    }
    ctx->pc = 0x329A1Cu;
label_329a1c:
    // 0x329a1c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x329a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_329a20:
    // 0x329a20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x329a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_329a24:
    // 0x329a24: 0x0  nop
    ctx->pc = 0x329a24u;
    // NOP
label_329a28:
    // 0x329a28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x329a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_329a2c:
    // 0x329a2c: 0x0  nop
    ctx->pc = 0x329a2cu;
    // NOP
label_329a30:
    // 0x329a30: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_329a34:
    if (ctx->pc == 0x329A34u) {
        ctx->pc = 0x329A38u;
        goto label_329a38;
    }
    ctx->pc = 0x329A30u;
    {
        const bool branch_taken_0x329a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x329a30) {
            ctx->pc = 0x329A64u;
            goto label_329a64;
        }
    }
    ctx->pc = 0x329A38u;
label_329a38:
    // 0x329a38: 0xc0760d6  jal         func_1D8358
label_329a3c:
    if (ctx->pc == 0x329A3Cu) {
        ctx->pc = 0x329A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A38u;
        // 0x329a3c: 0xae4204a0  sw          $v0, 0x4A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A40u;
        goto label_329a40;
    }
    ctx->pc = 0x329A38u;
    SET_GPR_U32(ctx, 31, 0x329A40u);
    ctx->pc = 0x329A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A38u;
    // 0x329a3c: 0xae4204a0  sw          $v0, 0x4A0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8358u, 0x329A38u, 0x329A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A40u;
label_329a40:
    // 0x329a40: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x329a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_329a44:
    // 0x329a44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x329a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_329a48:
    // 0x329a48: 0x8e440498  lw          $a0, 0x498($s2)
    ctx->pc = 0x329a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1176)));
label_329a4c:
    // 0x329a4c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x329a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_329a50:
    // 0x329a50: 0xae4204a4  sw          $v0, 0x4A4($s2)
    ctx->pc = 0x329a50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1188), GPR_U32(ctx, 2));
label_329a54:
    // 0x329a54: 0xae44049c  sw          $a0, 0x49C($s2)
    ctx->pc = 0x329a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1180), GPR_U32(ctx, 4));
label_329a58:
    // 0x329a58: 0xae450498  sw          $a1, 0x498($s2)
    ctx->pc = 0x329a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 5));
label_329a5c:
    // 0x329a5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_329a60:
    if (ctx->pc == 0x329A60u) {
        ctx->pc = 0x329A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A5Cu;
        // 0x329a60: 0xae430038  sw          $v1, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A64u;
        goto label_329a64;
    }
    ctx->pc = 0x329A5Cu;
    {
        const bool branch_taken_0x329a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A5Cu;
        // 0x329a60: 0xae430038  sw          $v1, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a5c) {
            ctx->pc = 0x329A6Cu;
            goto label_329a6c;
        }
    }
    ctx->pc = 0x329A64u;
label_329a64:
    // 0x329a64: 0xc0c96d8  jal         func_325B60
label_329a68:
    if (ctx->pc == 0x329A68u) {
        ctx->pc = 0x329A6Cu;
        goto label_329a6c;
    }
    ctx->pc = 0x329A64u;
    SET_GPR_U32(ctx, 31, 0x329A6Cu);
    ctx->pc = 0x325B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B60u, 0x329A64u, 0x329A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A6Cu;
label_329a6c:
    // 0x329a6c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x329a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_329a70:
    // 0x329a70: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x329a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_329a74:
    // 0x329a74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x329a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_329a78:
    // 0x329a78: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_329a7c:
    if (ctx->pc == 0x329A7Cu) {
        ctx->pc = 0x329A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A78u;
        // 0x329a7c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A80u;
        goto label_329a80;
    }
    ctx->pc = 0x329A78u;
    {
        const bool branch_taken_0x329a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A78u;
        // 0x329a7c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a78) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329A80u;
label_329a80:
    // 0x329a80: 0xc0c99e0  jal         func_326780
label_329a84:
    if (ctx->pc == 0x329A84u) {
        ctx->pc = 0x329A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A80u;
        // 0x329a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A88u;
        goto label_329a88;
    }
    ctx->pc = 0x329A80u;
    SET_GPR_U32(ctx, 31, 0x329A88u);
    ctx->pc = 0x329A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A80u;
    // 0x329a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326780u, 0x329A80u, 0x329A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A88u;
label_329a88:
    // 0x329a88: 0x1000002f  b           . + 4 + (0x2F << 2)
label_329a8c:
    if (ctx->pc == 0x329A8Cu) {
        ctx->pc = 0x329A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A88u;
        // 0x329a8c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A90u;
        goto label_329a90;
    }
    ctx->pc = 0x329A88u;
    {
        const bool branch_taken_0x329a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A88u;
        // 0x329a8c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a88) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329A90u;
label_329a90:
    // 0x329a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329a94:
    // 0x329a94: 0xc0cdf2e  jal         func_337CB8
label_329a98:
    if (ctx->pc == 0x329A98u) {
        ctx->pc = 0x329A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A94u;
        // 0x329a98: 0x3c10005a  lui         $s0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329A9Cu;
        goto label_329a9c;
    }
    ctx->pc = 0x329A94u;
    SET_GPR_U32(ctx, 31, 0x329A9Cu);
    ctx->pc = 0x329A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A94u;
    // 0x329a98: 0x3c10005a  lui         $s0, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329A94u, 0x329A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A9Cu;
label_329a9c:
    // 0x329a9c: 0xc0c977c  jal         func_325DF0
label_329aa0:
    if (ctx->pc == 0x329AA0u) {
        ctx->pc = 0x329AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A9Cu;
        // 0x329aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329AA4u;
        goto label_329aa4;
    }
    ctx->pc = 0x329A9Cu;
    SET_GPR_U32(ctx, 31, 0x329AA4u);
    ctx->pc = 0x329AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A9Cu;
    // 0x329aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325DF0u, 0x329A9Cu, 0x329AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329AA4u;
label_329aa4:
    // 0x329aa4: 0x26047cb0  addiu       $a0, $s0, 0x7CB0
    ctx->pc = 0x329aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31920));
label_329aa8:
    // 0x329aa8: 0xc0b475e  jal         func_2D1D78
label_329aac:
    if (ctx->pc == 0x329AACu) {
        ctx->pc = 0x329AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AA8u;
        // 0x329aac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329AB0u;
        goto label_329ab0;
    }
    ctx->pc = 0x329AA8u;
    SET_GPR_U32(ctx, 31, 0x329AB0u);
    ctx->pc = 0x329AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329AA8u;
    // 0x329aac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D78u, 0x329AA8u, 0x329AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329AB0u;
label_329ab0:
    // 0x329ab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x329ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_329ab4:
    // 0x329ab4: 0x10000023  b           . + 4 + (0x23 << 2)
label_329ab8:
    if (ctx->pc == 0x329AB8u) {
        ctx->pc = 0x329AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AB4u;
        // 0x329ab8: 0xa2027cb0  sb          $v0, 0x7CB0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 31920), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329ABCu;
        goto label_329abc;
    }
    ctx->pc = 0x329AB4u;
    {
        const bool branch_taken_0x329ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AB4u;
        // 0x329ab8: 0xa2027cb0  sb          $v0, 0x7CB0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 31920), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329ab4) {
            ctx->pc = 0x329B44u;
            goto label_329b44;
        }
    }
    ctx->pc = 0x329ABCu;
label_329abc:
    // 0x329abc: 0xc0cdf2e  jal         func_337CB8
label_329ac0:
    if (ctx->pc == 0x329AC0u) {
        ctx->pc = 0x329AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329ABCu;
        // 0x329ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329AC4u;
        goto label_329ac4;
    }
    ctx->pc = 0x329ABCu;
    SET_GPR_U32(ctx, 31, 0x329AC4u);
    ctx->pc = 0x329AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329ABCu;
    // 0x329ac0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329ABCu, 0x329AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329AC4u;
label_329ac4:
    // 0x329ac4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329ac8:
    // 0x329ac8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x329ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_329acc:
    // 0x329acc: 0xc0cdee8  jal         func_337BA0
label_329ad0:
    if (ctx->pc == 0x329AD0u) {
        ctx->pc = 0x329AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329ACCu;
        // 0x329ad0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329AD4u;
        goto label_329ad4;
    }
    ctx->pc = 0x329ACCu;
    SET_GPR_U32(ctx, 31, 0x329AD4u);
    ctx->pc = 0x329AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329ACCu;
    // 0x329ad0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337BA0u, 0x329ACCu, 0x329AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329AD4u;
label_329ad4:
    // 0x329ad4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x329ad4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_329ad8:
    // 0x329ad8: 0x0  nop
    ctx->pc = 0x329ad8u;
    // NOP
label_329adc:
    // 0x329adc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_329ae0:
    // 0x329ae0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x329ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_329ae4:
    // 0x329ae4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x329ae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_329ae8:
    // 0x329ae8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x329ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_329aec:
    // 0x329aec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x329aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_329af0:
    // 0x329af0: 0xc0c9812  jal         func_326048
label_329af4:
    if (ctx->pc == 0x329AF4u) {
        ctx->pc = 0x329AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AF0u;
        // 0x329af4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x329AF8u;
        goto label_329af8;
    }
    ctx->pc = 0x329AF0u;
    SET_GPR_U32(ctx, 31, 0x329AF8u);
    ctx->pc = 0x329AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329AF0u;
    // 0x329af4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x326048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326048u, 0x329AF0u, 0x329AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329AF8u;
label_329af8:
    // 0x329af8: 0x10000013  b           . + 4 + (0x13 << 2)
label_329afc:
    if (ctx->pc == 0x329AFCu) {
        ctx->pc = 0x329AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AF8u;
        // 0x329afc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329B00u;
        goto label_329b00;
    }
    ctx->pc = 0x329AF8u;
    {
        const bool branch_taken_0x329af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AF8u;
        // 0x329afc: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329af8) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329B00u;
label_329b00:
    // 0x329b00: 0xc0cdf2e  jal         func_337CB8
label_329b04:
    if (ctx->pc == 0x329B04u) {
        ctx->pc = 0x329B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B00u;
        // 0x329b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329B08u;
        goto label_329b08;
    }
    ctx->pc = 0x329B00u;
    SET_GPR_U32(ctx, 31, 0x329B08u);
    ctx->pc = 0x329B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329B00u;
    // 0x329b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x329B00u, 0x329B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329B08u;
label_329b08:
    // 0x329b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x329b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_329b0c:
    // 0x329b0c: 0xc0cdf40  jal         func_337D00
label_329b10:
    if (ctx->pc == 0x329B10u) {
        ctx->pc = 0x329B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B0Cu;
        // 0x329b10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329B14u;
        goto label_329b14;
    }
    ctx->pc = 0x329B0Cu;
    SET_GPR_U32(ctx, 31, 0x329B14u);
    ctx->pc = 0x329B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329B0Cu;
    // 0x329b10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x329B0Cu, 0x329B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329B14u;
label_329b14:
    // 0x329b14: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x329b14u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_329b18:
    // 0x329b18: 0x0  nop
    ctx->pc = 0x329b18u;
    // NOP
label_329b1c:
    // 0x329b1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x329b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_329b20:
    // 0x329b20: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x329b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_329b24:
    // 0x329b24: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x329b24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_329b28:
    // 0x329b28: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x329b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_329b2c:
    // 0x329b2c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x329b2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_329b30:
    // 0x329b30: 0xc0c9846  jal         func_326118
label_329b34:
    if (ctx->pc == 0x329B34u) {
        ctx->pc = 0x329B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B30u;
        // 0x329b34: 0x460d0b42  mul.s       $f13, $f1, $f13 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x329B38u;
        goto label_329b38;
    }
    ctx->pc = 0x329B30u;
    SET_GPR_U32(ctx, 31, 0x329B38u);
    ctx->pc = 0x329B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329B30u;
    // 0x329b34: 0x460d0b42  mul.s       $f13, $f1, $f13 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x326118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326118u, 0x329B30u, 0x329B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329B38u;
label_329b38:
    // 0x329b38: 0x10000003  b           . + 4 + (0x3 << 2)
label_329b3c:
    if (ctx->pc == 0x329B3Cu) {
        ctx->pc = 0x329B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B38u;
        // 0x329b3c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329B40u;
        goto label_329b40;
    }
    ctx->pc = 0x329B38u;
    {
        const bool branch_taken_0x329b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B38u;
        // 0x329b3c: 0xdfb00180  ld          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b38) {
            ctx->pc = 0x329B48u;
            goto label_329b48;
        }
    }
    ctx->pc = 0x329B40u;
label_329b40:
    // 0x329b40: 0xae400498  sw          $zero, 0x498($s2)
    ctx->pc = 0x329b40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1176), GPR_U32(ctx, 0));
label_329b44:
    // 0x329b44: 0xdfb00180  ld          $s0, 0x180($sp)
    ctx->pc = 0x329b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_329b48:
    // 0x329b48: 0xdfb10188  ld          $s1, 0x188($sp)
    ctx->pc = 0x329b48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 392)));
label_329b4c:
    // 0x329b4c: 0xdfb20190  ld          $s2, 0x190($sp)
    ctx->pc = 0x329b4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_329b50:
    // 0x329b50: 0xdfb30198  ld          $s3, 0x198($sp)
    ctx->pc = 0x329b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 408)));
label_329b54:
    // 0x329b54: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x329b54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_329b58:
    // 0x329b58: 0xdfb501a8  ld          $s5, 0x1A8($sp)
    ctx->pc = 0x329b58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 424)));
label_329b5c:
    // 0x329b5c: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x329b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_329b60:
    // 0x329b60: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x329b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_329b64:
    // 0x329b64: 0x3e00008  jr          $ra
label_329b68:
    if (ctx->pc == 0x329B68u) {
        ctx->pc = 0x329B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B64u;
        // 0x329b68: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329B6Cu;
        goto label_329b6c;
    }
    ctx->pc = 0x329B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B64u;
        // 0x329b68: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329B6Cu;
label_329b6c:
    // 0x329b6c: 0x0  nop
    ctx->pc = 0x329b6cu;
    // NOP
    ctx->pc = 0x329b70u;
}
