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

// Function: sub_0037C7C8
// Address: 0x37c7c8 - 0x37c800
void sub_0037C7C8_0x37c7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C7C8_0x37c7c8");
#endif

    switch (ctx->pc) {
        case 0x37c7e4u: goto label_37c7e4;
        default: break;
    }

    ctx->pc = 0x37c7c8u;

    // 0x37c7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37c7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37c7cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c7d0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x37c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x37c7d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37C7D4u;
    {
        const bool branch_taken_0x37c7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C7D4u;
        // 0x37c7d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c7d4) {
            ctx->pc = 0x37C7E4u;
            goto label_37c7e4;
        }
    }
    ctx->pc = 0x37C7DCu;
    // 0x37c7dc: 0xc0df14a  jal         func_37C528
    ctx->pc = 0x37C7DCu;
    SET_GPR_U32(ctx, 31, 0x37C7E4u);
    ctx->pc = 0x37C528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C528u, 0x37C7DCu, 0x37C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C7E4u;
label_37c7e4:
    // 0x37c7e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x37C7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C7E8u;
        // 0x37c7ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C7F0u;
    // 0x37c7f0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x37c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x37c7f4: 0x0  nop
    ctx->pc = 0x37c7f4u;
    // NOP
    // 0x37c7f8: 0x0  nop
    ctx->pc = 0x37c7f8u;
    // NOP
    // 0x37c7fc: 0x0  nop
    ctx->pc = 0x37c7fcu;
    // NOP
    ctx->pc = 0x37c800u;
}
