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

// Function: sub_003A6AA8
// Address: 0x3a6aa8 - 0x3a6ad8
void sub_003A6AA8_0x3a6aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6AA8_0x3a6aa8");
#endif

    ctx->pc = 0x3a6aa8u;

    // 0x3a6aa8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A6AA8u;
    {
        const bool branch_taken_0x3a6aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6AA8u;
        // 0x3a6aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6aa8) {
            ctx->pc = 0x3A6AC8u;
            goto label_3a6ac8;
        }
    }
    ctx->pc = 0x3A6AB0u;
    // 0x3a6ab0: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6AB0u;
    {
        const bool branch_taken_0x3a6ab0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6AB0u;
        // 0x3a6ab4: 0x3c030041  lui         $v1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6ab0) {
            ctx->pc = 0x3A6ACCu;
            goto label_3a6acc;
        }
    }
    ctx->pc = 0x3A6AB8u;
    // 0x3a6ab8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a6abc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6ABCu;
        // 0x3a6ac0: 0xac443d50  sw          $a0, 0x3D50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15696), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6AC4u;
    // 0x3a6ac4: 0x0  nop
    ctx->pc = 0x3a6ac4u;
    // NOP
label_3a6ac8:
    // 0x3a6ac8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a6ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_3a6acc:
    // 0x3a6acc: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x3a6accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x3a6ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6AD0u;
        // 0x3a6ad4: 0xac623d50  sw          $v0, 0x3D50($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 15696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6AD8u;
}
