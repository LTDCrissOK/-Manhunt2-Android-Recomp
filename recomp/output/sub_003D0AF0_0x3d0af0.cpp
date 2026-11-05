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

// Function: sub_003D0AF0
// Address: 0x3d0af0 - 0x3d0d98
void sub_003D0AF0_0x3d0af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0AF0_0x3d0af0");
#endif

    switch (ctx->pc) {
        case 0x3d0af0u: goto label_3d0af0;
        case 0x3d0af4u: goto label_3d0af4;
        case 0x3d0af8u: goto label_3d0af8;
        case 0x3d0afcu: goto label_3d0afc;
        case 0x3d0b00u: goto label_3d0b00;
        case 0x3d0b04u: goto label_3d0b04;
        case 0x3d0b08u: goto label_3d0b08;
        case 0x3d0b0cu: goto label_3d0b0c;
        case 0x3d0b10u: goto label_3d0b10;
        case 0x3d0b14u: goto label_3d0b14;
        case 0x3d0b18u: goto label_3d0b18;
        case 0x3d0b1cu: goto label_3d0b1c;
        case 0x3d0b20u: goto label_3d0b20;
        case 0x3d0b24u: goto label_3d0b24;
        case 0x3d0b28u: goto label_3d0b28;
        case 0x3d0b2cu: goto label_3d0b2c;
        case 0x3d0b30u: goto label_3d0b30;
        case 0x3d0b34u: goto label_3d0b34;
        case 0x3d0b38u: goto label_3d0b38;
        case 0x3d0b3cu: goto label_3d0b3c;
        case 0x3d0b40u: goto label_3d0b40;
        case 0x3d0b44u: goto label_3d0b44;
        case 0x3d0b48u: goto label_3d0b48;
        case 0x3d0b4cu: goto label_3d0b4c;
        case 0x3d0b50u: goto label_3d0b50;
        case 0x3d0b54u: goto label_3d0b54;
        case 0x3d0b58u: goto label_3d0b58;
        case 0x3d0b5cu: goto label_3d0b5c;
        case 0x3d0b60u: goto label_3d0b60;
        case 0x3d0b64u: goto label_3d0b64;
        case 0x3d0b68u: goto label_3d0b68;
        case 0x3d0b6cu: goto label_3d0b6c;
        case 0x3d0b70u: goto label_3d0b70;
        case 0x3d0b74u: goto label_3d0b74;
        case 0x3d0b78u: goto label_3d0b78;
        case 0x3d0b7cu: goto label_3d0b7c;
        case 0x3d0b80u: goto label_3d0b80;
        case 0x3d0b84u: goto label_3d0b84;
        case 0x3d0b88u: goto label_3d0b88;
        case 0x3d0b8cu: goto label_3d0b8c;
        case 0x3d0b90u: goto label_3d0b90;
        case 0x3d0b94u: goto label_3d0b94;
        case 0x3d0b98u: goto label_3d0b98;
        case 0x3d0b9cu: goto label_3d0b9c;
        case 0x3d0ba0u: goto label_3d0ba0;
        case 0x3d0ba4u: goto label_3d0ba4;
        case 0x3d0ba8u: goto label_3d0ba8;
        case 0x3d0bacu: goto label_3d0bac;
        case 0x3d0bb0u: goto label_3d0bb0;
        case 0x3d0bb4u: goto label_3d0bb4;
        case 0x3d0bb8u: goto label_3d0bb8;
        case 0x3d0bbcu: goto label_3d0bbc;
        case 0x3d0bc0u: goto label_3d0bc0;
        case 0x3d0bc4u: goto label_3d0bc4;
        case 0x3d0bc8u: goto label_3d0bc8;
        case 0x3d0bccu: goto label_3d0bcc;
        case 0x3d0bd0u: goto label_3d0bd0;
        case 0x3d0bd4u: goto label_3d0bd4;
        case 0x3d0bd8u: goto label_3d0bd8;
        case 0x3d0bdcu: goto label_3d0bdc;
        case 0x3d0be0u: goto label_3d0be0;
        case 0x3d0be4u: goto label_3d0be4;
        case 0x3d0be8u: goto label_3d0be8;
        case 0x3d0becu: goto label_3d0bec;
        case 0x3d0bf0u: goto label_3d0bf0;
        case 0x3d0bf4u: goto label_3d0bf4;
        case 0x3d0bf8u: goto label_3d0bf8;
        case 0x3d0bfcu: goto label_3d0bfc;
        case 0x3d0c00u: goto label_3d0c00;
        case 0x3d0c04u: goto label_3d0c04;
        case 0x3d0c08u: goto label_3d0c08;
        case 0x3d0c0cu: goto label_3d0c0c;
        case 0x3d0c10u: goto label_3d0c10;
        case 0x3d0c14u: goto label_3d0c14;
        case 0x3d0c18u: goto label_3d0c18;
        case 0x3d0c1cu: goto label_3d0c1c;
        case 0x3d0c20u: goto label_3d0c20;
        case 0x3d0c24u: goto label_3d0c24;
        case 0x3d0c28u: goto label_3d0c28;
        case 0x3d0c2cu: goto label_3d0c2c;
        case 0x3d0c30u: goto label_3d0c30;
        case 0x3d0c34u: goto label_3d0c34;
        case 0x3d0c38u: goto label_3d0c38;
        case 0x3d0c3cu: goto label_3d0c3c;
        case 0x3d0c40u: goto label_3d0c40;
        case 0x3d0c44u: goto label_3d0c44;
        case 0x3d0c48u: goto label_3d0c48;
        case 0x3d0c4cu: goto label_3d0c4c;
        case 0x3d0c50u: goto label_3d0c50;
        case 0x3d0c54u: goto label_3d0c54;
        case 0x3d0c58u: goto label_3d0c58;
        case 0x3d0c5cu: goto label_3d0c5c;
        case 0x3d0c60u: goto label_3d0c60;
        case 0x3d0c64u: goto label_3d0c64;
        case 0x3d0c68u: goto label_3d0c68;
        case 0x3d0c6cu: goto label_3d0c6c;
        case 0x3d0c70u: goto label_3d0c70;
        case 0x3d0c74u: goto label_3d0c74;
        case 0x3d0c78u: goto label_3d0c78;
        case 0x3d0c7cu: goto label_3d0c7c;
        case 0x3d0c80u: goto label_3d0c80;
        case 0x3d0c84u: goto label_3d0c84;
        case 0x3d0c88u: goto label_3d0c88;
        case 0x3d0c8cu: goto label_3d0c8c;
        case 0x3d0c90u: goto label_3d0c90;
        case 0x3d0c94u: goto label_3d0c94;
        case 0x3d0c98u: goto label_3d0c98;
        case 0x3d0c9cu: goto label_3d0c9c;
        case 0x3d0ca0u: goto label_3d0ca0;
        case 0x3d0ca4u: goto label_3d0ca4;
        case 0x3d0ca8u: goto label_3d0ca8;
        case 0x3d0cacu: goto label_3d0cac;
        case 0x3d0cb0u: goto label_3d0cb0;
        case 0x3d0cb4u: goto label_3d0cb4;
        case 0x3d0cb8u: goto label_3d0cb8;
        case 0x3d0cbcu: goto label_3d0cbc;
        case 0x3d0cc0u: goto label_3d0cc0;
        case 0x3d0cc4u: goto label_3d0cc4;
        case 0x3d0cc8u: goto label_3d0cc8;
        case 0x3d0cccu: goto label_3d0ccc;
        case 0x3d0cd0u: goto label_3d0cd0;
        case 0x3d0cd4u: goto label_3d0cd4;
        case 0x3d0cd8u: goto label_3d0cd8;
        case 0x3d0cdcu: goto label_3d0cdc;
        case 0x3d0ce0u: goto label_3d0ce0;
        case 0x3d0ce4u: goto label_3d0ce4;
        case 0x3d0ce8u: goto label_3d0ce8;
        case 0x3d0cecu: goto label_3d0cec;
        case 0x3d0cf0u: goto label_3d0cf0;
        case 0x3d0cf4u: goto label_3d0cf4;
        case 0x3d0cf8u: goto label_3d0cf8;
        case 0x3d0cfcu: goto label_3d0cfc;
        case 0x3d0d00u: goto label_3d0d00;
        case 0x3d0d04u: goto label_3d0d04;
        case 0x3d0d08u: goto label_3d0d08;
        case 0x3d0d0cu: goto label_3d0d0c;
        case 0x3d0d10u: goto label_3d0d10;
        case 0x3d0d14u: goto label_3d0d14;
        case 0x3d0d18u: goto label_3d0d18;
        case 0x3d0d1cu: goto label_3d0d1c;
        case 0x3d0d20u: goto label_3d0d20;
        case 0x3d0d24u: goto label_3d0d24;
        case 0x3d0d28u: goto label_3d0d28;
        case 0x3d0d2cu: goto label_3d0d2c;
        case 0x3d0d30u: goto label_3d0d30;
        case 0x3d0d34u: goto label_3d0d34;
        case 0x3d0d38u: goto label_3d0d38;
        case 0x3d0d3cu: goto label_3d0d3c;
        case 0x3d0d40u: goto label_3d0d40;
        case 0x3d0d44u: goto label_3d0d44;
        case 0x3d0d48u: goto label_3d0d48;
        case 0x3d0d4cu: goto label_3d0d4c;
        case 0x3d0d50u: goto label_3d0d50;
        case 0x3d0d54u: goto label_3d0d54;
        case 0x3d0d58u: goto label_3d0d58;
        case 0x3d0d5cu: goto label_3d0d5c;
        case 0x3d0d60u: goto label_3d0d60;
        case 0x3d0d64u: goto label_3d0d64;
        case 0x3d0d68u: goto label_3d0d68;
        case 0x3d0d6cu: goto label_3d0d6c;
        case 0x3d0d70u: goto label_3d0d70;
        case 0x3d0d74u: goto label_3d0d74;
        case 0x3d0d78u: goto label_3d0d78;
        case 0x3d0d7cu: goto label_3d0d7c;
        case 0x3d0d80u: goto label_3d0d80;
        case 0x3d0d84u: goto label_3d0d84;
        case 0x3d0d88u: goto label_3d0d88;
        case 0x3d0d8cu: goto label_3d0d8c;
        case 0x3d0d90u: goto label_3d0d90;
        case 0x3d0d94u: goto label_3d0d94;
        default: break;
    }

    ctx->pc = 0x3d0af0u;

label_3d0af0:
    // 0x3d0af0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d0af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3d0af4:
    // 0x3d0af4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3d0af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3d0af8:
    // 0x3d0af8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3d0af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_3d0afc:
    // 0x3d0afc: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x3d0afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_3d0b00:
    // 0x3d0b00: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3d0b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3d0b04:
    // 0x3d0b04: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3d0b04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3d0b08:
    // 0x3d0b08: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x3d0b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_3d0b0c:
    // 0x3d0b0c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3d0b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_3d0b10:
    // 0x3d0b10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3d0b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3d0b14:
    // 0x3d0b14: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3d0b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_3d0b18:
    // 0x3d0b18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d0b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3d0b1c:
    // 0x3d0b1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d0b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3d0b20:
    // 0x3d0b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d0b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3d0b24:
    // 0x3d0b24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_3d0b28:
    // 0x3d0b28: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3d0b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3d0b2c:
    // 0x3d0b2c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_3d0b30:
    if (ctx->pc == 0x3D0B30u) {
        ctx->pc = 0x3D0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0B2Cu;
        // 0x3d0b30: 0x3c150043  lui         $s5, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0B34u;
        goto label_3d0b34;
    }
    ctx->pc = 0x3D0B2Cu;
    {
        const bool branch_taken_0x3d0b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0B2Cu;
        // 0x3d0b30: 0x3c150043  lui         $s5, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0b2c) {
            ctx->pc = 0x3D0CA0u;
            goto label_3d0ca0;
        }
    }
    ctx->pc = 0x3D0B34u;
label_3d0b34:
    // 0x3d0b34: 0x26a2e640  addiu       $v0, $s5, -0x19C0
    ctx->pc = 0x3d0b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960704));
label_3d0b38:
    // 0x3d0b38: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x3d0b38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3d0b3c:
    // 0x3d0b3c: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
label_3d0b40:
    if (ctx->pc == 0x3D0B40u) {
        ctx->pc = 0x3D0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0B3Cu;
        // 0x3d0b40: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0B44u;
        goto label_3d0b44;
    }
    ctx->pc = 0x3D0B3Cu;
    {
        const bool branch_taken_0x3d0b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0B3Cu;
        // 0x3d0b40: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0b3c) {
            ctx->pc = 0x3D0CA0u;
            goto label_3d0ca0;
        }
    }
    ctx->pc = 0x3D0B44u;
label_3d0b44:
    // 0x3d0b44: 0x24173999  addiu       $s7, $zero, 0x3999
    ctx->pc = 0x3d0b44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
label_3d0b48:
    // 0x3d0b48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3d0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3d0b4c:
    // 0x3d0b4c: 0x0  nop
    ctx->pc = 0x3d0b4cu;
    // NOP
label_3d0b50:
    // 0x3d0b50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3d0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3d0b54:
    // 0x3d0b54: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3d0b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_3d0b58:
    // 0x3d0b58: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x3d0b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_3d0b5c:
    // 0x3d0b5c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3d0b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10001000
label_3d0b60:
    // 0x3d0b60: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3d0b60u;
    SET_GPR_S32(ctx, 17, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_3d0b64:
    // 0x3d0b64: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x3d0b64u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_3d0b68:
    // 0x3d0b68: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3d0b68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_3d0b6c:
    // 0x3d0b6c: 0x32250800  andi        $a1, $s1, 0x800
    ctx->pc = 0x3d0b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
label_3d0b70:
    // 0x3d0b70: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x3d0b70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_3d0b74:
    // 0x3d0b74: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x3d0b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_3d0b78:
    // 0x3d0b78: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_3d0b7c:
    if (ctx->pc == 0x3D0B7Cu) {
        ctx->pc = 0x3D0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0B78u;
        // 0x3d0b7c: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0B80u;
        goto label_3d0b80;
    }
    ctx->pc = 0x3D0B78u;
    {
        const bool branch_taken_0x3d0b78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0B78u;
        // 0x3d0b7c: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0b78) {
            ctx->pc = 0x3D0BA4u;
            goto label_3d0ba4;
        }
    }
    ctx->pc = 0x3D0B80u;
label_3d0b80:
    // 0x3d0b80: 0xde82e640  ld          $v0, -0x19C0($s4)
    ctx->pc = 0x3d0b80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294960704)));
label_3d0b84:
    // 0x3d0b84: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3d0b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3d0b88:
    // 0x3d0b88: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x3d0b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_3d0b8c:
    // 0x3d0b8c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3d0b8cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_3d0b90:
    // 0x3d0b90: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x3d0b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_3d0b94:
    // 0x3d0b94: 0xc0f41a2  jal         func_3D0688
label_3d0b98:
    if (ctx->pc == 0x3D0B98u) {
        ctx->pc = 0x3D0B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0B94u;
        // 0x3d0b98: 0xfe82e640  sd          $v0, -0x19C0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 4294960704), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0B9Cu;
        goto label_3d0b9c;
    }
    ctx->pc = 0x3D0B94u;
    SET_GPR_U32(ctx, 31, 0x3D0B9Cu);
    ctx->pc = 0x3D0B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0B94u;
    // 0x3d0b98: 0xfe82e640  sd          $v0, -0x19C0($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294960704), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0688u, 0x3D0B94u, 0x3D0B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0B9Cu;
label_3d0b9c:
    // 0x3d0b9c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3d0b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_3d0ba0:
    // 0x3d0ba0: 0x8cc61000  lw          $a2, 0x1000($a2)
    ctx->pc = 0x3d0ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4096))); // MMIO: 0x10001000
label_3d0ba4:
    // 0x3d0ba4: 0xde84e640  ld          $a0, -0x19C0($s4)
    ctx->pc = 0x3d0ba4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 4294960704)));
label_3d0ba8:
    // 0x3d0ba8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3d0ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_3d0bac:
    // 0x3d0bac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3d0bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3d0bb0:
    // 0x3d0bb0: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x3d0bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_3d0bb4:
    // 0x3d0bb4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3d0bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_3d0bb8:
    // 0x3d0bb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d0bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d0bbc:
    // 0x3d0bbc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3d0bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3d0bc0:
    // 0x3d0bc0: 0x648814  dsllv       $s1, $a0, $v1
    ctx->pc = 0x3d0bc0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
label_3d0bc4:
    // 0x3d0bc4: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x3d0bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3d0bc8:
    // 0x3d0bc8: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_3d0bcc:
    if (ctx->pc == 0x3D0BCCu) {
        ctx->pc = 0x3D0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0BC8u;
        // 0x3d0bcc: 0x2692e640  addiu       $s2, $s4, -0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0BD0u;
        goto label_3d0bd0;
    }
    ctx->pc = 0x3D0BC8u;
    {
        const bool branch_taken_0x3d0bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0BC8u;
        // 0x3d0bcc: 0x2692e640  addiu       $s2, $s4, -0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0bc8) {
            ctx->pc = 0x3D0CA0u;
            goto label_3d0ca0;
        }
    }
    ctx->pc = 0x3D0BD0u;
label_3d0bd0:
    // 0x3d0bd0: 0xc0f42ae  jal         func_3D0AB8
label_3d0bd4:
    if (ctx->pc == 0x3D0BD4u) {
        ctx->pc = 0x3D0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0BD0u;
        // 0x3d0bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0BD8u;
        goto label_3d0bd8;
    }
    ctx->pc = 0x3D0BD0u;
    SET_GPR_U32(ctx, 31, 0x3D0BD8u);
    ctx->pc = 0x3D0BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0BD0u;
    // 0x3d0bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0AB8u, 0x3D0BD0u, 0x3D0BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0BD8u;
label_3d0bd8:
    // 0x3d0bd8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d0bd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d0bdc:
    // 0x3d0bdc: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x3d0bdcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_3d0be0:
    // 0x3d0be0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3d0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d0be4:
    // 0x3d0be4: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x3d0be4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3d0be8:
    // 0x3d0be8: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x3d0be8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_3d0bec:
    // 0x3d0bec: 0x226302d  daddu       $a2, $s1, $a2
    ctx->pc = 0x3d0becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 6));
label_3d0bf0:
    // 0x3d0bf0: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3d0bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_3d0bf4:
    // 0x3d0bf4: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x3d0bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_3d0bf8:
    // 0x3d0bf8: 0xc3302f  dsubu       $a2, $a2, $v1
    ctx->pc = 0x3d0bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
label_3d0bfc:
    // 0x3d0bfc: 0x8e1c002c  lw          $gp, 0x2C($s0)
    ctx->pc = 0x3d0bfcu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3d0c00:
    // 0x3d0c00: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3d0c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d0c04:
    // 0x3d0c04: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3d0c04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3d0c08:
    // 0x3d0c08: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3d0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3d0c0c:
    // 0x3d0c0c: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x3d0c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_3d0c10:
    // 0x3d0c10: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x3d0c10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_3d0c14:
    // 0x3d0c14: 0x40f809  jalr        $v0
label_3d0c18:
    if (ctx->pc == 0x3D0C18u) {
        ctx->pc = 0x3D0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C14u;
        // 0x3d0c18: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0C1Cu;
        goto label_3d0c1c;
    }
    ctx->pc = 0x3D0C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D0C1Cu);
        ctx->pc = 0x3D0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C14u;
        // 0x3d0c18: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0C14u, 0x3D0C1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D0C1Cu;
label_3d0c1c:
    // 0x3d0c1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d0c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d0c20:
    // 0x3d0c20: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_3d0c24:
    if (ctx->pc == 0x3D0C24u) {
        ctx->pc = 0x3D0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C20u;
        // 0x3d0c24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0C28u;
        goto label_3d0c28;
    }
    ctx->pc = 0x3D0C20u;
    {
        const bool branch_taken_0x3d0c20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C20u;
        // 0x3d0c24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0c20) {
            ctx->pc = 0x3D0C40u;
            goto label_3d0c40;
        }
    }
    ctx->pc = 0x3D0C28u;
label_3d0c28:
    // 0x3d0c28: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3d0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3d0c2c:
    // 0x3d0c2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3d0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3d0c30:
    // 0x3d0c30: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x3d0c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_3d0c34:
    // 0x3d0c34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3d0c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3d0c38:
    // 0x3d0c38: 0x10000014  b           . + 4 + (0x14 << 2)
label_3d0c3c:
    if (ctx->pc == 0x3D0C3Cu) {
        ctx->pc = 0x3D0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C38u;
        // 0x3d0c3c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0C40u;
        goto label_3d0c40;
    }
    ctx->pc = 0x3D0C38u;
    {
        const bool branch_taken_0x3d0c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C38u;
        // 0x3d0c3c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0c38) {
            ctx->pc = 0x3D0C8Cu;
            goto label_3d0c8c;
        }
    }
    ctx->pc = 0x3D0C40u;
label_3d0c40:
    // 0x3d0c40: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
label_3d0c44:
    if (ctx->pc == 0x3D0C44u) {
        ctx->pc = 0x3D0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C40u;
        // 0x3d0c44: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0C48u;
        goto label_3d0c48;
    }
    ctx->pc = 0x3D0C40u;
    {
        const bool branch_taken_0x3d0c40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C40u;
        // 0x3d0c44: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0c40) {
            ctx->pc = 0x3D0C70u;
            goto label_3d0c70;
        }
    }
    ctx->pc = 0x3D0C48u;
label_3d0c48:
    // 0x3d0c48: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3d0c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3d0c4c:
    // 0x3d0c4c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3d0c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3d0c50:
    // 0x3d0c50: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3d0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d0c54:
    // 0x3d0c54: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3d0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d0c58:
    // 0x3d0c58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d0c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d0c5c:
    // 0x3d0c5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d0c60:
    // 0x3d0c60: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x3d0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_3d0c64:
    // 0x3d0c64: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3d0c64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_3d0c68:
    // 0x3d0c68: 0x10000009  b           . + 4 + (0x9 << 2)
label_3d0c6c:
    if (ctx->pc == 0x3D0C6Cu) {
        ctx->pc = 0x3D0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C68u;
        // 0x3d0c6c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0C70u;
        goto label_3d0c70;
    }
    ctx->pc = 0x3D0C68u;
    {
        const bool branch_taken_0x3d0c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C68u;
        // 0x3d0c6c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0c68) {
            ctx->pc = 0x3D0C90u;
            goto label_3d0c90;
        }
    }
    ctx->pc = 0x3D0C70u;
label_3d0c70:
    // 0x3d0c70: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x3d0c70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_3d0c74:
    // 0x3d0c74: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3d0c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3d0c78:
    // 0x3d0c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d0c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d0c7c:
    // 0x3d0c7c: 0x2e2280a  movz        $a1, $s7, $v0
    ctx->pc = 0x3d0c7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
label_3d0c80:
    // 0x3d0c80: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x3d0c80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_3d0c84:
    // 0x3d0c84: 0xc0f428c  jal         func_3D0A30
label_3d0c88:
    if (ctx->pc == 0x3D0C88u) {
        ctx->pc = 0x3D0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C84u;
        // 0x3d0c88: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0C8Cu;
        goto label_3d0c8c;
    }
    ctx->pc = 0x3D0C84u;
    SET_GPR_U32(ctx, 31, 0x3D0C8Cu);
    ctx->pc = 0x3D0C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0C84u;
    // 0x3d0c88: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0A30u, 0x3D0C84u, 0x3D0C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0C8Cu;
label_3d0c8c:
    // 0x3d0c8c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3d0c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d0c90:
    // 0x3d0c90: 0x1600ffaf  bnez        $s0, . + 4 + (-0x51 << 2)
label_3d0c94:
    if (ctx->pc == 0x3D0C94u) {
        ctx->pc = 0x3D0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C90u;
        // 0x3d0c94: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0C98u;
        goto label_3d0c98;
    }
    ctx->pc = 0x3D0C90u;
    {
        const bool branch_taken_0x3d0c90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C90u;
        // 0x3d0c94: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0c90) {
            ctx->pc = 0x3D0B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0b50;
        }
    }
    ctx->pc = 0x3D0C98u;
label_3d0c98:
    // 0x3d0c98: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d0c9c:
    if (ctx->pc == 0x3D0C9Cu) {
        ctx->pc = 0x3D0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C98u;
        // 0x3d0c9c: 0x26a4e640  addiu       $a0, $s5, -0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0CA0u;
        goto label_3d0ca0;
    }
    ctx->pc = 0x3D0C98u;
    {
        const bool branch_taken_0x3d0c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0C98u;
        // 0x3d0c9c: 0x26a4e640  addiu       $a0, $s5, -0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0c98) {
            ctx->pc = 0x3D0CA4u;
            goto label_3d0ca4;
        }
    }
    ctx->pc = 0x3D0CA0u;
label_3d0ca0:
    // 0x3d0ca0: 0x26a4e640  addiu       $a0, $s5, -0x19C0
    ctx->pc = 0x3d0ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960704));
label_3d0ca4:
    // 0x3d0ca4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d0ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d0ca8:
    // 0x3d0ca8: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x3d0ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_3d0cac:
    // 0x3d0cac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3d0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3d0cb0:
    // 0x3d0cb0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3d0cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_3d0cb4:
    // 0x3d0cb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3d0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3d0cb8:
    // 0x3d0cb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d0cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10001000
label_3d0cbc:
    // 0x3d0cbc: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x3d0cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_3d0cc0:
    // 0x3d0cc0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3d0cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_3d0cc4:
    // 0x3d0cc4: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x3d0cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_3d0cc8:
    // 0x3d0cc8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3d0ccc:
    if (ctx->pc == 0x3D0CCCu) {
        ctx->pc = 0x3D0CD0u;
        goto label_3d0cd0;
    }
    ctx->pc = 0x3D0CC8u;
    {
        const bool branch_taken_0x3d0cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0cc8) {
            ctx->pc = 0x3D0CF4u;
            goto label_3d0cf4;
        }
    }
    ctx->pc = 0x3D0CD0u;
label_3d0cd0:
    // 0x3d0cd0: 0xdea2e640  ld          $v0, -0x19C0($s5)
    ctx->pc = 0x3d0cd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294960704)));
label_3d0cd4:
    // 0x3d0cd4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3d0cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3d0cd8:
    // 0x3d0cd8: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x3d0cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_3d0cdc:
    // 0x3d0cdc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3d0cdcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_3d0ce0:
    // 0x3d0ce0: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x3d0ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_3d0ce4:
    // 0x3d0ce4: 0xc0f41a2  jal         func_3D0688
label_3d0ce8:
    if (ctx->pc == 0x3D0CE8u) {
        ctx->pc = 0x3D0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0CE4u;
        // 0x3d0ce8: 0xfea2e640  sd          $v0, -0x19C0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294960704), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0CECu;
        goto label_3d0cec;
    }
    ctx->pc = 0x3D0CE4u;
    SET_GPR_U32(ctx, 31, 0x3D0CECu);
    ctx->pc = 0x3D0CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0CE4u;
    // 0x3d0ce8: 0xfea2e640  sd          $v0, -0x19C0($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294960704), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0688u, 0x3D0CE4u, 0x3D0CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0CECu;
label_3d0cec:
    // 0x3d0cec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3d0cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_3d0cf0:
    // 0x3d0cf0: 0x8c841000  lw          $a0, 0x1000($a0)
    ctx->pc = 0x3d0cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 4096))); // MMIO: 0x10001000
label_3d0cf4:
    // 0x3d0cf4: 0xdea2e640  ld          $v0, -0x19C0($s5)
    ctx->pc = 0x3d0cf4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294960704)));
label_3d0cf8:
    // 0x3d0cf8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3d0cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_3d0cfc:
    // 0x3d0cfc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3d0cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3d0d00:
    // 0x3d0d00: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x3d0d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_3d0d04:
    // 0x3d0d04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3d0d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3d0d08:
    // 0x3d0d08: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d0d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d0d0c:
    // 0x3d0d0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d0d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d0d10:
    // 0x3d0d10: 0xc0f4228  jal         func_3D08A0
label_3d0d14:
    if (ctx->pc == 0x3D0D14u) {
        ctx->pc = 0x3D0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D10u;
        // 0x3d0d14: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0D18u;
        goto label_3d0d18;
    }
    ctx->pc = 0x3D0D10u;
    SET_GPR_U32(ctx, 31, 0x3D0D18u);
    ctx->pc = 0x3D0D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0D10u;
    // 0x3d0d14: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D08A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D08A0u, 0x3D0D10u, 0x3D0D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0D18u;
label_3d0d18:
    // 0x3d0d18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3d0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3d0d1c:
    // 0x3d0d1c: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x3d0d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_3d0d20:
    // 0x3d0d20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3d0d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3d0d24:
    // 0x3d0d24: 0x8c631010  lw          $v1, 0x1010($v1)
    ctx->pc = 0x3d0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4112))); // MMIO: 0x10001010
label_3d0d28:
    // 0x3d0d28: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x3d0d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_3d0d2c:
    // 0x3d0d2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3d0d30:
    if (ctx->pc == 0x3D0D30u) {
        ctx->pc = 0x3D0D34u;
        goto label_3d0d34;
    }
    ctx->pc = 0x3D0D2Cu;
    {
        const bool branch_taken_0x3d0d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0d2c) {
            ctx->pc = 0x3D0D58u;
            goto label_3d0d58;
        }
    }
    ctx->pc = 0x3D0D34u;
label_3d0d34:
    // 0x3d0d34: 0xdea2e640  ld          $v0, -0x19C0($s5)
    ctx->pc = 0x3d0d34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294960704)));
label_3d0d38:
    // 0x3d0d38: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3d0d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3d0d3c:
    // 0x3d0d3c: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x3d0d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_3d0d40:
    // 0x3d0d40: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3d0d40u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_3d0d44:
    // 0x3d0d44: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x3d0d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3d0d48:
    // 0x3d0d48: 0xc0f41a2  jal         func_3D0688
label_3d0d4c:
    if (ctx->pc == 0x3D0D4Cu) {
        ctx->pc = 0x3D0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D48u;
        // 0x3d0d4c: 0xfea2e640  sd          $v0, -0x19C0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294960704), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0D50u;
        goto label_3d0d50;
    }
    ctx->pc = 0x3D0D48u;
    SET_GPR_U32(ctx, 31, 0x3D0D50u);
    ctx->pc = 0x3D0D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0D48u;
    // 0x3d0d4c: 0xfea2e640  sd          $v0, -0x19C0($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294960704), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0688u, 0x3D0D48u, 0x3D0D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0D50u;
label_3d0d50:
    // 0x3d0d50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3d0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3d0d54:
    // 0x3d0d54: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x3d0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_3d0d58:
    // 0x3d0d58: 0xdea2e640  ld          $v0, -0x19C0($s5)
    ctx->pc = 0x3d0d58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294960704)));
label_3d0d5c:
    // 0x3d0d5c: 0xf  sync
    ctx->pc = 0x3d0d5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3d0d60:
    // 0x3d0d60: 0x42000038  ei
    ctx->pc = 0x3d0d60u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3d0d64:
    // 0x3d0d64: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3d0d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3d0d68:
    // 0x3d0d68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d0d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d0d6c:
    // 0x3d0d6c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x3d0d6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3d0d70:
    // 0x3d0d70: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3d0d70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3d0d74:
    // 0x3d0d74: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3d0d74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d0d78:
    // 0x3d0d78: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3d0d78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d0d7c:
    // 0x3d0d7c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3d0d7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d0d80:
    // 0x3d0d80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d0d80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d0d84:
    // 0x3d0d84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d0d84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d0d88:
    // 0x3d0d88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d0d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d0d8c:
    // 0x3d0d8c: 0x3e00008  jr          $ra
label_3d0d90:
    if (ctx->pc == 0x3D0D90u) {
        ctx->pc = 0x3D0D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D8Cu;
        // 0x3d0d90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D0D94u;
        goto label_3d0d94;
    }
    ctx->pc = 0x3D0D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0D8Cu;
        // 0x3d0d90: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0D94u;
label_3d0d94:
    // 0x3d0d94: 0x0  nop
    ctx->pc = 0x3d0d94u;
    // NOP
    ctx->pc = 0x3d0d98u;
}
