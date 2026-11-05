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

// Function: sub_00294708
// Address: 0x294708 - 0x294738
void sub_00294708_0x294708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294708_0x294708");
#endif

    switch (ctx->pc) {
        case 0x29471cu: goto label_29471c;
        default: break;
    }

    ctx->pc = 0x294708u;

    // 0x294708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29470c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29470cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294710: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x294710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x294714: 0xc0a51ce  jal         func_294738
    ctx->pc = 0x294714u;
    SET_GPR_U32(ctx, 31, 0x29471Cu);
    ctx->pc = 0x294718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294714u;
    // 0x294718: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294738u, 0x294714u, 0x29471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29471Cu;
label_29471c:
    // 0x29471c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x29471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x294720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294724: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x294724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294728: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x294728u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x29472c: 0x3e00008  jr          $ra
    ctx->pc = 0x29472Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29472Cu;
        // 0x294730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29472Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294734u;
    // 0x294734: 0x0  nop
    ctx->pc = 0x294734u;
    // NOP
    ctx->pc = 0x294738u;
}
