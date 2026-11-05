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

// Function: sub_00168548
// Address: 0x168548 - 0x168568
void sub_00168548_0x168548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168548_0x168548");
#endif

    switch (ctx->pc) {
        case 0x168558u: goto label_168558;
        default: break;
    }

    ctx->pc = 0x168548u;

    // 0x168548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16854c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168550: 0xc04f0e2  jal         func_13C388
    ctx->pc = 0x168550u;
    SET_GPR_U32(ctx, 31, 0x168558u);
    ctx->pc = 0x168554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168550u;
    // 0x168554: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C388u, 0x168550u, 0x168558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168558u;
label_168558:
    // 0x168558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16855c: 0x3e00008  jr          $ra
    ctx->pc = 0x16855Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16855Cu;
        // 0x168560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16855Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168564u;
    // 0x168564: 0x0  nop
    ctx->pc = 0x168564u;
    // NOP
    ctx->pc = 0x168568u;
}
