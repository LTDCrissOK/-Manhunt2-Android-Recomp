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

// Function: sub_00167FD0
// Address: 0x167fd0 - 0x168008
void sub_00167FD0_0x167fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167FD0_0x167fd0");
#endif

    switch (ctx->pc) {
        case 0x167fe4u: goto label_167fe4;
        case 0x167fecu: goto label_167fec;
        case 0x167ff4u: goto label_167ff4;
        default: break;
    }

    ctx->pc = 0x167fd0u;

    // 0x167fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167fd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x167fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167fd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x167fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x167fdc: 0xc04ef94  jal         func_13BE50
    ctx->pc = 0x167FDCu;
    SET_GPR_U32(ctx, 31, 0x167FE4u);
    ctx->pc = 0x167FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FDCu;
    // 0x167fe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BE50u, 0x167FDCu, 0x167FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FE4u;
label_167fe4:
    // 0x167fe4: 0xc04f356  jal         func_13CD58
    ctx->pc = 0x167FE4u;
    SET_GPR_U32(ctx, 31, 0x167FECu);
    ctx->pc = 0x167FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FE4u;
    // 0x167fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CD58u, 0x167FE4u, 0x167FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FECu;
label_167fec:
    // 0x167fec: 0xc05a34a  jal         func_168D28
    ctx->pc = 0x167FECu;
    SET_GPR_U32(ctx, 31, 0x167FF4u);
    ctx->pc = 0x167FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FECu;
    // 0x167ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168D28u, 0x167FECu, 0x167FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FF4u;
label_167ff4:
    // 0x167ff4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x167ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x167ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x167ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167ffc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x167ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168000: 0x3e00008  jr          $ra
    ctx->pc = 0x168000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168000u;
        // 0x168004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168008u;
}
