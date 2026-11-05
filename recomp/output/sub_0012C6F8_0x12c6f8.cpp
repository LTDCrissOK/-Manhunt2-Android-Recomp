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

// Function: sub_0012C6F8
// Address: 0x12c6f8 - 0x12c738
void sub_0012C6F8_0x12c6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C6F8_0x12c6f8");
#endif

    switch (ctx->pc) {
        case 0x12c708u: goto label_12c708;
        default: break;
    }

    ctx->pc = 0x12c6f8u;

    // 0x12c6f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12c6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12c6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c700: 0x24a700c8  addiu       $a3, $a1, 0xC8
    ctx->pc = 0x12c700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 200));
    // 0x12c704: 0x24a600cc  addiu       $a2, $a1, 0xCC
    ctx->pc = 0x12c704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 204));
label_12c708:
    // 0x12c708: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x12c708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x12c70c: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x12c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x12c710: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12c710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12c714: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12c714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12c718: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x12c718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12c71c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x12c71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12c720: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x12c720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x12c724: 0x441fff8  bgez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12C724u;
    {
        const bool branch_taken_0x12c724 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C724u;
        // 0x12c728: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c724) {
            ctx->pc = 0x12C708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c708;
        }
    }
    ctx->pc = 0x12C72Cu;
    // 0x12c72c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C72Cu;
        // 0x12c730: 0xa0a004c8  sb          $zero, 0x4C8($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1224), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C734u;
    // 0x12c734: 0x0  nop
    ctx->pc = 0x12c734u;
    // NOP
    ctx->pc = 0x12c738u;
}
