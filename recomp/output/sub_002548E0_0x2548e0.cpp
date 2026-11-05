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

// Function: sub_002548E0
// Address: 0x2548e0 - 0x254908
void sub_002548E0_0x2548e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002548E0_0x2548e0");
#endif

    ctx->pc = 0x2548e0u;

    // 0x2548e0: 0x8c830ff4  lw          $v1, 0xFF4($a0)
    ctx->pc = 0x2548e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4084)));
    // 0x2548e4: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2548e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2548e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2548E8u;
    {
        const bool branch_taken_0x2548e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2548ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548E8u;
        // 0x2548ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548e8) {
            ctx->pc = 0x2548FCu;
            goto label_2548fc;
        }
    }
    ctx->pc = 0x2548F0u;
    // 0x2548f0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2548f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2548f4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2548f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2548f8: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2548f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2548fc:
    // 0x2548fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2548FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548FCu;
        // 0x254900: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2548FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254904u;
    // 0x254904: 0x0  nop
    ctx->pc = 0x254904u;
    // NOP
    ctx->pc = 0x254908u;
}
