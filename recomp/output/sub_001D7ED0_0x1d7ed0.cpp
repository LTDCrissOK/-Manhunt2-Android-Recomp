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

// Function: sub_001D7ED0
// Address: 0x1d7ed0 - 0x1d7f00
void sub_001D7ED0_0x1d7ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7ED0_0x1d7ed0");
#endif

    ctx->pc = 0x1d7ed0u;

    // 0x1d7ed0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1d7ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1d7ed4: 0x8cc29190  lw          $v0, -0x6E70($a2)
    ctx->pc = 0x1d7ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9190u));
    // 0x1d7ed8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7ED8u;
    {
        const bool branch_taken_0x1d7ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7ED8u;
        // 0x1d7edc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ed8) {
            ctx->pc = 0x1D7EF8u;
            goto label_1d7ef8;
        }
    }
    ctx->pc = 0x1D7EE0u;
    // 0x1d7ee0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d7ee4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1d7ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1d7ee8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7eec: 0xac659194  sw          $a1, -0x6E6C($v1)
    ctx->pc = 0x1d7eecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3F9194u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9194u, _value); } while (0);
    // 0x1d7ef0: 0xac829198  sw          $v0, -0x6E68($a0)
    ctx->pc = 0x1d7ef0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F9198u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9198u, _value); } while (0);
    // 0x1d7ef4: 0xacc59190  sw          $a1, -0x6E70($a2)
    ctx->pc = 0x1d7ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294939024), GPR_U32(ctx, 5));
label_1d7ef8:
    // 0x1d7ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F00u;
}
