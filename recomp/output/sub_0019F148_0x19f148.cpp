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

// Function: sub_0019F148
// Address: 0x19f148 - 0x19f178
void sub_0019F148_0x19f148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F148_0x19f148");
#endif

    ctx->pc = 0x19f148u;

    // 0x19f148: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19f148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19f14c: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F14Cu;
    {
        const bool branch_taken_0x19f14c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f14c) {
            ctx->pc = 0x19F170u;
            goto label_19f170;
        }
    }
    ctx->pc = 0x19F154u;
    // 0x19f154: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F154u;
    {
        const bool branch_taken_0x19f154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F154u;
        // 0x19f158: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f154) {
            ctx->pc = 0x19F170u;
            goto label_19f170;
        }
    }
    ctx->pc = 0x19F15Cu;
    // 0x19f15c: 0x2462eff8  addiu       $v0, $v1, -0x1008
    ctx->pc = 0x19f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963192));
    // 0x19f160: 0xac60eff8  sw          $zero, -0x1008($v1)
    ctx->pc = 0x19f160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963192), GPR_U32(ctx, 0));
    // 0x19f164: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x19f164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x19f168: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19f168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x19f16c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x19f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_19f170:
    // 0x19f170: 0x3e00008  jr          $ra
    ctx->pc = 0x19F170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F178u;
}
