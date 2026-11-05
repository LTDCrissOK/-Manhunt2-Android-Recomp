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

// Function: sub_0029C758
// Address: 0x29c758 - 0x29c780
void sub_0029C758_0x29c758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C758_0x29c758");
#endif

    switch (ctx->pc) {
        case 0x29c770u: goto label_29c770;
        default: break;
    }

    ctx->pc = 0x29c758u;

    // 0x29c758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c75c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x29c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x29c760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c764: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c768: 0xc0a6dc6  jal         func_29B718
    ctx->pc = 0x29C768u;
    SET_GPR_U32(ctx, 31, 0x29C770u);
    ctx->pc = 0x29C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C768u;
    // 0x29c76c: 0x24841268  addiu       $a0, $a0, 0x1268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B718u, 0x29C768u, 0x29C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C770u;
label_29c770:
    // 0x29c770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c774: 0x3e00008  jr          $ra
    ctx->pc = 0x29C774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C774u;
        // 0x29c778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C77Cu;
    // 0x29c77c: 0x0  nop
    ctx->pc = 0x29c77cu;
    // NOP
    ctx->pc = 0x29c780u;
}
