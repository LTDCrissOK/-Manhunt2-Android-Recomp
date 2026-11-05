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

// Function: sub_0010F8B0
// Address: 0x10f8b0 - 0x10f8f0
void sub_0010F8B0_0x10f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F8B0_0x10f8b0");
#endif

    switch (ctx->pc) {
        case 0x10f8dcu: goto label_10f8dc;
        default: break;
    }

    ctx->pc = 0x10f8b0u;

    // 0x10f8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f8b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f8b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10f8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10f8bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8c0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F8C0u;
    {
        const bool branch_taken_0x10f8c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8C0u;
        // 0x10f8c4: 0xae0501dc  sw          $a1, 0x1DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f8c0) {
            ctx->pc = 0x10F8E0u;
            goto label_10f8e0;
        }
    }
    ctx->pc = 0x10F8C8u;
    // 0x10f8c8: 0x8e0201ec  lw          $v0, 0x1EC($s0)
    ctx->pc = 0x10f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x10f8cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F8CCu;
    {
        const bool branch_taken_0x10f8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f8cc) {
            ctx->pc = 0x10F8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F8CCu;
            // 0x10f8d0: 0xae0001ec  sw          $zero, 0x1EC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F8E0u;
            goto label_10f8e0;
        }
    }
    ctx->pc = 0x10F8D4u;
    // 0x10f8d4: 0xc044b6c  jal         func_112DB0
    ctx->pc = 0x10F8D4u;
    SET_GPR_U32(ctx, 31, 0x10F8DCu);
    ctx->pc = 0x112DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112DB0u, 0x10F8D4u, 0x10F8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F8DCu;
label_10f8dc:
    // 0x10f8dc: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x10f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
label_10f8e0:
    // 0x10f8e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f8e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f8e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10f8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8E8u;
        // 0x10f8ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F8F0u;
}
