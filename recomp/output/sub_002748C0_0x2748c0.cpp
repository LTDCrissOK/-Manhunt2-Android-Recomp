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

// Function: sub_002748C0
// Address: 0x2748c0 - 0x274ed8
void sub_002748C0_0x2748c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002748C0_0x2748c0");
#endif

    switch (ctx->pc) {
        case 0x2748c0u: goto label_2748c0;
        case 0x2748c4u: goto label_2748c4;
        case 0x2748c8u: goto label_2748c8;
        case 0x2748ccu: goto label_2748cc;
        case 0x2748d0u: goto label_2748d0;
        case 0x2748d4u: goto label_2748d4;
        case 0x2748d8u: goto label_2748d8;
        case 0x2748dcu: goto label_2748dc;
        case 0x2748e0u: goto label_2748e0;
        case 0x2748e4u: goto label_2748e4;
        case 0x2748e8u: goto label_2748e8;
        case 0x2748ecu: goto label_2748ec;
        case 0x2748f0u: goto label_2748f0;
        case 0x2748f4u: goto label_2748f4;
        case 0x2748f8u: goto label_2748f8;
        case 0x2748fcu: goto label_2748fc;
        case 0x274900u: goto label_274900;
        case 0x274904u: goto label_274904;
        case 0x274908u: goto label_274908;
        case 0x27490cu: goto label_27490c;
        case 0x274910u: goto label_274910;
        case 0x274914u: goto label_274914;
        case 0x274918u: goto label_274918;
        case 0x27491cu: goto label_27491c;
        case 0x274920u: goto label_274920;
        case 0x274924u: goto label_274924;
        case 0x274928u: goto label_274928;
        case 0x27492cu: goto label_27492c;
        case 0x274930u: goto label_274930;
        case 0x274934u: goto label_274934;
        case 0x274938u: goto label_274938;
        case 0x27493cu: goto label_27493c;
        case 0x274940u: goto label_274940;
        case 0x274944u: goto label_274944;
        case 0x274948u: goto label_274948;
        case 0x27494cu: goto label_27494c;
        case 0x274950u: goto label_274950;
        case 0x274954u: goto label_274954;
        case 0x274958u: goto label_274958;
        case 0x27495cu: goto label_27495c;
        case 0x274960u: goto label_274960;
        case 0x274964u: goto label_274964;
        case 0x274968u: goto label_274968;
        case 0x27496cu: goto label_27496c;
        case 0x274970u: goto label_274970;
        case 0x274974u: goto label_274974;
        case 0x274978u: goto label_274978;
        case 0x27497cu: goto label_27497c;
        case 0x274980u: goto label_274980;
        case 0x274984u: goto label_274984;
        case 0x274988u: goto label_274988;
        case 0x27498cu: goto label_27498c;
        case 0x274990u: goto label_274990;
        case 0x274994u: goto label_274994;
        case 0x274998u: goto label_274998;
        case 0x27499cu: goto label_27499c;
        case 0x2749a0u: goto label_2749a0;
        case 0x2749a4u: goto label_2749a4;
        case 0x2749a8u: goto label_2749a8;
        case 0x2749acu: goto label_2749ac;
        case 0x2749b0u: goto label_2749b0;
        case 0x2749b4u: goto label_2749b4;
        case 0x2749b8u: goto label_2749b8;
        case 0x2749bcu: goto label_2749bc;
        case 0x2749c0u: goto label_2749c0;
        case 0x2749c4u: goto label_2749c4;
        case 0x2749c8u: goto label_2749c8;
        case 0x2749ccu: goto label_2749cc;
        case 0x2749d0u: goto label_2749d0;
        case 0x2749d4u: goto label_2749d4;
        case 0x2749d8u: goto label_2749d8;
        case 0x2749dcu: goto label_2749dc;
        case 0x2749e0u: goto label_2749e0;
        case 0x2749e4u: goto label_2749e4;
        case 0x2749e8u: goto label_2749e8;
        case 0x2749ecu: goto label_2749ec;
        case 0x2749f0u: goto label_2749f0;
        case 0x2749f4u: goto label_2749f4;
        case 0x2749f8u: goto label_2749f8;
        case 0x2749fcu: goto label_2749fc;
        case 0x274a00u: goto label_274a00;
        case 0x274a04u: goto label_274a04;
        case 0x274a08u: goto label_274a08;
        case 0x274a0cu: goto label_274a0c;
        case 0x274a10u: goto label_274a10;
        case 0x274a14u: goto label_274a14;
        case 0x274a18u: goto label_274a18;
        case 0x274a1cu: goto label_274a1c;
        case 0x274a20u: goto label_274a20;
        case 0x274a24u: goto label_274a24;
        case 0x274a28u: goto label_274a28;
        case 0x274a2cu: goto label_274a2c;
        case 0x274a30u: goto label_274a30;
        case 0x274a34u: goto label_274a34;
        case 0x274a38u: goto label_274a38;
        case 0x274a3cu: goto label_274a3c;
        case 0x274a40u: goto label_274a40;
        case 0x274a44u: goto label_274a44;
        case 0x274a48u: goto label_274a48;
        case 0x274a4cu: goto label_274a4c;
        case 0x274a50u: goto label_274a50;
        case 0x274a54u: goto label_274a54;
        case 0x274a58u: goto label_274a58;
        case 0x274a5cu: goto label_274a5c;
        case 0x274a60u: goto label_274a60;
        case 0x274a64u: goto label_274a64;
        case 0x274a68u: goto label_274a68;
        case 0x274a6cu: goto label_274a6c;
        case 0x274a70u: goto label_274a70;
        case 0x274a74u: goto label_274a74;
        case 0x274a78u: goto label_274a78;
        case 0x274a7cu: goto label_274a7c;
        case 0x274a80u: goto label_274a80;
        case 0x274a84u: goto label_274a84;
        case 0x274a88u: goto label_274a88;
        case 0x274a8cu: goto label_274a8c;
        case 0x274a90u: goto label_274a90;
        case 0x274a94u: goto label_274a94;
        case 0x274a98u: goto label_274a98;
        case 0x274a9cu: goto label_274a9c;
        case 0x274aa0u: goto label_274aa0;
        case 0x274aa4u: goto label_274aa4;
        case 0x274aa8u: goto label_274aa8;
        case 0x274aacu: goto label_274aac;
        case 0x274ab0u: goto label_274ab0;
        case 0x274ab4u: goto label_274ab4;
        case 0x274ab8u: goto label_274ab8;
        case 0x274abcu: goto label_274abc;
        case 0x274ac0u: goto label_274ac0;
        case 0x274ac4u: goto label_274ac4;
        case 0x274ac8u: goto label_274ac8;
        case 0x274accu: goto label_274acc;
        case 0x274ad0u: goto label_274ad0;
        case 0x274ad4u: goto label_274ad4;
        case 0x274ad8u: goto label_274ad8;
        case 0x274adcu: goto label_274adc;
        case 0x274ae0u: goto label_274ae0;
        case 0x274ae4u: goto label_274ae4;
        case 0x274ae8u: goto label_274ae8;
        case 0x274aecu: goto label_274aec;
        case 0x274af0u: goto label_274af0;
        case 0x274af4u: goto label_274af4;
        case 0x274af8u: goto label_274af8;
        case 0x274afcu: goto label_274afc;
        case 0x274b00u: goto label_274b00;
        case 0x274b04u: goto label_274b04;
        case 0x274b08u: goto label_274b08;
        case 0x274b0cu: goto label_274b0c;
        case 0x274b10u: goto label_274b10;
        case 0x274b14u: goto label_274b14;
        case 0x274b18u: goto label_274b18;
        case 0x274b1cu: goto label_274b1c;
        case 0x274b20u: goto label_274b20;
        case 0x274b24u: goto label_274b24;
        case 0x274b28u: goto label_274b28;
        case 0x274b2cu: goto label_274b2c;
        case 0x274b30u: goto label_274b30;
        case 0x274b34u: goto label_274b34;
        case 0x274b38u: goto label_274b38;
        case 0x274b3cu: goto label_274b3c;
        case 0x274b40u: goto label_274b40;
        case 0x274b44u: goto label_274b44;
        case 0x274b48u: goto label_274b48;
        case 0x274b4cu: goto label_274b4c;
        case 0x274b50u: goto label_274b50;
        case 0x274b54u: goto label_274b54;
        case 0x274b58u: goto label_274b58;
        case 0x274b5cu: goto label_274b5c;
        case 0x274b60u: goto label_274b60;
        case 0x274b64u: goto label_274b64;
        case 0x274b68u: goto label_274b68;
        case 0x274b6cu: goto label_274b6c;
        case 0x274b70u: goto label_274b70;
        case 0x274b74u: goto label_274b74;
        case 0x274b78u: goto label_274b78;
        case 0x274b7cu: goto label_274b7c;
        case 0x274b80u: goto label_274b80;
        case 0x274b84u: goto label_274b84;
        case 0x274b88u: goto label_274b88;
        case 0x274b8cu: goto label_274b8c;
        case 0x274b90u: goto label_274b90;
        case 0x274b94u: goto label_274b94;
        case 0x274b98u: goto label_274b98;
        case 0x274b9cu: goto label_274b9c;
        case 0x274ba0u: goto label_274ba0;
        case 0x274ba4u: goto label_274ba4;
        case 0x274ba8u: goto label_274ba8;
        case 0x274bacu: goto label_274bac;
        case 0x274bb0u: goto label_274bb0;
        case 0x274bb4u: goto label_274bb4;
        case 0x274bb8u: goto label_274bb8;
        case 0x274bbcu: goto label_274bbc;
        case 0x274bc0u: goto label_274bc0;
        case 0x274bc4u: goto label_274bc4;
        case 0x274bc8u: goto label_274bc8;
        case 0x274bccu: goto label_274bcc;
        case 0x274bd0u: goto label_274bd0;
        case 0x274bd4u: goto label_274bd4;
        case 0x274bd8u: goto label_274bd8;
        case 0x274bdcu: goto label_274bdc;
        case 0x274be0u: goto label_274be0;
        case 0x274be4u: goto label_274be4;
        case 0x274be8u: goto label_274be8;
        case 0x274becu: goto label_274bec;
        case 0x274bf0u: goto label_274bf0;
        case 0x274bf4u: goto label_274bf4;
        case 0x274bf8u: goto label_274bf8;
        case 0x274bfcu: goto label_274bfc;
        case 0x274c00u: goto label_274c00;
        case 0x274c04u: goto label_274c04;
        case 0x274c08u: goto label_274c08;
        case 0x274c0cu: goto label_274c0c;
        case 0x274c10u: goto label_274c10;
        case 0x274c14u: goto label_274c14;
        case 0x274c18u: goto label_274c18;
        case 0x274c1cu: goto label_274c1c;
        case 0x274c20u: goto label_274c20;
        case 0x274c24u: goto label_274c24;
        case 0x274c28u: goto label_274c28;
        case 0x274c2cu: goto label_274c2c;
        case 0x274c30u: goto label_274c30;
        case 0x274c34u: goto label_274c34;
        case 0x274c38u: goto label_274c38;
        case 0x274c3cu: goto label_274c3c;
        case 0x274c40u: goto label_274c40;
        case 0x274c44u: goto label_274c44;
        case 0x274c48u: goto label_274c48;
        case 0x274c4cu: goto label_274c4c;
        case 0x274c50u: goto label_274c50;
        case 0x274c54u: goto label_274c54;
        case 0x274c58u: goto label_274c58;
        case 0x274c5cu: goto label_274c5c;
        case 0x274c60u: goto label_274c60;
        case 0x274c64u: goto label_274c64;
        case 0x274c68u: goto label_274c68;
        case 0x274c6cu: goto label_274c6c;
        case 0x274c70u: goto label_274c70;
        case 0x274c74u: goto label_274c74;
        case 0x274c78u: goto label_274c78;
        case 0x274c7cu: goto label_274c7c;
        case 0x274c80u: goto label_274c80;
        case 0x274c84u: goto label_274c84;
        case 0x274c88u: goto label_274c88;
        case 0x274c8cu: goto label_274c8c;
        case 0x274c90u: goto label_274c90;
        case 0x274c94u: goto label_274c94;
        case 0x274c98u: goto label_274c98;
        case 0x274c9cu: goto label_274c9c;
        case 0x274ca0u: goto label_274ca0;
        case 0x274ca4u: goto label_274ca4;
        case 0x274ca8u: goto label_274ca8;
        case 0x274cacu: goto label_274cac;
        case 0x274cb0u: goto label_274cb0;
        case 0x274cb4u: goto label_274cb4;
        case 0x274cb8u: goto label_274cb8;
        case 0x274cbcu: goto label_274cbc;
        case 0x274cc0u: goto label_274cc0;
        case 0x274cc4u: goto label_274cc4;
        case 0x274cc8u: goto label_274cc8;
        case 0x274cccu: goto label_274ccc;
        case 0x274cd0u: goto label_274cd0;
        case 0x274cd4u: goto label_274cd4;
        case 0x274cd8u: goto label_274cd8;
        case 0x274cdcu: goto label_274cdc;
        case 0x274ce0u: goto label_274ce0;
        case 0x274ce4u: goto label_274ce4;
        case 0x274ce8u: goto label_274ce8;
        case 0x274cecu: goto label_274cec;
        case 0x274cf0u: goto label_274cf0;
        case 0x274cf4u: goto label_274cf4;
        case 0x274cf8u: goto label_274cf8;
        case 0x274cfcu: goto label_274cfc;
        case 0x274d00u: goto label_274d00;
        case 0x274d04u: goto label_274d04;
        case 0x274d08u: goto label_274d08;
        case 0x274d0cu: goto label_274d0c;
        case 0x274d10u: goto label_274d10;
        case 0x274d14u: goto label_274d14;
        case 0x274d18u: goto label_274d18;
        case 0x274d1cu: goto label_274d1c;
        case 0x274d20u: goto label_274d20;
        case 0x274d24u: goto label_274d24;
        case 0x274d28u: goto label_274d28;
        case 0x274d2cu: goto label_274d2c;
        case 0x274d30u: goto label_274d30;
        case 0x274d34u: goto label_274d34;
        case 0x274d38u: goto label_274d38;
        case 0x274d3cu: goto label_274d3c;
        case 0x274d40u: goto label_274d40;
        case 0x274d44u: goto label_274d44;
        case 0x274d48u: goto label_274d48;
        case 0x274d4cu: goto label_274d4c;
        case 0x274d50u: goto label_274d50;
        case 0x274d54u: goto label_274d54;
        case 0x274d58u: goto label_274d58;
        case 0x274d5cu: goto label_274d5c;
        case 0x274d60u: goto label_274d60;
        case 0x274d64u: goto label_274d64;
        case 0x274d68u: goto label_274d68;
        case 0x274d6cu: goto label_274d6c;
        case 0x274d70u: goto label_274d70;
        case 0x274d74u: goto label_274d74;
        case 0x274d78u: goto label_274d78;
        case 0x274d7cu: goto label_274d7c;
        case 0x274d80u: goto label_274d80;
        case 0x274d84u: goto label_274d84;
        case 0x274d88u: goto label_274d88;
        case 0x274d8cu: goto label_274d8c;
        case 0x274d90u: goto label_274d90;
        case 0x274d94u: goto label_274d94;
        case 0x274d98u: goto label_274d98;
        case 0x274d9cu: goto label_274d9c;
        case 0x274da0u: goto label_274da0;
        case 0x274da4u: goto label_274da4;
        case 0x274da8u: goto label_274da8;
        case 0x274dacu: goto label_274dac;
        case 0x274db0u: goto label_274db0;
        case 0x274db4u: goto label_274db4;
        case 0x274db8u: goto label_274db8;
        case 0x274dbcu: goto label_274dbc;
        case 0x274dc0u: goto label_274dc0;
        case 0x274dc4u: goto label_274dc4;
        case 0x274dc8u: goto label_274dc8;
        case 0x274dccu: goto label_274dcc;
        case 0x274dd0u: goto label_274dd0;
        case 0x274dd4u: goto label_274dd4;
        case 0x274dd8u: goto label_274dd8;
        case 0x274ddcu: goto label_274ddc;
        case 0x274de0u: goto label_274de0;
        case 0x274de4u: goto label_274de4;
        case 0x274de8u: goto label_274de8;
        case 0x274decu: goto label_274dec;
        case 0x274df0u: goto label_274df0;
        case 0x274df4u: goto label_274df4;
        case 0x274df8u: goto label_274df8;
        case 0x274dfcu: goto label_274dfc;
        case 0x274e00u: goto label_274e00;
        case 0x274e04u: goto label_274e04;
        case 0x274e08u: goto label_274e08;
        case 0x274e0cu: goto label_274e0c;
        case 0x274e10u: goto label_274e10;
        case 0x274e14u: goto label_274e14;
        case 0x274e18u: goto label_274e18;
        case 0x274e1cu: goto label_274e1c;
        case 0x274e20u: goto label_274e20;
        case 0x274e24u: goto label_274e24;
        case 0x274e28u: goto label_274e28;
        case 0x274e2cu: goto label_274e2c;
        case 0x274e30u: goto label_274e30;
        case 0x274e34u: goto label_274e34;
        case 0x274e38u: goto label_274e38;
        case 0x274e3cu: goto label_274e3c;
        case 0x274e40u: goto label_274e40;
        case 0x274e44u: goto label_274e44;
        case 0x274e48u: goto label_274e48;
        case 0x274e4cu: goto label_274e4c;
        case 0x274e50u: goto label_274e50;
        case 0x274e54u: goto label_274e54;
        case 0x274e58u: goto label_274e58;
        case 0x274e5cu: goto label_274e5c;
        case 0x274e60u: goto label_274e60;
        case 0x274e64u: goto label_274e64;
        case 0x274e68u: goto label_274e68;
        case 0x274e6cu: goto label_274e6c;
        case 0x274e70u: goto label_274e70;
        case 0x274e74u: goto label_274e74;
        case 0x274e78u: goto label_274e78;
        case 0x274e7cu: goto label_274e7c;
        case 0x274e80u: goto label_274e80;
        case 0x274e84u: goto label_274e84;
        case 0x274e88u: goto label_274e88;
        case 0x274e8cu: goto label_274e8c;
        case 0x274e90u: goto label_274e90;
        case 0x274e94u: goto label_274e94;
        case 0x274e98u: goto label_274e98;
        case 0x274e9cu: goto label_274e9c;
        case 0x274ea0u: goto label_274ea0;
        case 0x274ea4u: goto label_274ea4;
        case 0x274ea8u: goto label_274ea8;
        case 0x274eacu: goto label_274eac;
        case 0x274eb0u: goto label_274eb0;
        case 0x274eb4u: goto label_274eb4;
        case 0x274eb8u: goto label_274eb8;
        case 0x274ebcu: goto label_274ebc;
        case 0x274ec0u: goto label_274ec0;
        case 0x274ec4u: goto label_274ec4;
        case 0x274ec8u: goto label_274ec8;
        case 0x274eccu: goto label_274ecc;
        case 0x274ed0u: goto label_274ed0;
        case 0x274ed4u: goto label_274ed4;
        default: break;
    }

    ctx->pc = 0x2748c0u;

label_2748c0:
    // 0x2748c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2748c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2748c4:
    // 0x2748c4: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2748c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_2748c8:
    // 0x2748c8: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2748c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_2748cc:
    // 0x2748cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2748ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2748d0:
    // 0x2748d0: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2748d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_2748d4:
    // 0x2748d4: 0x26020300  addiu       $v0, $s0, 0x300
    ctx->pc = 0x2748d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
label_2748d8:
    // 0x2748d8: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2748d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_2748dc:
    // 0x2748dc: 0x26030310  addiu       $v1, $s0, 0x310
    ctx->pc = 0x2748dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_2748e0:
    // 0x2748e0: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2748e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_2748e4:
    // 0x2748e4: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x2748e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_2748e8:
    // 0x2748e8: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x2748e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2748ec:
    // 0x2748ec: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2748ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2748f0:
    // 0x2748f0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2748f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2748f4:
    // 0x2748f4: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x2748f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2748f8:
    // 0x2748f8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2748f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2748fc:
    // 0x2748fc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2748fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274900:
    // 0x274900: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x274900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_274904:
    // 0x274904: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x274904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274908:
    // 0x274908: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x274908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27490c:
    // 0x27490c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x27490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274910:
    // 0x274910: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x274910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_274914:
    // 0x274914: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x274914u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_274918:
    // 0x274918: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x274918u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_27491c:
    // 0x27491c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x27491cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_274920:
    // 0x274920: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x274920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_274924:
    // 0x274924: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x274924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_274928:
    // 0x274928: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x274928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_27492c:
    // 0x27492c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x27492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274930:
    // 0x274930: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x274930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_274934:
    // 0x274934: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x274934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274938:
    // 0x274938: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x274938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27493c:
    // 0x27493c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x27493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274940:
    // 0x274940: 0xc4552b30  lwc1        $f21, 0x2B30($v0)
    ctx->pc = 0x274940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_274944:
    // 0x274944: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x274944u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_274948:
    // 0x274948: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x274948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_27494c:
    // 0x27494c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x27494cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_274950:
    // 0x274950: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x274950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_274954:
    // 0x274954: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x274954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274958:
    // 0x274958: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x274958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27495c:
    // 0x27495c: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x27495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_274960:
    // 0x274960: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x274960u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_274964:
    // 0x274964: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x274964u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_274968:
    // 0x274968: 0x4604259c  madd.s      $f22, $f4, $f4
    ctx->pc = 0x274968u;
    ctx->f[22] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_27496c:
    // 0x27496c: 0x46160584  c1          0x160584
    ctx->pc = 0x27496cu;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
label_274970:
    // 0x274970: 0x92020374  lbu         $v0, 0x374($s0)
    ctx->pc = 0x274970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 884)));
label_274974:
    // 0x274974: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x274974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_274978:
    // 0x274978: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27497c:
    // 0x27497c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_274980:
    if (ctx->pc == 0x274980u) {
        ctx->pc = 0x274980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27497Cu;
        // 0x274980: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274984u;
        goto label_274984;
    }
    ctx->pc = 0x27497Cu;
    {
        const bool branch_taken_0x27497c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27497Cu;
        // 0x274980: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27497c) {
            ctx->pc = 0x27498Cu;
            goto label_27498c;
        }
    }
    ctx->pc = 0x274984u;
label_274984:
    // 0x274984: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x274984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_274988:
    // 0x274988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27498c:
    // 0x27498c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x27498cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_274990:
    // 0x274990: 0x0  nop
    ctx->pc = 0x274990u;
    // NOP
label_274994:
    // 0x274994: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x274994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_274998:
    // 0x274998: 0x0  nop
    ctx->pc = 0x274998u;
    // NOP
label_27499c:
    // 0x27499c: 0x45000098  bc1f        . + 4 + (0x98 << 2)
label_2749a0:
    if (ctx->pc == 0x2749A0u) {
        ctx->pc = 0x2749A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27499Cu;
        // 0x2749a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2749A4u;
        goto label_2749a4;
    }
    ctx->pc = 0x27499Cu;
    {
        const bool branch_taken_0x27499c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2749A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27499Cu;
        // 0x2749a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27499c) {
            ctx->pc = 0x274C00u;
            goto label_274c00;
        }
    }
    ctx->pc = 0x2749A4u;
label_2749a4:
    // 0x2749a4: 0x92020370  lbu         $v0, 0x370($s0)
    ctx->pc = 0x2749a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 880)));
label_2749a8:
    // 0x2749a8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_2749ac:
    if (ctx->pc == 0x2749ACu) {
        ctx->pc = 0x2749ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749A8u;
        // 0x2749ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2749B0u;
        goto label_2749b0;
    }
    ctx->pc = 0x2749A8u;
    {
        const bool branch_taken_0x2749a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749A8u;
        // 0x2749ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749a8) {
            ctx->pc = 0x274A3Cu;
            goto label_274a3c;
        }
    }
    ctx->pc = 0x2749B0u;
label_2749b0:
    // 0x2749b0: 0x92020373  lbu         $v0, 0x373($s0)
    ctx->pc = 0x2749b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 883)));
label_2749b4:
    // 0x2749b4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_2749b8:
    if (ctx->pc == 0x2749B8u) {
        ctx->pc = 0x2749B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749B4u;
        // 0x2749b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2749BCu;
        goto label_2749bc;
    }
    ctx->pc = 0x2749B4u;
    {
        const bool branch_taken_0x2749b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2749B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749B4u;
        // 0x2749b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749b4) {
            ctx->pc = 0x274A3Cu;
            goto label_274a3c;
        }
    }
    ctx->pc = 0x2749BCu;
label_2749bc:
    // 0x2749bc: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x2749bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2749c0:
    // 0x2749c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2749c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2749c4:
    // 0x2749c4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x2749c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2749c8:
    // 0x2749c8: 0x60f809  jalr        $v1
label_2749cc:
    if (ctx->pc == 0x2749CCu) {
        ctx->pc = 0x2749CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749C8u;
        // 0x2749cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2749D0u;
        goto label_2749d0;
    }
    ctx->pc = 0x2749C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2749D0u);
        ctx->pc = 0x2749CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749C8u;
        // 0x2749cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2749C8u, 0x2749D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2749D0u;
label_2749d0:
    // 0x2749d0: 0xa2000373  sb          $zero, 0x373($s0)
    ctx->pc = 0x2749d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 883), (uint8_t)GPR_U32(ctx, 0));
label_2749d4:
    // 0x2749d4: 0xa2000370  sb          $zero, 0x370($s0)
    ctx->pc = 0x2749d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 880), (uint8_t)GPR_U32(ctx, 0));
label_2749d8:
    // 0x2749d8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2749d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2749dc:
    // 0x2749dc: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x2749dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2749e0:
    // 0x2749e0: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x2749e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2749e4:
    // 0x2749e4: 0xe7b4002c  swc1        $f20, 0x2C($sp)
    ctx->pc = 0x2749e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2749e8:
    // 0x2749e8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2749e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2749ec:
    // 0x2749ec: 0xfa010350  sqc2        $vf1, 0x350($s0)
    ctx->pc = 0x2749ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 848), _mm_castps_si128(ctx->vu0_vf[1]));
label_2749f0:
    // 0x2749f0: 0xe7b4002c  swc1        $f20, 0x2C($sp)
    ctx->pc = 0x2749f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2749f4:
    // 0x2749f4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2749f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2749f8:
    // 0x2749f8: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x2749f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2749fc:
    // 0x2749fc: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x2749fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_274a00:
    // 0x274a00: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x274a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_274a04:
    // 0x274a04: 0xfa010360  sqc2        $vf1, 0x360($s0)
    ctx->pc = 0x274a04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 864), _mm_castps_si128(ctx->vu0_vf[1]));
label_274a08:
    // 0x274a08: 0x86021e84  lh          $v0, 0x1E84($s0)
    ctx->pc = 0x274a08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7812)));
label_274a0c:
    // 0x274a0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_274a10:
    if (ctx->pc == 0x274A10u) {
        ctx->pc = 0x274A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A0Cu;
        // 0x274a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A14u;
        goto label_274a14;
    }
    ctx->pc = 0x274A0Cu;
    {
        const bool branch_taken_0x274a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A0Cu;
        // 0x274a10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a0c) {
            ctx->pc = 0x274A24u;
            goto label_274a24;
        }
    }
    ctx->pc = 0x274A14u;
label_274a14:
    // 0x274a14: 0xc0cda26  jal         func_336898
label_274a18:
    if (ctx->pc == 0x274A18u) {
        ctx->pc = 0x274A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A14u;
        // 0x274a18: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A1Cu;
        goto label_274a1c;
    }
    ctx->pc = 0x274A14u;
    SET_GPR_U32(ctx, 31, 0x274A1Cu);
    ctx->pc = 0x274A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A14u;
    // 0x274a18: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x274A14u, 0x274A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A1Cu;
label_274a1c:
    // 0x274a1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_274a20:
    if (ctx->pc == 0x274A20u) {
        ctx->pc = 0x274A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A1Cu;
        // 0x274a20: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A24u;
        goto label_274a24;
    }
    ctx->pc = 0x274A1Cu;
    {
        const bool branch_taken_0x274a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A1Cu;
        // 0x274a20: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a1c) {
            ctx->pc = 0x274A30u;
            goto label_274a30;
        }
    }
    ctx->pc = 0x274A24u;
label_274a24:
    // 0x274a24: 0xc0cda26  jal         func_336898
label_274a28:
    if (ctx->pc == 0x274A28u) {
        ctx->pc = 0x274A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A24u;
        // 0x274a28: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A2Cu;
        goto label_274a2c;
    }
    ctx->pc = 0x274A24u;
    SET_GPR_U32(ctx, 31, 0x274A2Cu);
    ctx->pc = 0x274A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274A24u;
    // 0x274a28: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x274A24u, 0x274A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274A2Cu;
label_274a2c:
    // 0x274a2c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x274a2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274a30:
    // 0x274a30: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x274a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_274a34:
    // 0x274a34: 0x10000086  b           . + 4 + (0x86 << 2)
label_274a38:
    if (ctx->pc == 0x274A38u) {
        ctx->pc = 0x274A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A34u;
        // 0x274a38: 0x26110360  addiu       $s1, $s0, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A3Cu;
        goto label_274a3c;
    }
    ctx->pc = 0x274A34u;
    {
        const bool branch_taken_0x274a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A34u;
        // 0x274a38: 0x26110360  addiu       $s1, $s0, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a34) {
            ctx->pc = 0x274C50u;
            goto label_274c50;
        }
    }
    ctx->pc = 0x274A3Cu;
label_274a3c:
    // 0x274a3c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x274a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_274a40:
    // 0x274a40: 0x0  nop
    ctx->pc = 0x274a40u;
    // NOP
label_274a44:
    // 0x274a44: 0x45000040  bc1f        . + 4 + (0x40 << 2)
label_274a48:
    if (ctx->pc == 0x274A48u) {
        ctx->pc = 0x274A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A44u;
        // 0x274a48: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x274A4Cu;
        goto label_274a4c;
    }
    ctx->pc = 0x274A44u;
    {
        const bool branch_taken_0x274a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x274A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A44u;
        // 0x274a48: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a44) {
            ctx->pc = 0x274B48u;
            goto label_274b48;
        }
    }
    ctx->pc = 0x274A4Cu;
label_274a4c:
    // 0x274a4c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x274a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_274a50:
    // 0x274a50: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x274a50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_274a54:
    // 0x274a54: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x274a54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_274a58:
    // 0x274a58: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x274a58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_274a5c:
    // 0x274a5c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x274a5cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_274a60:
    // 0x274a60: 0x4a0003bf  vwaitq
    ctx->pc = 0x274a60u;
    // VWAITQ (Q already resolved in this runtime)
label_274a64:
    // 0x274a64: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x274a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_274a68:
    // 0x274a68: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x274a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_274a6c:
    // 0x274a6c: 0xc6000380  lwc1        $f0, 0x380($s0)
    ctx->pc = 0x274a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274a70:
    // 0x274a70: 0x26020340  addiu       $v0, $s0, 0x340
    ctx->pc = 0x274a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_274a74:
    // 0x274a74: 0x3c01464b  lui         $at, 0x464B
    ctx->pc = 0x274a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17995 << 16));
label_274a78:
    // 0x274a78: 0x34212000  ori         $at, $at, 0x2000
    ctx->pc = 0x274a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8192);
label_274a7c:
    // 0x274a7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x274a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_274a80:
    // 0x274a80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x274a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_274a84:
    // 0x274a84: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x274a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_274a88:
    // 0x274a88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x274a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_274a8c:
    // 0x274a8c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x274a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_274a90:
    // 0x274a90: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x274a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274a94:
    // 0x274a94: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x274a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_274a98:
    // 0x274a98: 0xc6010384  lwc1        $f1, 0x384($s0)
    ctx->pc = 0x274a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274a9c:
    // 0x274a9c: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x274a9cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_274aa0:
    // 0x274aa0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x274aa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_274aa4:
    // 0x274aa4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x274aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_274aa8:
    // 0x274aa8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x274aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_274aac:
    // 0x274aac: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x274aacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_274ab0:
    // 0x274ab0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x274ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_274ab4:
    // 0x274ab4: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x274ab4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_274ab8:
    // 0x274ab8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x274ab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_274abc:
    // 0x274abc: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x274abcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_274ac0:
    // 0x274ac0: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x274ac0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_274ac4:
    // 0x274ac4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x274ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_274ac8:
    // 0x274ac8: 0x0  nop
    ctx->pc = 0x274ac8u;
    // NOP
label_274acc:
    // 0x274acc: 0x0  nop
    ctx->pc = 0x274accu;
    // NOP
label_274ad0:
    // 0x274ad0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x274ad0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_274ad4:
    // 0x274ad4: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x274ad4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
label_274ad8:
    // 0x274ad8: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x274ad8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
label_274adc:
    // 0x274adc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x274adcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_274ae0:
    // 0x274ae0: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x274ae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_274ae4:
    // 0x274ae4: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x274ae4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_274ae8:
    // 0x274ae8: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x274ae8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_274aec:
    // 0x274aec: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x274aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_274af0:
    // 0x274af0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x274af0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_274af4:
    // 0x274af4: 0xfa010340  sqc2        $vf1, 0x340($s0)
    ctx->pc = 0x274af4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 832), _mm_castps_si128(ctx->vu0_vf[1]));
label_274af8:
    // 0x274af8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x274af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_274afc:
    // 0x274afc: 0x26030360  addiu       $v1, $s0, 0x360
    ctx->pc = 0x274afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_274b00:
    // 0x274b00: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x274b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274b04:
    // 0x274b04: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x274b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274b08:
    // 0x274b08: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x274b08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
label_274b0c:
    // 0x274b0c: 0xc6000340  lwc1        $f0, 0x340($s0)
    ctx->pc = 0x274b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274b10:
    // 0x274b10: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x274b10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_274b14:
    // 0x274b14: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x274b14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_274b18:
    // 0x274b18: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x274b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_274b1c:
    // 0x274b1c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x274b1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_274b20:
    // 0x274b20: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x274b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_274b24:
    // 0x274b24: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x274b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_274b28:
    // 0x274b28: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x274b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_274b2c:
    // 0x274b2c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x274b2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_274b30:
    // 0x274b30: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x274b30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_274b34:
    // 0x274b34: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x274b34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_274b38:
    // 0x274b38: 0xfa010360  sqc2        $vf1, 0x360($s0)
    ctx->pc = 0x274b38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 864), _mm_castps_si128(ctx->vu0_vf[1]));
label_274b3c:
    // 0x274b3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x274b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_274b40:
    // 0x274b40: 0x10000010  b           . + 4 + (0x10 << 2)
label_274b44:
    if (ctx->pc == 0x274B44u) {
        ctx->pc = 0x274B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B40u;
        // 0x274b44: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274B48u;
        goto label_274b48;
    }
    ctx->pc = 0x274B40u;
    {
        const bool branch_taken_0x274b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B40u;
        // 0x274b44: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b40) {
            ctx->pc = 0x274B84u;
            goto label_274b84;
        }
    }
    ctx->pc = 0x274B48u;
label_274b48:
    // 0x274b48: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x274b48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_274b4c:
    // 0x274b4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_274b50:
    if (ctx->pc == 0x274B50u) {
        ctx->pc = 0x274B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B4Cu;
        // 0x274b50: 0x26110360  addiu       $s1, $s0, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274B54u;
        goto label_274b54;
    }
    ctx->pc = 0x274B4Cu;
    {
        const bool branch_taken_0x274b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B4Cu;
        // 0x274b50: 0x26110360  addiu       $s1, $s0, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b4c) {
            ctx->pc = 0x274B84u;
            goto label_274b84;
        }
    }
    ctx->pc = 0x274B54u;
label_274b54:
    // 0x274b54: 0x86021e84  lh          $v0, 0x1E84($s0)
    ctx->pc = 0x274b54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7812)));
label_274b58:
    // 0x274b58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_274b5c:
    if (ctx->pc == 0x274B5Cu) {
        ctx->pc = 0x274B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B58u;
        // 0x274b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274B60u;
        goto label_274b60;
    }
    ctx->pc = 0x274B58u;
    {
        const bool branch_taken_0x274b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B58u;
        // 0x274b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b58) {
            ctx->pc = 0x274B70u;
            goto label_274b70;
        }
    }
    ctx->pc = 0x274B60u;
label_274b60:
    // 0x274b60: 0xc0cda26  jal         func_336898
label_274b64:
    if (ctx->pc == 0x274B64u) {
        ctx->pc = 0x274B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B60u;
        // 0x274b64: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274B68u;
        goto label_274b68;
    }
    ctx->pc = 0x274B60u;
    SET_GPR_U32(ctx, 31, 0x274B68u);
    ctx->pc = 0x274B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B60u;
    // 0x274b64: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x274B60u, 0x274B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B68u;
label_274b68:
    // 0x274b68: 0x10000004  b           . + 4 + (0x4 << 2)
label_274b6c:
    if (ctx->pc == 0x274B6Cu) {
        ctx->pc = 0x274B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B68u;
        // 0x274b6c: 0xa2000370  sb          $zero, 0x370($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 880), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274B70u;
        goto label_274b70;
    }
    ctx->pc = 0x274B68u;
    {
        const bool branch_taken_0x274b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B68u;
        // 0x274b6c: 0xa2000370  sb          $zero, 0x370($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 880), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b68) {
            ctx->pc = 0x274B7Cu;
            goto label_274b7c;
        }
    }
    ctx->pc = 0x274B70u;
label_274b70:
    // 0x274b70: 0xc0cda26  jal         func_336898
label_274b74:
    if (ctx->pc == 0x274B74u) {
        ctx->pc = 0x274B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B70u;
        // 0x274b74: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274B78u;
        goto label_274b78;
    }
    ctx->pc = 0x274B70u;
    SET_GPR_U32(ctx, 31, 0x274B78u);
    ctx->pc = 0x274B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B70u;
    // 0x274b74: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x274B70u, 0x274B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B78u;
label_274b78:
    // 0x274b78: 0xa2000370  sb          $zero, 0x370($s0)
    ctx->pc = 0x274b78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 880), (uint8_t)GPR_U32(ctx, 0));
label_274b7c:
    // 0x274b7c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x274b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_274b80:
    // 0x274b80: 0x26110360  addiu       $s1, $s0, 0x360
    ctx->pc = 0x274b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
label_274b84:
    // 0x274b84: 0xc09d59e  jal         func_275678
label_274b88:
    if (ctx->pc == 0x274B88u) {
        ctx->pc = 0x274B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B84u;
        // 0x274b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274B8Cu;
        goto label_274b8c;
    }
    ctx->pc = 0x274B84u;
    SET_GPR_U32(ctx, 31, 0x274B8Cu);
    ctx->pc = 0x274B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B84u;
    // 0x274b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275678u, 0x274B84u, 0x274B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B8Cu;
label_274b8c:
    // 0x274b8c: 0x92020374  lbu         $v0, 0x374($s0)
    ctx->pc = 0x274b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 884)));
label_274b90:
    // 0x274b90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_274b94:
    if (ctx->pc == 0x274B94u) {
        ctx->pc = 0x274B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B90u;
        // 0x274b94: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x274B98u;
        goto label_274b98;
    }
    ctx->pc = 0x274B90u;
    {
        const bool branch_taken_0x274b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B90u;
        // 0x274b94: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b90) {
            ctx->pc = 0x274BACu;
            goto label_274bac;
        }
    }
    ctx->pc = 0x274B98u;
label_274b98:
    // 0x274b98: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x274b98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_274b9c:
    // 0x274b9c: 0x0  nop
    ctx->pc = 0x274b9cu;
    // NOP
label_274ba0:
    // 0x274ba0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_274ba4:
    if (ctx->pc == 0x274BA4u) {
        ctx->pc = 0x274BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BA0u;
        // 0x274ba4: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x274BA8u;
        goto label_274ba8;
    }
    ctx->pc = 0x274BA0u;
    {
        const bool branch_taken_0x274ba0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x274BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BA0u;
        // 0x274ba4: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ba0) {
            ctx->pc = 0x274BACu;
            goto label_274bac;
        }
    }
    ctx->pc = 0x274BA8u;
label_274ba8:
    // 0x274ba8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x274ba8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_274bac:
    // 0x274bac: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x274bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274bb0:
    // 0x274bb0: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x274bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_274bb4:
    // 0x274bb4: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x274bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_274bb8:
    // 0x274bb8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x274bb8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_274bbc:
    // 0x274bbc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x274bbcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_274bc0:
    // 0x274bc0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x274bc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_274bc4:
    // 0x274bc4: 0x46010044  c1          0x10044
    ctx->pc = 0x274bc4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_274bc8:
    // 0x274bc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x274bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_274bcc:
    // 0x274bcc: 0x0  nop
    ctx->pc = 0x274bccu;
    // NOP
label_274bd0:
    // 0x274bd0: 0x45020020  bc1fl       . + 4 + (0x20 << 2)
label_274bd4:
    if (ctx->pc == 0x274BD4u) {
        ctx->pc = 0x274BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BD0u;
        // 0x274bd4: 0xc6030350  lwc1        $f3, 0x350($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x274BD8u;
        goto label_274bd8;
    }
    ctx->pc = 0x274BD0u;
    {
        const bool branch_taken_0x274bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x274bd0) {
            ctx->pc = 0x274BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274BD0u;
            // 0x274bd4: 0xc6030350  lwc1        $f3, 0x350($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x274C54u;
            goto label_274c54;
        }
    }
    ctx->pc = 0x274BD8u;
label_274bd8:
    // 0x274bd8: 0x0  nop
    ctx->pc = 0x274bd8u;
    // NOP
label_274bdc:
    // 0x274bdc: 0x0  nop
    ctx->pc = 0x274bdcu;
    // NOP
label_274be0:
    // 0x274be0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x274be0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_274be4:
    // 0x274be4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x274be4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_274be8:
    // 0x274be8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x274be8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_274bec:
    // 0x274bec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x274becu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_274bf0:
    // 0x274bf0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x274bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_274bf4:
    // 0x274bf4: 0xfa010360  sqc2        $vf1, 0x360($s0)
    ctx->pc = 0x274bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 864), _mm_castps_si128(ctx->vu0_vf[1]));
label_274bf8:
    // 0x274bf8: 0x10000016  b           . + 4 + (0x16 << 2)
label_274bfc:
    if (ctx->pc == 0x274BFCu) {
        ctx->pc = 0x274BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BF8u;
        // 0x274bfc: 0xc6030350  lwc1        $f3, 0x350($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C00u;
        goto label_274c00;
    }
    ctx->pc = 0x274BF8u;
    {
        const bool branch_taken_0x274bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BF8u;
        // 0x274bfc: 0xc6030350  lwc1        $f3, 0x350($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bf8) {
            ctx->pc = 0x274C54u;
            goto label_274c54;
        }
    }
    ctx->pc = 0x274C00u;
label_274c00:
    // 0x274c00: 0x92020370  lbu         $v0, 0x370($s0)
    ctx->pc = 0x274c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 880)));
label_274c04:
    // 0x274c04: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x274c04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_274c08:
    // 0x274c08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_274c0c:
    if (ctx->pc == 0x274C0Cu) {
        ctx->pc = 0x274C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C08u;
        // 0x274c0c: 0x26110360  addiu       $s1, $s0, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C10u;
        goto label_274c10;
    }
    ctx->pc = 0x274C08u;
    {
        const bool branch_taken_0x274c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C08u;
        // 0x274c0c: 0x26110360  addiu       $s1, $s0, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c08) {
            ctx->pc = 0x274C50u;
            goto label_274c50;
        }
    }
    ctx->pc = 0x274C10u;
label_274c10:
    // 0x274c10: 0xe7b4002c  swc1        $f20, 0x2C($sp)
    ctx->pc = 0x274c10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_274c14:
    // 0x274c14: 0xa2000370  sb          $zero, 0x370($s0)
    ctx->pc = 0x274c14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 880), (uint8_t)GPR_U32(ctx, 0));
label_274c18:
    // 0x274c18: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x274c18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_274c1c:
    // 0x274c1c: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x274c1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_274c20:
    // 0x274c20: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x274c20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_274c24:
    // 0x274c24: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x274c24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_274c28:
    // 0x274c28: 0xfa010360  sqc2        $vf1, 0x360($s0)
    ctx->pc = 0x274c28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 864), _mm_castps_si128(ctx->vu0_vf[1]));
label_274c2c:
    // 0x274c2c: 0x86021e84  lh          $v0, 0x1E84($s0)
    ctx->pc = 0x274c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7812)));
label_274c30:
    // 0x274c30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_274c34:
    if (ctx->pc == 0x274C34u) {
        ctx->pc = 0x274C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C30u;
        // 0x274c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C38u;
        goto label_274c38;
    }
    ctx->pc = 0x274C30u;
    {
        const bool branch_taken_0x274c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C30u;
        // 0x274c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c30) {
            ctx->pc = 0x274C48u;
            goto label_274c48;
        }
    }
    ctx->pc = 0x274C38u;
label_274c38:
    // 0x274c38: 0xc0cda26  jal         func_336898
label_274c3c:
    if (ctx->pc == 0x274C3Cu) {
        ctx->pc = 0x274C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C38u;
        // 0x274c3c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C40u;
        goto label_274c40;
    }
    ctx->pc = 0x274C38u;
    SET_GPR_U32(ctx, 31, 0x274C40u);
    ctx->pc = 0x274C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274C38u;
    // 0x274c3c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x274C38u, 0x274C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C40u;
label_274c40:
    // 0x274c40: 0x10000004  b           . + 4 + (0x4 << 2)
label_274c44:
    if (ctx->pc == 0x274C44u) {
        ctx->pc = 0x274C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C40u;
        // 0x274c44: 0xc6030350  lwc1        $f3, 0x350($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C48u;
        goto label_274c48;
    }
    ctx->pc = 0x274C40u;
    {
        const bool branch_taken_0x274c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C40u;
        // 0x274c44: 0xc6030350  lwc1        $f3, 0x350($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c40) {
            ctx->pc = 0x274C54u;
            goto label_274c54;
        }
    }
    ctx->pc = 0x274C48u;
label_274c48:
    // 0x274c48: 0xc0cda26  jal         func_336898
label_274c4c:
    if (ctx->pc == 0x274C4Cu) {
        ctx->pc = 0x274C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C48u;
        // 0x274c4c: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274C50u;
        goto label_274c50;
    }
    ctx->pc = 0x274C48u;
    SET_GPR_U32(ctx, 31, 0x274C50u);
    ctx->pc = 0x274C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274C48u;
    // 0x274c4c: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x274C48u, 0x274C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C50u;
label_274c50:
    // 0x274c50: 0xc6030350  lwc1        $f3, 0x350($s0)
    ctx->pc = 0x274c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_274c54:
    // 0x274c54: 0x26030350  addiu       $v1, $s0, 0x350
    ctx->pc = 0x274c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
label_274c58:
    // 0x274c58: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x274c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_274c5c:
    // 0x274c5c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x274c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_274c60:
    // 0x274c60: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x274c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_274c64:
    // 0x274c64: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x274c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_274c68:
    // 0x274c68: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x274c68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_274c6c:
    // 0x274c6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x274c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_274c70:
    // 0x274c70: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x274c70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_274c74:
    // 0x274c74: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x274c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_274c78:
    // 0x274c78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x274c78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_274c7c:
    // 0x274c7c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x274c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_274c80:
    // 0x274c80: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x274c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274c84:
    // 0x274c84: 0xc6040360  lwc1        $f4, 0x360($s0)
    ctx->pc = 0x274c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_274c88:
    // 0x274c88: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x274c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_274c8c:
    // 0x274c8c: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x274c8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_274c90:
    // 0x274c90: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x274c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274c94:
    // 0x274c94: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x274c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_274c98:
    // 0x274c98: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x274c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274c9c:
    // 0x274c9c: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x274c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_274ca0:
    // 0x274ca0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x274ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274ca4:
    // 0x274ca4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x274ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274ca8:
    // 0x274ca8: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x274ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274cac:
    // 0x274cac: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x274cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_274cb0:
    // 0x274cb0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x274cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_274cb4:
    // 0x274cb4: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x274cb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_274cb8:
    // 0x274cb8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x274cb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_274cbc:
    // 0x274cbc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x274cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_274cc0:
    // 0x274cc0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x274cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_274cc4:
    // 0x274cc4: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x274cc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_274cc8:
    // 0x274cc8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x274cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274ccc:
    // 0x274ccc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x274cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274cd0:
    // 0x274cd0: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x274cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274cd4:
    // 0x274cd4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x274cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_274cd8:
    // 0x274cd8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x274cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_274cdc:
    // 0x274cdc: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x274cdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_274ce0:
    // 0x274ce0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x274ce0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_274ce4:
    // 0x274ce4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x274ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_274ce8:
    // 0x274ce8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x274ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_274cec:
    // 0x274cec: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x274cecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_274cf0:
    // 0x274cf0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x274cf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_274cf4:
    // 0x274cf4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x274cf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_274cf8:
    // 0x274cf8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x274cf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_274cfc:
    // 0x274cfc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x274cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_274d00:
    // 0x274d00: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x274d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274d04:
    // 0x274d04: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x274d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274d08:
    // 0x274d08: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x274d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274d0c:
    // 0x274d0c: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x274d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_274d10:
    // 0x274d10: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x274d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_274d14:
    // 0x274d14: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x274d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_274d18:
    // 0x274d18: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x274d18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_274d1c:
    // 0x274d1c: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x274d1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_274d20:
    // 0x274d20: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x274d20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_274d24:
    // 0x274d24: 0xfa010350  sqc2        $vf1, 0x350($s0)
    ctx->pc = 0x274d24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 848), _mm_castps_si128(ctx->vu0_vf[1]));
label_274d28:
    // 0x274d28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x274d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_274d2c:
    // 0x274d2c: 0x0  nop
    ctx->pc = 0x274d2cu;
    // NOP
label_274d30:
    // 0x274d30: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x274d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_274d34:
    // 0x274d34: 0x0  nop
    ctx->pc = 0x274d34u;
    // NOP
label_274d38:
    // 0x274d38: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
label_274d3c:
    if (ctx->pc == 0x274D3Cu) {
        ctx->pc = 0x274D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D38u;
        // 0x274d3c: 0x26020390  addiu       $v0, $s0, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274D40u;
        goto label_274d40;
    }
    ctx->pc = 0x274D38u;
    {
        const bool branch_taken_0x274d38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x274D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D38u;
        // 0x274d3c: 0x26020390  addiu       $v0, $s0, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d38) {
            ctx->pc = 0x274E2Cu;
            goto label_274e2c;
        }
    }
    ctx->pc = 0x274D40u;
label_274d40:
    // 0x274d40: 0xc6010390  lwc1        $f1, 0x390($s0)
    ctx->pc = 0x274d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274d44:
    // 0x274d44: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x274d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274d48:
    // 0x274d48: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x274d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_274d4c:
    // 0x274d4c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x274d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_274d50:
    // 0x274d50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x274d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274d54:
    // 0x274d54: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x274d54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_274d58:
    // 0x274d58: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x274d58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_274d5c:
    // 0x274d5c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x274d5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_274d60:
    // 0x274d60: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x274d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_274d64:
    // 0x274d64: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x274d64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_274d68:
    // 0x274d68: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x274d68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_274d6c:
    // 0x274d6c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x274d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_274d70:
    // 0x274d70: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x274d70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_274d74:
    // 0x274d74: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x274d74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_274d78:
    // 0x274d78: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x274d78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_274d7c:
    // 0x274d7c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x274d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_274d80:
    // 0x274d80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_274d84:
    // 0x274d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_274d88:
    // 0x274d88: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x274d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274d8c:
    // 0x274d8c: 0x0  nop
    ctx->pc = 0x274d8cu;
    // NOP
label_274d90:
    // 0x274d90: 0x0  nop
    ctx->pc = 0x274d90u;
    // NOP
label_274d94:
    // 0x274d94: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x274d94u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
label_274d98:
    // 0x274d98: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x274d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274d9c:
    // 0x274d9c: 0xc7a4008c  lwc1        $f4, 0x8C($sp)
    ctx->pc = 0x274d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_274da0:
    // 0x274da0: 0xc7a50088  lwc1        $f5, 0x88($sp)
    ctx->pc = 0x274da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_274da4:
    // 0x274da4: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x274da4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_274da8:
    // 0x274da8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x274da8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_274dac:
    // 0x274dac: 0xe7a50078  swc1        $f5, 0x78($sp)
    ctx->pc = 0x274dacu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_274db0:
    // 0x274db0: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x274db0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_274db4:
    // 0x274db4: 0xe7a4007c  swc1        $f4, 0x7C($sp)
    ctx->pc = 0x274db4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_274db8:
    // 0x274db8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x274db8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_274dbc:
    // 0x274dbc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x274dbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_274dc0:
    // 0x274dc0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x274dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_274dc4:
    // 0x274dc4: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x274dc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_274dc8:
    // 0x274dc8: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x274dc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_274dcc:
    // 0x274dcc: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x274dccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_274dd0:
    // 0x274dd0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x274dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_274dd4:
    // 0x274dd4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x274dd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_274dd8:
    // 0x274dd8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x274dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_274ddc:
    // 0x274ddc: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x274ddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_274de0:
    // 0x274de0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x274de0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_274de4:
    // 0x274de4: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x274de4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_274de8:
    // 0x274de8: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x274de8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_274dec:
    // 0x274dec: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x274decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_274df0:
    // 0x274df0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x274df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_274df4:
    // 0x274df4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x274df4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_274df8:
    // 0x274df8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x274df8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_274dfc:
    // 0x274dfc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x274dfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_274e00:
    // 0x274e00: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x274e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_274e04:
    // 0x274e04: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x274e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274e08:
    // 0x274e08: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x274e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274e0c:
    // 0x274e0c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x274e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274e10:
    // 0x274e10: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x274e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_274e14:
    // 0x274e14: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x274e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_274e18:
    // 0x274e18: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x274e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_274e1c:
    // 0x274e1c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x274e1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_274e20:
    // 0x274e20: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x274e20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_274e24:
    // 0x274e24: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x274e24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_274e28:
    // 0x274e28: 0xfa010390  sqc2        $vf1, 0x390($s0)
    ctx->pc = 0x274e28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 912), _mm_castps_si128(ctx->vu0_vf[1]));
label_274e2c:
    // 0x274e2c: 0x56800020  bnel        $s4, $zero, . + 4 + (0x20 << 2)
label_274e30:
    if (ctx->pc == 0x274E30u) {
        ctx->pc = 0x274E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E2Cu;
        // 0x274e30: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274E34u;
        goto label_274e34;
    }
    ctx->pc = 0x274E2Cu;
    {
        const bool branch_taken_0x274e2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x274e2c) {
            ctx->pc = 0x274E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274E2Cu;
            // 0x274e30: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274EB0u;
            goto label_274eb0;
        }
    }
    ctx->pc = 0x274E34u;
label_274e34:
    // 0x274e34: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x274e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_274e38:
    // 0x274e38: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x274e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_274e3c:
    // 0x274e3c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x274e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274e40:
    // 0x274e40: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x274e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274e44:
    // 0x274e44: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x274e44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
label_274e48:
    // 0x274e48: 0xc6000350  lwc1        $f0, 0x350($s0)
    ctx->pc = 0x274e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274e4c:
    // 0x274e4c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x274e4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_274e50:
    // 0x274e50: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x274e50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_274e54:
    // 0x274e54: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x274e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_274e58:
    // 0x274e58: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x274e58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_274e5c:
    // 0x274e5c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x274e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_274e60:
    // 0x274e60: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x274e60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_274e64:
    // 0x274e64: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x274e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_274e68:
    // 0x274e68: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x274e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_274e6c:
    // 0x274e6c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x274e6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_274e70:
    // 0x274e70: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x274e70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_274e74:
    // 0x274e74: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x274e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_274e78:
    // 0x274e78: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x274e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_274e7c:
    // 0x274e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274e80:
    // 0x274e80: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x274e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_274e84:
    // 0x274e84: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x274e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274e88:
    // 0x274e88: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x274e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274e8c:
    // 0x274e8c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x274e8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_274e90:
    // 0x274e90: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x274e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_274e94:
    // 0x274e94: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x274e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_274e98:
    // 0x274e98: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x274e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_274e9c:
    // 0x274e9c: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x274e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_274ea0:
    // 0x274ea0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x274ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_274ea4:
    // 0x274ea4: 0x60f809  jalr        $v1
label_274ea8:
    if (ctx->pc == 0x274EA8u) {
        ctx->pc = 0x274EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EA4u;
        // 0x274ea8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274EACu;
        goto label_274eac;
    }
    ctx->pc = 0x274EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x274EACu);
        ctx->pc = 0x274EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EA4u;
        // 0x274ea8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274EA4u, 0x274EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x274EACu;
label_274eac:
    // 0x274eac: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x274eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_274eb0:
    // 0x274eb0: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x274eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_274eb4:
    // 0x274eb4: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x274eb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_274eb8:
    // 0x274eb8: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x274eb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_274ebc:
    // 0x274ebc: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x274ebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_274ec0:
    // 0x274ec0: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x274ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_274ec4:
    // 0x274ec4: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x274ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_274ec8:
    // 0x274ec8: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x274ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_274ecc:
    // 0x274ecc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x274eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_274ed0:
    // 0x274ed0: 0x3e00008  jr          $ra
label_274ed4:
    if (ctx->pc == 0x274ED4u) {
        ctx->pc = 0x274ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274ED0u;
        // 0x274ed4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274ED8u;
        goto label_fallthrough_0x274ed0;
    }
    ctx->pc = 0x274ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274ED0u;
        // 0x274ed4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x274ed0:
    ctx->pc = 0x274ED8u;
}
