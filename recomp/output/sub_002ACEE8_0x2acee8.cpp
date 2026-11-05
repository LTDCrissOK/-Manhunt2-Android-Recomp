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

// Function: sub_002ACEE8
// Address: 0x2acee8 - 0x2acf18
void sub_002ACEE8_0x2acee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACEE8_0x2acee8");
#endif

    switch (ctx->pc) {
        case 0x2acf00u: goto label_2acf00;
        default: break;
    }

    ctx->pc = 0x2acee8u;

    // 0x2acee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2acee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aceec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2acef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2acef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acef4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2acef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2acef8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2ACEF8u;
    SET_GPR_U32(ctx, 31, 0x2ACF00u);
    ctx->pc = 0x2ACEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACEF8u;
    // 0x2acefc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2ACEF8u, 0x2ACF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACF00u;
label_2acf00:
    // 0x2acf00: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2acf00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2acf04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2acf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acf08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2acf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2acf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACF0Cu;
        // 0x2acf10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACF14u;
    // 0x2acf14: 0x0  nop
    ctx->pc = 0x2acf14u;
    // NOP
    ctx->pc = 0x2acf18u;
}
