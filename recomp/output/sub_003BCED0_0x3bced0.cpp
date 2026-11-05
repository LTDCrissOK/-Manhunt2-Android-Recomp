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

// Function: sub_003BCED0
// Address: 0x3bced0 - 0x3bcf50
void sub_003BCED0_0x3bced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCED0_0x3bced0");
#endif

    switch (ctx->pc) {
        case 0x3bcef0u: goto label_3bcef0;
        default: break;
    }

    ctx->pc = 0x3bced0u;

    // 0x3bced0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3bced0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3bced4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3bced4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bced8: 0x244bc938  addiu       $t3, $v0, -0x36C8
    ctx->pc = 0x3bced8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953272));
    // 0x3bcedc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3bcedcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcee0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3bcee0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bcee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bcee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bceec: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3bceecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3bcef0:
    // 0x3bcef0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3bcef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3bcef4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3bcef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3bcef8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3bcef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bcefc: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x3bcefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3bcf00: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BCF00u;
    {
        const bool branch_taken_0x3bcf00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF00u;
        // 0x3bcf04: 0x1034026  xor         $t0, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf00) {
            ctx->pc = 0x3BCF14u;
            goto label_3bcf14;
        }
    }
    ctx->pc = 0x3BCF08u;
    // 0x3bcf08: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x3bcf08u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x3bcf0c: 0x1465026  xor         $t2, $t2, $a2
    ctx->pc = 0x3bcf0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 6));
    // 0x3bcf10: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x3bcf10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
label_3bcf14:
    // 0x3bcf14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3bcf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3bcf18: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x3bcf18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3bcf1c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3BCF1Cu;
    {
        const bool branch_taken_0x3bcf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bcf1c) {
            ctx->pc = 0x3BCF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BCF1Cu;
            // 0x3bcf20: 0x90e20000  lbu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BCEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bcef0;
        }
    }
    ctx->pc = 0x3BCF24u;
    // 0x3bcf24: 0x81027  nor         $v0, $zero, $t0
    ctx->pc = 0x3bcf24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
    // 0x3bcf28: 0x92027  nor         $a0, $zero, $t1
    ctx->pc = 0x3bcf28u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x3bcf2c: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x3bcf2cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x3bcf30: 0x30420077  andi        $v0, $v0, 0x77
    ctx->pc = 0x3bcf30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)119);
    // 0x3bcf34: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x3bcf34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x3bcf38: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x3bcf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x3bcf3c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x3bcf3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bcf40: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3bcf40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bcf44: 0x3e00008  jr          $ra
    ctx->pc = 0x3BCF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF44u;
        // 0x3bcf48: 0xa0a40001  sb          $a0, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCF4Cu;
    // 0x3bcf4c: 0x0  nop
    ctx->pc = 0x3bcf4cu;
    // NOP
    ctx->pc = 0x3bcf50u;
}
