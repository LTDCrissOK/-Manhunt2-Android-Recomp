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

// Function: sub_0019E8F4
// Address: 0x19e8f4 - 0x19e910
void sub_0019E8F4_0x19e8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E8F4_0x19e8f4");
#endif

    switch (ctx->pc) {
        case 0x19e8fcu: goto label_19e8fc;
        case 0x19e900u: goto label_19e900;
        default: break;
    }

    ctx->pc = 0x19e8f4u;

    // 0x19e8f4: 0xc067b7c  jal         func_19EDF0
    ctx->pc = 0x19E8F4u;
    SET_GPR_U32(ctx, 31, 0x19E8FCu);
    ctx->pc = 0x19E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E8F4u;
    // 0x19e8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EDF0u, 0x19E8F4u, 0x19E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E8FCu;
label_19e8fc:
    // 0x19e8fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e900:
    // 0x19e900: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19e900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e904: 0x3e00008  jr          $ra
    ctx->pc = 0x19E904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E904u;
        // 0x19e908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E90Cu;
    // 0x19e90c: 0x0  nop
    ctx->pc = 0x19e90cu;
    // NOP
    ctx->pc = 0x19e910u;
}
