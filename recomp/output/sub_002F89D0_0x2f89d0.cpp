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

// Function: sub_002F89D0
// Address: 0x2f89d0 - 0x2f8dc8
void sub_002F89D0_0x2f89d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F89D0_0x2f89d0");
#endif

    switch (ctx->pc) {
        case 0x2f89d0u: goto label_2f89d0;
        case 0x2f89d4u: goto label_2f89d4;
        case 0x2f89d8u: goto label_2f89d8;
        case 0x2f89dcu: goto label_2f89dc;
        case 0x2f89e0u: goto label_2f89e0;
        case 0x2f89e4u: goto label_2f89e4;
        case 0x2f89e8u: goto label_2f89e8;
        case 0x2f89ecu: goto label_2f89ec;
        case 0x2f89f0u: goto label_2f89f0;
        case 0x2f89f4u: goto label_2f89f4;
        case 0x2f89f8u: goto label_2f89f8;
        case 0x2f89fcu: goto label_2f89fc;
        case 0x2f8a00u: goto label_2f8a00;
        case 0x2f8a04u: goto label_2f8a04;
        case 0x2f8a08u: goto label_2f8a08;
        case 0x2f8a0cu: goto label_2f8a0c;
        case 0x2f8a10u: goto label_2f8a10;
        case 0x2f8a14u: goto label_2f8a14;
        case 0x2f8a18u: goto label_2f8a18;
        case 0x2f8a1cu: goto label_2f8a1c;
        case 0x2f8a20u: goto label_2f8a20;
        case 0x2f8a24u: goto label_2f8a24;
        case 0x2f8a28u: goto label_2f8a28;
        case 0x2f8a2cu: goto label_2f8a2c;
        case 0x2f8a30u: goto label_2f8a30;
        case 0x2f8a34u: goto label_2f8a34;
        case 0x2f8a38u: goto label_2f8a38;
        case 0x2f8a3cu: goto label_2f8a3c;
        case 0x2f8a40u: goto label_2f8a40;
        case 0x2f8a44u: goto label_2f8a44;
        case 0x2f8a48u: goto label_2f8a48;
        case 0x2f8a4cu: goto label_2f8a4c;
        case 0x2f8a50u: goto label_2f8a50;
        case 0x2f8a54u: goto label_2f8a54;
        case 0x2f8a58u: goto label_2f8a58;
        case 0x2f8a5cu: goto label_2f8a5c;
        case 0x2f8a60u: goto label_2f8a60;
        case 0x2f8a64u: goto label_2f8a64;
        case 0x2f8a68u: goto label_2f8a68;
        case 0x2f8a6cu: goto label_2f8a6c;
        case 0x2f8a70u: goto label_2f8a70;
        case 0x2f8a74u: goto label_2f8a74;
        case 0x2f8a78u: goto label_2f8a78;
        case 0x2f8a7cu: goto label_2f8a7c;
        case 0x2f8a80u: goto label_2f8a80;
        case 0x2f8a84u: goto label_2f8a84;
        case 0x2f8a88u: goto label_2f8a88;
        case 0x2f8a8cu: goto label_2f8a8c;
        case 0x2f8a90u: goto label_2f8a90;
        case 0x2f8a94u: goto label_2f8a94;
        case 0x2f8a98u: goto label_2f8a98;
        case 0x2f8a9cu: goto label_2f8a9c;
        case 0x2f8aa0u: goto label_2f8aa0;
        case 0x2f8aa4u: goto label_2f8aa4;
        case 0x2f8aa8u: goto label_2f8aa8;
        case 0x2f8aacu: goto label_2f8aac;
        case 0x2f8ab0u: goto label_2f8ab0;
        case 0x2f8ab4u: goto label_2f8ab4;
        case 0x2f8ab8u: goto label_2f8ab8;
        case 0x2f8abcu: goto label_2f8abc;
        case 0x2f8ac0u: goto label_2f8ac0;
        case 0x2f8ac4u: goto label_2f8ac4;
        case 0x2f8ac8u: goto label_2f8ac8;
        case 0x2f8accu: goto label_2f8acc;
        case 0x2f8ad0u: goto label_2f8ad0;
        case 0x2f8ad4u: goto label_2f8ad4;
        case 0x2f8ad8u: goto label_2f8ad8;
        case 0x2f8adcu: goto label_2f8adc;
        case 0x2f8ae0u: goto label_2f8ae0;
        case 0x2f8ae4u: goto label_2f8ae4;
        case 0x2f8ae8u: goto label_2f8ae8;
        case 0x2f8aecu: goto label_2f8aec;
        case 0x2f8af0u: goto label_2f8af0;
        case 0x2f8af4u: goto label_2f8af4;
        case 0x2f8af8u: goto label_2f8af8;
        case 0x2f8afcu: goto label_2f8afc;
        case 0x2f8b00u: goto label_2f8b00;
        case 0x2f8b04u: goto label_2f8b04;
        case 0x2f8b08u: goto label_2f8b08;
        case 0x2f8b0cu: goto label_2f8b0c;
        case 0x2f8b10u: goto label_2f8b10;
        case 0x2f8b14u: goto label_2f8b14;
        case 0x2f8b18u: goto label_2f8b18;
        case 0x2f8b1cu: goto label_2f8b1c;
        case 0x2f8b20u: goto label_2f8b20;
        case 0x2f8b24u: goto label_2f8b24;
        case 0x2f8b28u: goto label_2f8b28;
        case 0x2f8b2cu: goto label_2f8b2c;
        case 0x2f8b30u: goto label_2f8b30;
        case 0x2f8b34u: goto label_2f8b34;
        case 0x2f8b38u: goto label_2f8b38;
        case 0x2f8b3cu: goto label_2f8b3c;
        case 0x2f8b40u: goto label_2f8b40;
        case 0x2f8b44u: goto label_2f8b44;
        case 0x2f8b48u: goto label_2f8b48;
        case 0x2f8b4cu: goto label_2f8b4c;
        case 0x2f8b50u: goto label_2f8b50;
        case 0x2f8b54u: goto label_2f8b54;
        case 0x2f8b58u: goto label_2f8b58;
        case 0x2f8b5cu: goto label_2f8b5c;
        case 0x2f8b60u: goto label_2f8b60;
        case 0x2f8b64u: goto label_2f8b64;
        case 0x2f8b68u: goto label_2f8b68;
        case 0x2f8b6cu: goto label_2f8b6c;
        case 0x2f8b70u: goto label_2f8b70;
        case 0x2f8b74u: goto label_2f8b74;
        case 0x2f8b78u: goto label_2f8b78;
        case 0x2f8b7cu: goto label_2f8b7c;
        case 0x2f8b80u: goto label_2f8b80;
        case 0x2f8b84u: goto label_2f8b84;
        case 0x2f8b88u: goto label_2f8b88;
        case 0x2f8b8cu: goto label_2f8b8c;
        case 0x2f8b90u: goto label_2f8b90;
        case 0x2f8b94u: goto label_2f8b94;
        case 0x2f8b98u: goto label_2f8b98;
        case 0x2f8b9cu: goto label_2f8b9c;
        case 0x2f8ba0u: goto label_2f8ba0;
        case 0x2f8ba4u: goto label_2f8ba4;
        case 0x2f8ba8u: goto label_2f8ba8;
        case 0x2f8bacu: goto label_2f8bac;
        case 0x2f8bb0u: goto label_2f8bb0;
        case 0x2f8bb4u: goto label_2f8bb4;
        case 0x2f8bb8u: goto label_2f8bb8;
        case 0x2f8bbcu: goto label_2f8bbc;
        case 0x2f8bc0u: goto label_2f8bc0;
        case 0x2f8bc4u: goto label_2f8bc4;
        case 0x2f8bc8u: goto label_2f8bc8;
        case 0x2f8bccu: goto label_2f8bcc;
        case 0x2f8bd0u: goto label_2f8bd0;
        case 0x2f8bd4u: goto label_2f8bd4;
        case 0x2f8bd8u: goto label_2f8bd8;
        case 0x2f8bdcu: goto label_2f8bdc;
        case 0x2f8be0u: goto label_2f8be0;
        case 0x2f8be4u: goto label_2f8be4;
        case 0x2f8be8u: goto label_2f8be8;
        case 0x2f8becu: goto label_2f8bec;
        case 0x2f8bf0u: goto label_2f8bf0;
        case 0x2f8bf4u: goto label_2f8bf4;
        case 0x2f8bf8u: goto label_2f8bf8;
        case 0x2f8bfcu: goto label_2f8bfc;
        case 0x2f8c00u: goto label_2f8c00;
        case 0x2f8c04u: goto label_2f8c04;
        case 0x2f8c08u: goto label_2f8c08;
        case 0x2f8c0cu: goto label_2f8c0c;
        case 0x2f8c10u: goto label_2f8c10;
        case 0x2f8c14u: goto label_2f8c14;
        case 0x2f8c18u: goto label_2f8c18;
        case 0x2f8c1cu: goto label_2f8c1c;
        case 0x2f8c20u: goto label_2f8c20;
        case 0x2f8c24u: goto label_2f8c24;
        case 0x2f8c28u: goto label_2f8c28;
        case 0x2f8c2cu: goto label_2f8c2c;
        case 0x2f8c30u: goto label_2f8c30;
        case 0x2f8c34u: goto label_2f8c34;
        case 0x2f8c38u: goto label_2f8c38;
        case 0x2f8c3cu: goto label_2f8c3c;
        case 0x2f8c40u: goto label_2f8c40;
        case 0x2f8c44u: goto label_2f8c44;
        case 0x2f8c48u: goto label_2f8c48;
        case 0x2f8c4cu: goto label_2f8c4c;
        case 0x2f8c50u: goto label_2f8c50;
        case 0x2f8c54u: goto label_2f8c54;
        case 0x2f8c58u: goto label_2f8c58;
        case 0x2f8c5cu: goto label_2f8c5c;
        case 0x2f8c60u: goto label_2f8c60;
        case 0x2f8c64u: goto label_2f8c64;
        case 0x2f8c68u: goto label_2f8c68;
        case 0x2f8c6cu: goto label_2f8c6c;
        case 0x2f8c70u: goto label_2f8c70;
        case 0x2f8c74u: goto label_2f8c74;
        case 0x2f8c78u: goto label_2f8c78;
        case 0x2f8c7cu: goto label_2f8c7c;
        case 0x2f8c80u: goto label_2f8c80;
        case 0x2f8c84u: goto label_2f8c84;
        case 0x2f8c88u: goto label_2f8c88;
        case 0x2f8c8cu: goto label_2f8c8c;
        case 0x2f8c90u: goto label_2f8c90;
        case 0x2f8c94u: goto label_2f8c94;
        case 0x2f8c98u: goto label_2f8c98;
        case 0x2f8c9cu: goto label_2f8c9c;
        case 0x2f8ca0u: goto label_2f8ca0;
        case 0x2f8ca4u: goto label_2f8ca4;
        case 0x2f8ca8u: goto label_2f8ca8;
        case 0x2f8cacu: goto label_2f8cac;
        case 0x2f8cb0u: goto label_2f8cb0;
        case 0x2f8cb4u: goto label_2f8cb4;
        case 0x2f8cb8u: goto label_2f8cb8;
        case 0x2f8cbcu: goto label_2f8cbc;
        case 0x2f8cc0u: goto label_2f8cc0;
        case 0x2f8cc4u: goto label_2f8cc4;
        case 0x2f8cc8u: goto label_2f8cc8;
        case 0x2f8cccu: goto label_2f8ccc;
        case 0x2f8cd0u: goto label_2f8cd0;
        case 0x2f8cd4u: goto label_2f8cd4;
        case 0x2f8cd8u: goto label_2f8cd8;
        case 0x2f8cdcu: goto label_2f8cdc;
        case 0x2f8ce0u: goto label_2f8ce0;
        case 0x2f8ce4u: goto label_2f8ce4;
        case 0x2f8ce8u: goto label_2f8ce8;
        case 0x2f8cecu: goto label_2f8cec;
        case 0x2f8cf0u: goto label_2f8cf0;
        case 0x2f8cf4u: goto label_2f8cf4;
        case 0x2f8cf8u: goto label_2f8cf8;
        case 0x2f8cfcu: goto label_2f8cfc;
        case 0x2f8d00u: goto label_2f8d00;
        case 0x2f8d04u: goto label_2f8d04;
        case 0x2f8d08u: goto label_2f8d08;
        case 0x2f8d0cu: goto label_2f8d0c;
        case 0x2f8d10u: goto label_2f8d10;
        case 0x2f8d14u: goto label_2f8d14;
        case 0x2f8d18u: goto label_2f8d18;
        case 0x2f8d1cu: goto label_2f8d1c;
        case 0x2f8d20u: goto label_2f8d20;
        case 0x2f8d24u: goto label_2f8d24;
        case 0x2f8d28u: goto label_2f8d28;
        case 0x2f8d2cu: goto label_2f8d2c;
        case 0x2f8d30u: goto label_2f8d30;
        case 0x2f8d34u: goto label_2f8d34;
        case 0x2f8d38u: goto label_2f8d38;
        case 0x2f8d3cu: goto label_2f8d3c;
        case 0x2f8d40u: goto label_2f8d40;
        case 0x2f8d44u: goto label_2f8d44;
        case 0x2f8d48u: goto label_2f8d48;
        case 0x2f8d4cu: goto label_2f8d4c;
        case 0x2f8d50u: goto label_2f8d50;
        case 0x2f8d54u: goto label_2f8d54;
        case 0x2f8d58u: goto label_2f8d58;
        case 0x2f8d5cu: goto label_2f8d5c;
        case 0x2f8d60u: goto label_2f8d60;
        case 0x2f8d64u: goto label_2f8d64;
        case 0x2f8d68u: goto label_2f8d68;
        case 0x2f8d6cu: goto label_2f8d6c;
        case 0x2f8d70u: goto label_2f8d70;
        case 0x2f8d74u: goto label_2f8d74;
        case 0x2f8d78u: goto label_2f8d78;
        case 0x2f8d7cu: goto label_2f8d7c;
        case 0x2f8d80u: goto label_2f8d80;
        case 0x2f8d84u: goto label_2f8d84;
        case 0x2f8d88u: goto label_2f8d88;
        case 0x2f8d8cu: goto label_2f8d8c;
        case 0x2f8d90u: goto label_2f8d90;
        case 0x2f8d94u: goto label_2f8d94;
        case 0x2f8d98u: goto label_2f8d98;
        case 0x2f8d9cu: goto label_2f8d9c;
        case 0x2f8da0u: goto label_2f8da0;
        case 0x2f8da4u: goto label_2f8da4;
        case 0x2f8da8u: goto label_2f8da8;
        case 0x2f8dacu: goto label_2f8dac;
        case 0x2f8db0u: goto label_2f8db0;
        case 0x2f8db4u: goto label_2f8db4;
        case 0x2f8db8u: goto label_2f8db8;
        case 0x2f8dbcu: goto label_2f8dbc;
        case 0x2f8dc0u: goto label_2f8dc0;
        case 0x2f8dc4u: goto label_2f8dc4;
        default: break;
    }

    ctx->pc = 0x2f89d0u;

label_2f89d0:
    // 0x2f89d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f89d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2f89d4:
    // 0x2f89d4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2f89d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_2f89d8:
    // 0x2f89d8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2f89d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2f89dc:
    // 0x2f89dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f89dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f89e0:
    // 0x2f89e0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2f89e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_2f89e4:
    // 0x2f89e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f89e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f89e8:
    // 0x2f89e8: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2f89e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_2f89ec:
    // 0x2f89ec: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2f89ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_2f89f0:
    // 0x2f89f0: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2f89f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_2f89f4:
    // 0x2f89f4: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2f89f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_2f89f8:
    // 0x2f89f8: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x2f89f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_2f89fc:
    // 0x2f89fc: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2f89fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_2f8a00:
    // 0x2f8a00: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2f8a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_2f8a04:
    // 0x2f8a04: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2f8a04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2f8a08:
    // 0x2f8a08: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2f8a08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2f8a0c:
    // 0x2f8a0c: 0xc0b9400  jal         func_2E5000
label_2f8a10:
    if (ctx->pc == 0x2F8A10u) {
        ctx->pc = 0x2F8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A0Cu;
        // 0x2f8a10: 0xae4004f4  sw          $zero, 0x4F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A14u;
        goto label_2f8a14;
    }
    ctx->pc = 0x2F8A0Cu;
    SET_GPR_U32(ctx, 31, 0x2F8A14u);
    ctx->pc = 0x2F8A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8A0Cu;
    // 0x2f8a10: 0xae4004f4  sw          $zero, 0x4F4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1268), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2F8A0Cu, 0x2F8A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A14u;
label_2f8a14:
    // 0x2f8a14: 0x544000de  bnel        $v0, $zero, . + 4 + (0xDE << 2)
label_2f8a18:
    if (ctx->pc == 0x2F8A18u) {
        ctx->pc = 0x2F8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A14u;
        // 0x2f8a18: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A1Cu;
        goto label_2f8a1c;
    }
    ctx->pc = 0x2F8A14u;
    {
        const bool branch_taken_0x2f8a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8a14) {
            ctx->pc = 0x2F8A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8A14u;
            // 0x2f8a18: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D90u;
            goto label_2f8d90;
        }
    }
    ctx->pc = 0x2F8A1Cu;
label_2f8a1c:
    // 0x2f8a1c: 0xc0b93fe  jal         func_2E4FF8
label_2f8a20:
    if (ctx->pc == 0x2F8A20u) {
        ctx->pc = 0x2F8A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A1Cu;
        // 0x2f8a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A24u;
        goto label_2f8a24;
    }
    ctx->pc = 0x2F8A1Cu;
    SET_GPR_U32(ctx, 31, 0x2F8A24u);
    ctx->pc = 0x2F8A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8A1Cu;
    // 0x2f8a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF8u, 0x2F8A1Cu, 0x2F8A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A24u;
label_2f8a24:
    // 0x2f8a24: 0x544000da  bnel        $v0, $zero, . + 4 + (0xDA << 2)
label_2f8a28:
    if (ctx->pc == 0x2F8A28u) {
        ctx->pc = 0x2F8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A24u;
        // 0x2f8a28: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A2Cu;
        goto label_2f8a2c;
    }
    ctx->pc = 0x2F8A24u;
    {
        const bool branch_taken_0x2f8a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8a24) {
            ctx->pc = 0x2F8A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8A24u;
            // 0x2f8a28: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D90u;
            goto label_2f8d90;
        }
    }
    ctx->pc = 0x2F8A2Cu;
label_2f8a2c:
    // 0x2f8a2c: 0x9242047d  lbu         $v0, 0x47D($s2)
    ctx->pc = 0x2f8a2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1149)));
label_2f8a30:
    // 0x2f8a30: 0x544000d6  bnel        $v0, $zero, . + 4 + (0xD6 << 2)
label_2f8a34:
    if (ctx->pc == 0x2F8A34u) {
        ctx->pc = 0x2F8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A30u;
        // 0x2f8a34: 0xae4011e8  sw          $zero, 0x11E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A38u;
        goto label_2f8a38;
    }
    ctx->pc = 0x2F8A30u;
    {
        const bool branch_taken_0x2f8a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8a30) {
            ctx->pc = 0x2F8A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8A30u;
            // 0x2f8a34: 0xae4011e8  sw          $zero, 0x11E8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D8Cu;
            goto label_2f8d8c;
        }
    }
    ctx->pc = 0x2F8A38u;
label_2f8a38:
    // 0x2f8a38: 0xc08f672  jal         func_23D9C8
label_2f8a3c:
    if (ctx->pc == 0x2F8A3Cu) {
        ctx->pc = 0x2F8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A38u;
        // 0x2f8a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A40u;
        goto label_2f8a40;
    }
    ctx->pc = 0x2F8A38u;
    SET_GPR_U32(ctx, 31, 0x2F8A40u);
    ctx->pc = 0x2F8A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8A38u;
    // 0x2f8a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2F8A38u, 0x2F8A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A40u;
label_2f8a40:
    // 0x2f8a40: 0x544000d3  bnel        $v0, $zero, . + 4 + (0xD3 << 2)
label_2f8a44:
    if (ctx->pc == 0x2F8A44u) {
        ctx->pc = 0x2F8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A40u;
        // 0x2f8a44: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A48u;
        goto label_2f8a48;
    }
    ctx->pc = 0x2F8A40u;
    {
        const bool branch_taken_0x2f8a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8a40) {
            ctx->pc = 0x2F8A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8A40u;
            // 0x2f8a44: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D90u;
            goto label_2f8d90;
        }
    }
    ctx->pc = 0x2F8A48u;
label_2f8a48:
    // 0x2f8a48: 0xc08f68a  jal         func_23DA28
label_2f8a4c:
    if (ctx->pc == 0x2F8A4Cu) {
        ctx->pc = 0x2F8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A48u;
        // 0x2f8a4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A50u;
        goto label_2f8a50;
    }
    ctx->pc = 0x2F8A48u;
    SET_GPR_U32(ctx, 31, 0x2F8A50u);
    ctx->pc = 0x2F8A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8A48u;
    // 0x2f8a4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA28u, 0x2F8A48u, 0x2F8A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A50u;
label_2f8a50:
    // 0x2f8a50: 0x544000cf  bnel        $v0, $zero, . + 4 + (0xCF << 2)
label_2f8a54:
    if (ctx->pc == 0x2F8A54u) {
        ctx->pc = 0x2F8A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A50u;
        // 0x2f8a54: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A58u;
        goto label_2f8a58;
    }
    ctx->pc = 0x2F8A50u;
    {
        const bool branch_taken_0x2f8a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8a50) {
            ctx->pc = 0x2F8A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8A50u;
            // 0x2f8a54: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D90u;
            goto label_2f8d90;
        }
    }
    ctx->pc = 0x2F8A58u;
label_2f8a58:
    // 0x2f8a58: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2f8a5c:
    if (ctx->pc == 0x2F8A5Cu) {
        ctx->pc = 0x2F8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A58u;
        // 0x2f8a5c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A60u;
        goto label_2f8a60;
    }
    ctx->pc = 0x2F8A58u;
    {
        const bool branch_taken_0x2f8a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A58u;
        // 0x2f8a5c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a58) {
            ctx->pc = 0x2F8A9Cu;
            goto label_2f8a9c;
        }
    }
    ctx->pc = 0x2F8A60u;
label_2f8a60:
    // 0x2f8a60: 0x8e4211e8  lw          $v0, 0x11E8($s2)
    ctx->pc = 0x2f8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2f8a64:
    // 0x2f8a64: 0x504000c9  beql        $v0, $zero, . + 4 + (0xC9 << 2)
label_2f8a68:
    if (ctx->pc == 0x2F8A68u) {
        ctx->pc = 0x2F8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A64u;
        // 0x2f8a68: 0xae4011e8  sw          $zero, 0x11E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A6Cu;
        goto label_2f8a6c;
    }
    ctx->pc = 0x2F8A64u;
    {
        const bool branch_taken_0x2f8a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8a64) {
            ctx->pc = 0x2F8A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8A64u;
            // 0x2f8a68: 0xae4011e8  sw          $zero, 0x11E8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D8Cu;
            goto label_2f8d8c;
        }
    }
    ctx->pc = 0x2F8A6Cu;
label_2f8a6c:
    // 0x2f8a6c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x2f8a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8a70:
    // 0x2f8a70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f8a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8a74:
    // 0x2f8a74: 0x0  nop
    ctx->pc = 0x2f8a74u;
    // NOP
label_2f8a78:
    // 0x2f8a78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f8a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f8a7c:
    // 0x2f8a7c: 0x0  nop
    ctx->pc = 0x2f8a7cu;
    // NOP
label_2f8a80:
    // 0x2f8a80: 0x450300c2  bc1tl       . + 4 + (0xC2 << 2)
label_2f8a84:
    if (ctx->pc == 0x2F8A84u) {
        ctx->pc = 0x2F8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A80u;
        // 0x2f8a84: 0xae4011e8  sw          $zero, 0x11E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A88u;
        goto label_2f8a88;
    }
    ctx->pc = 0x2F8A80u;
    {
        const bool branch_taken_0x2f8a80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f8a80) {
            ctx->pc = 0x2F8A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8A80u;
            // 0x2f8a84: 0xae4011e8  sw          $zero, 0x11E8($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D8Cu;
            goto label_2f8d8c;
        }
    }
    ctx->pc = 0x2F8A88u;
label_2f8a88:
    // 0x2f8a88: 0x8c421100  lw          $v0, 0x1100($v0)
    ctx->pc = 0x2f8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4352)));
label_2f8a8c:
    // 0x2f8a8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2f8a90:
    if (ctx->pc == 0x2F8A90u) {
        ctx->pc = 0x2F8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A8Cu;
        // 0x2f8a90: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A94u;
        goto label_2f8a94;
    }
    ctx->pc = 0x2F8A8Cu;
    {
        const bool branch_taken_0x2f8a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A8Cu;
        // 0x2f8a90: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a8c) {
            ctx->pc = 0x2F8A9Cu;
            goto label_2f8a9c;
        }
    }
    ctx->pc = 0x2F8A94u;
label_2f8a94:
    // 0x2f8a94: 0x100000bd  b           . + 4 + (0xBD << 2)
label_2f8a98:
    if (ctx->pc == 0x2F8A98u) {
        ctx->pc = 0x2F8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A94u;
        // 0x2f8a98: 0xae4011e8  sw          $zero, 0x11E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8A9Cu;
        goto label_2f8a9c;
    }
    ctx->pc = 0x2F8A94u;
    {
        const bool branch_taken_0x2f8a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A94u;
        // 0x2f8a98: 0xae4011e8  sw          $zero, 0x11E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a94) {
            ctx->pc = 0x2F8D8Cu;
            goto label_2f8d8c;
        }
    }
    ctx->pc = 0x2F8A9Cu;
label_2f8a9c:
    // 0x2f8a9c: 0x90435aec  lbu         $v1, 0x5AEC($v0)
    ctx->pc = 0x2f8a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23276)));
label_2f8aa0:
    // 0x2f8aa0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_2f8aa4:
    if (ctx->pc == 0x2F8AA4u) {
        ctx->pc = 0x2F8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AA0u;
        // 0x2f8aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8AA8u;
        goto label_2f8aa8;
    }
    ctx->pc = 0x2F8AA0u;
    {
        const bool branch_taken_0x2f8aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AA0u;
        // 0x2f8aa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8aa0) {
            ctx->pc = 0x2F8AF8u;
            goto label_2f8af8;
        }
    }
    ctx->pc = 0x2F8AA8u;
label_2f8aa8:
    // 0x2f8aa8: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x2f8aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2f8aac:
    // 0x2f8aac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f8aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8ab0:
    // 0x2f8ab0: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x2f8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_2f8ab4:
    // 0x2f8ab4: 0x40f809  jalr        $v0
label_2f8ab8:
    if (ctx->pc == 0x2F8AB8u) {
        ctx->pc = 0x2F8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AB4u;
        // 0x2f8ab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8ABCu;
        goto label_2f8abc;
    }
    ctx->pc = 0x2F8AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F8ABCu);
        ctx->pc = 0x2F8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AB4u;
        // 0x2f8ab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8AB4u, 0x2F8ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F8ABCu;
label_2f8abc:
    // 0x2f8abc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2f8ac0:
    if (ctx->pc == 0x2F8AC0u) {
        ctx->pc = 0x2F8AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8ABCu;
        // 0x2f8ac0: 0x8e4211e4  lw          $v0, 0x11E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8AC4u;
        goto label_2f8ac4;
    }
    ctx->pc = 0x2F8ABCu;
    {
        const bool branch_taken_0x2f8abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8abc) {
            ctx->pc = 0x2F8AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8ABCu;
            // 0x2f8ac0: 0x8e4211e4  lw          $v0, 0x11E4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8AFCu;
            goto label_2f8afc;
        }
    }
    ctx->pc = 0x2F8AC4u;
label_2f8ac4:
    // 0x2f8ac4: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x2f8ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_2f8ac8:
    // 0x2f8ac8: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x2f8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_2f8acc:
    // 0x2f8acc: 0x2462fff4  addiu       $v0, $v1, -0xC
    ctx->pc = 0x2f8accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_2f8ad0:
    // 0x2f8ad0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f8ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f8ad4:
    // 0x2f8ad4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2f8ad8:
    if (ctx->pc == 0x2F8AD8u) {
        ctx->pc = 0x2F8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AD4u;
        // 0x2f8ad8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8ADCu;
        goto label_2f8adc;
    }
    ctx->pc = 0x2F8AD4u;
    {
        const bool branch_taken_0x2f8ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AD4u;
        // 0x2f8ad8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ad4) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8ADCu;
label_2f8adc:
    // 0x2f8adc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f8adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f8ae0:
    // 0x2f8ae0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2f8ae4:
    if (ctx->pc == 0x2F8AE4u) {
        ctx->pc = 0x2F8AE8u;
        goto label_2f8ae8;
    }
    ctx->pc = 0x2F8AE0u;
    {
        const bool branch_taken_0x2f8ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ae0) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8AE8u;
label_2f8ae8:
    // 0x2f8ae8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_2f8aec:
    if (ctx->pc == 0x2F8AECu) {
        ctx->pc = 0x2F8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AE8u;
        // 0x2f8aec: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8AF0u;
        goto label_2f8af0;
    }
    ctx->pc = 0x2F8AE8u;
    {
        const bool branch_taken_0x2f8ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AE8u;
        // 0x2f8aec: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ae8) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8AF0u;
label_2f8af0:
    // 0x2f8af0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_2f8af4:
    if (ctx->pc == 0x2F8AF4u) {
        ctx->pc = 0x2F8AF8u;
        goto label_2f8af8;
    }
    ctx->pc = 0x2F8AF0u;
    {
        const bool branch_taken_0x2f8af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8af0) {
            ctx->pc = 0x2F8B24u;
            goto label_2f8b24;
        }
    }
    ctx->pc = 0x2F8AF8u;
label_2f8af8:
    // 0x2f8af8: 0x8e4211e4  lw          $v0, 0x11E4($s2)
    ctx->pc = 0x2f8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4580)));
label_2f8afc:
    // 0x2f8afc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2f8b00:
    if (ctx->pc == 0x2F8B00u) {
        ctx->pc = 0x2F8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AFCu;
        // 0x2f8b00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B04u;
        goto label_2f8b04;
    }
    ctx->pc = 0x2F8AFCu;
    {
        const bool branch_taken_0x2f8afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AFCu;
        // 0x2f8b00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8afc) {
            ctx->pc = 0x2F8B1Cu;
            goto label_2f8b1c;
        }
    }
    ctx->pc = 0x2F8B04u;
label_2f8b04:
    // 0x2f8b04: 0x8c4200b8  lw          $v0, 0xB8($v0)
    ctx->pc = 0x2f8b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_2f8b08:
    // 0x2f8b08: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f8b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2f8b0c:
    // 0x2f8b0c: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x2f8b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2f8b10:
    // 0x2f8b10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2f8b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2f8b14:
    // 0x2f8b14: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2f8b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_2f8b18:
    // 0x2f8b18: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2f8b18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f8b1c:
    // 0x2f8b1c: 0x5060009c  beql        $v1, $zero, . + 4 + (0x9C << 2)
label_2f8b20:
    if (ctx->pc == 0x2F8B20u) {
        ctx->pc = 0x2F8B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B1Cu;
        // 0x2f8b20: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B24u;
        goto label_2f8b24;
    }
    ctx->pc = 0x2F8B1Cu;
    {
        const bool branch_taken_0x2f8b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b1c) {
            ctx->pc = 0x2F8B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8B1Cu;
            // 0x2f8b20: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D90u;
            goto label_2f8d90;
        }
    }
    ctx->pc = 0x2F8B24u;
label_2f8b24:
    // 0x2f8b24: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_2f8b28:
    if (ctx->pc == 0x2F8B28u) {
        ctx->pc = 0x2F8B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B24u;
        // 0x2f8b28: 0x8e5611e8  lw          $s6, 0x11E8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B2Cu;
        goto label_2f8b2c;
    }
    ctx->pc = 0x2F8B24u;
    {
        const bool branch_taken_0x2f8b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b24) {
            ctx->pc = 0x2F8B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8B24u;
            // 0x2f8b28: 0x8e5611e8  lw          $s6, 0x11E8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8B3Cu;
            goto label_2f8b3c;
        }
    }
    ctx->pc = 0x2F8B2Cu;
label_2f8b2c:
    // 0x2f8b2c: 0xc0be862  jal         func_2FA188
label_2f8b30:
    if (ctx->pc == 0x2F8B30u) {
        ctx->pc = 0x2F8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B2Cu;
        // 0x2f8b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B34u;
        goto label_2f8b34;
    }
    ctx->pc = 0x2F8B2Cu;
    SET_GPR_U32(ctx, 31, 0x2F8B34u);
    ctx->pc = 0x2F8B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8B2Cu;
    // 0x2f8b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA188u, 0x2F8B2Cu, 0x2F8B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8B34u;
label_2f8b34:
    // 0x2f8b34: 0x10000096  b           . + 4 + (0x96 << 2)
label_2f8b38:
    if (ctx->pc == 0x2F8B38u) {
        ctx->pc = 0x2F8B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B34u;
        // 0x2f8b38: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B3Cu;
        goto label_2f8b3c;
    }
    ctx->pc = 0x2F8B34u;
    {
        const bool branch_taken_0x2f8b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B34u;
        // 0x2f8b38: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b34) {
            ctx->pc = 0x2F8D90u;
            goto label_2f8d90;
        }
    }
    ctx->pc = 0x2F8B3Cu;
label_2f8b3c:
    // 0x2f8b3c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x2f8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_2f8b40:
    // 0x2f8b40: 0xae4011e8  sw          $zero, 0x11E8($s2)
    ctx->pc = 0x2f8b40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 0));
label_2f8b44:
    // 0x2f8b44: 0x24423d20  addiu       $v0, $v0, 0x3D20
    ctx->pc = 0x2f8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
label_2f8b48:
    // 0x2f8b48: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2f8b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2f8b4c:
    // 0x2f8b4c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2f8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_2f8b50:
    // 0x2f8b50: 0x3c1e004a  lui         $fp, 0x4A
    ctx->pc = 0x2f8b50u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)74 << 16));
label_2f8b54:
    // 0x2f8b54: 0xc4751b88  lwc1        $f21, 0x1B88($v1)
    ctx->pc = 0x2f8b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f8b58:
    // 0x2f8b58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2f8b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f8b5c:
    // 0x2f8b5c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2f8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_2f8b60:
    // 0x2f8b60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2f8b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2f8b64:
    // 0x2f8b64: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2f8b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_2f8b68:
    // 0x2f8b68: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2f8b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2f8b6c:
    // 0x2f8b6c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2f8b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2f8b70:
    // 0x2f8b70: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2f8b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2f8b74:
    // 0x2f8b74: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2f8b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2f8b78:
    // 0x2f8b78: 0x10800069  beqz        $a0, . + 4 + (0x69 << 2)
label_2f8b7c:
    if (ctx->pc == 0x2F8B7Cu) {
        ctx->pc = 0x2F8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B78u;
        // 0x2f8b7c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8B80u;
        goto label_2f8b80;
    }
    ctx->pc = 0x2F8B78u;
    {
        const bool branch_taken_0x2f8b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B78u;
        // 0x2f8b7c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b78) {
            ctx->pc = 0x2F8D20u;
            goto label_2f8d20;
        }
    }
    ctx->pc = 0x2F8B80u;
label_2f8b80:
    // 0x2f8b80: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x2f8b80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2f8b84:
    // 0x2f8b84: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2f8b84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8b88:
    // 0x2f8b88: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2f8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f8b8c:
    // 0x2f8b8c: 0x0  nop
    ctx->pc = 0x2f8b8cu;
    // NOP
label_2f8b90:
    // 0x2f8b90: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2f8b90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8b94:
    // 0x2f8b94: 0x8e331100  lw          $s3, 0x1100($s1)
    ctx->pc = 0x2f8b94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4352)));
label_2f8b98:
    // 0x2f8b98: 0x12600054  beqz        $s3, . + 4 + (0x54 << 2)
label_2f8b9c:
    if (ctx->pc == 0x2F8B9Cu) {
        ctx->pc = 0x2F8BA0u;
        goto label_2f8ba0;
    }
    ctx->pc = 0x2F8B98u;
    {
        const bool branch_taken_0x2f8b98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b98) {
            ctx->pc = 0x2F8CECu;
            goto label_2f8cec;
        }
    }
    ctx->pc = 0x2F8BA0u;
label_2f8ba0:
    // 0x2f8ba0: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x2f8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2f8ba4:
    // 0x2f8ba4: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2f8ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_2f8ba8:
    // 0x2f8ba8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2f8bac:
    if (ctx->pc == 0x2F8BACu) {
        ctx->pc = 0x2F8BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BA8u;
        // 0x2f8bac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8BB0u;
        goto label_2f8bb0;
    }
    ctx->pc = 0x2F8BA8u;
    {
        const bool branch_taken_0x2f8ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BA8u;
        // 0x2f8bac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ba8) {
            ctx->pc = 0x2F8BBCu;
            goto label_2f8bbc;
        }
    }
    ctx->pc = 0x2F8BB0u;
label_2f8bb0:
    // 0x2f8bb0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f8bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2f8bb4:
    // 0x2f8bb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f8bb8:
    if (ctx->pc == 0x2F8BB8u) {
        ctx->pc = 0x2F8BBCu;
        goto label_2f8bbc;
    }
    ctx->pc = 0x2F8BB4u;
    {
        const bool branch_taken_0x2f8bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8bb4) {
            ctx->pc = 0x2F8BC0u;
            goto label_2f8bc0;
        }
    }
    ctx->pc = 0x2F8BBCu;
label_2f8bbc:
    // 0x2f8bbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f8bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8bc0:
    // 0x2f8bc0: 0x1080004a  beqz        $a0, . + 4 + (0x4A << 2)
label_2f8bc4:
    if (ctx->pc == 0x2F8BC4u) {
        ctx->pc = 0x2F8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BC0u;
        // 0x2f8bc4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8BC8u;
        goto label_2f8bc8;
    }
    ctx->pc = 0x2F8BC0u;
    {
        const bool branch_taken_0x2f8bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BC0u;
        // 0x2f8bc4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8bc0) {
            ctx->pc = 0x2F8CECu;
            goto label_2f8cec;
        }
    }
    ctx->pc = 0x2F8BC8u;
label_2f8bc8:
    // 0x2f8bc8: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2f8bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2f8bcc:
    // 0x2f8bcc: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x2f8bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f8bd0:
    // 0x2f8bd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f8bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8bd4:
    // 0x2f8bd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f8bd8:
    // 0x2f8bd8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2f8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2f8bdc:
    // 0x2f8bdc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2f8be0:
    // 0x2f8be0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f8be0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2f8be4:
    // 0x2f8be4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f8be4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8be8:
    // 0x2f8be8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f8be8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2f8bec:
    // 0x2f8bec: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2f8becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f8bf0:
    // 0x2f8bf0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2f8bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8bf4:
    // 0x2f8bf4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2f8bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f8bf8:
    // 0x2f8bf8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2f8bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f8bfc:
    // 0x2f8bfc: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x2f8bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2f8c00:
    // 0x2f8c00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2f8c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2f8c04:
    // 0x2f8c04: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2f8c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2f8c08:
    // 0x2f8c08: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2f8c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2f8c0c:
    // 0x2f8c0c: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x2f8c0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2f8c10:
    // 0x2f8c10: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x2f8c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f8c14:
    // 0x2f8c14: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x2f8c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f8c18:
    // 0x2f8c18: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x2f8c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f8c1c:
    // 0x2f8c1c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2f8c1cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2f8c20:
    // 0x2f8c20: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2f8c20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2f8c24:
    // 0x2f8c24: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x2f8c24u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2f8c28:
    // 0x2f8c28: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x2f8c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
label_2f8c2c:
    // 0x2f8c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f8c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f8c30:
    // 0x2f8c30: 0x0  nop
    ctx->pc = 0x2f8c30u;
    // NOP
label_2f8c34:
    // 0x2f8c34: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f8c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f8c38:
    // 0x2f8c38: 0x0  nop
    ctx->pc = 0x2f8c38u;
    // NOP
label_2f8c3c:
    // 0x2f8c3c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2f8c40:
    if (ctx->pc == 0x2F8C40u) {
        ctx->pc = 0x2F8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C3Cu;
        // 0x2f8c40: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C44u;
        goto label_2f8c44;
    }
    ctx->pc = 0x2F8C3Cu;
    {
        const bool branch_taken_0x2f8c3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C3Cu;
        // 0x2f8c40: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c3c) {
            ctx->pc = 0x2F8C48u;
            goto label_2f8c48;
        }
    }
    ctx->pc = 0x2F8C44u;
label_2f8c44:
    // 0x2f8c44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f8c44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8c48:
    // 0x2f8c48: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x2f8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_2f8c4c:
    // 0x2f8c4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f8c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8c50:
    // 0x2f8c50: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2f8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2f8c54:
    // 0x2f8c54: 0x40f809  jalr        $v0
label_2f8c58:
    if (ctx->pc == 0x2F8C58u) {
        ctx->pc = 0x2F8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C54u;
        // 0x2f8c58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C5Cu;
        goto label_2f8c5c;
    }
    ctx->pc = 0x2F8C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F8C5Cu);
        ctx->pc = 0x2F8C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C54u;
        // 0x2f8c58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8C54u, 0x2F8C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F8C5Cu;
label_2f8c5c:
    // 0x2f8c5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2f8c60:
    if (ctx->pc == 0x2F8C60u) {
        ctx->pc = 0x2F8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C5Cu;
        // 0x2f8c60: 0x26640230  addiu       $a0, $s3, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C64u;
        goto label_2f8c64;
    }
    ctx->pc = 0x2F8C5Cu;
    {
        const bool branch_taken_0x2f8c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C5Cu;
        // 0x2f8c60: 0x26640230  addiu       $a0, $s3, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c5c) {
            ctx->pc = 0x2F8C78u;
            goto label_2f8c78;
        }
    }
    ctx->pc = 0x2F8C64u;
label_2f8c64:
    // 0x2f8c64: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x2f8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2f8c68:
    // 0x2f8c68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2f8c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f8c6c:
    // 0x2f8c6c: 0xc0b4bc6  jal         func_2D2F18
label_2f8c70:
    if (ctx->pc == 0x2F8C70u) {
        ctx->pc = 0x2F8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C6Cu;
        // 0x2f8c70: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C74u;
        goto label_2f8c74;
    }
    ctx->pc = 0x2F8C6Cu;
    SET_GPR_U32(ctx, 31, 0x2F8C74u);
    ctx->pc = 0x2F8C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8C6Cu;
    // 0x2f8c70: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2F18u, 0x2F8C6Cu, 0x2F8C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8C74u;
label_2f8c74:
    // 0x2f8c74: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2f8c74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f8c78:
    // 0x2f8c78: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_2f8c7c:
    if (ctx->pc == 0x2F8C7Cu) {
        ctx->pc = 0x2F8C80u;
        goto label_2f8c80;
    }
    ctx->pc = 0x2F8C78u;
    {
        const bool branch_taken_0x2f8c78 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8c78) {
            ctx->pc = 0x2F8C88u;
            goto label_2f8c88;
        }
    }
    ctx->pc = 0x2F8C80u;
label_2f8c80:
    // 0x2f8c80: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2f8c84:
    if (ctx->pc == 0x2F8C84u) {
        ctx->pc = 0x2F8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C80u;
        // 0x2f8c84: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C88u;
        goto label_2f8c88;
    }
    ctx->pc = 0x2F8C80u;
    {
        const bool branch_taken_0x2f8c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C80u;
        // 0x2f8c84: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c80) {
            ctx->pc = 0x2F8CECu;
            goto label_2f8cec;
        }
    }
    ctx->pc = 0x2F8C88u;
label_2f8c88:
    // 0x2f8c88: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2f8c8c:
    if (ctx->pc == 0x2F8C8Cu) {
        ctx->pc = 0x2F8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C88u;
        // 0x2f8c8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C90u;
        goto label_2f8c90;
    }
    ctx->pc = 0x2F8C88u;
    {
        const bool branch_taken_0x2f8c88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C88u;
        // 0x2f8c8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c88) {
            ctx->pc = 0x2F8CA4u;
            goto label_2f8ca4;
        }
    }
    ctx->pc = 0x2F8C90u;
label_2f8c90:
    // 0x2f8c90: 0x8e42121c  lw          $v0, 0x121C($s2)
    ctx->pc = 0x2f8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
label_2f8c94:
    // 0x2f8c94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f8c98:
    if (ctx->pc == 0x2F8C98u) {
        ctx->pc = 0x2F8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C94u;
        // 0x2f8c98: 0x511026  xor         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8C9Cu;
        goto label_2f8c9c;
    }
    ctx->pc = 0x2F8C94u;
    {
        const bool branch_taken_0x2f8c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C94u;
        // 0x2f8c98: 0x511026  xor         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c94) {
            ctx->pc = 0x2F8CA4u;
            goto label_2f8ca4;
        }
    }
    ctx->pc = 0x2F8C9Cu;
label_2f8c9c:
    // 0x2f8c9c: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x2f8c9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f8ca0:
    // 0x2f8ca0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2f8ca0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2f8ca4:
    // 0x2f8ca4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2f8ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f8ca8:
    // 0x2f8ca8: 0x0  nop
    ctx->pc = 0x2f8ca8u;
    // NOP
label_2f8cac:
    // 0x2f8cac: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2f8cb0:
    if (ctx->pc == 0x2F8CB0u) {
        ctx->pc = 0x2F8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CACu;
        // 0x2f8cb0: 0x2363026  xor         $a2, $s1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8CB4u;
        goto label_2f8cb4;
    }
    ctx->pc = 0x2F8CACu;
    {
        const bool branch_taken_0x2f8cac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CACu;
        // 0x2f8cb0: 0x2363026  xor         $a2, $s1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8cac) {
            ctx->pc = 0x2F8CBCu;
            goto label_2f8cbc;
        }
    }
    ctx->pc = 0x2F8CB4u;
label_2f8cb4:
    // 0x2f8cb4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_2f8cb8:
    if (ctx->pc == 0x2F8CB8u) {
        ctx->pc = 0x2F8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CB4u;
        // 0x2f8cb8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8CBCu;
        goto label_2f8cbc;
    }
    ctx->pc = 0x2F8CB4u;
    {
        const bool branch_taken_0x2f8cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CB4u;
        // 0x2f8cb8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8cb4) {
            ctx->pc = 0x2F8CECu;
            goto label_2f8cec;
        }
    }
    ctx->pc = 0x2F8CBCu;
label_2f8cbc:
    // 0x2f8cbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f8cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f8cc0:
    // 0x2f8cc0: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x2f8cc0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f8cc4:
    // 0x2f8cc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f8cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f8cc8:
    // 0x2f8cc8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2f8cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2f8ccc:
    // 0x2f8ccc: 0xc0bdd46  jal         func_2F7518
label_2f8cd0:
    if (ctx->pc == 0x2F8CD0u) {
        ctx->pc = 0x2F8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CCCu;
        // 0x2f8cd0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8CD4u;
        goto label_2f8cd4;
    }
    ctx->pc = 0x2F8CCCu;
    SET_GPR_U32(ctx, 31, 0x2F8CD4u);
    ctx->pc = 0x2F8CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8CCCu;
    // 0x2f8cd0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7518u, 0x2F8CCCu, 0x2F8CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8CD4u;
label_2f8cd4:
    // 0x2f8cd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f8cd8:
    if (ctx->pc == 0x2F8CD8u) {
        ctx->pc = 0x2F8CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CD4u;
        // 0x2f8cd8: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8CDCu;
        goto label_2f8cdc;
    }
    ctx->pc = 0x2F8CD4u;
    {
        const bool branch_taken_0x2f8cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CD4u;
        // 0x2f8cd8: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8cd4) {
            ctx->pc = 0x2F8CE8u;
            goto label_2f8ce8;
        }
    }
    ctx->pc = 0x2F8CDCu;
label_2f8cdc:
    // 0x2f8cdc: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2f8cdcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_2f8ce0:
    // 0x2f8ce0: 0xae5111e8  sw          $s1, 0x11E8($s2)
    ctx->pc = 0x2f8ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4584), GPR_U32(ctx, 17));
label_2f8ce4:
    // 0x2f8ce4: 0xae4211fc  sw          $v0, 0x11FC($s2)
    ctx->pc = 0x2f8ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4604), GPR_U32(ctx, 2));
label_2f8ce8:
    // 0x2f8ce8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2f8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f8cec:
    // 0x2f8cec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2f8cf0:
    if (ctx->pc == 0x2F8CF0u) {
        ctx->pc = 0x2F8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CECu;
        // 0x2f8cf0: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8CF4u;
        goto label_2f8cf4;
    }
    ctx->pc = 0x2F8CECu;
    {
        const bool branch_taken_0x2f8cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8cec) {
            ctx->pc = 0x2F8CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8CECu;
            // 0x2f8cf0: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8D00u;
            goto label_2f8d00;
        }
    }
    ctx->pc = 0x2F8CF4u;
label_2f8cf4:
    // 0x2f8cf4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2f8cf8:
    // 0x2f8cf8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f8cfc:
    if (ctx->pc == 0x2F8CFCu) {
        ctx->pc = 0x2F8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CF8u;
        // 0x2f8cfc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8D00u;
        goto label_2f8d00;
    }
    ctx->pc = 0x2F8CF8u;
    {
        const bool branch_taken_0x2f8cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8CF8u;
        // 0x2f8cfc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8cf8) {
            ctx->pc = 0x2F8D10u;
            goto label_2f8d10;
        }
    }
    ctx->pc = 0x2F8D00u;
label_2f8d00:
    // 0x2f8d00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f8d04:
    if (ctx->pc == 0x2F8D04u) {
        ctx->pc = 0x2F8D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D00u;
        // 0x2f8d04: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8D08u;
        goto label_2f8d08;
    }
    ctx->pc = 0x2F8D00u;
    {
        const bool branch_taken_0x2f8d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D00u;
        // 0x2f8d04: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d00) {
            ctx->pc = 0x2F8D14u;
            goto label_2f8d14;
        }
    }
    ctx->pc = 0x2F8D08u;
label_2f8d08:
    // 0x2f8d08: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2f8d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2f8d0c:
    // 0x2f8d0c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2f8d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2f8d10:
    // 0x2f8d10: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2f8d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f8d14:
    // 0x2f8d14: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2f8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f8d18:
    // 0x2f8d18: 0x1462ff9d  bne         $v1, $v0, . + 4 + (-0x63 << 2)
label_2f8d1c:
    if (ctx->pc == 0x2F8D1Cu) {
        ctx->pc = 0x2F8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D18u;
        // 0x2f8d1c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8D20u;
        goto label_2f8d20;
    }
    ctx->pc = 0x2F8D18u;
    {
        const bool branch_taken_0x2f8d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D18u;
        // 0x2f8d1c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d18) {
            ctx->pc = 0x2F8B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8b90;
        }
    }
    ctx->pc = 0x2F8D20u;
label_2f8d20:
    // 0x2f8d20: 0x8e4211e8  lw          $v0, 0x11E8($s2)
    ctx->pc = 0x2f8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2f8d24:
    // 0x2f8d24: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2f8d28:
    if (ctx->pc == 0x2F8D28u) {
        ctx->pc = 0x2F8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D24u;
        // 0x2f8d28: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8D2Cu;
        goto label_2f8d2c;
    }
    ctx->pc = 0x2F8D24u;
    {
        const bool branch_taken_0x2f8d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D24u;
        // 0x2f8d28: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d24) {
            ctx->pc = 0x2F8D78u;
            goto label_2f8d78;
        }
    }
    ctx->pc = 0x2F8D2Cu;
label_2f8d2c:
    // 0x2f8d2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f8d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8d30:
    // 0x2f8d30: 0xae4304f4  sw          $v1, 0x4F4($s2)
    ctx->pc = 0x2f8d30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1268), GPR_U32(ctx, 3));
label_2f8d34:
    // 0x2f8d34: 0x8c421100  lw          $v0, 0x1100($v0)
    ctx->pc = 0x2f8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4352)));
label_2f8d38:
    // 0x2f8d38: 0x8c440224  lw          $a0, 0x224($v0)
    ctx->pc = 0x2f8d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
label_2f8d3c:
    // 0x2f8d3c: 0xc069664  jal         func_1A5990
label_2f8d40:
    if (ctx->pc == 0x2F8D40u) {
        ctx->pc = 0x2F8D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D3Cu;
        // 0x2f8d40: 0x2484002e  addiu       $a0, $a0, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8D44u;
        goto label_2f8d44;
    }
    ctx->pc = 0x2F8D3Cu;
    SET_GPR_U32(ctx, 31, 0x2F8D44u);
    ctx->pc = 0x2F8D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8D3Cu;
    // 0x2f8d40: 0x2484002e  addiu       $a0, $a0, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5990u, 0x2F8D3Cu, 0x2F8D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8D44u;
label_2f8d44:
    // 0x2f8d44: 0xc069e04  jal         func_1A7810
label_2f8d48:
    if (ctx->pc == 0x2F8D48u) {
        ctx->pc = 0x2F8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D44u;
        // 0x2f8d48: 0x24440292  addiu       $a0, $v0, 0x292 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 658));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8D4Cu;
        goto label_2f8d4c;
    }
    ctx->pc = 0x2F8D44u;
    SET_GPR_U32(ctx, 31, 0x2F8D4Cu);
    ctx->pc = 0x2F8D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8D44u;
    // 0x2f8d48: 0x24440292  addiu       $a0, $v0, 0x292 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 658));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7810u, 0x2F8D44u, 0x2F8D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8D4Cu;
label_2f8d4c:
    // 0x2f8d4c: 0x24450021  addiu       $a1, $v0, 0x21
    ctx->pc = 0x2f8d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
label_2f8d50:
    // 0x2f8d50: 0x27c49b28  addiu       $a0, $fp, -0x64D8
    ctx->pc = 0x2f8d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941480));
label_2f8d54:
    // 0x2f8d54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8d58:
    // 0x2f8d58: 0xc08006c  jal         func_2001B0
label_2f8d5c:
    if (ctx->pc == 0x2F8D5Cu) {
        ctx->pc = 0x2F8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D58u;
        // 0x2f8d5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8D60u;
        goto label_2f8d60;
    }
    ctx->pc = 0x2F8D58u;
    SET_GPR_U32(ctx, 31, 0x2F8D60u);
    ctx->pc = 0x2F8D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8D58u;
    // 0x2f8d5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2001B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2001B0u, 0x2F8D58u, 0x2F8D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8D60u;
label_2f8d60:
    // 0x2f8d60: 0x8e4311c0  lw          $v1, 0x11C0($s2)
    ctx->pc = 0x2f8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4544)));
label_2f8d64:
    // 0x2f8d64: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2f8d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_2f8d68:
    // 0x2f8d68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f8d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f8d6c:
    // 0x2f8d6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f8d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2f8d70:
    // 0x2f8d70: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f8d74:
    if (ctx->pc == 0x2F8D74u) {
        ctx->pc = 0x2F8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D70u;
        // 0x2f8d74: 0xae4311c0  sw          $v1, 0x11C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8D78u;
        goto label_2f8d78;
    }
    ctx->pc = 0x2F8D70u;
    {
        const bool branch_taken_0x2f8d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D70u;
        // 0x2f8d74: 0xae4311c0  sw          $v1, 0x11C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8d70) {
            ctx->pc = 0x2F8D8Cu;
            goto label_2f8d8c;
        }
    }
    ctx->pc = 0x2F8D78u;
label_2f8d78:
    // 0x2f8d78: 0xc080620  jal         func_201880
label_2f8d7c:
    if (ctx->pc == 0x2F8D7Cu) {
        ctx->pc = 0x2F8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D78u;
        // 0x2f8d7c: 0x27c49b28  addiu       $a0, $fp, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8D80u;
        goto label_2f8d80;
    }
    ctx->pc = 0x2F8D78u;
    SET_GPR_U32(ctx, 31, 0x2F8D80u);
    ctx->pc = 0x2F8D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8D78u;
    // 0x2f8d7c: 0x27c49b28  addiu       $a0, $fp, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201880u, 0x2F8D78u, 0x2F8D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8D80u;
label_2f8d80:
    // 0x2f8d80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f8d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f8d84:
    // 0x2f8d84: 0xc0be4c4  jal         func_2F9310
label_2f8d88:
    if (ctx->pc == 0x2F8D88u) {
        ctx->pc = 0x2F8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8D84u;
        // 0x2f8d88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8D8Cu;
        goto label_2f8d8c;
    }
    ctx->pc = 0x2F8D84u;
    SET_GPR_U32(ctx, 31, 0x2F8D8Cu);
    ctx->pc = 0x2F8D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8D84u;
    // 0x2f8d88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9310u, 0x2F8D84u, 0x2F8D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8D8Cu;
label_2f8d8c:
    // 0x2f8d8c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2f8d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f8d90:
    // 0x2f8d90: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2f8d90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2f8d94:
    // 0x2f8d94: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2f8d94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f8d98:
    // 0x2f8d98: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2f8d98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2f8d9c:
    // 0x2f8d9c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2f8d9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f8da0:
    // 0x2f8da0: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2f8da0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2f8da4:
    // 0x2f8da4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2f8da4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2f8da8:
    // 0x2f8da8: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x2f8da8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2f8dac:
    // 0x2f8dac: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2f8dacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f8db0:
    // 0x2f8db0: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2f8db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2f8db4:
    // 0x2f8db4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2f8db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2f8db8:
    // 0x2f8db8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2f8db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f8dbc:
    // 0x2f8dbc: 0x3e00008  jr          $ra
label_2f8dc0:
    if (ctx->pc == 0x2F8DC0u) {
        ctx->pc = 0x2F8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8DBCu;
        // 0x2f8dc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F8DC4u;
        goto label_2f8dc4;
    }
    ctx->pc = 0x2F8DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8DBCu;
        // 0x2f8dc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8DC4u;
label_2f8dc4:
    // 0x2f8dc4: 0x0  nop
    ctx->pc = 0x2f8dc4u;
    // NOP
    ctx->pc = 0x2f8dc8u;
}
