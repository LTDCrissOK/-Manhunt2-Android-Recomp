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

// Function: sub_00158ED8
// Address: 0x158ed8 - 0x158f08
void sub_00158ED8_0x158ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158ED8_0x158ed8");
#endif

    switch (ctx->pc) {
        case 0x158eecu: goto label_158eec;
        case 0x158ef4u: goto label_158ef4;
        default: break;
    }

    ctx->pc = 0x158ed8u;

    // 0x158ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158ee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x158ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x158ee4: 0xc04ef94  jal         func_13BE50
    ctx->pc = 0x158EE4u;
    SET_GPR_U32(ctx, 31, 0x158EECu);
    ctx->pc = 0x158EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158EE4u;
    // 0x158ee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BE50u, 0x158EE4u, 0x158EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EECu;
label_158eec:
    // 0x158eec: 0xc04f356  jal         func_13CD58
    ctx->pc = 0x158EECu;
    SET_GPR_U32(ctx, 31, 0x158EF4u);
    ctx->pc = 0x158EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158EECu;
    // 0x158ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CD58u, 0x158EECu, 0x158EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158EF4u;
label_158ef4:
    // 0x158ef4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x158ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x158ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158efc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x158efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158f00: 0x3e00008  jr          $ra
    ctx->pc = 0x158F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F00u;
        // 0x158f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158F08u;
}
