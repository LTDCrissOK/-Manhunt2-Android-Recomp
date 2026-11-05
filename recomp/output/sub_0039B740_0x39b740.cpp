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

// Function: sub_0039B740
// Address: 0x39b740 - 0x39b770
void sub_0039B740_0x39b740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B740_0x39b740");
#endif

    switch (ctx->pc) {
        case 0x39b754u: goto label_39b754;
        case 0x39b75cu: goto label_39b75c;
        default: break;
    }

    ctx->pc = 0x39b740u;

    // 0x39b740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39b740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39b744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b748: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39b748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39b74c: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39B74Cu;
    SET_GPR_U32(ctx, 31, 0x39B754u);
    ctx->pc = 0x39B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B74Cu;
    // 0x39b750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39B74Cu, 0x39B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B754u;
label_39b754:
    // 0x39b754: 0xc0e6ddc  jal         func_39B770
    ctx->pc = 0x39B754u;
    SET_GPR_U32(ctx, 31, 0x39B75Cu);
    ctx->pc = 0x39B758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B754u;
    // 0x39b758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B770u, 0x39B754u, 0x39B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B75Cu;
label_39b75c:
    // 0x39b75c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b75cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b760: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39b760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b764: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39B764u;
    ctx->pc = 0x39B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B764u;
    // 0x39b768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39B76Cu;
    // 0x39b76c: 0x0  nop
    ctx->pc = 0x39b76cu;
    // NOP
    ctx->pc = 0x39b770u;
}
