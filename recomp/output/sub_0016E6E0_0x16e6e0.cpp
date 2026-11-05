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

// Function: sub_0016E6E0
// Address: 0x16e6e0 - 0x16e718
void sub_0016E6E0_0x16e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E6E0_0x16e6e0");
#endif

    switch (ctx->pc) {
        case 0x16e6f4u: goto label_16e6f4;
        case 0x16e6fcu: goto label_16e6fc;
        case 0x16e704u: goto label_16e704;
        default: break;
    }

    ctx->pc = 0x16e6e0u;

    // 0x16e6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e6e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e6ec: 0xc04f820  jal         func_13E080
    ctx->pc = 0x16E6ECu;
    SET_GPR_U32(ctx, 31, 0x16E6F4u);
    ctx->pc = 0x16E6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6ECu;
    // 0x16e6f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x16E6ECu, 0x16E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E6F4u;
label_16e6f4:
    // 0x16e6f4: 0xc05b3da  jal         func_16CF68
    ctx->pc = 0x16E6F4u;
    SET_GPR_U32(ctx, 31, 0x16E6FCu);
    ctx->pc = 0x16E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6F4u;
    // 0x16e6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF68u, 0x16E6F4u, 0x16E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E6FCu;
label_16e6fc:
    // 0x16e6fc: 0xc05ba08  jal         func_16E820
    ctx->pc = 0x16E6FCu;
    SET_GPR_U32(ctx, 31, 0x16E704u);
    ctx->pc = 0x16E700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E6FCu;
    // 0x16e700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E820u, 0x16E6FCu, 0x16E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E704u;
label_16e704:
    // 0x16e704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e708: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e70c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E70Cu;
        // 0x16e710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E714u;
    // 0x16e714: 0x0  nop
    ctx->pc = 0x16e714u;
    // NOP
    ctx->pc = 0x16e718u;
}
