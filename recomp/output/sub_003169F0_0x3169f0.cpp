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

// Function: sub_003169F0
// Address: 0x3169f0 - 0x316e30
void sub_003169F0_0x3169f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003169F0_0x3169f0");
#endif

    switch (ctx->pc) {
        case 0x3169f0u: goto label_3169f0;
        case 0x3169f4u: goto label_3169f4;
        case 0x3169f8u: goto label_3169f8;
        case 0x3169fcu: goto label_3169fc;
        case 0x316a00u: goto label_316a00;
        case 0x316a04u: goto label_316a04;
        case 0x316a08u: goto label_316a08;
        case 0x316a0cu: goto label_316a0c;
        case 0x316a10u: goto label_316a10;
        case 0x316a14u: goto label_316a14;
        case 0x316a18u: goto label_316a18;
        case 0x316a1cu: goto label_316a1c;
        case 0x316a20u: goto label_316a20;
        case 0x316a24u: goto label_316a24;
        case 0x316a28u: goto label_316a28;
        case 0x316a2cu: goto label_316a2c;
        case 0x316a30u: goto label_316a30;
        case 0x316a34u: goto label_316a34;
        case 0x316a38u: goto label_316a38;
        case 0x316a3cu: goto label_316a3c;
        case 0x316a40u: goto label_316a40;
        case 0x316a44u: goto label_316a44;
        case 0x316a48u: goto label_316a48;
        case 0x316a4cu: goto label_316a4c;
        case 0x316a50u: goto label_316a50;
        case 0x316a54u: goto label_316a54;
        case 0x316a58u: goto label_316a58;
        case 0x316a5cu: goto label_316a5c;
        case 0x316a60u: goto label_316a60;
        case 0x316a64u: goto label_316a64;
        case 0x316a68u: goto label_316a68;
        case 0x316a6cu: goto label_316a6c;
        case 0x316a70u: goto label_316a70;
        case 0x316a74u: goto label_316a74;
        case 0x316a78u: goto label_316a78;
        case 0x316a7cu: goto label_316a7c;
        case 0x316a80u: goto label_316a80;
        case 0x316a84u: goto label_316a84;
        case 0x316a88u: goto label_316a88;
        case 0x316a8cu: goto label_316a8c;
        case 0x316a90u: goto label_316a90;
        case 0x316a94u: goto label_316a94;
        case 0x316a98u: goto label_316a98;
        case 0x316a9cu: goto label_316a9c;
        case 0x316aa0u: goto label_316aa0;
        case 0x316aa4u: goto label_316aa4;
        case 0x316aa8u: goto label_316aa8;
        case 0x316aacu: goto label_316aac;
        case 0x316ab0u: goto label_316ab0;
        case 0x316ab4u: goto label_316ab4;
        case 0x316ab8u: goto label_316ab8;
        case 0x316abcu: goto label_316abc;
        case 0x316ac0u: goto label_316ac0;
        case 0x316ac4u: goto label_316ac4;
        case 0x316ac8u: goto label_316ac8;
        case 0x316accu: goto label_316acc;
        case 0x316ad0u: goto label_316ad0;
        case 0x316ad4u: goto label_316ad4;
        case 0x316ad8u: goto label_316ad8;
        case 0x316adcu: goto label_316adc;
        case 0x316ae0u: goto label_316ae0;
        case 0x316ae4u: goto label_316ae4;
        case 0x316ae8u: goto label_316ae8;
        case 0x316aecu: goto label_316aec;
        case 0x316af0u: goto label_316af0;
        case 0x316af4u: goto label_316af4;
        case 0x316af8u: goto label_316af8;
        case 0x316afcu: goto label_316afc;
        case 0x316b00u: goto label_316b00;
        case 0x316b04u: goto label_316b04;
        case 0x316b08u: goto label_316b08;
        case 0x316b0cu: goto label_316b0c;
        case 0x316b10u: goto label_316b10;
        case 0x316b14u: goto label_316b14;
        case 0x316b18u: goto label_316b18;
        case 0x316b1cu: goto label_316b1c;
        case 0x316b20u: goto label_316b20;
        case 0x316b24u: goto label_316b24;
        case 0x316b28u: goto label_316b28;
        case 0x316b2cu: goto label_316b2c;
        case 0x316b30u: goto label_316b30;
        case 0x316b34u: goto label_316b34;
        case 0x316b38u: goto label_316b38;
        case 0x316b3cu: goto label_316b3c;
        case 0x316b40u: goto label_316b40;
        case 0x316b44u: goto label_316b44;
        case 0x316b48u: goto label_316b48;
        case 0x316b4cu: goto label_316b4c;
        case 0x316b50u: goto label_316b50;
        case 0x316b54u: goto label_316b54;
        case 0x316b58u: goto label_316b58;
        case 0x316b5cu: goto label_316b5c;
        case 0x316b60u: goto label_316b60;
        case 0x316b64u: goto label_316b64;
        case 0x316b68u: goto label_316b68;
        case 0x316b6cu: goto label_316b6c;
        case 0x316b70u: goto label_316b70;
        case 0x316b74u: goto label_316b74;
        case 0x316b78u: goto label_316b78;
        case 0x316b7cu: goto label_316b7c;
        case 0x316b80u: goto label_316b80;
        case 0x316b84u: goto label_316b84;
        case 0x316b88u: goto label_316b88;
        case 0x316b8cu: goto label_316b8c;
        case 0x316b90u: goto label_316b90;
        case 0x316b94u: goto label_316b94;
        case 0x316b98u: goto label_316b98;
        case 0x316b9cu: goto label_316b9c;
        case 0x316ba0u: goto label_316ba0;
        case 0x316ba4u: goto label_316ba4;
        case 0x316ba8u: goto label_316ba8;
        case 0x316bacu: goto label_316bac;
        case 0x316bb0u: goto label_316bb0;
        case 0x316bb4u: goto label_316bb4;
        case 0x316bb8u: goto label_316bb8;
        case 0x316bbcu: goto label_316bbc;
        case 0x316bc0u: goto label_316bc0;
        case 0x316bc4u: goto label_316bc4;
        case 0x316bc8u: goto label_316bc8;
        case 0x316bccu: goto label_316bcc;
        case 0x316bd0u: goto label_316bd0;
        case 0x316bd4u: goto label_316bd4;
        case 0x316bd8u: goto label_316bd8;
        case 0x316bdcu: goto label_316bdc;
        case 0x316be0u: goto label_316be0;
        case 0x316be4u: goto label_316be4;
        case 0x316be8u: goto label_316be8;
        case 0x316becu: goto label_316bec;
        case 0x316bf0u: goto label_316bf0;
        case 0x316bf4u: goto label_316bf4;
        case 0x316bf8u: goto label_316bf8;
        case 0x316bfcu: goto label_316bfc;
        case 0x316c00u: goto label_316c00;
        case 0x316c04u: goto label_316c04;
        case 0x316c08u: goto label_316c08;
        case 0x316c0cu: goto label_316c0c;
        case 0x316c10u: goto label_316c10;
        case 0x316c14u: goto label_316c14;
        case 0x316c18u: goto label_316c18;
        case 0x316c1cu: goto label_316c1c;
        case 0x316c20u: goto label_316c20;
        case 0x316c24u: goto label_316c24;
        case 0x316c28u: goto label_316c28;
        case 0x316c2cu: goto label_316c2c;
        case 0x316c30u: goto label_316c30;
        case 0x316c34u: goto label_316c34;
        case 0x316c38u: goto label_316c38;
        case 0x316c3cu: goto label_316c3c;
        case 0x316c40u: goto label_316c40;
        case 0x316c44u: goto label_316c44;
        case 0x316c48u: goto label_316c48;
        case 0x316c4cu: goto label_316c4c;
        case 0x316c50u: goto label_316c50;
        case 0x316c54u: goto label_316c54;
        case 0x316c58u: goto label_316c58;
        case 0x316c5cu: goto label_316c5c;
        case 0x316c60u: goto label_316c60;
        case 0x316c64u: goto label_316c64;
        case 0x316c68u: goto label_316c68;
        case 0x316c6cu: goto label_316c6c;
        case 0x316c70u: goto label_316c70;
        case 0x316c74u: goto label_316c74;
        case 0x316c78u: goto label_316c78;
        case 0x316c7cu: goto label_316c7c;
        case 0x316c80u: goto label_316c80;
        case 0x316c84u: goto label_316c84;
        case 0x316c88u: goto label_316c88;
        case 0x316c8cu: goto label_316c8c;
        case 0x316c90u: goto label_316c90;
        case 0x316c94u: goto label_316c94;
        case 0x316c98u: goto label_316c98;
        case 0x316c9cu: goto label_316c9c;
        case 0x316ca0u: goto label_316ca0;
        case 0x316ca4u: goto label_316ca4;
        case 0x316ca8u: goto label_316ca8;
        case 0x316cacu: goto label_316cac;
        case 0x316cb0u: goto label_316cb0;
        case 0x316cb4u: goto label_316cb4;
        case 0x316cb8u: goto label_316cb8;
        case 0x316cbcu: goto label_316cbc;
        case 0x316cc0u: goto label_316cc0;
        case 0x316cc4u: goto label_316cc4;
        case 0x316cc8u: goto label_316cc8;
        case 0x316cccu: goto label_316ccc;
        case 0x316cd0u: goto label_316cd0;
        case 0x316cd4u: goto label_316cd4;
        case 0x316cd8u: goto label_316cd8;
        case 0x316cdcu: goto label_316cdc;
        case 0x316ce0u: goto label_316ce0;
        case 0x316ce4u: goto label_316ce4;
        case 0x316ce8u: goto label_316ce8;
        case 0x316cecu: goto label_316cec;
        case 0x316cf0u: goto label_316cf0;
        case 0x316cf4u: goto label_316cf4;
        case 0x316cf8u: goto label_316cf8;
        case 0x316cfcu: goto label_316cfc;
        case 0x316d00u: goto label_316d00;
        case 0x316d04u: goto label_316d04;
        case 0x316d08u: goto label_316d08;
        case 0x316d0cu: goto label_316d0c;
        case 0x316d10u: goto label_316d10;
        case 0x316d14u: goto label_316d14;
        case 0x316d18u: goto label_316d18;
        case 0x316d1cu: goto label_316d1c;
        case 0x316d20u: goto label_316d20;
        case 0x316d24u: goto label_316d24;
        case 0x316d28u: goto label_316d28;
        case 0x316d2cu: goto label_316d2c;
        case 0x316d30u: goto label_316d30;
        case 0x316d34u: goto label_316d34;
        case 0x316d38u: goto label_316d38;
        case 0x316d3cu: goto label_316d3c;
        case 0x316d40u: goto label_316d40;
        case 0x316d44u: goto label_316d44;
        case 0x316d48u: goto label_316d48;
        case 0x316d4cu: goto label_316d4c;
        case 0x316d50u: goto label_316d50;
        case 0x316d54u: goto label_316d54;
        case 0x316d58u: goto label_316d58;
        case 0x316d5cu: goto label_316d5c;
        case 0x316d60u: goto label_316d60;
        case 0x316d64u: goto label_316d64;
        case 0x316d68u: goto label_316d68;
        case 0x316d6cu: goto label_316d6c;
        case 0x316d70u: goto label_316d70;
        case 0x316d74u: goto label_316d74;
        case 0x316d78u: goto label_316d78;
        case 0x316d7cu: goto label_316d7c;
        case 0x316d80u: goto label_316d80;
        case 0x316d84u: goto label_316d84;
        case 0x316d88u: goto label_316d88;
        case 0x316d8cu: goto label_316d8c;
        case 0x316d90u: goto label_316d90;
        case 0x316d94u: goto label_316d94;
        case 0x316d98u: goto label_316d98;
        case 0x316d9cu: goto label_316d9c;
        case 0x316da0u: goto label_316da0;
        case 0x316da4u: goto label_316da4;
        case 0x316da8u: goto label_316da8;
        case 0x316dacu: goto label_316dac;
        case 0x316db0u: goto label_316db0;
        case 0x316db4u: goto label_316db4;
        case 0x316db8u: goto label_316db8;
        case 0x316dbcu: goto label_316dbc;
        case 0x316dc0u: goto label_316dc0;
        case 0x316dc4u: goto label_316dc4;
        case 0x316dc8u: goto label_316dc8;
        case 0x316dccu: goto label_316dcc;
        case 0x316dd0u: goto label_316dd0;
        case 0x316dd4u: goto label_316dd4;
        case 0x316dd8u: goto label_316dd8;
        case 0x316ddcu: goto label_316ddc;
        case 0x316de0u: goto label_316de0;
        case 0x316de4u: goto label_316de4;
        case 0x316de8u: goto label_316de8;
        case 0x316decu: goto label_316dec;
        case 0x316df0u: goto label_316df0;
        case 0x316df4u: goto label_316df4;
        case 0x316df8u: goto label_316df8;
        case 0x316dfcu: goto label_316dfc;
        case 0x316e00u: goto label_316e00;
        case 0x316e04u: goto label_316e04;
        case 0x316e08u: goto label_316e08;
        case 0x316e0cu: goto label_316e0c;
        case 0x316e10u: goto label_316e10;
        case 0x316e14u: goto label_316e14;
        case 0x316e18u: goto label_316e18;
        case 0x316e1cu: goto label_316e1c;
        case 0x316e20u: goto label_316e20;
        case 0x316e24u: goto label_316e24;
        case 0x316e28u: goto label_316e28;
        case 0x316e2cu: goto label_316e2c;
        default: break;
    }

    ctx->pc = 0x3169f0u;

label_3169f0:
    // 0x3169f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3169f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3169f4:
    // 0x3169f4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3169f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_3169f8:
    // 0x3169f8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3169f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_3169fc:
    // 0x3169fc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3169fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_316a00:
    // 0x316a00: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x316a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_316a04:
    // 0x316a04: 0xc0a04b4  jal         func_2812D0
label_316a08:
    if (ctx->pc == 0x316A08u) {
        ctx->pc = 0x316A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A04u;
        // 0x316a08: 0x3c10004a  lui         $s0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316A0Cu;
        goto label_316a0c;
    }
    ctx->pc = 0x316A04u;
    SET_GPR_U32(ctx, 31, 0x316A0Cu);
    ctx->pc = 0x316A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A04u;
    // 0x316a08: 0x3c10004a  lui         $s0, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D0u, 0x316A04u, 0x316A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A0Cu;
label_316a0c:
    // 0x316a0c: 0xc0c61e8  jal         func_3187A0
label_316a10:
    if (ctx->pc == 0x316A10u) {
        ctx->pc = 0x316A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A0Cu;
        // 0x316a10: 0x26109b28  addiu       $s0, $s0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316A14u;
        goto label_316a14;
    }
    ctx->pc = 0x316A0Cu;
    SET_GPR_U32(ctx, 31, 0x316A14u);
    ctx->pc = 0x316A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A0Cu;
    // 0x316a10: 0x26109b28  addiu       $s0, $s0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3187A0u, 0x316A0Cu, 0x316A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A14u;
label_316a14:
    // 0x316a14: 0xc07fafc  jal         func_1FEBF0
label_316a18:
    if (ctx->pc == 0x316A18u) {
        ctx->pc = 0x316A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A14u;
        // 0x316a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316A1Cu;
        goto label_316a1c;
    }
    ctx->pc = 0x316A14u;
    SET_GPR_U32(ctx, 31, 0x316A1Cu);
    ctx->pc = 0x316A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A14u;
    // 0x316a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEBF0u, 0x316A14u, 0x316A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A1Cu;
label_316a1c:
    // 0x316a1c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x316a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_316a20:
    // 0x316a20: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x316a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_316a24:
    // 0x316a24: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x316a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_316a28:
    // 0x316a28: 0xac40462c  sw          $zero, 0x462C($v0)
    ctx->pc = 0x316a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17964), GPR_U32(ctx, 0));
label_316a2c:
    // 0x316a2c: 0xa0605aed  sb          $zero, 0x5AED($v1)
    ctx->pc = 0x316a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23277), (uint8_t)GPR_U32(ctx, 0));
label_316a30:
    // 0x316a30: 0xc0d73fc  jal         func_35CFF0
label_316a34:
    if (ctx->pc == 0x316A34u) {
        ctx->pc = 0x316A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A30u;
        // 0x316a34: 0x248421e0  addiu       $a0, $a0, 0x21E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316A38u;
        goto label_316a38;
    }
    ctx->pc = 0x316A30u;
    SET_GPR_U32(ctx, 31, 0x316A38u);
    ctx->pc = 0x316A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A30u;
    // 0x316a34: 0x248421e0  addiu       $a0, $a0, 0x21E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x316A30u, 0x316A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A38u;
label_316a38:
    // 0x316a38: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x316a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_316a3c:
    // 0x316a3c: 0xc07e618  jal         func_1F9860
label_316a40:
    if (ctx->pc == 0x316A40u) {
        ctx->pc = 0x316A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A3Cu;
        // 0x316a40: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316A44u;
        goto label_316a44;
    }
    ctx->pc = 0x316A3Cu;
    SET_GPR_U32(ctx, 31, 0x316A44u);
    ctx->pc = 0x316A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A3Cu;
    // 0x316a40: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9860u, 0x316A3Cu, 0x316A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A44u;
label_316a44:
    // 0x316a44: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x316a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_316a48:
    // 0x316a48: 0xc07f6e8  jal         func_1FDBA0
label_316a4c:
    if (ctx->pc == 0x316A4Cu) {
        ctx->pc = 0x316A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A48u;
        // 0x316a4c: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316A50u;
        goto label_316a50;
    }
    ctx->pc = 0x316A48u;
    SET_GPR_U32(ctx, 31, 0x316A50u);
    ctx->pc = 0x316A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A48u;
    // 0x316a4c: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDBA0u, 0x316A48u, 0x316A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A50u;
label_316a50:
    // 0x316a50: 0xc0803f4  jal         func_200FD0
label_316a54:
    if (ctx->pc == 0x316A54u) {
        ctx->pc = 0x316A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A50u;
        // 0x316a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316A58u;
        goto label_316a58;
    }
    ctx->pc = 0x316A50u;
    SET_GPR_U32(ctx, 31, 0x316A58u);
    ctx->pc = 0x316A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A50u;
    // 0x316a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200FD0u, 0x316A50u, 0x316A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A58u;
label_316a58:
    // 0x316a58: 0xc0dbe8a  jal         func_36FA28
label_316a5c:
    if (ctx->pc == 0x316A5Cu) {
        ctx->pc = 0x316A60u;
        goto label_316a60;
    }
    ctx->pc = 0x316A58u;
    SET_GPR_U32(ctx, 31, 0x316A60u);
    ctx->pc = 0x36FA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA28u, 0x316A58u, 0x316A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A60u;
label_316a60:
    // 0x316a60: 0xc09ea96  jal         func_27AA58
label_316a64:
    if (ctx->pc == 0x316A64u) {
        ctx->pc = 0x316A68u;
        goto label_316a68;
    }
    ctx->pc = 0x316A60u;
    SET_GPR_U32(ctx, 31, 0x316A68u);
    ctx->pc = 0x27AA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AA58u, 0x316A60u, 0x316A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A68u;
label_316a68:
    // 0x316a68: 0xc080500  jal         func_201400
label_316a6c:
    if (ctx->pc == 0x316A6Cu) {
        ctx->pc = 0x316A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A68u;
        // 0x316a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316A70u;
        goto label_316a70;
    }
    ctx->pc = 0x316A68u;
    SET_GPR_U32(ctx, 31, 0x316A70u);
    ctx->pc = 0x316A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A68u;
    // 0x316a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201400u, 0x316A68u, 0x316A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A70u;
label_316a70:
    // 0x316a70: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x316a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_316a74:
    // 0x316a74: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x316a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_316a78:
    // 0x316a78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x316a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_316a7c:
    // 0x316a7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_316a80:
    if (ctx->pc == 0x316A80u) {
        ctx->pc = 0x316A84u;
        goto label_316a84;
    }
    ctx->pc = 0x316A7Cu;
    {
        const bool branch_taken_0x316a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316a7c) {
            ctx->pc = 0x316AA0u;
            goto label_316aa0;
        }
    }
    ctx->pc = 0x316A84u;
label_316a84:
    // 0x316a84: 0xc081d36  jal         func_2074D8
label_316a88:
    if (ctx->pc == 0x316A88u) {
        ctx->pc = 0x316A8Cu;
        goto label_316a8c;
    }
    ctx->pc = 0x316A84u;
    SET_GPR_U32(ctx, 31, 0x316A8Cu);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x316A84u, 0x316A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A8Cu;
label_316a8c:
    // 0x316a8c: 0xc081fbe  jal         func_207EF8
label_316a90:
    if (ctx->pc == 0x316A90u) {
        ctx->pc = 0x316A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A8Cu;
        // 0x316a90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316A94u;
        goto label_316a94;
    }
    ctx->pc = 0x316A8Cu;
    SET_GPR_U32(ctx, 31, 0x316A94u);
    ctx->pc = 0x316A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A8Cu;
    // 0x316a90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207EF8u, 0x316A8Cu, 0x316A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A94u;
label_316a94:
    // 0x316a94: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x316a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_316a98:
    // 0x316a98: 0xc080e1a  jal         func_203868
label_316a9c:
    if (ctx->pc == 0x316A9Cu) {
        ctx->pc = 0x316A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A98u;
        // 0x316a9c: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316AA0u;
        goto label_316aa0;
    }
    ctx->pc = 0x316A98u;
    SET_GPR_U32(ctx, 31, 0x316AA0u);
    ctx->pc = 0x316A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A98u;
    // 0x316a9c: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203868u, 0x316A98u, 0x316AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AA0u;
label_316aa0:
    // 0x316aa0: 0xc0d5818  jal         func_356060
label_316aa4:
    if (ctx->pc == 0x316AA4u) {
        ctx->pc = 0x316AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AA0u;
        // 0x316aa4: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316AA8u;
        goto label_316aa8;
    }
    ctx->pc = 0x316AA0u;
    SET_GPR_U32(ctx, 31, 0x316AA8u);
    ctx->pc = 0x316AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316AA0u;
    // 0x316aa4: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356060u, 0x316AA0u, 0x316AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AA8u;
label_316aa8:
    // 0x316aa8: 0xc082940  jal         func_20A500
label_316aac:
    if (ctx->pc == 0x316AACu) {
        ctx->pc = 0x316AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AA8u;
        // 0x316aac: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316AB0u;
        goto label_316ab0;
    }
    ctx->pc = 0x316AA8u;
    SET_GPR_U32(ctx, 31, 0x316AB0u);
    ctx->pc = 0x316AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316AA8u;
    // 0x316aac: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A500u, 0x316AA8u, 0x316AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AB0u;
label_316ab0:
    // 0x316ab0: 0x8e24bd3c  lw          $a0, -0x42C4($s1)
    ctx->pc = 0x316ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950204)));
label_316ab4:
    // 0x316ab4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_316ab8:
    if (ctx->pc == 0x316AB8u) {
        ctx->pc = 0x316AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AB4u;
        // 0x316ab8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316ABCu;
        goto label_316abc;
    }
    ctx->pc = 0x316AB4u;
    {
        const bool branch_taken_0x316ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x316AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AB4u;
        // 0x316ab8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ab4) {
            ctx->pc = 0x316AC4u;
            goto label_316ac4;
        }
    }
    ctx->pc = 0x316ABCu;
label_316abc:
    // 0x316abc: 0xc0c884e  jal         func_322138
label_316ac0:
    if (ctx->pc == 0x316AC0u) {
        ctx->pc = 0x316AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316ABCu;
        // 0x316ac0: 0x8c45bd48  lw          $a1, -0x42B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316AC4u;
        goto label_316ac4;
    }
    ctx->pc = 0x316ABCu;
    SET_GPR_U32(ctx, 31, 0x316AC4u);
    ctx->pc = 0x316AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316ABCu;
    // 0x316ac0: 0x8c45bd48  lw          $a1, -0x42B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322138u, 0x316ABCu, 0x316AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AC4u;
label_316ac4:
    // 0x316ac4: 0xc085bb0  jal         func_216EC0
label_316ac8:
    if (ctx->pc == 0x316AC8u) {
        ctx->pc = 0x316AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AC4u;
        // 0x316ac8: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316ACCu;
        goto label_316acc;
    }
    ctx->pc = 0x316AC4u;
    SET_GPR_U32(ctx, 31, 0x316ACCu);
    ctx->pc = 0x316AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316AC4u;
    // 0x316ac8: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216EC0u, 0x316AC4u, 0x316ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316ACCu;
label_316acc:
    // 0x316acc: 0xc0858c0  jal         func_216300
label_316ad0:
    if (ctx->pc == 0x316AD0u) {
        ctx->pc = 0x316AD4u;
        goto label_316ad4;
    }
    ctx->pc = 0x316ACCu;
    SET_GPR_U32(ctx, 31, 0x316AD4u);
    ctx->pc = 0x216300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216300u, 0x316ACCu, 0x316AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AD4u;
label_316ad4:
    // 0x316ad4: 0xc0b5f9a  jal         func_2D7E68
label_316ad8:
    if (ctx->pc == 0x316AD8u) {
        ctx->pc = 0x316ADCu;
        goto label_316adc;
    }
    ctx->pc = 0x316AD4u;
    SET_GPR_U32(ctx, 31, 0x316ADCu);
    ctx->pc = 0x2D7E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E68u, 0x316AD4u, 0x316ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316ADCu;
label_316adc:
    // 0x316adc: 0xc0b5fe2  jal         func_2D7F88
label_316ae0:
    if (ctx->pc == 0x316AE0u) {
        ctx->pc = 0x316AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316ADCu;
        // 0x316ae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316AE4u;
        goto label_316ae4;
    }
    ctx->pc = 0x316ADCu;
    SET_GPR_U32(ctx, 31, 0x316AE4u);
    ctx->pc = 0x316AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316ADCu;
    // 0x316ae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7F88u, 0x316ADCu, 0x316AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AE4u;
label_316ae4:
    // 0x316ae4: 0x8e04bd34  lw          $a0, -0x42CC($s0)
    ctx->pc = 0x316ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950196)));
label_316ae8:
    // 0x316ae8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_316aec:
    if (ctx->pc == 0x316AECu) {
        ctx->pc = 0x316AF0u;
        goto label_316af0;
    }
    ctx->pc = 0x316AE8u;
    {
        const bool branch_taken_0x316ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x316ae8) {
            ctx->pc = 0x316AF8u;
            goto label_316af8;
        }
    }
    ctx->pc = 0x316AF0u;
label_316af0:
    // 0x316af0: 0xc0b4bf4  jal         func_2D2FD0
label_316af4:
    if (ctx->pc == 0x316AF4u) {
        ctx->pc = 0x316AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AF0u;
        // 0x316af4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316AF8u;
        goto label_316af8;
    }
    ctx->pc = 0x316AF0u;
    SET_GPR_U32(ctx, 31, 0x316AF8u);
    ctx->pc = 0x316AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316AF0u;
    // 0x316af4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2FD0u, 0x316AF0u, 0x316AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AF8u;
label_316af8:
    // 0x316af8: 0xc0d95aa  jal         func_3656A8
label_316afc:
    if (ctx->pc == 0x316AFCu) {
        ctx->pc = 0x316AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AF8u;
        // 0x316afc: 0xae00bd34  sw          $zero, -0x42CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B00u;
        goto label_316b00;
    }
    ctx->pc = 0x316AF8u;
    SET_GPR_U32(ctx, 31, 0x316B00u);
    ctx->pc = 0x316AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316AF8u;
    // 0x316afc: 0xae00bd34  sw          $zero, -0x42CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3656A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3656A8u, 0x316AF8u, 0x316B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B00u;
label_316b00:
    // 0x316b00: 0xc07640a  jal         func_1D9028
label_316b04:
    if (ctx->pc == 0x316B04u) {
        ctx->pc = 0x316B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B00u;
        // 0x316b04: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B08u;
        goto label_316b08;
    }
    ctx->pc = 0x316B00u;
    SET_GPR_U32(ctx, 31, 0x316B08u);
    ctx->pc = 0x316B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B00u;
    // 0x316b04: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9028u, 0x316B00u, 0x316B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B08u;
label_316b08:
    // 0x316b08: 0xc0c96aa  jal         func_325AA8
label_316b0c:
    if (ctx->pc == 0x316B0Cu) {
        ctx->pc = 0x316B10u;
        goto label_316b10;
    }
    ctx->pc = 0x316B08u;
    SET_GPR_U32(ctx, 31, 0x316B10u);
    ctx->pc = 0x325AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325AA8u, 0x316B08u, 0x316B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B10u;
label_316b10:
    // 0x316b10: 0xc0b6836  jal         func_2DA0D8
label_316b14:
    if (ctx->pc == 0x316B14u) {
        ctx->pc = 0x316B18u;
        goto label_316b18;
    }
    ctx->pc = 0x316B10u;
    SET_GPR_U32(ctx, 31, 0x316B18u);
    ctx->pc = 0x2DA0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA0D8u, 0x316B10u, 0x316B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B18u;
label_316b18:
    // 0x316b18: 0xc0cd074  jal         func_3341D0
label_316b1c:
    if (ctx->pc == 0x316B1Cu) {
        ctx->pc = 0x316B20u;
        goto label_316b20;
    }
    ctx->pc = 0x316B18u;
    SET_GPR_U32(ctx, 31, 0x316B20u);
    ctx->pc = 0x3341D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3341D0u, 0x316B18u, 0x316B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B20u;
label_316b20:
    // 0x316b20: 0xc0cd88c  jal         func_336230
label_316b24:
    if (ctx->pc == 0x316B24u) {
        ctx->pc = 0x316B28u;
        goto label_316b28;
    }
    ctx->pc = 0x316B20u;
    SET_GPR_U32(ctx, 31, 0x316B28u);
    ctx->pc = 0x336230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336230u, 0x316B20u, 0x316B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B28u;
label_316b28:
    // 0x316b28: 0x8e04bd30  lw          $a0, -0x42D0($s0)
    ctx->pc = 0x316b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_316b2c:
    // 0x316b2c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_316b30:
    if (ctx->pc == 0x316B30u) {
        ctx->pc = 0x316B34u;
        goto label_316b34;
    }
    ctx->pc = 0x316B2Cu;
    {
        const bool branch_taken_0x316b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x316b2c) {
            ctx->pc = 0x316B48u;
            goto label_316b48;
        }
    }
    ctx->pc = 0x316B34u;
label_316b34:
    // 0x316b34: 0x8c830af0  lw          $v1, 0xAF0($a0)
    ctx->pc = 0x316b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2800)));
label_316b38:
    // 0x316b38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x316b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_316b3c:
    // 0x316b3c: 0x40f809  jalr        $v0
label_316b40:
    if (ctx->pc == 0x316B40u) {
        ctx->pc = 0x316B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B3Cu;
        // 0x316b40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B44u;
        goto label_316b44;
    }
    ctx->pc = 0x316B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x316B44u);
        ctx->pc = 0x316B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B3Cu;
        // 0x316b40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316B3Cu, 0x316B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x316B44u;
label_316b44:
    // 0x316b44: 0xae00bd30  sw          $zero, -0x42D0($s0)
    ctx->pc = 0x316b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950192), GPR_U32(ctx, 0));
label_316b48:
    // 0x316b48: 0xc073dce  jal         func_1CF738
label_316b4c:
    if (ctx->pc == 0x316B4Cu) {
        ctx->pc = 0x316B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B48u;
        // 0x316b4c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B50u;
        goto label_316b50;
    }
    ctx->pc = 0x316B48u;
    SET_GPR_U32(ctx, 31, 0x316B50u);
    ctx->pc = 0x316B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B48u;
    // 0x316b4c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF738u, 0x316B48u, 0x316B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B50u;
label_316b50:
    // 0x316b50: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x316b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_316b54:
    // 0x316b54: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x316b54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_316b58:
    // 0x316b58: 0xc0c6bb8  jal         func_31AEE0
label_316b5c:
    if (ctx->pc == 0x316B5Cu) {
        ctx->pc = 0x316B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B58u;
        // 0x316b5c: 0x248421e8  addiu       $a0, $a0, 0x21E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B60u;
        goto label_316b60;
    }
    ctx->pc = 0x316B58u;
    SET_GPR_U32(ctx, 31, 0x316B60u);
    ctx->pc = 0x316B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B58u;
    // 0x316b5c: 0x248421e8  addiu       $a0, $a0, 0x21E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AEE0u, 0x316B58u, 0x316B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B60u;
label_316b60:
    // 0x316b60: 0xc0751d6  jal         func_1D4758
label_316b64:
    if (ctx->pc == 0x316B64u) {
        ctx->pc = 0x316B68u;
        goto label_316b68;
    }
    ctx->pc = 0x316B60u;
    SET_GPR_U32(ctx, 31, 0x316B68u);
    ctx->pc = 0x1D4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4758u, 0x316B60u, 0x316B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B68u;
label_316b68:
    // 0x316b68: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x316b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_316b6c:
    // 0x316b6c: 0xc073d50  jal         func_1CF540
label_316b70:
    if (ctx->pc == 0x316B70u) {
        ctx->pc = 0x316B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B6Cu;
        // 0x316b70: 0xac4089c0  sw          $zero, -0x7640($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B74u;
        goto label_316b74;
    }
    ctx->pc = 0x316B6Cu;
    SET_GPR_U32(ctx, 31, 0x316B74u);
    ctx->pc = 0x316B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B6Cu;
    // 0x316b70: 0xac4089c0  sw          $zero, -0x7640($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937024), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF540u, 0x316B6Cu, 0x316B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B74u;
label_316b74:
    // 0x316b74: 0xc0401ee  jal         func_1007B8
label_316b78:
    if (ctx->pc == 0x316B78u) {
        ctx->pc = 0x316B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B74u;
        // 0x316b78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B7Cu;
        goto label_316b7c;
    }
    ctx->pc = 0x316B74u;
    SET_GPR_U32(ctx, 31, 0x316B7Cu);
    ctx->pc = 0x316B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B74u;
    // 0x316b78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1007B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1007B8u, 0x316B74u, 0x316B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B7Cu;
label_316b7c:
    // 0x316b7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x316b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_316b80:
    // 0x316b80: 0xc0d47ac  jal         func_351EB0
label_316b84:
    if (ctx->pc == 0x316B84u) {
        ctx->pc = 0x316B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B80u;
        // 0x316b84: 0xac40bd4c  sw          $zero, -0x42B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B88u;
        goto label_316b88;
    }
    ctx->pc = 0x316B80u;
    SET_GPR_U32(ctx, 31, 0x316B88u);
    ctx->pc = 0x316B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B80u;
    // 0x316b84: 0xac40bd4c  sw          $zero, -0x42B4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950220), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351EB0u, 0x316B80u, 0x316B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B88u;
label_316b88:
    // 0x316b88: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x316b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_316b8c:
    // 0x316b8c: 0xc0ab05c  jal         func_2AC170
label_316b90:
    if (ctx->pc == 0x316B90u) {
        ctx->pc = 0x316B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B8Cu;
        // 0x316b90: 0x24842400  addiu       $a0, $a0, 0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B94u;
        goto label_316b94;
    }
    ctx->pc = 0x316B8Cu;
    SET_GPR_U32(ctx, 31, 0x316B94u);
    ctx->pc = 0x316B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B8Cu;
    // 0x316b90: 0x24842400  addiu       $a0, $a0, 0x2400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC170u, 0x316B8Cu, 0x316B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B94u;
label_316b94:
    // 0x316b94: 0xc0c4df4  jal         func_3137D0
label_316b98:
    if (ctx->pc == 0x316B98u) {
        ctx->pc = 0x316B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B94u;
        // 0x316b98: 0x8e24bd3c  lw          $a0, -0x42C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316B9Cu;
        goto label_316b9c;
    }
    ctx->pc = 0x316B94u;
    SET_GPR_U32(ctx, 31, 0x316B9Cu);
    ctx->pc = 0x316B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B94u;
    // 0x316b98: 0x8e24bd3c  lw          $a0, -0x42C4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3137D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3137D0u, 0x316B94u, 0x316B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B9Cu;
label_316b9c:
    // 0x316b9c: 0xc0c8774  jal         func_321DD0
label_316ba0:
    if (ctx->pc == 0x316BA0u) {
        ctx->pc = 0x316BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B9Cu;
        // 0x316ba0: 0x8e24bd3c  lw          $a0, -0x42C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316BA4u;
        goto label_316ba4;
    }
    ctx->pc = 0x316B9Cu;
    SET_GPR_U32(ctx, 31, 0x316BA4u);
    ctx->pc = 0x316BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316B9Cu;
    // 0x316ba0: 0x8e24bd3c  lw          $a0, -0x42C4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321DD0u, 0x316B9Cu, 0x316BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316BA4u;
label_316ba4:
    // 0x316ba4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x316ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_316ba8:
    // 0x316ba8: 0xc0c8774  jal         func_321DD0
label_316bac:
    if (ctx->pc == 0x316BACu) {
        ctx->pc = 0x316BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BA8u;
        // 0x316bac: 0x8c44bd44  lw          $a0, -0x42BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316BB0u;
        goto label_316bb0;
    }
    ctx->pc = 0x316BA8u;
    SET_GPR_U32(ctx, 31, 0x316BB0u);
    ctx->pc = 0x316BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316BA8u;
    // 0x316bac: 0x8c44bd44  lw          $a0, -0x42BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321DD0u, 0x316BA8u, 0x316BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316BB0u;
label_316bb0:
    // 0x316bb0: 0xc0c8774  jal         func_321DD0
label_316bb4:
    if (ctx->pc == 0x316BB4u) {
        ctx->pc = 0x316BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BB0u;
        // 0x316bb4: 0x8e04bd40  lw          $a0, -0x42C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316BB8u;
        goto label_316bb8;
    }
    ctx->pc = 0x316BB0u;
    SET_GPR_U32(ctx, 31, 0x316BB8u);
    ctx->pc = 0x316BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316BB0u;
    // 0x316bb4: 0x8e04bd40  lw          $a0, -0x42C0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321DD0u, 0x316BB0u, 0x316BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316BB8u;
label_316bb8:
    // 0x316bb8: 0x8e44bd28  lw          $a0, -0x42D8($s2)
    ctx->pc = 0x316bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950184)));
label_316bbc:
    // 0x316bbc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_316bc0:
    if (ctx->pc == 0x316BC0u) {
        ctx->pc = 0x316BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BBCu;
        // 0x316bc0: 0xae00bd40  sw          $zero, -0x42C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316BC4u;
        goto label_316bc4;
    }
    ctx->pc = 0x316BBCu;
    {
        const bool branch_taken_0x316bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x316BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BBCu;
        // 0x316bc0: 0xae00bd40  sw          $zero, -0x42C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316bbc) {
            ctx->pc = 0x316BD8u;
            goto label_316bd8;
        }
    }
    ctx->pc = 0x316BC4u;
label_316bc4:
    // 0x316bc4: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x316bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
label_316bc8:
    // 0x316bc8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x316bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_316bcc:
    // 0x316bcc: 0x40f809  jalr        $v0
label_316bd0:
    if (ctx->pc == 0x316BD0u) {
        ctx->pc = 0x316BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BCCu;
        // 0x316bd0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316BD4u;
        goto label_316bd4;
    }
    ctx->pc = 0x316BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x316BD4u);
        ctx->pc = 0x316BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BCCu;
        // 0x316bd0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316BCCu, 0x316BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x316BD4u;
label_316bd4:
    // 0x316bd4: 0xae40bd28  sw          $zero, -0x42D8($s2)
    ctx->pc = 0x316bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294950184), GPR_U32(ctx, 0));
label_316bd8:
    // 0x316bd8: 0xc09f4ce  jal         func_27D338
label_316bdc:
    if (ctx->pc == 0x316BDCu) {
        ctx->pc = 0x316BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BD8u;
        // 0x316bdc: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316BE0u;
        goto label_316be0;
    }
    ctx->pc = 0x316BD8u;
    SET_GPR_U32(ctx, 31, 0x316BE0u);
    ctx->pc = 0x316BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316BD8u;
    // 0x316bdc: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D338u, 0x316BD8u, 0x316BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316BE0u;
label_316be0:
    // 0x316be0: 0xc0ce09c  jal         func_338270
label_316be4:
    if (ctx->pc == 0x316BE4u) {
        ctx->pc = 0x316BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BE0u;
        // 0x316be4: 0x26104ed8  addiu       $s0, $s0, 0x4ED8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316BE8u;
        goto label_316be8;
    }
    ctx->pc = 0x316BE0u;
    SET_GPR_U32(ctx, 31, 0x316BE8u);
    ctx->pc = 0x316BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316BE0u;
    // 0x316be4: 0x26104ed8  addiu       $s0, $s0, 0x4ED8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338270u, 0x316BE0u, 0x316BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316BE8u;
label_316be8:
    // 0x316be8: 0xc0a2e6c  jal         func_28B9B0
label_316bec:
    if (ctx->pc == 0x316BECu) {
        ctx->pc = 0x316BF0u;
        goto label_316bf0;
    }
    ctx->pc = 0x316BE8u;
    SET_GPR_U32(ctx, 31, 0x316BF0u);
    ctx->pc = 0x28B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B9B0u, 0x316BE8u, 0x316BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316BF0u;
label_316bf0:
    // 0x316bf0: 0xc0cf37e  jal         func_33CDF8
label_316bf4:
    if (ctx->pc == 0x316BF4u) {
        ctx->pc = 0x316BF8u;
        goto label_316bf8;
    }
    ctx->pc = 0x316BF0u;
    SET_GPR_U32(ctx, 31, 0x316BF8u);
    ctx->pc = 0x33CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CDF8u, 0x316BF0u, 0x316BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316BF8u;
label_316bf8:
    // 0x316bf8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x316bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_316bfc:
    // 0x316bfc: 0xc0d706c  jal         func_35C1B0
label_316c00:
    if (ctx->pc == 0x316C00u) {
        ctx->pc = 0x316C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BFCu;
        // 0x316c00: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C04u;
        goto label_316c04;
    }
    ctx->pc = 0x316BFCu;
    SET_GPR_U32(ctx, 31, 0x316C04u);
    ctx->pc = 0x316C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316BFCu;
    // 0x316c00: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C1B0u, 0x316BFCu, 0x316C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C04u;
label_316c04:
    // 0x316c04: 0xc0d61a4  jal         func_358690
label_316c08:
    if (ctx->pc == 0x316C08u) {
        ctx->pc = 0x316C0Cu;
        goto label_316c0c;
    }
    ctx->pc = 0x316C04u;
    SET_GPR_U32(ctx, 31, 0x316C0Cu);
    ctx->pc = 0x358690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358690u, 0x316C04u, 0x316C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C0Cu;
label_316c0c:
    // 0x316c0c: 0xc0d6de0  jal         func_35B780
label_316c10:
    if (ctx->pc == 0x316C10u) {
        ctx->pc = 0x316C14u;
        goto label_316c14;
    }
    ctx->pc = 0x316C0Cu;
    SET_GPR_U32(ctx, 31, 0x316C14u);
    ctx->pc = 0x35B780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B780u, 0x316C0Cu, 0x316C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C14u;
label_316c14:
    // 0x316c14: 0xc0a3a8a  jal         func_28EA28
label_316c18:
    if (ctx->pc == 0x316C18u) {
        ctx->pc = 0x316C1Cu;
        goto label_316c1c;
    }
    ctx->pc = 0x316C14u;
    SET_GPR_U32(ctx, 31, 0x316C1Cu);
    ctx->pc = 0x28EA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA28u, 0x316C14u, 0x316C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C1Cu;
label_316c1c:
    // 0x316c1c: 0xc09d7e4  jal         func_275F90
label_316c20:
    if (ctx->pc == 0x316C20u) {
        ctx->pc = 0x316C24u;
        goto label_316c24;
    }
    ctx->pc = 0x316C1Cu;
    SET_GPR_U32(ctx, 31, 0x316C24u);
    ctx->pc = 0x275F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275F90u, 0x316C1Cu, 0x316C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C24u;
label_316c24:
    // 0x316c24: 0xc0c5154  jal         func_314550
label_316c28:
    if (ctx->pc == 0x316C28u) {
        ctx->pc = 0x316C2Cu;
        goto label_316c2c;
    }
    ctx->pc = 0x316C24u;
    SET_GPR_U32(ctx, 31, 0x316C2Cu);
    ctx->pc = 0x314550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314550u, 0x316C24u, 0x316C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C2Cu;
label_316c2c:
    // 0x316c2c: 0xc0a2b10  jal         func_28AC40
label_316c30:
    if (ctx->pc == 0x316C30u) {
        ctx->pc = 0x316C34u;
        goto label_316c34;
    }
    ctx->pc = 0x316C2Cu;
    SET_GPR_U32(ctx, 31, 0x316C34u);
    ctx->pc = 0x28AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC40u, 0x316C2Cu, 0x316C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C34u;
label_316c34:
    // 0x316c34: 0xc0d4dda  jal         func_353768
label_316c38:
    if (ctx->pc == 0x316C38u) {
        ctx->pc = 0x316C3Cu;
        goto label_316c3c;
    }
    ctx->pc = 0x316C34u;
    SET_GPR_U32(ctx, 31, 0x316C3Cu);
    ctx->pc = 0x353768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353768u, 0x316C34u, 0x316C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C3Cu;
label_316c3c:
    // 0x316c3c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x316c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_316c40:
    // 0x316c40: 0xc0b0b44  jal         func_2C2D10
label_316c44:
    if (ctx->pc == 0x316C44u) {
        ctx->pc = 0x316C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C40u;
        // 0x316c44: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C48u;
        goto label_316c48;
    }
    ctx->pc = 0x316C40u;
    SET_GPR_U32(ctx, 31, 0x316C48u);
    ctx->pc = 0x316C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C40u;
    // 0x316c44: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D10u, 0x316C40u, 0x316C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C48u;
label_316c48:
    // 0x316c48: 0xc0c78b2  jal         func_31E2C8
label_316c4c:
    if (ctx->pc == 0x316C4Cu) {
        ctx->pc = 0x316C50u;
        goto label_316c50;
    }
    ctx->pc = 0x316C48u;
    SET_GPR_U32(ctx, 31, 0x316C50u);
    ctx->pc = 0x31E2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2C8u, 0x316C48u, 0x316C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C50u;
label_316c50:
    // 0x316c50: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x316c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
label_316c54:
    // 0x316c54: 0xc0c35f4  jal         func_30D7D0
label_316c58:
    if (ctx->pc == 0x316C58u) {
        ctx->pc = 0x316C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C54u;
        // 0x316c58: 0x24847ee0  addiu       $a0, $a0, 0x7EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C5Cu;
        goto label_316c5c;
    }
    ctx->pc = 0x316C54u;
    SET_GPR_U32(ctx, 31, 0x316C5Cu);
    ctx->pc = 0x316C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C54u;
    // 0x316c58: 0x24847ee0  addiu       $a0, $a0, 0x7EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D7D0u, 0x316C54u, 0x316C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C5Cu;
label_316c5c:
    // 0x316c5c: 0xc0c3dc2  jal         func_30F708
label_316c60:
    if (ctx->pc == 0x316C60u) {
        ctx->pc = 0x316C64u;
        goto label_316c64;
    }
    ctx->pc = 0x316C5Cu;
    SET_GPR_U32(ctx, 31, 0x316C64u);
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x316C5Cu, 0x316C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C64u;
label_316c64:
    // 0x316c64: 0xc0c46fa  jal         func_311BE8
label_316c68:
    if (ctx->pc == 0x316C68u) {
        ctx->pc = 0x316C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C64u;
        // 0x316c68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C6Cu;
        goto label_316c6c;
    }
    ctx->pc = 0x316C64u;
    SET_GPR_U32(ctx, 31, 0x316C6Cu);
    ctx->pc = 0x316C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C64u;
    // 0x316c68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311BE8u, 0x316C64u, 0x316C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C6Cu;
label_316c6c:
    // 0x316c6c: 0xc0ae9f6  jal         func_2BA7D8
label_316c70:
    if (ctx->pc == 0x316C70u) {
        ctx->pc = 0x316C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C6Cu;
        // 0x316c70: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C74u;
        goto label_316c74;
    }
    ctx->pc = 0x316C6Cu;
    SET_GPR_U32(ctx, 31, 0x316C74u);
    ctx->pc = 0x316C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C6Cu;
    // 0x316c70: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA7D8u, 0x316C6Cu, 0x316C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C74u;
label_316c74:
    // 0x316c74: 0xc0ae94a  jal         func_2BA528
label_316c78:
    if (ctx->pc == 0x316C78u) {
        ctx->pc = 0x316C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C74u;
        // 0x316c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C7Cu;
        goto label_316c7c;
    }
    ctx->pc = 0x316C74u;
    SET_GPR_U32(ctx, 31, 0x316C7Cu);
    ctx->pc = 0x316C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C74u;
    // 0x316c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA528u, 0x316C74u, 0x316C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C7Cu;
label_316c7c:
    // 0x316c7c: 0xc0c7c54  jal         func_31F150
label_316c80:
    if (ctx->pc == 0x316C80u) {
        ctx->pc = 0x316C84u;
        goto label_316c84;
    }
    ctx->pc = 0x316C7Cu;
    SET_GPR_U32(ctx, 31, 0x316C84u);
    ctx->pc = 0x31F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F150u, 0x316C7Cu, 0x316C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C84u;
label_316c84:
    // 0x316c84: 0xc0d99fa  jal         func_3667E8
label_316c88:
    if (ctx->pc == 0x316C88u) {
        ctx->pc = 0x316C8Cu;
        goto label_316c8c;
    }
    ctx->pc = 0x316C84u;
    SET_GPR_U32(ctx, 31, 0x316C8Cu);
    ctx->pc = 0x3667E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3667E8u, 0x316C84u, 0x316C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C8Cu;
label_316c8c:
    // 0x316c8c: 0xc0da222  jal         func_368888
label_316c90:
    if (ctx->pc == 0x316C90u) {
        ctx->pc = 0x316C94u;
        goto label_316c94;
    }
    ctx->pc = 0x316C8Cu;
    SET_GPR_U32(ctx, 31, 0x316C94u);
    ctx->pc = 0x368888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368888u, 0x316C8Cu, 0x316C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C94u;
label_316c94:
    // 0x316c94: 0xc0c114e  jal         func_304538
label_316c98:
    if (ctx->pc == 0x316C98u) {
        ctx->pc = 0x316C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C94u;
        // 0x316c98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316C9Cu;
        goto label_316c9c;
    }
    ctx->pc = 0x316C94u;
    SET_GPR_U32(ctx, 31, 0x316C9Cu);
    ctx->pc = 0x316C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C94u;
    // 0x316c98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304538u, 0x316C94u, 0x316C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C9Cu;
label_316c9c:
    // 0x316c9c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x316c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_316ca0:
    // 0x316ca0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x316ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_316ca4:
    // 0x316ca4: 0xac62989c  sw          $v0, -0x6764($v1)
    ctx->pc = 0x316ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940828), GPR_U32(ctx, 2));
label_316ca8:
    // 0x316ca8: 0xc0d9cb6  jal         func_3672D8
label_316cac:
    if (ctx->pc == 0x316CACu) {
        ctx->pc = 0x316CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CA8u;
        // 0x316cac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316CB0u;
        goto label_316cb0;
    }
    ctx->pc = 0x316CA8u;
    SET_GPR_U32(ctx, 31, 0x316CB0u);
    ctx->pc = 0x316CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316CA8u;
    // 0x316cac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3672D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3672D8u, 0x316CA8u, 0x316CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316CB0u;
label_316cb0:
    // 0x316cb0: 0xc0c5dda  jal         func_317768
label_316cb4:
    if (ctx->pc == 0x316CB4u) {
        ctx->pc = 0x316CB8u;
        goto label_316cb8;
    }
    ctx->pc = 0x316CB0u;
    SET_GPR_U32(ctx, 31, 0x316CB8u);
    ctx->pc = 0x317768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317768u, 0x316CB0u, 0x316CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316CB8u;
label_316cb8:
    // 0x316cb8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x316cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_316cbc:
    // 0x316cbc: 0x27b00008  addiu       $s0, $sp, 0x8
    ctx->pc = 0x316cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_316cc0:
    // 0x316cc0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x316cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_316cc4:
    // 0x316cc4: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x316cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_316cc8:
    // 0x316cc8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x316cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_316ccc:
    // 0x316ccc: 0x246422c0  addiu       $a0, $v1, 0x22C0
    ctx->pc = 0x316cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8896));
label_316cd0:
    // 0x316cd0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x316cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_316cd4:
    // 0x316cd4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x316cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_316cd8:
    // 0x316cd8: 0x8c6222c0  lw          $v0, 0x22C0($v1)
    ctx->pc = 0x316cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8896)));
label_316cdc:
    // 0x316cdc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x316cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_316ce0:
    // 0x316ce0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x316ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_316ce4:
    // 0x316ce4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x316ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_316ce8:
    // 0x316ce8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x316ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_316cec:
    // 0x316cec: 0xac6622c0  sw          $a2, 0x22C0($v1)
    ctx->pc = 0x316cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8896), GPR_U32(ctx, 6));
label_316cf0:
    // 0x316cf0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x316cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_316cf4:
    // 0x316cf4: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x316cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
label_316cf8:
    // 0x316cf8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x316cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_316cfc:
    // 0x316cfc: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x316cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_316d00:
    // 0x316d00: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x316d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_316d04:
    // 0x316d04: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x316d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316d08:
    // 0x316d08: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x316d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316d0c:
    // 0x316d0c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x316d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_316d10:
    // 0x316d10: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x316d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_316d14:
    // 0x316d14: 0xb082000f  sdl         $v0, 0xF($a0)
    ctx->pc = 0x316d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316d18:
    // 0x316d18: 0xb4820008  sdr         $v0, 0x8($a0)
    ctx->pc = 0x316d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316d1c:
    // 0x316d1c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x316d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_316d20:
    // 0x316d20: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_316d24:
    if (ctx->pc == 0x316D24u) {
        ctx->pc = 0x316D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316D20u;
        // 0x316d24: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316D28u;
        goto label_316d28;
    }
    ctx->pc = 0x316D20u;
    {
        const bool branch_taken_0x316d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x316d20) {
            ctx->pc = 0x316D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316D20u;
            // 0x316d24: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316D34u;
            goto label_316d34;
        }
    }
    ctx->pc = 0x316D28u;
label_316d28:
    // 0x316d28: 0xc0f5222  jal         func_3D4888
label_316d2c:
    if (ctx->pc == 0x316D2Cu) {
        ctx->pc = 0x316D30u;
        goto label_316d30;
    }
    ctx->pc = 0x316D28u;
    SET_GPR_U32(ctx, 31, 0x316D30u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x316D28u, 0x316D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D30u;
label_316d30:
    // 0x316d30: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x316d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_316d34:
    // 0x316d34: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x316d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_316d38:
    // 0x316d38: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x316d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_316d3c:
    // 0x316d3c: 0x246422d8  addiu       $a0, $v1, 0x22D8
    ctx->pc = 0x316d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8920));
label_316d40:
    // 0x316d40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x316d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_316d44:
    // 0x316d44: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x316d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_316d48:
    // 0x316d48: 0x8c6222d8  lw          $v0, 0x22D8($v1)
    ctx->pc = 0x316d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8920)));
label_316d4c:
    // 0x316d4c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x316d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_316d50:
    // 0x316d50: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x316d50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_316d54:
    // 0x316d54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x316d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_316d58:
    // 0x316d58: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x316d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_316d5c:
    // 0x316d5c: 0xac6622d8  sw          $a2, 0x22D8($v1)
    ctx->pc = 0x316d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8920), GPR_U32(ctx, 6));
label_316d60:
    // 0x316d60: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x316d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_316d64:
    // 0x316d64: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x316d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
label_316d68:
    // 0x316d68: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x316d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_316d6c:
    // 0x316d6c: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x316d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_316d70:
    // 0x316d70: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x316d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_316d74:
    // 0x316d74: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x316d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316d78:
    // 0x316d78: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x316d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316d7c:
    // 0x316d7c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x316d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_316d80:
    // 0x316d80: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x316d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_316d84:
    // 0x316d84: 0xb082000f  sdl         $v0, 0xF($a0)
    ctx->pc = 0x316d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316d88:
    // 0x316d88: 0xb4820008  sdr         $v0, 0x8($a0)
    ctx->pc = 0x316d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316d8c:
    // 0x316d8c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x316d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_316d90:
    // 0x316d90: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_316d94:
    if (ctx->pc == 0x316D94u) {
        ctx->pc = 0x316D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316D90u;
        // 0x316d94: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316D98u;
        goto label_316d98;
    }
    ctx->pc = 0x316D90u;
    {
        const bool branch_taken_0x316d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x316d90) {
            ctx->pc = 0x316D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316D90u;
            // 0x316d94: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316DA4u;
            goto label_316da4;
        }
    }
    ctx->pc = 0x316D98u;
label_316d98:
    // 0x316d98: 0xc0f5222  jal         func_3D4888
label_316d9c:
    if (ctx->pc == 0x316D9Cu) {
        ctx->pc = 0x316DA0u;
        goto label_316da0;
    }
    ctx->pc = 0x316D98u;
    SET_GPR_U32(ctx, 31, 0x316DA0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x316D98u, 0x316DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316DA0u;
label_316da0:
    // 0x316da0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x316da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_316da4:
    // 0x316da4: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x316da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_316da8:
    // 0x316da8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x316da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_316dac:
    // 0x316dac: 0x246422f0  addiu       $a0, $v1, 0x22F0
    ctx->pc = 0x316dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8944));
label_316db0:
    // 0x316db0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x316db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_316db4:
    // 0x316db4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x316db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_316db8:
    // 0x316db8: 0x8c6222f0  lw          $v0, 0x22F0($v1)
    ctx->pc = 0x316db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8944)));
label_316dbc:
    // 0x316dbc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x316dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_316dc0:
    // 0x316dc0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x316dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_316dc4:
    // 0x316dc4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x316dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_316dc8:
    // 0x316dc8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x316dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_316dcc:
    // 0x316dcc: 0xac6622f0  sw          $a2, 0x22F0($v1)
    ctx->pc = 0x316dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8944), GPR_U32(ctx, 6));
label_316dd0:
    // 0x316dd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x316dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_316dd4:
    // 0x316dd4: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x316dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
label_316dd8:
    // 0x316dd8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x316dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_316ddc:
    // 0x316ddc: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x316ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_316de0:
    // 0x316de0: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x316de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_316de4:
    // 0x316de4: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x316de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316de8:
    // 0x316de8: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x316de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316dec:
    // 0x316dec: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x316decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_316df0:
    // 0x316df0: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x316df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_316df4:
    // 0x316df4: 0xb082000f  sdl         $v0, 0xF($a0)
    ctx->pc = 0x316df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316df8:
    // 0x316df8: 0xb4820008  sdr         $v0, 0x8($a0)
    ctx->pc = 0x316df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316dfc:
    // 0x316dfc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x316dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_316e00:
    // 0x316e00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_316e04:
    if (ctx->pc == 0x316E04u) {
        ctx->pc = 0x316E08u;
        goto label_316e08;
    }
    ctx->pc = 0x316E00u;
    {
        const bool branch_taken_0x316e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x316e00) {
            ctx->pc = 0x316E10u;
            goto label_316e10;
        }
    }
    ctx->pc = 0x316E08u;
label_316e08:
    // 0x316e08: 0xc0f5222  jal         func_3D4888
label_316e0c:
    if (ctx->pc == 0x316E0Cu) {
        ctx->pc = 0x316E10u;
        goto label_316e10;
    }
    ctx->pc = 0x316E08u;
    SET_GPR_U32(ctx, 31, 0x316E10u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x316E08u, 0x316E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E10u;
label_316e10:
    // 0x316e10: 0xc0c549c  jal         func_315270
label_316e14:
    if (ctx->pc == 0x316E14u) {
        ctx->pc = 0x316E18u;
        goto label_316e18;
    }
    ctx->pc = 0x316E10u;
    SET_GPR_U32(ctx, 31, 0x316E18u);
    ctx->pc = 0x315270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315270u, 0x316E10u, 0x316E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E18u;
label_316e18:
    // 0x316e18: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x316e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_316e1c:
    // 0x316e1c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x316e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_316e20:
    // 0x316e20: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x316e20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_316e24:
    // 0x316e24: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x316e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_316e28:
    // 0x316e28: 0x3e00008  jr          $ra
label_316e2c:
    if (ctx->pc == 0x316E2Cu) {
        ctx->pc = 0x316E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E28u;
        // 0x316e2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316E30u;
        goto label_fallthrough_0x316e28;
    }
    ctx->pc = 0x316E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E28u;
        // 0x316e2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x316e28:
    ctx->pc = 0x316E30u;
}
