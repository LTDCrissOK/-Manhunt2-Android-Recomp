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

// Function: sub_003CAA18
// Address: 0x3caa18 - 0x3caa40
void sub_003CAA18_0x3caa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CAA18_0x3caa18");
#endif

    ctx->pc = 0x3caa18u;

    // 0x3caa18: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3caa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3caa1c: 0x24431980  addiu       $v1, $v0, 0x1980
    ctx->pc = 0x3caa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x3caa20: 0xac441980  sw          $a0, 0x1980($v0)
    ctx->pc = 0x3caa20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x661980u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x661980u, _value); } while (0);
    // 0x3caa24: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x3caa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3caa28: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3caa28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3caa2c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x3caa2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x661988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x661988u, _value); } while (0);
    // 0x3caa30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3caa30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x661984u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x661984u, _value); } while (0);
    // 0x3caa34: 0x3e00008  jr          $ra
    ctx->pc = 0x3CAA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CAA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA34u;
        // 0x3caa38: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CAA3Cu;
    // 0x3caa3c: 0x0  nop
    ctx->pc = 0x3caa3cu;
    // NOP
    ctx->pc = 0x3caa40u;
}
