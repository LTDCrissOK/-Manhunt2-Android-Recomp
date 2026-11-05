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

// Function: sub_0011FBC8
// Address: 0x11fbc8 - 0x11fc80
void sub_0011FBC8_0x11fbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FBC8_0x11fbc8");
#endif

    switch (ctx->pc) {
        case 0x11fbe8u: goto label_11fbe8;
        case 0x11fc20u: goto label_11fc20;
        case 0x11fc50u: goto label_11fc50;
        default: break;
    }

    ctx->pc = 0x11fbc8u;

    // 0x11fbc8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11fbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbcc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11fbd0: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x11FBD0u;
    {
        const bool branch_taken_0x11fbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBD0u;
        // 0x11fbd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbd0) {
            ctx->pc = 0x11FC74u;
            goto label_11fc74;
        }
    }
    ctx->pc = 0x11FBD8u;
    // 0x11fbd8: 0x24c90390  addiu       $t1, $a2, 0x390
    ctx->pc = 0x11fbd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 912));
    // 0x11fbdc: 0x24ca0434  addiu       $t2, $a2, 0x434
    ctx->pc = 0x11fbdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 1076));
    // 0x11fbe0: 0x24c80108  addiu       $t0, $a2, 0x108
    ctx->pc = 0x11fbe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 264));
    // 0x11fbe4: 0x24c7020c  addiu       $a3, $a2, 0x20C
    ctx->pc = 0x11fbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 524));
label_11fbe8:
    // 0x11fbe8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11fbec: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x11fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11fbf0: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x11fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11fbf4: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x11fbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x11fbf8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x11fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x11fbfc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x11fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11fc00: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x11fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x11fc04: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x11fc04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x11fc08: 0x2c820041  sltiu       $v0, $a0, 0x41
    ctx->pc = 0x11fc08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x11fc0c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11FC0Cu;
    {
        const bool branch_taken_0x11fc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC0Cu;
        // 0x11fc10: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc0c) {
            ctx->pc = 0x11FBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fbe8;
        }
    }
    ctx->pc = 0x11FC14u;
    // 0x11fc14: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x11fc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11fc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc1c: 0x0  nop
    ctx->pc = 0x11fc1cu;
    // NOP
label_11fc20:
    // 0x11fc20: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11fc24: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x11fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11fc28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11fc2c: 0xac400310  sw          $zero, 0x310($v0)
    ctx->pc = 0x11fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 784), GPR_U32(ctx, 0));
    // 0x11fc30: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x11fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11fc34: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x11fc34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x11fc38: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x11fc38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x11fc3c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11FC3Cu;
    {
        const bool branch_taken_0x11fc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC3Cu;
        // 0x11fc40: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc3c) {
            ctx->pc = 0x11FC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fc20;
        }
    }
    ctx->pc = 0x11FC44u;
    // 0x11fc44: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x11fc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11fc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc4c: 0x0  nop
    ctx->pc = 0x11fc4cu;
    // NOP
label_11fc50:
    // 0x11fc50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x11fc54: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x11fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11fc58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11fc5c: 0xac400410  sw          $zero, 0x410($v0)
    ctx->pc = 0x11fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1040), GPR_U32(ctx, 0));
    // 0x11fc60: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x11fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11fc64: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x11fc64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x11fc68: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x11fc68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x11fc6c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11FC6Cu;
    {
        const bool branch_taken_0x11fc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC6Cu;
        // 0x11fc70: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc6c) {
            ctx->pc = 0x11FC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fc50;
        }
    }
    ctx->pc = 0x11FC74u;
label_11fc74:
    // 0x11fc74: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC7Cu;
    // 0x11fc7c: 0x0  nop
    ctx->pc = 0x11fc7cu;
    // NOP
    ctx->pc = 0x11fc80u;
}
