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

// Function: sub_00113528
// Address: 0x113528 - 0x113550
void sub_00113528_0x113528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113528_0x113528");
#endif

    ctx->pc = 0x113528u;

    // 0x113528: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x113528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11352c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x11352cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x113530: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x113530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x113534: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11353c: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x11353cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x113540: 0x8c820390  lw          $v0, 0x390($a0)
    ctx->pc = 0x113540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x113544: 0x3e00008  jr          $ra
    ctx->pc = 0x113544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113544u;
        // 0x113548: 0xac800390  sw          $zero, 0x390($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11354Cu;
    // 0x11354c: 0x0  nop
    ctx->pc = 0x11354cu;
    // NOP
    ctx->pc = 0x113550u;
}
