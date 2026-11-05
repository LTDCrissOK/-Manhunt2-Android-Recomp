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

// Function: sub_0031F000
// Address: 0x31f000 - 0x31f038
void sub_0031F000_0x31f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F000_0x31f000");
#endif

    ctx->pc = 0x31f000u;

    // 0x31f000: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x31f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x31f004: 0x30620060  andi        $v0, $v1, 0x60
    ctx->pc = 0x31f004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
    // 0x31f008: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31F008u;
    {
        const bool branch_taken_0x31f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F008u;
        // 0x31f00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f008) {
            ctx->pc = 0x31F030u;
            goto label_31f030;
        }
    }
    ctx->pc = 0x31F010u;
    // 0x31f010: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x31f010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x31f014: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31f014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31f018: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F018u;
    {
        const bool branch_taken_0x31f018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F018u;
        // 0x31f01c: 0x8c830050  lw          $v1, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f018) {
            ctx->pc = 0x31F028u;
            goto label_31f028;
        }
    }
    ctx->pc = 0x31F020u;
    // 0x31f020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31F020u;
    {
        const bool branch_taken_0x31f020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F020u;
        // 0x31f024: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f020) {
            ctx->pc = 0x31F02Cu;
            goto label_31f02c;
        }
    }
    ctx->pc = 0x31F028u;
label_31f028:
    // 0x31f028: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31f02c:
    // 0x31f02c: 0x622804  sllv        $a1, $v0, $v1
    ctx->pc = 0x31f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_31f030:
    // 0x31f030: 0x3e00008  jr          $ra
    ctx->pc = 0x31F030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F030u;
        // 0x31f034: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F038u;
}
