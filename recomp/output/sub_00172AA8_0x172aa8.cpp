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

// Function: sub_00172AA8
// Address: 0x172aa8 - 0x172ad8
void sub_00172AA8_0x172aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172AA8_0x172aa8");
#endif

    ctx->pc = 0x172aa8u;

    // 0x172aa8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x172aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x172aac: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172AACu;
    {
        const bool branch_taken_0x172aac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x172aac) {
            ctx->pc = 0x172ABCu;
            goto label_172abc;
        }
    }
    ctx->pc = 0x172AB4u;
    // 0x172ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x172AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AB4u;
        // 0x172ab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172ABCu;
label_172abc:
    // 0x172abc: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172ABCu;
    {
        const bool branch_taken_0x172abc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x172AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172ABCu;
        // 0x172ac0: 0xc5102a  slt         $v0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172abc) {
            ctx->pc = 0x172ACCu;
            goto label_172acc;
        }
    }
    ctx->pc = 0x172AC4u;
    // 0x172ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x172AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AC4u;
        // 0x172ac8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172ACCu;
label_172acc:
    // 0x172acc: 0x3e00008  jr          $ra
    ctx->pc = 0x172ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172ACCu;
        // 0x172ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172AD4u;
    // 0x172ad4: 0x0  nop
    ctx->pc = 0x172ad4u;
    // NOP
    ctx->pc = 0x172ad8u;
}
