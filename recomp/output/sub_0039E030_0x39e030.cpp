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

// Function: sub_0039E030
// Address: 0x39e030 - 0x39e060
void sub_0039E030_0x39e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E030_0x39e030");
#endif

    switch (ctx->pc) {
        case 0x39e044u: goto label_39e044;
        case 0x39e04cu: goto label_39e04c;
        default: break;
    }

    ctx->pc = 0x39e030u;

    // 0x39e030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39e030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39e034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39e038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39e03c: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39E03Cu;
    SET_GPR_U32(ctx, 31, 0x39E044u);
    ctx->pc = 0x39E040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E03Cu;
    // 0x39e040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39E03Cu, 0x39E044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E044u;
label_39e044:
    // 0x39e044: 0xc0e7818  jal         func_39E060
    ctx->pc = 0x39E044u;
    SET_GPR_U32(ctx, 31, 0x39E04Cu);
    ctx->pc = 0x39E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E044u;
    // 0x39e048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E060u, 0x39E044u, 0x39E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E04Cu;
label_39e04c:
    // 0x39e04c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e04cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e050: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39e050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e054: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39E054u;
    ctx->pc = 0x39E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E054u;
    // 0x39e058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39E05Cu;
    // 0x39e05c: 0x0  nop
    ctx->pc = 0x39e05cu;
    // NOP
    ctx->pc = 0x39e060u;
}
