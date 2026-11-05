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

// Function: sub_00200D60
// Address: 0x200d60 - 0x200d88
void sub_00200D60_0x200d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200D60_0x200d60");
#endif

    switch (ctx->pc) {
        case 0x200d78u: goto label_200d78;
        default: break;
    }

    ctx->pc = 0x200d60u;

    // 0x200d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200d64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200d64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200d6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x200d6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d70: 0xc081a06  jal         func_206818
    ctx->pc = 0x200D70u;
    SET_GPR_U32(ctx, 31, 0x200D78u);
    ctx->pc = 0x200D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D70u;
    // 0x200d74: 0x8c840038  lw          $a0, 0x38($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206818u, 0x200D70u, 0x200D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D78u;
label_200d78:
    // 0x200d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x200D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D7Cu;
        // 0x200d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200D84u;
    // 0x200d84: 0x0  nop
    ctx->pc = 0x200d84u;
    // NOP
    ctx->pc = 0x200d88u;
}
