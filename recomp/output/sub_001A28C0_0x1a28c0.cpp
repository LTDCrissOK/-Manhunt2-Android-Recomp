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

// Function: sub_001A28C0
// Address: 0x1a28c0 - 0x1a2d60
void sub_001A28C0_0x1a28c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A28C0_0x1a28c0");
#endif

    switch (ctx->pc) {
        case 0x1a28c0u: goto label_1a28c0;
        case 0x1a28c4u: goto label_1a28c4;
        case 0x1a28c8u: goto label_1a28c8;
        case 0x1a28ccu: goto label_1a28cc;
        case 0x1a28d0u: goto label_1a28d0;
        case 0x1a28d4u: goto label_1a28d4;
        case 0x1a28d8u: goto label_1a28d8;
        case 0x1a28dcu: goto label_1a28dc;
        case 0x1a28e0u: goto label_1a28e0;
        case 0x1a28e4u: goto label_1a28e4;
        case 0x1a28e8u: goto label_1a28e8;
        case 0x1a28ecu: goto label_1a28ec;
        case 0x1a28f0u: goto label_1a28f0;
        case 0x1a28f4u: goto label_1a28f4;
        case 0x1a28f8u: goto label_1a28f8;
        case 0x1a28fcu: goto label_1a28fc;
        case 0x1a2900u: goto label_1a2900;
        case 0x1a2904u: goto label_1a2904;
        case 0x1a2908u: goto label_1a2908;
        case 0x1a290cu: goto label_1a290c;
        case 0x1a2910u: goto label_1a2910;
        case 0x1a2914u: goto label_1a2914;
        case 0x1a2918u: goto label_1a2918;
        case 0x1a291cu: goto label_1a291c;
        case 0x1a2920u: goto label_1a2920;
        case 0x1a2924u: goto label_1a2924;
        case 0x1a2928u: goto label_1a2928;
        case 0x1a292cu: goto label_1a292c;
        case 0x1a2930u: goto label_1a2930;
        case 0x1a2934u: goto label_1a2934;
        case 0x1a2938u: goto label_1a2938;
        case 0x1a293cu: goto label_1a293c;
        case 0x1a2940u: goto label_1a2940;
        case 0x1a2944u: goto label_1a2944;
        case 0x1a2948u: goto label_1a2948;
        case 0x1a294cu: goto label_1a294c;
        case 0x1a2950u: goto label_1a2950;
        case 0x1a2954u: goto label_1a2954;
        case 0x1a2958u: goto label_1a2958;
        case 0x1a295cu: goto label_1a295c;
        case 0x1a2960u: goto label_1a2960;
        case 0x1a2964u: goto label_1a2964;
        case 0x1a2968u: goto label_1a2968;
        case 0x1a296cu: goto label_1a296c;
        case 0x1a2970u: goto label_1a2970;
        case 0x1a2974u: goto label_1a2974;
        case 0x1a2978u: goto label_1a2978;
        case 0x1a297cu: goto label_1a297c;
        case 0x1a2980u: goto label_1a2980;
        case 0x1a2984u: goto label_1a2984;
        case 0x1a2988u: goto label_1a2988;
        case 0x1a298cu: goto label_1a298c;
        case 0x1a2990u: goto label_1a2990;
        case 0x1a2994u: goto label_1a2994;
        case 0x1a2998u: goto label_1a2998;
        case 0x1a299cu: goto label_1a299c;
        case 0x1a29a0u: goto label_1a29a0;
        case 0x1a29a4u: goto label_1a29a4;
        case 0x1a29a8u: goto label_1a29a8;
        case 0x1a29acu: goto label_1a29ac;
        case 0x1a29b0u: goto label_1a29b0;
        case 0x1a29b4u: goto label_1a29b4;
        case 0x1a29b8u: goto label_1a29b8;
        case 0x1a29bcu: goto label_1a29bc;
        case 0x1a29c0u: goto label_1a29c0;
        case 0x1a29c4u: goto label_1a29c4;
        case 0x1a29c8u: goto label_1a29c8;
        case 0x1a29ccu: goto label_1a29cc;
        case 0x1a29d0u: goto label_1a29d0;
        case 0x1a29d4u: goto label_1a29d4;
        case 0x1a29d8u: goto label_1a29d8;
        case 0x1a29dcu: goto label_1a29dc;
        case 0x1a29e0u: goto label_1a29e0;
        case 0x1a29e4u: goto label_1a29e4;
        case 0x1a29e8u: goto label_1a29e8;
        case 0x1a29ecu: goto label_1a29ec;
        case 0x1a29f0u: goto label_1a29f0;
        case 0x1a29f4u: goto label_1a29f4;
        case 0x1a29f8u: goto label_1a29f8;
        case 0x1a29fcu: goto label_1a29fc;
        case 0x1a2a00u: goto label_1a2a00;
        case 0x1a2a04u: goto label_1a2a04;
        case 0x1a2a08u: goto label_1a2a08;
        case 0x1a2a0cu: goto label_1a2a0c;
        case 0x1a2a10u: goto label_1a2a10;
        case 0x1a2a14u: goto label_1a2a14;
        case 0x1a2a18u: goto label_1a2a18;
        case 0x1a2a1cu: goto label_1a2a1c;
        case 0x1a2a20u: goto label_1a2a20;
        case 0x1a2a24u: goto label_1a2a24;
        case 0x1a2a28u: goto label_1a2a28;
        case 0x1a2a2cu: goto label_1a2a2c;
        case 0x1a2a30u: goto label_1a2a30;
        case 0x1a2a34u: goto label_1a2a34;
        case 0x1a2a38u: goto label_1a2a38;
        case 0x1a2a3cu: goto label_1a2a3c;
        case 0x1a2a40u: goto label_1a2a40;
        case 0x1a2a44u: goto label_1a2a44;
        case 0x1a2a48u: goto label_1a2a48;
        case 0x1a2a4cu: goto label_1a2a4c;
        case 0x1a2a50u: goto label_1a2a50;
        case 0x1a2a54u: goto label_1a2a54;
        case 0x1a2a58u: goto label_1a2a58;
        case 0x1a2a5cu: goto label_1a2a5c;
        case 0x1a2a60u: goto label_1a2a60;
        case 0x1a2a64u: goto label_1a2a64;
        case 0x1a2a68u: goto label_1a2a68;
        case 0x1a2a6cu: goto label_1a2a6c;
        case 0x1a2a70u: goto label_1a2a70;
        case 0x1a2a74u: goto label_1a2a74;
        case 0x1a2a78u: goto label_1a2a78;
        case 0x1a2a7cu: goto label_1a2a7c;
        case 0x1a2a80u: goto label_1a2a80;
        case 0x1a2a84u: goto label_1a2a84;
        case 0x1a2a88u: goto label_1a2a88;
        case 0x1a2a8cu: goto label_1a2a8c;
        case 0x1a2a90u: goto label_1a2a90;
        case 0x1a2a94u: goto label_1a2a94;
        case 0x1a2a98u: goto label_1a2a98;
        case 0x1a2a9cu: goto label_1a2a9c;
        case 0x1a2aa0u: goto label_1a2aa0;
        case 0x1a2aa4u: goto label_1a2aa4;
        case 0x1a2aa8u: goto label_1a2aa8;
        case 0x1a2aacu: goto label_1a2aac;
        case 0x1a2ab0u: goto label_1a2ab0;
        case 0x1a2ab4u: goto label_1a2ab4;
        case 0x1a2ab8u: goto label_1a2ab8;
        case 0x1a2abcu: goto label_1a2abc;
        case 0x1a2ac0u: goto label_1a2ac0;
        case 0x1a2ac4u: goto label_1a2ac4;
        case 0x1a2ac8u: goto label_1a2ac8;
        case 0x1a2accu: goto label_1a2acc;
        case 0x1a2ad0u: goto label_1a2ad0;
        case 0x1a2ad4u: goto label_1a2ad4;
        case 0x1a2ad8u: goto label_1a2ad8;
        case 0x1a2adcu: goto label_1a2adc;
        case 0x1a2ae0u: goto label_1a2ae0;
        case 0x1a2ae4u: goto label_1a2ae4;
        case 0x1a2ae8u: goto label_1a2ae8;
        case 0x1a2aecu: goto label_1a2aec;
        case 0x1a2af0u: goto label_1a2af0;
        case 0x1a2af4u: goto label_1a2af4;
        case 0x1a2af8u: goto label_1a2af8;
        case 0x1a2afcu: goto label_1a2afc;
        case 0x1a2b00u: goto label_1a2b00;
        case 0x1a2b04u: goto label_1a2b04;
        case 0x1a2b08u: goto label_1a2b08;
        case 0x1a2b0cu: goto label_1a2b0c;
        case 0x1a2b10u: goto label_1a2b10;
        case 0x1a2b14u: goto label_1a2b14;
        case 0x1a2b18u: goto label_1a2b18;
        case 0x1a2b1cu: goto label_1a2b1c;
        case 0x1a2b20u: goto label_1a2b20;
        case 0x1a2b24u: goto label_1a2b24;
        case 0x1a2b28u: goto label_1a2b28;
        case 0x1a2b2cu: goto label_1a2b2c;
        case 0x1a2b30u: goto label_1a2b30;
        case 0x1a2b34u: goto label_1a2b34;
        case 0x1a2b38u: goto label_1a2b38;
        case 0x1a2b3cu: goto label_1a2b3c;
        case 0x1a2b40u: goto label_1a2b40;
        case 0x1a2b44u: goto label_1a2b44;
        case 0x1a2b48u: goto label_1a2b48;
        case 0x1a2b4cu: goto label_1a2b4c;
        case 0x1a2b50u: goto label_1a2b50;
        case 0x1a2b54u: goto label_1a2b54;
        case 0x1a2b58u: goto label_1a2b58;
        case 0x1a2b5cu: goto label_1a2b5c;
        case 0x1a2b60u: goto label_1a2b60;
        case 0x1a2b64u: goto label_1a2b64;
        case 0x1a2b68u: goto label_1a2b68;
        case 0x1a2b6cu: goto label_1a2b6c;
        case 0x1a2b70u: goto label_1a2b70;
        case 0x1a2b74u: goto label_1a2b74;
        case 0x1a2b78u: goto label_1a2b78;
        case 0x1a2b7cu: goto label_1a2b7c;
        case 0x1a2b80u: goto label_1a2b80;
        case 0x1a2b84u: goto label_1a2b84;
        case 0x1a2b88u: goto label_1a2b88;
        case 0x1a2b8cu: goto label_1a2b8c;
        case 0x1a2b90u: goto label_1a2b90;
        case 0x1a2b94u: goto label_1a2b94;
        case 0x1a2b98u: goto label_1a2b98;
        case 0x1a2b9cu: goto label_1a2b9c;
        case 0x1a2ba0u: goto label_1a2ba0;
        case 0x1a2ba4u: goto label_1a2ba4;
        case 0x1a2ba8u: goto label_1a2ba8;
        case 0x1a2bacu: goto label_1a2bac;
        case 0x1a2bb0u: goto label_1a2bb0;
        case 0x1a2bb4u: goto label_1a2bb4;
        case 0x1a2bb8u: goto label_1a2bb8;
        case 0x1a2bbcu: goto label_1a2bbc;
        case 0x1a2bc0u: goto label_1a2bc0;
        case 0x1a2bc4u: goto label_1a2bc4;
        case 0x1a2bc8u: goto label_1a2bc8;
        case 0x1a2bccu: goto label_1a2bcc;
        case 0x1a2bd0u: goto label_1a2bd0;
        case 0x1a2bd4u: goto label_1a2bd4;
        case 0x1a2bd8u: goto label_1a2bd8;
        case 0x1a2bdcu: goto label_1a2bdc;
        case 0x1a2be0u: goto label_1a2be0;
        case 0x1a2be4u: goto label_1a2be4;
        case 0x1a2be8u: goto label_1a2be8;
        case 0x1a2becu: goto label_1a2bec;
        case 0x1a2bf0u: goto label_1a2bf0;
        case 0x1a2bf4u: goto label_1a2bf4;
        case 0x1a2bf8u: goto label_1a2bf8;
        case 0x1a2bfcu: goto label_1a2bfc;
        case 0x1a2c00u: goto label_1a2c00;
        case 0x1a2c04u: goto label_1a2c04;
        case 0x1a2c08u: goto label_1a2c08;
        case 0x1a2c0cu: goto label_1a2c0c;
        case 0x1a2c10u: goto label_1a2c10;
        case 0x1a2c14u: goto label_1a2c14;
        case 0x1a2c18u: goto label_1a2c18;
        case 0x1a2c1cu: goto label_1a2c1c;
        case 0x1a2c20u: goto label_1a2c20;
        case 0x1a2c24u: goto label_1a2c24;
        case 0x1a2c28u: goto label_1a2c28;
        case 0x1a2c2cu: goto label_1a2c2c;
        case 0x1a2c30u: goto label_1a2c30;
        case 0x1a2c34u: goto label_1a2c34;
        case 0x1a2c38u: goto label_1a2c38;
        case 0x1a2c3cu: goto label_1a2c3c;
        case 0x1a2c40u: goto label_1a2c40;
        case 0x1a2c44u: goto label_1a2c44;
        case 0x1a2c48u: goto label_1a2c48;
        case 0x1a2c4cu: goto label_1a2c4c;
        case 0x1a2c50u: goto label_1a2c50;
        case 0x1a2c54u: goto label_1a2c54;
        case 0x1a2c58u: goto label_1a2c58;
        case 0x1a2c5cu: goto label_1a2c5c;
        case 0x1a2c60u: goto label_1a2c60;
        case 0x1a2c64u: goto label_1a2c64;
        case 0x1a2c68u: goto label_1a2c68;
        case 0x1a2c6cu: goto label_1a2c6c;
        case 0x1a2c70u: goto label_1a2c70;
        case 0x1a2c74u: goto label_1a2c74;
        case 0x1a2c78u: goto label_1a2c78;
        case 0x1a2c7cu: goto label_1a2c7c;
        case 0x1a2c80u: goto label_1a2c80;
        case 0x1a2c84u: goto label_1a2c84;
        case 0x1a2c88u: goto label_1a2c88;
        case 0x1a2c8cu: goto label_1a2c8c;
        case 0x1a2c90u: goto label_1a2c90;
        case 0x1a2c94u: goto label_1a2c94;
        case 0x1a2c98u: goto label_1a2c98;
        case 0x1a2c9cu: goto label_1a2c9c;
        case 0x1a2ca0u: goto label_1a2ca0;
        case 0x1a2ca4u: goto label_1a2ca4;
        case 0x1a2ca8u: goto label_1a2ca8;
        case 0x1a2cacu: goto label_1a2cac;
        case 0x1a2cb0u: goto label_1a2cb0;
        case 0x1a2cb4u: goto label_1a2cb4;
        case 0x1a2cb8u: goto label_1a2cb8;
        case 0x1a2cbcu: goto label_1a2cbc;
        case 0x1a2cc0u: goto label_1a2cc0;
        case 0x1a2cc4u: goto label_1a2cc4;
        case 0x1a2cc8u: goto label_1a2cc8;
        case 0x1a2cccu: goto label_1a2ccc;
        case 0x1a2cd0u: goto label_1a2cd0;
        case 0x1a2cd4u: goto label_1a2cd4;
        case 0x1a2cd8u: goto label_1a2cd8;
        case 0x1a2cdcu: goto label_1a2cdc;
        case 0x1a2ce0u: goto label_1a2ce0;
        case 0x1a2ce4u: goto label_1a2ce4;
        case 0x1a2ce8u: goto label_1a2ce8;
        case 0x1a2cecu: goto label_1a2cec;
        case 0x1a2cf0u: goto label_1a2cf0;
        case 0x1a2cf4u: goto label_1a2cf4;
        case 0x1a2cf8u: goto label_1a2cf8;
        case 0x1a2cfcu: goto label_1a2cfc;
        case 0x1a2d00u: goto label_1a2d00;
        case 0x1a2d04u: goto label_1a2d04;
        case 0x1a2d08u: goto label_1a2d08;
        case 0x1a2d0cu: goto label_1a2d0c;
        case 0x1a2d10u: goto label_1a2d10;
        case 0x1a2d14u: goto label_1a2d14;
        case 0x1a2d18u: goto label_1a2d18;
        case 0x1a2d1cu: goto label_1a2d1c;
        case 0x1a2d20u: goto label_1a2d20;
        case 0x1a2d24u: goto label_1a2d24;
        case 0x1a2d28u: goto label_1a2d28;
        case 0x1a2d2cu: goto label_1a2d2c;
        case 0x1a2d30u: goto label_1a2d30;
        case 0x1a2d34u: goto label_1a2d34;
        case 0x1a2d38u: goto label_1a2d38;
        case 0x1a2d3cu: goto label_1a2d3c;
        case 0x1a2d40u: goto label_1a2d40;
        case 0x1a2d44u: goto label_1a2d44;
        case 0x1a2d48u: goto label_1a2d48;
        case 0x1a2d4cu: goto label_1a2d4c;
        case 0x1a2d50u: goto label_1a2d50;
        case 0x1a2d54u: goto label_1a2d54;
        case 0x1a2d58u: goto label_1a2d58;
        case 0x1a2d5cu: goto label_1a2d5c;
        default: break;
    }

    ctx->pc = 0x1a28c0u;

label_1a28c0:
    // 0x1a28c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a28c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a28c4:
    // 0x1a28c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a28c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a28c8:
    // 0x1a28c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a28c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a28cc:
    // 0x1a28cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a28ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a28d0:
    // 0x1a28d0: 0xc061a1e  jal         func_186878
label_1a28d4:
    if (ctx->pc == 0x1A28D4u) {
        ctx->pc = 0x1A28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28D0u;
        // 0x1a28d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28D8u;
        goto label_1a28d8;
    }
    ctx->pc = 0x1A28D0u;
    SET_GPR_U32(ctx, 31, 0x1A28D8u);
    ctx->pc = 0x1A28D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28D0u;
    // 0x1a28d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A28D0u, 0x1A28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28D8u;
label_1a28d8:
    // 0x1a28d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a28d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a28dc:
    // 0x1a28dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a28dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a28e0:
    // 0x1a28e0: 0xc06cdda  jal         func_1B3768
label_1a28e4:
    if (ctx->pc == 0x1A28E4u) {
        ctx->pc = 0x1A28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28E0u;
        // 0x1a28e4: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28E8u;
        goto label_1a28e8;
    }
    ctx->pc = 0x1A28E0u;
    SET_GPR_U32(ctx, 31, 0x1A28E8u);
    ctx->pc = 0x1A28E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28E0u;
    // 0x1a28e4: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A28E0u, 0x1A28E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28E8u;
label_1a28e8:
    // 0x1a28e8: 0xc061a26  jal         func_186898
label_1a28ec:
    if (ctx->pc == 0x1A28ECu) {
        ctx->pc = 0x1A28ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A28E8u;
        // 0x1a28ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A28F0u;
        goto label_1a28f0;
    }
    ctx->pc = 0x1A28E8u;
    SET_GPR_U32(ctx, 31, 0x1A28F0u);
    ctx->pc = 0x1A28ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28E8u;
    // 0x1a28ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A28E8u, 0x1A28F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A28F0u;
label_1a28f0:
    // 0x1a28f0: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1a28f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a28f4:
    // 0x1a28f4: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x1a28f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
label_1a28f8:
    // 0x1a28f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a28f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a28fc:
    // 0x1a28fc: 0x0  nop
    ctx->pc = 0x1a28fcu;
    // NOP
label_1a2900:
    // 0x1a2900: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a2900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2904:
    // 0x1a2904: 0x0  nop
    ctx->pc = 0x1a2904u;
    // NOP
label_1a2908:
    // 0x1a2908: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1a290c:
    if (ctx->pc == 0x1A290Cu) {
        ctx->pc = 0x1A2910u;
        goto label_1a2910;
    }
    ctx->pc = 0x1A2908u;
    {
        const bool branch_taken_0x1a2908 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2908) {
            ctx->pc = 0x1A2930u;
            goto label_1a2930;
        }
    }
    ctx->pc = 0x1A2910u;
label_1a2910:
    // 0x1a2910: 0xc068f6e  jal         func_1A3DB8
label_1a2914:
    if (ctx->pc == 0x1A2914u) {
        ctx->pc = 0x1A2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2910u;
        // 0x1a2914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2918u;
        goto label_1a2918;
    }
    ctx->pc = 0x1A2910u;
    SET_GPR_U32(ctx, 31, 0x1A2918u);
    ctx->pc = 0x1A2914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2910u;
    // 0x1a2914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A2910u, 0x1A2918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2918u;
label_1a2918:
    // 0x1a2918: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a2918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a291c:
    // 0x1a291c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a2920:
    // 0x1a2920: 0x4410014  bgez        $v0, . + 4 + (0x14 << 2)
label_1a2924:
    if (ctx->pc == 0x1A2924u) {
        ctx->pc = 0x1A2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2920u;
        // 0x1a2924: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2928u;
        goto label_1a2928;
    }
    ctx->pc = 0x1A2920u;
    {
        const bool branch_taken_0x1a2920 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2920u;
        // 0x1a2924: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2920) {
            ctx->pc = 0x1A2974u;
            goto label_1a2974;
        }
    }
    ctx->pc = 0x1A2928u;
label_1a2928:
    // 0x1a2928: 0x10000018  b           . + 4 + (0x18 << 2)
label_1a292c:
    if (ctx->pc == 0x1A292Cu) {
        ctx->pc = 0x1A292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2928u;
        // 0x1a292c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2930u;
        goto label_1a2930;
    }
    ctx->pc = 0x1A2928u;
    {
        const bool branch_taken_0x1a2928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2928u;
        // 0x1a292c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2928) {
            ctx->pc = 0x1A298Cu;
            goto label_1a298c;
        }
    }
    ctx->pc = 0x1A2930u;
label_1a2930:
    // 0x1a2930: 0xc061a26  jal         func_186898
label_1a2934:
    if (ctx->pc == 0x1A2934u) {
        ctx->pc = 0x1A2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2930u;
        // 0x1a2934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2938u;
        goto label_1a2938;
    }
    ctx->pc = 0x1A2930u;
    SET_GPR_U32(ctx, 31, 0x1A2938u);
    ctx->pc = 0x1A2934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2930u;
    // 0x1a2934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A2930u, 0x1A2938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2938u;
label_1a2938:
    // 0x1a2938: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1a2938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a293c:
    // 0x1a293c: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1a293cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_1a2940:
    // 0x1a2940: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a2940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1a2944:
    // 0x1a2944: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2948:
    // 0x1a2948: 0x0  nop
    ctx->pc = 0x1a2948u;
    // NOP
label_1a294c:
    // 0x1a294c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a294cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2950:
    // 0x1a2950: 0x0  nop
    ctx->pc = 0x1a2950u;
    // NOP
label_1a2954:
    // 0x1a2954: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_1a2958:
    if (ctx->pc == 0x1A2958u) {
        ctx->pc = 0x1A295Cu;
        goto label_1a295c;
    }
    ctx->pc = 0x1A2954u;
    {
        const bool branch_taken_0x1a2954 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2954) {
            ctx->pc = 0x1A29C4u;
            goto label_1a29c4;
        }
    }
    ctx->pc = 0x1A295Cu;
label_1a295c:
    // 0x1a295c: 0xc069350  jal         func_1A4D40
label_1a2960:
    if (ctx->pc == 0x1A2960u) {
        ctx->pc = 0x1A2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A295Cu;
        // 0x1a2960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2964u;
        goto label_1a2964;
    }
    ctx->pc = 0x1A295Cu;
    SET_GPR_U32(ctx, 31, 0x1A2964u);
    ctx->pc = 0x1A2960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A295Cu;
    // 0x1a2960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D40u, 0x1A295Cu, 0x1A2964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2964u;
label_1a2964:
    // 0x1a2964: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a2964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a2968:
    // 0x1a2968: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a2968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a296c:
    // 0x1a296c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a2970:
    if (ctx->pc == 0x1A2970u) {
        ctx->pc = 0x1A2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A296Cu;
        // 0x1a2970: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2974u;
        goto label_1a2974;
    }
    ctx->pc = 0x1A296Cu;
    {
        const bool branch_taken_0x1a296c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A296Cu;
        // 0x1a2970: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a296c) {
            ctx->pc = 0x1A2988u;
            goto label_1a2988;
        }
    }
    ctx->pc = 0x1A2974u;
label_1a2974:
    // 0x1a2974: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2978:
    // 0x1a2978: 0x0  nop
    ctx->pc = 0x1a2978u;
    // NOP
label_1a297c:
    // 0x1a297c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a297cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2980:
    // 0x1a2980: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2984:
    if (ctx->pc == 0x1A2984u) {
        ctx->pc = 0x1A2988u;
        goto label_1a2988;
    }
    ctx->pc = 0x1A2980u;
    {
        const bool branch_taken_0x1a2980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2980) {
            ctx->pc = 0x1A29A0u;
            goto label_1a29a0;
        }
    }
    ctx->pc = 0x1A2988u;
label_1a2988:
    // 0x1a2988: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a298c:
    // 0x1a298c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2990:
    // 0x1a2990: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2994:
    // 0x1a2994: 0x0  nop
    ctx->pc = 0x1a2994u;
    // NOP
label_1a2998:
    // 0x1a2998: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a299c:
    // 0x1a299c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a299cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a29a0:
    // 0x1a29a0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a29a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a29a4:
    // 0x1a29a4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a29a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a29a8:
    // 0x1a29a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a29a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a29ac:
    // 0x1a29ac: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a29acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1a29b0:
    // 0x1a29b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a29b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a29b4:
    // 0x1a29b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a29b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a29b8:
    // 0x1a29b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a29b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a29bc:
    // 0x1a29bc: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_1a29c0:
    if (ctx->pc == 0x1A29C0u) {
        ctx->pc = 0x1A29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29BCu;
        // 0x1a29c0: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29C4u;
        goto label_1a29c4;
    }
    ctx->pc = 0x1A29BCu;
    {
        const bool branch_taken_0x1a29bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29BCu;
        // 0x1a29c0: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29bc) {
            ctx->pc = 0x1A2D48u;
            goto label_1a2d48;
        }
    }
    ctx->pc = 0x1A29C4u;
label_1a29c4:
    // 0x1a29c4: 0xc061a12  jal         func_186848
label_1a29c8:
    if (ctx->pc == 0x1A29C8u) {
        ctx->pc = 0x1A29C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29C4u;
        // 0x1a29c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29CCu;
        goto label_1a29cc;
    }
    ctx->pc = 0x1A29C4u;
    SET_GPR_U32(ctx, 31, 0x1A29CCu);
    ctx->pc = 0x1A29C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29C4u;
    // 0x1a29c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A29C4u, 0x1A29CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29CCu;
label_1a29cc:
    // 0x1a29cc: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a29ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a29d0:
    // 0x1a29d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a29d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a29d4:
    // 0x1a29d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a29d8:
    // 0x1a29d8: 0x40f809  jalr        $v0
label_1a29dc:
    if (ctx->pc == 0x1A29DCu) {
        ctx->pc = 0x1A29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29D8u;
        // 0x1a29dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29E0u;
        goto label_1a29e0;
    }
    ctx->pc = 0x1A29D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A29E0u);
        ctx->pc = 0x1A29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29D8u;
        // 0x1a29dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A29D8u, 0x1A29E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A29E0u;
label_1a29e0:
    // 0x1a29e0: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1a29e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_1a29e4:
    // 0x1a29e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a29e8:
    // 0x1a29e8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_1a29ec:
    if (ctx->pc == 0x1A29ECu) {
        ctx->pc = 0x1A29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29E8u;
        // 0x1a29ec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29F0u;
        goto label_1a29f0;
    }
    ctx->pc = 0x1A29E8u;
    {
        const bool branch_taken_0x1a29e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29E8u;
        // 0x1a29ec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a29e8) {
            ctx->pc = 0x1A2A1Cu;
            goto label_1a2a1c;
        }
    }
    ctx->pc = 0x1A29F0u;
label_1a29f0:
    // 0x1a29f0: 0xc061a22  jal         func_186888
label_1a29f4:
    if (ctx->pc == 0x1A29F4u) {
        ctx->pc = 0x1A29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29F0u;
        // 0x1a29f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29F8u;
        goto label_1a29f8;
    }
    ctx->pc = 0x1A29F0u;
    SET_GPR_U32(ctx, 31, 0x1A29F8u);
    ctx->pc = 0x1A29F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29F0u;
    // 0x1a29f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186888u, 0x1A29F0u, 0x1A29F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A29F8u;
label_1a29f8:
    // 0x1a29f8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a29f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a29fc:
    // 0x1a29fc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1a29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1a2a00:
    // 0x1a2a00: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1a2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1a2a04:
    // 0x1a2a04: 0x2484bdc0  addiu       $a0, $a0, -0x4240
    ctx->pc = 0x1a2a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
label_1a2a08:
    // 0x1a2a08: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1a2a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a2a0c:
    // 0x1a2a0c: 0xc0603fe  jal         func_180FF8
label_1a2a10:
    if (ctx->pc == 0x1A2A10u) {
        ctx->pc = 0x1A2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A0Cu;
        // 0x1a2a10: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A14u;
        goto label_1a2a14;
    }
    ctx->pc = 0x1A2A0Cu;
    SET_GPR_U32(ctx, 31, 0x1A2A14u);
    ctx->pc = 0x1A2A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A0Cu;
    // 0x1a2a10: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180FF8u, 0x1A2A0Cu, 0x1A2A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2A14u;
label_1a2a14:
    // 0x1a2a14: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1a2a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_1a2a18:
    // 0x1a2a18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a2a1c:
    // 0x1a2a1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a2a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2a20:
    // 0x1a2a20: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a2a24:
    // 0x1a2a24: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a2a28:
    if (ctx->pc == 0x1A2A28u) {
        ctx->pc = 0x1A2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A24u;
        // 0x1a2a28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A2Cu;
        goto label_1a2a2c;
    }
    ctx->pc = 0x1A2A24u;
    {
        const bool branch_taken_0x1a2a24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A24u;
        // 0x1a2a28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a24) {
            ctx->pc = 0x1A2A40u;
            goto label_1a2a40;
        }
    }
    ctx->pc = 0x1A2A2Cu;
label_1a2a2c:
    // 0x1a2a2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2a30:
    // 0x1a2a30: 0x0  nop
    ctx->pc = 0x1a2a30u;
    // NOP
label_1a2a34:
    // 0x1a2a34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2a34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2a38:
    // 0x1a2a38: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2a3c:
    if (ctx->pc == 0x1A2A3Cu) {
        ctx->pc = 0x1A2A40u;
        goto label_1a2a40;
    }
    ctx->pc = 0x1A2A38u;
    {
        const bool branch_taken_0x1a2a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a38) {
            ctx->pc = 0x1A2A58u;
            goto label_1a2a58;
        }
    }
    ctx->pc = 0x1A2A40u;
label_1a2a40:
    // 0x1a2a40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a2a44:
    // 0x1a2a44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2a48:
    // 0x1a2a48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2a4c:
    // 0x1a2a4c: 0x0  nop
    ctx->pc = 0x1a2a4cu;
    // NOP
label_1a2a50:
    // 0x1a2a50: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2a54:
    // 0x1a2a54: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a2a54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a2a58:
    // 0x1a2a58: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a2a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a2a5c:
    // 0x1a2a5c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2a5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a2a60:
    // 0x1a2a60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2a64:
    // 0x1a2a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2a68:
    // 0x1a2a68: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a2a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1a2a6c:
    // 0x1a2a6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2a70:
    // 0x1a2a70: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a2a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a2a74:
    // 0x1a2a74: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1a2a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_1a2a78:
    // 0x1a2a78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a2a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a2a7c:
    // 0x1a2a7c: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_1a2a80:
    if (ctx->pc == 0x1A2A80u) {
        ctx->pc = 0x1A2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A7Cu;
        // 0x1a2a80: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A84u;
        goto label_1a2a84;
    }
    ctx->pc = 0x1A2A7Cu;
    {
        const bool branch_taken_0x1a2a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A7Cu;
        // 0x1a2a80: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a7c) {
            ctx->pc = 0x1A2B04u;
            goto label_1a2b04;
        }
    }
    ctx->pc = 0x1A2A84u;
label_1a2a84:
    // 0x1a2a84: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a2a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_1a2a88:
    // 0x1a2a88: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a2a8c:
    if (ctx->pc == 0x1A2A8Cu) {
        ctx->pc = 0x1A2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A88u;
        // 0x1a2a8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A90u;
        goto label_1a2a90;
    }
    ctx->pc = 0x1A2A88u;
    {
        const bool branch_taken_0x1a2a88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A88u;
        // 0x1a2a8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2a88) {
            ctx->pc = 0x1A2AA4u;
            goto label_1a2aa4;
        }
    }
    ctx->pc = 0x1A2A90u;
label_1a2a90:
    // 0x1a2a90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2a94:
    // 0x1a2a94: 0x0  nop
    ctx->pc = 0x1a2a94u;
    // NOP
label_1a2a98:
    // 0x1a2a98: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2a9c:
    // 0x1a2a9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2aa0:
    if (ctx->pc == 0x1A2AA0u) {
        ctx->pc = 0x1A2AA4u;
        goto label_1a2aa4;
    }
    ctx->pc = 0x1A2A9Cu;
    {
        const bool branch_taken_0x1a2a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2a9c) {
            ctx->pc = 0x1A2ABCu;
            goto label_1a2abc;
        }
    }
    ctx->pc = 0x1A2AA4u;
label_1a2aa4:
    // 0x1a2aa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a2aa8:
    // 0x1a2aa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2aac:
    // 0x1a2aac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2ab0:
    // 0x1a2ab0: 0x0  nop
    ctx->pc = 0x1a2ab0u;
    // NOP
label_1a2ab4:
    // 0x1a2ab4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2ab8:
    // 0x1a2ab8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a2ab8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a2abc:
    // 0x1a2abc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a2abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a2ac0:
    // 0x1a2ac0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a2ac4:
    // 0x1a2ac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2ac8:
    // 0x1a2ac8: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x1a2ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2acc:
    // 0x1a2acc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a2accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a2ad0:
    // 0x1a2ad0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2ad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2ad4:
    // 0x1a2ad4: 0x0  nop
    ctx->pc = 0x1a2ad4u;
    // NOP
label_1a2ad8:
    // 0x1a2ad8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1a2adc:
    if (ctx->pc == 0x1A2ADCu) {
        ctx->pc = 0x1A2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AD8u;
        // 0x1a2adc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AE0u;
        goto label_1a2ae0;
    }
    ctx->pc = 0x1A2AD8u;
    {
        const bool branch_taken_0x1a2ad8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AD8u;
        // 0x1a2adc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ad8) {
            ctx->pc = 0x1A2AFCu;
            goto label_1a2afc;
        }
    }
    ctx->pc = 0x1A2AE0u;
label_1a2ae0:
    // 0x1a2ae0: 0xc064de0  jal         func_193780
label_1a2ae4:
    if (ctx->pc == 0x1A2AE4u) {
        ctx->pc = 0x1A2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AE0u;
        // 0x1a2ae4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AE8u;
        goto label_1a2ae8;
    }
    ctx->pc = 0x1A2AE0u;
    SET_GPR_U32(ctx, 31, 0x1A2AE8u);
    ctx->pc = 0x1A2AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2AE0u;
    // 0x1a2ae4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193780u, 0x1A2AE0u, 0x1A2AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AE8u;
label_1a2ae8:
    // 0x1a2ae8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a2aec:
    if (ctx->pc == 0x1A2AECu) {
        ctx->pc = 0x1A2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AE8u;
        // 0x1a2aec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AF0u;
        goto label_1a2af0;
    }
    ctx->pc = 0x1A2AE8u;
    {
        const bool branch_taken_0x1a2ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AE8u;
        // 0x1a2aec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ae8) {
            ctx->pc = 0x1A2AFCu;
            goto label_1a2afc;
        }
    }
    ctx->pc = 0x1A2AF0u;
label_1a2af0:
    // 0x1a2af0: 0xc0692f6  jal         func_1A4BD8
label_1a2af4:
    if (ctx->pc == 0x1A2AF4u) {
        ctx->pc = 0x1A2AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AF0u;
        // 0x1a2af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AF8u;
        goto label_1a2af8;
    }
    ctx->pc = 0x1A2AF0u;
    SET_GPR_U32(ctx, 31, 0x1A2AF8u);
    ctx->pc = 0x1A2AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2AF0u;
    // 0x1a2af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BD8u, 0x1A2AF0u, 0x1A2AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2AF8u;
label_1a2af8:
    // 0x1a2af8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a2af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a2afc:
    // 0x1a2afc: 0x10000092  b           . + 4 + (0x92 << 2)
label_1a2b00:
    if (ctx->pc == 0x1A2B00u) {
        ctx->pc = 0x1A2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AFCu;
        // 0x1a2b00: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B04u;
        goto label_1a2b04;
    }
    ctx->pc = 0x1A2AFCu;
    {
        const bool branch_taken_0x1a2afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AFCu;
        // 0x1a2b00: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2afc) {
            ctx->pc = 0x1A2D48u;
            goto label_1a2d48;
        }
    }
    ctx->pc = 0x1A2B04u;
label_1a2b04:
    // 0x1a2b04: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
label_1a2b08:
    if (ctx->pc == 0x1A2B08u) {
        ctx->pc = 0x1A2B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B04u;
        // 0x1a2b08: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B0Cu;
        goto label_1a2b0c;
    }
    ctx->pc = 0x1A2B04u;
    {
        const bool branch_taken_0x1a2b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2b04) {
            ctx->pc = 0x1A2B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2B04u;
            // 0x1a2b08: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2B90u;
            goto label_1a2b90;
        }
    }
    ctx->pc = 0x1A2B0Cu;
label_1a2b0c:
    // 0x1a2b0c: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_1a2b10:
    // 0x1a2b10: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a2b14:
    if (ctx->pc == 0x1A2B14u) {
        ctx->pc = 0x1A2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B10u;
        // 0x1a2b14: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B18u;
        goto label_1a2b18;
    }
    ctx->pc = 0x1A2B10u;
    {
        const bool branch_taken_0x1a2b10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B10u;
        // 0x1a2b14: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b10) {
            ctx->pc = 0x1A2B2Cu;
            goto label_1a2b2c;
        }
    }
    ctx->pc = 0x1A2B18u;
label_1a2b18:
    // 0x1a2b18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2b1c:
    // 0x1a2b1c: 0x0  nop
    ctx->pc = 0x1a2b1cu;
    // NOP
label_1a2b20:
    // 0x1a2b20: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2b24:
    // 0x1a2b24: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2b28:
    if (ctx->pc == 0x1A2B28u) {
        ctx->pc = 0x1A2B2Cu;
        goto label_1a2b2c;
    }
    ctx->pc = 0x1A2B24u;
    {
        const bool branch_taken_0x1a2b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2b24) {
            ctx->pc = 0x1A2B44u;
            goto label_1a2b44;
        }
    }
    ctx->pc = 0x1A2B2Cu;
label_1a2b2c:
    // 0x1a2b2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a2b30:
    // 0x1a2b30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2b34:
    // 0x1a2b34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2b38:
    // 0x1a2b38: 0x0  nop
    ctx->pc = 0x1a2b38u;
    // NOP
label_1a2b3c:
    // 0x1a2b3c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2b40:
    // 0x1a2b40: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a2b40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a2b44:
    // 0x1a2b44: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a2b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a2b48:
    // 0x1a2b48: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a2b4c:
    // 0x1a2b4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2b50:
    // 0x1a2b50: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x1a2b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2b54:
    // 0x1a2b54: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a2b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a2b58:
    // 0x1a2b58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2b5c:
    // 0x1a2b5c: 0x0  nop
    ctx->pc = 0x1a2b5cu;
    // NOP
label_1a2b60:
    // 0x1a2b60: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_1a2b64:
    if (ctx->pc == 0x1A2B64u) {
        ctx->pc = 0x1A2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B60u;
        // 0x1a2b64: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B68u;
        goto label_1a2b68;
    }
    ctx->pc = 0x1A2B60u;
    {
        const bool branch_taken_0x1a2b60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2b60) {
            ctx->pc = 0x1A2B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2B60u;
            // 0x1a2b64: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2B90u;
            goto label_1a2b90;
        }
    }
    ctx->pc = 0x1A2B68u;
label_1a2b68:
    // 0x1a2b68: 0xc064d9c  jal         func_193670
label_1a2b6c:
    if (ctx->pc == 0x1A2B6Cu) {
        ctx->pc = 0x1A2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B68u;
        // 0x1a2b6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B70u;
        goto label_1a2b70;
    }
    ctx->pc = 0x1A2B68u;
    SET_GPR_U32(ctx, 31, 0x1A2B70u);
    ctx->pc = 0x1A2B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2B68u;
    // 0x1a2b6c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193670u, 0x1A2B68u, 0x1A2B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B70u;
label_1a2b70:
    // 0x1a2b70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2b74:
    if (ctx->pc == 0x1A2B74u) {
        ctx->pc = 0x1A2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B70u;
        // 0x1a2b74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B78u;
        goto label_1a2b78;
    }
    ctx->pc = 0x1A2B70u;
    {
        const bool branch_taken_0x1a2b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B70u;
        // 0x1a2b74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b70) {
            ctx->pc = 0x1A2B8Cu;
            goto label_1a2b8c;
        }
    }
    ctx->pc = 0x1A2B78u;
label_1a2b78:
    // 0x1a2b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2b7c:
    // 0x1a2b7c: 0xc0690c8  jal         func_1A4320
label_1a2b80:
    if (ctx->pc == 0x1A2B80u) {
        ctx->pc = 0x1A2B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B7Cu;
        // 0x1a2b80: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B84u;
        goto label_1a2b84;
    }
    ctx->pc = 0x1A2B7Cu;
    SET_GPR_U32(ctx, 31, 0x1A2B84u);
    ctx->pc = 0x1A2B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2B7Cu;
    // 0x1a2b80: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4320u, 0x1A2B7Cu, 0x1A2B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B84u;
label_1a2b84:
    // 0x1a2b84: 0x10000071  b           . + 4 + (0x71 << 2)
label_1a2b88:
    if (ctx->pc == 0x1A2B88u) {
        ctx->pc = 0x1A2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B84u;
        // 0x1a2b88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B8Cu;
        goto label_1a2b8c;
    }
    ctx->pc = 0x1A2B84u;
    {
        const bool branch_taken_0x1a2b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B84u;
        // 0x1a2b88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b84) {
            ctx->pc = 0x1A2D4Cu;
            goto label_1a2d4c;
        }
    }
    ctx->pc = 0x1A2B8Cu;
label_1a2b8c:
    // 0x1a2b8c: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1a2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_1a2b90:
    // 0x1a2b90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a2b94:
    // 0x1a2b94: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
label_1a2b98:
    if (ctx->pc == 0x1A2B98u) {
        ctx->pc = 0x1A2B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B94u;
        // 0x1a2b98: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B9Cu;
        goto label_1a2b9c;
    }
    ctx->pc = 0x1A2B94u;
    {
        const bool branch_taken_0x1a2b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b94) {
            ctx->pc = 0x1A2B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2B94u;
            // 0x1a2b98: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C20u;
            goto label_1a2c20;
        }
    }
    ctx->pc = 0x1A2B9Cu;
label_1a2b9c:
    // 0x1a2b9c: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_1a2ba0:
    // 0x1a2ba0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a2ba4:
    if (ctx->pc == 0x1A2BA4u) {
        ctx->pc = 0x1A2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BA0u;
        // 0x1a2ba4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BA8u;
        goto label_1a2ba8;
    }
    ctx->pc = 0x1A2BA0u;
    {
        const bool branch_taken_0x1a2ba0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BA0u;
        // 0x1a2ba4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ba0) {
            ctx->pc = 0x1A2BBCu;
            goto label_1a2bbc;
        }
    }
    ctx->pc = 0x1A2BA8u;
label_1a2ba8:
    // 0x1a2ba8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2bac:
    // 0x1a2bac: 0x0  nop
    ctx->pc = 0x1a2bacu;
    // NOP
label_1a2bb0:
    // 0x1a2bb0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2bb4:
    // 0x1a2bb4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2bb8:
    if (ctx->pc == 0x1A2BB8u) {
        ctx->pc = 0x1A2BBCu;
        goto label_1a2bbc;
    }
    ctx->pc = 0x1A2BB4u;
    {
        const bool branch_taken_0x1a2bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2bb4) {
            ctx->pc = 0x1A2BD4u;
            goto label_1a2bd4;
        }
    }
    ctx->pc = 0x1A2BBCu;
label_1a2bbc:
    // 0x1a2bbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a2bc0:
    // 0x1a2bc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2bc4:
    // 0x1a2bc4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2bc8:
    // 0x1a2bc8: 0x0  nop
    ctx->pc = 0x1a2bc8u;
    // NOP
label_1a2bcc:
    // 0x1a2bcc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2bd0:
    // 0x1a2bd0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a2bd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a2bd4:
    // 0x1a2bd4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a2bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a2bd8:
    // 0x1a2bd8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a2bdc:
    // 0x1a2bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2be0:
    // 0x1a2be0: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x1a2be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2be4:
    // 0x1a2be4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a2be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a2be8:
    // 0x1a2be8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2bec:
    // 0x1a2bec: 0x0  nop
    ctx->pc = 0x1a2becu;
    // NOP
label_1a2bf0:
    // 0x1a2bf0: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_1a2bf4:
    if (ctx->pc == 0x1A2BF4u) {
        ctx->pc = 0x1A2BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BF0u;
        // 0x1a2bf4: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BF8u;
        goto label_1a2bf8;
    }
    ctx->pc = 0x1A2BF0u;
    {
        const bool branch_taken_0x1a2bf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2bf0) {
            ctx->pc = 0x1A2BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BF0u;
            // 0x1a2bf4: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C20u;
            goto label_1a2c20;
        }
    }
    ctx->pc = 0x1A2BF8u;
label_1a2bf8:
    // 0x1a2bf8: 0xc064e0c  jal         func_193830
label_1a2bfc:
    if (ctx->pc == 0x1A2BFCu) {
        ctx->pc = 0x1A2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BF8u;
        // 0x1a2bfc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C00u;
        goto label_1a2c00;
    }
    ctx->pc = 0x1A2BF8u;
    SET_GPR_U32(ctx, 31, 0x1A2C00u);
    ctx->pc = 0x1A2BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2BF8u;
    // 0x1a2bfc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193830u, 0x1A2BF8u, 0x1A2C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C00u;
label_1a2c00:
    // 0x1a2c00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2c04:
    if (ctx->pc == 0x1A2C04u) {
        ctx->pc = 0x1A2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C00u;
        // 0x1a2c04: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C08u;
        goto label_1a2c08;
    }
    ctx->pc = 0x1A2C00u;
    {
        const bool branch_taken_0x1a2c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C00u;
        // 0x1a2c04: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c00) {
            ctx->pc = 0x1A2C1Cu;
            goto label_1a2c1c;
        }
    }
    ctx->pc = 0x1A2C08u;
label_1a2c08:
    // 0x1a2c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c0c:
    // 0x1a2c0c: 0xc069350  jal         func_1A4D40
label_1a2c10:
    if (ctx->pc == 0x1A2C10u) {
        ctx->pc = 0x1A2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C0Cu;
        // 0x1a2c10: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C14u;
        goto label_1a2c14;
    }
    ctx->pc = 0x1A2C0Cu;
    SET_GPR_U32(ctx, 31, 0x1A2C14u);
    ctx->pc = 0x1A2C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C0Cu;
    // 0x1a2c10: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D40u, 0x1A2C0Cu, 0x1A2C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C14u;
label_1a2c14:
    // 0x1a2c14: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1a2c18:
    if (ctx->pc == 0x1A2C18u) {
        ctx->pc = 0x1A2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C14u;
        // 0x1a2c18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C1Cu;
        goto label_1a2c1c;
    }
    ctx->pc = 0x1A2C14u;
    {
        const bool branch_taken_0x1a2c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C14u;
        // 0x1a2c18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c14) {
            ctx->pc = 0x1A2D4Cu;
            goto label_1a2d4c;
        }
    }
    ctx->pc = 0x1A2C1Cu;
label_1a2c1c:
    // 0x1a2c1c: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x1a2c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_1a2c20:
    // 0x1a2c20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a2c24:
    // 0x1a2c24: 0x54620049  bnel        $v1, $v0, . + 4 + (0x49 << 2)
label_1a2c28:
    if (ctx->pc == 0x1A2C28u) {
        ctx->pc = 0x1A2C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C24u;
        // 0x1a2c28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C2Cu;
        goto label_1a2c2c;
    }
    ctx->pc = 0x1A2C24u;
    {
        const bool branch_taken_0x1a2c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2c24) {
            ctx->pc = 0x1A2C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2C24u;
            // 0x1a2c28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2D4Cu;
            goto label_1a2d4c;
        }
    }
    ctx->pc = 0x1A2C2Cu;
label_1a2c2c:
    // 0x1a2c2c: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_1a2c30:
    // 0x1a2c30: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a2c34:
    if (ctx->pc == 0x1A2C34u) {
        ctx->pc = 0x1A2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C30u;
        // 0x1a2c34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C38u;
        goto label_1a2c38;
    }
    ctx->pc = 0x1A2C30u;
    {
        const bool branch_taken_0x1a2c30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C30u;
        // 0x1a2c34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c30) {
            ctx->pc = 0x1A2C4Cu;
            goto label_1a2c4c;
        }
    }
    ctx->pc = 0x1A2C38u;
label_1a2c38:
    // 0x1a2c38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2c3c:
    // 0x1a2c3c: 0x0  nop
    ctx->pc = 0x1a2c3cu;
    // NOP
label_1a2c40:
    // 0x1a2c40: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2c44:
    // 0x1a2c44: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2c48:
    if (ctx->pc == 0x1A2C48u) {
        ctx->pc = 0x1A2C4Cu;
        goto label_1a2c4c;
    }
    ctx->pc = 0x1A2C44u;
    {
        const bool branch_taken_0x1a2c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c44) {
            ctx->pc = 0x1A2C64u;
            goto label_1a2c64;
        }
    }
    ctx->pc = 0x1A2C4Cu;
label_1a2c4c:
    // 0x1a2c4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a2c50:
    // 0x1a2c50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2c54:
    // 0x1a2c54: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2c58:
    // 0x1a2c58: 0x0  nop
    ctx->pc = 0x1a2c58u;
    // NOP
label_1a2c5c:
    // 0x1a2c5c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2c60:
    // 0x1a2c60: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a2c60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a2c64:
    // 0x1a2c64: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a2c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a2c68:
    // 0x1a2c68: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a2c6c:
    // 0x1a2c6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2c70:
    // 0x1a2c70: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x1a2c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2c74:
    // 0x1a2c74: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a2c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a2c78:
    // 0x1a2c78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2c7c:
    // 0x1a2c7c: 0x0  nop
    ctx->pc = 0x1a2c7cu;
    // NOP
label_1a2c80:
    // 0x1a2c80: 0x45000031  bc1f        . + 4 + (0x31 << 2)
label_1a2c84:
    if (ctx->pc == 0x1A2C84u) {
        ctx->pc = 0x1A2C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C80u;
        // 0x1a2c84: 0x8e222b00  lw          $v0, 0x2B00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C88u;
        goto label_1a2c88;
    }
    ctx->pc = 0x1A2C80u;
    {
        const bool branch_taken_0x1a2c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C80u;
        // 0x1a2c84: 0x8e222b00  lw          $v0, 0x2B00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c80) {
            ctx->pc = 0x1A2D48u;
            goto label_1a2d48;
        }
    }
    ctx->pc = 0x1A2C88u;
label_1a2c88:
    // 0x1a2c88: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a2c8c:
    if (ctx->pc == 0x1A2C8Cu) {
        ctx->pc = 0x1A2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C88u;
        // 0x1a2c8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C90u;
        goto label_1a2c90;
    }
    ctx->pc = 0x1A2C88u;
    {
        const bool branch_taken_0x1a2c88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C88u;
        // 0x1a2c8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c88) {
            ctx->pc = 0x1A2CA4u;
            goto label_1a2ca4;
        }
    }
    ctx->pc = 0x1A2C90u;
label_1a2c90:
    // 0x1a2c90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2c94:
    // 0x1a2c94: 0x0  nop
    ctx->pc = 0x1a2c94u;
    // NOP
label_1a2c98:
    // 0x1a2c98: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2c9c:
    // 0x1a2c9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2ca0:
    if (ctx->pc == 0x1A2CA0u) {
        ctx->pc = 0x1A2CA4u;
        goto label_1a2ca4;
    }
    ctx->pc = 0x1A2C9Cu;
    {
        const bool branch_taken_0x1a2c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c9c) {
            ctx->pc = 0x1A2CBCu;
            goto label_1a2cbc;
        }
    }
    ctx->pc = 0x1A2CA4u;
label_1a2ca4:
    // 0x1a2ca4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a2ca8:
    // 0x1a2ca8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2cac:
    // 0x1a2cac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2cb0:
    // 0x1a2cb0: 0x0  nop
    ctx->pc = 0x1a2cb0u;
    // NOP
label_1a2cb4:
    // 0x1a2cb4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2cb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2cb8:
    // 0x1a2cb8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a2cb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a2cbc:
    // 0x1a2cbc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a2cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a2cc0:
    // 0x1a2cc0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a2cc4:
    // 0x1a2cc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2cc8:
    // 0x1a2cc8: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1a2cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_1a2ccc:
    // 0x1a2ccc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2cd0:
    // 0x1a2cd0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a2cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a2cd4:
    // 0x1a2cd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a2cd8:
    // 0x1a2cd8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a2cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a2cdc:
    // 0x1a2cdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a2cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a2ce0:
    // 0x1a2ce0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a2ce0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a2ce4:
    // 0x1a2ce4: 0xc0b12b0  jal         func_2C4AC0
label_1a2ce8:
    if (ctx->pc == 0x1A2CE8u) {
        ctx->pc = 0x1A2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CE4u;
        // 0x1a2ce8: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CECu;
        goto label_1a2cec;
    }
    ctx->pc = 0x1A2CE4u;
    SET_GPR_U32(ctx, 31, 0x1A2CECu);
    ctx->pc = 0x1A2CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2CE4u;
    // 0x1a2ce8: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A2CE4u, 0x1A2CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2CECu;
label_1a2cec:
    // 0x1a2cec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1a2cecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1a2cf0:
    // 0x1a2cf0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a2cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a2cf4:
    // 0x1a2cf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2cf8:
    // 0x1a2cf8: 0x0  nop
    ctx->pc = 0x1a2cf8u;
    // NOP
label_1a2cfc:
    // 0x1a2cfc: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1a2cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2d00:
    // 0x1a2d00: 0x0  nop
    ctx->pc = 0x1a2d00u;
    // NOP
label_1a2d04:
    // 0x1a2d04: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_1a2d08:
    if (ctx->pc == 0x1A2D08u) {
        ctx->pc = 0x1A2D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D04u;
        // 0x1a2d08: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D0Cu;
        goto label_1a2d0c;
    }
    ctx->pc = 0x1A2D04u;
    {
        const bool branch_taken_0x1a2d04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D04u;
        // 0x1a2d08: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d04) {
            ctx->pc = 0x1A2D38u;
            goto label_1a2d38;
        }
    }
    ctx->pc = 0x1A2D0Cu;
label_1a2d0c:
    // 0x1a2d0c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a2d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a2d10:
    // 0x1a2d10: 0x2443ff08  addiu       $v1, $v0, -0xF8
    ctx->pc = 0x1a2d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967048));
label_1a2d14:
    // 0x1a2d14: 0x9c47ff08  lwu         $a3, -0xF8($v0)
    ctx->pc = 0x1a2d14u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294967048)));
label_1a2d18:
    // 0x1a2d18: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x1a2d18u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a2d1c:
    // 0x1a2d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d20:
    // 0x1a2d20: 0xae0600e0  sw          $a2, 0xE0($s0)
    ctx->pc = 0x1a2d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 6));
label_1a2d24:
    // 0x1a2d24: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a2d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_1a2d28:
    // 0x1a2d28: 0xc06924e  jal         func_1A4938
label_1a2d2c:
    if (ctx->pc == 0x1A2D2Cu) {
        ctx->pc = 0x1A2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D28u;
        // 0x1a2d2c: 0xa72825  or          $a1, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D30u;
        goto label_1a2d30;
    }
    ctx->pc = 0x1A2D28u;
    SET_GPR_U32(ctx, 31, 0x1A2D30u);
    ctx->pc = 0x1A2D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2D28u;
    // 0x1a2d2c: 0xa72825  or          $a1, $a1, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x1A2D28u, 0x1A2D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D30u;
label_1a2d30:
    // 0x1a2d30: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a2d34:
    if (ctx->pc == 0x1A2D34u) {
        ctx->pc = 0x1A2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D30u;
        // 0x1a2d34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D38u;
        goto label_1a2d38;
    }
    ctx->pc = 0x1A2D30u;
    {
        const bool branch_taken_0x1a2d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D30u;
        // 0x1a2d34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d30) {
            ctx->pc = 0x1A2D4Cu;
            goto label_1a2d4c;
        }
    }
    ctx->pc = 0x1A2D38u;
label_1a2d38:
    // 0x1a2d38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a2d3c:
    // 0x1a2d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d40:
    // 0x1a2d40: 0xc068f6e  jal         func_1A3DB8
label_1a2d44:
    if (ctx->pc == 0x1A2D44u) {
        ctx->pc = 0x1A2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D40u;
        // 0x1a2d44: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D48u;
        goto label_1a2d48;
    }
    ctx->pc = 0x1A2D40u;
    SET_GPR_U32(ctx, 31, 0x1A2D48u);
    ctx->pc = 0x1A2D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2D40u;
    // 0x1a2d44: 0xae0200e0  sw          $v0, 0xE0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A2D40u, 0x1A2D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D48u;
label_1a2d48:
    // 0x1a2d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2d4c:
    // 0x1a2d4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d50:
    // 0x1a2d50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a2d54:
    // 0x1a2d54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2d58:
    // 0x1a2d58: 0x3e00008  jr          $ra
label_1a2d5c:
    if (ctx->pc == 0x1A2D5Cu) {
        ctx->pc = 0x1A2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D58u;
        // 0x1a2d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D60u;
        goto label_fallthrough_0x1a2d58;
    }
    ctx->pc = 0x1A2D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D58u;
        // 0x1a2d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2d58:
    ctx->pc = 0x1A2D60u;
}
