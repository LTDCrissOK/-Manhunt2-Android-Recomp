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

// Function: sub_003A3B50
// Address: 0x3a3b50 - 0x3a3cc0
void sub_003A3B50_0x3a3b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3B50_0x3a3b50");
#endif

    switch (ctx->pc) {
        case 0x3a3b50u: goto label_3a3b50;
        case 0x3a3b54u: goto label_3a3b54;
        case 0x3a3b58u: goto label_3a3b58;
        case 0x3a3b5cu: goto label_3a3b5c;
        case 0x3a3b60u: goto label_3a3b60;
        case 0x3a3b64u: goto label_3a3b64;
        case 0x3a3b68u: goto label_3a3b68;
        case 0x3a3b6cu: goto label_3a3b6c;
        case 0x3a3b70u: goto label_3a3b70;
        case 0x3a3b74u: goto label_3a3b74;
        case 0x3a3b78u: goto label_3a3b78;
        case 0x3a3b7cu: goto label_3a3b7c;
        case 0x3a3b80u: goto label_3a3b80;
        case 0x3a3b84u: goto label_3a3b84;
        case 0x3a3b88u: goto label_3a3b88;
        case 0x3a3b8cu: goto label_3a3b8c;
        case 0x3a3b90u: goto label_3a3b90;
        case 0x3a3b94u: goto label_3a3b94;
        case 0x3a3b98u: goto label_3a3b98;
        case 0x3a3b9cu: goto label_3a3b9c;
        case 0x3a3ba0u: goto label_3a3ba0;
        case 0x3a3ba4u: goto label_3a3ba4;
        case 0x3a3ba8u: goto label_3a3ba8;
        case 0x3a3bacu: goto label_3a3bac;
        case 0x3a3bb0u: goto label_3a3bb0;
        case 0x3a3bb4u: goto label_3a3bb4;
        case 0x3a3bb8u: goto label_3a3bb8;
        case 0x3a3bbcu: goto label_3a3bbc;
        case 0x3a3bc0u: goto label_3a3bc0;
        case 0x3a3bc4u: goto label_3a3bc4;
        case 0x3a3bc8u: goto label_3a3bc8;
        case 0x3a3bccu: goto label_3a3bcc;
        case 0x3a3bd0u: goto label_3a3bd0;
        case 0x3a3bd4u: goto label_3a3bd4;
        case 0x3a3bd8u: goto label_3a3bd8;
        case 0x3a3bdcu: goto label_3a3bdc;
        case 0x3a3be0u: goto label_3a3be0;
        case 0x3a3be4u: goto label_3a3be4;
        case 0x3a3be8u: goto label_3a3be8;
        case 0x3a3becu: goto label_3a3bec;
        case 0x3a3bf0u: goto label_3a3bf0;
        case 0x3a3bf4u: goto label_3a3bf4;
        case 0x3a3bf8u: goto label_3a3bf8;
        case 0x3a3bfcu: goto label_3a3bfc;
        case 0x3a3c00u: goto label_3a3c00;
        case 0x3a3c04u: goto label_3a3c04;
        case 0x3a3c08u: goto label_3a3c08;
        case 0x3a3c0cu: goto label_3a3c0c;
        case 0x3a3c10u: goto label_3a3c10;
        case 0x3a3c14u: goto label_3a3c14;
        case 0x3a3c18u: goto label_3a3c18;
        case 0x3a3c1cu: goto label_3a3c1c;
        case 0x3a3c20u: goto label_3a3c20;
        case 0x3a3c24u: goto label_3a3c24;
        case 0x3a3c28u: goto label_3a3c28;
        case 0x3a3c2cu: goto label_3a3c2c;
        case 0x3a3c30u: goto label_3a3c30;
        case 0x3a3c34u: goto label_3a3c34;
        case 0x3a3c38u: goto label_3a3c38;
        case 0x3a3c3cu: goto label_3a3c3c;
        case 0x3a3c40u: goto label_3a3c40;
        case 0x3a3c44u: goto label_3a3c44;
        case 0x3a3c48u: goto label_3a3c48;
        case 0x3a3c4cu: goto label_3a3c4c;
        case 0x3a3c50u: goto label_3a3c50;
        case 0x3a3c54u: goto label_3a3c54;
        case 0x3a3c58u: goto label_3a3c58;
        case 0x3a3c5cu: goto label_3a3c5c;
        case 0x3a3c60u: goto label_3a3c60;
        case 0x3a3c64u: goto label_3a3c64;
        case 0x3a3c68u: goto label_3a3c68;
        case 0x3a3c6cu: goto label_3a3c6c;
        case 0x3a3c70u: goto label_3a3c70;
        case 0x3a3c74u: goto label_3a3c74;
        case 0x3a3c78u: goto label_3a3c78;
        case 0x3a3c7cu: goto label_3a3c7c;
        case 0x3a3c80u: goto label_3a3c80;
        case 0x3a3c84u: goto label_3a3c84;
        case 0x3a3c88u: goto label_3a3c88;
        case 0x3a3c8cu: goto label_3a3c8c;
        case 0x3a3c90u: goto label_3a3c90;
        case 0x3a3c94u: goto label_3a3c94;
        case 0x3a3c98u: goto label_3a3c98;
        case 0x3a3c9cu: goto label_3a3c9c;
        case 0x3a3ca0u: goto label_3a3ca0;
        case 0x3a3ca4u: goto label_3a3ca4;
        case 0x3a3ca8u: goto label_3a3ca8;
        case 0x3a3cacu: goto label_3a3cac;
        case 0x3a3cb0u: goto label_3a3cb0;
        case 0x3a3cb4u: goto label_3a3cb4;
        case 0x3a3cb8u: goto label_3a3cb8;
        case 0x3a3cbcu: goto label_3a3cbc;
        default: break;
    }

    ctx->pc = 0x3a3b50u;

label_3a3b50:
    // 0x3a3b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a3b54:
    // 0x3a3b54: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_3a3b58:
    // 0x3a3b58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a3b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a3b5c:
    // 0x3a3b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a3b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3b60:
    // 0x3a3b60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a3b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3a3b64:
    // 0x3a3b64: 0x24631e78  addiu       $v1, $v1, 0x1E78
    ctx->pc = 0x3a3b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7800));
label_3a3b68:
    // 0x3a3b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a3b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a3b6c:
    // 0x3a3b6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a3b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3b70:
    // 0x3a3b70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a3b74:
    // 0x3a3b74: 0x82050001  lb          $a1, 0x1($s0)
    ctx->pc = 0x3a3b74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_3a3b78:
    // 0x3a3b78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a3b7c:
    // 0x3a3b7c: 0x14a40016  bne         $a1, $a0, . + 4 + (0x16 << 2)
label_3a3b80:
    if (ctx->pc == 0x3A3B80u) {
        ctx->pc = 0x3A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B7Cu;
        // 0x3a3b80: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3B84u;
        goto label_3a3b84;
    }
    ctx->pc = 0x3A3B7Cu;
    {
        const bool branch_taken_0x3a3b7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B7Cu;
        // 0x3a3b80: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b7c) {
            ctx->pc = 0x3A3BD8u;
            goto label_3a3bd8;
        }
    }
    ctx->pc = 0x3A3B84u;
label_3a3b84:
    // 0x3a3b84: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3a3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3a3b88:
    // 0x3a3b88: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3a3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a3b8c:
    // 0x3a3b8c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x3a3b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_3a3b90:
    // 0x3a3b90: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3a3b90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3a3b94:
    // 0x3a3b94: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_3a3b98:
    if (ctx->pc == 0x3A3B98u) {
        ctx->pc = 0x3A3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B94u;
        // 0x3a3b98: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3B9Cu;
        goto label_3a3b9c;
    }
    ctx->pc = 0x3A3B94u;
    {
        const bool branch_taken_0x3a3b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3b94) {
            ctx->pc = 0x3A3B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3B94u;
            // 0x3a3b98: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3BDCu;
            goto label_3a3bdc;
        }
    }
    ctx->pc = 0x3A3B9Cu;
label_3a3b9c:
    // 0x3a3b9c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a3b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a3ba0:
    // 0x3a3ba0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3a3ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a3ba4:
    // 0x3a3ba4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a3ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a3ba8:
    // 0x3a3ba8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a3ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3a3bac:
    // 0x3a3bac: 0xc0f28c4  jal         func_3CA310
label_3a3bb0:
    if (ctx->pc == 0x3A3BB0u) {
        ctx->pc = 0x3A3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BACu;
        // 0x3a3bb0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3BB4u;
        goto label_3a3bb4;
    }
    ctx->pc = 0x3A3BACu;
    SET_GPR_U32(ctx, 31, 0x3A3BB4u);
    ctx->pc = 0x3A3BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3BACu;
    // 0x3a3bb0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA310u, 0x3A3BACu, 0x3A3BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3BB4u;
label_3a3bb4:
    // 0x3a3bb4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3a3bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3a3bb8:
    // 0x3a3bb8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3a3bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3a3bbc:
    // 0x3a3bbc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3a3bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a3bc0:
    // 0x3a3bc0: 0x60f809  jalr        $v1
label_3a3bc4:
    if (ctx->pc == 0x3A3BC4u) {
        ctx->pc = 0x3A3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BC0u;
        // 0x3a3bc4: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3BC8u;
        goto label_3a3bc8;
    }
    ctx->pc = 0x3A3BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A3BC8u);
        ctx->pc = 0x3A3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BC0u;
        // 0x3a3bc4: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3BC0u, 0x3A3BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A3BC8u;
label_3a3bc8:
    // 0x3a3bc8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3a3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3a3bcc:
    // 0x3a3bcc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x3a3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_3a3bd0:
    // 0x3a3bd0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a3bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_3a3bd4:
    // 0x3a3bd4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3a3bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_3a3bd8:
    // 0x3a3bd8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a3bdc:
    // 0x3a3bdc: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x3a3bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
label_3a3be0:
    // 0x3a3be0: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3a3be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3a3be4:
    // 0x3a3be4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3a3be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_3a3be8:
    // 0x3a3be8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a3be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a3bec:
    // 0x3a3bec: 0x54440030  bnel        $v0, $a0, . + 4 + (0x30 << 2)
label_3a3bf0:
    if (ctx->pc == 0x3A3BF0u) {
        ctx->pc = 0x3A3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BECu;
        // 0x3a3bf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3BF4u;
        goto label_3a3bf4;
    }
    ctx->pc = 0x3A3BECu;
    {
        const bool branch_taken_0x3a3bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3a3bec) {
            ctx->pc = 0x3A3BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3BECu;
            // 0x3a3bf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3CB0u;
            goto label_3a3cb0;
        }
    }
    ctx->pc = 0x3A3BF4u;
label_3a3bf4:
    // 0x3a3bf4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a3bf8:
    // 0x3a3bf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a3bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3bfc:
    // 0x3a3bfc: 0x8c431e6c  lw          $v1, 0x1E6C($v0)
    ctx->pc = 0x3a3bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7788)));
label_3a3c00:
    // 0x3a3c00: 0x5464002b  bnel        $v1, $a0, . + 4 + (0x2B << 2)
label_3a3c04:
    if (ctx->pc == 0x3A3C04u) {
        ctx->pc = 0x3A3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C00u;
        // 0x3a3c04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3C08u;
        goto label_3a3c08;
    }
    ctx->pc = 0x3A3C00u;
    {
        const bool branch_taken_0x3a3c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3a3c00) {
            ctx->pc = 0x3A3C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3C00u;
            // 0x3a3c04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3CB0u;
            goto label_3a3cb0;
        }
    }
    ctx->pc = 0x3A3C08u;
label_3a3c08:
    // 0x3a3c08: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x3a3c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a3c0c:
    // 0x3a3c0c: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x3a3c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_3a3c10:
    // 0x3a3c10: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x3a3c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3a3c14:
    // 0x3a3c14: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3a3c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3a3c18:
    // 0x3a3c18: 0x40f809  jalr        $v0
label_3a3c1c:
    if (ctx->pc == 0x3A3C1Cu) {
        ctx->pc = 0x3A3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C18u;
        // 0x3a3c1c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3C20u;
        goto label_3a3c20;
    }
    ctx->pc = 0x3A3C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A3C20u);
        ctx->pc = 0x3A3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C18u;
        // 0x3a3c1c: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3C18u, 0x3A3C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A3C20u;
label_3a3c20:
    // 0x3a3c20: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3a3c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a3c24:
    // 0x3a3c24: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3a3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3a3c28:
    // 0x3a3c28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a3c2c:
    // 0x3a3c2c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3a3c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a3c30:
    // 0x3a3c30: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3a3c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_3a3c34:
    // 0x3a3c34: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x3a3c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_3a3c38:
    // 0x3a3c38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a3c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a3c3c:
    // 0x3a3c3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a3c40:
    // 0x3a3c40: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3a3c44:
    // 0x3a3c44: 0xc0f2878  jal         func_3CA1E0
label_3a3c48:
    if (ctx->pc == 0x3A3C48u) {
        ctx->pc = 0x3A3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C44u;
        // 0x3a3c48: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3C4Cu;
        goto label_3a3c4c;
    }
    ctx->pc = 0x3A3C44u;
    SET_GPR_U32(ctx, 31, 0x3A3C4Cu);
    ctx->pc = 0x3A3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C44u;
    // 0x3a3c48: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA1E0u, 0x3A3C44u, 0x3A3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C4Cu;
label_3a3c4c:
    // 0x3a3c4c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3a3c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a3c50:
    // 0x3a3c50: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a3c54:
    // 0x3a3c54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a3c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a3c58:
    // 0x3a3c58: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a3c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3a3c5c:
    // 0x3a3c5c: 0xc0f28c4  jal         func_3CA310
label_3a3c60:
    if (ctx->pc == 0x3A3C60u) {
        ctx->pc = 0x3A3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C5Cu;
        // 0x3a3c60: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3C64u;
        goto label_3a3c64;
    }
    ctx->pc = 0x3A3C5Cu;
    SET_GPR_U32(ctx, 31, 0x3A3C64u);
    ctx->pc = 0x3A3C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C5Cu;
    // 0x3a3c60: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA310u, 0x3A3C5Cu, 0x3A3C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C64u;
label_3a3c64:
    // 0x3a3c64: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3a3c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a3c68:
    // 0x3a3c68: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3a3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_3a3c6c:
    // 0x3a3c6c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3a3c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3a3c70:
    // 0x3a3c70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a3c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3a3c74:
    // 0x3a3c74: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x3a3c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3a3c78:
    // 0x3a3c78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a3c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3a3c7c:
    // 0x3a3c7c: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x3a3c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
label_3a3c80:
    // 0x3a3c80: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x3a3c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_3a3c84:
    // 0x3a3c84: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x3a3c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
label_3a3c88:
    // 0x3a3c88: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x3a3c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_3a3c8c:
    // 0x3a3c8c: 0x0  nop
    ctx->pc = 0x3a3c8cu;
    // NOP
label_3a3c90:
    // 0x3a3c90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a3c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a3c94:
    // 0x3a3c94: 0xc0f2758  jal         func_3C9D60
label_3a3c98:
    if (ctx->pc == 0x3A3C98u) {
        ctx->pc = 0x3A3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C94u;
        // 0x3a3c98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3C9Cu;
        goto label_3a3c9c;
    }
    ctx->pc = 0x3A3C94u;
    SET_GPR_U32(ctx, 31, 0x3A3C9Cu);
    ctx->pc = 0x3A3C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C94u;
    // 0x3a3c98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9D60u, 0x3A3C94u, 0x3A3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C9Cu;
label_3a3c9c:
    // 0x3a3c9c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
label_3a3ca0:
    if (ctx->pc == 0x3A3CA0u) {
        ctx->pc = 0x3A3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C9Cu;
        // 0x3a3ca0: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3CA4u;
        goto label_3a3ca4;
    }
    ctx->pc = 0x3A3C9Cu;
    {
        const bool branch_taken_0x3a3c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C9Cu;
        // 0x3a3ca0: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c9c) {
            ctx->pc = 0x3A3C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3c90;
        }
    }
    ctx->pc = 0x3A3CA4u;
label_3a3ca4:
    // 0x3a3ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a3ca8:
    // 0x3a3ca8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3a3ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a3cac:
    // 0x3a3cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a3cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3cb0:
    // 0x3a3cb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a3cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a3cb4:
    // 0x3a3cb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a3cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3cb8:
    // 0x3a3cb8: 0x3e00008  jr          $ra
label_3a3cbc:
    if (ctx->pc == 0x3A3CBCu) {
        ctx->pc = 0x3A3CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CB8u;
        // 0x3a3cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3CC0u;
        goto label_fallthrough_0x3a3cb8;
    }
    ctx->pc = 0x3A3CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CB8u;
        // 0x3a3cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a3cb8:
    ctx->pc = 0x3A3CC0u;
}
