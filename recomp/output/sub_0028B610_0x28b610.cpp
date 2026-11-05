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

// Function: sub_0028B610
// Address: 0x28b610 - 0x28b620
void sub_0028B610_0x28b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B610_0x28b610");
#endif

    ctx->pc = 0x28b610u;

    // 0x28b610: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x28b610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x28b614: 0x3e00008  jr          $ra
    ctx->pc = 0x28B614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B614u;
        // 0x28b618: 0x9062adc1  lbu         $v0, -0x523F($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294946241)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B61Cu;
    // 0x28b61c: 0x0  nop
    ctx->pc = 0x28b61cu;
    // NOP
    ctx->pc = 0x28b620u;
}
