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

// Function: sub_00153200
// Address: 0x153200 - 0x153228
void sub_00153200_0x153200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153200_0x153200");
#endif

    switch (ctx->pc) {
        case 0x153214u: goto label_153214;
        default: break;
    }

    ctx->pc = 0x153200u;

    // 0x153200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x153204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x153208: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x153208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15320c: 0xc04d6d2  jal         func_135B48
    ctx->pc = 0x15320Cu;
    SET_GPR_U32(ctx, 31, 0x153214u);
    ctx->pc = 0x153210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15320Cu;
    // 0x153210: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135B48u, 0x15320Cu, 0x153214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153214u;
label_153214:
    // 0x153214: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x153214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x153218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x153218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15321c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x15321cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x153220: 0x3e00008  jr          $ra
    ctx->pc = 0x153220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153220u;
        // 0x153224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153228u;
}
