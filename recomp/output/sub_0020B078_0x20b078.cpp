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

// Function: sub_0020B078
// Address: 0x20b078 - 0x20b0b0
void sub_0020B078_0x20b078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B078_0x20b078");
#endif

    switch (ctx->pc) {
        case 0x20b090u: goto label_20b090;
        default: break;
    }

    ctx->pc = 0x20b078u;

    // 0x20b078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b07c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b084: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20b084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20b088: 0xc0abc30  jal         func_2AF0C0
    ctx->pc = 0x20B088u;
    SET_GPR_U32(ctx, 31, 0x20B090u);
    ctx->pc = 0x20B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B088u;
    // 0x20b08c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF0C0u, 0x20B088u, 0x20B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B090u;
label_20b090:
    // 0x20b090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b094: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20b094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20b098: 0xa2030049  sb          $v1, 0x49($s0)
    ctx->pc = 0x20b098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b09c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b0a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x20B0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0A4u;
        // 0x20b0a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B0ACu;
    // 0x20b0ac: 0x0  nop
    ctx->pc = 0x20b0acu;
    // NOP
    ctx->pc = 0x20b0b0u;
}
