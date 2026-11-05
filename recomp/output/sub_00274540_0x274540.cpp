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

// Function: sub_00274540
// Address: 0x274540 - 0x274550
void sub_00274540_0x274540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274540_0x274540");
#endif

    ctx->pc = 0x274540u;

    // 0x274540: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x274540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x274544: 0x3e00008  jr          $ra
    ctx->pc = 0x274544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274544u;
        // 0x274548: 0x90629dfc  lbu         $v0, -0x6204($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294942204)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27454Cu;
    // 0x27454c: 0x0  nop
    ctx->pc = 0x27454cu;
    // NOP
    ctx->pc = 0x274550u;
}
