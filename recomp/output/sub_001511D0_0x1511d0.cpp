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

// Function: sub_001511D0
// Address: 0x1511d0 - 0x151210
void sub_001511D0_0x1511d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001511D0_0x1511d0");
#endif

    switch (ctx->pc) {
        case 0x1511ecu: goto label_1511ec;
        case 0x1511f8u: goto label_1511f8;
        default: break;
    }

    ctx->pc = 0x1511d0u;

    // 0x1511d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1511d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1511d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1511d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1511d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1511d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1511dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1511dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1511e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1511e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1511e4: 0xc054498  jal         func_151260
    ctx->pc = 0x1511E4u;
    SET_GPR_U32(ctx, 31, 0x1511ECu);
    ctx->pc = 0x1511E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1511E4u;
    // 0x1511e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151260u, 0x1511E4u, 0x1511ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1511ECu;
label_1511ec:
    // 0x1511ec: 0x8e040468  lw          $a0, 0x468($s0)
    ctx->pc = 0x1511ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x1511f0: 0xc058232  jal         func_1608C8
    ctx->pc = 0x1511F0u;
    SET_GPR_U32(ctx, 31, 0x1511F8u);
    ctx->pc = 0x1511F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1511F0u;
    // 0x1511f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1608C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1608C8u, 0x1511F0u, 0x1511F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1511F8u;
label_1511f8:
    // 0x1511f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1511f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1511fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1511fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x151200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151204: 0x3e00008  jr          $ra
    ctx->pc = 0x151204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151204u;
        // 0x151208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15120Cu;
    // 0x15120c: 0x0  nop
    ctx->pc = 0x15120cu;
    // NOP
    ctx->pc = 0x151210u;
}
