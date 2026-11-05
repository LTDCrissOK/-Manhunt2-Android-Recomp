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

// Function: sub_002FCA00
// Address: 0x2fca00 - 0x2fca30
void sub_002FCA00_0x2fca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCA00_0x2fca00");
#endif

    ctx->pc = 0x2fca00u;

    // 0x2fca00: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fca00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2fca04: 0x9062b820  lbu         $v0, -0x47E0($v1)
    ctx->pc = 0x2fca04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FB820u));
    // 0x2fca08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCA08u;
    {
        const bool branch_taken_0x2fca08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA08u;
        // 0x2fca0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca08) {
            ctx->pc = 0x2FCA18u;
            goto label_2fca18;
        }
    }
    ctx->pc = 0x2FCA10u;
    // 0x2fca10: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA10u;
        // 0x2fca14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCA18u;
label_2fca18:
    // 0x2fca18: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fca18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fca1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fca20: 0x8c83b81c  lw          $v1, -0x47E4($a0)
    ctx->pc = 0x2fca20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB81Cu));
    // 0x2fca24: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCA24u;
        // 0x2fca28: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCA2Cu;
    // 0x2fca2c: 0x0  nop
    ctx->pc = 0x2fca2cu;
    // NOP
    ctx->pc = 0x2fca30u;
}
