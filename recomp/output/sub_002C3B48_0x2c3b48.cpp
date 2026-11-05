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

// Function: sub_002C3B48
// Address: 0x2c3b48 - 0x2c3bc8
void sub_002C3B48_0x2c3b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3B48_0x2c3b48");
#endif

    switch (ctx->pc) {
        case 0x2c3b48u: goto label_2c3b48;
        case 0x2c3b4cu: goto label_2c3b4c;
        case 0x2c3b50u: goto label_2c3b50;
        case 0x2c3b54u: goto label_2c3b54;
        case 0x2c3b58u: goto label_2c3b58;
        case 0x2c3b5cu: goto label_2c3b5c;
        case 0x2c3b60u: goto label_2c3b60;
        case 0x2c3b64u: goto label_2c3b64;
        case 0x2c3b68u: goto label_2c3b68;
        case 0x2c3b6cu: goto label_2c3b6c;
        case 0x2c3b70u: goto label_2c3b70;
        case 0x2c3b74u: goto label_2c3b74;
        case 0x2c3b78u: goto label_2c3b78;
        case 0x2c3b7cu: goto label_2c3b7c;
        case 0x2c3b80u: goto label_2c3b80;
        case 0x2c3b84u: goto label_2c3b84;
        case 0x2c3b88u: goto label_2c3b88;
        case 0x2c3b8cu: goto label_2c3b8c;
        case 0x2c3b90u: goto label_2c3b90;
        case 0x2c3b94u: goto label_2c3b94;
        case 0x2c3b98u: goto label_2c3b98;
        case 0x2c3b9cu: goto label_2c3b9c;
        case 0x2c3ba0u: goto label_2c3ba0;
        case 0x2c3ba4u: goto label_2c3ba4;
        case 0x2c3ba8u: goto label_2c3ba8;
        case 0x2c3bacu: goto label_2c3bac;
        case 0x2c3bb0u: goto label_2c3bb0;
        case 0x2c3bb4u: goto label_2c3bb4;
        case 0x2c3bb8u: goto label_2c3bb8;
        case 0x2c3bbcu: goto label_2c3bbc;
        case 0x2c3bc0u: goto label_2c3bc0;
        case 0x2c3bc4u: goto label_2c3bc4;
        default: break;
    }

    ctx->pc = 0x2c3b48u;

label_2c3b48:
    // 0x2c3b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c3b4c:
    // 0x2c3b4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3b50:
    // 0x2c3b50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c3b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c3b54:
    // 0x2c3b54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c3b58:
    // 0x2c3b58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3b5c:
    // 0x2c3b5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c3b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c3b60:
    // 0x2c3b60: 0xa2220050  sb          $v0, 0x50($s1)
    ctx->pc = 0x2c3b60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
label_2c3b64:
    // 0x2c3b64: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2c3b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_2c3b68:
    // 0x2c3b68: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3b6c:
    // 0x2c3b6c: 0x80430018  lb          $v1, 0x18($v0)
    ctx->pc = 0x2c3b6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_2c3b70:
    // 0x2c3b70: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_2c3b74:
    if (ctx->pc == 0x2C3B74u) {
        ctx->pc = 0x2C3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B70u;
        // 0x2c3b74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B78u;
        goto label_2c3b78;
    }
    ctx->pc = 0x2C3B70u;
    {
        const bool branch_taken_0x2c3b70 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B70u;
        // 0x2c3b74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b70) {
            ctx->pc = 0x2C3BB0u;
            goto label_2c3bb0;
        }
    }
    ctx->pc = 0x2C3B78u;
label_2c3b78:
    // 0x2c3b78: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2c3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2c3b7c:
    // 0x2c3b7c: 0x0  nop
    ctx->pc = 0x2c3b7cu;
    // NOP
label_2c3b80:
    // 0x2c3b80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2c3b84:
    // 0x2c3b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c3b88:
    // 0x2c3b88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c3b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c3b8c:
    // 0x2c3b8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c3b90:
    // 0x2c3b90: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2c3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2c3b94:
    // 0x2c3b94: 0x40f809  jalr        $v0
label_2c3b98:
    if (ctx->pc == 0x2C3B98u) {
        ctx->pc = 0x2C3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B94u;
        // 0x2c3b98: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B9Cu;
        goto label_2c3b9c;
    }
    ctx->pc = 0x2C3B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3B9Cu);
        ctx->pc = 0x2C3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B94u;
        // 0x2c3b98: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3B94u, 0x2C3B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3B9Cu;
label_2c3b9c:
    // 0x2c3b9c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c3b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3ba0:
    // 0x2c3ba0: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x2c3ba0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2c3ba4:
    // 0x2c3ba4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c3ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c3ba8:
    // 0x2c3ba8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_2c3bac:
    if (ctx->pc == 0x2C3BACu) {
        ctx->pc = 0x2C3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BA8u;
        // 0x2c3bac: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3BB0u;
        goto label_2c3bb0;
    }
    ctx->pc = 0x2C3BA8u;
    {
        const bool branch_taken_0x2c3ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ba8) {
            ctx->pc = 0x2C3BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3BA8u;
            // 0x2c3bac: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3b80;
        }
    }
    ctx->pc = 0x2C3BB0u;
label_2c3bb0:
    // 0x2c3bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3bb4:
    // 0x2c3bb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c3bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c3bb8:
    // 0x2c3bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c3bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3bbc:
    // 0x2c3bbc: 0x3e00008  jr          $ra
label_2c3bc0:
    if (ctx->pc == 0x2C3BC0u) {
        ctx->pc = 0x2C3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BBCu;
        // 0x2c3bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3BC4u;
        goto label_2c3bc4;
    }
    ctx->pc = 0x2C3BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BBCu;
        // 0x2c3bc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3BC4u;
label_2c3bc4:
    // 0x2c3bc4: 0x0  nop
    ctx->pc = 0x2c3bc4u;
    // NOP
    ctx->pc = 0x2c3bc8u;
}
