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

// Function: sub_003DA6D0
// Address: 0x3da6d0 - 0x3da710
void sub_003DA6D0_0x3da6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA6D0_0x3da6d0");
#endif

    switch (ctx->pc) {
        case 0x3da6f4u: goto label_3da6f4;
        case 0x3da6fcu: goto label_3da6fc;
        default: break;
    }

    ctx->pc = 0x3da6d0u;

    // 0x3da6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3da6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3da6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3da6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3da6d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3da6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3da6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da6e0: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x3da6e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da6e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DA6E4u;
    {
        const bool branch_taken_0x3da6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA6E4u;
        // 0x3da6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da6e4) {
            ctx->pc = 0x3DA700u;
            goto label_3da700;
        }
    }
    ctx->pc = 0x3DA6ECu;
    // 0x3da6ec: 0xc0f6988  jal         func_3DA620
    ctx->pc = 0x3DA6ECu;
    SET_GPR_U32(ctx, 31, 0x3DA6F4u);
    ctx->pc = 0x3DA620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA620u, 0x3DA6ECu, 0x3DA6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA6F4u;
label_3da6f4:
    // 0x3da6f4: 0xc0f6996  jal         func_3DA658
    ctx->pc = 0x3DA6F4u;
    SET_GPR_U32(ctx, 31, 0x3DA6FCu);
    ctx->pc = 0x3DA6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA6F4u;
    // 0x3da6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA658u, 0x3DA6F4u, 0x3DA6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA6FCu;
label_3da6fc:
    // 0x3da6fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3da6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3da700:
    // 0x3da700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3da700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da704: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3da704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3da708: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA708u;
        // 0x3da70c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA710u;
}
