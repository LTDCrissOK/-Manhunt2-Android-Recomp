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

// Function: sub_003AF910
// Address: 0x3af910 - 0x3af940
void sub_003AF910_0x3af910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF910_0x3af910");
#endif

    ctx->pc = 0x3af910u;

    // 0x3af910: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3af910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3af914: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x3af914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x3af918: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3af918u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x424770u));
    // 0x3af91c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3af91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3af920: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3af920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x424770u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x424770u, _value); } while (0);
    // 0x3af924: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3af924u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x424770u));
    // 0x3af928: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AF928u;
    {
        const bool branch_taken_0x3af928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF928u;
        // 0x3af92c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af928) {
            ctx->pc = 0x3AF934u;
            goto label_3af934;
        }
    }
    ctx->pc = 0x3AF930u;
    // 0x3af930: 0xac404768  sw          $zero, 0x4768($v0)
    ctx->pc = 0x3af930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18280), GPR_U32(ctx, 0));
label_3af934:
    // 0x3af934: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF93Cu;
    // 0x3af93c: 0x0  nop
    ctx->pc = 0x3af93cu;
    // NOP
    ctx->pc = 0x3af940u;
}
