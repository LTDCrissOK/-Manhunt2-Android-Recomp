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

// Function: sub_00362AE8
// Address: 0x362ae8 - 0x362e80
void sub_00362AE8_0x362ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362AE8_0x362ae8");
#endif

    switch (ctx->pc) {
        case 0x362ae8u: goto label_362ae8;
        case 0x362aecu: goto label_362aec;
        case 0x362af0u: goto label_362af0;
        case 0x362af4u: goto label_362af4;
        case 0x362af8u: goto label_362af8;
        case 0x362afcu: goto label_362afc;
        case 0x362b00u: goto label_362b00;
        case 0x362b04u: goto label_362b04;
        case 0x362b08u: goto label_362b08;
        case 0x362b0cu: goto label_362b0c;
        case 0x362b10u: goto label_362b10;
        case 0x362b14u: goto label_362b14;
        case 0x362b18u: goto label_362b18;
        case 0x362b1cu: goto label_362b1c;
        case 0x362b20u: goto label_362b20;
        case 0x362b24u: goto label_362b24;
        case 0x362b28u: goto label_362b28;
        case 0x362b2cu: goto label_362b2c;
        case 0x362b30u: goto label_362b30;
        case 0x362b34u: goto label_362b34;
        case 0x362b38u: goto label_362b38;
        case 0x362b3cu: goto label_362b3c;
        case 0x362b40u: goto label_362b40;
        case 0x362b44u: goto label_362b44;
        case 0x362b48u: goto label_362b48;
        case 0x362b4cu: goto label_362b4c;
        case 0x362b50u: goto label_362b50;
        case 0x362b54u: goto label_362b54;
        case 0x362b58u: goto label_362b58;
        case 0x362b5cu: goto label_362b5c;
        case 0x362b60u: goto label_362b60;
        case 0x362b64u: goto label_362b64;
        case 0x362b68u: goto label_362b68;
        case 0x362b6cu: goto label_362b6c;
        case 0x362b70u: goto label_362b70;
        case 0x362b74u: goto label_362b74;
        case 0x362b78u: goto label_362b78;
        case 0x362b7cu: goto label_362b7c;
        case 0x362b80u: goto label_362b80;
        case 0x362b84u: goto label_362b84;
        case 0x362b88u: goto label_362b88;
        case 0x362b8cu: goto label_362b8c;
        case 0x362b90u: goto label_362b90;
        case 0x362b94u: goto label_362b94;
        case 0x362b98u: goto label_362b98;
        case 0x362b9cu: goto label_362b9c;
        case 0x362ba0u: goto label_362ba0;
        case 0x362ba4u: goto label_362ba4;
        case 0x362ba8u: goto label_362ba8;
        case 0x362bacu: goto label_362bac;
        case 0x362bb0u: goto label_362bb0;
        case 0x362bb4u: goto label_362bb4;
        case 0x362bb8u: goto label_362bb8;
        case 0x362bbcu: goto label_362bbc;
        case 0x362bc0u: goto label_362bc0;
        case 0x362bc4u: goto label_362bc4;
        case 0x362bc8u: goto label_362bc8;
        case 0x362bccu: goto label_362bcc;
        case 0x362bd0u: goto label_362bd0;
        case 0x362bd4u: goto label_362bd4;
        case 0x362bd8u: goto label_362bd8;
        case 0x362bdcu: goto label_362bdc;
        case 0x362be0u: goto label_362be0;
        case 0x362be4u: goto label_362be4;
        case 0x362be8u: goto label_362be8;
        case 0x362becu: goto label_362bec;
        case 0x362bf0u: goto label_362bf0;
        case 0x362bf4u: goto label_362bf4;
        case 0x362bf8u: goto label_362bf8;
        case 0x362bfcu: goto label_362bfc;
        case 0x362c00u: goto label_362c00;
        case 0x362c04u: goto label_362c04;
        case 0x362c08u: goto label_362c08;
        case 0x362c0cu: goto label_362c0c;
        case 0x362c10u: goto label_362c10;
        case 0x362c14u: goto label_362c14;
        case 0x362c18u: goto label_362c18;
        case 0x362c1cu: goto label_362c1c;
        case 0x362c20u: goto label_362c20;
        case 0x362c24u: goto label_362c24;
        case 0x362c28u: goto label_362c28;
        case 0x362c2cu: goto label_362c2c;
        case 0x362c30u: goto label_362c30;
        case 0x362c34u: goto label_362c34;
        case 0x362c38u: goto label_362c38;
        case 0x362c3cu: goto label_362c3c;
        case 0x362c40u: goto label_362c40;
        case 0x362c44u: goto label_362c44;
        case 0x362c48u: goto label_362c48;
        case 0x362c4cu: goto label_362c4c;
        case 0x362c50u: goto label_362c50;
        case 0x362c54u: goto label_362c54;
        case 0x362c58u: goto label_362c58;
        case 0x362c5cu: goto label_362c5c;
        case 0x362c60u: goto label_362c60;
        case 0x362c64u: goto label_362c64;
        case 0x362c68u: goto label_362c68;
        case 0x362c6cu: goto label_362c6c;
        case 0x362c70u: goto label_362c70;
        case 0x362c74u: goto label_362c74;
        case 0x362c78u: goto label_362c78;
        case 0x362c7cu: goto label_362c7c;
        case 0x362c80u: goto label_362c80;
        case 0x362c84u: goto label_362c84;
        case 0x362c88u: goto label_362c88;
        case 0x362c8cu: goto label_362c8c;
        case 0x362c90u: goto label_362c90;
        case 0x362c94u: goto label_362c94;
        case 0x362c98u: goto label_362c98;
        case 0x362c9cu: goto label_362c9c;
        case 0x362ca0u: goto label_362ca0;
        case 0x362ca4u: goto label_362ca4;
        case 0x362ca8u: goto label_362ca8;
        case 0x362cacu: goto label_362cac;
        case 0x362cb0u: goto label_362cb0;
        case 0x362cb4u: goto label_362cb4;
        case 0x362cb8u: goto label_362cb8;
        case 0x362cbcu: goto label_362cbc;
        case 0x362cc0u: goto label_362cc0;
        case 0x362cc4u: goto label_362cc4;
        case 0x362cc8u: goto label_362cc8;
        case 0x362cccu: goto label_362ccc;
        case 0x362cd0u: goto label_362cd0;
        case 0x362cd4u: goto label_362cd4;
        case 0x362cd8u: goto label_362cd8;
        case 0x362cdcu: goto label_362cdc;
        case 0x362ce0u: goto label_362ce0;
        case 0x362ce4u: goto label_362ce4;
        case 0x362ce8u: goto label_362ce8;
        case 0x362cecu: goto label_362cec;
        case 0x362cf0u: goto label_362cf0;
        case 0x362cf4u: goto label_362cf4;
        case 0x362cf8u: goto label_362cf8;
        case 0x362cfcu: goto label_362cfc;
        case 0x362d00u: goto label_362d00;
        case 0x362d04u: goto label_362d04;
        case 0x362d08u: goto label_362d08;
        case 0x362d0cu: goto label_362d0c;
        case 0x362d10u: goto label_362d10;
        case 0x362d14u: goto label_362d14;
        case 0x362d18u: goto label_362d18;
        case 0x362d1cu: goto label_362d1c;
        case 0x362d20u: goto label_362d20;
        case 0x362d24u: goto label_362d24;
        case 0x362d28u: goto label_362d28;
        case 0x362d2cu: goto label_362d2c;
        case 0x362d30u: goto label_362d30;
        case 0x362d34u: goto label_362d34;
        case 0x362d38u: goto label_362d38;
        case 0x362d3cu: goto label_362d3c;
        case 0x362d40u: goto label_362d40;
        case 0x362d44u: goto label_362d44;
        case 0x362d48u: goto label_362d48;
        case 0x362d4cu: goto label_362d4c;
        case 0x362d50u: goto label_362d50;
        case 0x362d54u: goto label_362d54;
        case 0x362d58u: goto label_362d58;
        case 0x362d5cu: goto label_362d5c;
        case 0x362d60u: goto label_362d60;
        case 0x362d64u: goto label_362d64;
        case 0x362d68u: goto label_362d68;
        case 0x362d6cu: goto label_362d6c;
        case 0x362d70u: goto label_362d70;
        case 0x362d74u: goto label_362d74;
        case 0x362d78u: goto label_362d78;
        case 0x362d7cu: goto label_362d7c;
        case 0x362d80u: goto label_362d80;
        case 0x362d84u: goto label_362d84;
        case 0x362d88u: goto label_362d88;
        case 0x362d8cu: goto label_362d8c;
        case 0x362d90u: goto label_362d90;
        case 0x362d94u: goto label_362d94;
        case 0x362d98u: goto label_362d98;
        case 0x362d9cu: goto label_362d9c;
        case 0x362da0u: goto label_362da0;
        case 0x362da4u: goto label_362da4;
        case 0x362da8u: goto label_362da8;
        case 0x362dacu: goto label_362dac;
        case 0x362db0u: goto label_362db0;
        case 0x362db4u: goto label_362db4;
        case 0x362db8u: goto label_362db8;
        case 0x362dbcu: goto label_362dbc;
        case 0x362dc0u: goto label_362dc0;
        case 0x362dc4u: goto label_362dc4;
        case 0x362dc8u: goto label_362dc8;
        case 0x362dccu: goto label_362dcc;
        case 0x362dd0u: goto label_362dd0;
        case 0x362dd4u: goto label_362dd4;
        case 0x362dd8u: goto label_362dd8;
        case 0x362ddcu: goto label_362ddc;
        case 0x362de0u: goto label_362de0;
        case 0x362de4u: goto label_362de4;
        case 0x362de8u: goto label_362de8;
        case 0x362decu: goto label_362dec;
        case 0x362df0u: goto label_362df0;
        case 0x362df4u: goto label_362df4;
        case 0x362df8u: goto label_362df8;
        case 0x362dfcu: goto label_362dfc;
        case 0x362e00u: goto label_362e00;
        case 0x362e04u: goto label_362e04;
        case 0x362e08u: goto label_362e08;
        case 0x362e0cu: goto label_362e0c;
        case 0x362e10u: goto label_362e10;
        case 0x362e14u: goto label_362e14;
        case 0x362e18u: goto label_362e18;
        case 0x362e1cu: goto label_362e1c;
        case 0x362e20u: goto label_362e20;
        case 0x362e24u: goto label_362e24;
        case 0x362e28u: goto label_362e28;
        case 0x362e2cu: goto label_362e2c;
        case 0x362e30u: goto label_362e30;
        case 0x362e34u: goto label_362e34;
        case 0x362e38u: goto label_362e38;
        case 0x362e3cu: goto label_362e3c;
        case 0x362e40u: goto label_362e40;
        case 0x362e44u: goto label_362e44;
        case 0x362e48u: goto label_362e48;
        case 0x362e4cu: goto label_362e4c;
        case 0x362e50u: goto label_362e50;
        case 0x362e54u: goto label_362e54;
        case 0x362e58u: goto label_362e58;
        case 0x362e5cu: goto label_362e5c;
        case 0x362e60u: goto label_362e60;
        case 0x362e64u: goto label_362e64;
        case 0x362e68u: goto label_362e68;
        case 0x362e6cu: goto label_362e6c;
        case 0x362e70u: goto label_362e70;
        case 0x362e74u: goto label_362e74;
        case 0x362e78u: goto label_362e78;
        case 0x362e7cu: goto label_362e7c;
        default: break;
    }

    ctx->pc = 0x362ae8u;

label_362ae8:
    // 0x362ae8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x362ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_362aec:
    // 0x362aec: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x362aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_362af0:
    // 0x362af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x362af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_362af4:
    // 0x362af4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x362af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_362af8:
    // 0x362af8: 0xc0f6a96  jal         func_3DAA58
label_362afc:
    if (ctx->pc == 0x362AFCu) {
        ctx->pc = 0x362AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362AF8u;
        // 0x362afc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362B00u;
        goto label_362b00;
    }
    ctx->pc = 0x362AF8u;
    SET_GPR_U32(ctx, 31, 0x362B00u);
    ctx->pc = 0x362AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362AF8u;
    // 0x362afc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x362AF8u, 0x362B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362B00u;
label_362b00:
    // 0x362b00: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x362b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_362b04:
    // 0x362b04: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_362b08:
    if (ctx->pc == 0x362B08u) {
        ctx->pc = 0x362B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B04u;
        // 0x362b08: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362B0Cu;
        goto label_362b0c;
    }
    ctx->pc = 0x362B04u;
    {
        const bool branch_taken_0x362b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x362b04) {
            ctx->pc = 0x362B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362B04u;
            // 0x362b08: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362B20u;
            goto label_362b20;
        }
    }
    ctx->pc = 0x362B0Cu;
label_362b0c:
    // 0x362b0c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x362b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_362b10:
    // 0x362b10: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x362b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_362b14:
    // 0x362b14: 0x40f809  jalr        $v0
label_362b18:
    if (ctx->pc == 0x362B18u) {
        ctx->pc = 0x362B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B14u;
        // 0x362b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362B1Cu;
        goto label_362b1c;
    }
    ctx->pc = 0x362B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362B1Cu);
        ctx->pc = 0x362B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B14u;
        // 0x362b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362B14u, 0x362B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362B1Cu;
label_362b1c:
    // 0x362b1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x362b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_362b20:
    // 0x362b20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x362b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_362b24:
    // 0x362b24: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_362b28:
    if (ctx->pc == 0x362B28u) {
        ctx->pc = 0x362B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B24u;
        // 0x362b28: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362B2Cu;
        goto label_362b2c;
    }
    ctx->pc = 0x362B24u;
    {
        const bool branch_taken_0x362b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x362B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B24u;
        // 0x362b28: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362b24) {
            ctx->pc = 0x362B4Cu;
            goto label_362b4c;
        }
    }
    ctx->pc = 0x362B2Cu;
label_362b2c:
    // 0x362b2c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x362b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_362b30:
    // 0x362b30: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x362b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_362b34:
    // 0x362b34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_362b38:
    if (ctx->pc == 0x362B38u) {
        ctx->pc = 0x362B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B34u;
        // 0x362b38: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362B3Cu;
        goto label_362b3c;
    }
    ctx->pc = 0x362B34u;
    {
        const bool branch_taken_0x362b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B34u;
        // 0x362b38: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362b34) {
            ctx->pc = 0x362B4Cu;
            goto label_362b4c;
        }
    }
    ctx->pc = 0x362B3Cu;
label_362b3c:
    // 0x362b3c: 0xc0bf10e  jal         func_2FC438
label_362b40:
    if (ctx->pc == 0x362B40u) {
        ctx->pc = 0x362B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B3Cu;
        // 0x362b40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362B44u;
        goto label_362b44;
    }
    ctx->pc = 0x362B3Cu;
    SET_GPR_U32(ctx, 31, 0x362B44u);
    ctx->pc = 0x362B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362B3Cu;
    // 0x362b40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC438u, 0x362B3Cu, 0x362B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362B44u;
label_362b44:
    // 0x362b44: 0x10000026  b           . + 4 + (0x26 << 2)
label_362b48:
    if (ctx->pc == 0x362B48u) {
        ctx->pc = 0x362B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B44u;
        // 0x362b48: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362B4Cu;
        goto label_362b4c;
    }
    ctx->pc = 0x362B44u;
    {
        const bool branch_taken_0x362b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B44u;
        // 0x362b48: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362b44) {
            ctx->pc = 0x362BE0u;
            goto label_362be0;
        }
    }
    ctx->pc = 0x362B4Cu;
label_362b4c:
    // 0x362b4c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x362b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_362b50:
    // 0x362b50: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x362b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_362b54:
    // 0x362b54: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x362b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_362b58:
    // 0x362b58: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x362b58u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_362b5c:
    // 0x362b5c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x362b5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_362b60:
    // 0x362b60: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x362b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_362b64:
    // 0x362b64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x362b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_362b68:
    // 0x362b68: 0x0  nop
    ctx->pc = 0x362b68u;
    // NOP
label_362b6c:
    // 0x362b6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x362b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_362b70:
    // 0x362b70: 0x0  nop
    ctx->pc = 0x362b70u;
    // NOP
label_362b74:
    // 0x362b74: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_362b78:
    if (ctx->pc == 0x362B78u) {
        ctx->pc = 0x362B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B74u;
        // 0x362b78: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362B7Cu;
        goto label_362b7c;
    }
    ctx->pc = 0x362B74u;
    {
        const bool branch_taken_0x362b74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x362b74) {
            ctx->pc = 0x362B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362B74u;
            // 0x362b78: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362B8Cu;
            goto label_362b8c;
        }
    }
    ctx->pc = 0x362B7Cu;
label_362b7c:
    // 0x362b7c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x362b7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_362b80:
    // 0x362b80: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x362b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_362b84:
    // 0x362b84: 0x10000016  b           . + 4 + (0x16 << 2)
label_362b88:
    if (ctx->pc == 0x362B88u) {
        ctx->pc = 0x362B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B84u;
        // 0x362b88: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362B8Cu;
        goto label_362b8c;
    }
    ctx->pc = 0x362B84u;
    {
        const bool branch_taken_0x362b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B84u;
        // 0x362b88: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362b84) {
            ctx->pc = 0x362BE0u;
            goto label_362be0;
        }
    }
    ctx->pc = 0x362B8Cu;
label_362b8c:
    // 0x362b8c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x362b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_362b90:
    // 0x362b90: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x362b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_362b94:
    // 0x362b94: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x362b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362b98:
    // 0x362b98: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x362b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_362b9c:
    // 0x362b9c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x362b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_362ba0:
    // 0x362ba0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x362ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362ba4:
    // 0x362ba4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x362ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_362ba8:
    // 0x362ba8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x362ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362bac:
    // 0x362bac: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x362bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_362bb0:
    // 0x362bb0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x362bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362bb4:
    // 0x362bb4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x362bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_362bb8:
    // 0x362bb8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x362bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_362bbc:
    // 0x362bbc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x362bbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_362bc0:
    // 0x362bc0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x362bc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_362bc4:
    // 0x362bc4: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x362bc4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_362bc8:
    // 0x362bc8: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x362bc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_362bcc:
    // 0x362bcc: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x362bccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_362bd0:
    // 0x362bd0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x362bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_362bd4:
    // 0x362bd4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x362bd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_362bd8:
    // 0x362bd8: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x362bd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_362bdc:
    // 0x362bdc: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x362bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_362be0:
    // 0x362be0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x362be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362be4:
    // 0x362be4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x362be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362be8:
    // 0x362be8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x362be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_362bec:
    // 0x362bec: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x362becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_362bf0:
    // 0x362bf0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x362bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_362bf4:
    // 0x362bf4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x362bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_362bf8:
    // 0x362bf8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x362bf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_362bfc:
    // 0x362bfc: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x362bfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_362c00:
    // 0x362c00: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x362c00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_362c04:
    // 0x362c04: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x362c04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_362c08:
    // 0x362c08: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x362c08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_362c0c:
    // 0x362c0c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x362c0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_362c10:
    // 0x362c10: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x362c10u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_362c14:
    // 0x362c14: 0x4a0003bf  vwaitq
    ctx->pc = 0x362c14u;
    // VWAITQ (Q already resolved in this runtime)
label_362c18:
    // 0x362c18: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x362c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_362c1c:
    // 0x362c1c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x362c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_362c20:
    // 0x362c20: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x362c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_362c24:
    // 0x362c24: 0xc0d8e26  jal         func_363898
label_362c28:
    if (ctx->pc == 0x362C28u) {
        ctx->pc = 0x362C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362C24u;
        // 0x362c28: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362C2Cu;
        goto label_362c2c;
    }
    ctx->pc = 0x362C24u;
    SET_GPR_U32(ctx, 31, 0x362C2Cu);
    ctx->pc = 0x362C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362C24u;
    // 0x362c28: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363898u, 0x362C24u, 0x362C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362C2Cu;
label_362c2c:
    // 0x362c2c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x362c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_362c30:
    // 0x362c30: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x362c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_362c34:
    // 0x362c34: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x362c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_362c38:
    // 0x362c38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x362c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362c3c:
    // 0x362c3c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x362c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_362c40:
    // 0x362c40: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x362c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_362c44:
    // 0x362c44: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x362c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_362c48:
    // 0x362c48: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x362c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_362c4c:
    // 0x362c4c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x362c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362c50:
    // 0x362c50: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x362c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_362c54:
    // 0x362c54: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x362c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362c58:
    // 0x362c58: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x362c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_362c5c:
    // 0x362c5c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x362c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362c60:
    // 0x362c60: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x362c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_362c64:
    // 0x362c64: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x362c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362c68:
    // 0x362c68: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x362c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_362c6c:
    // 0x362c6c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x362c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362c70:
    // 0x362c70: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x362c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_362c74:
    // 0x362c74: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x362c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362c78:
    // 0x362c78: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x362c78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_362c7c:
    // 0x362c7c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x362c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362c80:
    // 0x362c80: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x362c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_362c84:
    // 0x362c84: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x362c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362c88:
    // 0x362c88: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x362c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_362c8c:
    // 0x362c8c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x362c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362c90:
    // 0x362c90: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x362c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_362c94:
    // 0x362c94: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x362c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362c98:
    // 0x362c98: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x362c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_362c9c:
    // 0x362c9c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x362c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362ca0:
    // 0x362ca0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x362ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_362ca4:
    // 0x362ca4: 0xc4420030  lwc1        $f2, 0x30($v0)
    ctx->pc = 0x362ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_362ca8:
    // 0x362ca8: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x362ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_362cac:
    // 0x362cac: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x362cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362cb0:
    // 0x362cb0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x362cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_362cb4:
    // 0x362cb4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x362cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362cb8:
    // 0x362cb8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x362cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_362cbc:
    // 0x362cbc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x362cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362cc0:
    // 0x362cc0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x362cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_362cc4:
    // 0x362cc4: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x362cc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_362cc8:
    // 0x362cc8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x362cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362ccc:
    // 0x362ccc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x362cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_362cd0:
    // 0x362cd0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x362cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362cd4:
    // 0x362cd4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x362cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_362cd8:
    // 0x362cd8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x362cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362cdc:
    // 0x362cdc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x362cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_362ce0:
    // 0x362ce0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x362ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_362ce4:
    // 0x362ce4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_362ce8:
    if (ctx->pc == 0x362CE8u) {
        ctx->pc = 0x362CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362CE4u;
        // 0x362ce8: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362CECu;
        goto label_362cec;
    }
    ctx->pc = 0x362CE4u;
    {
        const bool branch_taken_0x362ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362ce4) {
            ctx->pc = 0x362CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362CE4u;
            // 0x362ce8: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362D24u;
            goto label_362d24;
        }
    }
    ctx->pc = 0x362CECu;
label_362cec:
    // 0x362cec: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x362cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_362cf0:
    // 0x362cf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x362cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_362cf4:
    // 0x362cf4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x362cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_362cf8:
    // 0x362cf8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x362cf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_362cfc:
    // 0x362cfc: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x362cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_362d00:
    // 0x362d00: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x362d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_362d04:
    // 0x362d04: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_362d08:
    if (ctx->pc == 0x362D08u) {
        ctx->pc = 0x362D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D04u;
        // 0x362d08: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362D0Cu;
        goto label_362d0c;
    }
    ctx->pc = 0x362D04u;
    {
        const bool branch_taken_0x362d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362d04) {
            ctx->pc = 0x362D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362D04u;
            // 0x362d08: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362D24u;
            goto label_362d24;
        }
    }
    ctx->pc = 0x362D0Cu;
label_362d0c:
    // 0x362d0c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x362d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_362d10:
    // 0x362d10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x362d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_362d14:
    // 0x362d14: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x362d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_362d18:
    // 0x362d18: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x362d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_362d1c:
    // 0x362d1c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x362d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_362d20:
    // 0x362d20: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x362d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_362d24:
    // 0x362d24: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x362d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_362d28:
    // 0x362d28: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x362d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_362d2c:
    // 0x362d2c: 0x40f809  jalr        $v0
label_362d30:
    if (ctx->pc == 0x362D30u) {
        ctx->pc = 0x362D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D2Cu;
        // 0x362d30: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362D34u;
        goto label_362d34;
    }
    ctx->pc = 0x362D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362D34u);
        ctx->pc = 0x362D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D2Cu;
        // 0x362d30: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362D2Cu, 0x362D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362D34u;
label_362d34:
    // 0x362d34: 0xc083bc0  jal         func_20EF00
label_362d38:
    if (ctx->pc == 0x362D38u) {
        ctx->pc = 0x362D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D34u;
        // 0x362d38: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362D3Cu;
        goto label_362d3c;
    }
    ctx->pc = 0x362D34u;
    SET_GPR_U32(ctx, 31, 0x362D3Cu);
    ctx->pc = 0x362D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362D34u;
    // 0x362d38: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x362D34u, 0x362D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362D3Cu;
label_362d3c:
    // 0x362d3c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x362d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_362d40:
    // 0x362d40: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x362d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_362d44:
    // 0x362d44: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x362d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_362d48:
    // 0x362d48: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x362d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_362d4c:
    // 0x362d4c: 0x40f809  jalr        $v0
label_362d50:
    if (ctx->pc == 0x362D50u) {
        ctx->pc = 0x362D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D4Cu;
        // 0x362d50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362D54u;
        goto label_362d54;
    }
    ctx->pc = 0x362D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362D54u);
        ctx->pc = 0x362D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D4Cu;
        // 0x362d50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362D4Cu, 0x362D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362D54u;
label_362d54:
    // 0x362d54: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x362d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_362d58:
    // 0x362d58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x362d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_362d5c:
    // 0x362d5c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x362d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_362d60:
    // 0x362d60: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x362d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_362d64:
    // 0x362d64: 0xac820224  sw          $v0, 0x224($a0)
    ctx->pc = 0x362d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 2));
label_362d68:
    // 0x362d68: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x362d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_362d6c:
    // 0x362d6c: 0xc0b7264  jal         func_2DC990
label_362d70:
    if (ctx->pc == 0x362D70u) {
        ctx->pc = 0x362D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D6Cu;
        // 0x362d70: 0x8c64010c  lw          $a0, 0x10C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362D74u;
        goto label_362d74;
    }
    ctx->pc = 0x362D6Cu;
    SET_GPR_U32(ctx, 31, 0x362D74u);
    ctx->pc = 0x362D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362D6Cu;
    // 0x362d70: 0x8c64010c  lw          $a0, 0x10C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x362D6Cu, 0x362D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362D74u;
label_362d74:
    // 0x362d74: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x362d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_362d78:
    // 0x362d78: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x362d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_362d7c:
    // 0x362d7c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x362d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_362d80:
    // 0x362d80: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x362d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_362d84:
    // 0x362d84: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x362d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_362d88:
    // 0x362d88: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x362d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_362d8c:
    // 0x362d8c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_362d90:
    if (ctx->pc == 0x362D90u) {
        ctx->pc = 0x362D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D8Cu;
        // 0x362d90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362D94u;
        goto label_362d94;
    }
    ctx->pc = 0x362D8Cu;
    {
        const bool branch_taken_0x362d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D8Cu;
        // 0x362d90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362d8c) {
            ctx->pc = 0x362DACu;
            goto label_362dac;
        }
    }
    ctx->pc = 0x362D94u;
label_362d94:
    // 0x362d94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x362d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_362d98:
    // 0x362d98: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_362d9c:
    if (ctx->pc == 0x362D9Cu) {
        ctx->pc = 0x362D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D98u;
        // 0x362d9c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362DA0u;
        goto label_362da0;
    }
    ctx->pc = 0x362D98u;
    {
        const bool branch_taken_0x362d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x362D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D98u;
        // 0x362d9c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362d98) {
            ctx->pc = 0x362DA8u;
            goto label_362da8;
        }
    }
    ctx->pc = 0x362DA0u;
label_362da0:
    // 0x362da0: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_362da4:
    if (ctx->pc == 0x362DA4u) {
        ctx->pc = 0x362DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362DA0u;
        // 0x362da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362DA8u;
        goto label_362da8;
    }
    ctx->pc = 0x362DA0u;
    {
        const bool branch_taken_0x362da0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x362DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362DA0u;
        // 0x362da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362da0) {
            ctx->pc = 0x362DACu;
            goto label_362dac;
        }
    }
    ctx->pc = 0x362DA8u;
label_362da8:
    // 0x362da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_362dac:
    // 0x362dac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x362dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_362db0:
    // 0x362db0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_362db4:
    if (ctx->pc == 0x362DB4u) {
        ctx->pc = 0x362DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362DB0u;
        // 0x362db4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362DB8u;
        goto label_362db8;
    }
    ctx->pc = 0x362DB0u;
    {
        const bool branch_taken_0x362db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362db0) {
            ctx->pc = 0x362DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362DB0u;
            // 0x362db4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362DD0u;
            goto label_362dd0;
        }
    }
    ctx->pc = 0x362DB8u;
label_362db8:
    // 0x362db8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x362db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_362dbc:
    // 0x362dbc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x362dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_362dc0:
    // 0x362dc0: 0x8c44010c  lw          $a0, 0x10C($v0)
    ctx->pc = 0x362dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_362dc4:
    // 0x362dc4: 0xc0b7880  jal         func_2DE200
label_362dc8:
    if (ctx->pc == 0x362DC8u) {
        ctx->pc = 0x362DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362DC4u;
        // 0x362dc8: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362DCCu;
        goto label_362dcc;
    }
    ctx->pc = 0x362DC4u;
    SET_GPR_U32(ctx, 31, 0x362DCCu);
    ctx->pc = 0x362DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362DC4u;
    // 0x362dc8: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE200u, 0x362DC4u, 0x362DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362DCCu;
label_362dcc:
    // 0x362dcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x362dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_362dd0:
    // 0x362dd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x362dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_362dd4:
    // 0x362dd4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x362dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_362dd8:
    // 0x362dd8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x362dd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_362ddc:
    // 0x362ddc: 0x0  nop
    ctx->pc = 0x362ddcu;
    // NOP
label_362de0:
    // 0x362de0: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_362de4:
    if (ctx->pc == 0x362DE4u) {
        ctx->pc = 0x362DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362DE0u;
        // 0x362de4: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x362DE8u;
        goto label_362de8;
    }
    ctx->pc = 0x362DE0u;
    {
        const bool branch_taken_0x362de0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x362de0) {
            ctx->pc = 0x362DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362DE0u;
            // 0x362de4: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x362DECu;
            goto label_362dec;
        }
    }
    ctx->pc = 0x362DE8u;
label_362de8:
    // 0x362de8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x362de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_362dec:
    // 0x362dec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x362decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_362df0:
    // 0x362df0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_362df4:
    if (ctx->pc == 0x362DF4u) {
        ctx->pc = 0x362DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362DF0u;
        // 0x362df4: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362DF8u;
        goto label_362df8;
    }
    ctx->pc = 0x362DF0u;
    {
        const bool branch_taken_0x362df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x362df0) {
            ctx->pc = 0x362DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362DF0u;
            // 0x362df4: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362E10u;
            goto label_362e10;
        }
    }
    ctx->pc = 0x362DF8u;
label_362df8:
    // 0x362df8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x362df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_362dfc:
    // 0x362dfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x362dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_362e00:
    // 0x362e00: 0xc0fbcea  jal         func_3EF3A8
label_362e04:
    if (ctx->pc == 0x362E04u) {
        ctx->pc = 0x362E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E00u;
        // 0x362e04: 0x2484dc30  addiu       $a0, $a0, -0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362E08u;
        goto label_362e08;
    }
    ctx->pc = 0x362E00u;
    SET_GPR_U32(ctx, 31, 0x362E08u);
    ctx->pc = 0x362E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362E00u;
    // 0x362e04: 0x2484dc30  addiu       $a0, $a0, -0x23D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF3A8u, 0x362E00u, 0x362E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362E08u;
label_362e08:
    // 0x362e08: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x362e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_362e0c:
    // 0x362e0c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x362e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_362e10:
    // 0x362e10: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x362e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_362e14:
    // 0x362e14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x362e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_362e18:
    // 0x362e18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x362e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_362e1c:
    // 0x362e1c: 0x54820014  bnel        $a0, $v0, . + 4 + (0x14 << 2)
label_362e20:
    if (ctx->pc == 0x362E20u) {
        ctx->pc = 0x362E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E1Cu;
        // 0x362e20: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362E24u;
        goto label_362e24;
    }
    ctx->pc = 0x362E1Cu;
    {
        const bool branch_taken_0x362e1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x362e1c) {
            ctx->pc = 0x362E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362E1Cu;
            // 0x362e20: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362E70u;
            goto label_362e70;
        }
    }
    ctx->pc = 0x362E24u;
label_362e24:
    // 0x362e24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x362e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_362e28:
    // 0x362e28: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x362e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_362e2c:
    // 0x362e2c: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x362e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
label_362e30:
    // 0x362e30: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x362e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_362e34:
    // 0x362e34: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_362e38:
    if (ctx->pc == 0x362E38u) {
        ctx->pc = 0x362E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E34u;
        // 0x362e38: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362E3Cu;
        goto label_362e3c;
    }
    ctx->pc = 0x362E34u;
    {
        const bool branch_taken_0x362e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362e34) {
            ctx->pc = 0x362E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362E34u;
            // 0x362e38: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362E70u;
            goto label_362e70;
        }
    }
    ctx->pc = 0x362E3Cu;
label_362e3c:
    // 0x362e3c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x362e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_362e40:
    // 0x362e40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_362e44:
    if (ctx->pc == 0x362E44u) {
        ctx->pc = 0x362E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E40u;
        // 0x362e44: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362E48u;
        goto label_362e48;
    }
    ctx->pc = 0x362E40u;
    {
        const bool branch_taken_0x362e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x362e40) {
            ctx->pc = 0x362E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362E40u;
            // 0x362e44: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362E5Cu;
            goto label_362e5c;
        }
    }
    ctx->pc = 0x362E48u;
label_362e48:
    // 0x362e48: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x362e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_362e4c:
    // 0x362e4c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x362e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_362e50:
    // 0x362e50: 0x40f809  jalr        $v0
label_362e54:
    if (ctx->pc == 0x362E54u) {
        ctx->pc = 0x362E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E50u;
        // 0x362e54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362E58u;
        goto label_362e58;
    }
    ctx->pc = 0x362E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362E58u);
        ctx->pc = 0x362E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E50u;
        // 0x362e54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362E50u, 0x362E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362E58u;
label_362e58:
    // 0x362e58: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x362e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_362e5c:
    // 0x362e5c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x362e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_362e60:
    // 0x362e60: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x362e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_362e64:
    // 0x362e64: 0x40f809  jalr        $v0
label_362e68:
    if (ctx->pc == 0x362E68u) {
        ctx->pc = 0x362E6Cu;
        goto label_362e6c;
    }
    ctx->pc = 0x362E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362E6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362E64u, 0x362E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362E6Cu;
label_362e6c:
    // 0x362e6c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x362e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_362e70:
    // 0x362e70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_362e74:
    // 0x362e74: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x362e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_362e78:
    // 0x362e78: 0x3e00008  jr          $ra
label_362e7c:
    if (ctx->pc == 0x362E7Cu) {
        ctx->pc = 0x362E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E78u;
        // 0x362e7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362E80u;
        goto label_fallthrough_0x362e78;
    }
    ctx->pc = 0x362E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362E78u;
        // 0x362e7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x362e78:
    ctx->pc = 0x362E80u;
}
