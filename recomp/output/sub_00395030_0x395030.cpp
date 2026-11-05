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

// Function: sub_00395030
// Address: 0x395030 - 0x395058
void sub_00395030_0x395030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395030_0x395030");
#endif

    switch (ctx->pc) {
        case 0x395040u: goto label_395040;
        case 0x395048u: goto label_395048;
        default: break;
    }

    ctx->pc = 0x395030u;

    // 0x395030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x395038: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x395038u;
    SET_GPR_U32(ctx, 31, 0x395040u);
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x395038u, 0x395040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395040u;
label_395040:
    // 0x395040: 0xc0e5416  jal         func_395058
    ctx->pc = 0x395040u;
    SET_GPR_U32(ctx, 31, 0x395048u);
    ctx->pc = 0x395058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395058u, 0x395040u, 0x395048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395048u;
label_395048:
    // 0x395048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39504c: 0x80e579c  j           func_395E70
    ctx->pc = 0x39504Cu;
    ctx->pc = 0x395050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39504Cu;
    // 0x395050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    sub_00395E70_0x395e70(rdram, ctx, runtime); return;
    ctx->pc = 0x395054u;
    // 0x395054: 0x0  nop
    ctx->pc = 0x395054u;
    // NOP
    ctx->pc = 0x395058u;
}
