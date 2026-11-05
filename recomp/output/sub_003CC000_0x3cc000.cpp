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

// Function: sub_003CC000
// Address: 0x3cc000 - 0x3cc058
void sub_003CC000_0x3cc000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC000_0x3cc000");
#endif

    ctx->pc = 0x3cc000u;

    // 0x3cc000: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3cc000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3cc004: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CC004u;
    {
        const bool branch_taken_0x3cc004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC004u;
        // 0x3cc008: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc004) {
            ctx->pc = 0x3CC014u;
            goto label_3cc014;
        }
    }
    ctx->pc = 0x3CC00Cu;
    // 0x3cc00c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC00Cu;
        // 0x3cc010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC014u;
label_3cc014:
    // 0x3cc014: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x3cc014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3cc018: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3CC018u;
    {
        const bool branch_taken_0x3cc018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc018) {
            ctx->pc = 0x3CC01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CC018u;
            // 0x3cc01c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC04Cu;
            goto label_3cc04c;
        }
    }
    ctx->pc = 0x3CC020u;
    // 0x3cc020: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x3cc020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3cc024: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3cc024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3cc028: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x3cc028u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x3cc02c: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x3cc02cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x3cc030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cc030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cc034: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cc034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cc038: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3cc038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3cc03c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3cc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x3cc040: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3cc040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3cc044: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC044u;
        // 0x3cc048: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC04Cu;
label_3cc04c:
    // 0x3cc04c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cc04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc050: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC050u;
        // 0x3cc054: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC058u;
}
