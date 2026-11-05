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

// Function: sub_003A40EC
// Address: 0x3a40ec - 0x3a4110
void sub_003A40EC_0x3a40ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A40EC_0x3a40ec");
#endif

    switch (ctx->pc) {
        case 0x3a40f0u: goto label_3a40f0;
        case 0x3a4100u: goto label_3a4100;
        default: break;
    }

    ctx->pc = 0x3a40ecu;

    // 0x3a40ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a40ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a40f0:
    // 0x3a40f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a40f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a40f4: 0x80eb286  j           func_3ACA18
    ctx->pc = 0x3A40F4u;
    ctx->pc = 0x3A40F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A40F4u;
    // 0x3a40f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA18u;
    sub_003ACA18_0x3aca18(rdram, ctx, runtime); return;
    ctx->pc = 0x3A40FCu;
    // 0x3a40fc: 0x0  nop
    ctx->pc = 0x3a40fcu;
    // NOP
label_3a4100:
    // 0x3a4100: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a4100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a4104: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4104u;
        // 0x3a4108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A410Cu;
    // 0x3a410c: 0x0  nop
    ctx->pc = 0x3a410cu;
    // NOP
    ctx->pc = 0x3a4110u;
}
