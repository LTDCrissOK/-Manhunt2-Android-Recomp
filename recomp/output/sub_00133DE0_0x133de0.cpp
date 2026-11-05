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

// Function: sub_00133DE0
// Address: 0x133de0 - 0x133e10
void sub_00133DE0_0x133de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133DE0_0x133de0");
#endif

    switch (ctx->pc) {
        case 0x133dfcu: goto label_133dfc;
        default: break;
    }

    ctx->pc = 0x133de0u;

    // 0x133de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133de8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133dec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x133df0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133df4: 0xc04bb7e  jal         func_12EDF8
    ctx->pc = 0x133DF4u;
    SET_GPR_U32(ctx, 31, 0x133DFCu);
    ctx->pc = 0x133DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DF4u;
    // 0x133df8: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EDF8u, 0x133DF4u, 0x133DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DFCu;
label_133dfc:
    // 0x133dfc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x133dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x133e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133e04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133e08: 0x3e00008  jr          $ra
    ctx->pc = 0x133E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E08u;
        // 0x133e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133E10u;
}
