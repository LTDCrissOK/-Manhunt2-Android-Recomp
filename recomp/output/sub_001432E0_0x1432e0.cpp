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

// Function: sub_001432E0
// Address: 0x1432e0 - 0x143318
void sub_001432E0_0x1432e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001432E0_0x1432e0");
#endif

    switch (ctx->pc) {
        case 0x1432fcu: goto label_1432fc;
        case 0x143304u: goto label_143304;
        default: break;
    }

    ctx->pc = 0x1432e0u;

    // 0x1432e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1432e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1432e4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1432e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1432e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1432e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1432ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1432ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1432f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1432f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1432f4: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x1432F4u;
    SET_GPR_U32(ctx, 31, 0x1432FCu);
    ctx->pc = 0x1432F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432F4u;
    // 0x1432f8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x1432F4u, 0x1432FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1432FCu;
label_1432fc:
    // 0x1432fc: 0xc050d68  jal         func_1435A0
    ctx->pc = 0x1432FCu;
    SET_GPR_U32(ctx, 31, 0x143304u);
    ctx->pc = 0x143300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432FCu;
    // 0x143300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1435A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1435A0u, 0x1432FCu, 0x143304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143304u;
label_143304:
    // 0x143304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143308: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x143308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14330c: 0x3e00008  jr          $ra
    ctx->pc = 0x14330Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14330Cu;
        // 0x143310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14330Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143314u;
    // 0x143314: 0x0  nop
    ctx->pc = 0x143314u;
    // NOP
    ctx->pc = 0x143318u;
}
