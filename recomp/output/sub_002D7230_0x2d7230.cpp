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

// Function: sub_002D7230
// Address: 0x2d7230 - 0x2d7278
void sub_002D7230_0x2d7230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7230_0x2d7230");
#endif

    switch (ctx->pc) {
        case 0x2d7240u: goto label_2d7240;
        default: break;
    }

    ctx->pc = 0x2d7230u;

    // 0x2d7230: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2d7230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d7234: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2D7234u;
    {
        const bool branch_taken_0x2d7234 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2D7238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7234u;
        // 0x2d7238: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7234) {
            ctx->pc = 0x2D726Cu;
            goto label_2d726c;
        }
    }
    ctx->pc = 0x2D723Cu;
    // 0x2d723c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2d723cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d7240:
    // 0x2d7240: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x2d7240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2d7244: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7244u;
    {
        const bool branch_taken_0x2d7244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7244u;
        // 0x2d7248: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7244) {
            ctx->pc = 0x2D7260u;
            goto label_2d7260;
        }
    }
    ctx->pc = 0x2D724Cu;
    // 0x2d724c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2d724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d7250: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7250u;
    {
        const bool branch_taken_0x2d7250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7250u;
        // 0x2d7254: 0x66102a  slt         $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7250) {
            ctx->pc = 0x2D7264u;
            goto label_2d7264;
        }
    }
    ctx->pc = 0x2D7258u;
    // 0x2d7258: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7258u;
        // 0x2d725c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7260u;
label_2d7260:
    // 0x2d7260: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2d7260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2d7264:
    // 0x2d7264: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D7264u;
    {
        const bool branch_taken_0x2d7264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7264u;
        // 0x2d7268: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7264) {
            ctx->pc = 0x2D7240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7240;
        }
    }
    ctx->pc = 0x2D726Cu;
label_2d726c:
    // 0x2d726c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D726Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D726Cu;
        // 0x2d7270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D726Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7274u;
    // 0x2d7274: 0x0  nop
    ctx->pc = 0x2d7274u;
    // NOP
    ctx->pc = 0x2d7278u;
}
