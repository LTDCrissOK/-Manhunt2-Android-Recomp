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

// Function: sub_00217698
// Address: 0x217698 - 0x2176d0
void sub_00217698_0x217698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217698_0x217698");
#endif

    switch (ctx->pc) {
        case 0x2176bcu: goto label_2176bc;
        default: break;
    }

    ctx->pc = 0x217698u;

    // 0x217698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21769c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2176a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2176a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2176a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2176a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176a8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2176a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2176ac: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2176ACu;
    {
        const bool branch_taken_0x2176ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2176B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176ACu;
        // 0x2176b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2176ac) {
            ctx->pc = 0x2176C0u;
            goto label_2176c0;
        }
    }
    ctx->pc = 0x2176B4u;
    // 0x2176b4: 0xc0c23a6  jal         func_308E98
    ctx->pc = 0x2176B4u;
    SET_GPR_U32(ctx, 31, 0x2176BCu);
    ctx->pc = 0x2176B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176B4u;
    // 0x2176b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308E98u, 0x2176B4u, 0x2176BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176BCu;
label_2176bc:
    // 0x2176bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2176bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2176c0:
    // 0x2176c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2176c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2176c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2176c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2176c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2176C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2176CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2176C8u;
        // 0x2176cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2176C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2176D0u;
}
