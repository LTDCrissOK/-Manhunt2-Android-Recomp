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

// Function: sub_003A5A50
// Address: 0x3a5a50 - 0x3a5a68
void sub_003A5A50_0x3a5a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5A50_0x3a5a50");
#endif

    ctx->pc = 0x3a5a50u;

    // 0x3a5a50: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a5a54: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a5a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a5a58: 0xac44392c  sw          $a0, 0x392C($v0)
    ctx->pc = 0x3a5a58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x41392Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41392Cu, _value); } while (0);
    // 0x3a5a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A5Cu;
        // 0x3a5a60: 0xac653930  sw          $a1, 0x3930($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 14640), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5A64u;
    // 0x3a5a64: 0x0  nop
    ctx->pc = 0x3a5a64u;
    // NOP
    ctx->pc = 0x3a5a68u;
}
