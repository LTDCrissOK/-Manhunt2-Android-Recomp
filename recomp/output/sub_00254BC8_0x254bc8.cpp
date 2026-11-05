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

// Function: sub_00254BC8
// Address: 0x254bc8 - 0x254bf8
void sub_00254BC8_0x254bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254BC8_0x254bc8");
#endif

    switch (ctx->pc) {
        case 0x254bdcu: goto label_254bdc;
        case 0x254be8u: goto label_254be8;
        default: break;
    }

    ctx->pc = 0x254bc8u;

    // 0x254bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254bd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x254bd4: 0xc09530a  jal         func_254C28
    ctx->pc = 0x254BD4u;
    SET_GPR_U32(ctx, 31, 0x254BDCu);
    ctx->pc = 0x254BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254BD4u;
    // 0x254bd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C28u, 0x254BD4u, 0x254BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BDCu;
label_254bdc:
    // 0x254bdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x254bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254be0: 0xc064162  jal         func_190588
    ctx->pc = 0x254BE0u;
    SET_GPR_U32(ctx, 31, 0x254BE8u);
    ctx->pc = 0x254BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254BE0u;
    // 0x254be4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190588u, 0x254BE0u, 0x254BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BE8u;
label_254be8:
    // 0x254be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254bec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x254becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x254BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BF0u;
        // 0x254bf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254BF8u;
}
