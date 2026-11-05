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

// Function: sub_001AF87C
// Address: 0x1af87c - 0x1af898
void sub_001AF87C_0x1af87c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF87C_0x1af87c");
#endif

    switch (ctx->pc) {
        case 0x1af880u: goto label_1af880;
        case 0x1af884u: goto label_1af884;
        default: break;
    }

    ctx->pc = 0x1af87cu;

    // 0x1af87c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1af87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af880:
    // 0x1af880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af884:
    // 0x1af884: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af88c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF88Cu;
        // 0x1af890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF894u;
    // 0x1af894: 0x0  nop
    ctx->pc = 0x1af894u;
    // NOP
    ctx->pc = 0x1af898u;
}
