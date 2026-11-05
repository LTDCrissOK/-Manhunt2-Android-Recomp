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

// Function: sub_003AAA00
// Address: 0x3aaa00 - 0x3aaa30
void sub_003AAA00_0x3aaa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAA00_0x3aaa00");
#endif

    switch (ctx->pc) {
        case 0x3aaa10u: goto label_3aaa10;
        case 0x3aaa18u: goto label_3aaa18;
        case 0x3aaa20u: goto label_3aaa20;
        default: break;
    }

    ctx->pc = 0x3aaa00u;

    // 0x3aaa00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aaa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aaa04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aaa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aaa08: 0xc0ea7be  jal         func_3A9EF8
    ctx->pc = 0x3AAA08u;
    SET_GPR_U32(ctx, 31, 0x3AAA10u);
    ctx->pc = 0x3A9EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9EF8u, 0x3AAA08u, 0x3AAA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA10u;
label_3aaa10:
    // 0x3aaa10: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AAA10u;
    SET_GPR_U32(ctx, 31, 0x3AAA18u);
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AAA10u, 0x3AAA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA18u;
label_3aaa18:
    // 0x3aaa18: 0xc0eaa8c  jal         func_3AAA30
    ctx->pc = 0x3AAA18u;
    SET_GPR_U32(ctx, 31, 0x3AAA20u);
    ctx->pc = 0x3AAA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAA30u, 0x3AAA18u, 0x3AAA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAA20u;
label_3aaa20:
    // 0x3aaa20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aaa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aaa24: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AAA24u;
    ctx->pc = 0x3AAA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAA24u;
    // 0x3aaa28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AAA2Cu;
    // 0x3aaa2c: 0x0  nop
    ctx->pc = 0x3aaa2cu;
    // NOP
    ctx->pc = 0x3aaa30u;
}
