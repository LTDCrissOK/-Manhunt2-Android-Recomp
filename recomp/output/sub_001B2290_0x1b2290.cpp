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

// Function: sub_001B2290
// Address: 0x1b2290 - 0x1b22e0
void sub_001B2290_0x1b2290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2290_0x1b2290");
#endif

    switch (ctx->pc) {
        case 0x1b22acu: goto label_1b22ac;
        case 0x1b22d0u: goto label_1b22d0;
        default: break;
    }

    ctx->pc = 0x1b2290u;

    // 0x1b2290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2294: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b2294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b229c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b229cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b22a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b22a4: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B22A4u;
    SET_GPR_U32(ctx, 31, 0x1B22ACu);
    ctx->pc = 0x1B22A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22A4u;
    // 0x1b22a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B22A4u, 0x1B22ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22ACu;
label_1b22ac:
    // 0x1b22ac: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1b22acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1b22b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B22B0u;
    {
        const bool branch_taken_0x1b22b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22B0u;
        // 0x1b22b4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22b0) {
            ctx->pc = 0x1B22D0u;
            goto label_1b22d0;
        }
    }
    ctx->pc = 0x1B22B8u;
    // 0x1b22b8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1b22b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b22bc: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B22BCu;
    {
        const bool branch_taken_0x1b22bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b22bc) {
            ctx->pc = 0x1B22C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B22BCu;
            // 0x1b22c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B22D4u;
            goto label_1b22d4;
        }
    }
    ctx->pc = 0x1B22C4u;
    // 0x1b22c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b22c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22c8: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1B22C8u;
    SET_GPR_U32(ctx, 31, 0x1B22D0u);
    ctx->pc = 0x1B22CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22C8u;
    // 0x1b22cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1B22C8u, 0x1B22D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B22D0u;
label_1b22d0:
    // 0x1b22d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b22d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b22d4:
    // 0x1b22d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b22d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b22d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B22D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22D8u;
        // 0x1b22dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B22D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B22E0u;
}
