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

// Function: sub_00335290
// Address: 0x335290 - 0x3352c0
void sub_00335290_0x335290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335290_0x335290");
#endif

    ctx->pc = 0x335290u;

    // 0x335290: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x335290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x335294: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x335294u;
    {
        const bool branch_taken_0x335294 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x335294) {
            ctx->pc = 0x3352B4u;
            goto label_3352b4;
        }
    }
    ctx->pc = 0x33529Cu;
    // 0x33529c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33529Cu;
    {
        const bool branch_taken_0x33529c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3352A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33529Cu;
        // 0x3352a0: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33529c) {
            ctx->pc = 0x3352B4u;
            goto label_3352b4;
        }
    }
    ctx->pc = 0x3352A4u;
    // 0x3352a4: 0x24436e70  addiu       $v1, $v0, 0x6E70
    ctx->pc = 0x3352a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x3352a8: 0xa4406e70  sh          $zero, 0x6E70($v0)
    ctx->pc = 0x3352a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28272), (uint16_t)GPR_U32(ctx, 0));
    // 0x3352ac: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3352acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3352b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3352b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3352b4:
    // 0x3352b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3352B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3352B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3352BCu;
    // 0x3352bc: 0x0  nop
    ctx->pc = 0x3352bcu;
    // NOP
    ctx->pc = 0x3352c0u;
}
