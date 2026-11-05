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

// Function: sub_00128430
// Address: 0x128430 - 0x128460
void sub_00128430_0x128430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128430_0x128430");
#endif

    switch (ctx->pc) {
        case 0x128438u: goto label_128438;
        default: break;
    }

    ctx->pc = 0x128430u;

    // 0x128430: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x128430u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128434: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x128434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_128438:
    // 0x128438: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x128438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12843c: 0xac400e90  sw          $zero, 0xE90($v0)
    ctx->pc = 0x12843cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3728), GPR_U32(ctx, 0));
    // 0x128440: 0x7c400ea0  sq          $zero, 0xEA0($v0)
    ctx->pc = 0x128440u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 3744), GPR_VEC(ctx, 0));
    // 0x128444: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x128444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x128448: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x128448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12844c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x12844cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x128450: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x128450u;
    {
        const bool branch_taken_0x128450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128450u;
        // 0x128454: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128450) {
            ctx->pc = 0x128438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128438;
        }
    }
    ctx->pc = 0x128458u;
    // 0x128458: 0x3e00008  jr          $ra
    ctx->pc = 0x128458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128458u;
        // 0x12845c: 0xa0800f90  sb          $zero, 0xF90($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3984), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128460u;
}
