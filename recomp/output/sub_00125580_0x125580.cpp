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

// Function: sub_00125580
// Address: 0x125580 - 0x1255b8
void sub_00125580_0x125580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125580_0x125580");
#endif

    switch (ctx->pc) {
        case 0x125594u: goto label_125594;
        case 0x1255a4u: goto label_1255a4;
        default: break;
    }

    ctx->pc = 0x125580u;

    // 0x125580: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x125580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x125584: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12558c: 0xc04785a  jal         func_11E168
    ctx->pc = 0x12558Cu;
    SET_GPR_U32(ctx, 31, 0x125594u);
    ctx->pc = 0x125590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12558Cu;
    // 0x125590: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x12558Cu, 0x125594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125594u;
label_125594:
    // 0x125594: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125594u;
    {
        const bool branch_taken_0x125594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125594u;
        // 0x125598: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125594) {
            ctx->pc = 0x1255A8u;
            goto label_1255a8;
        }
    }
    ctx->pc = 0x12559Cu;
    // 0x12559c: 0xc043dd6  jal         func_10F758
    ctx->pc = 0x12559Cu;
    SET_GPR_U32(ctx, 31, 0x1255A4u);
    ctx->pc = 0x1255A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12559Cu;
    // 0x1255a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F758u, 0x12559Cu, 0x1255A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1255A4u;
label_1255a4:
    // 0x1255a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1255a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1255a8:
    // 0x1255a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1255A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1255ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1255A8u;
        // 0x1255ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1255A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1255B0u;
    // 0x1255b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1255b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1255b4: 0x0  nop
    ctx->pc = 0x1255b4u;
    // NOP
    ctx->pc = 0x1255b8u;
}
