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

// Function: sub_00344FF0
// Address: 0x344ff0 - 0x345010
void sub_00344FF0_0x344ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344FF0_0x344ff0");
#endif

    ctx->pc = 0x344ff0u;

    // 0x344ff0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x344ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x344ff4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x344ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x344ff8: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x344ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x344ffc: 0xac452cd4  sw          $a1, 0x2CD4($v0)
    ctx->pc = 0x344ffcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x482CD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CD4u, _value); } while (0);
    // 0x345000: 0xac662cd8  sw          $a2, 0x2CD8($v1)
    ctx->pc = 0x345000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x482CD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CD8u, _value); } while (0);
    // 0x345004: 0x3e00008  jr          $ra
    ctx->pc = 0x345004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345004u;
        // 0x345008: 0xace42cdc  sw          $a0, 0x2CDC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 11484), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34500Cu;
    // 0x34500c: 0x0  nop
    ctx->pc = 0x34500cu;
    // NOP
    ctx->pc = 0x345010u;
}
