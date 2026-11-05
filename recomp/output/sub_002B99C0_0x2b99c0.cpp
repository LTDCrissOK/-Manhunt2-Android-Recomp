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

// Function: sub_002B99C0
// Address: 0x2b99c0 - 0x2b99e8
void sub_002B99C0_0x2b99c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B99C0_0x2b99c0");
#endif

    switch (ctx->pc) {
        case 0x2b99d8u: goto label_2b99d8;
        default: break;
    }

    ctx->pc = 0x2b99c0u;

    // 0x2b99c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b99c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b99c4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2b99c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2b99c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b99c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b99cc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2b99ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2b99d0: 0xc0ae8ac  jal         func_2BA2B0
    ctx->pc = 0x2B99D0u;
    SET_GPR_U32(ctx, 31, 0x2B99D8u);
    ctx->pc = 0x2B99D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99D0u;
    // 0x2b99d4: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA2B0u, 0x2B99D0u, 0x2B99D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B99D8u;
label_2b99d8:
    // 0x2b99d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b99d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b99dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B99DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B99E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99DCu;
        // 0x2b99e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B99DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B99E4u;
    // 0x2b99e4: 0x0  nop
    ctx->pc = 0x2b99e4u;
    // NOP
    ctx->pc = 0x2b99e8u;
}
