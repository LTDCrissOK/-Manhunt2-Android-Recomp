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

// Function: sub_003A8B10
// Address: 0x3a8b10 - 0x3a8b70
void sub_003A8B10_0x3a8b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8B10_0x3a8b10");
#endif

    switch (ctx->pc) {
        case 0x3a8b18u: goto label_3a8b18;
        case 0x3a8b48u: goto label_3a8b48;
        default: break;
    }

    ctx->pc = 0x3a8b10u;

    // 0x3a8b10: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8B10u;
    {
        const bool branch_taken_0x3a8b10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8b10) {
            ctx->pc = 0x3A8B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8B10u;
            // 0x3a8b14: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8B38u;
            goto label_3a8b38;
        }
    }
    ctx->pc = 0x3A8B18u;
label_3a8b18:
    // 0x3a8b18: 0x0  nop
    ctx->pc = 0x3a8b18u;
    // NOP
    // 0x3a8b1c: 0x0  nop
    ctx->pc = 0x3a8b1cu;
    // NOP
    // 0x3a8b20: 0x0  nop
    ctx->pc = 0x3a8b20u;
    // NOP
    // 0x3a8b24: 0x0  nop
    ctx->pc = 0x3a8b24u;
    // NOP
    // 0x3a8b28: 0x0  nop
    ctx->pc = 0x3a8b28u;
    // NOP
    // 0x3a8b2c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A8B2Cu;
    {
        const bool branch_taken_0x3a8b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8b2c) {
            ctx->pc = 0x3A8B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8b18;
        }
    }
    ctx->pc = 0x3A8B34u;
    // 0x3a8b34: 0x0  nop
    ctx->pc = 0x3a8b34u;
    // NOP
label_3a8b38:
    // 0x3a8b38: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A8B38u;
    {
        const bool branch_taken_0x3a8b38 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x3a8b38) {
            ctx->pc = 0x3A8B64u;
            goto label_3a8b64;
        }
    }
    ctx->pc = 0x3A8B40u;
    // 0x3a8b40: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a8b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a8b44: 0x0  nop
    ctx->pc = 0x3a8b44u;
    // NOP
label_3a8b48:
    // 0x3a8b48: 0x0  nop
    ctx->pc = 0x3a8b48u;
    // NOP
    // 0x3a8b4c: 0x0  nop
    ctx->pc = 0x3a8b4cu;
    // NOP
    // 0x3a8b50: 0x0  nop
    ctx->pc = 0x3a8b50u;
    // NOP
    // 0x3a8b54: 0x0  nop
    ctx->pc = 0x3a8b54u;
    // NOP
    // 0x3a8b58: 0x0  nop
    ctx->pc = 0x3a8b58u;
    // NOP
    // 0x3a8b5c: 0x54a0fffa  bnel        $a1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A8B5Cu;
    {
        const bool branch_taken_0x3a8b5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8b5c) {
            ctx->pc = 0x3A8B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8B5Cu;
            // 0x3a8b60: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8b48;
        }
    }
    ctx->pc = 0x3A8B64u;
label_3a8b64:
    // 0x3a8b64: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8B6Cu;
    // 0x3a8b6c: 0x0  nop
    ctx->pc = 0x3a8b6cu;
    // NOP
    ctx->pc = 0x3a8b70u;
}
