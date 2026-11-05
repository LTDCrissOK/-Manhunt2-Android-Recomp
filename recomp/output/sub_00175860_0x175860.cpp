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

// Function: sub_00175860
// Address: 0x175860 - 0x175880
void sub_00175860_0x175860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175860_0x175860");
#endif

    switch (ctx->pc) {
        case 0x175870u: goto label_175870;
        default: break;
    }

    ctx->pc = 0x175860u;

    // 0x175860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175868: 0xc04f8da  jal         func_13E368
    ctx->pc = 0x175868u;
    SET_GPR_U32(ctx, 31, 0x175870u);
    ctx->pc = 0x17586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175868u;
    // 0x17586c: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E368u, 0x175868u, 0x175870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175870u;
label_175870:
    // 0x175870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175874: 0x3e00008  jr          $ra
    ctx->pc = 0x175874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175874u;
        // 0x175878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17587Cu;
    // 0x17587c: 0x0  nop
    ctx->pc = 0x17587cu;
    // NOP
    ctx->pc = 0x175880u;
}
