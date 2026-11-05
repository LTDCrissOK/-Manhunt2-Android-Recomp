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

// Function: sub_003ABA20
// Address: 0x3aba20 - 0x3aba50
void sub_003ABA20_0x3aba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABA20_0x3aba20");
#endif

    switch (ctx->pc) {
        case 0x3aba34u: goto label_3aba34;
        case 0x3aba3cu: goto label_3aba3c;
        default: break;
    }

    ctx->pc = 0x3aba20u;

    // 0x3aba20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aba24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aba28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3aba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3aba2c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3ABA2Cu;
    SET_GPR_U32(ctx, 31, 0x3ABA34u);
    ctx->pc = 0x3ABA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA2Cu;
    // 0x3aba30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3ABA2Cu, 0x3ABA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA34u;
label_3aba34:
    // 0x3aba34: 0xc0eae94  jal         func_3ABA50
    ctx->pc = 0x3ABA34u;
    SET_GPR_U32(ctx, 31, 0x3ABA3Cu);
    ctx->pc = 0x3ABA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA34u;
    // 0x3aba38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABA50u, 0x3ABA34u, 0x3ABA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA3Cu;
label_3aba3c:
    // 0x3aba3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aba3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aba40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aba44: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3ABA44u;
    ctx->pc = 0x3ABA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA44u;
    // 0x3aba48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3ABA4Cu;
    // 0x3aba4c: 0x0  nop
    ctx->pc = 0x3aba4cu;
    // NOP
    ctx->pc = 0x3aba50u;
}
