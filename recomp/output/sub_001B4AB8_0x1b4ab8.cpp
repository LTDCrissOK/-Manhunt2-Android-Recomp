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

// Function: sub_001B4AB8
// Address: 0x1b4ab8 - 0x1b4d30
void sub_001B4AB8_0x1b4ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4AB8_0x1b4ab8");
#endif

    ctx->pc = 0x1b4ab8u;

    // 0x1b4ab8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1b4ab8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4abc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ac0: 0x8d220084  lw          $v0, 0x84($t1)
    ctx->pc = 0x1b4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 132)));
    // 0x1b4ac4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b4ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b4ac8: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1b4ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1b4acc: 0x8c650338  lw          $a1, 0x338($v1)
    ctx->pc = 0x1b4accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 824)));
    // 0x1b4ad0: 0x8ca20088  lw          $v0, 0x88($a1)
    ctx->pc = 0x1b4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x1b4ad4: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4AD4u;
    {
        const bool branch_taken_0x1b4ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AD4u;
        // 0x1b4ad8: 0x8c670334  lw          $a3, 0x334($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ad4) {
            ctx->pc = 0x1B4AE4u;
            goto label_1b4ae4;
        }
    }
    ctx->pc = 0x1B4ADCu;
    // 0x1b4adc: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1b4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1b4ae0: 0x2846006f  slti        $a2, $v0, 0x6F
    ctx->pc = 0x1b4ae0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_1b4ae4:
    // 0x1b4ae4: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x1B4AE4u;
    {
        const bool branch_taken_0x1b4ae4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ae4) {
            ctx->pc = 0x1B4B24u;
            goto label_1b4b24;
        }
    }
    ctx->pc = 0x1B4AECu;
    // 0x1b4aec: 0x8ce20150  lw          $v0, 0x150($a3)
    ctx->pc = 0x1b4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x1b4af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4af4: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x1b4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
    // 0x1b4af8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b4af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b4afc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4AFCu;
    {
        const bool branch_taken_0x1b4afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AFCu;
        // 0x1b4b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4afc) {
            ctx->pc = 0x1B4B1Cu;
            goto label_1b4b1c;
        }
    }
    ctx->pc = 0x1B4B04u;
    // 0x1b4b04: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b4b08: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1b4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b4b0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4b10: 0x28430491  slti        $v1, $v0, 0x491
    ctx->pc = 0x1b4b10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1169) ? 1 : 0);
    // 0x1b4b14: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4B14u;
    {
        const bool branch_taken_0x1b4b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4b14) {
            ctx->pc = 0x1B4B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4B14u;
            // 0x1b4b18: 0x28460496  slti        $a2, $v0, 0x496 (Delay Slot)
            SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1174) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4B1Cu;
            goto label_1b4b1c;
        }
    }
    ctx->pc = 0x1B4B1Cu;
label_1b4b1c:
    // 0x1b4b1c: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4B1Cu;
    {
        const bool branch_taken_0x1b4b1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4b1c) {
            ctx->pc = 0x1B4B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4B1Cu;
            // 0x1b4b20: 0x8ca60088  lw          $a2, 0x88($a1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4B2Cu;
            goto label_1b4b2c;
        }
    }
    ctx->pc = 0x1B4B24u;
label_1b4b24:
    // 0x1b4b24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B24u;
        // 0x1b4b28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4B2Cu;
label_1b4b2c:
    // 0x1b4b2c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1b4b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b4b30: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4B30u;
    {
        const bool branch_taken_0x1b4b30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B30u;
        // 0x1b4b34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b30) {
            ctx->pc = 0x1B4B40u;
            goto label_1b4b40;
        }
    }
    ctx->pc = 0x1B4B38u;
    // 0x1b4b38: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1b4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1b4b3c: 0x28430083  slti        $v1, $v0, 0x83
    ctx->pc = 0x1b4b3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_1b4b40:
    // 0x1b4b40: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B4B40u;
    {
        const bool branch_taken_0x1b4b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B40u;
        // 0x1b4b44: 0x2482ffe3  addiu       $v0, $a0, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b40) {
            ctx->pc = 0x1B4B74u;
            goto label_1b4b74;
        }
    }
    ctx->pc = 0x1B4B48u;
    // 0x1b4b48: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b4b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b4b4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4B4Cu;
    {
        const bool branch_taken_0x1b4b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B4Cu;
        // 0x1b4b50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b4c) {
            ctx->pc = 0x1B4B6Cu;
            goto label_1b4b6c;
        }
    }
    ctx->pc = 0x1B4B54u;
    // 0x1b4b54: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b4b58: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1b4b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b4b5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4b60: 0x284304a5  slti        $v1, $v0, 0x4A5
    ctx->pc = 0x1b4b60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1189) ? 1 : 0);
    // 0x1b4b64: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4B64u;
    {
        const bool branch_taken_0x1b4b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4b64) {
            ctx->pc = 0x1B4B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4B64u;
            // 0x1b4b68: 0x284804aa  slti        $t0, $v0, 0x4AA (Delay Slot)
            SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1194) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4B6Cu;
            goto label_1b4b6c;
        }
    }
    ctx->pc = 0x1B4B6Cu;
label_1b4b6c:
    // 0x1b4b6c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4B6Cu;
    {
        const bool branch_taken_0x1b4b6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B6Cu;
        // 0x1b4b70: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b6c) {
            ctx->pc = 0x1B4B7Cu;
            goto label_1b4b7c;
        }
    }
    ctx->pc = 0x1B4B74u;
label_1b4b74:
    // 0x1b4b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B74u;
        // 0x1b4b78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4B7Cu;
label_1b4b7c:
    // 0x1b4b7c: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4B7Cu;
    {
        const bool branch_taken_0x1b4b7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B7Cu;
        // 0x1b4b80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b7c) {
            ctx->pc = 0x1B4B8Cu;
            goto label_1b4b8c;
        }
    }
    ctx->pc = 0x1B4B84u;
    // 0x1b4b84: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1b4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1b4b88: 0x28430097  slti        $v1, $v0, 0x97
    ctx->pc = 0x1b4b88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_1b4b8c:
    // 0x1b4b8c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B4B8Cu;
    {
        const bool branch_taken_0x1b4b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B8Cu;
        // 0x1b4b90: 0x2482ffe3  addiu       $v0, $a0, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b8c) {
            ctx->pc = 0x1B4BC0u;
            goto label_1b4bc0;
        }
    }
    ctx->pc = 0x1B4B94u;
    // 0x1b4b94: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b4b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b4b98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4B98u;
    {
        const bool branch_taken_0x1b4b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B98u;
        // 0x1b4b9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b98) {
            ctx->pc = 0x1B4BB8u;
            goto label_1b4bb8;
        }
    }
    ctx->pc = 0x1B4BA0u;
    // 0x1b4ba0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b4ba4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1b4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b4ba8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4bac: 0x284304b9  slti        $v1, $v0, 0x4B9
    ctx->pc = 0x1b4bacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1209) ? 1 : 0);
    // 0x1b4bb0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4BB0u;
    {
        const bool branch_taken_0x1b4bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4bb0) {
            ctx->pc = 0x1B4BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4BB0u;
            // 0x1b4bb4: 0x284804be  slti        $t0, $v0, 0x4BE (Delay Slot)
            SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1214) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4BB8u;
            goto label_1b4bb8;
        }
    }
    ctx->pc = 0x1B4BB8u;
label_1b4bb8:
    // 0x1b4bb8: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4BB8u;
    {
        const bool branch_taken_0x1b4bb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BB8u;
        // 0x1b4bbc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4bb8) {
            ctx->pc = 0x1B4BC8u;
            goto label_1b4bc8;
        }
    }
    ctx->pc = 0x1B4BC0u;
label_1b4bc0:
    // 0x1b4bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BC0u;
        // 0x1b4bc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4BC8u;
label_1b4bc8:
    // 0x1b4bc8: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4BC8u;
    {
        const bool branch_taken_0x1b4bc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BC8u;
        // 0x1b4bcc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4bc8) {
            ctx->pc = 0x1B4BDCu;
            goto label_1b4bdc;
        }
    }
    ctx->pc = 0x1B4BD0u;
    // 0x1b4bd0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1b4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1b4bd4: 0x2842006f  slti        $v0, $v0, 0x6F
    ctx->pc = 0x1b4bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
    // 0x1b4bd8: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1b4bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b4bdc:
    // 0x1b4bdc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B4BDCu;
    {
        const bool branch_taken_0x1b4bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BDCu;
        // 0x1b4be0: 0x2482ffe3  addiu       $v0, $a0, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4bdc) {
            ctx->pc = 0x1B4C10u;
            goto label_1b4c10;
        }
    }
    ctx->pc = 0x1B4BE4u;
    // 0x1b4be4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b4be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b4be8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4BE8u;
    {
        const bool branch_taken_0x1b4be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BE8u;
        // 0x1b4bec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4be8) {
            ctx->pc = 0x1B4C08u;
            goto label_1b4c08;
        }
    }
    ctx->pc = 0x1B4BF0u;
    // 0x1b4bf0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b4bf4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1b4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b4bf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4bfc: 0x2843049b  slti        $v1, $v0, 0x49B
    ctx->pc = 0x1b4bfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1179) ? 1 : 0);
    // 0x1b4c00: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4C00u;
    {
        const bool branch_taken_0x1b4c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4c00) {
            ctx->pc = 0x1B4C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4C00u;
            // 0x1b4c04: 0x284804a0  slti        $t0, $v0, 0x4A0 (Delay Slot)
            SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1184) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4C08u;
            goto label_1b4c08;
        }
    }
    ctx->pc = 0x1B4C08u;
label_1b4c08:
    // 0x1b4c08: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4C08u;
    {
        const bool branch_taken_0x1b4c08 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C08u;
        // 0x1b4c0c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c08) {
            ctx->pc = 0x1B4C18u;
            goto label_1b4c18;
        }
    }
    ctx->pc = 0x1B4C10u;
label_1b4c10:
    // 0x1b4c10: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C10u;
        // 0x1b4c14: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4C18u;
label_1b4c18:
    // 0x1b4c18: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4C18u;
    {
        const bool branch_taken_0x1b4c18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C18u;
        // 0x1b4c1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c18) {
            ctx->pc = 0x1B4C2Cu;
            goto label_1b4c2c;
        }
    }
    ctx->pc = 0x1B4C20u;
    // 0x1b4c20: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1b4c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1b4c24: 0x28420083  slti        $v0, $v0, 0x83
    ctx->pc = 0x1b4c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
    // 0x1b4c28: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1b4c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b4c2c:
    // 0x1b4c2c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B4C2Cu;
    {
        const bool branch_taken_0x1b4c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C2Cu;
        // 0x1b4c30: 0x2482ffe3  addiu       $v0, $a0, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c2c) {
            ctx->pc = 0x1B4C60u;
            goto label_1b4c60;
        }
    }
    ctx->pc = 0x1B4C34u;
    // 0x1b4c34: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b4c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b4c38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4C38u;
    {
        const bool branch_taken_0x1b4c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C38u;
        // 0x1b4c3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c38) {
            ctx->pc = 0x1B4C58u;
            goto label_1b4c58;
        }
    }
    ctx->pc = 0x1B4C40u;
    // 0x1b4c40: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b4c44: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1b4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b4c48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4c4c: 0x284304af  slti        $v1, $v0, 0x4AF
    ctx->pc = 0x1b4c4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1199) ? 1 : 0);
    // 0x1b4c50: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4C50u;
    {
        const bool branch_taken_0x1b4c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4c50) {
            ctx->pc = 0x1B4C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4C50u;
            // 0x1b4c54: 0x284804b4  slti        $t0, $v0, 0x4B4 (Delay Slot)
            SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1204) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4C58u;
            goto label_1b4c58;
        }
    }
    ctx->pc = 0x1B4C58u;
label_1b4c58:
    // 0x1b4c58: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4C58u;
    {
        const bool branch_taken_0x1b4c58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C58u;
        // 0x1b4c5c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c58) {
            ctx->pc = 0x1B4C68u;
            goto label_1b4c68;
        }
    }
    ctx->pc = 0x1B4C60u;
label_1b4c60:
    // 0x1b4c60: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C60u;
        // 0x1b4c64: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4C68u;
label_1b4c68:
    // 0x1b4c68: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4C68u;
    {
        const bool branch_taken_0x1b4c68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C68u;
        // 0x1b4c6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c68) {
            ctx->pc = 0x1B4C7Cu;
            goto label_1b4c7c;
        }
    }
    ctx->pc = 0x1B4C70u;
    // 0x1b4c70: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1b4c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1b4c74: 0x28420097  slti        $v0, $v0, 0x97
    ctx->pc = 0x1b4c74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x1b4c78: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1b4c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b4c7c:
    // 0x1b4c7c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B4C7Cu;
    {
        const bool branch_taken_0x1b4c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C7Cu;
        // 0x1b4c80: 0x2482ffe3  addiu       $v0, $a0, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c7c) {
            ctx->pc = 0x1B4CB0u;
            goto label_1b4cb0;
        }
    }
    ctx->pc = 0x1B4C84u;
    // 0x1b4c84: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b4c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b4c88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4C88u;
    {
        const bool branch_taken_0x1b4c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C88u;
        // 0x1b4c8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c88) {
            ctx->pc = 0x1B4CA8u;
            goto label_1b4ca8;
        }
    }
    ctx->pc = 0x1B4C90u;
    // 0x1b4c90: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b4c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b4c94: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1b4c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b4c98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4c9c: 0x284304c3  slti        $v1, $v0, 0x4C3
    ctx->pc = 0x1b4c9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1219) ? 1 : 0);
    // 0x1b4ca0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B4CA0u;
    {
        const bool branch_taken_0x1b4ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ca0) {
            ctx->pc = 0x1B4CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4CA0u;
            // 0x1b4ca4: 0x284804c8  slti        $t0, $v0, 0x4C8 (Delay Slot)
            SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1224) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4CA8u;
            goto label_1b4ca8;
        }
    }
    ctx->pc = 0x1B4CA8u;
label_1b4ca8:
    // 0x1b4ca8: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4CA8u;
    {
        const bool branch_taken_0x1b4ca8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CA8u;
        // 0x1b4cac: 0x24c2ffeb  addiu       $v0, $a2, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ca8) {
            ctx->pc = 0x1B4CB8u;
            goto label_1b4cb8;
        }
    }
    ctx->pc = 0x1B4CB0u;
label_1b4cb0:
    // 0x1b4cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CB0u;
        // 0x1b4cb4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4CB8u;
label_1b4cb8:
    // 0x1b4cb8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b4cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b4cbc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4CBCu;
    {
        const bool branch_taken_0x1b4cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CBCu;
        // 0x1b4cc0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cbc) {
            ctx->pc = 0x1B4CF4u;
            goto label_1b4cf4;
        }
    }
    ctx->pc = 0x1B4CC4u;
    // 0x1b4cc4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4CC4u;
    {
        const bool branch_taken_0x1b4cc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CC4u;
        // 0x1b4cc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cc4) {
            ctx->pc = 0x1B4CD8u;
            goto label_1b4cd8;
        }
    }
    ctx->pc = 0x1B4CCCu;
    // 0x1b4ccc: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x1b4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1b4cd0: 0x28420174  slti        $v0, $v0, 0x174
    ctx->pc = 0x1b4cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)372) ? 1 : 0);
    // 0x1b4cd4: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1b4cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b4cd8:
    // 0x1b4cd8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4CD8u;
    {
        const bool branch_taken_0x1b4cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4cd8) {
            ctx->pc = 0x1B4CF4u;
            goto label_1b4cf4;
        }
    }
    ctx->pc = 0x1B4CE0u;
    // 0x1b4ce0: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x1b4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x1b4ce4: 0x2442ffeb  addiu       $v0, $v0, -0x15
    ctx->pc = 0x1b4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
    // 0x1b4ce8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1b4ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b4cec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4CECu;
    {
        const bool branch_taken_0x1b4cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CECu;
        // 0x1b4cf0: 0x38c2000a  xori        $v0, $a2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cec) {
            ctx->pc = 0x1B4CFCu;
            goto label_1b4cfc;
        }
    }
    ctx->pc = 0x1B4CF4u;
label_1b4cf4:
    // 0x1b4cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CF4u;
        // 0x1b4cf8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4CFCu;
label_1b4cfc:
    // 0x1b4cfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4CFCu;
    {
        const bool branch_taken_0x1b4cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4CFCu;
        // 0x1b4d00: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4cfc) {
            ctx->pc = 0x1B4D1Cu;
            goto label_1b4d1c;
        }
    }
    ctx->pc = 0x1B4D04u;
    // 0x1b4d04: 0x8d240084  lw          $a0, 0x84($t1)
    ctx->pc = 0x1b4d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 132)));
    // 0x1b4d08: 0x8c831004  lw          $v1, 0x1004($a0)
    ctx->pc = 0x1b4d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x1b4d0c: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x1b4d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x1b4d10: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b4d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1b4d14: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4D14u;
    {
        const bool branch_taken_0x1b4d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1b4d14) {
            ctx->pc = 0x1B4D24u;
            goto label_1b4d24;
        }
    }
    ctx->pc = 0x1B4D1Cu;
label_1b4d1c:
    // 0x1b4d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D1Cu;
        // 0x1b4d20: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4D24u;
label_1b4d24:
    // 0x1b4d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D24u;
        // 0x1b4d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4D2Cu;
    // 0x1b4d2c: 0x0  nop
    ctx->pc = 0x1b4d2cu;
    // NOP
    ctx->pc = 0x1b4d30u;
}
