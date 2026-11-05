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

// Function: sub_002D3E10
// Address: 0x2d3e10 - 0x2d3e40
void sub_002D3E10_0x2d3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3E10_0x2d3e10");
#endif

    ctx->pc = 0x2d3e10u;

    // 0x2d3e10: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d3e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3e14: 0x90c2007c  lbu         $v0, 0x7C($a2)
    ctx->pc = 0x2d3e14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x2d3e18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3E18u;
    {
        const bool branch_taken_0x2d3e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3E18u;
        // 0x2d3e1c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3e18) {
            ctx->pc = 0x2D3E34u;
            goto label_2d3e34;
        }
    }
    ctx->pc = 0x2D3E20u;
    // 0x2d3e20: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2d3e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2d3e24: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x2d3e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
    // 0x2d3e28: 0x8ca3b5ec  lw          $v1, -0x4A14($a1)
    ctx->pc = 0x2d3e28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB5ECu));
    // 0x2d3e2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d3e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3e30: 0xacc20078  sw          $v0, 0x78($a2)
    ctx->pc = 0x2d3e30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 2));
label_2d3e34:
    // 0x2d3e34: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3E3Cu;
    // 0x2d3e3c: 0x0  nop
    ctx->pc = 0x2d3e3cu;
    // NOP
    ctx->pc = 0x2d3e40u;
}
