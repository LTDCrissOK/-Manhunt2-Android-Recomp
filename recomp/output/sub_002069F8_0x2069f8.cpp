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

// Function: sub_002069F8
// Address: 0x2069f8 - 0x206a18
void sub_002069F8_0x2069f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002069F8_0x2069f8");
#endif

    switch (ctx->pc) {
        case 0x206a08u: goto label_206a08;
        default: break;
    }

    ctx->pc = 0x2069f8u;

    // 0x2069f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2069f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2069fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2069fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206a00: 0xc081584  jal         func_205610
    ctx->pc = 0x206A00u;
    SET_GPR_U32(ctx, 31, 0x206A08u);
    ctx->pc = 0x206A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A00u;
    // 0x206a04: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205610u, 0x206A00u, 0x206A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A08u;
label_206a08:
    // 0x206a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x206A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A0Cu;
        // 0x206a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206A14u;
    // 0x206a14: 0x0  nop
    ctx->pc = 0x206a14u;
    // NOP
    ctx->pc = 0x206a18u;
}
