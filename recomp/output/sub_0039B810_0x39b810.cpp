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

// Function: sub_0039B810
// Address: 0x39b810 - 0x39b840
void sub_0039B810_0x39b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B810_0x39b810");
#endif

    switch (ctx->pc) {
        case 0x39b824u: goto label_39b824;
        case 0x39b82cu: goto label_39b82c;
        default: break;
    }

    ctx->pc = 0x39b810u;

    // 0x39b810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39b810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39b814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b818: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39b818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39b81c: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39B81Cu;
    SET_GPR_U32(ctx, 31, 0x39B824u);
    ctx->pc = 0x39B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B81Cu;
    // 0x39b820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39B81Cu, 0x39B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B824u;
label_39b824:
    // 0x39b824: 0xc0e6e10  jal         func_39B840
    ctx->pc = 0x39B824u;
    SET_GPR_U32(ctx, 31, 0x39B82Cu);
    ctx->pc = 0x39B828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B824u;
    // 0x39b828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B840u, 0x39B824u, 0x39B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B82Cu;
label_39b82c:
    // 0x39b82c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b82cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b830: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39b830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b834: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39B834u;
    ctx->pc = 0x39B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B834u;
    // 0x39b838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39B83Cu;
    // 0x39b83c: 0x0  nop
    ctx->pc = 0x39b83cu;
    // NOP
    ctx->pc = 0x39b840u;
}
