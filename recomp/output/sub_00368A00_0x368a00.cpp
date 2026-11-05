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

// Function: sub_00368A00
// Address: 0x368a00 - 0x368a18
void sub_00368A00_0x368a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368A00_0x368a00");
#endif

    ctx->pc = 0x368a00u;

    // 0x368a00: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x368a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x368a04: 0x3e00008  jr          $ra
    ctx->pc = 0x368A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368A04u;
        // 0x368a08: 0x9062cba0  lbu         $v0, -0x3460($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294953888)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368A0Cu;
    // 0x368a0c: 0x0  nop
    ctx->pc = 0x368a0cu;
    // NOP
    // 0x368a10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x368a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x368a14: 0x0  nop
    ctx->pc = 0x368a14u;
    // NOP
    ctx->pc = 0x368a18u;
}
