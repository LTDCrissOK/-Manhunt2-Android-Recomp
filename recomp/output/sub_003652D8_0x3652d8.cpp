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

// Function: sub_003652D8
// Address: 0x3652d8 - 0x365318
void sub_003652D8_0x3652d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003652D8_0x3652d8");
#endif

    switch (ctx->pc) {
        case 0x3652fcu: goto label_3652fc;
        default: break;
    }

    ctx->pc = 0x3652d8u;

    // 0x3652d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3652d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3652dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3652dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3652e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3652e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3652e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3652e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3652e8: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x3652e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x3652ec: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3652ECu;
    {
        const bool branch_taken_0x3652ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3652ec) {
            ctx->pc = 0x3652F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3652ECu;
            // 0x3652f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365304u;
            goto label_365304;
        }
    }
    ctx->pc = 0x3652F4u;
    // 0x3652f4: 0xc0d4406  jal         func_351018
    ctx->pc = 0x3652F4u;
    SET_GPR_U32(ctx, 31, 0x3652FCu);
    ctx->pc = 0x3652F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3652F4u;
    // 0x3652f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351018u, 0x3652F4u, 0x3652FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3652FCu;
label_3652fc:
    // 0x3652fc: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x3652fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x365300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x365300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_365304:
    // 0x365304: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x365304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x365308: 0x3e00008  jr          $ra
    ctx->pc = 0x365308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365308u;
        // 0x36530c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365310u;
    // 0x365310: 0x0  nop
    ctx->pc = 0x365310u;
    // NOP
    // 0x365314: 0x0  nop
    ctx->pc = 0x365314u;
    // NOP
    ctx->pc = 0x365318u;
}
