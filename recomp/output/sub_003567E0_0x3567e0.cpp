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

// Function: sub_003567E0
// Address: 0x3567e0 - 0x356e68
void sub_003567E0_0x3567e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003567E0_0x3567e0");
#endif

    switch (ctx->pc) {
        case 0x3567e0u: goto label_3567e0;
        case 0x3567e4u: goto label_3567e4;
        case 0x3567e8u: goto label_3567e8;
        case 0x3567ecu: goto label_3567ec;
        case 0x3567f0u: goto label_3567f0;
        case 0x3567f4u: goto label_3567f4;
        case 0x3567f8u: goto label_3567f8;
        case 0x3567fcu: goto label_3567fc;
        case 0x356800u: goto label_356800;
        case 0x356804u: goto label_356804;
        case 0x356808u: goto label_356808;
        case 0x35680cu: goto label_35680c;
        case 0x356810u: goto label_356810;
        case 0x356814u: goto label_356814;
        case 0x356818u: goto label_356818;
        case 0x35681cu: goto label_35681c;
        case 0x356820u: goto label_356820;
        case 0x356824u: goto label_356824;
        case 0x356828u: goto label_356828;
        case 0x35682cu: goto label_35682c;
        case 0x356830u: goto label_356830;
        case 0x356834u: goto label_356834;
        case 0x356838u: goto label_356838;
        case 0x35683cu: goto label_35683c;
        case 0x356840u: goto label_356840;
        case 0x356844u: goto label_356844;
        case 0x356848u: goto label_356848;
        case 0x35684cu: goto label_35684c;
        case 0x356850u: goto label_356850;
        case 0x356854u: goto label_356854;
        case 0x356858u: goto label_356858;
        case 0x35685cu: goto label_35685c;
        case 0x356860u: goto label_356860;
        case 0x356864u: goto label_356864;
        case 0x356868u: goto label_356868;
        case 0x35686cu: goto label_35686c;
        case 0x356870u: goto label_356870;
        case 0x356874u: goto label_356874;
        case 0x356878u: goto label_356878;
        case 0x35687cu: goto label_35687c;
        case 0x356880u: goto label_356880;
        case 0x356884u: goto label_356884;
        case 0x356888u: goto label_356888;
        case 0x35688cu: goto label_35688c;
        case 0x356890u: goto label_356890;
        case 0x356894u: goto label_356894;
        case 0x356898u: goto label_356898;
        case 0x35689cu: goto label_35689c;
        case 0x3568a0u: goto label_3568a0;
        case 0x3568a4u: goto label_3568a4;
        case 0x3568a8u: goto label_3568a8;
        case 0x3568acu: goto label_3568ac;
        case 0x3568b0u: goto label_3568b0;
        case 0x3568b4u: goto label_3568b4;
        case 0x3568b8u: goto label_3568b8;
        case 0x3568bcu: goto label_3568bc;
        case 0x3568c0u: goto label_3568c0;
        case 0x3568c4u: goto label_3568c4;
        case 0x3568c8u: goto label_3568c8;
        case 0x3568ccu: goto label_3568cc;
        case 0x3568d0u: goto label_3568d0;
        case 0x3568d4u: goto label_3568d4;
        case 0x3568d8u: goto label_3568d8;
        case 0x3568dcu: goto label_3568dc;
        case 0x3568e0u: goto label_3568e0;
        case 0x3568e4u: goto label_3568e4;
        case 0x3568e8u: goto label_3568e8;
        case 0x3568ecu: goto label_3568ec;
        case 0x3568f0u: goto label_3568f0;
        case 0x3568f4u: goto label_3568f4;
        case 0x3568f8u: goto label_3568f8;
        case 0x3568fcu: goto label_3568fc;
        case 0x356900u: goto label_356900;
        case 0x356904u: goto label_356904;
        case 0x356908u: goto label_356908;
        case 0x35690cu: goto label_35690c;
        case 0x356910u: goto label_356910;
        case 0x356914u: goto label_356914;
        case 0x356918u: goto label_356918;
        case 0x35691cu: goto label_35691c;
        case 0x356920u: goto label_356920;
        case 0x356924u: goto label_356924;
        case 0x356928u: goto label_356928;
        case 0x35692cu: goto label_35692c;
        case 0x356930u: goto label_356930;
        case 0x356934u: goto label_356934;
        case 0x356938u: goto label_356938;
        case 0x35693cu: goto label_35693c;
        case 0x356940u: goto label_356940;
        case 0x356944u: goto label_356944;
        case 0x356948u: goto label_356948;
        case 0x35694cu: goto label_35694c;
        case 0x356950u: goto label_356950;
        case 0x356954u: goto label_356954;
        case 0x356958u: goto label_356958;
        case 0x35695cu: goto label_35695c;
        case 0x356960u: goto label_356960;
        case 0x356964u: goto label_356964;
        case 0x356968u: goto label_356968;
        case 0x35696cu: goto label_35696c;
        case 0x356970u: goto label_356970;
        case 0x356974u: goto label_356974;
        case 0x356978u: goto label_356978;
        case 0x35697cu: goto label_35697c;
        case 0x356980u: goto label_356980;
        case 0x356984u: goto label_356984;
        case 0x356988u: goto label_356988;
        case 0x35698cu: goto label_35698c;
        case 0x356990u: goto label_356990;
        case 0x356994u: goto label_356994;
        case 0x356998u: goto label_356998;
        case 0x35699cu: goto label_35699c;
        case 0x3569a0u: goto label_3569a0;
        case 0x3569a4u: goto label_3569a4;
        case 0x3569a8u: goto label_3569a8;
        case 0x3569acu: goto label_3569ac;
        case 0x3569b0u: goto label_3569b0;
        case 0x3569b4u: goto label_3569b4;
        case 0x3569b8u: goto label_3569b8;
        case 0x3569bcu: goto label_3569bc;
        case 0x3569c0u: goto label_3569c0;
        case 0x3569c4u: goto label_3569c4;
        case 0x3569c8u: goto label_3569c8;
        case 0x3569ccu: goto label_3569cc;
        case 0x3569d0u: goto label_3569d0;
        case 0x3569d4u: goto label_3569d4;
        case 0x3569d8u: goto label_3569d8;
        case 0x3569dcu: goto label_3569dc;
        case 0x3569e0u: goto label_3569e0;
        case 0x3569e4u: goto label_3569e4;
        case 0x3569e8u: goto label_3569e8;
        case 0x3569ecu: goto label_3569ec;
        case 0x3569f0u: goto label_3569f0;
        case 0x3569f4u: goto label_3569f4;
        case 0x3569f8u: goto label_3569f8;
        case 0x3569fcu: goto label_3569fc;
        case 0x356a00u: goto label_356a00;
        case 0x356a04u: goto label_356a04;
        case 0x356a08u: goto label_356a08;
        case 0x356a0cu: goto label_356a0c;
        case 0x356a10u: goto label_356a10;
        case 0x356a14u: goto label_356a14;
        case 0x356a18u: goto label_356a18;
        case 0x356a1cu: goto label_356a1c;
        case 0x356a20u: goto label_356a20;
        case 0x356a24u: goto label_356a24;
        case 0x356a28u: goto label_356a28;
        case 0x356a2cu: goto label_356a2c;
        case 0x356a30u: goto label_356a30;
        case 0x356a34u: goto label_356a34;
        case 0x356a38u: goto label_356a38;
        case 0x356a3cu: goto label_356a3c;
        case 0x356a40u: goto label_356a40;
        case 0x356a44u: goto label_356a44;
        case 0x356a48u: goto label_356a48;
        case 0x356a4cu: goto label_356a4c;
        case 0x356a50u: goto label_356a50;
        case 0x356a54u: goto label_356a54;
        case 0x356a58u: goto label_356a58;
        case 0x356a5cu: goto label_356a5c;
        case 0x356a60u: goto label_356a60;
        case 0x356a64u: goto label_356a64;
        case 0x356a68u: goto label_356a68;
        case 0x356a6cu: goto label_356a6c;
        case 0x356a70u: goto label_356a70;
        case 0x356a74u: goto label_356a74;
        case 0x356a78u: goto label_356a78;
        case 0x356a7cu: goto label_356a7c;
        case 0x356a80u: goto label_356a80;
        case 0x356a84u: goto label_356a84;
        case 0x356a88u: goto label_356a88;
        case 0x356a8cu: goto label_356a8c;
        case 0x356a90u: goto label_356a90;
        case 0x356a94u: goto label_356a94;
        case 0x356a98u: goto label_356a98;
        case 0x356a9cu: goto label_356a9c;
        case 0x356aa0u: goto label_356aa0;
        case 0x356aa4u: goto label_356aa4;
        case 0x356aa8u: goto label_356aa8;
        case 0x356aacu: goto label_356aac;
        case 0x356ab0u: goto label_356ab0;
        case 0x356ab4u: goto label_356ab4;
        case 0x356ab8u: goto label_356ab8;
        case 0x356abcu: goto label_356abc;
        case 0x356ac0u: goto label_356ac0;
        case 0x356ac4u: goto label_356ac4;
        case 0x356ac8u: goto label_356ac8;
        case 0x356accu: goto label_356acc;
        case 0x356ad0u: goto label_356ad0;
        case 0x356ad4u: goto label_356ad4;
        case 0x356ad8u: goto label_356ad8;
        case 0x356adcu: goto label_356adc;
        case 0x356ae0u: goto label_356ae0;
        case 0x356ae4u: goto label_356ae4;
        case 0x356ae8u: goto label_356ae8;
        case 0x356aecu: goto label_356aec;
        case 0x356af0u: goto label_356af0;
        case 0x356af4u: goto label_356af4;
        case 0x356af8u: goto label_356af8;
        case 0x356afcu: goto label_356afc;
        case 0x356b00u: goto label_356b00;
        case 0x356b04u: goto label_356b04;
        case 0x356b08u: goto label_356b08;
        case 0x356b0cu: goto label_356b0c;
        case 0x356b10u: goto label_356b10;
        case 0x356b14u: goto label_356b14;
        case 0x356b18u: goto label_356b18;
        case 0x356b1cu: goto label_356b1c;
        case 0x356b20u: goto label_356b20;
        case 0x356b24u: goto label_356b24;
        case 0x356b28u: goto label_356b28;
        case 0x356b2cu: goto label_356b2c;
        case 0x356b30u: goto label_356b30;
        case 0x356b34u: goto label_356b34;
        case 0x356b38u: goto label_356b38;
        case 0x356b3cu: goto label_356b3c;
        case 0x356b40u: goto label_356b40;
        case 0x356b44u: goto label_356b44;
        case 0x356b48u: goto label_356b48;
        case 0x356b4cu: goto label_356b4c;
        case 0x356b50u: goto label_356b50;
        case 0x356b54u: goto label_356b54;
        case 0x356b58u: goto label_356b58;
        case 0x356b5cu: goto label_356b5c;
        case 0x356b60u: goto label_356b60;
        case 0x356b64u: goto label_356b64;
        case 0x356b68u: goto label_356b68;
        case 0x356b6cu: goto label_356b6c;
        case 0x356b70u: goto label_356b70;
        case 0x356b74u: goto label_356b74;
        case 0x356b78u: goto label_356b78;
        case 0x356b7cu: goto label_356b7c;
        case 0x356b80u: goto label_356b80;
        case 0x356b84u: goto label_356b84;
        case 0x356b88u: goto label_356b88;
        case 0x356b8cu: goto label_356b8c;
        case 0x356b90u: goto label_356b90;
        case 0x356b94u: goto label_356b94;
        case 0x356b98u: goto label_356b98;
        case 0x356b9cu: goto label_356b9c;
        case 0x356ba0u: goto label_356ba0;
        case 0x356ba4u: goto label_356ba4;
        case 0x356ba8u: goto label_356ba8;
        case 0x356bacu: goto label_356bac;
        case 0x356bb0u: goto label_356bb0;
        case 0x356bb4u: goto label_356bb4;
        case 0x356bb8u: goto label_356bb8;
        case 0x356bbcu: goto label_356bbc;
        case 0x356bc0u: goto label_356bc0;
        case 0x356bc4u: goto label_356bc4;
        case 0x356bc8u: goto label_356bc8;
        case 0x356bccu: goto label_356bcc;
        case 0x356bd0u: goto label_356bd0;
        case 0x356bd4u: goto label_356bd4;
        case 0x356bd8u: goto label_356bd8;
        case 0x356bdcu: goto label_356bdc;
        case 0x356be0u: goto label_356be0;
        case 0x356be4u: goto label_356be4;
        case 0x356be8u: goto label_356be8;
        case 0x356becu: goto label_356bec;
        case 0x356bf0u: goto label_356bf0;
        case 0x356bf4u: goto label_356bf4;
        case 0x356bf8u: goto label_356bf8;
        case 0x356bfcu: goto label_356bfc;
        case 0x356c00u: goto label_356c00;
        case 0x356c04u: goto label_356c04;
        case 0x356c08u: goto label_356c08;
        case 0x356c0cu: goto label_356c0c;
        case 0x356c10u: goto label_356c10;
        case 0x356c14u: goto label_356c14;
        case 0x356c18u: goto label_356c18;
        case 0x356c1cu: goto label_356c1c;
        case 0x356c20u: goto label_356c20;
        case 0x356c24u: goto label_356c24;
        case 0x356c28u: goto label_356c28;
        case 0x356c2cu: goto label_356c2c;
        case 0x356c30u: goto label_356c30;
        case 0x356c34u: goto label_356c34;
        case 0x356c38u: goto label_356c38;
        case 0x356c3cu: goto label_356c3c;
        case 0x356c40u: goto label_356c40;
        case 0x356c44u: goto label_356c44;
        case 0x356c48u: goto label_356c48;
        case 0x356c4cu: goto label_356c4c;
        case 0x356c50u: goto label_356c50;
        case 0x356c54u: goto label_356c54;
        case 0x356c58u: goto label_356c58;
        case 0x356c5cu: goto label_356c5c;
        case 0x356c60u: goto label_356c60;
        case 0x356c64u: goto label_356c64;
        case 0x356c68u: goto label_356c68;
        case 0x356c6cu: goto label_356c6c;
        case 0x356c70u: goto label_356c70;
        case 0x356c74u: goto label_356c74;
        case 0x356c78u: goto label_356c78;
        case 0x356c7cu: goto label_356c7c;
        case 0x356c80u: goto label_356c80;
        case 0x356c84u: goto label_356c84;
        case 0x356c88u: goto label_356c88;
        case 0x356c8cu: goto label_356c8c;
        case 0x356c90u: goto label_356c90;
        case 0x356c94u: goto label_356c94;
        case 0x356c98u: goto label_356c98;
        case 0x356c9cu: goto label_356c9c;
        case 0x356ca0u: goto label_356ca0;
        case 0x356ca4u: goto label_356ca4;
        case 0x356ca8u: goto label_356ca8;
        case 0x356cacu: goto label_356cac;
        case 0x356cb0u: goto label_356cb0;
        case 0x356cb4u: goto label_356cb4;
        case 0x356cb8u: goto label_356cb8;
        case 0x356cbcu: goto label_356cbc;
        case 0x356cc0u: goto label_356cc0;
        case 0x356cc4u: goto label_356cc4;
        case 0x356cc8u: goto label_356cc8;
        case 0x356cccu: goto label_356ccc;
        case 0x356cd0u: goto label_356cd0;
        case 0x356cd4u: goto label_356cd4;
        case 0x356cd8u: goto label_356cd8;
        case 0x356cdcu: goto label_356cdc;
        case 0x356ce0u: goto label_356ce0;
        case 0x356ce4u: goto label_356ce4;
        case 0x356ce8u: goto label_356ce8;
        case 0x356cecu: goto label_356cec;
        case 0x356cf0u: goto label_356cf0;
        case 0x356cf4u: goto label_356cf4;
        case 0x356cf8u: goto label_356cf8;
        case 0x356cfcu: goto label_356cfc;
        case 0x356d00u: goto label_356d00;
        case 0x356d04u: goto label_356d04;
        case 0x356d08u: goto label_356d08;
        case 0x356d0cu: goto label_356d0c;
        case 0x356d10u: goto label_356d10;
        case 0x356d14u: goto label_356d14;
        case 0x356d18u: goto label_356d18;
        case 0x356d1cu: goto label_356d1c;
        case 0x356d20u: goto label_356d20;
        case 0x356d24u: goto label_356d24;
        case 0x356d28u: goto label_356d28;
        case 0x356d2cu: goto label_356d2c;
        case 0x356d30u: goto label_356d30;
        case 0x356d34u: goto label_356d34;
        case 0x356d38u: goto label_356d38;
        case 0x356d3cu: goto label_356d3c;
        case 0x356d40u: goto label_356d40;
        case 0x356d44u: goto label_356d44;
        case 0x356d48u: goto label_356d48;
        case 0x356d4cu: goto label_356d4c;
        case 0x356d50u: goto label_356d50;
        case 0x356d54u: goto label_356d54;
        case 0x356d58u: goto label_356d58;
        case 0x356d5cu: goto label_356d5c;
        case 0x356d60u: goto label_356d60;
        case 0x356d64u: goto label_356d64;
        case 0x356d68u: goto label_356d68;
        case 0x356d6cu: goto label_356d6c;
        case 0x356d70u: goto label_356d70;
        case 0x356d74u: goto label_356d74;
        case 0x356d78u: goto label_356d78;
        case 0x356d7cu: goto label_356d7c;
        case 0x356d80u: goto label_356d80;
        case 0x356d84u: goto label_356d84;
        case 0x356d88u: goto label_356d88;
        case 0x356d8cu: goto label_356d8c;
        case 0x356d90u: goto label_356d90;
        case 0x356d94u: goto label_356d94;
        case 0x356d98u: goto label_356d98;
        case 0x356d9cu: goto label_356d9c;
        case 0x356da0u: goto label_356da0;
        case 0x356da4u: goto label_356da4;
        case 0x356da8u: goto label_356da8;
        case 0x356dacu: goto label_356dac;
        case 0x356db0u: goto label_356db0;
        case 0x356db4u: goto label_356db4;
        case 0x356db8u: goto label_356db8;
        case 0x356dbcu: goto label_356dbc;
        case 0x356dc0u: goto label_356dc0;
        case 0x356dc4u: goto label_356dc4;
        case 0x356dc8u: goto label_356dc8;
        case 0x356dccu: goto label_356dcc;
        case 0x356dd0u: goto label_356dd0;
        case 0x356dd4u: goto label_356dd4;
        case 0x356dd8u: goto label_356dd8;
        case 0x356ddcu: goto label_356ddc;
        case 0x356de0u: goto label_356de0;
        case 0x356de4u: goto label_356de4;
        case 0x356de8u: goto label_356de8;
        case 0x356decu: goto label_356dec;
        case 0x356df0u: goto label_356df0;
        case 0x356df4u: goto label_356df4;
        case 0x356df8u: goto label_356df8;
        case 0x356dfcu: goto label_356dfc;
        case 0x356e00u: goto label_356e00;
        case 0x356e04u: goto label_356e04;
        case 0x356e08u: goto label_356e08;
        case 0x356e0cu: goto label_356e0c;
        case 0x356e10u: goto label_356e10;
        case 0x356e14u: goto label_356e14;
        case 0x356e18u: goto label_356e18;
        case 0x356e1cu: goto label_356e1c;
        case 0x356e20u: goto label_356e20;
        case 0x356e24u: goto label_356e24;
        case 0x356e28u: goto label_356e28;
        case 0x356e2cu: goto label_356e2c;
        case 0x356e30u: goto label_356e30;
        case 0x356e34u: goto label_356e34;
        case 0x356e38u: goto label_356e38;
        case 0x356e3cu: goto label_356e3c;
        case 0x356e40u: goto label_356e40;
        case 0x356e44u: goto label_356e44;
        case 0x356e48u: goto label_356e48;
        case 0x356e4cu: goto label_356e4c;
        case 0x356e50u: goto label_356e50;
        case 0x356e54u: goto label_356e54;
        case 0x356e58u: goto label_356e58;
        case 0x356e5cu: goto label_356e5c;
        case 0x356e60u: goto label_356e60;
        case 0x356e64u: goto label_356e64;
        default: break;
    }

    ctx->pc = 0x3567e0u;

label_3567e0:
    // 0x3567e0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3567e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_3567e4:
    // 0x3567e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3567e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3567e8:
    // 0x3567e8: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x3567e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
label_3567ec:
    // 0x3567ec: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x3567ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
label_3567f0:
    // 0x3567f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3567f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3567f4:
    // 0x3567f4: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x3567f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
label_3567f8:
    // 0x3567f8: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x3567f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
label_3567fc:
    // 0x3567fc: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x3567fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
label_356800:
    // 0x356800: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x356800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
label_356804:
    // 0x356804: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x356804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
label_356808:
    // 0x356808: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x356808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
label_35680c:
    // 0x35680c: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x35680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
label_356810:
    // 0x356810: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x356810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
label_356814:
    // 0x356814: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x356814u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_356818:
    // 0x356818: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x356818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_35681c:
    // 0x35681c: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x35681cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
label_356820:
    // 0x356820: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x356820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356824:
    // 0x356824: 0x24430120  addiu       $v1, $v0, 0x120
    ctx->pc = 0x356824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_356828:
    // 0x356828: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x356828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_35682c:
    // 0x35682c: 0x68440127  ldl         $a0, 0x127($v0)
    ctx->pc = 0x35682cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_356830:
    // 0x356830: 0x6c440120  ldr         $a0, 0x120($v0)
    ctx->pc = 0x356830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_356834:
    // 0x356834: 0x6845012f  ldl         $a1, 0x12F($v0)
    ctx->pc = 0x356834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_356838:
    // 0x356838: 0x6c450128  ldr         $a1, 0x128($v0)
    ctx->pc = 0x356838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_35683c:
    // 0x35683c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x35683cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_356840:
    // 0x356840: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x356840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_356844:
    // 0x356844: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x356844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_356848:
    // 0x356848: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x356848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_35684c:
    // 0x35684c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x35684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_356850:
    // 0x356850: 0x90520144  lbu         $s2, 0x144($v0)
    ctx->pc = 0x356850u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 324)));
label_356854:
    // 0x356854: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x356854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_356858:
    // 0x356858: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x356858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35685c:
    // 0x35685c: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x35685cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_356860:
    // 0x356860: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x356860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_356864:
    // 0x356864: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x356864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_356868:
    // 0x356868: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x356868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_35686c:
    // 0x35686c: 0x24860070  addiu       $a2, $a0, 0x70
    ctx->pc = 0x35686cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_356870:
    // 0x356870: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x356870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356874:
    // 0x356874: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x356874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_356878:
    // 0x356878: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x356878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35687c:
    // 0x35687c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x35687cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_356880:
    // 0x356880: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x356880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356884:
    // 0x356884: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x356884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_356888:
    // 0x356888: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x356888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35688c:
    // 0x35688c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x35688cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_356890:
    // 0x356890: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x356890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356894:
    // 0x356894: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x356894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_356898:
    // 0x356898: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x356898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35689c:
    // 0x35689c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x35689cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3568a0:
    // 0x3568a0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3568a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3568a4:
    // 0x3568a4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3568a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3568a8:
    // 0x3568a8: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x3568a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3568ac:
    // 0x3568ac: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3568acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3568b0:
    // 0x3568b0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3568b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3568b4:
    // 0x3568b4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3568b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3568b8:
    // 0x3568b8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3568b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3568bc:
    // 0x3568bc: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x3568bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3568c0:
    // 0x3568c0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3568c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3568c4:
    // 0x3568c4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3568c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3568c8:
    // 0x3568c8: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x3568c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3568cc:
    // 0x3568cc: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x3568ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3568d0:
    // 0x3568d0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3568d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3568d4:
    // 0x3568d4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3568d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3568d8:
    // 0x3568d8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3568d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3568dc:
    // 0x3568dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3568dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3568e0:
    // 0x3568e0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3568e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3568e4:
    // 0x3568e4: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x3568e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3568e8:
    // 0x3568e8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3568e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3568ec:
    // 0x3568ec: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_3568f0:
    if (ctx->pc == 0x3568F0u) {
        ctx->pc = 0x3568F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3568ECu;
        // 0x3568f0: 0xe7a1004c  swc1        $f1, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3568F4u;
        goto label_3568f4;
    }
    ctx->pc = 0x3568ECu;
    {
        const bool branch_taken_0x3568ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3568F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3568ECu;
        // 0x3568f0: 0xe7a1004c  swc1        $f1, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3568ec) {
            ctx->pc = 0x356940u;
            goto label_356940;
        }
    }
    ctx->pc = 0x3568F4u;
label_3568f4:
    // 0x3568f4: 0x90820044  lbu         $v0, 0x44($a0)
    ctx->pc = 0x3568f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 68)));
label_3568f8:
    // 0x3568f8: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
label_3568fc:
    if (ctx->pc == 0x3568FCu) {
        ctx->pc = 0x3568FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3568F8u;
        // 0x3568fc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356900u;
        goto label_356900;
    }
    ctx->pc = 0x3568F8u;
    {
        const bool branch_taken_0x3568f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3568f8) {
            ctx->pc = 0x3568FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3568F8u;
            // 0x3568fc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356A6Cu;
            goto label_356a6c;
        }
    }
    ctx->pc = 0x356900u;
label_356900:
    // 0x356900: 0xc083062  jal         func_20C188
label_356904:
    if (ctx->pc == 0x356904u) {
        ctx->pc = 0x356904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356900u;
        // 0x356904: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356908u;
        goto label_356908;
    }
    ctx->pc = 0x356900u;
    SET_GPR_U32(ctx, 31, 0x356908u);
    ctx->pc = 0x356904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356900u;
    // 0x356904: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C188u, 0x356900u, 0x356908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356908u;
label_356908:
    // 0x356908: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x356908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35690c:
    // 0x35690c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x35690cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_356910:
    // 0x356910: 0xc083062  jal         func_20C188
label_356914:
    if (ctx->pc == 0x356914u) {
        ctx->pc = 0x356914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356910u;
        // 0x356914: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356918u;
        goto label_356918;
    }
    ctx->pc = 0x356910u;
    SET_GPR_U32(ctx, 31, 0x356918u);
    ctx->pc = 0x356914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356910u;
    // 0x356914: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C188u, 0x356910u, 0x356918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356918u;
label_356918:
    // 0x356918: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x356918u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35691c:
    // 0x35691c: 0x0  nop
    ctx->pc = 0x35691cu;
    // NOP
label_356920:
    // 0x356920: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x356920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_356924:
    // 0x356924: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x356924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356928:
    // 0x356928: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356928u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_35692c:
    // 0x35692c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35692cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_356930:
    // 0x356930: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x356930u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_356934:
    // 0x356934: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x356934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_356938:
    // 0x356938: 0x10000005  b           . + 4 + (0x5 << 2)
label_35693c:
    if (ctx->pc == 0x35693Cu) {
        ctx->pc = 0x35693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356938u;
        // 0x35693c: 0xac620144  sw          $v0, 0x144($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356940u;
        goto label_356940;
    }
    ctx->pc = 0x356938u;
    {
        const bool branch_taken_0x356938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356938u;
        // 0x35693c: 0xac620144  sw          $v0, 0x144($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356938) {
            ctx->pc = 0x356950u;
            goto label_356950;
        }
    }
    ctx->pc = 0x356940u;
label_356940:
    // 0x356940: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x356940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_356944:
    // 0x356944: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x356944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_356948:
    // 0x356948: 0x0  nop
    ctx->pc = 0x356948u;
    // NOP
label_35694c:
    // 0x35694c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x35694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_356950:
    // 0x356950: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x356950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_356954:
    // 0x356954: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x356954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_356958:
    // 0x356958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x356958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_35695c:
    // 0x35695c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x35695cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_356960:
    // 0x356960: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x356960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_356964:
    // 0x356964: 0xe7b5005c  swc1        $f21, 0x5C($sp)
    ctx->pc = 0x356964u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_356968:
    // 0x356968: 0xe7b40054  swc1        $f20, 0x54($sp)
    ctx->pc = 0x356968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_35696c:
    // 0x35696c: 0xc0dc10e  jal         func_370438
label_356970:
    if (ctx->pc == 0x356970u) {
        ctx->pc = 0x356970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35696Cu;
        // 0x356970: 0xe7b40058  swc1        $f20, 0x58($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x356974u;
        goto label_356974;
    }
    ctx->pc = 0x35696Cu;
    SET_GPR_U32(ctx, 31, 0x356974u);
    ctx->pc = 0x356970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35696Cu;
    // 0x356970: 0xe7b40058  swc1        $f20, 0x58($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x35696Cu, 0x356974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356974u;
label_356974:
    // 0x356974: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x356974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_356978:
    // 0x356978: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x356978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_35697c:
    // 0x35697c: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x35697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_356980:
    // 0x356980: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x356980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_356984:
    // 0x356984: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x356984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_356988:
    // 0x356988: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x356988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_35698c:
    // 0x35698c: 0x24830154  addiu       $v1, $a0, 0x154
    ctx->pc = 0x35698cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
label_356990:
    // 0x356990: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_356994:
    // 0x356994: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x356994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_356998:
    // 0x356998: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x356998u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_35699c:
    // 0x35699c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x35699cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3569a0:
    // 0x3569a0: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x3569a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_3569a4:
    // 0x3569a4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3569a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_3569a8:
    // 0x3569a8: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x3569a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3569ac:
    // 0x3569ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3569acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3569b0:
    // 0x3569b0: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x3569b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3569b4:
    // 0x3569b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3569b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3569b8:
    // 0x3569b8: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x3569b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_3569bc:
    // 0x3569bc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3569bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3569c0:
    // 0x3569c0: 0xe4820154  swc1        $f2, 0x154($a0)
    ctx->pc = 0x3569c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
label_3569c4:
    // 0x3569c4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3569c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3569c8:
    // 0x3569c8: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x3569c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3569cc:
    // 0x3569cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3569ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3569d0:
    // 0x3569d0: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x3569d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_3569d4:
    // 0x3569d4: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3569d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3569d8:
    // 0x3569d8: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x3569d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3569dc:
    // 0x3569dc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3569dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3569e0:
    // 0x3569e0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x3569e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3569e4:
    // 0x3569e4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3569e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3569e8:
    // 0x3569e8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x3569e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_3569ec:
    // 0x3569ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3569ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3569f0:
    // 0x3569f0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3569f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3569f4:
    // 0x3569f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3569f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3569f8:
    // 0x3569f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3569fc:
    if (ctx->pc == 0x3569FCu) {
        ctx->pc = 0x3569FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3569F8u;
        // 0x3569fc: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356A00u;
        goto label_356a00;
    }
    ctx->pc = 0x3569F8u;
    {
        const bool branch_taken_0x3569f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3569f8) {
            ctx->pc = 0x3569FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3569F8u;
            // 0x3569fc: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356A10u;
            goto label_356a10;
        }
    }
    ctx->pc = 0x356A00u;
label_356a00:
    // 0x356a00: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x356a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
label_356a04:
    // 0x356a04: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_356a08:
    if (ctx->pc == 0x356A08u) {
        ctx->pc = 0x356A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A04u;
        // 0x356a08: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356A0Cu;
        goto label_356a0c;
    }
    ctx->pc = 0x356A04u;
    {
        const bool branch_taken_0x356a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356a04) {
            ctx->pc = 0x356A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356A04u;
            // 0x356a08: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356A20u;
            goto label_356a20;
        }
    }
    ctx->pc = 0x356A0Cu;
label_356a0c:
    // 0x356a0c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x356a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356a10:
    // 0x356a10: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x356a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_356a14:
    // 0x356a14: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x356a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_356a18:
    // 0x356a18: 0xac620150  sw          $v0, 0x150($v1)
    ctx->pc = 0x356a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 2));
label_356a1c:
    // 0x356a1c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x356a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356a20:
    // 0x356a20: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x356a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_356a24:
    // 0x356a24: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x356a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_356a28:
    // 0x356a28: 0x40f809  jalr        $v0
label_356a2c:
    if (ctx->pc == 0x356A2Cu) {
        ctx->pc = 0x356A30u;
        goto label_356a30;
    }
    ctx->pc = 0x356A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356A30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356A28u, 0x356A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356A30u;
label_356a30:
    // 0x356a30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x356a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356a34:
    // 0x356a34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_356a38:
    if (ctx->pc == 0x356A38u) {
        ctx->pc = 0x356A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A34u;
        // 0x356a38: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356A3Cu;
        goto label_356a3c;
    }
    ctx->pc = 0x356A34u;
    {
        const bool branch_taken_0x356a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a34) {
            ctx->pc = 0x356A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356A34u;
            // 0x356a38: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356A4Cu;
            goto label_356a4c;
        }
    }
    ctx->pc = 0x356A3Cu;
label_356a3c:
    // 0x356a3c: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x356a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
label_356a40:
    // 0x356a40: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_356a44:
    if (ctx->pc == 0x356A44u) {
        ctx->pc = 0x356A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A40u;
        // 0x356a44: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356A48u;
        goto label_356a48;
    }
    ctx->pc = 0x356A40u;
    {
        const bool branch_taken_0x356a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356a40) {
            ctx->pc = 0x356A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356A40u;
            // 0x356a44: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356A64u;
            goto label_356a64;
        }
    }
    ctx->pc = 0x356A48u;
label_356a48:
    // 0x356a48: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x356a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356a4c:
    // 0x356a4c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x356a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_356a50:
    // 0x356a50: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x356a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_356a54:
    // 0x356a54: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x356a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_356a58:
    // 0x356a58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x356a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_356a5c:
    // 0x356a5c: 0xac820150  sw          $v0, 0x150($a0)
    ctx->pc = 0x356a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
label_356a60:
    // 0x356a60: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x356a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356a64:
    // 0x356a64: 0xac520144  sw          $s2, 0x144($v0)
    ctx->pc = 0x356a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 18));
label_356a68:
    // 0x356a68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x356a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356a6c:
    // 0x356a6c: 0x504000e8  beql        $v0, $zero, . + 4 + (0xE8 << 2)
label_356a70:
    if (ctx->pc == 0x356A70u) {
        ctx->pc = 0x356A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A6Cu;
        // 0x356a70: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x356A74u;
        goto label_356a74;
    }
    ctx->pc = 0x356A6Cu;
    {
        const bool branch_taken_0x356a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356a6c) {
            ctx->pc = 0x356A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356A6Cu;
            // 0x356a70: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x356E10u;
            goto label_356e10;
        }
    }
    ctx->pc = 0x356A74u;
label_356a74:
    // 0x356a74: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x356a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_356a78:
    // 0x356a78: 0x584000e5  blezl       $v0, . + 4 + (0xE5 << 2)
label_356a7c:
    if (ctx->pc == 0x356A7Cu) {
        ctx->pc = 0x356A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A78u;
        // 0x356a7c: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x356A80u;
        goto label_356a80;
    }
    ctx->pc = 0x356A78u;
    {
        const bool branch_taken_0x356a78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x356a78) {
            ctx->pc = 0x356A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356A78u;
            // 0x356a7c: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x356E10u;
            goto label_356e10;
        }
    }
    ctx->pc = 0x356A80u;
label_356a80:
    // 0x356a80: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x356a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356a84:
    // 0x356a84: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x356a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_356a88:
    // 0x356a88: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x356a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_356a8c:
    // 0x356a8c: 0x546000e0  bnel        $v1, $zero, . + 4 + (0xE0 << 2)
label_356a90:
    if (ctx->pc == 0x356A90u) {
        ctx->pc = 0x356A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A8Cu;
        // 0x356a90: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x356A94u;
        goto label_356a94;
    }
    ctx->pc = 0x356A8Cu;
    {
        const bool branch_taken_0x356a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356a8c) {
            ctx->pc = 0x356A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356A8Cu;
            // 0x356a90: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x356E10u;
            goto label_356e10;
        }
    }
    ctx->pc = 0x356A94u;
label_356a94:
    // 0x356a94: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x356a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_356a98:
    // 0x356a98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_356a9c:
    if (ctx->pc == 0x356A9Cu) {
        ctx->pc = 0x356A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A98u;
        // 0x356a9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356AA0u;
        goto label_356aa0;
    }
    ctx->pc = 0x356A98u;
    {
        const bool branch_taken_0x356a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A98u;
        // 0x356a9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356a98) {
            ctx->pc = 0x356AACu;
            goto label_356aac;
        }
    }
    ctx->pc = 0x356AA0u;
label_356aa0:
    // 0x356aa0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x356aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_356aa4:
    // 0x356aa4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_356aa8:
    if (ctx->pc == 0x356AA8u) {
        ctx->pc = 0x356AACu;
        goto label_356aac;
    }
    ctx->pc = 0x356AA4u;
    {
        const bool branch_taken_0x356aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356aa4) {
            ctx->pc = 0x356AB0u;
            goto label_356ab0;
        }
    }
    ctx->pc = 0x356AACu;
label_356aac:
    // 0x356aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356ab0:
    // 0x356ab0: 0x106000d6  beqz        $v1, . + 4 + (0xD6 << 2)
label_356ab4:
    if (ctx->pc == 0x356AB4u) {
        ctx->pc = 0x356AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356AB0u;
        // 0x356ab4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356AB8u;
        goto label_356ab8;
    }
    ctx->pc = 0x356AB0u;
    {
        const bool branch_taken_0x356ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x356AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356AB0u;
        // 0x356ab4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ab0) {
            ctx->pc = 0x356E0Cu;
            goto label_356e0c;
        }
    }
    ctx->pc = 0x356AB8u;
label_356ab8:
    // 0x356ab8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x356ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356abc:
    // 0x356abc: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x356abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_356ac0:
    // 0x356ac0: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x356ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_356ac4:
    // 0x356ac4: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x356ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356ac8:
    // 0x356ac8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x356ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_356acc:
    // 0x356acc: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x356accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_356ad0:
    // 0x356ad0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x356ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356ad4:
    // 0x356ad4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x356ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_356ad8:
    // 0x356ad8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x356ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356adc:
    // 0x356adc: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x356adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_356ae0:
    // 0x356ae0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x356ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356ae4:
    // 0x356ae4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x356ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_356ae8:
    // 0x356ae8: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x356ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_356aec:
    // 0x356aec: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x356aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356af0:
    // 0x356af0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x356af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_356af4:
    // 0x356af4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x356af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_356af8:
    // 0x356af8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x356af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356afc:
    // 0x356afc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x356afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_356b00:
    // 0x356b00: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x356b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356b04:
    // 0x356b04: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x356b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_356b08:
    // 0x356b08: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x356b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356b0c:
    // 0x356b0c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x356b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_356b10:
    // 0x356b10: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x356b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_356b14:
    // 0x356b14: 0x184000b4  blez        $v0, . + 4 + (0xB4 << 2)
label_356b18:
    if (ctx->pc == 0x356B18u) {
        ctx->pc = 0x356B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B14u;
        // 0x356b18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356B1Cu;
        goto label_356b1c;
    }
    ctx->pc = 0x356B14u;
    {
        const bool branch_taken_0x356b14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x356B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B14u;
        // 0x356b18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356b14) {
            ctx->pc = 0x356DE8u;
            goto label_356de8;
        }
    }
    ctx->pc = 0x356B1Cu;
label_356b1c:
    // 0x356b1c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x356b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_356b20:
    // 0x356b20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x356b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_356b24:
    // 0x356b24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x356b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_356b28:
    // 0x356b28: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x356b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_356b2c:
    // 0x356b2c: 0x27be00b0  addiu       $fp, $sp, 0xB0
    ctx->pc = 0x356b2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_356b30:
    // 0x356b30: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x356b30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_356b34:
    // 0x356b34: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x356b34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_356b38:
    // 0x356b38: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x356b38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_356b3c:
    // 0x356b3c: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x356b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_356b40:
    // 0x356b40: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x356b40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_356b44:
    // 0x356b44: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x356b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_356b48:
    // 0x356b48: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x356b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_356b4c:
    // 0x356b4c: 0xc0f6a96  jal         func_3DAA58
label_356b50:
    if (ctx->pc == 0x356B50u) {
        ctx->pc = 0x356B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B4Cu;
        // 0x356b50: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356B54u;
        goto label_356b54;
    }
    ctx->pc = 0x356B4Cu;
    SET_GPR_U32(ctx, 31, 0x356B54u);
    ctx->pc = 0x356B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356B4Cu;
    // 0x356b50: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x356B4Cu, 0x356B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356B54u;
label_356b54:
    // 0x356b54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x356b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356b58:
    // 0x356b58: 0xc083024  jal         func_20C090
label_356b5c:
    if (ctx->pc == 0x356B5Cu) {
        ctx->pc = 0x356B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B58u;
        // 0x356b5c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356B60u;
        goto label_356b60;
    }
    ctx->pc = 0x356B58u;
    SET_GPR_U32(ctx, 31, 0x356B60u);
    ctx->pc = 0x356B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356B58u;
    // 0x356b5c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C090u, 0x356B58u, 0x356B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356B60u;
label_356b60:
    // 0x356b60: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x356b60u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_356b64:
    // 0x356b64: 0x0  nop
    ctx->pc = 0x356b64u;
    // NOP
label_356b68:
    // 0x356b68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x356b68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_356b6c:
    // 0x356b6c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x356b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356b70:
    // 0x356b70: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x356b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356b74:
    // 0x356b74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x356b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_356b78:
    // 0x356b78: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x356b78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_356b7c:
    // 0x356b7c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x356b7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_356b80:
    // 0x356b80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x356b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_356b84:
    // 0x356b84: 0xac620144  sw          $v0, 0x144($v1)
    ctx->pc = 0x356b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 2));
label_356b88:
    // 0x356b88: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x356b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356b8c:
    // 0x356b8c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x356b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_356b90:
    // 0x356b90: 0x4601a001  sub.s       $f0, $f20, $f1
    ctx->pc = 0x356b90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_356b94:
    // 0x356b94: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x356b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_356b98:
    // 0x356b98: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x356b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_356b9c:
    // 0x356b9c: 0xc7a70060  lwc1        $f7, 0x60($sp)
    ctx->pc = 0x356b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_356ba0:
    // 0x356ba0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x356ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_356ba4:
    // 0x356ba4: 0xc7a80064  lwc1        $f8, 0x64($sp)
    ctx->pc = 0x356ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_356ba8:
    // 0x356ba8: 0xc7a90068  lwc1        $f9, 0x68($sp)
    ctx->pc = 0x356ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_356bac:
    // 0x356bac: 0x460711c2  mul.s       $f7, $f2, $f7
    ctx->pc = 0x356bacu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_356bb0:
    // 0x356bb0: 0xc7a5006c  lwc1        $f5, 0x6C($sp)
    ctx->pc = 0x356bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_356bb4:
    // 0x356bb4: 0x46081202  mul.s       $f8, $f2, $f8
    ctx->pc = 0x356bb4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_356bb8:
    // 0x356bb8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x356bb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_356bbc:
    // 0x356bbc: 0xc7a60050  lwc1        $f6, 0x50($sp)
    ctx->pc = 0x356bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_356bc0:
    // 0x356bc0: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x356bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_356bc4:
    // 0x356bc4: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x356bc4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_356bc8:
    // 0x356bc8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x356bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356bcc:
    // 0x356bcc: 0x46062182  mul.s       $f6, $f4, $f6
    ctx->pc = 0x356bccu;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_356bd0:
    // 0x356bd0: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x356bd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_356bd4:
    // 0x356bd4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x356bd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_356bd8:
    // 0x356bd8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x356bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356bdc:
    // 0x356bdc: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x356bdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
label_356be0:
    // 0x356be0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x356be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356be4:
    // 0x356be4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x356be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_356be8:
    // 0x356be8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x356be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_356bec:
    // 0x356bec: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x356becu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_356bf0:
    // 0x356bf0: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x356bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_356bf4:
    // 0x356bf4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x356bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_356bf8:
    // 0x356bf8: 0xe7a700a0  swc1        $f7, 0xA0($sp)
    ctx->pc = 0x356bf8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_356bfc:
    // 0x356bfc: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x356bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_356c00:
    // 0x356c00: 0xe7a800a4  swc1        $f8, 0xA4($sp)
    ctx->pc = 0x356c00u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_356c04:
    // 0x356c04: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x356c04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_356c08:
    // 0x356c08: 0xe7a500ac  swc1        $f5, 0xAC($sp)
    ctx->pc = 0x356c08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_356c0c:
    // 0x356c0c: 0xe7a600b0  swc1        $f6, 0xB0($sp)
    ctx->pc = 0x356c0cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_356c10:
    // 0x356c10: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x356c10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_356c14:
    // 0x356c14: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x356c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_356c18:
    // 0x356c18: 0xe7a400bc  swc1        $f4, 0xBC($sp)
    ctx->pc = 0x356c18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_356c1c:
    // 0x356c1c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x356c1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_356c20:
    // 0x356c20: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x356c20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_356c24:
    // 0x356c24: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x356c24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_356c28:
    // 0x356c28: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x356c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_356c2c:
    // 0x356c2c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x356c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356c30:
    // 0x356c30: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x356c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356c34:
    // 0x356c34: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x356c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_356c38:
    // 0x356c38: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x356c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_356c3c:
    // 0x356c3c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x356c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_356c40:
    // 0x356c40: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x356c40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_356c44:
    // 0x356c44: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x356c44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_356c48:
    // 0x356c48: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x356c48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_356c4c:
    // 0x356c4c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x356c4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_356c50:
    // 0x356c50: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x356c50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_356c54:
    // 0x356c54: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x356c54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_356c58:
    // 0x356c58: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x356c58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_356c5c:
    // 0x356c5c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x356c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356c60:
    // 0x356c60: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x356c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_356c64:
    // 0x356c64: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x356c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_356c68:
    // 0x356c68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x356c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_356c6c:
    // 0x356c6c: 0xc0b1534  jal         func_2C54D0
label_356c70:
    if (ctx->pc == 0x356C70u) {
        ctx->pc = 0x356C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C6Cu;
        // 0x356c70: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356C74u;
        goto label_356c74;
    }
    ctx->pc = 0x356C6Cu;
    SET_GPR_U32(ctx, 31, 0x356C74u);
    ctx->pc = 0x356C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356C6Cu;
    // 0x356c70: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C54D0u, 0x356C6Cu, 0x356C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356C74u;
label_356c74:
    // 0x356c74: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x356c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356c78:
    // 0x356c78: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x356c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_356c7c:
    // 0x356c7c: 0xc0c48da  jal         func_312368
label_356c80:
    if (ctx->pc == 0x356C80u) {
        ctx->pc = 0x356C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C7Cu;
        // 0x356c80: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356C84u;
        goto label_356c84;
    }
    ctx->pc = 0x356C7Cu;
    SET_GPR_U32(ctx, 31, 0x356C84u);
    ctx->pc = 0x356C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356C7Cu;
    // 0x356c80: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x356C7Cu, 0x356C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356C84u;
label_356c84:
    // 0x356c84: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x356c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356c88:
    // 0x356c88: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x356c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_356c8c:
    // 0x356c8c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x356c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_356c90:
    // 0x356c90: 0x40f809  jalr        $v0
label_356c94:
    if (ctx->pc == 0x356C94u) {
        ctx->pc = 0x356C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C90u;
        // 0x356c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356C98u;
        goto label_356c98;
    }
    ctx->pc = 0x356C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356C98u);
        ctx->pc = 0x356C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356C90u;
        // 0x356c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356C90u, 0x356C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356C98u;
label_356c98:
    // 0x356c98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x356c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356c9c:
    // 0x356c9c: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x356c9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
label_356ca0:
    // 0x356ca0: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_356ca4:
    if (ctx->pc == 0x356CA4u) {
        ctx->pc = 0x356CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CA0u;
        // 0x356ca4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356CA8u;
        goto label_356ca8;
    }
    ctx->pc = 0x356CA0u;
    {
        const bool branch_taken_0x356ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356ca0) {
            ctx->pc = 0x356CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356CA0u;
            // 0x356ca4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356D40u;
            goto label_356d40;
        }
    }
    ctx->pc = 0x356CA8u;
label_356ca8:
    // 0x356ca8: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x356ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_356cac:
    // 0x356cac: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x356cacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_356cb0:
    // 0x356cb0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x356cb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_356cb4:
    // 0x356cb4: 0xc0dc10e  jal         func_370438
label_356cb8:
    if (ctx->pc == 0x356CB8u) {
        ctx->pc = 0x356CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CB4u;
        // 0x356cb8: 0xe7b4009c  swc1        $f20, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x356CBCu;
        goto label_356cbc;
    }
    ctx->pc = 0x356CB4u;
    SET_GPR_U32(ctx, 31, 0x356CBCu);
    ctx->pc = 0x356CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356CB4u;
    // 0x356cb8: 0xe7b4009c  swc1        $f20, 0x9C($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x356CB4u, 0x356CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356CBCu;
label_356cbc:
    // 0x356cbc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x356cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_356cc0:
    // 0x356cc0: 0x4600a101  sub.s       $f4, $f20, $f0
    ctx->pc = 0x356cc0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_356cc4:
    // 0x356cc4: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x356cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_356cc8:
    // 0x356cc8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x356cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356ccc:
    // 0x356ccc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x356cccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_356cd0:
    // 0x356cd0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x356cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356cd4:
    // 0x356cd4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x356cd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_356cd8:
    // 0x356cd8: 0x24640154  addiu       $a0, $v1, 0x154
    ctx->pc = 0x356cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
label_356cdc:
    // 0x356cdc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x356cdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_356ce0:
    // 0x356ce0: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x356ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_356ce4:
    // 0x356ce4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x356ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_356ce8:
    // 0x356ce8: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x356ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356cec:
    // 0x356cec: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x356cecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_356cf0:
    // 0x356cf0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356cf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_356cf4:
    // 0x356cf4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x356cf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_356cf8:
    // 0x356cf8: 0xe4620154  swc1        $f2, 0x154($v1)
    ctx->pc = 0x356cf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 340), bits); }
label_356cfc:
    // 0x356cfc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x356cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_356d00:
    // 0x356d00: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x356d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356d04:
    // 0x356d04: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x356d04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_356d08:
    // 0x356d08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_356d0c:
    // 0x356d0c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x356d0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_356d10:
    // 0x356d10: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x356d10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_356d14:
    // 0x356d14: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x356d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_356d18:
    // 0x356d18: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x356d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_356d1c:
    // 0x356d1c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x356d1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_356d20:
    // 0x356d20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x356d20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_356d24:
    // 0x356d24: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x356d24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_356d28:
    // 0x356d28: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x356d28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_356d2c:
    // 0x356d2c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x356d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356d30:
    // 0x356d30: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x356d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_356d34:
    // 0x356d34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x356d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_356d38:
    // 0x356d38: 0xac620150  sw          $v0, 0x150($v1)
    ctx->pc = 0x356d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 336), GPR_U32(ctx, 2));
label_356d3c:
    // 0x356d3c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x356d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356d40:
    // 0x356d40: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x356d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_356d44:
    // 0x356d44: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x356d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_356d48:
    // 0x356d48: 0x40f809  jalr        $v0
label_356d4c:
    if (ctx->pc == 0x356D4Cu) {
        ctx->pc = 0x356D50u;
        goto label_356d50;
    }
    ctx->pc = 0x356D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356D50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356D48u, 0x356D50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356D50u;
label_356d50:
    // 0x356d50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x356d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356d54:
    // 0x356d54: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x356d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
label_356d58:
    // 0x356d58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_356d5c:
    if (ctx->pc == 0x356D5Cu) {
        ctx->pc = 0x356D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D58u;
        // 0x356d5c: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356D60u;
        goto label_356d60;
    }
    ctx->pc = 0x356D58u;
    {
        const bool branch_taken_0x356d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D58u;
        // 0x356d5c: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356d58) {
            ctx->pc = 0x356D7Cu;
            goto label_356d7c;
        }
    }
    ctx->pc = 0x356D60u;
label_356d60:
    // 0x356d60: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x356d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356d64:
    // 0x356d64: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x356d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_356d68:
    // 0x356d68: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x356d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
label_356d6c:
    // 0x356d6c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x356d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_356d70:
    // 0x356d70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x356d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_356d74:
    // 0x356d74: 0xac820150  sw          $v0, 0x150($a0)
    ctx->pc = 0x356d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
label_356d78:
    // 0x356d78: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x356d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_356d7c:
    // 0x356d7c: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x356d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_356d80:
    // 0x356d80: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x356d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_356d84:
    // 0x356d84: 0x6ba6000f  ldl         $a2, 0xF($sp)
    ctx->pc = 0x356d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_356d88:
    // 0x356d88: 0x6fa60008  ldr         $a2, 0x8($sp)
    ctx->pc = 0x356d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_356d8c:
    // 0x356d8c: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x356d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_356d90:
    // 0x356d90: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x356d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_356d94:
    // 0x356d94: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x356d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_356d98:
    // 0x356d98: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x356d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_356d9c:
    // 0x356d9c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x356d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356da0:
    // 0x356da0: 0xac520144  sw          $s2, 0x144($v0)
    ctx->pc = 0x356da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 18));
label_356da4:
    // 0x356da4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x356da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356da8:
    // 0x356da8: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x356da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_356dac:
    // 0x356dac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x356dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_356db0:
    // 0x356db0: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x356db0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_356db4:
    // 0x356db4: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x356db4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_356db8:
    // 0x356db8: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x356db8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_356dbc:
    // 0x356dbc: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x356dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_356dc0:
    // 0x356dc0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x356dc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_356dc4:
    // 0x356dc4: 0xf8810060  sqc2        $vf1, 0x60($a0)
    ctx->pc = 0x356dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_356dc8:
    // 0x356dc8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x356dc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_356dcc:
    // 0x356dcc: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x356dccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_356dd0:
    // 0x356dd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x356dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356dd4:
    // 0x356dd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x356dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_356dd8:
    // 0x356dd8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x356dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_356ddc:
    // 0x356ddc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x356ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_356de0:
    // 0x356de0: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
label_356de4:
    if (ctx->pc == 0x356DE4u) {
        ctx->pc = 0x356DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DE0u;
        // 0x356de4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356DE8u;
        goto label_356de8;
    }
    ctx->pc = 0x356DE0u;
    {
        const bool branch_taken_0x356de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DE0u;
        // 0x356de4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356de0) {
            ctx->pc = 0x356B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356b48;
        }
    }
    ctx->pc = 0x356DE8u;
label_356de8:
    // 0x356de8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x356de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356dec:
    // 0x356dec: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x356decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_356df0:
    // 0x356df0: 0xc0c48da  jal         func_312368
label_356df4:
    if (ctx->pc == 0x356DF4u) {
        ctx->pc = 0x356DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DF0u;
        // 0x356df4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356DF8u;
        goto label_356df8;
    }
    ctx->pc = 0x356DF0u;
    SET_GPR_U32(ctx, 31, 0x356DF8u);
    ctx->pc = 0x356DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356DF0u;
    // 0x356df4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x356DF0u, 0x356DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356DF8u;
label_356df8:
    // 0x356df8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x356df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_356dfc:
    // 0x356dfc: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x356dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_356e00:
    // 0x356e00: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x356e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_356e04:
    // 0x356e04: 0x40f809  jalr        $v0
label_356e08:
    if (ctx->pc == 0x356E08u) {
        ctx->pc = 0x356E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E04u;
        // 0x356e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356E0Cu;
        goto label_356e0c;
    }
    ctx->pc = 0x356E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356E0Cu);
        ctx->pc = 0x356E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E04u;
        // 0x356e08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356E04u, 0x356E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356E0Cu;
label_356e0c:
    // 0x356e0c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x356e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_356e10:
    // 0x356e10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x356e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_356e14:
    // 0x356e14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x356e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_356e18:
    // 0x356e18: 0x0  nop
    ctx->pc = 0x356e18u;
    // NOP
label_356e1c:
    // 0x356e1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x356e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_356e20:
    // 0x356e20: 0x0  nop
    ctx->pc = 0x356e20u;
    // NOP
label_356e24:
    // 0x356e24: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_356e28:
    if (ctx->pc == 0x356E28u) {
        ctx->pc = 0x356E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E24u;
        // 0x356e28: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x356E2Cu;
        goto label_356e2c;
    }
    ctx->pc = 0x356E24u;
    {
        const bool branch_taken_0x356e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x356e24) {
            ctx->pc = 0x356E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356E24u;
            // 0x356e28: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x356E2Cu;
            goto label_356e2c;
        }
    }
    ctx->pc = 0x356E2Cu;
label_356e2c:
    // 0x356e2c: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x356e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
label_356e30:
    // 0x356e30: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x356e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_356e34:
    // 0x356e34: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x356e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_356e38:
    // 0x356e38: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x356e38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_356e3c:
    // 0x356e3c: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x356e3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_356e40:
    // 0x356e40: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x356e40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_356e44:
    // 0x356e44: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x356e44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_356e48:
    // 0x356e48: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x356e48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_356e4c:
    // 0x356e4c: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x356e4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_356e50:
    // 0x356e50: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x356e50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_356e54:
    // 0x356e54: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x356e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
label_356e58:
    // 0x356e58: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x356e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_356e5c:
    // 0x356e5c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x356e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_356e60:
    // 0x356e60: 0x3e00008  jr          $ra
label_356e64:
    if (ctx->pc == 0x356E64u) {
        ctx->pc = 0x356E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E60u;
        // 0x356e64: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356E68u;
        goto label_fallthrough_0x356e60;
    }
    ctx->pc = 0x356E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E60u;
        // 0x356e64: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x356e60:
    ctx->pc = 0x356E68u;
}
