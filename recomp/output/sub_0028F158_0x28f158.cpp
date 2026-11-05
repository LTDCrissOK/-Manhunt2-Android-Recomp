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

// Function: sub_0028F158
// Address: 0x28f158 - 0x28f188
void sub_0028F158_0x28f158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F158_0x28f158");
#endif

    switch (ctx->pc) {
        case 0x28f160u: goto label_28f160;
        default: break;
    }

    ctx->pc = 0x28f158u;

    // 0x28f158: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x28f158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28f15c: 0x24820024  addiu       $v0, $a0, 0x24
    ctx->pc = 0x28f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_28f160:
    // 0x28f160: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28f160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28f164: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28f164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28f168: 0x0  nop
    ctx->pc = 0x28f168u;
    // NOP
    // 0x28f16c: 0x0  nop
    ctx->pc = 0x28f16cu;
    // NOP
    // 0x28f170: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28F170u;
    {
        const bool branch_taken_0x28f170 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F170u;
        // 0x28f174: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f170) {
            ctx->pc = 0x28F160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f160;
        }
    }
    ctx->pc = 0x28F178u;
    // 0x28f178: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28f178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f17c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F17Cu;
        // 0x28f180: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F184u;
    // 0x28f184: 0x0  nop
    ctx->pc = 0x28f184u;
    // NOP
    ctx->pc = 0x28f188u;
}
