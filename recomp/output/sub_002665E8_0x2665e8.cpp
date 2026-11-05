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

// Function: sub_002665E8
// Address: 0x2665e8 - 0x266610
void sub_002665E8_0x2665e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002665E8_0x2665e8");
#endif

    switch (ctx->pc) {
        case 0x266604u: goto label_266604;
        default: break;
    }

    ctx->pc = 0x2665e8u;

    // 0x2665e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2665e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2665ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2665ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2665f0: 0x9082028e  lbu         $v0, 0x28E($a0)
    ctx->pc = 0x2665f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 654)));
    // 0x2665f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2665F4u;
    {
        const bool branch_taken_0x2665f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2665F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2665F4u;
        // 0x2665f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665f4) {
            ctx->pc = 0x266608u;
            goto label_266608;
        }
    }
    ctx->pc = 0x2665FCu;
    // 0x2665fc: 0xc099918  jal         func_266460
    ctx->pc = 0x2665FCu;
    SET_GPR_U32(ctx, 31, 0x266604u);
    ctx->pc = 0x266460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266460u, 0x2665FCu, 0x266604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266604u;
label_266604:
    // 0x266604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_266608:
    // 0x266608: 0x3e00008  jr          $ra
    ctx->pc = 0x266608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266608u;
        // 0x26660c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266610u;
}
