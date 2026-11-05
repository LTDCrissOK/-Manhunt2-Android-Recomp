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

// Function: sub_003A5CE8
// Address: 0x3a5ce8 - 0x3a5d20
void sub_003A5CE8_0x3a5ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5CE8_0x3a5ce8");
#endif

    switch (ctx->pc) {
        case 0x3a5cf8u: goto label_3a5cf8;
        default: break;
    }

    ctx->pc = 0x3a5ce8u;

    // 0x3a5ce8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a5cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5cf0: 0x244339a0  addiu       $v1, $v0, 0x39A0
    ctx->pc = 0x3a5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 14752));
    // 0x3a5cf4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3a5cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3a5cf8:
    // 0x3a5cf8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3a5cf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a5cfc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3a5cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3a5d00: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3a5d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3a5d04: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3a5d04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3a5d08: 0x0  nop
    ctx->pc = 0x3a5d08u;
    // NOP
    // 0x3a5d0c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A5D0Cu;
    {
        const bool branch_taken_0x3a5d0c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3A5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D0Cu;
        // 0x3a5d10: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5d0c) {
            ctx->pc = 0x3A5CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5cf8;
        }
    }
    ctx->pc = 0x3A5D14u;
    // 0x3a5d14: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5D14u;
        // 0x3a5d18: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5D1Cu;
    // 0x3a5d1c: 0x0  nop
    ctx->pc = 0x3a5d1cu;
    // NOP
    ctx->pc = 0x3a5d20u;
}
