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

// Function: sub_003DF468
// Address: 0x3df468 - 0x3df490
void sub_003DF468_0x3df468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF468_0x3df468");
#endif

    ctx->pc = 0x3df468u;

    // 0x3df468: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x3df468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x3df46c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3df46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3df470: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DF470u;
    {
        const bool branch_taken_0x3df470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF470u;
        // 0x3df474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df470) {
            ctx->pc = 0x3DF488u;
            goto label_3df488;
        }
    }
    ctx->pc = 0x3DF478u;
    // 0x3df478: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x3df478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3df47c: 0x2882041d  slti        $v0, $a0, 0x41D
    ctx->pc = 0x3df47cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1053) ? 1 : 0);
    // 0x3df480: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3DF480u;
    {
        const bool branch_taken_0x3df480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3df480) {
            ctx->pc = 0x3DF484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DF480u;
            // 0x3df484: 0x2885043e  slti        $a1, $a0, 0x43E (Delay Slot)
            SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1086) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DF488u;
            goto label_3df488;
        }
    }
    ctx->pc = 0x3DF488u;
label_3df488:
    // 0x3df488: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF488u;
        // 0x3df48c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF490u;
}
