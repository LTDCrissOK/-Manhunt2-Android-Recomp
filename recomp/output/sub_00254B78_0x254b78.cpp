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

// Function: sub_00254B78
// Address: 0x254b78 - 0x254ba0
void sub_00254B78_0x254b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254B78_0x254b78");
#endif

    switch (ctx->pc) {
        case 0x254b8cu: goto label_254b8c;
        default: break;
    }

    ctx->pc = 0x254b78u;

    // 0x254b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254b7c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x254b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254b84: 0xc0952e8  jal         func_254BA0
    ctx->pc = 0x254B84u;
    SET_GPR_U32(ctx, 31, 0x254B8Cu);
    ctx->pc = 0x254B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B84u;
    // 0x254b88: 0x8c850fe4  lw          $a1, 0xFE4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x254B84u, 0x254B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B8Cu;
label_254b8c:
    // 0x254b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254b90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x254b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x254b94: 0x3e00008  jr          $ra
    ctx->pc = 0x254B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B94u;
        // 0x254b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254B9Cu;
    // 0x254b9c: 0x0  nop
    ctx->pc = 0x254b9cu;
    // NOP
    ctx->pc = 0x254ba0u;
}
