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

// Function: sub_0034EB00
// Address: 0x34eb00 - 0x34eb18
void sub_0034EB00_0x34eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EB00_0x34eb00");
#endif

    ctx->pc = 0x34eb00u;

    // 0x34eb00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34eb04: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34eb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x34eb08: 0xac40c6b8  sw          $zero, -0x3948($v0)
    ctx->pc = 0x34eb08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FC6B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC6B8u, _value); } while (0);
    // 0x34eb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x34EB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB0Cu;
        // 0x34eb10: 0xac60c6bc  sw          $zero, -0x3944($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EB14u;
    // 0x34eb14: 0x0  nop
    ctx->pc = 0x34eb14u;
    // NOP
    ctx->pc = 0x34eb18u;
}
