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

// Function: sub_0039B200
// Address: 0x39b200 - 0x39b230
void sub_0039B200_0x39b200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B200_0x39b200");
#endif

    switch (ctx->pc) {
        case 0x39b214u: goto label_39b214;
        case 0x39b21cu: goto label_39b21c;
        default: break;
    }

    ctx->pc = 0x39b200u;

    // 0x39b200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39b200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39b204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b208: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39b208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39b20c: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39B20Cu;
    SET_GPR_U32(ctx, 31, 0x39B214u);
    ctx->pc = 0x39B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B20Cu;
    // 0x39b210: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39B20Cu, 0x39B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B214u;
label_39b214:
    // 0x39b214: 0xc0e6c8c  jal         func_39B230
    ctx->pc = 0x39B214u;
    SET_GPR_U32(ctx, 31, 0x39B21Cu);
    ctx->pc = 0x39B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B214u;
    // 0x39b218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B230u, 0x39B214u, 0x39B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B21Cu;
label_39b21c:
    // 0x39b21c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b220: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39b220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b224: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39B224u;
    ctx->pc = 0x39B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B224u;
    // 0x39b228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39B22Cu;
    // 0x39b22c: 0x0  nop
    ctx->pc = 0x39b22cu;
    // NOP
    ctx->pc = 0x39b230u;
}
