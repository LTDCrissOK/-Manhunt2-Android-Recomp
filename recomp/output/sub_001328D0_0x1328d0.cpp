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

// Function: sub_001328D0
// Address: 0x1328d0 - 0x132908
void sub_001328D0_0x1328d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001328D0_0x1328d0");
#endif

    switch (ctx->pc) {
        case 0x1328e8u: goto label_1328e8;
        case 0x1328f0u: goto label_1328f0;
        case 0x1328f8u: goto label_1328f8;
        default: break;
    }

    ctx->pc = 0x1328d0u;

    // 0x1328d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1328d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1328d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1328d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1328d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1328d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1328dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1328dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328e0: 0xc04b46a  jal         func_12D1A8
    ctx->pc = 0x1328E0u;
    SET_GPR_U32(ctx, 31, 0x1328E8u);
    ctx->pc = 0x1328E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1328E0u;
    // 0x1328e4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D1A8u, 0x1328E0u, 0x1328E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328E8u;
label_1328e8:
    // 0x1328e8: 0xc04b46a  jal         func_12D1A8
    ctx->pc = 0x1328E8u;
    SET_GPR_U32(ctx, 31, 0x1328F0u);
    ctx->pc = 0x1328ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1328E8u;
    // 0x1328ec: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D1A8u, 0x1328E8u, 0x1328F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328F0u;
label_1328f0:
    // 0x1328f0: 0xc04cd0c  jal         func_133430
    ctx->pc = 0x1328F0u;
    SET_GPR_U32(ctx, 31, 0x1328F8u);
    ctx->pc = 0x1328F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1328F0u;
    // 0x1328f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133430u, 0x1328F0u, 0x1328F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328F8u;
label_1328f8:
    // 0x1328f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1328f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1328fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1328fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132900: 0x3e00008  jr          $ra
    ctx->pc = 0x132900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132900u;
        // 0x132904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132908u;
}
