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

// Function: sub_0039C260
// Address: 0x39c260 - 0x39c280
void sub_0039C260_0x39c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C260_0x39c260");
#endif

    ctx->pc = 0x39c260u;

    // 0x39c260: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39c260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x39c264: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x39c264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x39c268: 0xac44ad90  sw          $a0, -0x5270($v0)
    ctx->pc = 0x39c268u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x40AD90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40AD90u, _value); } while (0);
    // 0x39c26c: 0x3e00008  jr          $ra
    ctx->pc = 0x39C26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C26Cu;
        // 0x39c270: 0xac64ad94  sw          $a0, -0x526C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294946196), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C274u;
    // 0x39c274: 0x0  nop
    ctx->pc = 0x39c274u;
    // NOP
    // 0x39c278: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39c278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39c27c: 0x0  nop
    ctx->pc = 0x39c27cu;
    // NOP
    ctx->pc = 0x39c280u;
}
