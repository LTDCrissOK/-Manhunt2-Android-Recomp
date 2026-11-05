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

// Function: sub_003A48E8
// Address: 0x3a48e8 - 0x3a4920
void sub_003A48E8_0x3a48e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A48E8_0x3a48e8");
#endif

    switch (ctx->pc) {
        case 0x3a4904u: goto label_3a4904;
        default: break;
    }

    ctx->pc = 0x3a48e8u;

    // 0x3a48e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a48e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a48ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a48ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a48f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A48F0u;
    {
        const bool branch_taken_0x3a48f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A48F0u;
        // 0x3a48f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a48f0) {
            ctx->pc = 0x3A4910u;
            goto label_3a4910;
        }
    }
    ctx->pc = 0x3A48F8u;
    // 0x3a48f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a48f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a48fc: 0xc0e8ff0  jal         func_3A3FC0
    ctx->pc = 0x3A48FCu;
    SET_GPR_U32(ctx, 31, 0x3A4904u);
    ctx->pc = 0x3A4900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A48FCu;
    // 0x3a4900: 0x24a5d8c8  addiu       $a1, $a1, -0x2738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FC0u, 0x3A48FCu, 0x3A4904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4904u;
label_3a4904:
    // 0x3a4904: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4904u;
    {
        const bool branch_taken_0x3a4904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4904u;
        // 0x3a4908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4904) {
            ctx->pc = 0x3A4914u;
            goto label_3a4914;
        }
    }
    ctx->pc = 0x3A490Cu;
    // 0x3a490c: 0x0  nop
    ctx->pc = 0x3a490cu;
    // NOP
label_3a4910:
    // 0x3a4910: 0x80420002  lb          $v0, 0x2($v0)
    ctx->pc = 0x3a4910u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_3a4914:
    // 0x3a4914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4918: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4918u;
        // 0x3a491c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4920u;
}
