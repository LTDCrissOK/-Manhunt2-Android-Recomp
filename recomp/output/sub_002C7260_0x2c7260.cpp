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

// Function: sub_002C7260
// Address: 0x2c7260 - 0x2c7288
void sub_002C7260_0x2c7260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7260_0x2c7260");
#endif

    switch (ctx->pc) {
        case 0x2c7268u: goto label_2c7268;
        default: break;
    }

    ctx->pc = 0x2c7260u;

    // 0x2c7260: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x2c7260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x2c7264: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c7264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7268:
    // 0x2c7268: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x2c7268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
    // 0x2c726c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c7270: 0xac840008  sw          $a0, 0x8($a0)
    ctx->pc = 0x2c7270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
    // 0x2c7274: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x2c7274u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2c7278: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C7278u;
    {
        const bool branch_taken_0x2c7278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7278u;
        // 0x2c727c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7278) {
            ctx->pc = 0x2C7268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7268;
        }
    }
    ctx->pc = 0x2C7280u;
    // 0x2c7280: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7288u;
}
