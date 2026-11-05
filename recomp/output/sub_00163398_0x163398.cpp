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

// Function: sub_00163398
// Address: 0x163398 - 0x1633b8
void sub_00163398_0x163398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163398_0x163398");
#endif

    switch (ctx->pc) {
        case 0x1633a8u: goto label_1633a8;
        default: break;
    }

    ctx->pc = 0x163398u;

    // 0x163398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x163398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16339c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1633a0: 0xc04f0e2  jal         func_13C388
    ctx->pc = 0x1633A0u;
    SET_GPR_U32(ctx, 31, 0x1633A8u);
    ctx->pc = 0x1633A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1633A0u;
    // 0x1633a4: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C388u, 0x1633A0u, 0x1633A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1633A8u;
label_1633a8:
    // 0x1633a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1633a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1633ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1633ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1633B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633ACu;
        // 0x1633b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1633ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1633B4u;
    // 0x1633b4: 0x0  nop
    ctx->pc = 0x1633b4u;
    // NOP
    ctx->pc = 0x1633b8u;
}
