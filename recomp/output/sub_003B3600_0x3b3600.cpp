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

// Function: sub_003B3600
// Address: 0x3b3600 - 0x3b3628
void sub_003B3600_0x3b3600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3600_0x3b3600");
#endif

    switch (ctx->pc) {
        case 0x3b3614u: goto label_3b3614;
        default: break;
    }

    ctx->pc = 0x3b3600u;

    // 0x3b3600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b3600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b3604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b3604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3608: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3b3608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3b360c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3B360Cu;
    SET_GPR_U32(ctx, 31, 0x3B3614u);
    ctx->pc = 0x3B3610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B360Cu;
    // 0x3b3610: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3B360Cu, 0x3B3614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3614u;
label_3b3614:
    // 0x3b3614: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b3614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b3618: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3b3618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b361c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b361cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3620: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3B3620u;
    ctx->pc = 0x3B3624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3620u;
    // 0x3b3624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3B3628u;
}
