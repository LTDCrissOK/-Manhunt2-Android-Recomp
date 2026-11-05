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

// Function: sub_0023D9C8
// Address: 0x23d9c8 - 0x23da10
void sub_0023D9C8_0x23d9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D9C8_0x23d9c8");
#endif

    ctx->pc = 0x23d9c8u;

    // 0x23d9c8: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x23d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x23d9cc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x23d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x23d9d0: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x23d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x23d9d4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23D9D4u;
    {
        const bool branch_taken_0x23d9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9D4u;
        // 0x23d9d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9d4) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D9DCu;
    // 0x23d9dc: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x23d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x23d9e0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D9E0u;
    {
        const bool branch_taken_0x23d9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9E0u;
        // 0x23d9e4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9e0) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D9E8u;
    // 0x23d9e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D9E8u;
    {
        const bool branch_taken_0x23d9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9E8u;
        // 0x23d9ec: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9e8) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D9F0u;
    // 0x23d9f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D9F0u;
    {
        const bool branch_taken_0x23d9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9F0u;
        // 0x23d9f4: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9f0) {
            ctx->pc = 0x23DA00u;
            goto label_23da00;
        }
    }
    ctx->pc = 0x23D9F8u;
    // 0x23d9f8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D9F8u;
    {
        const bool branch_taken_0x23d9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d9f8) {
            ctx->pc = 0x23DA04u;
            goto label_23da04;
        }
    }
    ctx->pc = 0x23DA00u;
label_23da00:
    // 0x23da00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23da00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23da04:
    // 0x23da04: 0x3e00008  jr          $ra
    ctx->pc = 0x23DA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA04u;
        // 0x23da08: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DA0Cu;
    // 0x23da0c: 0x0  nop
    ctx->pc = 0x23da0cu;
    // NOP
    ctx->pc = 0x23da10u;
}
