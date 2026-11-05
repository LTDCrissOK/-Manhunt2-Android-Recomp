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

// Function: sub_0028B620
// Address: 0x28b620 - 0x28b638
void sub_0028B620_0x28b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B620_0x28b620");
#endif

    ctx->pc = 0x28b620u;

    // 0x28b620: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28b620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28b624: 0x2442ac88  addiu       $v0, $v0, -0x5378
    ctx->pc = 0x28b624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945928));
    // 0x28b628: 0xac450140  sw          $a1, 0x140($v0)
    ctx->pc = 0x28b628u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BADC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADC8u, _value); } while (0);
    // 0x28b62c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B62Cu;
        // 0x28b630: 0xac44013c  sw          $a0, 0x13C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B634u;
    // 0x28b634: 0x0  nop
    ctx->pc = 0x28b634u;
    // NOP
    ctx->pc = 0x28b638u;
}
