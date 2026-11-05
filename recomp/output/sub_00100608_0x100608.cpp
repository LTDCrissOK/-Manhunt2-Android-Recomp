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

// Function: sub_00100608
// Address: 0x100608 - 0x100618
void sub_00100608_0x100608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100608_0x100608");
#endif

    ctx->pc = 0x100608u;

    // 0x100608: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x100608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x10060c: 0x3e00008  jr          $ra
    ctx->pc = 0x10060Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10060Cu;
        // 0x100610: 0x24422dc0  addiu       $v0, $v0, 0x2DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10060Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100614u;
    // 0x100614: 0x0  nop
    ctx->pc = 0x100614u;
    // NOP
    ctx->pc = 0x100618u;
}
