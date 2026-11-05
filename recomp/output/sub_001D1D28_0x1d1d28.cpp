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

// Function: sub_001D1D28
// Address: 0x1d1d28 - 0x1d1d68
void sub_001D1D28_0x1d1d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1D28_0x1d1d28");
#endif

    switch (ctx->pc) {
        case 0x1d1d48u: goto label_1d1d48;
        default: break;
    }

    ctx->pc = 0x1d1d28u;

    // 0x1d1d28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d1d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d1d2c: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D1D2Cu;
    {
        const bool branch_taken_0x1d1d2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1d2c) {
            ctx->pc = 0x1D1D60u;
            goto label_1d1d60;
        }
    }
    ctx->pc = 0x1D1D34u;
    // 0x1d1d34: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D1D34u;
    {
        const bool branch_taken_0x1d1d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D34u;
        // 0x1d1d38: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d34) {
            ctx->pc = 0x1D1D60u;
            goto label_1d1d60;
        }
    }
    ctx->pc = 0x1D1D3Cu;
    // 0x1d1d3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d1d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1d40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1d44: 0x0  nop
    ctx->pc = 0x1d1d44u;
    // NOP
label_1d1d48:
    // 0x1d1d48: 0x0  nop
    ctx->pc = 0x1d1d48u;
    // NOP
    // 0x1d1d4c: 0x0  nop
    ctx->pc = 0x1d1d4cu;
    // NOP
    // 0x1d1d50: 0x0  nop
    ctx->pc = 0x1d1d50u;
    // NOP
    // 0x1d1d54: 0x0  nop
    ctx->pc = 0x1d1d54u;
    // NOP
    // 0x1d1d58: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D1D58u;
    {
        const bool branch_taken_0x1d1d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D58u;
        // 0x1d1d5c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d58) {
            ctx->pc = 0x1D1D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1d48;
        }
    }
    ctx->pc = 0x1D1D60u;
label_1d1d60:
    // 0x1d1d60: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1D68u;
}
