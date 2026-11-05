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

// Function: sub_00321EF8
// Address: 0x321ef8 - 0x321f18
void sub_00321EF8_0x321ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321EF8_0x321ef8");
#endif

    switch (ctx->pc) {
        case 0x321f08u: goto label_321f08;
        default: break;
    }

    ctx->pc = 0x321ef8u;

    // 0x321ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x321efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x321f00: 0xc0c8684  jal         func_321A10
    ctx->pc = 0x321F00u;
    SET_GPR_U32(ctx, 31, 0x321F08u);
    ctx->pc = 0x321F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F00u;
    // 0x321f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321A10u, 0x321F00u, 0x321F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F08u;
label_321f08:
    // 0x321f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x321F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F0Cu;
        // 0x321f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321F14u;
    // 0x321f14: 0x0  nop
    ctx->pc = 0x321f14u;
    // NOP
    ctx->pc = 0x321f18u;
}
