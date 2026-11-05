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

// Function: sub_00208790
// Address: 0x208790 - 0x208d28
void sub_00208790_0x208790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208790_0x208790");
#endif

    switch (ctx->pc) {
        case 0x208790u: goto label_208790;
        case 0x208794u: goto label_208794;
        case 0x208798u: goto label_208798;
        case 0x20879cu: goto label_20879c;
        case 0x2087a0u: goto label_2087a0;
        case 0x2087a4u: goto label_2087a4;
        case 0x2087a8u: goto label_2087a8;
        case 0x2087acu: goto label_2087ac;
        case 0x2087b0u: goto label_2087b0;
        case 0x2087b4u: goto label_2087b4;
        case 0x2087b8u: goto label_2087b8;
        case 0x2087bcu: goto label_2087bc;
        case 0x2087c0u: goto label_2087c0;
        case 0x2087c4u: goto label_2087c4;
        case 0x2087c8u: goto label_2087c8;
        case 0x2087ccu: goto label_2087cc;
        case 0x2087d0u: goto label_2087d0;
        case 0x2087d4u: goto label_2087d4;
        case 0x2087d8u: goto label_2087d8;
        case 0x2087dcu: goto label_2087dc;
        case 0x2087e0u: goto label_2087e0;
        case 0x2087e4u: goto label_2087e4;
        case 0x2087e8u: goto label_2087e8;
        case 0x2087ecu: goto label_2087ec;
        case 0x2087f0u: goto label_2087f0;
        case 0x2087f4u: goto label_2087f4;
        case 0x2087f8u: goto label_2087f8;
        case 0x2087fcu: goto label_2087fc;
        case 0x208800u: goto label_208800;
        case 0x208804u: goto label_208804;
        case 0x208808u: goto label_208808;
        case 0x20880cu: goto label_20880c;
        case 0x208810u: goto label_208810;
        case 0x208814u: goto label_208814;
        case 0x208818u: goto label_208818;
        case 0x20881cu: goto label_20881c;
        case 0x208820u: goto label_208820;
        case 0x208824u: goto label_208824;
        case 0x208828u: goto label_208828;
        case 0x20882cu: goto label_20882c;
        case 0x208830u: goto label_208830;
        case 0x208834u: goto label_208834;
        case 0x208838u: goto label_208838;
        case 0x20883cu: goto label_20883c;
        case 0x208840u: goto label_208840;
        case 0x208844u: goto label_208844;
        case 0x208848u: goto label_208848;
        case 0x20884cu: goto label_20884c;
        case 0x208850u: goto label_208850;
        case 0x208854u: goto label_208854;
        case 0x208858u: goto label_208858;
        case 0x20885cu: goto label_20885c;
        case 0x208860u: goto label_208860;
        case 0x208864u: goto label_208864;
        case 0x208868u: goto label_208868;
        case 0x20886cu: goto label_20886c;
        case 0x208870u: goto label_208870;
        case 0x208874u: goto label_208874;
        case 0x208878u: goto label_208878;
        case 0x20887cu: goto label_20887c;
        case 0x208880u: goto label_208880;
        case 0x208884u: goto label_208884;
        case 0x208888u: goto label_208888;
        case 0x20888cu: goto label_20888c;
        case 0x208890u: goto label_208890;
        case 0x208894u: goto label_208894;
        case 0x208898u: goto label_208898;
        case 0x20889cu: goto label_20889c;
        case 0x2088a0u: goto label_2088a0;
        case 0x2088a4u: goto label_2088a4;
        case 0x2088a8u: goto label_2088a8;
        case 0x2088acu: goto label_2088ac;
        case 0x2088b0u: goto label_2088b0;
        case 0x2088b4u: goto label_2088b4;
        case 0x2088b8u: goto label_2088b8;
        case 0x2088bcu: goto label_2088bc;
        case 0x2088c0u: goto label_2088c0;
        case 0x2088c4u: goto label_2088c4;
        case 0x2088c8u: goto label_2088c8;
        case 0x2088ccu: goto label_2088cc;
        case 0x2088d0u: goto label_2088d0;
        case 0x2088d4u: goto label_2088d4;
        case 0x2088d8u: goto label_2088d8;
        case 0x2088dcu: goto label_2088dc;
        case 0x2088e0u: goto label_2088e0;
        case 0x2088e4u: goto label_2088e4;
        case 0x2088e8u: goto label_2088e8;
        case 0x2088ecu: goto label_2088ec;
        case 0x2088f0u: goto label_2088f0;
        case 0x2088f4u: goto label_2088f4;
        case 0x2088f8u: goto label_2088f8;
        case 0x2088fcu: goto label_2088fc;
        case 0x208900u: goto label_208900;
        case 0x208904u: goto label_208904;
        case 0x208908u: goto label_208908;
        case 0x20890cu: goto label_20890c;
        case 0x208910u: goto label_208910;
        case 0x208914u: goto label_208914;
        case 0x208918u: goto label_208918;
        case 0x20891cu: goto label_20891c;
        case 0x208920u: goto label_208920;
        case 0x208924u: goto label_208924;
        case 0x208928u: goto label_208928;
        case 0x20892cu: goto label_20892c;
        case 0x208930u: goto label_208930;
        case 0x208934u: goto label_208934;
        case 0x208938u: goto label_208938;
        case 0x20893cu: goto label_20893c;
        case 0x208940u: goto label_208940;
        case 0x208944u: goto label_208944;
        case 0x208948u: goto label_208948;
        case 0x20894cu: goto label_20894c;
        case 0x208950u: goto label_208950;
        case 0x208954u: goto label_208954;
        case 0x208958u: goto label_208958;
        case 0x20895cu: goto label_20895c;
        case 0x208960u: goto label_208960;
        case 0x208964u: goto label_208964;
        case 0x208968u: goto label_208968;
        case 0x20896cu: goto label_20896c;
        case 0x208970u: goto label_208970;
        case 0x208974u: goto label_208974;
        case 0x208978u: goto label_208978;
        case 0x20897cu: goto label_20897c;
        case 0x208980u: goto label_208980;
        case 0x208984u: goto label_208984;
        case 0x208988u: goto label_208988;
        case 0x20898cu: goto label_20898c;
        case 0x208990u: goto label_208990;
        case 0x208994u: goto label_208994;
        case 0x208998u: goto label_208998;
        case 0x20899cu: goto label_20899c;
        case 0x2089a0u: goto label_2089a0;
        case 0x2089a4u: goto label_2089a4;
        case 0x2089a8u: goto label_2089a8;
        case 0x2089acu: goto label_2089ac;
        case 0x2089b0u: goto label_2089b0;
        case 0x2089b4u: goto label_2089b4;
        case 0x2089b8u: goto label_2089b8;
        case 0x2089bcu: goto label_2089bc;
        case 0x2089c0u: goto label_2089c0;
        case 0x2089c4u: goto label_2089c4;
        case 0x2089c8u: goto label_2089c8;
        case 0x2089ccu: goto label_2089cc;
        case 0x2089d0u: goto label_2089d0;
        case 0x2089d4u: goto label_2089d4;
        case 0x2089d8u: goto label_2089d8;
        case 0x2089dcu: goto label_2089dc;
        case 0x2089e0u: goto label_2089e0;
        case 0x2089e4u: goto label_2089e4;
        case 0x2089e8u: goto label_2089e8;
        case 0x2089ecu: goto label_2089ec;
        case 0x2089f0u: goto label_2089f0;
        case 0x2089f4u: goto label_2089f4;
        case 0x2089f8u: goto label_2089f8;
        case 0x2089fcu: goto label_2089fc;
        case 0x208a00u: goto label_208a00;
        case 0x208a04u: goto label_208a04;
        case 0x208a08u: goto label_208a08;
        case 0x208a0cu: goto label_208a0c;
        case 0x208a10u: goto label_208a10;
        case 0x208a14u: goto label_208a14;
        case 0x208a18u: goto label_208a18;
        case 0x208a1cu: goto label_208a1c;
        case 0x208a20u: goto label_208a20;
        case 0x208a24u: goto label_208a24;
        case 0x208a28u: goto label_208a28;
        case 0x208a2cu: goto label_208a2c;
        case 0x208a30u: goto label_208a30;
        case 0x208a34u: goto label_208a34;
        case 0x208a38u: goto label_208a38;
        case 0x208a3cu: goto label_208a3c;
        case 0x208a40u: goto label_208a40;
        case 0x208a44u: goto label_208a44;
        case 0x208a48u: goto label_208a48;
        case 0x208a4cu: goto label_208a4c;
        case 0x208a50u: goto label_208a50;
        case 0x208a54u: goto label_208a54;
        case 0x208a58u: goto label_208a58;
        case 0x208a5cu: goto label_208a5c;
        case 0x208a60u: goto label_208a60;
        case 0x208a64u: goto label_208a64;
        case 0x208a68u: goto label_208a68;
        case 0x208a6cu: goto label_208a6c;
        case 0x208a70u: goto label_208a70;
        case 0x208a74u: goto label_208a74;
        case 0x208a78u: goto label_208a78;
        case 0x208a7cu: goto label_208a7c;
        case 0x208a80u: goto label_208a80;
        case 0x208a84u: goto label_208a84;
        case 0x208a88u: goto label_208a88;
        case 0x208a8cu: goto label_208a8c;
        case 0x208a90u: goto label_208a90;
        case 0x208a94u: goto label_208a94;
        case 0x208a98u: goto label_208a98;
        case 0x208a9cu: goto label_208a9c;
        case 0x208aa0u: goto label_208aa0;
        case 0x208aa4u: goto label_208aa4;
        case 0x208aa8u: goto label_208aa8;
        case 0x208aacu: goto label_208aac;
        case 0x208ab0u: goto label_208ab0;
        case 0x208ab4u: goto label_208ab4;
        case 0x208ab8u: goto label_208ab8;
        case 0x208abcu: goto label_208abc;
        case 0x208ac0u: goto label_208ac0;
        case 0x208ac4u: goto label_208ac4;
        case 0x208ac8u: goto label_208ac8;
        case 0x208accu: goto label_208acc;
        case 0x208ad0u: goto label_208ad0;
        case 0x208ad4u: goto label_208ad4;
        case 0x208ad8u: goto label_208ad8;
        case 0x208adcu: goto label_208adc;
        case 0x208ae0u: goto label_208ae0;
        case 0x208ae4u: goto label_208ae4;
        case 0x208ae8u: goto label_208ae8;
        case 0x208aecu: goto label_208aec;
        case 0x208af0u: goto label_208af0;
        case 0x208af4u: goto label_208af4;
        case 0x208af8u: goto label_208af8;
        case 0x208afcu: goto label_208afc;
        case 0x208b00u: goto label_208b00;
        case 0x208b04u: goto label_208b04;
        case 0x208b08u: goto label_208b08;
        case 0x208b0cu: goto label_208b0c;
        case 0x208b10u: goto label_208b10;
        case 0x208b14u: goto label_208b14;
        case 0x208b18u: goto label_208b18;
        case 0x208b1cu: goto label_208b1c;
        case 0x208b20u: goto label_208b20;
        case 0x208b24u: goto label_208b24;
        case 0x208b28u: goto label_208b28;
        case 0x208b2cu: goto label_208b2c;
        case 0x208b30u: goto label_208b30;
        case 0x208b34u: goto label_208b34;
        case 0x208b38u: goto label_208b38;
        case 0x208b3cu: goto label_208b3c;
        case 0x208b40u: goto label_208b40;
        case 0x208b44u: goto label_208b44;
        case 0x208b48u: goto label_208b48;
        case 0x208b4cu: goto label_208b4c;
        case 0x208b50u: goto label_208b50;
        case 0x208b54u: goto label_208b54;
        case 0x208b58u: goto label_208b58;
        case 0x208b5cu: goto label_208b5c;
        case 0x208b60u: goto label_208b60;
        case 0x208b64u: goto label_208b64;
        case 0x208b68u: goto label_208b68;
        case 0x208b6cu: goto label_208b6c;
        case 0x208b70u: goto label_208b70;
        case 0x208b74u: goto label_208b74;
        case 0x208b78u: goto label_208b78;
        case 0x208b7cu: goto label_208b7c;
        case 0x208b80u: goto label_208b80;
        case 0x208b84u: goto label_208b84;
        case 0x208b88u: goto label_208b88;
        case 0x208b8cu: goto label_208b8c;
        case 0x208b90u: goto label_208b90;
        case 0x208b94u: goto label_208b94;
        case 0x208b98u: goto label_208b98;
        case 0x208b9cu: goto label_208b9c;
        case 0x208ba0u: goto label_208ba0;
        case 0x208ba4u: goto label_208ba4;
        case 0x208ba8u: goto label_208ba8;
        case 0x208bacu: goto label_208bac;
        case 0x208bb0u: goto label_208bb0;
        case 0x208bb4u: goto label_208bb4;
        case 0x208bb8u: goto label_208bb8;
        case 0x208bbcu: goto label_208bbc;
        case 0x208bc0u: goto label_208bc0;
        case 0x208bc4u: goto label_208bc4;
        case 0x208bc8u: goto label_208bc8;
        case 0x208bccu: goto label_208bcc;
        case 0x208bd0u: goto label_208bd0;
        case 0x208bd4u: goto label_208bd4;
        case 0x208bd8u: goto label_208bd8;
        case 0x208bdcu: goto label_208bdc;
        case 0x208be0u: goto label_208be0;
        case 0x208be4u: goto label_208be4;
        case 0x208be8u: goto label_208be8;
        case 0x208becu: goto label_208bec;
        case 0x208bf0u: goto label_208bf0;
        case 0x208bf4u: goto label_208bf4;
        case 0x208bf8u: goto label_208bf8;
        case 0x208bfcu: goto label_208bfc;
        case 0x208c00u: goto label_208c00;
        case 0x208c04u: goto label_208c04;
        case 0x208c08u: goto label_208c08;
        case 0x208c0cu: goto label_208c0c;
        case 0x208c10u: goto label_208c10;
        case 0x208c14u: goto label_208c14;
        case 0x208c18u: goto label_208c18;
        case 0x208c1cu: goto label_208c1c;
        case 0x208c20u: goto label_208c20;
        case 0x208c24u: goto label_208c24;
        case 0x208c28u: goto label_208c28;
        case 0x208c2cu: goto label_208c2c;
        case 0x208c30u: goto label_208c30;
        case 0x208c34u: goto label_208c34;
        case 0x208c38u: goto label_208c38;
        case 0x208c3cu: goto label_208c3c;
        case 0x208c40u: goto label_208c40;
        case 0x208c44u: goto label_208c44;
        case 0x208c48u: goto label_208c48;
        case 0x208c4cu: goto label_208c4c;
        case 0x208c50u: goto label_208c50;
        case 0x208c54u: goto label_208c54;
        case 0x208c58u: goto label_208c58;
        case 0x208c5cu: goto label_208c5c;
        case 0x208c60u: goto label_208c60;
        case 0x208c64u: goto label_208c64;
        case 0x208c68u: goto label_208c68;
        case 0x208c6cu: goto label_208c6c;
        case 0x208c70u: goto label_208c70;
        case 0x208c74u: goto label_208c74;
        case 0x208c78u: goto label_208c78;
        case 0x208c7cu: goto label_208c7c;
        case 0x208c80u: goto label_208c80;
        case 0x208c84u: goto label_208c84;
        case 0x208c88u: goto label_208c88;
        case 0x208c8cu: goto label_208c8c;
        case 0x208c90u: goto label_208c90;
        case 0x208c94u: goto label_208c94;
        case 0x208c98u: goto label_208c98;
        case 0x208c9cu: goto label_208c9c;
        case 0x208ca0u: goto label_208ca0;
        case 0x208ca4u: goto label_208ca4;
        case 0x208ca8u: goto label_208ca8;
        case 0x208cacu: goto label_208cac;
        case 0x208cb0u: goto label_208cb0;
        case 0x208cb4u: goto label_208cb4;
        case 0x208cb8u: goto label_208cb8;
        case 0x208cbcu: goto label_208cbc;
        case 0x208cc0u: goto label_208cc0;
        case 0x208cc4u: goto label_208cc4;
        case 0x208cc8u: goto label_208cc8;
        case 0x208cccu: goto label_208ccc;
        case 0x208cd0u: goto label_208cd0;
        case 0x208cd4u: goto label_208cd4;
        case 0x208cd8u: goto label_208cd8;
        case 0x208cdcu: goto label_208cdc;
        case 0x208ce0u: goto label_208ce0;
        case 0x208ce4u: goto label_208ce4;
        case 0x208ce8u: goto label_208ce8;
        case 0x208cecu: goto label_208cec;
        case 0x208cf0u: goto label_208cf0;
        case 0x208cf4u: goto label_208cf4;
        case 0x208cf8u: goto label_208cf8;
        case 0x208cfcu: goto label_208cfc;
        case 0x208d00u: goto label_208d00;
        case 0x208d04u: goto label_208d04;
        case 0x208d08u: goto label_208d08;
        case 0x208d0cu: goto label_208d0c;
        case 0x208d10u: goto label_208d10;
        case 0x208d14u: goto label_208d14;
        case 0x208d18u: goto label_208d18;
        case 0x208d1cu: goto label_208d1c;
        case 0x208d20u: goto label_208d20;
        case 0x208d24u: goto label_208d24;
        default: break;
    }

    ctx->pc = 0x208790u;

label_208790:
    // 0x208790: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x208790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_208794:
    // 0x208794: 0xffb501c8  sd          $s5, 0x1C8($sp)
    ctx->pc = 0x208794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 21));
label_208798:
    // 0x208798: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x208798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
label_20879c:
    // 0x20879c: 0xffb001a0  sd          $s0, 0x1A0($sp)
    ctx->pc = 0x20879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 16));
label_2087a0:
    // 0x2087a0: 0xffb101a8  sd          $s1, 0x1A8($sp)
    ctx->pc = 0x2087a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 17));
label_2087a4:
    // 0x2087a4: 0xffb201b0  sd          $s2, 0x1B0($sp)
    ctx->pc = 0x2087a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 18));
label_2087a8:
    // 0x2087a8: 0xffb301b8  sd          $s3, 0x1B8($sp)
    ctx->pc = 0x2087a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 19));
label_2087ac:
    // 0x2087ac: 0xffb401c0  sd          $s4, 0x1C0($sp)
    ctx->pc = 0x2087acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 20));
label_2087b0:
    // 0x2087b0: 0xffb601d0  sd          $s6, 0x1D0($sp)
    ctx->pc = 0x2087b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 22));
label_2087b4:
    // 0x2087b4: 0xffb701d8  sd          $s7, 0x1D8($sp)
    ctx->pc = 0x2087b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 23));
label_2087b8:
    // 0x2087b8: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x2087b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
label_2087bc:
    // 0x2087bc: 0xffbf01e8  sd          $ra, 0x1E8($sp)
    ctx->pc = 0x2087bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 31));
label_2087c0:
    // 0x2087c0: 0xc09eb04  jal         func_27AC10
label_2087c4:
    if (ctx->pc == 0x2087C4u) {
        ctx->pc = 0x2087C8u;
        goto label_2087c8;
    }
    ctx->pc = 0x2087C0u;
    SET_GPR_U32(ctx, 31, 0x2087C8u);
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x2087C0u, 0x2087C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087C8u;
label_2087c8:
    // 0x2087c8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2087c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2087cc:
    // 0x2087cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2087ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2087d0:
    // 0x2087d0: 0x8c6693d0  lw          $a2, -0x6C30($v1)
    ctx->pc = 0x2087d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939600)));
label_2087d4:
    // 0x2087d4: 0xc0d74c6  jal         func_35D318
label_2087d8:
    if (ctx->pc == 0x2087D8u) {
        ctx->pc = 0x2087D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087D4u;
        // 0x2087d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2087DCu;
        goto label_2087dc;
    }
    ctx->pc = 0x2087D4u;
    SET_GPR_U32(ctx, 31, 0x2087DCu);
    ctx->pc = 0x2087D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087D4u;
    // 0x2087d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D318u, 0x2087D4u, 0x2087DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087DCu;
label_2087dc:
    // 0x2087dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2087dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2087e0:
    // 0x2087e0: 0xc09dcc6  jal         func_277318
label_2087e4:
    if (ctx->pc == 0x2087E4u) {
        ctx->pc = 0x2087E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087E0u;
        // 0x2087e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2087E8u;
        goto label_2087e8;
    }
    ctx->pc = 0x2087E0u;
    SET_GPR_U32(ctx, 31, 0x2087E8u);
    ctx->pc = 0x2087E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087E0u;
    // 0x2087e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x2087E0u, 0x2087E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087E8u;
label_2087e8:
    // 0x2087e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2087e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2087ec:
    // 0x2087ec: 0x12a00140  beqz        $s5, . + 4 + (0x140 << 2)
label_2087f0:
    if (ctx->pc == 0x2087F0u) {
        ctx->pc = 0x2087F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087ECu;
        // 0x2087f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2087F4u;
        goto label_2087f4;
    }
    ctx->pc = 0x2087ECu;
    {
        const bool branch_taken_0x2087ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2087F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087ECu;
        // 0x2087f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2087ec) {
            ctx->pc = 0x208CF0u;
            goto label_208cf0;
        }
    }
    ctx->pc = 0x2087F4u;
label_2087f4:
    // 0x2087f4: 0xc0f5240  jal         func_3D4900
label_2087f8:
    if (ctx->pc == 0x2087F8u) {
        ctx->pc = 0x2087F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2087F4u;
        // 0x2087f8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2087FCu;
        goto label_2087fc;
    }
    ctx->pc = 0x2087F4u;
    SET_GPR_U32(ctx, 31, 0x2087FCu);
    ctx->pc = 0x2087F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2087F4u;
    // 0x2087f8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2087F4u, 0x2087FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087FCu;
label_2087fc:
    // 0x2087fc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2087fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_208800:
    // 0x208800: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x208800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_208804:
    // 0x208804: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x208804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
label_208808:
    // 0x208808: 0xafa4018c  sw          $a0, 0x18C($sp)
    ctx->pc = 0x208808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 4));
label_20880c:
    // 0x20880c: 0x27a3017c  addiu       $v1, $sp, 0x17C
    ctx->pc = 0x20880cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_208810:
    // 0x208810: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x208810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_208814:
    // 0x208814: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x208814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
label_208818:
    // 0x208818: 0xac8233c4  sw          $v0, 0x33C4($a0)
    ctx->pc = 0x208818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13252), GPR_U32(ctx, 2));
label_20881c:
    // 0x20881c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20881cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_208820:
    // 0x208820: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x208820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_208824:
    // 0x208824: 0x10000128  b           . + 4 + (0x128 << 2)
label_208828:
    if (ctx->pc == 0x208828u) {
        ctx->pc = 0x208828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208824u;
        // 0x208828: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20882Cu;
        goto label_20882c;
    }
    ctx->pc = 0x208824u;
    {
        const bool branch_taken_0x208824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208824u;
        // 0x208828: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208824) {
            ctx->pc = 0x208CC8u;
            goto label_208cc8;
        }
    }
    ctx->pc = 0x20882Cu;
label_20882c:
    // 0x20882c: 0x0  nop
    ctx->pc = 0x20882cu;
    // NOP
label_208830:
    // 0x208830: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x208830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_208834:
    // 0x208834: 0x8fa50184  lw          $a1, 0x184($sp)
    ctx->pc = 0x208834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_208838:
    // 0x208838: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x208838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_20883c:
    // 0x20883c: 0x40f809  jalr        $v0
label_208840:
    if (ctx->pc == 0x208840u) {
        ctx->pc = 0x208840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20883Cu;
        // 0x208840: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208844u;
        goto label_208844;
    }
    ctx->pc = 0x20883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208844u);
        ctx->pc = 0x208840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20883Cu;
        // 0x208840: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20883Cu, 0x208844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208844u;
label_208844:
    // 0x208844: 0xc0efc2e  jal         func_3BF0B8
label_208848:
    if (ctx->pc == 0x208848u) {
        ctx->pc = 0x208848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208844u;
        // 0x208848: 0x8fa40184  lw          $a0, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20884Cu;
        goto label_20884c;
    }
    ctx->pc = 0x208844u;
    SET_GPR_U32(ctx, 31, 0x20884Cu);
    ctx->pc = 0x208848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208844u;
    // 0x208848: 0x8fa40184  lw          $a0, 0x184($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x208844u, 0x20884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20884Cu;
label_20884c:
    // 0x20884c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x20884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208850:
    // 0x208850: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x208850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_208854:
    // 0x208854: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x208854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_208858:
    // 0x208858: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x208858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_20885c:
    // 0x20885c: 0x40f809  jalr        $v0
label_208860:
    if (ctx->pc == 0x208860u) {
        ctx->pc = 0x208860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20885Cu;
        // 0x208860: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208864u;
        goto label_208864;
    }
    ctx->pc = 0x20885Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208864u);
        ctx->pc = 0x208860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20885Cu;
        // 0x208860: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20885Cu, 0x208864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208864u;
label_208864:
    // 0x208864: 0x93b00120  lbu         $s0, 0x120($sp)
    ctx->pc = 0x208864u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
label_208868:
    // 0x208868: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x208868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20886c:
    // 0x20886c: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x20886cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_208870:
    // 0x208870: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x208870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_208874:
    // 0x208874: 0xc0f52a8  jal         func_3D4AA0
label_208878:
    if (ctx->pc == 0x208878u) {
        ctx->pc = 0x208878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208874u;
        // 0x208878: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20887Cu;
        goto label_20887c;
    }
    ctx->pc = 0x208874u;
    SET_GPR_U32(ctx, 31, 0x20887Cu);
    ctx->pc = 0x208878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208874u;
    // 0x208878: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x208874u, 0x20887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20887Cu;
label_20887c:
    // 0x20887c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x20887cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_208880:
    // 0x208880: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x208880u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208884:
    // 0x208884: 0xafa40194  sw          $a0, 0x194($sp)
    ctx->pc = 0x208884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 4));
label_208888:
    // 0x208888: 0x24760010  addiu       $s6, $v1, 0x10
    ctx->pc = 0x208888u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_20888c:
    // 0x20888c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x20888cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_208890:
    // 0x208890: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_208894:
    // 0x208894: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_208898:
    if (ctx->pc == 0x208898u) {
        ctx->pc = 0x208898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208894u;
        // 0x208898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20889Cu;
        goto label_20889c;
    }
    ctx->pc = 0x208894u;
    {
        const bool branch_taken_0x208894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x208898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208894u;
        // 0x208898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208894) {
            ctx->pc = 0x2088C0u;
            goto label_2088c0;
        }
    }
    ctx->pc = 0x20889Cu;
label_20889c:
    // 0x20889c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x20889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2088a0:
    // 0x2088a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2088a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2088a4:
    // 0x2088a4: 0x0  nop
    ctx->pc = 0x2088a4u;
    // NOP
label_2088a8:
    // 0x2088a8: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x2088a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
label_2088ac:
    // 0x2088ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2088acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2088b0:
    // 0x2088b0: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x2088b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_2088b4:
    // 0x2088b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2088b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2088b8:
    // 0x2088b8: 0x1483fffb  bne         $a0, $v1, . + 4 + (-0x5 << 2)
label_2088bc:
    if (ctx->pc == 0x2088BCu) {
        ctx->pc = 0x2088BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088B8u;
        // 0x2088bc: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2088C0u;
        goto label_2088c0;
    }
    ctx->pc = 0x2088B8u;
    {
        const bool branch_taken_0x2088b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2088BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088B8u;
        // 0x2088bc: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088b8) {
            ctx->pc = 0x2088A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2088a8;
        }
    }
    ctx->pc = 0x2088C0u;
label_2088c0:
    // 0x2088c0: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x2088c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
label_2088c4:
    // 0x2088c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2088c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2088c8:
    // 0x2088c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2088c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2088cc:
    // 0x2088cc: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
label_2088d0:
    if (ctx->pc == 0x2088D0u) {
        ctx->pc = 0x2088D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088CCu;
        // 0x2088d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2088D4u;
        goto label_2088d4;
    }
    ctx->pc = 0x2088CCu;
    {
        const bool branch_taken_0x2088cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2088D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088CCu;
        // 0x2088d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2088cc) {
            ctx->pc = 0x208A88u;
            goto label_208a88;
        }
    }
    ctx->pc = 0x2088D4u;
label_2088d4:
    // 0x2088d4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2088d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2088d8:
    // 0x2088d8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2088d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2088dc:
    // 0x2088dc: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x2088dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2088e0:
    // 0x2088e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2088e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2088e4:
    // 0x2088e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2088e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2088e8:
    // 0x2088e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2088e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2088ec:
    // 0x2088ec: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x2088ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2088f0:
    // 0x2088f0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2088f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2088f4:
    // 0x2088f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2088f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2088f8:
    // 0x2088f8: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2088f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2088fc:
    // 0x2088fc: 0x40f809  jalr        $v0
label_208900:
    if (ctx->pc == 0x208900u) {
        ctx->pc = 0x208900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088FCu;
        // 0x208900: 0xafa30198  sw          $v1, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208904u;
        goto label_208904;
    }
    ctx->pc = 0x2088FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208904u);
        ctx->pc = 0x208900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2088FCu;
        // 0x208900: 0xafa30198  sw          $v1, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2088FCu, 0x208904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208904u;
label_208904:
    // 0x208904: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x208904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208908:
    // 0x208908: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x208908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20890c:
    // 0x20890c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x20890cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_208910:
    // 0x208910: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x208910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_208914:
    // 0x208914: 0x40f809  jalr        $v0
label_208918:
    if (ctx->pc == 0x208918u) {
        ctx->pc = 0x208918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208914u;
        // 0x208918: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20891Cu;
        goto label_20891c;
    }
    ctx->pc = 0x208914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20891Cu);
        ctx->pc = 0x208918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208914u;
        // 0x208918: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208914u, 0x20891Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20891Cu;
label_20891c:
    // 0x20891c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x20891cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_208920:
    // 0x208920: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
label_208924:
    if (ctx->pc == 0x208924u) {
        ctx->pc = 0x208924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208920u;
        // 0x208924: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208928u;
        goto label_208928;
    }
    ctx->pc = 0x208920u;
    {
        const bool branch_taken_0x208920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208920u;
        // 0x208924: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208920) {
            ctx->pc = 0x208A70u;
            goto label_208a70;
        }
    }
    ctx->pc = 0x208928u;
label_208928:
    // 0x208928: 0x27be0170  addiu       $fp, $sp, 0x170
    ctx->pc = 0x208928u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20892c:
    // 0x20892c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x20892cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_208930:
    // 0x208930: 0x27b70174  addiu       $s7, $sp, 0x174
    ctx->pc = 0x208930u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_208934:
    // 0x208934: 0x2c00013  mtlo        $s6
    ctx->pc = 0x208934u;
    ctx->lo = GPR_U64(ctx, 22);
label_208938:
    // 0x208938: 0x568821  addu        $s1, $v0, $s6
    ctx->pc = 0x208938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_20893c:
    // 0x20893c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x20893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_208940:
    // 0x208940: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x208940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_208944:
    // 0x208944: 0x72420000  madd        $zero, $s2, $v0
    ctx->pc = 0x208944u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_208948:
    // 0x208948: 0x1012  mflo        $v0
    ctx->pc = 0x208948u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_20894c:
    // 0x20894c: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x20894cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_208950:
    // 0x208950: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x208950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208954:
    // 0x208954: 0x0  nop
    ctx->pc = 0x208954u;
    // NOP
label_208958:
    // 0x208958: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x208958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20895c:
    // 0x20895c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x20895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_208960:
    // 0x208960: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x208960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_208964:
    // 0x208964: 0x40f809  jalr        $v0
label_208968:
    if (ctx->pc == 0x208968u) {
        ctx->pc = 0x208968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208964u;
        // 0x208968: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20896Cu;
        goto label_20896c;
    }
    ctx->pc = 0x208964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20896Cu);
        ctx->pc = 0x208968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208964u;
        // 0x208968: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208964u, 0x20896Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20896Cu;
label_20896c:
    // 0x20896c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x20896cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_208970:
    // 0x208970: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x208970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_208974:
    // 0x208974: 0x52020009  beql        $s0, $v0, . + 4 + (0x9 << 2)
label_208978:
    if (ctx->pc == 0x208978u) {
        ctx->pc = 0x208978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208974u;
        // 0x208978: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20897Cu;
        goto label_20897c;
    }
    ctx->pc = 0x208974u;
    {
        const bool branch_taken_0x208974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x208974) {
            ctx->pc = 0x208978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208974u;
            // 0x208978: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20899Cu;
            goto label_20899c;
        }
    }
    ctx->pc = 0x20897Cu;
label_20897c:
    // 0x20897c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_208980:
    if (ctx->pc == 0x208980u) {
        ctx->pc = 0x208980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20897Cu;
        // 0x208980: 0x97a20140  lhu         $v0, 0x140($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208984u;
        goto label_208984;
    }
    ctx->pc = 0x20897Cu;
    {
        const bool branch_taken_0x20897c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x208980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20897Cu;
        // 0x208980: 0x97a20140  lhu         $v0, 0x140($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20897c) {
            ctx->pc = 0x208988u;
            goto label_208988;
        }
    }
    ctx->pc = 0x208984u;
label_208984:
    // 0x208984: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x208984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_208988:
    // 0x208988: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x208988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20898c:
    // 0x20898c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20898cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_208990:
    // 0x208990: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x208990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_208994:
    // 0x208994: 0x10000031  b           . + 4 + (0x31 << 2)
label_208998:
    if (ctx->pc == 0x208998u) {
        ctx->pc = 0x208998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208994u;
        // 0x208998: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20899Cu;
        goto label_20899c;
    }
    ctx->pc = 0x208994u;
    {
        const bool branch_taken_0x208994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208994u;
        // 0x208998: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208994) {
            ctx->pc = 0x208A5Cu;
            goto label_208a5c;
        }
    }
    ctx->pc = 0x20899Cu;
label_20899c:
    // 0x20899c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20899cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2089a0:
    // 0x2089a0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2089a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2089a4:
    // 0x2089a4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2089a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2089a8:
    // 0x2089a8: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x2089a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
label_2089ac:
    // 0x2089ac: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2089acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2089b0:
    // 0x2089b0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2089b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_2089b4:
    // 0x2089b4: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x2089b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2089b8:
    // 0x2089b8: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x2089b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_2089bc:
    // 0x2089bc: 0x3c2280a  movz        $a1, $fp, $v0
    ctx->pc = 0x2089bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 30));
label_2089c0:
    // 0x2089c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2089c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2089c4:
    // 0x2089c4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2089c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2089c8:
    // 0x2089c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2089cc:
    if (ctx->pc == 0x2089CCu) {
        ctx->pc = 0x2089CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089C8u;
        // 0x2089cc: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2089D0u;
        goto label_2089d0;
    }
    ctx->pc = 0x2089C8u;
    {
        const bool branch_taken_0x2089c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2089CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089C8u;
        // 0x2089cc: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089c8) {
            ctx->pc = 0x2089E4u;
            goto label_2089e4;
        }
    }
    ctx->pc = 0x2089D0u;
label_2089d0:
    // 0x2089d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2089d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2089d4:
    // 0x2089d4: 0xc0f5240  jal         func_3D4900
label_2089d8:
    if (ctx->pc == 0x2089D8u) {
        ctx->pc = 0x2089D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089D4u;
        // 0x2089d8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2089DCu;
        goto label_2089dc;
    }
    ctx->pc = 0x2089D4u;
    SET_GPR_U32(ctx, 31, 0x2089DCu);
    ctx->pc = 0x2089D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2089D4u;
    // 0x2089d8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2089D4u, 0x2089DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2089DCu;
label_2089dc:
    // 0x2089dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2089e0:
    if (ctx->pc == 0x2089E0u) {
        ctx->pc = 0x2089E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089DCu;
        // 0x2089e0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2089E4u;
        goto label_2089e4;
    }
    ctx->pc = 0x2089DCu;
    {
        const bool branch_taken_0x2089dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2089E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089DCu;
        // 0x2089e0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089dc) {
            ctx->pc = 0x2089ECu;
            goto label_2089ec;
        }
    }
    ctx->pc = 0x2089E4u;
label_2089e4:
    // 0x2089e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2089e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2089e8:
    // 0x2089e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2089e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2089ec:
    // 0x2089ec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2089ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2089f0:
    // 0x2089f0: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
label_2089f4:
    if (ctx->pc == 0x2089F4u) {
        ctx->pc = 0x2089F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089F0u;
        // 0x2089f4: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2089F8u;
        goto label_2089f8;
    }
    ctx->pc = 0x2089F0u;
    {
        const bool branch_taken_0x2089f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2089F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089F0u;
        // 0x2089f4: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089f0) {
            ctx->pc = 0x208A0Cu;
            goto label_208a0c;
        }
    }
    ctx->pc = 0x2089F8u;
label_2089f8:
    // 0x2089f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2089f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2089fc:
    // 0x2089fc: 0xc0efa74  jal         func_3BE9D0
label_208a00:
    if (ctx->pc == 0x208A00u) {
        ctx->pc = 0x208A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089FCu;
        // 0x208a00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A04u;
        goto label_208a04;
    }
    ctx->pc = 0x2089FCu;
    SET_GPR_U32(ctx, 31, 0x208A04u);
    ctx->pc = 0x208A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2089FCu;
    // 0x208a00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2089FCu, 0x208A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A04u;
label_208a04:
    // 0x208a04: 0x10000002  b           . + 4 + (0x2 << 2)
label_208a08:
    if (ctx->pc == 0x208A08u) {
        ctx->pc = 0x208A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A04u;
        // 0x208a08: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A0Cu;
        goto label_208a0c;
    }
    ctx->pc = 0x208A04u;
    {
        const bool branch_taken_0x208a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A04u;
        // 0x208a08: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a04) {
            ctx->pc = 0x208A10u;
            goto label_208a10;
        }
    }
    ctx->pc = 0x208A0Cu;
label_208a0c:
    // 0x208a0c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x208a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_208a10:
    // 0x208a10: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x208a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_208a14:
    // 0x208a14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x208a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208a18:
    // 0x208a18: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_208a1c:
    if (ctx->pc == 0x208A1Cu) {
        ctx->pc = 0x208A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A18u;
        // 0x208a1c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A20u;
        goto label_208a20;
    }
    ctx->pc = 0x208A18u;
    {
        const bool branch_taken_0x208a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A18u;
        // 0x208a1c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a18) {
            ctx->pc = 0x208A38u;
            goto label_208a38;
        }
    }
    ctx->pc = 0x208A20u;
label_208a20:
    // 0x208a20: 0x97a20140  lhu         $v0, 0x140($sp)
    ctx->pc = 0x208a20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
label_208a24:
    // 0x208a24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x208a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_208a28:
    // 0x208a28: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x208a28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_208a2c:
    // 0x208a2c: 0x0  nop
    ctx->pc = 0x208a2cu;
    // NOP
label_208a30:
    // 0x208a30: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_208a34:
    if (ctx->pc == 0x208A34u) {
        ctx->pc = 0x208A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A30u;
        // 0x208a34: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A38u;
        goto label_208a38;
    }
    ctx->pc = 0x208A30u;
    {
        const bool branch_taken_0x208a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x208A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A30u;
        // 0x208a34: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a30) {
            ctx->pc = 0x208A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208a20;
        }
    }
    ctx->pc = 0x208A38u;
label_208a38:
    // 0x208a38: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x208a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_208a3c:
    // 0x208a3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_208a40:
    if (ctx->pc == 0x208A40u) {
        ctx->pc = 0x208A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A3Cu;
        // 0x208a40: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A44u;
        goto label_208a44;
    }
    ctx->pc = 0x208A3Cu;
    {
        const bool branch_taken_0x208a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A3Cu;
        // 0x208a40: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a3c) {
            ctx->pc = 0x208A50u;
            goto label_208a50;
        }
    }
    ctx->pc = 0x208A44u;
label_208a44:
    // 0x208a44: 0xc0f5222  jal         func_3D4888
label_208a48:
    if (ctx->pc == 0x208A48u) {
        ctx->pc = 0x208A4Cu;
        goto label_208a4c;
    }
    ctx->pc = 0x208A44u;
    SET_GPR_U32(ctx, 31, 0x208A4Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x208A44u, 0x208A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A4Cu;
label_208a4c:
    // 0x208a4c: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x208a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_208a50:
    // 0x208a50: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x208a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_208a54:
    // 0x208a54: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x208a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_208a58:
    // 0x208a58: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x208a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_208a5c:
    // 0x208a5c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x208a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_208a60:
    // 0x208a60: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x208a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_208a64:
    // 0x208a64: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x208a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_208a68:
    // 0x208a68: 0x5440ffbb  bnel        $v0, $zero, . + 4 + (-0x45 << 2)
label_208a6c:
    if (ctx->pc == 0x208A6Cu) {
        ctx->pc = 0x208A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A68u;
        // 0x208a6c: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A70u;
        goto label_208a70;
    }
    ctx->pc = 0x208A68u;
    {
        const bool branch_taken_0x208a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208a68) {
            ctx->pc = 0x208A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208A68u;
            // 0x208a6c: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208958;
        }
    }
    ctx->pc = 0x208A70u;
label_208a70:
    // 0x208a70: 0x93a30120  lbu         $v1, 0x120($sp)
    ctx->pc = 0x208a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
label_208a74:
    // 0x208a74: 0x8fb20198  lw          $s2, 0x198($sp)
    ctx->pc = 0x208a74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_208a78:
    // 0x208a78: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x208a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_208a7c:
    // 0x208a7c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x208a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_208a80:
    // 0x208a80: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
label_208a84:
    if (ctx->pc == 0x208A84u) {
        ctx->pc = 0x208A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A80u;
        // 0x208a84: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208A88u;
        goto label_208a88;
    }
    ctx->pc = 0x208A80u;
    {
        const bool branch_taken_0x208a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A80u;
        // 0x208a84: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a80) {
            ctx->pc = 0x2088D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2088d8;
        }
    }
    ctx->pc = 0x208A88u;
label_208a88:
    // 0x208a88: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x208a88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_208a8c:
    // 0x208a8c: 0x742018  mult        $a0, $v1, $s4
    ctx->pc = 0x208a8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_208a90:
    // 0x208a90: 0x961021  addu        $v0, $a0, $s6
    ctx->pc = 0x208a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_208a94:
    // 0x208a94: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x208a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_208a98:
    // 0x208a98: 0x9470fffe  lhu         $s0, -0x2($v1)
    ctx->pc = 0x208a98u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
label_208a9c:
    // 0x208a9c: 0xc0f52a8  jal         func_3D4AA0
label_208aa0:
    if (ctx->pc == 0x208AA0u) {
        ctx->pc = 0x208AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A9Cu;
        // 0x208aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AA4u;
        goto label_208aa4;
    }
    ctx->pc = 0x208A9Cu;
    SET_GPR_U32(ctx, 31, 0x208AA4u);
    ctx->pc = 0x208AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A9Cu;
    // 0x208aa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x208A9Cu, 0x208AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AA4u;
label_208aa4:
    // 0x208aa4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x208aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208aa8:
    // 0x208aa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x208aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208aac:
    // 0x208aac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x208aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208ab0:
    // 0x208ab0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x208ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_208ab4:
    // 0x208ab4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x208ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_208ab8:
    // 0x208ab8: 0x40f809  jalr        $v0
label_208abc:
    if (ctx->pc == 0x208ABCu) {
        ctx->pc = 0x208ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AB8u;
        // 0x208abc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AC0u;
        goto label_208ac0;
    }
    ctx->pc = 0x208AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208AC0u);
        ctx->pc = 0x208ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AB8u;
        // 0x208abc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208AB8u, 0x208AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208AC0u;
label_208ac0:
    // 0x208ac0: 0xc0d737c  jal         func_35CDF0
label_208ac4:
    if (ctx->pc == 0x208AC4u) {
        ctx->pc = 0x208AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AC0u;
        // 0x208ac4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AC8u;
        goto label_208ac8;
    }
    ctx->pc = 0x208AC0u;
    SET_GPR_U32(ctx, 31, 0x208AC8u);
    ctx->pc = 0x208AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AC0u;
    // 0x208ac4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x208AC0u, 0x208AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AC8u;
label_208ac8:
    // 0x208ac8: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x208ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_208acc:
    // 0x208acc: 0xc0d7468  jal         func_35D1A0
label_208ad0:
    if (ctx->pc == 0x208AD0u) {
        ctx->pc = 0x208AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208ACCu;
        // 0x208ad0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208AD4u;
        goto label_208ad4;
    }
    ctx->pc = 0x208ACCu;
    SET_GPR_U32(ctx, 31, 0x208AD4u);
    ctx->pc = 0x208AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208ACCu;
    // 0x208ad0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x208ACCu, 0x208AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208AD4u;
label_208ad4:
    // 0x208ad4: 0xc0d7596  jal         func_35D658
label_208ad8:
    if (ctx->pc == 0x208AD8u) {
        ctx->pc = 0x208AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AD4u;
        // 0x208ad8: 0x8fa40194  lw          $a0, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208ADCu;
        goto label_208adc;
    }
    ctx->pc = 0x208AD4u;
    SET_GPR_U32(ctx, 31, 0x208ADCu);
    ctx->pc = 0x208AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208AD4u;
    // 0x208ad8: 0x8fa40194  lw          $a0, 0x194($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D658u, 0x208AD4u, 0x208ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208ADCu;
label_208adc:
    // 0x208adc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x208adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_208ae0:
    // 0x208ae0: 0x8c5333c4  lw          $s3, 0x33C4($v0)
    ctx->pc = 0x208ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13252)));
label_208ae4:
    // 0x208ae4: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x208ae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
label_208ae8:
    // 0x208ae8: 0xafb6015c  sw          $s6, 0x15C($sp)
    ctx->pc = 0x208ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 22));
label_208aec:
    // 0x208aec: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x208aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_208af0:
    // 0x208af0: 0xafb10160  sw          $s1, 0x160($sp)
    ctx->pc = 0x208af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 17));
label_208af4:
    // 0x208af4: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x208af4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_208af8:
    // 0x208af8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x208af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_208afc:
    // 0x208afc: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_208b00:
    if (ctx->pc == 0x208B00u) {
        ctx->pc = 0x208B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AFCu;
        // 0x208b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B04u;
        goto label_208b04;
    }
    ctx->pc = 0x208AFCu;
    {
        const bool branch_taken_0x208afc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x208B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208AFCu;
        // 0x208b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208afc) {
            ctx->pc = 0x208B3Cu;
            goto label_208b3c;
        }
    }
    ctx->pc = 0x208B04u;
label_208b04:
    // 0x208b04: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_208b08:
    if (ctx->pc == 0x208B08u) {
        ctx->pc = 0x208B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B04u;
        // 0x208b08: 0x8fa50194  lw          $a1, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B0Cu;
        goto label_208b0c;
    }
    ctx->pc = 0x208B04u;
    {
        const bool branch_taken_0x208b04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B04u;
        // 0x208b08: 0x8fa50194  lw          $a1, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b04) {
            ctx->pc = 0x208B2Cu;
            goto label_208b2c;
        }
    }
    ctx->pc = 0x208B0Cu;
label_208b0c:
    // 0x208b0c: 0xc0d7394  jal         func_35CE50
label_208b10:
    if (ctx->pc == 0x208B10u) {
        ctx->pc = 0x208B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B0Cu;
        // 0x208b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B14u;
        goto label_208b14;
    }
    ctx->pc = 0x208B0Cu;
    SET_GPR_U32(ctx, 31, 0x208B14u);
    ctx->pc = 0x208B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B0Cu;
    // 0x208b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x208B0Cu, 0x208B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B14u;
label_208b14:
    // 0x208b14: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x208b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_208b18:
    // 0x208b18: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x208b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_208b1c:
    // 0x208b1c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x208b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_208b20:
    // 0x208b20: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x208b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_208b24:
    // 0x208b24: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x208b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_208b28:
    // 0x208b28: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x208b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_208b2c:
    // 0x208b2c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x208b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_208b30:
    // 0x208b30: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x208b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_208b34:
    // 0x208b34: 0x10000061  b           . + 4 + (0x61 << 2)
label_208b38:
    if (ctx->pc == 0x208B38u) {
        ctx->pc = 0x208B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B34u;
        // 0x208b38: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B3Cu;
        goto label_208b3c;
    }
    ctx->pc = 0x208B34u;
    {
        const bool branch_taken_0x208b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B34u;
        // 0x208b38: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b34) {
            ctx->pc = 0x208CBCu;
            goto label_208cbc;
        }
    }
    ctx->pc = 0x208B3Cu;
label_208b3c:
    // 0x208b3c: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x208b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
label_208b40:
    // 0x208b40: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x208b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
label_208b44:
    // 0x208b44: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x208b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_208b48:
    // 0x208b48: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x208b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_208b4c:
    // 0x208b4c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x208b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208b50:
    // 0x208b50: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x208b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_208b54:
    // 0x208b54: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x208b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208b58:
    // 0x208b58: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x208b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_208b5c:
    // 0x208b5c: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x208b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_208b60:
    // 0x208b60: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x208b60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_208b64:
    // 0x208b64: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x208b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
label_208b68:
    // 0x208b68: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x208b68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_208b6c:
    // 0x208b6c: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x208b6cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_208b70:
    // 0x208b70: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x208b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_208b74:
    // 0x208b74: 0x44b021  addu        $s6, $v0, $a0
    ctx->pc = 0x208b74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_208b78:
    // 0x208b78: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_208b7c:
    if (ctx->pc == 0x208B7Cu) {
        ctx->pc = 0x208B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B78u;
        // 0x208b7c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B80u;
        goto label_208b80;
    }
    ctx->pc = 0x208B78u;
    {
        const bool branch_taken_0x208b78 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B78u;
        // 0x208b7c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b78) {
            ctx->pc = 0x208B90u;
            goto label_208b90;
        }
    }
    ctx->pc = 0x208B80u;
label_208b80:
    // 0x208b80: 0xc0f5240  jal         func_3D4900
label_208b84:
    if (ctx->pc == 0x208B84u) {
        ctx->pc = 0x208B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B80u;
        // 0x208b84: 0x2d42018  mult        $a0, $s6, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B88u;
        goto label_208b88;
    }
    ctx->pc = 0x208B80u;
    SET_GPR_U32(ctx, 31, 0x208B88u);
    ctx->pc = 0x208B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208B80u;
    // 0x208b84: 0x2d42018  mult        $a0, $s6, $s4 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x208B80u, 0x208B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208B88u;
label_208b88:
    // 0x208b88: 0x10000003  b           . + 4 + (0x3 << 2)
label_208b8c:
    if (ctx->pc == 0x208B8Cu) {
        ctx->pc = 0x208B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B88u;
        // 0x208b8c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208B90u;
        goto label_208b90;
    }
    ctx->pc = 0x208B88u;
    {
        const bool branch_taken_0x208b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B88u;
        // 0x208b8c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b88) {
            ctx->pc = 0x208B98u;
            goto label_208b98;
        }
    }
    ctx->pc = 0x208B90u;
label_208b90:
    // 0x208b90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x208b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208b94:
    // 0x208b94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x208b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208b98:
    // 0x208b98: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x208b98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208b9c:
    // 0x208b9c: 0x1212000f  beq         $s0, $s2, . + 4 + (0xF << 2)
label_208ba0:
    if (ctx->pc == 0x208BA0u) {
        ctx->pc = 0x208BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B9Cu;
        // 0x208ba0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BA4u;
        goto label_208ba4;
    }
    ctx->pc = 0x208B9Cu;
    {
        const bool branch_taken_0x208b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x208BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208B9Cu;
        // 0x208ba0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208b9c) {
            ctx->pc = 0x208BDCu;
            goto label_208bdc;
        }
    }
    ctx->pc = 0x208BA4u;
label_208ba4:
    // 0x208ba4: 0x0  nop
    ctx->pc = 0x208ba4u;
    // NOP
label_208ba8:
    // 0x208ba8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_208bac:
    if (ctx->pc == 0x208BACu) {
        ctx->pc = 0x208BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BA8u;
        // 0x208bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BB0u;
        goto label_208bb0;
    }
    ctx->pc = 0x208BA8u;
    {
        const bool branch_taken_0x208ba8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BA8u;
        // 0x208bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ba8) {
            ctx->pc = 0x208BD0u;
            goto label_208bd0;
        }
    }
    ctx->pc = 0x208BB0u;
label_208bb0:
    // 0x208bb0: 0xc0d7394  jal         func_35CE50
label_208bb4:
    if (ctx->pc == 0x208BB4u) {
        ctx->pc = 0x208BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BB0u;
        // 0x208bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BB8u;
        goto label_208bb8;
    }
    ctx->pc = 0x208BB0u;
    SET_GPR_U32(ctx, 31, 0x208BB8u);
    ctx->pc = 0x208BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208BB0u;
    // 0x208bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x208BB0u, 0x208BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BB8u;
label_208bb8:
    // 0x208bb8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x208bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_208bbc:
    // 0x208bbc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x208bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_208bc0:
    // 0x208bc0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x208bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_208bc4:
    // 0x208bc4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x208bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_208bc8:
    // 0x208bc8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x208bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_208bcc:
    // 0x208bcc: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x208bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_208bd0:
    // 0x208bd0: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x208bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_208bd4:
    // 0x208bd4: 0x1612fff4  bne         $s0, $s2, . + 4 + (-0xC << 2)
label_208bd8:
    if (ctx->pc == 0x208BD8u) {
        ctx->pc = 0x208BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BD4u;
        // 0x208bd8: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BDCu;
        goto label_208bdc;
    }
    ctx->pc = 0x208BD4u;
    {
        const bool branch_taken_0x208bd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x208BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BD4u;
        // 0x208bd8: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bd4) {
            ctx->pc = 0x208BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208ba8;
        }
    }
    ctx->pc = 0x208BDCu;
label_208bdc:
    // 0x208bdc: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x208bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_208be0:
    // 0x208be0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208be4:
    // 0x208be4: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_208be8:
    if (ctx->pc == 0x208BE8u) {
        ctx->pc = 0x208BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BE4u;
        // 0x208be8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BECu;
        goto label_208bec;
    }
    ctx->pc = 0x208BE4u;
    {
        const bool branch_taken_0x208be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x208BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BE4u;
        // 0x208be8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208be4) {
            ctx->pc = 0x208C1Cu;
            goto label_208c1c;
        }
    }
    ctx->pc = 0x208BECu;
label_208bec:
    // 0x208bec: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_208bf0:
    if (ctx->pc == 0x208BF0u) {
        ctx->pc = 0x208BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BECu;
        // 0x208bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BF4u;
        goto label_208bf4;
    }
    ctx->pc = 0x208BECu;
    {
        const bool branch_taken_0x208bec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x208BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BECu;
        // 0x208bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bec) {
            ctx->pc = 0x208C14u;
            goto label_208c14;
        }
    }
    ctx->pc = 0x208BF4u;
label_208bf4:
    // 0x208bf4: 0xc0d7394  jal         func_35CE50
label_208bf8:
    if (ctx->pc == 0x208BF8u) {
        ctx->pc = 0x208BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BF4u;
        // 0x208bf8: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208BFCu;
        goto label_208bfc;
    }
    ctx->pc = 0x208BF4u;
    SET_GPR_U32(ctx, 31, 0x208BFCu);
    ctx->pc = 0x208BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208BF4u;
    // 0x208bf8: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x208BF4u, 0x208BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208BFCu;
label_208bfc:
    // 0x208bfc: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x208bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_208c00:
    // 0x208c00: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x208c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_208c04:
    // 0x208c04: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x208c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_208c08:
    // 0x208c08: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x208c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_208c0c:
    // 0x208c0c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x208c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_208c10:
    // 0x208c10: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x208c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_208c14:
    // 0x208c14: 0x10000012  b           . + 4 + (0x12 << 2)
label_208c18:
    if (ctx->pc == 0x208C18u) {
        ctx->pc = 0x208C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C14u;
        // 0x208c18: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C1Cu;
        goto label_208c1c;
    }
    ctx->pc = 0x208C14u;
    {
        const bool branch_taken_0x208c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C14u;
        // 0x208c18: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c14) {
            ctx->pc = 0x208C60u;
            goto label_208c60;
        }
    }
    ctx->pc = 0x208C1Cu;
label_208c1c:
    // 0x208c1c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_208c20:
    if (ctx->pc == 0x208C20u) {
        ctx->pc = 0x208C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C1Cu;
        // 0x208c20: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C24u;
        goto label_208c24;
    }
    ctx->pc = 0x208C1Cu;
    {
        const bool branch_taken_0x208c1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C1Cu;
        // 0x208c20: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c1c) {
            ctx->pc = 0x208C5Cu;
            goto label_208c5c;
        }
    }
    ctx->pc = 0x208C24u;
label_208c24:
    // 0x208c24: 0x0  nop
    ctx->pc = 0x208c24u;
    // NOP
label_208c28:
    // 0x208c28: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_208c2c:
    if (ctx->pc == 0x208C2Cu) {
        ctx->pc = 0x208C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C28u;
        // 0x208c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C30u;
        goto label_208c30;
    }
    ctx->pc = 0x208C28u;
    {
        const bool branch_taken_0x208c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C28u;
        // 0x208c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c28) {
            ctx->pc = 0x208C50u;
            goto label_208c50;
        }
    }
    ctx->pc = 0x208C30u;
label_208c30:
    // 0x208c30: 0xc0d7394  jal         func_35CE50
label_208c34:
    if (ctx->pc == 0x208C34u) {
        ctx->pc = 0x208C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C30u;
        // 0x208c34: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C38u;
        goto label_208c38;
    }
    ctx->pc = 0x208C30u;
    SET_GPR_U32(ctx, 31, 0x208C38u);
    ctx->pc = 0x208C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C30u;
    // 0x208c34: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x208C30u, 0x208C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C38u;
label_208c38:
    // 0x208c38: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x208c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_208c3c:
    // 0x208c3c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x208c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_208c40:
    // 0x208c40: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x208c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_208c44:
    // 0x208c44: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x208c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_208c48:
    // 0x208c48: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x208c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_208c4c:
    // 0x208c4c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x208c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_208c50:
    // 0x208c50: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x208c50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_208c54:
    // 0x208c54: 0x1640fff4  bnez        $s2, . + 4 + (-0xC << 2)
label_208c58:
    if (ctx->pc == 0x208C58u) {
        ctx->pc = 0x208C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C54u;
        // 0x208c58: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C5Cu;
        goto label_208c5c;
    }
    ctx->pc = 0x208C54u;
    {
        const bool branch_taken_0x208c54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x208C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C54u;
        // 0x208c58: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c54) {
            ctx->pc = 0x208C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208c28;
        }
    }
    ctx->pc = 0x208C5Cu;
label_208c5c:
    // 0x208c5c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x208c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208c60:
    // 0x208c60: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x208c60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_208c64:
    // 0x208c64: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x208c64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208c68:
    // 0x208c68: 0x5212000a  beql        $s0, $s2, . + 4 + (0xA << 2)
label_208c6c:
    if (ctx->pc == 0x208C6Cu) {
        ctx->pc = 0x208C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C68u;
        // 0x208c6c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C70u;
        goto label_208c70;
    }
    ctx->pc = 0x208C68u;
    {
        const bool branch_taken_0x208c68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x208c68) {
            ctx->pc = 0x208C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208C68u;
            // 0x208c6c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208C94u;
            goto label_208c94;
        }
    }
    ctx->pc = 0x208C70u;
label_208c70:
    // 0x208c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_208c74:
    // 0x208c74: 0x0  nop
    ctx->pc = 0x208c74u;
    // NOP
label_208c78:
    // 0x208c78: 0xc0d7412  jal         func_35D048
label_208c7c:
    if (ctx->pc == 0x208C7Cu) {
        ctx->pc = 0x208C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C78u;
        // 0x208c7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C80u;
        goto label_208c80;
    }
    ctx->pc = 0x208C78u;
    SET_GPR_U32(ctx, 31, 0x208C80u);
    ctx->pc = 0x208C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208C78u;
    // 0x208c7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x208C78u, 0x208C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208C80u;
label_208c80:
    // 0x208c80: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x208c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_208c84:
    // 0x208c84: 0x0  nop
    ctx->pc = 0x208c84u;
    // NOP
label_208c88:
    // 0x208c88: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_208c8c:
    if (ctx->pc == 0x208C8Cu) {
        ctx->pc = 0x208C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C88u;
        // 0x208c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C90u;
        goto label_208c90;
    }
    ctx->pc = 0x208C88u;
    {
        const bool branch_taken_0x208c88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x208C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C88u;
        // 0x208c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c88) {
            ctx->pc = 0x208C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208c78;
        }
    }
    ctx->pc = 0x208C90u;
label_208c90:
    // 0x208c90: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x208c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_208c94:
    // 0x208c94: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_208c98:
    if (ctx->pc == 0x208C98u) {
        ctx->pc = 0x208C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C94u;
        // 0x208c98: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208C9Cu;
        goto label_208c9c;
    }
    ctx->pc = 0x208C94u;
    {
        const bool branch_taken_0x208c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C94u;
        // 0x208c98: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c94) {
            ctx->pc = 0x208CA8u;
            goto label_208ca8;
        }
    }
    ctx->pc = 0x208C9Cu;
label_208c9c:
    // 0x208c9c: 0xc0f5222  jal         func_3D4888
label_208ca0:
    if (ctx->pc == 0x208CA0u) {
        ctx->pc = 0x208CA4u;
        goto label_208ca4;
    }
    ctx->pc = 0x208C9Cu;
    SET_GPR_U32(ctx, 31, 0x208CA4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x208C9Cu, 0x208CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CA4u;
label_208ca4:
    // 0x208ca4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x208ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_208ca8:
    // 0x208ca8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x208ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_208cac:
    // 0x208cac: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x208cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_208cb0:
    // 0x208cb0: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x208cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_208cb4:
    // 0x208cb4: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x208cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_208cb8:
    // 0x208cb8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x208cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_208cbc:
    // 0x208cbc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x208cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_208cc0:
    // 0x208cc0: 0xc0d7412  jal         func_35D048
label_208cc4:
    if (ctx->pc == 0x208CC4u) {
        ctx->pc = 0x208CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CC0u;
        // 0x208cc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CC8u;
        goto label_208cc8;
    }
    ctx->pc = 0x208CC0u;
    SET_GPR_U32(ctx, 31, 0x208CC8u);
    ctx->pc = 0x208CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CC0u;
    // 0x208cc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x208CC0u, 0x208CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CC8u;
label_208cc8:
    // 0x208cc8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x208cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_208ccc:
    // 0x208ccc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x208cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_208cd0:
    // 0x208cd0: 0x40f809  jalr        $v0
label_208cd4:
    if (ctx->pc == 0x208CD4u) {
        ctx->pc = 0x208CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CD0u;
        // 0x208cd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CD8u;
        goto label_208cd8;
    }
    ctx->pc = 0x208CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208CD8u);
        ctx->pc = 0x208CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CD0u;
        // 0x208cd4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208CD0u, 0x208CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208CD8u;
label_208cd8:
    // 0x208cd8: 0x1040fed5  beqz        $v0, . + 4 + (-0x12B << 2)
label_208cdc:
    if (ctx->pc == 0x208CDCu) {
        ctx->pc = 0x208CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CD8u;
        // 0x208cdc: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CE0u;
        goto label_208ce0;
    }
    ctx->pc = 0x208CD8u;
    {
        const bool branch_taken_0x208cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CD8u;
        // 0x208cdc: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cd8) {
            ctx->pc = 0x208830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208830;
        }
    }
    ctx->pc = 0x208CE0u;
label_208ce0:
    // 0x208ce0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x208ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_208ce4:
    // 0x208ce4: 0x40f809  jalr        $v0
label_208ce8:
    if (ctx->pc == 0x208CE8u) {
        ctx->pc = 0x208CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CE4u;
        // 0x208ce8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CECu;
        goto label_208cec;
    }
    ctx->pc = 0x208CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208CECu);
        ctx->pc = 0x208CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CE4u;
        // 0x208ce8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208CE4u, 0x208CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208CECu;
label_208cec:
    // 0x208cec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x208cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_208cf0:
    // 0x208cf0: 0xc0d7412  jal         func_35D048
label_208cf4:
    if (ctx->pc == 0x208CF4u) {
        ctx->pc = 0x208CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CF0u;
        // 0x208cf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208CF8u;
        goto label_208cf8;
    }
    ctx->pc = 0x208CF0u;
    SET_GPR_U32(ctx, 31, 0x208CF8u);
    ctx->pc = 0x208CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208CF0u;
    // 0x208cf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x208CF0u, 0x208CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208CF8u;
label_208cf8:
    // 0x208cf8: 0xdfb001a0  ld          $s0, 0x1A0($sp)
    ctx->pc = 0x208cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_208cfc:
    // 0x208cfc: 0xdfb101a8  ld          $s1, 0x1A8($sp)
    ctx->pc = 0x208cfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 424)));
label_208d00:
    // 0x208d00: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x208d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_208d04:
    // 0x208d04: 0xdfb301b8  ld          $s3, 0x1B8($sp)
    ctx->pc = 0x208d04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 440)));
label_208d08:
    // 0x208d08: 0xdfb401c0  ld          $s4, 0x1C0($sp)
    ctx->pc = 0x208d08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_208d0c:
    // 0x208d0c: 0xdfb501c8  ld          $s5, 0x1C8($sp)
    ctx->pc = 0x208d0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 456)));
label_208d10:
    // 0x208d10: 0xdfb601d0  ld          $s6, 0x1D0($sp)
    ctx->pc = 0x208d10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 464)));
label_208d14:
    // 0x208d14: 0xdfb701d8  ld          $s7, 0x1D8($sp)
    ctx->pc = 0x208d14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 472)));
label_208d18:
    // 0x208d18: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x208d18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
label_208d1c:
    // 0x208d1c: 0xdfbf01e8  ld          $ra, 0x1E8($sp)
    ctx->pc = 0x208d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 488)));
label_208d20:
    // 0x208d20: 0x3e00008  jr          $ra
label_208d24:
    if (ctx->pc == 0x208D24u) {
        ctx->pc = 0x208D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D20u;
        // 0x208d24: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208D28u;
        goto label_fallthrough_0x208d20;
    }
    ctx->pc = 0x208D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D20u;
        // 0x208d24: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x208d20:
    ctx->pc = 0x208D28u;
}
