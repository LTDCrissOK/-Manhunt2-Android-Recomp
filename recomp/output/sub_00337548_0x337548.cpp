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

// Function: sub_00337548
// Address: 0x337548 - 0x337570
void sub_00337548_0x337548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337548_0x337548");
#endif

    switch (ctx->pc) {
        case 0x337560u: goto label_337560;
        default: break;
    }

    ctx->pc = 0x337548u;

    // 0x337548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33754c: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x33754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x337550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x337550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x337554: 0x240500ac  addiu       $a1, $zero, 0xAC
    ctx->pc = 0x337554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x337558: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x337558u;
    SET_GPR_U32(ctx, 31, 0x337560u);
    ctx->pc = 0x33755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337558u;
    // 0x33755c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x337558u, 0x337560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337560u;
label_337560:
    // 0x337560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x337560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337564: 0x3e00008  jr          $ra
    ctx->pc = 0x337564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337564u;
        // 0x337568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33756Cu;
    // 0x33756c: 0x0  nop
    ctx->pc = 0x33756cu;
    // NOP
    ctx->pc = 0x337570u;
}
