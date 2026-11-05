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

// Function: sub_001E93F0
// Address: 0x1e93f0 - 0x1e9420
void sub_001E93F0_0x1e93f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E93F0_0x1e93f0");
#endif

    switch (ctx->pc) {
        case 0x1e9404u: goto label_1e9404;
        case 0x1e940cu: goto label_1e940c;
        default: break;
    }

    ctx->pc = 0x1e93f0u;

    // 0x1e93f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e93f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e93f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e93f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e93f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e93f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e93fc: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x1E93FCu;
    SET_GPR_U32(ctx, 31, 0x1E9404u);
    ctx->pc = 0x1E9400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E93FCu;
    // 0x1e9400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x1E93FCu, 0x1E9404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9404u;
label_1e9404:
    // 0x1e9404: 0xc07a508  jal         func_1E9420
    ctx->pc = 0x1E9404u;
    SET_GPR_U32(ctx, 31, 0x1E940Cu);
    ctx->pc = 0x1E9408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9404u;
    // 0x1e9408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9420u, 0x1E9404u, 0x1E940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E940Cu;
label_1e940c:
    // 0x1e940c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e940cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9410: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e9410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e9414: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e9414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9418: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9418u;
        // 0x1e941c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9420u;
}
