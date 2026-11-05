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

// Function: sub_00395958
// Address: 0x395958 - 0x395990
void sub_00395958_0x395958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395958_0x395958");
#endif

    switch (ctx->pc) {
        case 0x39596cu: goto label_39596c;
        case 0x395974u: goto label_395974;
        case 0x39597cu: goto label_39597c;
        default: break;
    }

    ctx->pc = 0x395958u;

    // 0x395958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39595c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39595cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395960: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x395960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x395964: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x395964u;
    SET_GPR_U32(ctx, 31, 0x39596Cu);
    ctx->pc = 0x395968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395964u;
    // 0x395968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x395964u, 0x39596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39596Cu;
label_39596c:
    // 0x39596c: 0xc0e5664  jal         func_395990
    ctx->pc = 0x39596Cu;
    SET_GPR_U32(ctx, 31, 0x395974u);
    ctx->pc = 0x395970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39596Cu;
    // 0x395970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395990u, 0x39596Cu, 0x395974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395974u;
label_395974:
    // 0x395974: 0xc0e579c  jal         func_395E70
    ctx->pc = 0x395974u;
    SET_GPR_U32(ctx, 31, 0x39597Cu);
    ctx->pc = 0x395978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395974u;
    // 0x395978: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E70u, 0x395974u, 0x39597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39597Cu;
label_39597c:
    // 0x39597c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39597cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395980: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395988: 0x3e00008  jr          $ra
    ctx->pc = 0x395988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395988u;
        // 0x39598c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395990u;
}
