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

// Function: sub_00398110
// Address: 0x398110 - 0x398150
void sub_00398110_0x398110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398110_0x398110");
#endif

    switch (ctx->pc) {
        case 0x398134u: goto label_398134;
        default: break;
    }

    ctx->pc = 0x398110u;

    // 0x398110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x398110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x398114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x398114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x398118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x398118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39811c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39811cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x398120: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x398120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x398128: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x398128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x39812c: 0xc0eb5d0  jal         func_3AD740
    ctx->pc = 0x39812Cu;
    SET_GPR_U32(ctx, 31, 0x398134u);
    ctx->pc = 0x398130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39812Cu;
    // 0x398130: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD740u, 0x39812Cu, 0x398134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398134u;
label_398134:
    // 0x398134: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x398134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x398138: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x398138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39813c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39813cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x398140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398148: 0x80eb556  j           func_3AD558
    ctx->pc = 0x398148u;
    ctx->pc = 0x39814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398148u;
    // 0x39814c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD558u, 0x398148u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x398150u;
}
