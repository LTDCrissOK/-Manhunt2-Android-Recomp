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

// Function: sub_00344FD0
// Address: 0x344fd0 - 0x344ff0
void sub_00344FD0_0x344fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344FD0_0x344fd0");
#endif

    ctx->pc = 0x344fd0u;

    // 0x344fd0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x344fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x344fd4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x344fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x344fd8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x344fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x344fdc: 0xac402cd4  sw          $zero, 0x2CD4($v0)
    ctx->pc = 0x344fdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482CD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CD4u, _value); } while (0);
    // 0x344fe0: 0xac602cd8  sw          $zero, 0x2CD8($v1)
    ctx->pc = 0x344fe0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482CD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CD8u, _value); } while (0);
    // 0x344fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x344FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FE4u;
        // 0x344fe8: 0xac802cdc  sw          $zero, 0x2CDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344FECu;
    // 0x344fec: 0x0  nop
    ctx->pc = 0x344fecu;
    // NOP
    ctx->pc = 0x344ff0u;
}
