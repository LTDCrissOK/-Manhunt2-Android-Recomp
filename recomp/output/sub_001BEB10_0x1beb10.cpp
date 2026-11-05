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

// Function: sub_001BEB10
// Address: 0x1beb10 - 0x1beb40
void sub_001BEB10_0x1beb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEB10_0x1beb10");
#endif

    ctx->pc = 0x1beb10u;

    // 0x1beb10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1beb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1beb14: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BEB14u;
    {
        const bool branch_taken_0x1beb14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1beb14) {
            ctx->pc = 0x1BEB38u;
            goto label_1beb38;
        }
    }
    ctx->pc = 0x1BEB1Cu;
    // 0x1beb1c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEB1Cu;
    {
        const bool branch_taken_0x1beb1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB1Cu;
        // 0x1beb20: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb1c) {
            ctx->pc = 0x1BEB38u;
            goto label_1beb38;
        }
    }
    ctx->pc = 0x1BEB24u;
    // 0x1beb24: 0x2462f140  addiu       $v0, $v1, -0xEC0
    ctx->pc = 0x1beb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x1beb28: 0xac60f140  sw          $zero, -0xEC0($v1)
    ctx->pc = 0x1beb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963520), GPR_U32(ctx, 0));
    // 0x1beb2c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1beb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1beb30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1beb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1beb34: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1beb34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1beb38:
    // 0x1beb38: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEB40u;
}
