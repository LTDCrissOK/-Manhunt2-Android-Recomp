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

// Function: sub_001F6A80
// Address: 0x1f6a80 - 0x1f6b70
void sub_001F6A80_0x1f6a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6A80_0x1f6a80");
#endif

    switch (ctx->pc) {
        case 0x1f6ac8u: goto label_1f6ac8;
        case 0x1f6af8u: goto label_1f6af8;
        case 0x1f6b58u: goto label_1f6b58;
        default: break;
    }

    ctx->pc = 0x1f6a80u;

    // 0x1f6a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6a84: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1f6a84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6a8c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1f6a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f6a90: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F6A90u;
    {
        const bool branch_taken_0x1f6a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A90u;
        // 0x1f6a94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a90) {
            ctx->pc = 0x1F6B60u;
            goto label_1f6b60;
        }
    }
    ctx->pc = 0x1F6A98u;
    // 0x1f6a98: 0x10c00032  beqz        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F6A98u;
    {
        const bool branch_taken_0x1f6a98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A98u;
        // 0x1f6a9c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a98) {
            ctx->pc = 0x1F6B64u;
            goto label_1f6b64;
        }
    }
    ctx->pc = 0x1F6AA0u;
    // 0x1f6aa0: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x1f6aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f6aa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6AA4u;
    {
        const bool branch_taken_0x1f6aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6AA4u;
        // 0x1f6aa8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6aa4) {
            ctx->pc = 0x1F6AB4u;
            goto label_1f6ab4;
        }
    }
    ctx->pc = 0x1F6AACu;
    // 0x1f6aac: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1F6AACu;
    {
        const bool branch_taken_0x1f6aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6AACu;
        // 0x1f6ab0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6aac) {
            ctx->pc = 0x1F6B64u;
            goto label_1f6b64;
        }
    }
    ctx->pc = 0x1F6AB4u;
label_1f6ab4:
    // 0x1f6ab4: 0x25074fb8  addiu       $a3, $t0, 0x4FB8
    ctx->pc = 0x1f6ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 20408));
    // 0x1f6ab8: 0x25034f98  addiu       $v1, $t0, 0x4F98
    ctx->pc = 0x1f6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 20376));
    // 0x1f6abc: 0x250a4fa0  addiu       $t2, $t0, 0x4FA0
    ctx->pc = 0x1f6abcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 20384));
    // 0x1f6ac0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f6ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ac4: 0x0  nop
    ctx->pc = 0x1f6ac4u;
    // NOP
label_1f6ac8:
    // 0x1f6ac8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6acc: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F6ACCu;
    {
        const bool branch_taken_0x1f6acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6acc) {
            ctx->pc = 0x1F6AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6ACCu;
            // 0x1f6ad0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6B3Cu;
            goto label_1f6b3c;
        }
    }
    ctx->pc = 0x1F6AD4u;
    // 0x1f6ad4: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x1f6ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x1f6ad8: 0xace5ffd8  sw          $a1, -0x28($a3)
    ctx->pc = 0x1f6ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967256), GPR_U32(ctx, 5));
    // 0x1f6adc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1f6adcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ae0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1f6ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ae4: 0xace6ffdc  sw          $a2, -0x24($a3)
    ctx->pc = 0x1f6ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967260), GPR_U32(ctx, 6));
    // 0x1f6ae8: 0xace0ffe4  sw          $zero, -0x1C($a3)
    ctx->pc = 0x1f6ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967268), GPR_U32(ctx, 0));
    // 0x1f6aec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f6aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6af0: 0x250a7718  addiu       $t2, $t0, 0x7718
    ctx->pc = 0x1f6af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 30488));
    // 0x1f6af4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1f6af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1f6af8:
    // 0x1f6af8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1f6af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f6afc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1f6afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f6b00: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1f6b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1f6b04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f6b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f6b08: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f6b0c: 0x2c830004  sltiu       $v1, $a0, 0x4
    ctx->pc = 0x1f6b0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f6b10: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F6B10u;
    {
        const bool branch_taken_0x1f6b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B10u;
        // 0x1f6b14: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b10) {
            ctx->pc = 0x1F6AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6af8;
        }
    }
    ctx->pc = 0x1F6B18u;
    // 0x1f6b18: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x1f6b18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6b1c: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x1f6b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b20: 0x8d047ab0  lw          $a0, 0x7AB0($t0)
    ctx->pc = 0x1f6b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31408)));
    // 0x1f6b24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f6b28: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1f6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1f6b2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f6b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f6b30: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x1f6b30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x1f6b34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F6B34u;
    {
        const bool branch_taken_0x1f6b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B34u;
        // 0x1f6b38: 0xad047ab0  sw          $a0, 0x7AB0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 31408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b34) {
            ctx->pc = 0x1F6B64u;
            goto label_1f6b64;
        }
    }
    ctx->pc = 0x1F6B3Cu;
label_1f6b3c:
    // 0x1f6b3c: 0x24e7002c  addiu       $a3, $a3, 0x2C
    ctx->pc = 0x1f6b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 44));
    // 0x1f6b40: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x1f6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x1f6b44: 0x2d6200e6  sltiu       $v0, $t3, 0xE6
    ctx->pc = 0x1f6b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)230) ? 1 : 0);
    // 0x1f6b48: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1F6B48u;
    {
        const bool branch_taken_0x1f6b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B48u;
        // 0x1f6b4c: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b48) {
            ctx->pc = 0x1F6AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6ac8;
        }
    }
    ctx->pc = 0x1F6B50u;
    // 0x1f6b50: 0xc07e63c  jal         func_1F98F0
    ctx->pc = 0x1F6B50u;
    SET_GPR_U32(ctx, 31, 0x1F6B58u);
    ctx->pc = 0x1F6B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6B50u;
    // 0x1f6b54: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F98F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98F0u, 0x1F6B50u, 0x1F6B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B58u;
label_1f6b58:
    // 0x1f6b58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6B58u;
    {
        const bool branch_taken_0x1f6b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B58u;
        // 0x1f6b5c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b58) {
            ctx->pc = 0x1F6B64u;
            goto label_1f6b64;
        }
    }
    ctx->pc = 0x1F6B60u;
label_1f6b60:
    // 0x1f6b60: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1f6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1f6b64:
    // 0x1f6b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B68u;
        // 0x1f6b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6B70u;
}
