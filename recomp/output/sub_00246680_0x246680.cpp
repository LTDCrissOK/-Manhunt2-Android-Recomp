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

// Function: sub_00246680
// Address: 0x246680 - 0x2466c0
void sub_00246680_0x246680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246680_0x246680");
#endif

    switch (ctx->pc) {
        case 0x2466a0u: goto label_2466a0;
        case 0x2466acu: goto label_2466ac;
        default: break;
    }

    ctx->pc = 0x246680u;

    // 0x246680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24668c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24668cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246690: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x246690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x246694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246698: 0xc08f5b4  jal         func_23D6D0
    ctx->pc = 0x246698u;
    SET_GPR_U32(ctx, 31, 0x2466A0u);
    ctx->pc = 0x24669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246698u;
    // 0x24669c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6D0u, 0x246698u, 0x2466A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466A0u;
label_2466a0:
    // 0x2466a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2466a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2466a4: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x2466A4u;
    SET_GPR_U32(ctx, 31, 0x2466ACu);
    ctx->pc = 0x2466A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2466A4u;
    // 0x2466a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2466A4u, 0x2466ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2466ACu;
label_2466ac:
    // 0x2466ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2466acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2466b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2466b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2466b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2466B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2466B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466B4u;
        // 0x2466b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2466B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2466BCu;
    // 0x2466bc: 0x0  nop
    ctx->pc = 0x2466bcu;
    // NOP
    ctx->pc = 0x2466c0u;
}
