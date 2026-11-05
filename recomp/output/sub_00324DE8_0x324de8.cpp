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

// Function: sub_00324DE8
// Address: 0x324de8 - 0x324e10
void sub_00324DE8_0x324de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324DE8_0x324de8");
#endif

    switch (ctx->pc) {
        case 0x324dfcu: goto label_324dfc;
        default: break;
    }

    ctx->pc = 0x324de8u;

    // 0x324de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x324dec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x324decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324df4: 0xc0c9328  jal         func_324CA0
    ctx->pc = 0x324DF4u;
    SET_GPR_U32(ctx, 31, 0x324DFCu);
    ctx->pc = 0x324DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DF4u;
    // 0x324df8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x324CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324CA0u, 0x324DF4u, 0x324DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324DFCu;
label_324dfc:
    // 0x324dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324e00: 0x3e00008  jr          $ra
    ctx->pc = 0x324E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E00u;
        // 0x324e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324E08u;
    // 0x324e08: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x324e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x324e0c: 0x0  nop
    ctx->pc = 0x324e0cu;
    // NOP
    ctx->pc = 0x324e10u;
}
