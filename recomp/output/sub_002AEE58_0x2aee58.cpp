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

// Function: sub_002AEE58
// Address: 0x2aee58 - 0x2aee78
void sub_002AEE58_0x2aee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEE58_0x2aee58");
#endif

    ctx->pc = 0x2aee58u;

    // 0x2aee58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2aee58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2aee5c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2aee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2aee60: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2aee60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2aee64: 0xac40aa78  sw          $zero, -0x5588($v0)
    ctx->pc = 0x2aee64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FAA78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAA78u, _value); } while (0);
    // 0x2aee68: 0xac609618  sw          $zero, -0x69E8($v1)
    ctx->pc = 0x2aee68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9618u, _value); } while (0);
    // 0x2aee6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE6Cu;
        // 0x2aee70: 0xac80aa7c  sw          $zero, -0x5584($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294945404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEE74u;
    // 0x2aee74: 0x0  nop
    ctx->pc = 0x2aee74u;
    // NOP
    ctx->pc = 0x2aee78u;
}
