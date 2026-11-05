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

// Function: sub_003D7920
// Address: 0x3d7920 - 0x3d7de8
void sub_003D7920_0x3d7920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7920_0x3d7920");
#endif

    switch (ctx->pc) {
        case 0x3d7920u: goto label_3d7920;
        case 0x3d7924u: goto label_3d7924;
        case 0x3d7928u: goto label_3d7928;
        case 0x3d792cu: goto label_3d792c;
        case 0x3d7930u: goto label_3d7930;
        case 0x3d7934u: goto label_3d7934;
        case 0x3d7938u: goto label_3d7938;
        case 0x3d793cu: goto label_3d793c;
        case 0x3d7940u: goto label_3d7940;
        case 0x3d7944u: goto label_3d7944;
        case 0x3d7948u: goto label_3d7948;
        case 0x3d794cu: goto label_3d794c;
        case 0x3d7950u: goto label_3d7950;
        case 0x3d7954u: goto label_3d7954;
        case 0x3d7958u: goto label_3d7958;
        case 0x3d795cu: goto label_3d795c;
        case 0x3d7960u: goto label_3d7960;
        case 0x3d7964u: goto label_3d7964;
        case 0x3d7968u: goto label_3d7968;
        case 0x3d796cu: goto label_3d796c;
        case 0x3d7970u: goto label_3d7970;
        case 0x3d7974u: goto label_3d7974;
        case 0x3d7978u: goto label_3d7978;
        case 0x3d797cu: goto label_3d797c;
        case 0x3d7980u: goto label_3d7980;
        case 0x3d7984u: goto label_3d7984;
        case 0x3d7988u: goto label_3d7988;
        case 0x3d798cu: goto label_3d798c;
        case 0x3d7990u: goto label_3d7990;
        case 0x3d7994u: goto label_3d7994;
        case 0x3d7998u: goto label_3d7998;
        case 0x3d799cu: goto label_3d799c;
        case 0x3d79a0u: goto label_3d79a0;
        case 0x3d79a4u: goto label_3d79a4;
        case 0x3d79a8u: goto label_3d79a8;
        case 0x3d79acu: goto label_3d79ac;
        case 0x3d79b0u: goto label_3d79b0;
        case 0x3d79b4u: goto label_3d79b4;
        case 0x3d79b8u: goto label_3d79b8;
        case 0x3d79bcu: goto label_3d79bc;
        case 0x3d79c0u: goto label_3d79c0;
        case 0x3d79c4u: goto label_3d79c4;
        case 0x3d79c8u: goto label_3d79c8;
        case 0x3d79ccu: goto label_3d79cc;
        case 0x3d79d0u: goto label_3d79d0;
        case 0x3d79d4u: goto label_3d79d4;
        case 0x3d79d8u: goto label_3d79d8;
        case 0x3d79dcu: goto label_3d79dc;
        case 0x3d79e0u: goto label_3d79e0;
        case 0x3d79e4u: goto label_3d79e4;
        case 0x3d79e8u: goto label_3d79e8;
        case 0x3d79ecu: goto label_3d79ec;
        case 0x3d79f0u: goto label_3d79f0;
        case 0x3d79f4u: goto label_3d79f4;
        case 0x3d79f8u: goto label_3d79f8;
        case 0x3d79fcu: goto label_3d79fc;
        case 0x3d7a00u: goto label_3d7a00;
        case 0x3d7a04u: goto label_3d7a04;
        case 0x3d7a08u: goto label_3d7a08;
        case 0x3d7a0cu: goto label_3d7a0c;
        case 0x3d7a10u: goto label_3d7a10;
        case 0x3d7a14u: goto label_3d7a14;
        case 0x3d7a18u: goto label_3d7a18;
        case 0x3d7a1cu: goto label_3d7a1c;
        case 0x3d7a20u: goto label_3d7a20;
        case 0x3d7a24u: goto label_3d7a24;
        case 0x3d7a28u: goto label_3d7a28;
        case 0x3d7a2cu: goto label_3d7a2c;
        case 0x3d7a30u: goto label_3d7a30;
        case 0x3d7a34u: goto label_3d7a34;
        case 0x3d7a38u: goto label_3d7a38;
        case 0x3d7a3cu: goto label_3d7a3c;
        case 0x3d7a40u: goto label_3d7a40;
        case 0x3d7a44u: goto label_3d7a44;
        case 0x3d7a48u: goto label_3d7a48;
        case 0x3d7a4cu: goto label_3d7a4c;
        case 0x3d7a50u: goto label_3d7a50;
        case 0x3d7a54u: goto label_3d7a54;
        case 0x3d7a58u: goto label_3d7a58;
        case 0x3d7a5cu: goto label_3d7a5c;
        case 0x3d7a60u: goto label_3d7a60;
        case 0x3d7a64u: goto label_3d7a64;
        case 0x3d7a68u: goto label_3d7a68;
        case 0x3d7a6cu: goto label_3d7a6c;
        case 0x3d7a70u: goto label_3d7a70;
        case 0x3d7a74u: goto label_3d7a74;
        case 0x3d7a78u: goto label_3d7a78;
        case 0x3d7a7cu: goto label_3d7a7c;
        case 0x3d7a80u: goto label_3d7a80;
        case 0x3d7a84u: goto label_3d7a84;
        case 0x3d7a88u: goto label_3d7a88;
        case 0x3d7a8cu: goto label_3d7a8c;
        case 0x3d7a90u: goto label_3d7a90;
        case 0x3d7a94u: goto label_3d7a94;
        case 0x3d7a98u: goto label_3d7a98;
        case 0x3d7a9cu: goto label_3d7a9c;
        case 0x3d7aa0u: goto label_3d7aa0;
        case 0x3d7aa4u: goto label_3d7aa4;
        case 0x3d7aa8u: goto label_3d7aa8;
        case 0x3d7aacu: goto label_3d7aac;
        case 0x3d7ab0u: goto label_3d7ab0;
        case 0x3d7ab4u: goto label_3d7ab4;
        case 0x3d7ab8u: goto label_3d7ab8;
        case 0x3d7abcu: goto label_3d7abc;
        case 0x3d7ac0u: goto label_3d7ac0;
        case 0x3d7ac4u: goto label_3d7ac4;
        case 0x3d7ac8u: goto label_3d7ac8;
        case 0x3d7accu: goto label_3d7acc;
        case 0x3d7ad0u: goto label_3d7ad0;
        case 0x3d7ad4u: goto label_3d7ad4;
        case 0x3d7ad8u: goto label_3d7ad8;
        case 0x3d7adcu: goto label_3d7adc;
        case 0x3d7ae0u: goto label_3d7ae0;
        case 0x3d7ae4u: goto label_3d7ae4;
        case 0x3d7ae8u: goto label_3d7ae8;
        case 0x3d7aecu: goto label_3d7aec;
        case 0x3d7af0u: goto label_3d7af0;
        case 0x3d7af4u: goto label_3d7af4;
        case 0x3d7af8u: goto label_3d7af8;
        case 0x3d7afcu: goto label_3d7afc;
        case 0x3d7b00u: goto label_3d7b00;
        case 0x3d7b04u: goto label_3d7b04;
        case 0x3d7b08u: goto label_3d7b08;
        case 0x3d7b0cu: goto label_3d7b0c;
        case 0x3d7b10u: goto label_3d7b10;
        case 0x3d7b14u: goto label_3d7b14;
        case 0x3d7b18u: goto label_3d7b18;
        case 0x3d7b1cu: goto label_3d7b1c;
        case 0x3d7b20u: goto label_3d7b20;
        case 0x3d7b24u: goto label_3d7b24;
        case 0x3d7b28u: goto label_3d7b28;
        case 0x3d7b2cu: goto label_3d7b2c;
        case 0x3d7b30u: goto label_3d7b30;
        case 0x3d7b34u: goto label_3d7b34;
        case 0x3d7b38u: goto label_3d7b38;
        case 0x3d7b3cu: goto label_3d7b3c;
        case 0x3d7b40u: goto label_3d7b40;
        case 0x3d7b44u: goto label_3d7b44;
        case 0x3d7b48u: goto label_3d7b48;
        case 0x3d7b4cu: goto label_3d7b4c;
        case 0x3d7b50u: goto label_3d7b50;
        case 0x3d7b54u: goto label_3d7b54;
        case 0x3d7b58u: goto label_3d7b58;
        case 0x3d7b5cu: goto label_3d7b5c;
        case 0x3d7b60u: goto label_3d7b60;
        case 0x3d7b64u: goto label_3d7b64;
        case 0x3d7b68u: goto label_3d7b68;
        case 0x3d7b6cu: goto label_3d7b6c;
        case 0x3d7b70u: goto label_3d7b70;
        case 0x3d7b74u: goto label_3d7b74;
        case 0x3d7b78u: goto label_3d7b78;
        case 0x3d7b7cu: goto label_3d7b7c;
        case 0x3d7b80u: goto label_3d7b80;
        case 0x3d7b84u: goto label_3d7b84;
        case 0x3d7b88u: goto label_3d7b88;
        case 0x3d7b8cu: goto label_3d7b8c;
        case 0x3d7b90u: goto label_3d7b90;
        case 0x3d7b94u: goto label_3d7b94;
        case 0x3d7b98u: goto label_3d7b98;
        case 0x3d7b9cu: goto label_3d7b9c;
        case 0x3d7ba0u: goto label_3d7ba0;
        case 0x3d7ba4u: goto label_3d7ba4;
        case 0x3d7ba8u: goto label_3d7ba8;
        case 0x3d7bacu: goto label_3d7bac;
        case 0x3d7bb0u: goto label_3d7bb0;
        case 0x3d7bb4u: goto label_3d7bb4;
        case 0x3d7bb8u: goto label_3d7bb8;
        case 0x3d7bbcu: goto label_3d7bbc;
        case 0x3d7bc0u: goto label_3d7bc0;
        case 0x3d7bc4u: goto label_3d7bc4;
        case 0x3d7bc8u: goto label_3d7bc8;
        case 0x3d7bccu: goto label_3d7bcc;
        case 0x3d7bd0u: goto label_3d7bd0;
        case 0x3d7bd4u: goto label_3d7bd4;
        case 0x3d7bd8u: goto label_3d7bd8;
        case 0x3d7bdcu: goto label_3d7bdc;
        case 0x3d7be0u: goto label_3d7be0;
        case 0x3d7be4u: goto label_3d7be4;
        case 0x3d7be8u: goto label_3d7be8;
        case 0x3d7becu: goto label_3d7bec;
        case 0x3d7bf0u: goto label_3d7bf0;
        case 0x3d7bf4u: goto label_3d7bf4;
        case 0x3d7bf8u: goto label_3d7bf8;
        case 0x3d7bfcu: goto label_3d7bfc;
        case 0x3d7c00u: goto label_3d7c00;
        case 0x3d7c04u: goto label_3d7c04;
        case 0x3d7c08u: goto label_3d7c08;
        case 0x3d7c0cu: goto label_3d7c0c;
        case 0x3d7c10u: goto label_3d7c10;
        case 0x3d7c14u: goto label_3d7c14;
        case 0x3d7c18u: goto label_3d7c18;
        case 0x3d7c1cu: goto label_3d7c1c;
        case 0x3d7c20u: goto label_3d7c20;
        case 0x3d7c24u: goto label_3d7c24;
        case 0x3d7c28u: goto label_3d7c28;
        case 0x3d7c2cu: goto label_3d7c2c;
        case 0x3d7c30u: goto label_3d7c30;
        case 0x3d7c34u: goto label_3d7c34;
        case 0x3d7c38u: goto label_3d7c38;
        case 0x3d7c3cu: goto label_3d7c3c;
        case 0x3d7c40u: goto label_3d7c40;
        case 0x3d7c44u: goto label_3d7c44;
        case 0x3d7c48u: goto label_3d7c48;
        case 0x3d7c4cu: goto label_3d7c4c;
        case 0x3d7c50u: goto label_3d7c50;
        case 0x3d7c54u: goto label_3d7c54;
        case 0x3d7c58u: goto label_3d7c58;
        case 0x3d7c5cu: goto label_3d7c5c;
        case 0x3d7c60u: goto label_3d7c60;
        case 0x3d7c64u: goto label_3d7c64;
        case 0x3d7c68u: goto label_3d7c68;
        case 0x3d7c6cu: goto label_3d7c6c;
        case 0x3d7c70u: goto label_3d7c70;
        case 0x3d7c74u: goto label_3d7c74;
        case 0x3d7c78u: goto label_3d7c78;
        case 0x3d7c7cu: goto label_3d7c7c;
        case 0x3d7c80u: goto label_3d7c80;
        case 0x3d7c84u: goto label_3d7c84;
        case 0x3d7c88u: goto label_3d7c88;
        case 0x3d7c8cu: goto label_3d7c8c;
        case 0x3d7c90u: goto label_3d7c90;
        case 0x3d7c94u: goto label_3d7c94;
        case 0x3d7c98u: goto label_3d7c98;
        case 0x3d7c9cu: goto label_3d7c9c;
        case 0x3d7ca0u: goto label_3d7ca0;
        case 0x3d7ca4u: goto label_3d7ca4;
        case 0x3d7ca8u: goto label_3d7ca8;
        case 0x3d7cacu: goto label_3d7cac;
        case 0x3d7cb0u: goto label_3d7cb0;
        case 0x3d7cb4u: goto label_3d7cb4;
        case 0x3d7cb8u: goto label_3d7cb8;
        case 0x3d7cbcu: goto label_3d7cbc;
        case 0x3d7cc0u: goto label_3d7cc0;
        case 0x3d7cc4u: goto label_3d7cc4;
        case 0x3d7cc8u: goto label_3d7cc8;
        case 0x3d7cccu: goto label_3d7ccc;
        case 0x3d7cd0u: goto label_3d7cd0;
        case 0x3d7cd4u: goto label_3d7cd4;
        case 0x3d7cd8u: goto label_3d7cd8;
        case 0x3d7cdcu: goto label_3d7cdc;
        case 0x3d7ce0u: goto label_3d7ce0;
        case 0x3d7ce4u: goto label_3d7ce4;
        case 0x3d7ce8u: goto label_3d7ce8;
        case 0x3d7cecu: goto label_3d7cec;
        case 0x3d7cf0u: goto label_3d7cf0;
        case 0x3d7cf4u: goto label_3d7cf4;
        case 0x3d7cf8u: goto label_3d7cf8;
        case 0x3d7cfcu: goto label_3d7cfc;
        case 0x3d7d00u: goto label_3d7d00;
        case 0x3d7d04u: goto label_3d7d04;
        case 0x3d7d08u: goto label_3d7d08;
        case 0x3d7d0cu: goto label_3d7d0c;
        case 0x3d7d10u: goto label_3d7d10;
        case 0x3d7d14u: goto label_3d7d14;
        case 0x3d7d18u: goto label_3d7d18;
        case 0x3d7d1cu: goto label_3d7d1c;
        case 0x3d7d20u: goto label_3d7d20;
        case 0x3d7d24u: goto label_3d7d24;
        case 0x3d7d28u: goto label_3d7d28;
        case 0x3d7d2cu: goto label_3d7d2c;
        case 0x3d7d30u: goto label_3d7d30;
        case 0x3d7d34u: goto label_3d7d34;
        case 0x3d7d38u: goto label_3d7d38;
        case 0x3d7d3cu: goto label_3d7d3c;
        case 0x3d7d40u: goto label_3d7d40;
        case 0x3d7d44u: goto label_3d7d44;
        case 0x3d7d48u: goto label_3d7d48;
        case 0x3d7d4cu: goto label_3d7d4c;
        case 0x3d7d50u: goto label_3d7d50;
        case 0x3d7d54u: goto label_3d7d54;
        case 0x3d7d58u: goto label_3d7d58;
        case 0x3d7d5cu: goto label_3d7d5c;
        case 0x3d7d60u: goto label_3d7d60;
        case 0x3d7d64u: goto label_3d7d64;
        case 0x3d7d68u: goto label_3d7d68;
        case 0x3d7d6cu: goto label_3d7d6c;
        case 0x3d7d70u: goto label_3d7d70;
        case 0x3d7d74u: goto label_3d7d74;
        case 0x3d7d78u: goto label_3d7d78;
        case 0x3d7d7cu: goto label_3d7d7c;
        case 0x3d7d80u: goto label_3d7d80;
        case 0x3d7d84u: goto label_3d7d84;
        case 0x3d7d88u: goto label_3d7d88;
        case 0x3d7d8cu: goto label_3d7d8c;
        case 0x3d7d90u: goto label_3d7d90;
        case 0x3d7d94u: goto label_3d7d94;
        case 0x3d7d98u: goto label_3d7d98;
        case 0x3d7d9cu: goto label_3d7d9c;
        case 0x3d7da0u: goto label_3d7da0;
        case 0x3d7da4u: goto label_3d7da4;
        case 0x3d7da8u: goto label_3d7da8;
        case 0x3d7dacu: goto label_3d7dac;
        case 0x3d7db0u: goto label_3d7db0;
        case 0x3d7db4u: goto label_3d7db4;
        case 0x3d7db8u: goto label_3d7db8;
        case 0x3d7dbcu: goto label_3d7dbc;
        case 0x3d7dc0u: goto label_3d7dc0;
        case 0x3d7dc4u: goto label_3d7dc4;
        case 0x3d7dc8u: goto label_3d7dc8;
        case 0x3d7dccu: goto label_3d7dcc;
        case 0x3d7dd0u: goto label_3d7dd0;
        case 0x3d7dd4u: goto label_3d7dd4;
        case 0x3d7dd8u: goto label_3d7dd8;
        case 0x3d7ddcu: goto label_3d7ddc;
        case 0x3d7de0u: goto label_3d7de0;
        case 0x3d7de4u: goto label_3d7de4;
        default: break;
    }

    ctx->pc = 0x3d7920u;

label_3d7920:
    // 0x3d7920: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3d7920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3d7924:
    // 0x3d7924: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3d7924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_3d7928:
    // 0x3d7928: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3d7928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3d792c:
    // 0x3d792c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d792cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7930:
    // 0x3d7930: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x3d7930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_3d7934:
    // 0x3d7934: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d7934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d7938:
    // 0x3d7938: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3d7938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3d793c:
    // 0x3d793c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3d793cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d7940:
    // 0x3d7940: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x3d7940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_3d7944:
    // 0x3d7944: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x3d7944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_3d7948:
    // 0x3d7948: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x3d7948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_3d794c:
    // 0x3d794c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3d794cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_3d7950:
    // 0x3d7950: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x3d7950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_3d7954:
    // 0x3d7954: 0xc0f5c96  jal         func_3D7258
label_3d7958:
    if (ctx->pc == 0x3D7958u) {
        ctx->pc = 0x3D7958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7954u;
        // 0x3d7958: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D795Cu;
        goto label_3d795c;
    }
    ctx->pc = 0x3D7954u;
    SET_GPR_U32(ctx, 31, 0x3D795Cu);
    ctx->pc = 0x3D7958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7954u;
    // 0x3d7958: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7258u, 0x3D7954u, 0x3D795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D795Cu;
label_3d795c:
    // 0x3d795c: 0x14400116  bnez        $v0, . + 4 + (0x116 << 2)
label_3d7960:
    if (ctx->pc == 0x3D7960u) {
        ctx->pc = 0x3D7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D795Cu;
        // 0x3d7960: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7964u;
        goto label_3d7964;
    }
    ctx->pc = 0x3D795Cu;
    {
        const bool branch_taken_0x3d795c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D795Cu;
        // 0x3d7960: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d795c) {
            ctx->pc = 0x3D7DB8u;
            goto label_3d7db8;
        }
    }
    ctx->pc = 0x3D7964u;
label_3d7964:
    // 0x3d7964: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_3d7968:
    if (ctx->pc == 0x3D7968u) {
        ctx->pc = 0x3D7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7964u;
        // 0x3d7968: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D796Cu;
        goto label_3d796c;
    }
    ctx->pc = 0x3D7964u;
    {
        const bool branch_taken_0x3d7964 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7964u;
        // 0x3d7968: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7964) {
            ctx->pc = 0x3D7974u;
            goto label_3d7974;
        }
    }
    ctx->pc = 0x3D796Cu;
label_3d796c:
    // 0x3d796c: 0x1000000d  b           . + 4 + (0xD << 2)
label_3d7970:
    if (ctx->pc == 0x3D7970u) {
        ctx->pc = 0x3D7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D796Cu;
        // 0x3d7970: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7974u;
        goto label_3d7974;
    }
    ctx->pc = 0x3D796Cu;
    {
        const bool branch_taken_0x3d796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D796Cu;
        // 0x3d7970: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d796c) {
            ctx->pc = 0x3D79A4u;
            goto label_3d79a4;
        }
    }
    ctx->pc = 0x3D7974u;
label_3d7974:
    // 0x3d7974: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d7974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d7978:
    // 0x3d7978: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d7978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3d797c:
    // 0x3d797c: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d797cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
label_3d7980:
    // 0x3d7980: 0x24a576d8  addiu       $a1, $a1, 0x76D8
    ctx->pc = 0x3d7980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30424));
label_3d7984:
    // 0x3d7984: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7984u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7988:
    // 0x3d7988: 0x250878b8  addiu       $t0, $t0, 0x78B8
    ctx->pc = 0x3d7988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30904));
label_3d798c:
    // 0x3d798c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7990:
    // 0x3d7990: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7994:
    // 0x3d7994: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x3d7994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3d7998:
    // 0x3d7998: 0xc0f5fc0  jal         func_3D7F00
label_3d799c:
    if (ctx->pc == 0x3D799Cu) {
        ctx->pc = 0x3D799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7998u;
        // 0x3d799c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79A0u;
        goto label_3d79a0;
    }
    ctx->pc = 0x3D7998u;
    SET_GPR_U32(ctx, 31, 0x3D79A0u);
    ctx->pc = 0x3D799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7998u;
    // 0x3d799c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7998u, 0x3D79A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D79A0u;
label_3d79a0:
    // 0x3d79a0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3d79a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d79a4:
    // 0x3d79a4: 0x5540007b  bnel        $t2, $zero, . + 4 + (0x7B << 2)
label_3d79a8:
    if (ctx->pc == 0x3D79A8u) {
        ctx->pc = 0x3D79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79A4u;
        // 0x3d79a8: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79ACu;
        goto label_3d79ac;
    }
    ctx->pc = 0x3D79A4u;
    {
        const bool branch_taken_0x3d79a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d79a4) {
            ctx->pc = 0x3D79A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D79A4u;
            // 0x3d79a8: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7B94u;
            goto label_3d7b94;
        }
    }
    ctx->pc = 0x3D79ACu;
label_3d79ac:
    // 0x3d79ac: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_3d79b0:
    if (ctx->pc == 0x3D79B0u) {
        ctx->pc = 0x3D79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79ACu;
        // 0x3d79b0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79B4u;
        goto label_3d79b4;
    }
    ctx->pc = 0x3D79ACu;
    {
        const bool branch_taken_0x3d79ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d79ac) {
            ctx->pc = 0x3D79B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D79ACu;
            // 0x3d79b0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D79BCu;
            goto label_3d79bc;
        }
    }
    ctx->pc = 0x3D79B4u;
label_3d79b4:
    // 0x3d79b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d79b8:
    if (ctx->pc == 0x3D79B8u) {
        ctx->pc = 0x3D79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79B4u;
        // 0x3d79b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79BCu;
        goto label_3d79bc;
    }
    ctx->pc = 0x3D79B4u;
    {
        const bool branch_taken_0x3d79b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79B4u;
        // 0x3d79b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d79b4) {
            ctx->pc = 0x3D79E8u;
            goto label_3d79e8;
        }
    }
    ctx->pc = 0x3D79BCu;
label_3d79bc:
    // 0x3d79bc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3d79bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3d79c0:
    // 0x3d79c0: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d79c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
label_3d79c4:
    // 0x3d79c4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3d79c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d79c8:
    // 0x3d79c8: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d79c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d79cc:
    // 0x3d79cc: 0x24a58608  addiu       $a1, $a1, -0x79F8
    ctx->pc = 0x3d79ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936072));
label_3d79d0:
    // 0x3d79d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d79d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d79d4:
    // 0x3d79d4: 0x250878b8  addiu       $t0, $t0, 0x78B8
    ctx->pc = 0x3d79d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30904));
label_3d79d8:
    // 0x3d79d8: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x3d79d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3d79dc:
    // 0x3d79dc: 0xc0f5fc0  jal         func_3D7F00
label_3d79e0:
    if (ctx->pc == 0x3D79E0u) {
        ctx->pc = 0x3D79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79DCu;
        // 0x3d79e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79E4u;
        goto label_3d79e4;
    }
    ctx->pc = 0x3D79DCu;
    SET_GPR_U32(ctx, 31, 0x3D79E4u);
    ctx->pc = 0x3D79E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D79DCu;
    // 0x3d79e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D79DCu, 0x3D79E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D79E4u;
label_3d79e4:
    // 0x3d79e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d79e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d79e8:
    // 0x3d79e8: 0x120000f3  beqz        $s0, . + 4 + (0xF3 << 2)
label_3d79ec:
    if (ctx->pc == 0x3D79ECu) {
        ctx->pc = 0x3D79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79E8u;
        // 0x3d79ec: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79F0u;
        goto label_3d79f0;
    }
    ctx->pc = 0x3D79E8u;
    {
        const bool branch_taken_0x3d79e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79E8u;
        // 0x3d79ec: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d79e8) {
            ctx->pc = 0x3D7DB8u;
            goto label_3d7db8;
        }
    }
    ctx->pc = 0x3D79F0u;
label_3d79f0:
    // 0x3d79f0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3d79f4:
    if (ctx->pc == 0x3D79F4u) {
        ctx->pc = 0x3D79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79F0u;
        // 0x3d79f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D79F8u;
        goto label_3d79f8;
    }
    ctx->pc = 0x3D79F0u;
    {
        const bool branch_taken_0x3d79f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D79F0u;
        // 0x3d79f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d79f0) {
            ctx->pc = 0x3D7A24u;
            goto label_3d7a24;
        }
    }
    ctx->pc = 0x3D79F8u;
label_3d79f8:
    // 0x3d79f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3d79f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3d79fc:
    // 0x3d79fc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3d79fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3d7a00:
    // 0x3d7a00: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d7a00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
label_3d7a04:
    // 0x3d7a04: 0x24a58608  addiu       $a1, $a1, -0x79F8
    ctx->pc = 0x3d7a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936072));
label_3d7a08:
    // 0x3d7a08: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7a08u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7a0c:
    // 0x3d7a0c: 0x250878b8  addiu       $t0, $t0, 0x78B8
    ctx->pc = 0x3d7a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30904));
label_3d7a10:
    // 0x3d7a10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7a14:
    // 0x3d7a14: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3d7a14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7a18:
    // 0x3d7a18: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x3d7a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_3d7a1c:
    // 0x3d7a1c: 0xc0f5fc0  jal         func_3D7F00
label_3d7a20:
    if (ctx->pc == 0x3D7A20u) {
        ctx->pc = 0x3D7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A1Cu;
        // 0x3d7a20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A24u;
        goto label_3d7a24;
    }
    ctx->pc = 0x3D7A1Cu;
    SET_GPR_U32(ctx, 31, 0x3D7A24u);
    ctx->pc = 0x3D7A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7A1Cu;
    // 0x3d7a20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7A1Cu, 0x3D7A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7A24u;
label_3d7a24:
    // 0x3d7a24: 0x504000e4  beql        $v0, $zero, . + 4 + (0xE4 << 2)
label_3d7a28:
    if (ctx->pc == 0x3D7A28u) {
        ctx->pc = 0x3D7A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A24u;
        // 0x3d7a28: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A2Cu;
        goto label_3d7a2c;
    }
    ctx->pc = 0x3D7A24u;
    {
        const bool branch_taken_0x3d7a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7a24) {
            ctx->pc = 0x3D7A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7A24u;
            // 0x3d7a28: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7DB8u;
            goto label_3d7db8;
        }
    }
    ctx->pc = 0x3D7A2Cu;
label_3d7a2c:
    // 0x3d7a2c: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x3d7a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d7a30:
    // 0x3d7a30: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3d7a30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d7a34:
    // 0x3d7a34: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_3d7a38:
    if (ctx->pc == 0x3D7A38u) {
        ctx->pc = 0x3D7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A34u;
        // 0x3d7a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A3Cu;
        goto label_3d7a3c;
    }
    ctx->pc = 0x3D7A34u;
    {
        const bool branch_taken_0x3d7a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A34u;
        // 0x3d7a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a34) {
            ctx->pc = 0x3D7A68u;
            goto label_3d7a68;
        }
    }
    ctx->pc = 0x3D7A3Cu;
label_3d7a3c:
    // 0x3d7a3c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d7a40:
    // 0x3d7a40: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3d7a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3d7a44:
    // 0x3d7a44: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d7a44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
label_3d7a48:
    // 0x3d7a48: 0x24a58598  addiu       $a1, $a1, -0x7A68
    ctx->pc = 0x3d7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935960));
label_3d7a4c:
    // 0x3d7a4c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7a4cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7a50:
    // 0x3d7a50: 0x250878b8  addiu       $t0, $t0, 0x78B8
    ctx->pc = 0x3d7a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30904));
label_3d7a54:
    // 0x3d7a54: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d7a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7a58:
    // 0x3d7a58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7a5c:
    // 0x3d7a5c: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x3d7a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3d7a60:
    // 0x3d7a60: 0xc0f5fc0  jal         func_3D7F00
label_3d7a64:
    if (ctx->pc == 0x3D7A64u) {
        ctx->pc = 0x3D7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A60u;
        // 0x3d7a64: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A68u;
        goto label_3d7a68;
    }
    ctx->pc = 0x3D7A60u;
    SET_GPR_U32(ctx, 31, 0x3D7A68u);
    ctx->pc = 0x3D7A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7A60u;
    // 0x3d7a64: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7A60u, 0x3D7A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7A68u;
label_3d7a68:
    // 0x3d7a68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3d7a6c:
    if (ctx->pc == 0x3D7A6Cu) {
        ctx->pc = 0x3D7A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A68u;
        // 0x3d7a6c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A70u;
        goto label_3d7a70;
    }
    ctx->pc = 0x3D7A68u;
    {
        const bool branch_taken_0x3d7a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A68u;
        // 0x3d7a6c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a68) {
            ctx->pc = 0x3D7A78u;
            goto label_3d7a78;
        }
    }
    ctx->pc = 0x3D7A70u;
label_3d7a70:
    // 0x3d7a70: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3d7a70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d7a74:
    // 0x3d7a74: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x3d7a74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d7a78:
    // 0x3d7a78: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3d7a7c:
    if (ctx->pc == 0x3D7A7Cu) {
        ctx->pc = 0x3D7A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A78u;
        // 0x3d7a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7A80u;
        goto label_3d7a80;
    }
    ctx->pc = 0x3D7A78u;
    {
        const bool branch_taken_0x3d7a78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7A78u;
        // 0x3d7a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7a78) {
            ctx->pc = 0x3D7AACu;
            goto label_3d7aac;
        }
    }
    ctx->pc = 0x3D7A80u;
label_3d7a80:
    // 0x3d7a80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3d7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3d7a84:
    // 0x3d7a84: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3d7a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3d7a88:
    // 0x3d7a88: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d7a88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
label_3d7a8c:
    // 0x3d7a8c: 0x24a58598  addiu       $a1, $a1, -0x7A68
    ctx->pc = 0x3d7a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935960));
label_3d7a90:
    // 0x3d7a90: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7a90u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7a94:
    // 0x3d7a94: 0x250878b8  addiu       $t0, $t0, 0x78B8
    ctx->pc = 0x3d7a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30904));
label_3d7a98:
    // 0x3d7a98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d7a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7a9c:
    // 0x3d7a9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7aa0:
    // 0x3d7aa0: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x3d7aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_3d7aa4:
    // 0x3d7aa4: 0xc0f5fc0  jal         func_3D7F00
label_3d7aa8:
    if (ctx->pc == 0x3D7AA8u) {
        ctx->pc = 0x3D7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7AA4u;
        // 0x3d7aa8: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7AACu;
        goto label_3d7aac;
    }
    ctx->pc = 0x3D7AA4u;
    SET_GPR_U32(ctx, 31, 0x3D7AACu);
    ctx->pc = 0x3D7AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7AA4u;
    // 0x3d7aa8: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7AA4u, 0x3D7AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7AACu;
label_3d7aac:
    // 0x3d7aac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3d7ab0:
    if (ctx->pc == 0x3D7AB0u) {
        ctx->pc = 0x3D7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7AACu;
        // 0x3d7ab0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7AB4u;
        goto label_3d7ab4;
    }
    ctx->pc = 0x3D7AACu;
    {
        const bool branch_taken_0x3d7aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7AACu;
        // 0x3d7ab0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7aac) {
            ctx->pc = 0x3D7ABCu;
            goto label_3d7abc;
        }
    }
    ctx->pc = 0x3D7AB4u;
label_3d7ab4:
    // 0x3d7ab4: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3d7ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d7ab8:
    // 0x3d7ab8: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x3d7ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d7abc:
    // 0x3d7abc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x3d7abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_3d7ac0:
    // 0x3d7ac0: 0x32540001  andi        $s4, $s2, 0x1
    ctx->pc = 0x3d7ac0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_3d7ac4:
    // 0x3d7ac4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3d7ac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3d7ac8:
    // 0x3d7ac8: 0x144000bb  bnez        $v0, . + 4 + (0xBB << 2)
label_3d7acc:
    if (ctx->pc == 0x3D7ACCu) {
        ctx->pc = 0x3D7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7AC8u;
        // 0x3d7acc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7AD0u;
        goto label_3d7ad0;
    }
    ctx->pc = 0x3D7AC8u;
    {
        const bool branch_taken_0x3d7ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7AC8u;
        // 0x3d7acc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ac8) {
            ctx->pc = 0x3D7DB8u;
            goto label_3d7db8;
        }
    }
    ctx->pc = 0x3D7AD0u;
label_3d7ad0:
    // 0x3d7ad0: 0x32630002  andi        $v1, $s3, 0x2
    ctx->pc = 0x3d7ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_3d7ad4:
    // 0x3d7ad4: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x3d7ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_3d7ad8:
    // 0x3d7ad8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3d7ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d7adc:
    // 0x3d7adc: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
label_3d7ae0:
    if (ctx->pc == 0x3D7AE0u) {
        ctx->pc = 0x3D7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7ADCu;
        // 0x3d7ae0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7AE4u;
        goto label_3d7ae4;
    }
    ctx->pc = 0x3D7ADCu;
    {
        const bool branch_taken_0x3d7adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7ADCu;
        // 0x3d7ae0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7adc) {
            ctx->pc = 0x3D7DB8u;
            goto label_3d7db8;
        }
    }
    ctx->pc = 0x3D7AE4u;
label_3d7ae4:
    // 0x3d7ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d7ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7ae8:
    // 0x3d7ae8: 0xc0f5c96  jal         func_3D7258
label_3d7aec:
    if (ctx->pc == 0x3D7AECu) {
        ctx->pc = 0x3D7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7AE8u;
        // 0x3d7aec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7AF0u;
        goto label_3d7af0;
    }
    ctx->pc = 0x3D7AE8u;
    SET_GPR_U32(ctx, 31, 0x3D7AF0u);
    ctx->pc = 0x3D7AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7AE8u;
    // 0x3d7aec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7258u, 0x3D7AE8u, 0x3D7AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7AF0u;
label_3d7af0:
    // 0x3d7af0: 0x544000b0  bnel        $v0, $zero, . + 4 + (0xB0 << 2)
label_3d7af4:
    if (ctx->pc == 0x3D7AF4u) {
        ctx->pc = 0x3D7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7AF0u;
        // 0x3d7af4: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7AF8u;
        goto label_3d7af8;
    }
    ctx->pc = 0x3D7AF0u;
    {
        const bool branch_taken_0x3d7af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7af0) {
            ctx->pc = 0x3D7AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7AF0u;
            // 0x3d7af4: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7DB4u;
            goto label_3d7db4;
        }
    }
    ctx->pc = 0x3D7AF8u;
label_3d7af8:
    // 0x3d7af8: 0xc0f5fec  jal         func_3D7FB0
label_3d7afc:
    if (ctx->pc == 0x3D7AFCu) {
        ctx->pc = 0x3D7B00u;
        goto label_3d7b00;
    }
    ctx->pc = 0x3D7AF8u;
    SET_GPR_U32(ctx, 31, 0x3D7B00u);
    ctx->pc = 0x3D7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7FB0u, 0x3D7AF8u, 0x3D7B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7B00u;
label_3d7b00:
    // 0x3d7b00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d7b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7b04:
    // 0x3d7b04: 0xc0f5c96  jal         func_3D7258
label_3d7b08:
    if (ctx->pc == 0x3D7B08u) {
        ctx->pc = 0x3D7B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B04u;
        // 0x3d7b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B0Cu;
        goto label_3d7b0c;
    }
    ctx->pc = 0x3D7B04u;
    SET_GPR_U32(ctx, 31, 0x3D7B0Cu);
    ctx->pc = 0x3D7B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7B04u;
    // 0x3d7b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7258u, 0x3D7B04u, 0x3D7B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7B0Cu;
label_3d7b0c:
    // 0x3d7b0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3d7b10:
    if (ctx->pc == 0x3D7B10u) {
        ctx->pc = 0x3D7B14u;
        goto label_3d7b14;
    }
    ctx->pc = 0x3D7B0Cu;
    {
        const bool branch_taken_0x3d7b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7b0c) {
            ctx->pc = 0x3D7B4Cu;
            goto label_3d7b4c;
        }
    }
    ctx->pc = 0x3D7B14u;
label_3d7b14:
    // 0x3d7b14: 0x120000a6  beqz        $s0, . + 4 + (0xA6 << 2)
label_3d7b18:
    if (ctx->pc == 0x3D7B18u) {
        ctx->pc = 0x3D7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B14u;
        // 0x3d7b18: 0x3c08003d  lui         $t0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B1Cu;
        goto label_3d7b1c;
    }
    ctx->pc = 0x3D7B14u;
    {
        const bool branch_taken_0x3d7b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B14u;
        // 0x3d7b18: 0x3c08003d  lui         $t0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7b14) {
            ctx->pc = 0x3D7DB0u;
            goto label_3d7db0;
        }
    }
    ctx->pc = 0x3D7B1Cu;
label_3d7b1c:
    // 0x3d7b1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d7b20:
    // 0x3d7b20: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3d7b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3d7b24:
    // 0x3d7b24: 0x24a584b8  addiu       $a1, $a1, -0x7B48
    ctx->pc = 0x3d7b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935736));
label_3d7b28:
    // 0x3d7b28: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7b28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7b2c:
    // 0x3d7b2c: 0x250878b8  addiu       $t0, $t0, 0x78B8
    ctx->pc = 0x3d7b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30904));
label_3d7b30:
    // 0x3d7b30: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d7b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7b34:
    // 0x3d7b34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7b38:
    // 0x3d7b38: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x3d7b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3d7b3c:
    // 0x3d7b3c: 0xc0f5fc0  jal         func_3D7F00
label_3d7b40:
    if (ctx->pc == 0x3D7B40u) {
        ctx->pc = 0x3D7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B3Cu;
        // 0x3d7b40: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B44u;
        goto label_3d7b44;
    }
    ctx->pc = 0x3D7B3Cu;
    SET_GPR_U32(ctx, 31, 0x3D7B44u);
    ctx->pc = 0x3D7B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7B3Cu;
    // 0x3d7b40: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7B3Cu, 0x3D7B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7B44u;
label_3d7b44:
    // 0x3d7b44: 0x5040009b  beql        $v0, $zero, . + 4 + (0x9B << 2)
label_3d7b48:
    if (ctx->pc == 0x3D7B48u) {
        ctx->pc = 0x3D7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B44u;
        // 0x3d7b48: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B4Cu;
        goto label_3d7b4c;
    }
    ctx->pc = 0x3D7B44u;
    {
        const bool branch_taken_0x3d7b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7b44) {
            ctx->pc = 0x3D7B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7B44u;
            // 0x3d7b48: 0xafb60000  sw          $s6, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7DB4u;
            goto label_3d7db4;
        }
    }
    ctx->pc = 0x3D7B4Cu;
label_3d7b4c:
    // 0x3d7b4c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_3d7b50:
    if (ctx->pc == 0x3D7B50u) {
        ctx->pc = 0x3D7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B4Cu;
        // 0x3d7b50: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B54u;
        goto label_3d7b54;
    }
    ctx->pc = 0x3D7B4Cu;
    {
        const bool branch_taken_0x3d7b4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7b4c) {
            ctx->pc = 0x3D7B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7B4Cu;
            // 0x3d7b50: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7B5Cu;
            goto label_3d7b5c;
        }
    }
    ctx->pc = 0x3D7B54u;
label_3d7b54:
    // 0x3d7b54: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d7b58:
    if (ctx->pc == 0x3D7B58u) {
        ctx->pc = 0x3D7B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B54u;
        // 0x3d7b58: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B5Cu;
        goto label_3d7b5c;
    }
    ctx->pc = 0x3D7B54u;
    {
        const bool branch_taken_0x3d7b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B54u;
        // 0x3d7b58: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7b54) {
            ctx->pc = 0x3D7B88u;
            goto label_3d7b88;
        }
    }
    ctx->pc = 0x3D7B5Cu;
label_3d7b5c:
    // 0x3d7b5c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3d7b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3d7b60:
    // 0x3d7b60: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d7b60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
label_3d7b64:
    // 0x3d7b64: 0x24a576d8  addiu       $a1, $a1, 0x76D8
    ctx->pc = 0x3d7b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30424));
label_3d7b68:
    // 0x3d7b68: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7b68u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7b6c:
    // 0x3d7b6c: 0x250878b8  addiu       $t0, $t0, 0x78B8
    ctx->pc = 0x3d7b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30904));
label_3d7b70:
    // 0x3d7b70: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d7b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7b74:
    // 0x3d7b74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7b78:
    // 0x3d7b78: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x3d7b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3d7b7c:
    // 0x3d7b7c: 0xc0f5fc0  jal         func_3D7F00
label_3d7b80:
    if (ctx->pc == 0x3D7B80u) {
        ctx->pc = 0x3D7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B7Cu;
        // 0x3d7b80: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7B84u;
        goto label_3d7b84;
    }
    ctx->pc = 0x3D7B7Cu;
    SET_GPR_U32(ctx, 31, 0x3D7B84u);
    ctx->pc = 0x3D7B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7B7Cu;
    // 0x3d7b80: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7B7Cu, 0x3D7B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7B84u;
label_3d7b84:
    // 0x3d7b84: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3d7b84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7b88:
    // 0x3d7b88: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
label_3d7b8c:
    if (ctx->pc == 0x3D7B8Cu) {
        ctx->pc = 0x3D7B90u;
        goto label_3d7b90;
    }
    ctx->pc = 0x3D7B88u;
    {
        const bool branch_taken_0x3d7b88 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7b88) {
            ctx->pc = 0x3D7BC0u;
            goto label_3d7bc0;
        }
    }
    ctx->pc = 0x3D7B90u;
label_3d7b90:
    // 0x3d7b90: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x3d7b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_3d7b94:
    // 0x3d7b94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d7b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7b98:
    // 0x3d7b98: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3d7b98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d7b9c:
    // 0x3d7b9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7ba0:
    // 0x3d7ba0: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3d7ba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3d7ba4:
    // 0x3d7ba4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d7ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7ba8:
    // 0x3d7ba8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3d7ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3d7bac:
    // 0x3d7bac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d7bacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d7bb0:
    // 0x3d7bb0: 0x40f809  jalr        $v0
label_3d7bb4:
    if (ctx->pc == 0x3D7BB4u) {
        ctx->pc = 0x3D7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BB0u;
        // 0x3d7bb4: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7BB8u;
        goto label_3d7bb8;
    }
    ctx->pc = 0x3D7BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7BB8u);
        ctx->pc = 0x3D7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BB0u;
        // 0x3d7bb4: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7BB0u, 0x3D7BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7BB8u;
label_3d7bb8:
    // 0x3d7bb8: 0x1000007e  b           . + 4 + (0x7E << 2)
label_3d7bbc:
    if (ctx->pc == 0x3D7BBCu) {
        ctx->pc = 0x3D7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BB8u;
        // 0x3d7bbc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7BC0u;
        goto label_3d7bc0;
    }
    ctx->pc = 0x3D7BB8u;
    {
        const bool branch_taken_0x3d7bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BB8u;
        // 0x3d7bbc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7bb8) {
            ctx->pc = 0x3D7DB4u;
            goto label_3d7db4;
        }
    }
    ctx->pc = 0x3D7BC0u;
label_3d7bc0:
    // 0x3d7bc0: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_3d7bc4:
    if (ctx->pc == 0x3D7BC4u) {
        ctx->pc = 0x3D7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BC0u;
        // 0x3d7bc4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7BC8u;
        goto label_3d7bc8;
    }
    ctx->pc = 0x3D7BC0u;
    {
        const bool branch_taken_0x3d7bc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7bc0) {
            ctx->pc = 0x3D7BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7BC0u;
            // 0x3d7bc4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7BD0u;
            goto label_3d7bd0;
        }
    }
    ctx->pc = 0x3D7BC8u;
label_3d7bc8:
    // 0x3d7bc8: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d7bcc:
    if (ctx->pc == 0x3D7BCCu) {
        ctx->pc = 0x3D7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BC8u;
        // 0x3d7bcc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7BD0u;
        goto label_3d7bd0;
    }
    ctx->pc = 0x3D7BC8u;
    {
        const bool branch_taken_0x3d7bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BC8u;
        // 0x3d7bcc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7bc8) {
            ctx->pc = 0x3D7BFCu;
            goto label_3d7bfc;
        }
    }
    ctx->pc = 0x3D7BD0u;
label_3d7bd0:
    // 0x3d7bd0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3d7bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3d7bd4:
    // 0x3d7bd4: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d7bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
label_3d7bd8:
    // 0x3d7bd8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3d7bd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7bdc:
    // 0x3d7bdc: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7bdcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7be0:
    // 0x3d7be0: 0x24a58608  addiu       $a1, $a1, -0x79F8
    ctx->pc = 0x3d7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936072));
label_3d7be4:
    // 0x3d7be4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d7be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7be8:
    // 0x3d7be8: 0x250878b8  addiu       $t0, $t0, 0x78B8
    ctx->pc = 0x3d7be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30904));
label_3d7bec:
    // 0x3d7bec: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x3d7becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3d7bf0:
    // 0x3d7bf0: 0xc0f5fc0  jal         func_3D7F00
label_3d7bf4:
    if (ctx->pc == 0x3D7BF4u) {
        ctx->pc = 0x3D7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BF0u;
        // 0x3d7bf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7BF8u;
        goto label_3d7bf8;
    }
    ctx->pc = 0x3D7BF0u;
    SET_GPR_U32(ctx, 31, 0x3D7BF8u);
    ctx->pc = 0x3D7BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7BF0u;
    // 0x3d7bf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7BF0u, 0x3D7BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7BF8u;
label_3d7bf8:
    // 0x3d7bf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d7bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7bfc:
    // 0x3d7bfc: 0x1200006e  beqz        $s0, . + 4 + (0x6E << 2)
label_3d7c00:
    if (ctx->pc == 0x3D7C00u) {
        ctx->pc = 0x3D7C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BFCu;
        // 0x3d7c00: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C04u;
        goto label_3d7c04;
    }
    ctx->pc = 0x3D7BFCu;
    {
        const bool branch_taken_0x3d7bfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7BFCu;
        // 0x3d7c00: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7bfc) {
            ctx->pc = 0x3D7DB8u;
            goto label_3d7db8;
        }
    }
    ctx->pc = 0x3D7C04u;
label_3d7c04:
    // 0x3d7c04: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_3d7c08:
    if (ctx->pc == 0x3D7C08u) {
        ctx->pc = 0x3D7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C04u;
        // 0x3d7c08: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C0Cu;
        goto label_3d7c0c;
    }
    ctx->pc = 0x3D7C04u;
    {
        const bool branch_taken_0x3d7c04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7c04) {
            ctx->pc = 0x3D7C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7C04u;
            // 0x3d7c08: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7C14u;
            goto label_3d7c14;
        }
    }
    ctx->pc = 0x3D7C0Cu;
label_3d7c0c:
    // 0x3d7c0c: 0x1000000c  b           . + 4 + (0xC << 2)
label_3d7c10:
    if (ctx->pc == 0x3D7C10u) {
        ctx->pc = 0x3D7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C0Cu;
        // 0x3d7c10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C14u;
        goto label_3d7c14;
    }
    ctx->pc = 0x3D7C0Cu;
    {
        const bool branch_taken_0x3d7c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C0Cu;
        // 0x3d7c10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7c0c) {
            ctx->pc = 0x3D7C40u;
            goto label_3d7c40;
        }
    }
    ctx->pc = 0x3D7C14u;
label_3d7c14:
    // 0x3d7c14: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3d7c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_3d7c18:
    // 0x3d7c18: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d7c18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
label_3d7c1c:
    // 0x3d7c1c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3d7c1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7c20:
    // 0x3d7c20: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7c20u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7c24:
    // 0x3d7c24: 0x24a58608  addiu       $a1, $a1, -0x79F8
    ctx->pc = 0x3d7c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936072));
label_3d7c28:
    // 0x3d7c28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d7c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7c2c:
    // 0x3d7c2c: 0x250878b8  addiu       $t0, $t0, 0x78B8
    ctx->pc = 0x3d7c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30904));
label_3d7c30:
    // 0x3d7c30: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x3d7c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_3d7c34:
    // 0x3d7c34: 0xc0f5fc0  jal         func_3D7F00
label_3d7c38:
    if (ctx->pc == 0x3D7C38u) {
        ctx->pc = 0x3D7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C34u;
        // 0x3d7c38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C3Cu;
        goto label_3d7c3c;
    }
    ctx->pc = 0x3D7C34u;
    SET_GPR_U32(ctx, 31, 0x3D7C3Cu);
    ctx->pc = 0x3D7C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7C34u;
    // 0x3d7c38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7C34u, 0x3D7C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7C3Cu;
label_3d7c3c:
    // 0x3d7c3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d7c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7c40:
    // 0x3d7c40: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
label_3d7c44:
    if (ctx->pc == 0x3D7C44u) {
        ctx->pc = 0x3D7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C40u;
        // 0x3d7c44: 0x3c1e003e  lui         $fp, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C48u;
        goto label_3d7c48;
    }
    ctx->pc = 0x3D7C40u;
    {
        const bool branch_taken_0x3d7c40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C40u;
        // 0x3d7c44: 0x3c1e003e  lui         $fp, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7c40) {
            ctx->pc = 0x3D7DB4u;
            goto label_3d7db4;
        }
    }
    ctx->pc = 0x3D7C48u;
label_3d7c48:
    // 0x3d7c48: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x3d7c48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3d7c4c:
    // 0x3d7c4c: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x3d7c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d7c50:
    // 0x3d7c50: 0x3c15003d  lui         $s5, 0x3D
    ctx->pc = 0x3d7c50u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)61 << 16));
label_3d7c54:
    // 0x3d7c54: 0x10000024  b           . + 4 + (0x24 << 2)
label_3d7c58:
    if (ctx->pc == 0x3D7C58u) {
        ctx->pc = 0x3D7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C54u;
        // 0x3d7c58: 0x3c17003e  lui         $s7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C5Cu;
        goto label_3d7c5c;
    }
    ctx->pc = 0x3D7C54u;
    {
        const bool branch_taken_0x3d7c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C54u;
        // 0x3d7c58: 0x3c17003e  lui         $s7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7c54) {
            ctx->pc = 0x3D7CE8u;
            goto label_3d7ce8;
        }
    }
    ctx->pc = 0x3D7C5Cu;
label_3d7c5c:
    // 0x3d7c5c: 0x0  nop
    ctx->pc = 0x3d7c5cu;
    // NOP
label_3d7c60:
    // 0x3d7c60: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_3d7c64:
    if (ctx->pc == 0x3D7C64u) {
        ctx->pc = 0x3D7C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C60u;
        // 0x3d7c64: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C68u;
        goto label_3d7c68;
    }
    ctx->pc = 0x3D7C60u;
    {
        const bool branch_taken_0x3d7c60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7c60) {
            ctx->pc = 0x3D7C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7C60u;
            // 0x3d7c64: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7C70u;
            goto label_3d7c70;
        }
    }
    ctx->pc = 0x3D7C68u;
label_3d7c68:
    // 0x3d7c68: 0x1000000a  b           . + 4 + (0xA << 2)
label_3d7c6c:
    if (ctx->pc == 0x3D7C6Cu) {
        ctx->pc = 0x3D7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C68u;
        // 0x3d7c6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C70u;
        goto label_3d7c70;
    }
    ctx->pc = 0x3D7C68u;
    {
        const bool branch_taken_0x3d7c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C68u;
        // 0x3d7c6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7c68) {
            ctx->pc = 0x3D7C94u;
            goto label_3d7c94;
        }
    }
    ctx->pc = 0x3D7C70u;
label_3d7c70:
    // 0x3d7c70: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3d7c70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7c74:
    // 0x3d7c74: 0x26e58608  addiu       $a1, $s7, -0x79F8
    ctx->pc = 0x3d7c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936072));
label_3d7c78:
    // 0x3d7c78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7c7c:
    // 0x3d7c7c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7c7cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7c80:
    // 0x3d7c80: 0x26a878b8  addiu       $t0, $s5, 0x78B8
    ctx->pc = 0x3d7c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 30904));
label_3d7c84:
    // 0x3d7c84: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d7c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7c88:
    // 0x3d7c88: 0xc0f5fc0  jal         func_3D7F00
label_3d7c8c:
    if (ctx->pc == 0x3D7C8Cu) {
        ctx->pc = 0x3D7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C88u;
        // 0x3d7c8c: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C90u;
        goto label_3d7c90;
    }
    ctx->pc = 0x3D7C88u;
    SET_GPR_U32(ctx, 31, 0x3D7C90u);
    ctx->pc = 0x3D7C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7C88u;
    // 0x3d7c8c: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7C88u, 0x3D7C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7C90u;
label_3d7c90:
    // 0x3d7c90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d7c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7c94:
    // 0x3d7c94: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_3d7c98:
    if (ctx->pc == 0x3D7C98u) {
        ctx->pc = 0x3D7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C94u;
        // 0x3d7c98: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7C9Cu;
        goto label_3d7c9c;
    }
    ctx->pc = 0x3D7C94u;
    {
        const bool branch_taken_0x3d7c94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7c94) {
            ctx->pc = 0x3D7C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7C94u;
            // 0x3d7c98: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7CA4u;
            goto label_3d7ca4;
        }
    }
    ctx->pc = 0x3D7C9Cu;
label_3d7c9c:
    // 0x3d7c9c: 0x1000000a  b           . + 4 + (0xA << 2)
label_3d7ca0:
    if (ctx->pc == 0x3D7CA0u) {
        ctx->pc = 0x3D7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C9Cu;
        // 0x3d7ca0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7CA4u;
        goto label_3d7ca4;
    }
    ctx->pc = 0x3D7C9Cu;
    {
        const bool branch_taken_0x3d7c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7C9Cu;
        // 0x3d7ca0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7c9c) {
            ctx->pc = 0x3D7CC8u;
            goto label_3d7cc8;
        }
    }
    ctx->pc = 0x3D7CA4u;
label_3d7ca4:
    // 0x3d7ca4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3d7ca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7ca8:
    // 0x3d7ca8: 0x26e58608  addiu       $a1, $s7, -0x79F8
    ctx->pc = 0x3d7ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936072));
label_3d7cac:
    // 0x3d7cac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7cb0:
    // 0x3d7cb0: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7cb0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7cb4:
    // 0x3d7cb4: 0x26a878b8  addiu       $t0, $s5, 0x78B8
    ctx->pc = 0x3d7cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 30904));
label_3d7cb8:
    // 0x3d7cb8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d7cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7cbc:
    // 0x3d7cbc: 0xc0f5fc0  jal         func_3D7F00
label_3d7cc0:
    if (ctx->pc == 0x3D7CC0u) {
        ctx->pc = 0x3D7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CBCu;
        // 0x3d7cc0: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7CC4u;
        goto label_3d7cc4;
    }
    ctx->pc = 0x3D7CBCu;
    SET_GPR_U32(ctx, 31, 0x3D7CC4u);
    ctx->pc = 0x3D7CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7CBCu;
    // 0x3d7cc0: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7CBCu, 0x3D7CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7CC4u;
label_3d7cc4:
    // 0x3d7cc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d7cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7cc8:
    // 0x3d7cc8: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_3d7ccc:
    if (ctx->pc == 0x3D7CCCu) {
        ctx->pc = 0x3D7CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CC8u;
        // 0x3d7ccc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7CD0u;
        goto label_3d7cd0;
    }
    ctx->pc = 0x3D7CC8u;
    {
        const bool branch_taken_0x3d7cc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CC8u;
        // 0x3d7ccc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7cc8) {
            ctx->pc = 0x3D7DB8u;
            goto label_3d7db8;
        }
    }
    ctx->pc = 0x3D7CD0u;
label_3d7cd0:
    // 0x3d7cd0: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
label_3d7cd4:
    if (ctx->pc == 0x3D7CD4u) {
        ctx->pc = 0x3D7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CD0u;
        // 0x3d7cd4: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7CD8u;
        goto label_3d7cd8;
    }
    ctx->pc = 0x3D7CD0u;
    {
        const bool branch_taken_0x3d7cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CD0u;
        // 0x3d7cd4: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7cd0) {
            ctx->pc = 0x3D7DB4u;
            goto label_3d7db4;
        }
    }
    ctx->pc = 0x3D7CD8u;
label_3d7cd8:
    // 0x3d7cd8: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x3d7cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3d7cdc:
    // 0x3d7cdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d7cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d7ce0:
    // 0x3d7ce0: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x3d7ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d7ce4:
    // 0x3d7ce4: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x3d7ce4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_3d7ce8:
    // 0x3d7ce8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_3d7cec:
    if (ctx->pc == 0x3D7CECu) {
        ctx->pc = 0x3D7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CE8u;
        // 0x3d7cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7CF0u;
        goto label_3d7cf0;
    }
    ctx->pc = 0x3D7CE8u;
    {
        const bool branch_taken_0x3d7ce8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7CE8u;
        // 0x3d7cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ce8) {
            ctx->pc = 0x3D7D14u;
            goto label_3d7d14;
        }
    }
    ctx->pc = 0x3D7CF0u;
label_3d7cf0:
    // 0x3d7cf0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3d7cf4:
    // 0x3d7cf4: 0x27c58598  addiu       $a1, $fp, -0x7A68
    ctx->pc = 0x3d7cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935960));
label_3d7cf8:
    // 0x3d7cf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7cfc:
    // 0x3d7cfc: 0x26a878b8  addiu       $t0, $s5, 0x78B8
    ctx->pc = 0x3d7cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 30904));
label_3d7d00:
    // 0x3d7d00: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7d00u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7d04:
    // 0x3d7d04: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3d7d04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7d08:
    // 0x3d7d08: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d7d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7d0c:
    // 0x3d7d0c: 0xc0f5fc0  jal         func_3D7F00
label_3d7d10:
    if (ctx->pc == 0x3D7D10u) {
        ctx->pc = 0x3D7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D0Cu;
        // 0x3d7d10: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D14u;
        goto label_3d7d14;
    }
    ctx->pc = 0x3D7D0Cu;
    SET_GPR_U32(ctx, 31, 0x3D7D14u);
    ctx->pc = 0x3D7D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7D0Cu;
    // 0x3d7d10: 0x2073821  addu        $a3, $s0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7D0Cu, 0x3D7D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7D14u;
label_3d7d14:
    // 0x3d7d14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3d7d18:
    if (ctx->pc == 0x3D7D18u) {
        ctx->pc = 0x3D7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D14u;
        // 0x3d7d18: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D1Cu;
        goto label_3d7d1c;
    }
    ctx->pc = 0x3D7D14u;
    {
        const bool branch_taken_0x3d7d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D14u;
        // 0x3d7d18: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d14) {
            ctx->pc = 0x3D7D24u;
            goto label_3d7d24;
        }
    }
    ctx->pc = 0x3D7D1Cu;
label_3d7d1c:
    // 0x3d7d1c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3d7d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d7d20:
    // 0x3d7d20: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x3d7d20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d7d24:
    // 0x3d7d24: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_3d7d28:
    if (ctx->pc == 0x3D7D28u) {
        ctx->pc = 0x3D7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D24u;
        // 0x3d7d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D2Cu;
        goto label_3d7d2c;
    }
    ctx->pc = 0x3D7D24u;
    {
        const bool branch_taken_0x3d7d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D24u;
        // 0x3d7d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d24) {
            ctx->pc = 0x3D7D50u;
            goto label_3d7d50;
        }
    }
    ctx->pc = 0x3D7D2Cu;
label_3d7d2c:
    // 0x3d7d2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3d7d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3d7d30:
    // 0x3d7d30: 0x27c58598  addiu       $a1, $fp, -0x7A68
    ctx->pc = 0x3d7d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935960));
label_3d7d34:
    // 0x3d7d34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d7d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d7d38:
    // 0x3d7d38: 0x26a878b8  addiu       $t0, $s5, 0x78B8
    ctx->pc = 0x3d7d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 30904));
label_3d7d3c:
    // 0x3d7d3c: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x3d7d3cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3d7d40:
    // 0x3d7d40: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3d7d40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7d44:
    // 0x3d7d44: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d7d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d7d48:
    // 0x3d7d48: 0xc0f5fc0  jal         func_3D7F00
label_3d7d4c:
    if (ctx->pc == 0x3D7D4Cu) {
        ctx->pc = 0x3D7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D48u;
        // 0x3d7d4c: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D50u;
        goto label_3d7d50;
    }
    ctx->pc = 0x3D7D48u;
    SET_GPR_U32(ctx, 31, 0x3D7D50u);
    ctx->pc = 0x3D7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7D48u;
    // 0x3d7d4c: 0x2273821  addu        $a3, $s1, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7F00u, 0x3D7D48u, 0x3D7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7D50u;
label_3d7d50:
    // 0x3d7d50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3d7d54:
    if (ctx->pc == 0x3D7D54u) {
        ctx->pc = 0x3D7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D50u;
        // 0x3d7d54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D58u;
        goto label_3d7d58;
    }
    ctx->pc = 0x3D7D50u;
    {
        const bool branch_taken_0x3d7d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D50u;
        // 0x3d7d54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d50) {
            ctx->pc = 0x3D7D60u;
            goto label_3d7d60;
        }
    }
    ctx->pc = 0x3D7D58u;
label_3d7d58:
    // 0x3d7d58: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3d7d58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3d7d5c:
    // 0x3d7d5c: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x3d7d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d7d60:
    // 0x3d7d60: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x3d7d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_3d7d64:
    // 0x3d7d64: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x3d7d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_3d7d68:
    // 0x3d7d68: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x3d7d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3d7d6c:
    // 0x3d7d6c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_3d7d70:
    if (ctx->pc == 0x3D7D70u) {
        ctx->pc = 0x3D7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D6Cu;
        // 0x3d7d70: 0x32640002  andi        $a0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D74u;
        goto label_3d7d74;
    }
    ctx->pc = 0x3D7D6Cu;
    {
        const bool branch_taken_0x3d7d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D6Cu;
        // 0x3d7d70: 0x32640002  andi        $a0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d6c) {
            ctx->pc = 0x3D7DB4u;
            goto label_3d7db4;
        }
    }
    ctx->pc = 0x3D7D74u;
label_3d7d74:
    // 0x3d7d74: 0x32430002  andi        $v1, $s2, 0x2
    ctx->pc = 0x3d7d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_3d7d78:
    // 0x3d7d78: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3d7d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3d7d7c:
    // 0x3d7d7c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3d7d80:
    if (ctx->pc == 0x3D7D80u) {
        ctx->pc = 0x3D7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D7Cu;
        // 0x3d7d80: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D84u;
        goto label_3d7d84;
    }
    ctx->pc = 0x3D7D7Cu;
    {
        const bool branch_taken_0x3d7d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D7Cu;
        // 0x3d7d80: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d7c) {
            ctx->pc = 0x3D7DB8u;
            goto label_3d7db8;
        }
    }
    ctx->pc = 0x3D7D84u;
label_3d7d84:
    // 0x3d7d84: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
label_3d7d88:
    if (ctx->pc == 0x3D7D88u) {
        ctx->pc = 0x3D7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D84u;
        // 0x3d7d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D8Cu;
        goto label_3d7d8c;
    }
    ctx->pc = 0x3D7D84u;
    {
        const bool branch_taken_0x3d7d84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7d84) {
            ctx->pc = 0x3D7D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7D84u;
            // 0x3d7d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D7DA0u;
            goto label_3d7da0;
        }
    }
    ctx->pc = 0x3D7D8Cu;
label_3d7d8c:
    // 0x3d7d8c: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x3d7d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3d7d90:
    // 0x3d7d90: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3d7d94:
    if (ctx->pc == 0x3D7D94u) {
        ctx->pc = 0x3D7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D90u;
        // 0x3d7d94: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7D98u;
        goto label_3d7d98;
    }
    ctx->pc = 0x3D7D90u;
    {
        const bool branch_taken_0x3d7d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D90u;
        // 0x3d7d94: 0x83102a  slt         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d90) {
            ctx->pc = 0x3D7DB4u;
            goto label_3d7db4;
        }
    }
    ctx->pc = 0x3D7D98u;
label_3d7d98:
    // 0x3d7d98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3d7d9c:
    if (ctx->pc == 0x3D7D9Cu) {
        ctx->pc = 0x3D7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D98u;
        // 0x3d7d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DA0u;
        goto label_3d7da0;
    }
    ctx->pc = 0x3D7D98u;
    {
        const bool branch_taken_0x3d7d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7D98u;
        // 0x3d7d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7d98) {
            ctx->pc = 0x3D7DB4u;
            goto label_3d7db4;
        }
    }
    ctx->pc = 0x3D7DA0u;
label_3d7da0:
    // 0x3d7da0: 0xc0f5c96  jal         func_3D7258
label_3d7da4:
    if (ctx->pc == 0x3D7DA4u) {
        ctx->pc = 0x3D7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DA0u;
        // 0x3d7da4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DA8u;
        goto label_3d7da8;
    }
    ctx->pc = 0x3D7DA0u;
    SET_GPR_U32(ctx, 31, 0x3D7DA8u);
    ctx->pc = 0x3D7DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7DA0u;
    // 0x3d7da4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7258u, 0x3D7DA0u, 0x3D7DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7DA8u;
label_3d7da8:
    // 0x3d7da8: 0x1040ffad  beqz        $v0, . + 4 + (-0x53 << 2)
label_3d7dac:
    if (ctx->pc == 0x3D7DACu) {
        ctx->pc = 0x3D7DB0u;
        goto label_3d7db0;
    }
    ctx->pc = 0x3D7DA8u;
    {
        const bool branch_taken_0x3d7da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d7da8) {
            ctx->pc = 0x3D7C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7c60;
        }
    }
    ctx->pc = 0x3D7DB0u;
label_3d7db0:
    // 0x3d7db0: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x3d7db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_3d7db4:
    // 0x3d7db4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3d7db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d7db8:
    // 0x3d7db8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3d7db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3d7dbc:
    // 0x3d7dbc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x3d7dbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3d7dc0:
    // 0x3d7dc0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x3d7dc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3d7dc4:
    // 0x3d7dc4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x3d7dc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3d7dc8:
    // 0x3d7dc8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x3d7dc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3d7dcc:
    // 0x3d7dcc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3d7dccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d7dd0:
    // 0x3d7dd0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x3d7dd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d7dd4:
    // 0x3d7dd4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3d7dd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d7dd8:
    // 0x3d7dd8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3d7dd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7ddc:
    // 0x3d7ddc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3d7ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7de0:
    // 0x3d7de0: 0x3e00008  jr          $ra
label_3d7de4:
    if (ctx->pc == 0x3D7DE4u) {
        ctx->pc = 0x3D7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DE0u;
        // 0x3d7de4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7DE8u;
        goto label_fallthrough_0x3d7de0;
    }
    ctx->pc = 0x3D7DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7DE0u;
        // 0x3d7de4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d7de0:
    ctx->pc = 0x3D7DE8u;
}
