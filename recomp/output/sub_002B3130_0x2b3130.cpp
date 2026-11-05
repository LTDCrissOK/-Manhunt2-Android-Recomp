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

// Function: sub_002B3130
// Address: 0x2b3130 - 0x2b3158
void sub_002B3130_0x2b3130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3130_0x2b3130");
#endif

    ctx->pc = 0x2b3130u;

    // 0x2b3130: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b3130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3134: 0x908358ec  lbu         $v1, 0x58EC($a0)
    ctx->pc = 0x2b3134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22764)));
    // 0x2b3138: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3138u;
    {
        const bool branch_taken_0x2b3138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3138u;
        // 0x2b313c: 0xac820094  sw          $v0, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3138) {
            ctx->pc = 0x2B314Cu;
            goto label_2b314c;
        }
    }
    ctx->pc = 0x2B3140u;
    // 0x2b3140: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b3140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b3144: 0x8c439160  lw          $v1, -0x6EA0($v0)
    ctx->pc = 0x2b3144u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9160u));
    // 0x2b3148: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x2b3148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
label_2b314c:
    // 0x2b314c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B314Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B314Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3154u;
    // 0x2b3154: 0x0  nop
    ctx->pc = 0x2b3154u;
    // NOP
    ctx->pc = 0x2b3158u;
}
