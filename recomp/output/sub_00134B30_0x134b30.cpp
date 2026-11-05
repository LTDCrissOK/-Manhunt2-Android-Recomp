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

// Function: sub_00134B30
// Address: 0x134b30 - 0x134b58
void sub_00134B30_0x134b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134B30_0x134b30");
#endif

    ctx->pc = 0x134b30u;

    // 0x134b30: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x134b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134b34: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x134b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x134b38: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x134b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x134b3c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x134b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x134b40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x134b44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x134b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x134b48: 0x8c650108  lw          $a1, 0x108($v1)
    ctx->pc = 0x134b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x134b4c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x134b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x134b50: 0x3e00008  jr          $ra
    ctx->pc = 0x134B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B50u;
        // 0x134b54: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134B58u;
}
