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

// Function: sub_0017BD00
// Address: 0x17bd00 - 0x17bda8
void sub_0017BD00_0x17bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BD00_0x17bd00");
#endif

    switch (ctx->pc) {
        case 0x17bd38u: goto label_17bd38;
        case 0x17bd64u: goto label_17bd64;
        case 0x17bd70u: goto label_17bd70;
        default: break;
    }

    ctx->pc = 0x17bd00u;

    // 0x17bd00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bd04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17bd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17bd08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bd0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17bd0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17bd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17bd14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17bd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17bd1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17bd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17bd24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17bd24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd28: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17bd2c: 0x2e740001  sltiu       $s4, $s3, 0x1
    ctx->pc = 0x17bd2cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17bd30: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x17bd30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x17bd34: 0x0  nop
    ctx->pc = 0x17bd34u;
    // NOP
label_17bd38:
    // 0x17bd38: 0x12420012  beq         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17BD38u;
    {
        const bool branch_taken_0x17bd38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x17BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD38u;
        // 0x17bd3c: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd38) {
            ctx->pc = 0x17BD84u;
            goto label_17bd84;
        }
    }
    ctx->pc = 0x17BD40u;
    // 0x17bd40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17bd44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17bd48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17bd4c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BD4Cu;
    {
        const bool branch_taken_0x17bd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD4Cu;
        // 0x17bd50: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd4c) {
            ctx->pc = 0x17BD70u;
            goto label_17bd70;
        }
    }
    ctx->pc = 0x17BD54u;
    // 0x17bd54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17bd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd5c: 0xc05ef2e  jal         func_17BCB8
    ctx->pc = 0x17BD5Cu;
    SET_GPR_U32(ctx, 31, 0x17BD64u);
    ctx->pc = 0x17BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD5Cu;
    // 0x17bd60: 0x305200ff  andi        $s2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BCB8u, 0x17BD5Cu, 0x17BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD64u;
label_17bd64:
    // 0x17bd64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd68: 0xc05ef1c  jal         func_17BC70
    ctx->pc = 0x17BD68u;
    SET_GPR_U32(ctx, 31, 0x17BD70u);
    ctx->pc = 0x17BD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD68u;
    // 0x17bd6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC70u, 0x17BD68u, 0x17BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD70u;
label_17bd70:
    // 0x17bd70: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x17bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17bd74: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x17bd74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17bd78: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x17bd78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17bd7c: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17BD7Cu;
    {
        const bool branch_taken_0x17bd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bd7c) {
            ctx->pc = 0x17BD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BD7Cu;
            // 0x17bd80: 0x92020009  lbu         $v0, 0x9($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bd38;
        }
    }
    ctx->pc = 0x17BD84u;
label_17bd84:
    // 0x17bd84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17bd84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17bd88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bd8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17bd8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bd90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17bd90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bd94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17bd94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bd98: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17bd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17bd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BD9Cu;
        // 0x17bda0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BDA4u;
    // 0x17bda4: 0x0  nop
    ctx->pc = 0x17bda4u;
    // NOP
    ctx->pc = 0x17bda8u;
}
