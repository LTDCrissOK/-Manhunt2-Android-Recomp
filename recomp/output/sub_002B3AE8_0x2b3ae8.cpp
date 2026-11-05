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

// Function: sub_002B3AE8
// Address: 0x2b3ae8 - 0x2b3b90
void sub_002B3AE8_0x2b3ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3AE8_0x2b3ae8");
#endif

    switch (ctx->pc) {
        case 0x2b3b10u: goto label_2b3b10;
        case 0x2b3b20u: goto label_2b3b20;
        default: break;
    }

    ctx->pc = 0x2b3ae8u;

    // 0x2b3ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3aec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b3aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3af0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b3af4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2b3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2b3af8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b3af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b3afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b3b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b3b08: 0xc0eefa4  jal         func_3BBE90
    ctx->pc = 0x2B3B08u;
    SET_GPR_U32(ctx, 31, 0x2B3B10u);
    ctx->pc = 0x2B3B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B08u;
    // 0x2b3b0c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBE90u, 0x2B3B08u, 0x2B3B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B10u;
label_2b3b10:
    // 0x2b3b10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b3b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b3b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b18: 0xc0ef0b2  jal         func_3BC2C8
    ctx->pc = 0x2B3B18u;
    SET_GPR_U32(ctx, 31, 0x2B3B20u);
    ctx->pc = 0x2B3B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B18u;
    // 0x2b3b1c: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B3B18u, 0x2B3B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B20u;
label_2b3b20:
    // 0x2b3b20: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2b3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b3b24: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3B24u;
    {
        const bool branch_taken_0x2b3b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B24u;
        // 0x2b3b28: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b24) {
            ctx->pc = 0x2B3B38u;
            goto label_2b3b38;
        }
    }
    ctx->pc = 0x2B3B2Cu;
    // 0x2b3b2c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b3b30: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B3B30u;
    {
        const bool branch_taken_0x2b3b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B30u;
        // 0x2b3b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b30) {
            ctx->pc = 0x2B3B7Cu;
            goto label_2b3b7c;
        }
    }
    ctx->pc = 0x2B3B38u;
label_2b3b38:
    // 0x2b3b38: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3B38u;
    {
        const bool branch_taken_0x2b3b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B38u;
        // 0x2b3b3c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b38) {
            ctx->pc = 0x2B3B4Cu;
            goto label_2b3b4c;
        }
    }
    ctx->pc = 0x2B3B40u;
    // 0x2b3b40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3b44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B3B44u;
    {
        const bool branch_taken_0x2b3b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B44u;
        // 0x2b3b48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b44) {
            ctx->pc = 0x2B3B78u;
            goto label_2b3b78;
        }
    }
    ctx->pc = 0x2B3B4Cu;
label_2b3b4c:
    // 0x2b3b4c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3B4Cu;
    {
        const bool branch_taken_0x2b3b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B4Cu;
        // 0x2b3b50: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b4c) {
            ctx->pc = 0x2B3B60u;
            goto label_2b3b60;
        }
    }
    ctx->pc = 0x2B3B54u;
    // 0x2b3b54: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2b3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b3b58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3B58u;
    {
        const bool branch_taken_0x2b3b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B58u;
        // 0x2b3b5c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b58) {
            ctx->pc = 0x2B3B78u;
            goto label_2b3b78;
        }
    }
    ctx->pc = 0x2B3B60u;
label_2b3b60:
    // 0x2b3b60: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3B60u;
    {
        const bool branch_taken_0x2b3b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B60u;
        // 0x2b3b64: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b60) {
            ctx->pc = 0x2B3B70u;
            goto label_2b3b70;
        }
    }
    ctx->pc = 0x2B3B68u;
    // 0x2b3b68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3B68u;
    {
        const bool branch_taken_0x2b3b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B68u;
        // 0x2b3b6c: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b68) {
            ctx->pc = 0x2B3B7Cu;
            goto label_2b3b7c;
        }
    }
    ctx->pc = 0x2B3B70u;
label_2b3b70:
    // 0x2b3b70: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2b3b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b3b74: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2b3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b3b78:
    // 0x2b3b78: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2b3b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2b3b7c:
    // 0x2b3b7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b3b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3b80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b3b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3b84: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B84u;
        // 0x2b3b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3B8Cu;
    // 0x2b3b8c: 0x0  nop
    ctx->pc = 0x2b3b8cu;
    // NOP
    ctx->pc = 0x2b3b90u;
}
