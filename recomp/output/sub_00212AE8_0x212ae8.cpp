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

// Function: sub_00212AE8
// Address: 0x212ae8 - 0x212ef0
void sub_00212AE8_0x212ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212AE8_0x212ae8");
#endif

    switch (ctx->pc) {
        case 0x212ae8u: goto label_212ae8;
        case 0x212aecu: goto label_212aec;
        case 0x212af0u: goto label_212af0;
        case 0x212af4u: goto label_212af4;
        case 0x212af8u: goto label_212af8;
        case 0x212afcu: goto label_212afc;
        case 0x212b00u: goto label_212b00;
        case 0x212b04u: goto label_212b04;
        case 0x212b08u: goto label_212b08;
        case 0x212b0cu: goto label_212b0c;
        case 0x212b10u: goto label_212b10;
        case 0x212b14u: goto label_212b14;
        case 0x212b18u: goto label_212b18;
        case 0x212b1cu: goto label_212b1c;
        case 0x212b20u: goto label_212b20;
        case 0x212b24u: goto label_212b24;
        case 0x212b28u: goto label_212b28;
        case 0x212b2cu: goto label_212b2c;
        case 0x212b30u: goto label_212b30;
        case 0x212b34u: goto label_212b34;
        case 0x212b38u: goto label_212b38;
        case 0x212b3cu: goto label_212b3c;
        case 0x212b40u: goto label_212b40;
        case 0x212b44u: goto label_212b44;
        case 0x212b48u: goto label_212b48;
        case 0x212b4cu: goto label_212b4c;
        case 0x212b50u: goto label_212b50;
        case 0x212b54u: goto label_212b54;
        case 0x212b58u: goto label_212b58;
        case 0x212b5cu: goto label_212b5c;
        case 0x212b60u: goto label_212b60;
        case 0x212b64u: goto label_212b64;
        case 0x212b68u: goto label_212b68;
        case 0x212b6cu: goto label_212b6c;
        case 0x212b70u: goto label_212b70;
        case 0x212b74u: goto label_212b74;
        case 0x212b78u: goto label_212b78;
        case 0x212b7cu: goto label_212b7c;
        case 0x212b80u: goto label_212b80;
        case 0x212b84u: goto label_212b84;
        case 0x212b88u: goto label_212b88;
        case 0x212b8cu: goto label_212b8c;
        case 0x212b90u: goto label_212b90;
        case 0x212b94u: goto label_212b94;
        case 0x212b98u: goto label_212b98;
        case 0x212b9cu: goto label_212b9c;
        case 0x212ba0u: goto label_212ba0;
        case 0x212ba4u: goto label_212ba4;
        case 0x212ba8u: goto label_212ba8;
        case 0x212bacu: goto label_212bac;
        case 0x212bb0u: goto label_212bb0;
        case 0x212bb4u: goto label_212bb4;
        case 0x212bb8u: goto label_212bb8;
        case 0x212bbcu: goto label_212bbc;
        case 0x212bc0u: goto label_212bc0;
        case 0x212bc4u: goto label_212bc4;
        case 0x212bc8u: goto label_212bc8;
        case 0x212bccu: goto label_212bcc;
        case 0x212bd0u: goto label_212bd0;
        case 0x212bd4u: goto label_212bd4;
        case 0x212bd8u: goto label_212bd8;
        case 0x212bdcu: goto label_212bdc;
        case 0x212be0u: goto label_212be0;
        case 0x212be4u: goto label_212be4;
        case 0x212be8u: goto label_212be8;
        case 0x212becu: goto label_212bec;
        case 0x212bf0u: goto label_212bf0;
        case 0x212bf4u: goto label_212bf4;
        case 0x212bf8u: goto label_212bf8;
        case 0x212bfcu: goto label_212bfc;
        case 0x212c00u: goto label_212c00;
        case 0x212c04u: goto label_212c04;
        case 0x212c08u: goto label_212c08;
        case 0x212c0cu: goto label_212c0c;
        case 0x212c10u: goto label_212c10;
        case 0x212c14u: goto label_212c14;
        case 0x212c18u: goto label_212c18;
        case 0x212c1cu: goto label_212c1c;
        case 0x212c20u: goto label_212c20;
        case 0x212c24u: goto label_212c24;
        case 0x212c28u: goto label_212c28;
        case 0x212c2cu: goto label_212c2c;
        case 0x212c30u: goto label_212c30;
        case 0x212c34u: goto label_212c34;
        case 0x212c38u: goto label_212c38;
        case 0x212c3cu: goto label_212c3c;
        case 0x212c40u: goto label_212c40;
        case 0x212c44u: goto label_212c44;
        case 0x212c48u: goto label_212c48;
        case 0x212c4cu: goto label_212c4c;
        case 0x212c50u: goto label_212c50;
        case 0x212c54u: goto label_212c54;
        case 0x212c58u: goto label_212c58;
        case 0x212c5cu: goto label_212c5c;
        case 0x212c60u: goto label_212c60;
        case 0x212c64u: goto label_212c64;
        case 0x212c68u: goto label_212c68;
        case 0x212c6cu: goto label_212c6c;
        case 0x212c70u: goto label_212c70;
        case 0x212c74u: goto label_212c74;
        case 0x212c78u: goto label_212c78;
        case 0x212c7cu: goto label_212c7c;
        case 0x212c80u: goto label_212c80;
        case 0x212c84u: goto label_212c84;
        case 0x212c88u: goto label_212c88;
        case 0x212c8cu: goto label_212c8c;
        case 0x212c90u: goto label_212c90;
        case 0x212c94u: goto label_212c94;
        case 0x212c98u: goto label_212c98;
        case 0x212c9cu: goto label_212c9c;
        case 0x212ca0u: goto label_212ca0;
        case 0x212ca4u: goto label_212ca4;
        case 0x212ca8u: goto label_212ca8;
        case 0x212cacu: goto label_212cac;
        case 0x212cb0u: goto label_212cb0;
        case 0x212cb4u: goto label_212cb4;
        case 0x212cb8u: goto label_212cb8;
        case 0x212cbcu: goto label_212cbc;
        case 0x212cc0u: goto label_212cc0;
        case 0x212cc4u: goto label_212cc4;
        case 0x212cc8u: goto label_212cc8;
        case 0x212cccu: goto label_212ccc;
        case 0x212cd0u: goto label_212cd0;
        case 0x212cd4u: goto label_212cd4;
        case 0x212cd8u: goto label_212cd8;
        case 0x212cdcu: goto label_212cdc;
        case 0x212ce0u: goto label_212ce0;
        case 0x212ce4u: goto label_212ce4;
        case 0x212ce8u: goto label_212ce8;
        case 0x212cecu: goto label_212cec;
        case 0x212cf0u: goto label_212cf0;
        case 0x212cf4u: goto label_212cf4;
        case 0x212cf8u: goto label_212cf8;
        case 0x212cfcu: goto label_212cfc;
        case 0x212d00u: goto label_212d00;
        case 0x212d04u: goto label_212d04;
        case 0x212d08u: goto label_212d08;
        case 0x212d0cu: goto label_212d0c;
        case 0x212d10u: goto label_212d10;
        case 0x212d14u: goto label_212d14;
        case 0x212d18u: goto label_212d18;
        case 0x212d1cu: goto label_212d1c;
        case 0x212d20u: goto label_212d20;
        case 0x212d24u: goto label_212d24;
        case 0x212d28u: goto label_212d28;
        case 0x212d2cu: goto label_212d2c;
        case 0x212d30u: goto label_212d30;
        case 0x212d34u: goto label_212d34;
        case 0x212d38u: goto label_212d38;
        case 0x212d3cu: goto label_212d3c;
        case 0x212d40u: goto label_212d40;
        case 0x212d44u: goto label_212d44;
        case 0x212d48u: goto label_212d48;
        case 0x212d4cu: goto label_212d4c;
        case 0x212d50u: goto label_212d50;
        case 0x212d54u: goto label_212d54;
        case 0x212d58u: goto label_212d58;
        case 0x212d5cu: goto label_212d5c;
        case 0x212d60u: goto label_212d60;
        case 0x212d64u: goto label_212d64;
        case 0x212d68u: goto label_212d68;
        case 0x212d6cu: goto label_212d6c;
        case 0x212d70u: goto label_212d70;
        case 0x212d74u: goto label_212d74;
        case 0x212d78u: goto label_212d78;
        case 0x212d7cu: goto label_212d7c;
        case 0x212d80u: goto label_212d80;
        case 0x212d84u: goto label_212d84;
        case 0x212d88u: goto label_212d88;
        case 0x212d8cu: goto label_212d8c;
        case 0x212d90u: goto label_212d90;
        case 0x212d94u: goto label_212d94;
        case 0x212d98u: goto label_212d98;
        case 0x212d9cu: goto label_212d9c;
        case 0x212da0u: goto label_212da0;
        case 0x212da4u: goto label_212da4;
        case 0x212da8u: goto label_212da8;
        case 0x212dacu: goto label_212dac;
        case 0x212db0u: goto label_212db0;
        case 0x212db4u: goto label_212db4;
        case 0x212db8u: goto label_212db8;
        case 0x212dbcu: goto label_212dbc;
        case 0x212dc0u: goto label_212dc0;
        case 0x212dc4u: goto label_212dc4;
        case 0x212dc8u: goto label_212dc8;
        case 0x212dccu: goto label_212dcc;
        case 0x212dd0u: goto label_212dd0;
        case 0x212dd4u: goto label_212dd4;
        case 0x212dd8u: goto label_212dd8;
        case 0x212ddcu: goto label_212ddc;
        case 0x212de0u: goto label_212de0;
        case 0x212de4u: goto label_212de4;
        case 0x212de8u: goto label_212de8;
        case 0x212decu: goto label_212dec;
        case 0x212df0u: goto label_212df0;
        case 0x212df4u: goto label_212df4;
        case 0x212df8u: goto label_212df8;
        case 0x212dfcu: goto label_212dfc;
        case 0x212e00u: goto label_212e00;
        case 0x212e04u: goto label_212e04;
        case 0x212e08u: goto label_212e08;
        case 0x212e0cu: goto label_212e0c;
        case 0x212e10u: goto label_212e10;
        case 0x212e14u: goto label_212e14;
        case 0x212e18u: goto label_212e18;
        case 0x212e1cu: goto label_212e1c;
        case 0x212e20u: goto label_212e20;
        case 0x212e24u: goto label_212e24;
        case 0x212e28u: goto label_212e28;
        case 0x212e2cu: goto label_212e2c;
        case 0x212e30u: goto label_212e30;
        case 0x212e34u: goto label_212e34;
        case 0x212e38u: goto label_212e38;
        case 0x212e3cu: goto label_212e3c;
        case 0x212e40u: goto label_212e40;
        case 0x212e44u: goto label_212e44;
        case 0x212e48u: goto label_212e48;
        case 0x212e4cu: goto label_212e4c;
        case 0x212e50u: goto label_212e50;
        case 0x212e54u: goto label_212e54;
        case 0x212e58u: goto label_212e58;
        case 0x212e5cu: goto label_212e5c;
        case 0x212e60u: goto label_212e60;
        case 0x212e64u: goto label_212e64;
        case 0x212e68u: goto label_212e68;
        case 0x212e6cu: goto label_212e6c;
        case 0x212e70u: goto label_212e70;
        case 0x212e74u: goto label_212e74;
        case 0x212e78u: goto label_212e78;
        case 0x212e7cu: goto label_212e7c;
        case 0x212e80u: goto label_212e80;
        case 0x212e84u: goto label_212e84;
        case 0x212e88u: goto label_212e88;
        case 0x212e8cu: goto label_212e8c;
        case 0x212e90u: goto label_212e90;
        case 0x212e94u: goto label_212e94;
        case 0x212e98u: goto label_212e98;
        case 0x212e9cu: goto label_212e9c;
        case 0x212ea0u: goto label_212ea0;
        case 0x212ea4u: goto label_212ea4;
        case 0x212ea8u: goto label_212ea8;
        case 0x212eacu: goto label_212eac;
        case 0x212eb0u: goto label_212eb0;
        case 0x212eb4u: goto label_212eb4;
        case 0x212eb8u: goto label_212eb8;
        case 0x212ebcu: goto label_212ebc;
        case 0x212ec0u: goto label_212ec0;
        case 0x212ec4u: goto label_212ec4;
        case 0x212ec8u: goto label_212ec8;
        case 0x212eccu: goto label_212ecc;
        case 0x212ed0u: goto label_212ed0;
        case 0x212ed4u: goto label_212ed4;
        case 0x212ed8u: goto label_212ed8;
        case 0x212edcu: goto label_212edc;
        case 0x212ee0u: goto label_212ee0;
        case 0x212ee4u: goto label_212ee4;
        case 0x212ee8u: goto label_212ee8;
        case 0x212eecu: goto label_212eec;
        default: break;
    }

    ctx->pc = 0x212ae8u;

label_212ae8:
    // 0x212ae8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x212ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_212aec:
    // 0x212aec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x212aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_212af0:
    // 0x212af0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x212af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_212af4:
    // 0x212af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_212af8:
    // 0x212af8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x212af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_212afc:
    // 0x212afc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x212afcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_212b00:
    // 0x212b00: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x212b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_212b04:
    // 0x212b04: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x212b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_212b08:
    // 0x212b08: 0x544000f3  bnel        $v0, $zero, . + 4 + (0xF3 << 2)
label_212b0c:
    if (ctx->pc == 0x212B0Cu) {
        ctx->pc = 0x212B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B08u;
        // 0x212b0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B10u;
        goto label_212b10;
    }
    ctx->pc = 0x212B08u;
    {
        const bool branch_taken_0x212b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212b08) {
            ctx->pc = 0x212B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212B08u;
            // 0x212b0c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212ED8u;
            goto label_212ed8;
        }
    }
    ctx->pc = 0x212B10u;
label_212b10:
    // 0x212b10: 0xc084db0  jal         func_2136C0
label_212b14:
    if (ctx->pc == 0x212B14u) {
        ctx->pc = 0x212B18u;
        goto label_212b18;
    }
    ctx->pc = 0x212B10u;
    SET_GPR_U32(ctx, 31, 0x212B18u);
    ctx->pc = 0x2136C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2136C0u, 0x212B10u, 0x212B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212B18u;
label_212b18:
    // 0x212b18: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x212b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_212b1c:
    // 0x212b1c: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x212b1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_212b20:
    // 0x212b20: 0x106000ec  beqz        $v1, . + 4 + (0xEC << 2)
label_212b24:
    if (ctx->pc == 0x212B24u) {
        ctx->pc = 0x212B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B20u;
        // 0x212b24: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B28u;
        goto label_212b28;
    }
    ctx->pc = 0x212B20u;
    {
        const bool branch_taken_0x212b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x212B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B20u;
        // 0x212b24: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b20) {
            ctx->pc = 0x212ED4u;
            goto label_212ed4;
        }
    }
    ctx->pc = 0x212B28u;
label_212b28:
    // 0x212b28: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x212b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_212b2c:
    // 0x212b2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x212b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_212b30:
    // 0x212b30: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_212b34:
    if (ctx->pc == 0x212B34u) {
        ctx->pc = 0x212B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B30u;
        // 0x212b34: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B38u;
        goto label_212b38;
    }
    ctx->pc = 0x212B30u;
    {
        const bool branch_taken_0x212b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x212B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B30u;
        // 0x212b34: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212b30) {
            ctx->pc = 0x212B64u;
            goto label_212b64;
        }
    }
    ctx->pc = 0x212B38u;
label_212b38:
    // 0x212b38: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x212b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_212b3c:
    // 0x212b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_212b40:
    // 0x212b40: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x212b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_212b44:
    // 0x212b44: 0x40f809  jalr        $v0
label_212b48:
    if (ctx->pc == 0x212B48u) {
        ctx->pc = 0x212B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B44u;
        // 0x212b48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212B4Cu;
        goto label_212b4c;
    }
    ctx->pc = 0x212B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x212B4Cu);
        ctx->pc = 0x212B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212B44u;
        // 0x212b48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212B44u, 0x212B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212B4Cu;
label_212b4c:
    // 0x212b4c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x212b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_212b50:
    // 0x212b50: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x212b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_212b54:
    // 0x212b54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x212b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_212b58:
    // 0x212b58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x212b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_212b5c:
    // 0x212b5c: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x212b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_212b60:
    // 0x212b60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x212b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_212b64:
    // 0x212b64: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x212b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_212b68:
    // 0x212b68: 0x8c45bcf8  lw          $a1, -0x4308($v0)
    ctx->pc = 0x212b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
label_212b6c:
    // 0x212b6c: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x212b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_212b70:
    // 0x212b70: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x212b70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_212b74:
    // 0x212b74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x212b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_212b78:
    // 0x212b78: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x212b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_212b7c:
    // 0x212b7c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x212b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_212b80:
    // 0x212b80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x212b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_212b84:
    // 0x212b84: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x212b84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
label_212b88:
    // 0x212b88: 0xacc4bce4  sw          $a0, -0x431C($a2)
    ctx->pc = 0x212b88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294950116), GPR_U32(ctx, 4));
label_212b8c:
    // 0x212b8c: 0x8ce2bcf0  lw          $v0, -0x4310($a3)
    ctx->pc = 0x212b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950128)));
label_212b90:
    // 0x212b90: 0x6a030127  ldl         $v1, 0x127($s0)
    ctx->pc = 0x212b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_212b94:
    // 0x212b94: 0x6e030120  ldr         $v1, 0x120($s0)
    ctx->pc = 0x212b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_212b98:
    // 0x212b98: 0x6a04012f  ldl         $a0, 0x12F($s0)
    ctx->pc = 0x212b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_212b9c:
    // 0x212b9c: 0x6e040128  ldr         $a0, 0x128($s0)
    ctx->pc = 0x212b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_212ba0:
    // 0x212ba0: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x212ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_212ba4:
    // 0x212ba4: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x212ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_212ba8:
    // 0x212ba8: 0xb044001f  sdl         $a0, 0x1F($v0)
    ctx->pc = 0x212ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_212bac:
    // 0x212bac: 0xb4440018  sdr         $a0, 0x18($v0)
    ctx->pc = 0x212bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_212bb0:
    // 0x212bb0: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x212bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_212bb4:
    // 0x212bb4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_212bb8:
    if (ctx->pc == 0x212BB8u) {
        ctx->pc = 0x212BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BB4u;
        // 0x212bb8: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BBCu;
        goto label_212bbc;
    }
    ctx->pc = 0x212BB4u;
    {
        const bool branch_taken_0x212bb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x212BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BB4u;
        // 0x212bb8: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212bb4) {
            ctx->pc = 0x212BD8u;
            goto label_212bd8;
        }
    }
    ctx->pc = 0x212BBCu;
label_212bbc:
    // 0x212bbc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x212bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_212bc0:
    // 0x212bc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_212bc4:
    if (ctx->pc == 0x212BC4u) {
        ctx->pc = 0x212BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BC0u;
        // 0x212bc4: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BC8u;
        goto label_212bc8;
    }
    ctx->pc = 0x212BC0u;
    {
        const bool branch_taken_0x212bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BC0u;
        // 0x212bc4: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212bc0) {
            ctx->pc = 0x212BD8u;
            goto label_212bd8;
        }
    }
    ctx->pc = 0x212BC8u;
label_212bc8:
    // 0x212bc8: 0xc0b4af0  jal         func_2D2BC0
label_212bcc:
    if (ctx->pc == 0x212BCCu) {
        ctx->pc = 0x212BD0u;
        goto label_212bd0;
    }
    ctx->pc = 0x212BC8u;
    SET_GPR_U32(ctx, 31, 0x212BD0u);
    ctx->pc = 0x2D2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2BC0u, 0x212BC8u, 0x212BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212BD0u;
label_212bd0:
    // 0x212bd0: 0x10000014  b           . + 4 + (0x14 << 2)
label_212bd4:
    if (ctx->pc == 0x212BD4u) {
        ctx->pc = 0x212BD8u;
        goto label_212bd8;
    }
    ctx->pc = 0x212BD0u;
    {
        const bool branch_taken_0x212bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212bd0) {
            ctx->pc = 0x212C24u;
            goto label_212c24;
        }
    }
    ctx->pc = 0x212BD8u;
label_212bd8:
    // 0x212bd8: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x212bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_212bdc:
    // 0x212bdc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x212bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_212be0:
    // 0x212be0: 0x54620017  bnel        $v1, $v0, . + 4 + (0x17 << 2)
label_212be4:
    if (ctx->pc == 0x212BE4u) {
        ctx->pc = 0x212BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BE0u;
        // 0x212be4: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BE8u;
        goto label_212be8;
    }
    ctx->pc = 0x212BE0u;
    {
        const bool branch_taken_0x212be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x212be0) {
            ctx->pc = 0x212BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212BE0u;
            // 0x212be4: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212C40u;
            goto label_212c40;
        }
    }
    ctx->pc = 0x212BE8u;
label_212be8:
    // 0x212be8: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x212be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_212bec:
    // 0x212bec: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
label_212bf0:
    if (ctx->pc == 0x212BF0u) {
        ctx->pc = 0x212BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BECu;
        // 0x212bf0: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212BF4u;
        goto label_212bf4;
    }
    ctx->pc = 0x212BECu;
    {
        const bool branch_taken_0x212bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x212bec) {
            ctx->pc = 0x212BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212BECu;
            // 0x212bf0: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212C40u;
            goto label_212c40;
        }
    }
    ctx->pc = 0x212BF4u;
label_212bf4:
    // 0x212bf4: 0x8c8401a4  lw          $a0, 0x1A4($a0)
    ctx->pc = 0x212bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 420)));
label_212bf8:
    // 0x212bf8: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
label_212bfc:
    if (ctx->pc == 0x212BFCu) {
        ctx->pc = 0x212BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BF8u;
        // 0x212bfc: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C00u;
        goto label_212c00;
    }
    ctx->pc = 0x212BF8u;
    {
        const bool branch_taken_0x212bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x212bf8) {
            ctx->pc = 0x212BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212BF8u;
            // 0x212bfc: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212C40u;
            goto label_212c40;
        }
    }
    ctx->pc = 0x212C00u;
label_212c00:
    // 0x212c00: 0xc0b4b34  jal         func_2D2CD0
label_212c04:
    if (ctx->pc == 0x212C04u) {
        ctx->pc = 0x212C08u;
        goto label_212c08;
    }
    ctx->pc = 0x212C00u;
    SET_GPR_U32(ctx, 31, 0x212C08u);
    ctx->pc = 0x2D2CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2CD0u, 0x212C00u, 0x212C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C08u;
label_212c08:
    // 0x212c08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_212c0c:
    // 0x212c0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x212c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_212c10:
    // 0x212c10: 0x0  nop
    ctx->pc = 0x212c10u;
    // NOP
label_212c14:
    // 0x212c14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x212c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212c18:
    // 0x212c18: 0x0  nop
    ctx->pc = 0x212c18u;
    // NOP
label_212c1c:
    // 0x212c1c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_212c20:
    if (ctx->pc == 0x212C20u) {
        ctx->pc = 0x212C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C1Cu;
        // 0x212c20: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C24u;
        goto label_212c24;
    }
    ctx->pc = 0x212C1Cu;
    {
        const bool branch_taken_0x212c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212c1c) {
            ctx->pc = 0x212C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212C1Cu;
            // 0x212c20: 0x8e0200f4  lw          $v0, 0xF4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212C40u;
            goto label_212c40;
        }
    }
    ctx->pc = 0x212C24u;
label_212c24:
    // 0x212c24: 0xc0b5f9a  jal         func_2D7E68
label_212c28:
    if (ctx->pc == 0x212C28u) {
        ctx->pc = 0x212C2Cu;
        goto label_212c2c;
    }
    ctx->pc = 0x212C24u;
    SET_GPR_U32(ctx, 31, 0x212C2Cu);
    ctx->pc = 0x2D7E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E68u, 0x212C24u, 0x212C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C2Cu;
label_212c2c:
    // 0x212c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212c30:
    // 0x212c30: 0xc0b5fe4  jal         func_2D7F90
label_212c34:
    if (ctx->pc == 0x212C34u) {
        ctx->pc = 0x212C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C30u;
        // 0x212c34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C38u;
        goto label_212c38;
    }
    ctx->pc = 0x212C30u;
    SET_GPR_U32(ctx, 31, 0x212C38u);
    ctx->pc = 0x212C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C30u;
    // 0x212c34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7F90u, 0x212C30u, 0x212C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C38u;
label_212c38:
    // 0x212c38: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_212c3c:
    if (ctx->pc == 0x212C3Cu) {
        ctx->pc = 0x212C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C38u;
        // 0x212c3c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C40u;
        goto label_212c40;
    }
    ctx->pc = 0x212C38u;
    {
        const bool branch_taken_0x212c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C38u;
        // 0x212c3c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c38) {
            ctx->pc = 0x212ED8u;
            goto label_212ed8;
        }
    }
    ctx->pc = 0x212C40u;
label_212c40:
    // 0x212c40: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_212c44:
    if (ctx->pc == 0x212C44u) {
        ctx->pc = 0x212C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C40u;
        // 0x212c44: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C48u;
        goto label_212c48;
    }
    ctx->pc = 0x212C40u;
    {
        const bool branch_taken_0x212c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x212c40) {
            ctx->pc = 0x212C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212C40u;
            // 0x212c44: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212C54u;
            goto label_212c54;
        }
    }
    ctx->pc = 0x212C48u;
label_212c48:
    // 0x212c48: 0xc08505c  jal         func_214170
label_212c4c:
    if (ctx->pc == 0x212C4Cu) {
        ctx->pc = 0x212C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C48u;
        // 0x212c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C50u;
        goto label_212c50;
    }
    ctx->pc = 0x212C48u;
    SET_GPR_U32(ctx, 31, 0x212C50u);
    ctx->pc = 0x212C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C48u;
    // 0x212c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214170u, 0x212C48u, 0x212C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C50u;
label_212c50:
    // 0x212c50: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x212c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_212c54:
    // 0x212c54: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x212c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_212c58:
    // 0x212c58: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x212c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_212c5c:
    // 0x212c5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x212c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_212c60:
    // 0x212c60: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_212c64:
    if (ctx->pc == 0x212C64u) {
        ctx->pc = 0x212C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C60u;
        // 0x212c64: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C68u;
        goto label_212c68;
    }
    ctx->pc = 0x212C60u;
    {
        const bool branch_taken_0x212c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x212C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C60u;
        // 0x212c64: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c60) {
            ctx->pc = 0x212C80u;
            goto label_212c80;
        }
    }
    ctx->pc = 0x212C68u;
label_212c68:
    // 0x212c68: 0xc0db170  jal         func_36C5C0
label_212c6c:
    if (ctx->pc == 0x212C6Cu) {
        ctx->pc = 0x212C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C68u;
        // 0x212c6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C70u;
        goto label_212c70;
    }
    ctx->pc = 0x212C68u;
    SET_GPR_U32(ctx, 31, 0x212C70u);
    ctx->pc = 0x212C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C68u;
    // 0x212c6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x212C68u, 0x212C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C70u;
label_212c70:
    // 0x212c70: 0xc0db2d8  jal         func_36CB60
label_212c74:
    if (ctx->pc == 0x212C74u) {
        ctx->pc = 0x212C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C70u;
        // 0x212c74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C78u;
        goto label_212c78;
    }
    ctx->pc = 0x212C70u;
    SET_GPR_U32(ctx, 31, 0x212C78u);
    ctx->pc = 0x212C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212C70u;
    // 0x212c74: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CB60u, 0x212C70u, 0x212C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C78u;
label_212c78:
    // 0x212c78: 0x10000004  b           . + 4 + (0x4 << 2)
label_212c7c:
    if (ctx->pc == 0x212C7Cu) {
        ctx->pc = 0x212C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C78u;
        // 0x212c7c: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212C80u;
        goto label_212c80;
    }
    ctx->pc = 0x212C78u;
    {
        const bool branch_taken_0x212c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C78u;
        // 0x212c7c: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212c78) {
            ctx->pc = 0x212C8Cu;
            goto label_212c8c;
        }
    }
    ctx->pc = 0x212C80u;
label_212c80:
    // 0x212c80: 0xc0db190  jal         func_36C640
label_212c84:
    if (ctx->pc == 0x212C84u) {
        ctx->pc = 0x212C88u;
        goto label_212c88;
    }
    ctx->pc = 0x212C80u;
    SET_GPR_U32(ctx, 31, 0x212C88u);
    ctx->pc = 0x36C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C640u, 0x212C80u, 0x212C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212C88u;
label_212c88:
    // 0x212c88: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x212c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_212c8c:
    // 0x212c8c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x212c8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_212c90:
    // 0x212c90: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x212c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_212c94:
    // 0x212c94: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x212c94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212c98:
    // 0x212c98: 0x0  nop
    ctx->pc = 0x212c98u;
    // NOP
label_212c9c:
    // 0x212c9c: 0x45030028  bc1tl       . + 4 + (0x28 << 2)
label_212ca0:
    if (ctx->pc == 0x212CA0u) {
        ctx->pc = 0x212CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212C9Cu;
        // 0x212ca0: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212CA4u;
        goto label_212ca4;
    }
    ctx->pc = 0x212C9Cu;
    {
        const bool branch_taken_0x212c9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x212c9c) {
            ctx->pc = 0x212CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212C9Cu;
            // 0x212ca0: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212D40u;
            goto label_212d40;
        }
    }
    ctx->pc = 0x212CA4u;
label_212ca4:
    // 0x212ca4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x212ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_212ca8:
    // 0x212ca8: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x212ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_212cac:
    // 0x212cac: 0x8c47bd48  lw          $a3, -0x42B8($v0)
    ctx->pc = 0x212cacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_212cb0:
    // 0x212cb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x212cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_212cb4:
    // 0x212cb4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x212cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_212cb8:
    // 0x212cb8: 0x8ce50100  lw          $a1, 0x100($a3)
    ctx->pc = 0x212cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 256)));
label_212cbc:
    // 0x212cbc: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x212cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_212cc0:
    // 0x212cc0: 0xc0f6a9a  jal         func_3DAA68
label_212cc4:
    if (ctx->pc == 0x212CC4u) {
        ctx->pc = 0x212CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212CC0u;
        // 0x212cc4: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212CC8u;
        goto label_212cc8;
    }
    ctx->pc = 0x212CC0u;
    SET_GPR_U32(ctx, 31, 0x212CC8u);
    ctx->pc = 0x212CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212CC0u;
    // 0x212cc4: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x212CC0u, 0x212CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212CC8u;
label_212cc8:
    // 0x212cc8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x212cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_212ccc:
    // 0x212ccc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x212cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_212cd0:
    // 0x212cd0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x212cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_212cd4:
    // 0x212cd4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x212cd4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_212cd8:
    // 0x212cd8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x212cd8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_212cdc:
    // 0x212cdc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x212cdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_212ce0:
    // 0x212ce0: 0x46010044  c1          0x10044
    ctx->pc = 0x212ce0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_212ce4:
    // 0x212ce4: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x212ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_212ce8:
    // 0x212ce8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x212ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_212cec:
    // 0x212cec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_212cf0:
    // 0x212cf0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x212cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_212cf4:
    // 0x212cf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x212cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_212cf8:
    // 0x212cf8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x212cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212cfc:
    // 0x212cfc: 0x0  nop
    ctx->pc = 0x212cfcu;
    // NOP
label_212d00:
    // 0x212d00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_212d04:
    if (ctx->pc == 0x212D04u) {
        ctx->pc = 0x212D08u;
        goto label_212d08;
    }
    ctx->pc = 0x212D00u;
    {
        const bool branch_taken_0x212d00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212d00) {
            ctx->pc = 0x212D10u;
            goto label_212d10;
        }
    }
    ctx->pc = 0x212D08u;
label_212d08:
    // 0x212d08: 0x10000005  b           . + 4 + (0x5 << 2)
label_212d0c:
    if (ctx->pc == 0x212D0Cu) {
        ctx->pc = 0x212D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D08u;
        // 0x212d0c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212D10u;
        goto label_212d10;
    }
    ctx->pc = 0x212D08u;
    {
        const bool branch_taken_0x212d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D08u;
        // 0x212d0c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d08) {
            ctx->pc = 0x212D20u;
            goto label_212d20;
        }
    }
    ctx->pc = 0x212D10u;
label_212d10:
    // 0x212d10: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x212d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212d14:
    // 0x212d14: 0x0  nop
    ctx->pc = 0x212d14u;
    // NOP
label_212d18:
    // 0x212d18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_212d1c:
    if (ctx->pc == 0x212D1Cu) {
        ctx->pc = 0x212D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D18u;
        // 0x212d1c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212D20u;
        goto label_212d20;
    }
    ctx->pc = 0x212D18u;
    {
        const bool branch_taken_0x212d18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x212d18) {
            ctx->pc = 0x212D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212D18u;
            // 0x212d1c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x212D20u;
            goto label_212d20;
        }
    }
    ctx->pc = 0x212D20u;
label_212d20:
    // 0x212d20: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x212d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_212d24:
    // 0x212d24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x212d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_212d28:
    // 0x212d28: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x212d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_212d2c:
    // 0x212d2c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x212d2cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_212d30:
    // 0x212d30: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x212d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_212d34:
    // 0x212d34: 0xc0db390  jal         func_36CE40
label_212d38:
    if (ctx->pc == 0x212D38u) {
        ctx->pc = 0x212D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D34u;
        // 0x212d38: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212D3Cu;
        goto label_212d3c;
    }
    ctx->pc = 0x212D34u;
    SET_GPR_U32(ctx, 31, 0x212D3Cu);
    ctx->pc = 0x212D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D34u;
    // 0x212d38: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE40u, 0x212D34u, 0x212D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D3Cu;
label_212d3c:
    // 0x212d3c: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x212d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_212d40:
    // 0x212d40: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x212d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_212d44:
    // 0x212d44: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x212d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_212d48:
    // 0x212d48: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x212d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_212d4c:
    // 0x212d4c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_212d50:
    if (ctx->pc == 0x212D50u) {
        ctx->pc = 0x212D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D4Cu;
        // 0x212d50: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212D54u;
        goto label_212d54;
    }
    ctx->pc = 0x212D4Cu;
    {
        const bool branch_taken_0x212d4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x212D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D4Cu;
        // 0x212d50: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d4c) {
            ctx->pc = 0x212D64u;
            goto label_212d64;
        }
    }
    ctx->pc = 0x212D54u;
label_212d54:
    // 0x212d54: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x212d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_212d58:
    // 0x212d58: 0xc0db168  jal         func_36C5A0
label_212d5c:
    if (ctx->pc == 0x212D5Cu) {
        ctx->pc = 0x212D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D58u;
        // 0x212d5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212D60u;
        goto label_212d60;
    }
    ctx->pc = 0x212D58u;
    SET_GPR_U32(ctx, 31, 0x212D60u);
    ctx->pc = 0x212D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D58u;
    // 0x212d5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x212D58u, 0x212D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D60u;
label_212d60:
    // 0x212d60: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x212d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_212d64:
    // 0x212d64: 0xc0db168  jal         func_36C5A0
label_212d68:
    if (ctx->pc == 0x212D68u) {
        ctx->pc = 0x212D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D64u;
        // 0x212d68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212D6Cu;
        goto label_212d6c;
    }
    ctx->pc = 0x212D64u;
    SET_GPR_U32(ctx, 31, 0x212D6Cu);
    ctx->pc = 0x212D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212D64u;
    // 0x212d68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x212D64u, 0x212D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212D6Cu;
label_212d6c:
    // 0x212d6c: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x212d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_212d70:
    // 0x212d70: 0x1860003c  blez        $v1, . + 4 + (0x3C << 2)
label_212d74:
    if (ctx->pc == 0x212D74u) {
        ctx->pc = 0x212D78u;
        goto label_212d78;
    }
    ctx->pc = 0x212D70u;
    {
        const bool branch_taken_0x212d70 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x212d70) {
            ctx->pc = 0x212E64u;
            goto label_212e64;
        }
    }
    ctx->pc = 0x212D78u;
label_212d78:
    // 0x212d78: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x212d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_212d7c:
    // 0x212d7c: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x212d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_212d80:
    // 0x212d80: 0x904300b1  lbu         $v1, 0xB1($v0)
    ctx->pc = 0x212d80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 177)));
label_212d84:
    // 0x212d84: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x212d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_212d88:
    // 0x212d88: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x212d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_212d8c:
    // 0x212d8c: 0x38840003  xori        $a0, $a0, 0x3
    ctx->pc = 0x212d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
label_212d90:
    // 0x212d90: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_212d94:
    if (ctx->pc == 0x212D94u) {
        ctx->pc = 0x212D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D90u;
        // 0x212d94: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212D98u;
        goto label_212d98;
    }
    ctx->pc = 0x212D90u;
    {
        const bool branch_taken_0x212d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x212D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212D90u;
        // 0x212d94: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212d90) {
            ctx->pc = 0x212DCCu;
            goto label_212dcc;
        }
    }
    ctx->pc = 0x212D98u;
label_212d98:
    // 0x212d98: 0x30a2020f  andi        $v0, $a1, 0x20F
    ctx->pc = 0x212d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)527);
label_212d9c:
    // 0x212d9c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x212d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_212da0:
    // 0x212da0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_212da4:
    if (ctx->pc == 0x212DA4u) {
        ctx->pc = 0x212DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DA0u;
        // 0x212da4: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212DA8u;
        goto label_212da8;
    }
    ctx->pc = 0x212DA0u;
    {
        const bool branch_taken_0x212da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DA0u;
        // 0x212da4: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212da0) {
            ctx->pc = 0x212DD0u;
            goto label_212dd0;
        }
    }
    ctx->pc = 0x212DA8u;
label_212da8:
    // 0x212da8: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x212da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_212dac:
    // 0x212dac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x212dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_212db0:
    // 0x212db0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_212db4:
    if (ctx->pc == 0x212DB4u) {
        ctx->pc = 0x212DB8u;
        goto label_212db8;
    }
    ctx->pc = 0x212DB0u;
    {
        const bool branch_taken_0x212db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x212db0) {
            ctx->pc = 0x212DECu;
            goto label_212dec;
        }
    }
    ctx->pc = 0x212DB8u;
label_212db8:
    // 0x212db8: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x212db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_212dbc:
    // 0x212dbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x212dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_212dc0:
    // 0x212dc0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x212dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_212dc4:
    // 0x212dc4: 0xc0c3144  jal         func_30C510
label_212dc8:
    if (ctx->pc == 0x212DC8u) {
        ctx->pc = 0x212DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DC4u;
        // 0x212dc8: 0x8c4501bc  lw          $a1, 0x1BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212DCCu;
        goto label_212dcc;
    }
    ctx->pc = 0x212DC4u;
    SET_GPR_U32(ctx, 31, 0x212DCCu);
    ctx->pc = 0x212DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212DC4u;
    // 0x212dc8: 0x8c4501bc  lw          $a1, 0x1BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C510u, 0x212DC4u, 0x212DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212DCCu;
label_212dcc:
    // 0x212dcc: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x212dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_212dd0:
    // 0x212dd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x212dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_212dd4:
    // 0x212dd4: 0x92050144  lbu         $a1, 0x144($s0)
    ctx->pc = 0x212dd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 324)));
label_212dd8:
    // 0x212dd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212ddc:
    // 0x212ddc: 0xc0c2ecc  jal         func_30BB30
label_212de0:
    if (ctx->pc == 0x212DE0u) {
        ctx->pc = 0x212DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DDCu;
        // 0x212de0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212DE4u;
        goto label_212de4;
    }
    ctx->pc = 0x212DDCu;
    SET_GPR_U32(ctx, 31, 0x212DE4u);
    ctx->pc = 0x212DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212DDCu;
    // 0x212de0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x212DDCu, 0x212DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212DE4u;
label_212de4:
    // 0x212de4: 0x10000007  b           . + 4 + (0x7 << 2)
label_212de8:
    if (ctx->pc == 0x212DE8u) {
        ctx->pc = 0x212DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DE4u;
        // 0x212de8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212DECu;
        goto label_212dec;
    }
    ctx->pc = 0x212DE4u;
    {
        const bool branch_taken_0x212de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DE4u;
        // 0x212de8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212de4) {
            ctx->pc = 0x212E04u;
            goto label_212e04;
        }
    }
    ctx->pc = 0x212DECu;
label_212dec:
    // 0x212dec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x212decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_212df0:
    // 0x212df0: 0x92050144  lbu         $a1, 0x144($s0)
    ctx->pc = 0x212df0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 324)));
label_212df4:
    // 0x212df4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212df8:
    // 0x212df8: 0xc0c2ecc  jal         func_30BB30
label_212dfc:
    if (ctx->pc == 0x212DFCu) {
        ctx->pc = 0x212DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212DF8u;
        // 0x212dfc: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E00u;
        goto label_212e00;
    }
    ctx->pc = 0x212DF8u;
    SET_GPR_U32(ctx, 31, 0x212E00u);
    ctx->pc = 0x212DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212DF8u;
    // 0x212dfc: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x212DF8u, 0x212E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E00u;
label_212e00:
    // 0x212e00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x212e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_212e04:
    // 0x212e04: 0x9043bd58  lbu         $v1, -0x42A8($v0)
    ctx->pc = 0x212e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950232)));
label_212e08:
    // 0x212e08: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_212e0c:
    if (ctx->pc == 0x212E0Cu) {
        ctx->pc = 0x212E10u;
        goto label_212e10;
    }
    ctx->pc = 0x212E08u;
    {
        const bool branch_taken_0x212e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x212e08) {
            ctx->pc = 0x212E64u;
            goto label_212e64;
        }
    }
    ctx->pc = 0x212E10u;
label_212e10:
    // 0x212e10: 0x8e0400bc  lw          $a0, 0xBC($s0)
    ctx->pc = 0x212e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_212e14:
    // 0x212e14: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x212e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_212e18:
    // 0x212e18: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x212e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_212e1c:
    // 0x212e1c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_212e20:
    if (ctx->pc == 0x212E20u) {
        ctx->pc = 0x212E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E1Cu;
        // 0x212e20: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E24u;
        goto label_212e24;
    }
    ctx->pc = 0x212E1Cu;
    {
        const bool branch_taken_0x212e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E1Cu;
        // 0x212e20: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e1c) {
            ctx->pc = 0x212E5Cu;
            goto label_212e5c;
        }
    }
    ctx->pc = 0x212E24u;
label_212e24:
    // 0x212e24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x212e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_212e28:
    // 0x212e28: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x212e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_212e2c:
    // 0x212e2c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_212e30:
    if (ctx->pc == 0x212E30u) {
        ctx->pc = 0x212E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E2Cu;
        // 0x212e30: 0x30821001  andi        $v0, $a0, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4097);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E34u;
        goto label_212e34;
    }
    ctx->pc = 0x212E2Cu;
    {
        const bool branch_taken_0x212e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x212E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E2Cu;
        // 0x212e30: 0x30821001  andi        $v0, $a0, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4097);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e2c) {
            ctx->pc = 0x212E5Cu;
            goto label_212e5c;
        }
    }
    ctx->pc = 0x212E34u;
label_212e34:
    // 0x212e34: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x212e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_212e38:
    // 0x212e38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_212e3c:
    if (ctx->pc == 0x212E3Cu) {
        ctx->pc = 0x212E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E38u;
        // 0x212e3c: 0x30823001  andi        $v0, $a0, 0x3001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12289);
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E40u;
        goto label_212e40;
    }
    ctx->pc = 0x212E38u;
    {
        const bool branch_taken_0x212e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E38u;
        // 0x212e3c: 0x30823001  andi        $v0, $a0, 0x3001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12289);
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e38) {
            ctx->pc = 0x212E5Cu;
            goto label_212e5c;
        }
    }
    ctx->pc = 0x212E40u;
label_212e40:
    // 0x212e40: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x212e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_212e44:
    // 0x212e44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_212e48:
    if (ctx->pc == 0x212E48u) {
        ctx->pc = 0x212E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E44u;
        // 0x212e48: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E4Cu;
        goto label_212e4c;
    }
    ctx->pc = 0x212E44u;
    {
        const bool branch_taken_0x212e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E44u;
        // 0x212e48: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e44) {
            ctx->pc = 0x212E5Cu;
            goto label_212e5c;
        }
    }
    ctx->pc = 0x212E4Cu;
label_212e4c:
    // 0x212e4c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x212e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_212e50:
    // 0x212e50: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x212e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_212e54:
    // 0x212e54: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_212e58:
    if (ctx->pc == 0x212E58u) {
        ctx->pc = 0x212E5Cu;
        goto label_212e5c;
    }
    ctx->pc = 0x212E54u;
    {
        const bool branch_taken_0x212e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x212e54) {
            ctx->pc = 0x212E64u;
            goto label_212e64;
        }
    }
    ctx->pc = 0x212E5Cu;
label_212e5c:
    // 0x212e5c: 0xc085122  jal         func_214488
label_212e60:
    if (ctx->pc == 0x212E60u) {
        ctx->pc = 0x212E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E5Cu;
        // 0x212e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E64u;
        goto label_212e64;
    }
    ctx->pc = 0x212E5Cu;
    SET_GPR_U32(ctx, 31, 0x212E64u);
    ctx->pc = 0x212E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E5Cu;
    // 0x212e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214488u, 0x212E5Cu, 0x212E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E64u;
label_212e64:
    // 0x212e64: 0xc08506c  jal         func_2141B0
label_212e68:
    if (ctx->pc == 0x212E68u) {
        ctx->pc = 0x212E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E64u;
        // 0x212e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E6Cu;
        goto label_212e6c;
    }
    ctx->pc = 0x212E64u;
    SET_GPR_U32(ctx, 31, 0x212E6Cu);
    ctx->pc = 0x212E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212E64u;
    // 0x212e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2141B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2141B0u, 0x212E64u, 0x212E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E6Cu;
label_212e6c:
    // 0x212e6c: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x212e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_212e70:
    // 0x212e70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x212e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_212e74:
    // 0x212e74: 0xc4400178  lwc1        $f0, 0x178($v0)
    ctx->pc = 0x212e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_212e78:
    // 0x212e78: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x212e78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_212e7c:
    // 0x212e7c: 0x0  nop
    ctx->pc = 0x212e7cu;
    // NOP
label_212e80:
    // 0x212e80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_212e84:
    if (ctx->pc == 0x212E84u) {
        ctx->pc = 0x212E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E80u;
        // 0x212e84: 0x3c040400  lui         $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212E88u;
        goto label_212e88;
    }
    ctx->pc = 0x212E80u;
    {
        const bool branch_taken_0x212e80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x212E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212E80u;
        // 0x212e84: 0x3c040400  lui         $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212e80) {
            ctx->pc = 0x212E98u;
            goto label_212e98;
        }
    }
    ctx->pc = 0x212E88u;
label_212e88:
    // 0x212e88: 0xc0db390  jal         func_36CE40
label_212e8c:
    if (ctx->pc == 0x212E8Cu) {
        ctx->pc = 0x212E90u;
        goto label_212e90;
    }
    ctx->pc = 0x212E88u;
    SET_GPR_U32(ctx, 31, 0x212E90u);
    ctx->pc = 0x36CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CE40u, 0x212E88u, 0x212E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212E90u;
label_212e90:
    // 0x212e90: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x212e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_212e94:
    // 0x212e94: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x212e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_212e98:
    // 0x212e98: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x212e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_212e9c:
    // 0x212e9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x212e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_212ea0:
    // 0x212ea0: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
label_212ea4:
    if (ctx->pc == 0x212EA4u) {
        ctx->pc = 0x212EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EA0u;
        // 0x212ea4: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212EA8u;
        goto label_212ea8;
    }
    ctx->pc = 0x212EA0u;
    {
        const bool branch_taken_0x212ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x212ea0) {
            ctx->pc = 0x212EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x212EA0u;
            // 0x212ea4: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x212EB4u;
            goto label_212eb4;
        }
    }
    ctx->pc = 0x212EA8u;
label_212ea8:
    // 0x212ea8: 0xc0db2d8  jal         func_36CB60
label_212eac:
    if (ctx->pc == 0x212EACu) {
        ctx->pc = 0x212EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EA8u;
        // 0x212eac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212EB0u;
        goto label_212eb0;
    }
    ctx->pc = 0x212EA8u;
    SET_GPR_U32(ctx, 31, 0x212EB0u);
    ctx->pc = 0x212EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212EA8u;
    // 0x212eac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CB60u, 0x212EA8u, 0x212EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212EB0u;
label_212eb0:
    // 0x212eb0: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x212eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_212eb4:
    // 0x212eb4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x212eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_212eb8:
    // 0x212eb8: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x212eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_212ebc:
    // 0x212ebc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x212ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_212ec0:
    // 0x212ec0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_212ec4:
    if (ctx->pc == 0x212EC4u) {
        ctx->pc = 0x212EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EC0u;
        // 0x212ec4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212EC8u;
        goto label_212ec8;
    }
    ctx->pc = 0x212EC0u;
    {
        const bool branch_taken_0x212ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x212EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EC0u;
        // 0x212ec4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ec0) {
            ctx->pc = 0x212ED8u;
            goto label_212ed8;
        }
    }
    ctx->pc = 0x212EC8u;
label_212ec8:
    // 0x212ec8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x212ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_212ecc:
    // 0x212ecc: 0xc0db168  jal         func_36C5A0
label_212ed0:
    if (ctx->pc == 0x212ED0u) {
        ctx->pc = 0x212ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212ECCu;
        // 0x212ed0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212ED4u;
        goto label_212ed4;
    }
    ctx->pc = 0x212ECCu;
    SET_GPR_U32(ctx, 31, 0x212ED4u);
    ctx->pc = 0x212ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212ECCu;
    // 0x212ed0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x212ECCu, 0x212ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212ED4u;
label_212ed4:
    // 0x212ed4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x212ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_212ed8:
    // 0x212ed8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x212ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_212edc:
    // 0x212edc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x212edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_212ee0:
    // 0x212ee0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x212ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_212ee4:
    // 0x212ee4: 0x3e00008  jr          $ra
label_212ee8:
    if (ctx->pc == 0x212EE8u) {
        ctx->pc = 0x212EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EE4u;
        // 0x212ee8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212EECu;
        goto label_212eec;
    }
    ctx->pc = 0x212EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EE4u;
        // 0x212ee8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212EECu;
label_212eec:
    // 0x212eec: 0x0  nop
    ctx->pc = 0x212eecu;
    // NOP
    ctx->pc = 0x212ef0u;
}
