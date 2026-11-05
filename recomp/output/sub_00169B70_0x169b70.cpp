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

// Function: sub_00169B70
// Address: 0x169b70 - 0x169b90
void sub_00169B70_0x169b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169B70_0x169b70");
#endif

    switch (ctx->pc) {
        case 0x169b80u: goto label_169b80;
        default: break;
    }

    ctx->pc = 0x169b70u;

    // 0x169b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169b78: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x169B78u;
    SET_GPR_U32(ctx, 31, 0x169B80u);
    ctx->pc = 0x169B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B78u;
    // 0x169b7c: 0x24840093  addiu       $a0, $a0, 0x93 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 147));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x169B78u, 0x169B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B80u;
label_169b80:
    // 0x169b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169b84: 0x3e00008  jr          $ra
    ctx->pc = 0x169B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B84u;
        // 0x169b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169B8Cu;
    // 0x169b8c: 0x0  nop
    ctx->pc = 0x169b8cu;
    // NOP
    ctx->pc = 0x169b90u;
}
