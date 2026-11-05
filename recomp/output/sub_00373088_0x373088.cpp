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

// Function: sub_00373088
// Address: 0x373088 - 0x3730a8
void sub_00373088_0x373088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373088_0x373088");
#endif

    ctx->pc = 0x373088u;

    // 0x373088: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x373088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x37308c: 0x8c83ccc0  lw          $v1, -0x3340($a0)
    ctx->pc = 0x37308cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCCC0u));
    // 0x373090: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x373090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x373094: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x373094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x373098: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x373098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37309c: 0x3e00008  jr          $ra
    ctx->pc = 0x37309Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3730A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37309Cu;
        // 0x3730a0: 0x84620040  lh          $v0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37309Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3730A4u;
    // 0x3730a4: 0x0  nop
    ctx->pc = 0x3730a4u;
    // NOP
    ctx->pc = 0x3730a8u;
}
