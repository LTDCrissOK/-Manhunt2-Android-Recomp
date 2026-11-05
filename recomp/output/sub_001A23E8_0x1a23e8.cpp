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

// Function: sub_001A23E8
// Address: 0x1a23e8 - 0x1a2418
void sub_001A23E8_0x1a23e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A23E8_0x1a23e8");
#endif

    ctx->pc = 0x1a23e8u;

    // 0x1a23e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a23ec: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1a23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1a23f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1a23f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1a23f4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1a23f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1a23f8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x1a23f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x1a23fc: 0xac400924  sw          $zero, 0x924($v0)
    ctx->pc = 0x1a23fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F0924u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0924u, _value); } while (0);
    // 0x1a2400: 0xac600928  sw          $zero, 0x928($v1)
    ctx->pc = 0x1a2400u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F0928u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0928u, _value); } while (0);
    // 0x1a2404: 0xac80092c  sw          $zero, 0x92C($a0)
    ctx->pc = 0x1a2404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F092Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F092Cu, _value); } while (0);
    // 0x1a2408: 0xaca00930  sw          $zero, 0x930($a1)
    ctx->pc = 0x1a2408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F0930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0930u, _value); } while (0);
    // 0x1a240c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A240Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A240Cu;
        // 0x1a2410: 0xacc00934  sw          $zero, 0x934($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A240Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2414u;
    // 0x1a2414: 0x0  nop
    ctx->pc = 0x1a2414u;
    // NOP
    ctx->pc = 0x1a2418u;
}
