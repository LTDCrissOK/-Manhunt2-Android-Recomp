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

// Function: sub_0012C6B8
// Address: 0x12c6b8 - 0x12c6e8
void sub_0012C6B8_0x12c6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C6B8_0x12c6b8");
#endif

    switch (ctx->pc) {
        case 0x12c6c8u: goto label_12c6c8;
        default: break;
    }

    ctx->pc = 0x12c6b8u;

    // 0x12c6b8: 0x24840085  addiu       $a0, $a0, 0x85
    ctx->pc = 0x12c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 133));
    // 0x12c6bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6c0: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x12c6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12c6c4: 0x0  nop
    ctx->pc = 0x12c6c4u;
    // NOP
label_12c6c8:
    // 0x12c6c8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x12c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12c6cc: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x12c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12c6d0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x12c6d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12c6d4: 0x2ca20041  sltiu       $v0, $a1, 0x41
    ctx->pc = 0x12c6d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x12c6d8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12C6D8u;
    {
        const bool branch_taken_0x12c6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6D8u;
        // 0x12c6dc: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6d8) {
            ctx->pc = 0x12C6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c6c8;
        }
    }
    ctx->pc = 0x12C6E0u;
    // 0x12c6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x12C6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C6E8u;
}
