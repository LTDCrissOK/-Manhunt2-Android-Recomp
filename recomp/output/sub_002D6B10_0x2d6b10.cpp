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

// Function: sub_002D6B10
// Address: 0x2d6b10 - 0x2d6b98
void sub_002D6B10_0x2d6b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6B10_0x2d6b10");
#endif

    switch (ctx->pc) {
        case 0x2d6b10u: goto label_2d6b10;
        case 0x2d6b14u: goto label_2d6b14;
        case 0x2d6b18u: goto label_2d6b18;
        case 0x2d6b1cu: goto label_2d6b1c;
        case 0x2d6b20u: goto label_2d6b20;
        case 0x2d6b24u: goto label_2d6b24;
        case 0x2d6b28u: goto label_2d6b28;
        case 0x2d6b2cu: goto label_2d6b2c;
        case 0x2d6b30u: goto label_2d6b30;
        case 0x2d6b34u: goto label_2d6b34;
        case 0x2d6b38u: goto label_2d6b38;
        case 0x2d6b3cu: goto label_2d6b3c;
        case 0x2d6b40u: goto label_2d6b40;
        case 0x2d6b44u: goto label_2d6b44;
        case 0x2d6b48u: goto label_2d6b48;
        case 0x2d6b4cu: goto label_2d6b4c;
        case 0x2d6b50u: goto label_2d6b50;
        case 0x2d6b54u: goto label_2d6b54;
        case 0x2d6b58u: goto label_2d6b58;
        case 0x2d6b5cu: goto label_2d6b5c;
        case 0x2d6b60u: goto label_2d6b60;
        case 0x2d6b64u: goto label_2d6b64;
        case 0x2d6b68u: goto label_2d6b68;
        case 0x2d6b6cu: goto label_2d6b6c;
        case 0x2d6b70u: goto label_2d6b70;
        case 0x2d6b74u: goto label_2d6b74;
        case 0x2d6b78u: goto label_2d6b78;
        case 0x2d6b7cu: goto label_2d6b7c;
        case 0x2d6b80u: goto label_2d6b80;
        case 0x2d6b84u: goto label_2d6b84;
        case 0x2d6b88u: goto label_2d6b88;
        case 0x2d6b8cu: goto label_2d6b8c;
        case 0x2d6b90u: goto label_2d6b90;
        case 0x2d6b94u: goto label_2d6b94;
        default: break;
    }

    ctx->pc = 0x2d6b10u;

label_2d6b10:
    // 0x2d6b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d6b14:
    // 0x2d6b14: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_2d6b18:
    // 0x2d6b18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d6b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d6b1c:
    // 0x2d6b1c: 0x24423e08  addiu       $v0, $v0, 0x3E08
    ctx->pc = 0x2d6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15880));
label_2d6b20:
    // 0x2d6b20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d6b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d6b24:
    // 0x2d6b24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d6b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d6b28:
    // 0x2d6b28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d6b2c:
    // 0x2d6b2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d6b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d6b30:
    // 0x2d6b30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d6b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2d6b34:
    // 0x2d6b34: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2d6b38:
    if (ctx->pc == 0x2D6B38u) {
        ctx->pc = 0x2D6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B34u;
        // 0x2d6b38: 0xae220af0  sw          $v0, 0xAF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B3Cu;
        goto label_2d6b3c;
    }
    ctx->pc = 0x2D6B34u;
    {
        const bool branch_taken_0x2d6b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B34u;
        // 0x2d6b38: 0xae220af0  sw          $v0, 0xAF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b34) {
            ctx->pc = 0x2D6B6Cu;
            goto label_2d6b6c;
        }
    }
    ctx->pc = 0x2D6B3Cu;
label_2d6b3c:
    // 0x2d6b3c: 0x2630002c  addiu       $s0, $s1, 0x2C
    ctx->pc = 0x2d6b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_2d6b40:
    // 0x2d6b40: 0x1230000b  beq         $s1, $s0, . + 4 + (0xB << 2)
label_2d6b44:
    if (ctx->pc == 0x2D6B44u) {
        ctx->pc = 0x2D6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B40u;
        // 0x2d6b44: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B48u;
        goto label_2d6b48;
    }
    ctx->pc = 0x2D6B40u;
    {
        const bool branch_taken_0x2d6b40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D6B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B40u;
        // 0x2d6b44: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b40) {
            ctx->pc = 0x2D6B70u;
            goto label_2d6b70;
        }
    }
    ctx->pc = 0x2D6B48u;
label_2d6b48:
    // 0x2d6b48: 0x2610ffd4  addiu       $s0, $s0, -0x2C
    ctx->pc = 0x2d6b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967252));
label_2d6b4c:
    // 0x2d6b4c: 0x0  nop
    ctx->pc = 0x2d6b4cu;
    // NOP
label_2d6b50:
    // 0x2d6b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d6b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6b54:
    // 0x2d6b54: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2d6b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2d6b58:
    // 0x2d6b58: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2d6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2d6b5c:
    // 0x2d6b5c: 0x40f809  jalr        $v0
label_2d6b60:
    if (ctx->pc == 0x2D6B60u) {
        ctx->pc = 0x2D6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B5Cu;
        // 0x2d6b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B64u;
        goto label_2d6b64;
    }
    ctx->pc = 0x2D6B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6B64u);
        ctx->pc = 0x2D6B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B5Cu;
        // 0x2d6b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6B5Cu, 0x2D6B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6B64u;
label_2d6b64:
    // 0x2d6b64: 0x1630fffa  bne         $s1, $s0, . + 4 + (-0x6 << 2)
label_2d6b68:
    if (ctx->pc == 0x2D6B68u) {
        ctx->pc = 0x2D6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B64u;
        // 0x2d6b68: 0x2610ffd4  addiu       $s0, $s0, -0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B6Cu;
        goto label_2d6b6c;
    }
    ctx->pc = 0x2D6B64u;
    {
        const bool branch_taken_0x2d6b64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B64u;
        // 0x2d6b68: 0x2610ffd4  addiu       $s0, $s0, -0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b64) {
            ctx->pc = 0x2D6B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6b50;
        }
    }
    ctx->pc = 0x2D6B6Cu;
label_2d6b6c:
    // 0x2d6b6c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x2d6b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2d6b70:
    // 0x2d6b70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2d6b74:
    if (ctx->pc == 0x2D6B74u) {
        ctx->pc = 0x2D6B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B70u;
        // 0x2d6b74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B78u;
        goto label_2d6b78;
    }
    ctx->pc = 0x2D6B70u;
    {
        const bool branch_taken_0x2d6b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B70u;
        // 0x2d6b74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6b70) {
            ctx->pc = 0x2D6B84u;
            goto label_2d6b84;
        }
    }
    ctx->pc = 0x2D6B78u;
label_2d6b78:
    // 0x2d6b78: 0xc0f5222  jal         func_3D4888
label_2d6b7c:
    if (ctx->pc == 0x2D6B7Cu) {
        ctx->pc = 0x2D6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B78u;
        // 0x2d6b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B80u;
        goto label_2d6b80;
    }
    ctx->pc = 0x2D6B78u;
    SET_GPR_U32(ctx, 31, 0x2D6B80u);
    ctx->pc = 0x2D6B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6B78u;
    // 0x2d6b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D6B78u, 0x2D6B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6B80u;
label_2d6b80:
    // 0x2d6b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6b84:
    // 0x2d6b84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d6b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d6b88:
    // 0x2d6b88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d6b88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6b8c:
    // 0x2d6b8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d6b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d6b90:
    // 0x2d6b90: 0x3e00008  jr          $ra
label_2d6b94:
    if (ctx->pc == 0x2D6B94u) {
        ctx->pc = 0x2D6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B90u;
        // 0x2d6b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6B98u;
        goto label_fallthrough_0x2d6b90;
    }
    ctx->pc = 0x2D6B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B90u;
        // 0x2d6b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d6b90:
    ctx->pc = 0x2D6B98u;
}
