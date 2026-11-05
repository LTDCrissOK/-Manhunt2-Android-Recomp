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

// Function: sub_003A6BF0
// Address: 0x3a6bf0 - 0x3a6c50
void sub_003A6BF0_0x3a6bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6BF0_0x3a6bf0");
#endif

    switch (ctx->pc) {
        case 0x3a6c14u: goto label_3a6c14;
        default: break;
    }

    ctx->pc = 0x3a6bf0u;

    // 0x3a6bf0: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x3a6bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x3a6bf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6bf8: 0x24c33fb8  addiu       $v1, $a2, 0x3FB8
    ctx->pc = 0x3a6bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16312));
    // 0x3a6bfc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3a6bfcu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x413FB8u));
    // 0x3a6c00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6C00u;
    {
        const bool branch_taken_0x3a6c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C00u;
        // 0x3a6c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6c00) {
            ctx->pc = 0x3A6C10u;
            goto label_3a6c10;
        }
    }
    ctx->pc = 0x3A6C08u;
    // 0x3a6c08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A6C08u;
    {
        const bool branch_taken_0x3a6c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C08u;
        // 0x3a6c0c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6c08) {
            ctx->pc = 0x3A6C48u;
            goto label_3a6c48;
        }
    }
    ctx->pc = 0x3A6C10u;
label_3a6c10:
    // 0x3a6c10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a6c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3a6c14:
    // 0x3a6c14: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3a6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3a6c18: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x3a6c18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3a6c1c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A6C1Cu;
    {
        const bool branch_taken_0x3a6c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C1Cu;
        // 0x3a6c20: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6c1c) {
            ctx->pc = 0x3A6C48u;
            goto label_3a6c48;
        }
    }
    ctx->pc = 0x3A6C24u;
    // 0x3a6c24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3a6c28: 0x24c43fb8  addiu       $a0, $a2, 0x3FB8
    ctx->pc = 0x3a6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16312));
    // 0x3a6c2c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3a6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3a6c30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3a6c34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a6c38: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3a6c38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a6c3c: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x3A6C3Cu;
    {
        const bool branch_taken_0x3a6c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6c3c) {
            ctx->pc = 0x3A6C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6C3Cu;
            // 0x3a6c40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6c14;
        }
    }
    ctx->pc = 0x3A6C44u;
    // 0x3a6c44: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3a6c44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a6c48:
    // 0x3a6c48: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C48u;
        // 0x3a6c4c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6C50u;
}
