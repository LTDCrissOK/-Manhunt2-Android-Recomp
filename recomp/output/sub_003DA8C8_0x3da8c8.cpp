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

// Function: sub_003DA8C8
// Address: 0x3da8c8 - 0x3da908
void sub_003DA8C8_0x3da8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA8C8_0x3da8c8");
#endif

    switch (ctx->pc) {
        case 0x3da8ecu: goto label_3da8ec;
        case 0x3da8f4u: goto label_3da8f4;
        default: break;
    }

    ctx->pc = 0x3da8c8u;

    // 0x3da8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3da8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3da8cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3da8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3da8d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3da8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3da8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da8d8: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x3da8d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da8dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DA8DCu;
    {
        const bool branch_taken_0x3da8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA8DCu;
        // 0x3da8e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da8dc) {
            ctx->pc = 0x3DA8F8u;
            goto label_3da8f8;
        }
    }
    ctx->pc = 0x3DA8E4u;
    // 0x3da8e4: 0xc0f69ee  jal         func_3DA7B8
    ctx->pc = 0x3DA8E4u;
    SET_GPR_U32(ctx, 31, 0x3DA8ECu);
    ctx->pc = 0x3DA7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA7B8u, 0x3DA8E4u, 0x3DA8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA8ECu;
label_3da8ec:
    // 0x3da8ec: 0xc0f6a14  jal         func_3DA850
    ctx->pc = 0x3DA8ECu;
    SET_GPR_U32(ctx, 31, 0x3DA8F4u);
    ctx->pc = 0x3DA8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA8ECu;
    // 0x3da8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA850u, 0x3DA8ECu, 0x3DA8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA8F4u;
label_3da8f4:
    // 0x3da8f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3da8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3da8f8:
    // 0x3da8f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3da8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da8fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3da8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3da900: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA900u;
        // 0x3da904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA908u;
}
