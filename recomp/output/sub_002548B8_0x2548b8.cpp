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

// Function: sub_002548B8
// Address: 0x2548b8 - 0x2548e0
void sub_002548B8_0x2548b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002548B8_0x2548b8");
#endif

    ctx->pc = 0x2548b8u;

    // 0x2548b8: 0x8c830ff4  lw          $v1, 0xFF4($a0)
    ctx->pc = 0x2548b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4084)));
    // 0x2548bc: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2548bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2548c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2548C0u;
    {
        const bool branch_taken_0x2548c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2548C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548C0u;
        // 0x2548c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548c0) {
            ctx->pc = 0x2548D4u;
            goto label_2548d4;
        }
    }
    ctx->pc = 0x2548C8u;
    // 0x2548c8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2548c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2548cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2548ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2548d0: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2548d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2548d4:
    // 0x2548d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2548D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2548D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548D4u;
        // 0x2548d8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2548D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2548DCu;
    // 0x2548dc: 0x0  nop
    ctx->pc = 0x2548dcu;
    // NOP
    ctx->pc = 0x2548e0u;
}
