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

// Function: sub_002C4630
// Address: 0x2c4630 - 0x2c4660
void sub_002C4630_0x2c4630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4630_0x2c4630");
#endif

    ctx->pc = 0x2c4630u;

    // 0x2c4630: 0xdc820068  ld          $v0, 0x68($a0)
    ctx->pc = 0x2c4630u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2c4634: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2c4634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2c4638: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2c4638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x2c463c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c463cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c4640: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x2c4640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x2c4644: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x2c4644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x2c4648: 0x5287c  dsll32      $a1, $a1, 1
    ctx->pc = 0x2c4648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 1));
    // 0x2c464c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c464cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c4650: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c4650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2c4654: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4654u;
        // 0x2c4658: 0xfc820068  sd          $v0, 0x68($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C465Cu;
    // 0x2c465c: 0x0  nop
    ctx->pc = 0x2c465cu;
    // NOP
    ctx->pc = 0x2c4660u;
}
