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

// Function: sub_001B56D8
// Address: 0x1b56d8 - 0x1b5718
void sub_001B56D8_0x1b56d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B56D8_0x1b56d8");
#endif

    switch (ctx->pc) {
        case 0x1b56f0u: goto label_1b56f0;
        default: break;
    }

    ctx->pc = 0x1b56d8u;

    // 0x1b56d8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1b56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1b56dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1b56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1b56e0: 0x24458998  addiu       $a1, $v0, -0x7668
    ctx->pc = 0x1b56e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936984));
    // 0x1b56e4: 0x24638990  addiu       $v1, $v1, -0x7670
    ctx->pc = 0x1b56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936976));
    // 0x1b56e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b56e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56ec: 0x0  nop
    ctx->pc = 0x1b56ecu;
    // NOP
label_1b56f0:
    // 0x1b56f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1b56f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1b56f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b56f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b56f8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1b56f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1b56fc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1b56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b5700: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x1b5700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b5704: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5704u;
    {
        const bool branch_taken_0x1b5704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5704u;
        // 0x1b5708: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5704) {
            ctx->pc = 0x1B56F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b56f0;
        }
    }
    ctx->pc = 0x1B570Cu;
    // 0x1b570c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B570Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B570Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5714u;
    // 0x1b5714: 0x0  nop
    ctx->pc = 0x1b5714u;
    // NOP
    ctx->pc = 0x1b5718u;
}
