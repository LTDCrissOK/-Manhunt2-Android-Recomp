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

// Function: sub_002ABDF0
// Address: 0x2abdf0 - 0x2abe98
void sub_002ABDF0_0x2abdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABDF0_0x2abdf0");
#endif

    switch (ctx->pc) {
        case 0x2abe34u: goto label_2abe34;
        case 0x2abe3cu: goto label_2abe3c;
        case 0x2abe58u: goto label_2abe58;
        default: break;
    }

    ctx->pc = 0x2abdf0u;

    // 0x2abdf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2abdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2abdf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2abdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2abdf8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2abdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2abdfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2abdfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abe00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2abe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2abe04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2abe04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abe08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2abe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2abe0c: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x2ABE0Cu;
    {
        const bool branch_taken_0x2abe0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE0Cu;
        // 0x2abe10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe0c) {
            ctx->pc = 0x2ABE80u;
            goto label_2abe80;
        }
    }
    ctx->pc = 0x2ABE14u;
    // 0x2abe14: 0x9622004c  lhu         $v0, 0x4C($s1)
    ctx->pc = 0x2abe14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2abe18: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABE18u;
    {
        const bool branch_taken_0x2abe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abe18) {
            ctx->pc = 0x2ABE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABE18u;
            // 0x2abe1c: 0x9630004c  lhu         $s0, 0x4C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABE2Cu;
            goto label_2abe2c;
        }
    }
    ctx->pc = 0x2ABE20u;
    // 0x2abe20: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2abe20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2abe24: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2ABE24u;
    {
        const bool branch_taken_0x2abe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE24u;
        // 0x2abe28: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe24) {
            ctx->pc = 0x2ABE80u;
            goto label_2abe80;
        }
    }
    ctx->pc = 0x2ABE2Cu;
label_2abe2c:
    // 0x2abe2c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2ABE2Cu;
    SET_GPR_U32(ctx, 31, 0x2ABE34u);
    ctx->pc = 0x2ABE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABE2Cu;
    // 0x2abe30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2ABE2Cu, 0x2ABE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABE34u;
label_2abe34:
    // 0x2abe34: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABE34u;
    {
        const bool branch_taken_0x2abe34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2abe34) {
            ctx->pc = 0x2ABE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABE34u;
            // 0x2abe38: 0x9622004c  lhu         $v0, 0x4C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABE44u;
            goto label_2abe44;
        }
    }
    ctx->pc = 0x2ABE3Cu;
label_2abe3c:
    // 0x2abe3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2ABE3Cu;
    {
        const bool branch_taken_0x2abe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE3Cu;
        // 0x2abe40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe3c) {
            ctx->pc = 0x2ABE80u;
            goto label_2abe80;
        }
    }
    ctx->pc = 0x2ABE44u;
label_2abe44:
    // 0x2abe44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2ABE44u;
    {
        const bool branch_taken_0x2abe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE44u;
        // 0x2abe48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe44) {
            ctx->pc = 0x2ABE7Cu;
            goto label_2abe7c;
        }
    }
    ctx->pc = 0x2ABE4Cu;
    // 0x2abe4c: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x2abe4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2abe50: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2abe50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abe54: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x2abe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_2abe58:
    // 0x2abe58: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x2abe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2abe5c: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x2abe5cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2abe60: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2abe60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2abe64: 0x14a2fff5  bne         $a1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2ABE64u;
    {
        const bool branch_taken_0x2abe64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ABE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE64u;
        // 0x2abe68: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe64) {
            ctx->pc = 0x2ABE3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2abe3c;
        }
    }
    ctx->pc = 0x2ABE6Cu;
    // 0x2abe6c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2abe6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2abe70: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x2abe70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2abe74: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2ABE74u;
    {
        const bool branch_taken_0x2abe74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE74u;
        // 0x2abe78: 0x2461821  addu        $v1, $s2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abe74) {
            ctx->pc = 0x2ABE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2abe58;
        }
    }
    ctx->pc = 0x2ABE7Cu;
label_2abe7c:
    // 0x2abe7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2abe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2abe80:
    // 0x2abe80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2abe80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abe84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2abe84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2abe88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2abe88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abe8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2abe8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2abe90: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABE90u;
        // 0x2abe94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABE98u;
}
