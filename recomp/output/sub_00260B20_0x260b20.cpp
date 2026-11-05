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

// Function: sub_00260B20
// Address: 0x260b20 - 0x260b90
void sub_00260B20_0x260b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260B20_0x260b20");
#endif

    switch (ctx->pc) {
        case 0x260b20u: goto label_260b20;
        case 0x260b24u: goto label_260b24;
        case 0x260b28u: goto label_260b28;
        case 0x260b2cu: goto label_260b2c;
        case 0x260b30u: goto label_260b30;
        case 0x260b34u: goto label_260b34;
        case 0x260b38u: goto label_260b38;
        case 0x260b3cu: goto label_260b3c;
        case 0x260b40u: goto label_260b40;
        case 0x260b44u: goto label_260b44;
        case 0x260b48u: goto label_260b48;
        case 0x260b4cu: goto label_260b4c;
        case 0x260b50u: goto label_260b50;
        case 0x260b54u: goto label_260b54;
        case 0x260b58u: goto label_260b58;
        case 0x260b5cu: goto label_260b5c;
        case 0x260b60u: goto label_260b60;
        case 0x260b64u: goto label_260b64;
        case 0x260b68u: goto label_260b68;
        case 0x260b6cu: goto label_260b6c;
        case 0x260b70u: goto label_260b70;
        case 0x260b74u: goto label_260b74;
        case 0x260b78u: goto label_260b78;
        case 0x260b7cu: goto label_260b7c;
        case 0x260b80u: goto label_260b80;
        case 0x260b84u: goto label_260b84;
        case 0x260b88u: goto label_260b88;
        case 0x260b8cu: goto label_260b8c;
        default: break;
    }

    ctx->pc = 0x260b20u;

label_260b20:
    // 0x260b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_260b24:
    // 0x260b24: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x260b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_260b28:
    // 0x260b28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_260b2c:
    // 0x260b2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x260b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_260b30:
    // 0x260b30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260b34:
    // 0x260b34: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x260b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_260b38:
    // 0x260b38: 0x8c640220  lw          $a0, 0x220($v1)
    ctx->pc = 0x260b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
label_260b3c:
    // 0x260b3c: 0x54820010  bnel        $a0, $v0, . + 4 + (0x10 << 2)
label_260b40:
    if (ctx->pc == 0x260B40u) {
        ctx->pc = 0x260B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B3Cu;
        // 0x260b40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B44u;
        goto label_260b44;
    }
    ctx->pc = 0x260B3Cu;
    {
        const bool branch_taken_0x260b3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x260b3c) {
            ctx->pc = 0x260B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260B3Cu;
            // 0x260b40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260B80u;
            goto label_260b80;
        }
    }
    ctx->pc = 0x260B44u;
label_260b44:
    // 0x260b44: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x260b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_260b48:
    // 0x260b48: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x260b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_260b4c:
    // 0x260b4c: 0x60f809  jalr        $v1
label_260b50:
    if (ctx->pc == 0x260B50u) {
        ctx->pc = 0x260B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B4Cu;
        // 0x260b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B54u;
        goto label_260b54;
    }
    ctx->pc = 0x260B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x260B54u);
        ctx->pc = 0x260B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B4Cu;
        // 0x260b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260B4Cu, 0x260B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260B54u;
label_260b54:
    // 0x260b54: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x260b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_260b58:
    // 0x260b58: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_260b5c:
    if (ctx->pc == 0x260B5Cu) {
        ctx->pc = 0x260B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B58u;
        // 0x260b5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B60u;
        goto label_260b60;
    }
    ctx->pc = 0x260B58u;
    {
        const bool branch_taken_0x260b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260b58) {
            ctx->pc = 0x260B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260B58u;
            // 0x260b5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260B80u;
            goto label_260b80;
        }
    }
    ctx->pc = 0x260B60u;
label_260b60:
    // 0x260b60: 0xc0c3158  jal         func_30C560
label_260b64:
    if (ctx->pc == 0x260B64u) {
        ctx->pc = 0x260B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B60u;
        // 0x260b64: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B68u;
        goto label_260b68;
    }
    ctx->pc = 0x260B60u;
    SET_GPR_U32(ctx, 31, 0x260B68u);
    ctx->pc = 0x260B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260B60u;
    // 0x260b64: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C560u, 0x260B60u, 0x260B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B68u;
label_260b68:
    // 0x260b68: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x260b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_260b6c:
    // 0x260b6c: 0xc0c49d2  jal         func_312748
label_260b70:
    if (ctx->pc == 0x260B70u) {
        ctx->pc = 0x260B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B6Cu;
        // 0x260b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B74u;
        goto label_260b74;
    }
    ctx->pc = 0x260B6Cu;
    SET_GPR_U32(ctx, 31, 0x260B74u);
    ctx->pc = 0x260B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260B6Cu;
    // 0x260b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312748u, 0x260B6Cu, 0x260B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B74u;
label_260b74:
    // 0x260b74: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x260b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_260b78:
    // 0x260b78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x260b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_260b7c:
    // 0x260b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260b80:
    // 0x260b80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x260b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_260b84:
    // 0x260b84: 0x3e00008  jr          $ra
label_260b88:
    if (ctx->pc == 0x260B88u) {
        ctx->pc = 0x260B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B84u;
        // 0x260b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260B8Cu;
        goto label_260b8c;
    }
    ctx->pc = 0x260B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B84u;
        // 0x260b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260B8Cu;
label_260b8c:
    // 0x260b8c: 0x0  nop
    ctx->pc = 0x260b8cu;
    // NOP
    ctx->pc = 0x260b90u;
}
