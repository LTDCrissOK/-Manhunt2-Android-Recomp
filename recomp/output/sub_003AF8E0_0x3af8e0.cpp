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

// Function: sub_003AF8E0
// Address: 0x3af8e0 - 0x3af910
void sub_003AF8E0_0x3af8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF8E0_0x3af8e0");
#endif

    ctx->pc = 0x3af8e0u;

    // 0x3af8e0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3af8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3af8e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3af8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af8e8: 0x24634770  addiu       $v1, $v1, 0x4770
    ctx->pc = 0x3af8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18288));
    // 0x3af8ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3af8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x424770u));
    // 0x3af8f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3af8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3af8f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3af8f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x424770u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x424770u, _value); } while (0);
    // 0x3af8f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3af8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x424770u));
    // 0x3af8fc: 0x14850002  bne         $a0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AF8FCu;
    {
        const bool branch_taken_0x3af8fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3AF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF8FCu;
        // 0x3af900: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af8fc) {
            ctx->pc = 0x3AF908u;
            goto label_3af908;
        }
    }
    ctx->pc = 0x3AF904u;
    // 0x3af904: 0xac404768  sw          $zero, 0x4768($v0)
    ctx->pc = 0x3af904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18280), GPR_U32(ctx, 0));
label_3af908:
    // 0x3af908: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF910u;
}
