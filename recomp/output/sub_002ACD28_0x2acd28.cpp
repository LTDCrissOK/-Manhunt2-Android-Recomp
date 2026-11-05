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

// Function: sub_002ACD28
// Address: 0x2acd28 - 0x2acd60
void sub_002ACD28_0x2acd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACD28_0x2acd28");
#endif

    switch (ctx->pc) {
        case 0x2acd4cu: goto label_2acd4c;
        default: break;
    }

    ctx->pc = 0x2acd28u;

    // 0x2acd28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2acd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2acd2c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2acd2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2acd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2acd34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2acd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2acd38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ACD38u;
    {
        const bool branch_taken_0x2acd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD38u;
        // 0x2acd3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd38) {
            ctx->pc = 0x2ACD50u;
            goto label_2acd50;
        }
    }
    ctx->pc = 0x2ACD40u;
    // 0x2acd40: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x2acd40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x2acd44: 0xc0ab358  jal         func_2ACD60
    ctx->pc = 0x2ACD44u;
    SET_GPR_U32(ctx, 31, 0x2ACD4Cu);
    ctx->pc = 0x2ACD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD44u;
    // 0x2acd48: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD60u, 0x2ACD44u, 0x2ACD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD4Cu;
label_2acd4c:
    // 0x2acd4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2acd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2acd50:
    // 0x2acd50: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD50u;
        // 0x2acd54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACD58u;
    // 0x2acd58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2acd58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2acd5c: 0x0  nop
    ctx->pc = 0x2acd5cu;
    // NOP
    ctx->pc = 0x2acd60u;
}
