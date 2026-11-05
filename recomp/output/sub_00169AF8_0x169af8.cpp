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

// Function: sub_00169AF8
// Address: 0x169af8 - 0x169b18
void sub_00169AF8_0x169af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169AF8_0x169af8");
#endif

    switch (ctx->pc) {
        case 0x169b08u: goto label_169b08;
        default: break;
    }

    ctx->pc = 0x169af8u;

    // 0x169af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169afc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169b00: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x169B00u;
    SET_GPR_U32(ctx, 31, 0x169B08u);
    ctx->pc = 0x169B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169B00u;
    // 0x169b04: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x169B00u, 0x169B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169B08u;
label_169b08:
    // 0x169b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x169B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B0Cu;
        // 0x169b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169B14u;
    // 0x169b14: 0x0  nop
    ctx->pc = 0x169b14u;
    // NOP
    ctx->pc = 0x169b18u;
}
