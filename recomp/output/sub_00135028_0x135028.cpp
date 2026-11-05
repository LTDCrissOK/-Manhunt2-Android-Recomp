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

// Function: sub_00135028
// Address: 0x135028 - 0x135060
void sub_00135028_0x135028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135028_0x135028");
#endif

    ctx->pc = 0x135028u;

    // 0x135028: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x135028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x13502c: 0x28a20048  slti        $v0, $a1, 0x48
    ctx->pc = 0x13502cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)72) ? 1 : 0);
    // 0x135030: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x135030u;
    {
        const bool branch_taken_0x135030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135030u;
        // 0x135034: 0x28a2004b  slti        $v0, $a1, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135030) {
            ctx->pc = 0x135058u;
            goto label_135058;
        }
    }
    ctx->pc = 0x135038u;
    // 0x135038: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x135038u;
    {
        const bool branch_taken_0x135038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135038u;
        // 0x13503c: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135038) {
            ctx->pc = 0x135050u;
            goto label_135050;
        }
    }
    ctx->pc = 0x135040u;
    // 0x135040: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135040u;
    {
        const bool branch_taken_0x135040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x135044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135040u;
        // 0x135044: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135040) {
            ctx->pc = 0x135050u;
            goto label_135050;
        }
    }
    ctx->pc = 0x135048u;
    // 0x135048: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135048u;
    {
        const bool branch_taken_0x135048 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x135048) {
            ctx->pc = 0x135058u;
            goto label_135058;
        }
    }
    ctx->pc = 0x135050u;
label_135050:
    // 0x135050: 0x3e00008  jr          $ra
    ctx->pc = 0x135050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135050u;
        // 0x135054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135058u;
label_135058:
    // 0x135058: 0x3e00008  jr          $ra
    ctx->pc = 0x135058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135058u;
        // 0x13505c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135060u;
}
