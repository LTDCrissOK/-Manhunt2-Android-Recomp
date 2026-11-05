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

// Function: sub_00281318
// Address: 0x281318 - 0x281338
void sub_00281318_0x281318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281318_0x281318");
#endif

    ctx->pc = 0x281318u;

    // 0x281318: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x281318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28131c: 0x2442f130  addiu       $v0, $v0, -0xED0
    ctx->pc = 0x28131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963504));
    // 0x281320: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x281320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BF158u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BF158u, _value); } while (0);
    // 0x281324: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x281324u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BF14Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BF14Cu, _value); } while (0);
    // 0x281328: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x281328u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BF150u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BF150u, _value); } while (0);
    // 0x28132c: 0x3e00008  jr          $ra
    ctx->pc = 0x28132Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28132Cu;
        // 0x281330: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28132Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281334u;
    // 0x281334: 0x0  nop
    ctx->pc = 0x281334u;
    // NOP
    ctx->pc = 0x281338u;
}
