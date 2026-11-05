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

// Function: sub_0016B6F0
// Address: 0x16b6f0 - 0x16b718
void sub_0016B6F0_0x16b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B6F0_0x16b6f0");
#endif

    ctx->pc = 0x16b6f0u;

    // 0x16b6f0: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x16b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x16b6f4: 0x8c820140  lw          $v0, 0x140($a0)
    ctx->pc = 0x16b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x16b6f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b6fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16b6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b700: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16b700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16b704: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x16b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x16b708: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16b708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16b70c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B70Cu;
        // 0x16b710: 0xac820148  sw          $v0, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B714u;
    // 0x16b714: 0x0  nop
    ctx->pc = 0x16b714u;
    // NOP
    ctx->pc = 0x16b718u;
}
