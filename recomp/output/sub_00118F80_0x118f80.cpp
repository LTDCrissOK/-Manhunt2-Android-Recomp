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

// Function: sub_00118F80
// Address: 0x118f80 - 0x118fc0
void sub_00118F80_0x118f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118F80_0x118f80");
#endif

    switch (ctx->pc) {
        case 0x118f88u: goto label_118f88;
        case 0x118f98u: goto label_118f98;
        default: break;
    }

    ctx->pc = 0x118f80u;

    // 0x118f80: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x118f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118f84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x118f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_118f88:
    // 0x118f88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x118f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x118f8c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x118f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118f90: 0x3e00008  jr          $ra
    ctx->pc = 0x118F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F90u;
        // 0x118f94: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118F98u;
label_118f98:
    // 0x118f98: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x118f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118f9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x118f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118fa0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x118fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x118fa4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x118fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118fa8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x118fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x118fac: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x118facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118fb0: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x118fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x118fb4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x118fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x118fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x118FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118FB8u;
        // 0x118fbc: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118FC0u;
}
