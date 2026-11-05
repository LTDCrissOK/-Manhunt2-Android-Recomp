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

// Function: sub_003AA620
// Address: 0x3aa620 - 0x3aa670
void sub_003AA620_0x3aa620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA620_0x3aa620");
#endif

    switch (ctx->pc) {
        case 0x3aa644u: goto label_3aa644;
        case 0x3aa654u: goto label_3aa654;
        default: break;
    }

    ctx->pc = 0x3aa620u;

    // 0x3aa620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aa620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3aa624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aa628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aa628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa62c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3aa62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3aa630: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3aa630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa634: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3aa634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3aa638: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3aa638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3aa63c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AA63Cu;
    SET_GPR_U32(ctx, 31, 0x3AA644u);
    ctx->pc = 0x3AA640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA63Cu;
    // 0x3aa640: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AA63Cu, 0x3AA644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA644u;
label_3aa644:
    // 0x3aa644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa648: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3aa648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa64c: 0xc0ea99c  jal         func_3AA670
    ctx->pc = 0x3AA64Cu;
    SET_GPR_U32(ctx, 31, 0x3AA654u);
    ctx->pc = 0x3AA650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA64Cu;
    // 0x3aa650: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA670u, 0x3AA64Cu, 0x3AA654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA654u;
label_3aa654:
    // 0x3aa654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3aa658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa65c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3aa65cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aa660: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3aa660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3aa664: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AA664u;
    ctx->pc = 0x3AA668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA664u;
    // 0x3aa668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA66Cu;
    // 0x3aa66c: 0x0  nop
    ctx->pc = 0x3aa66cu;
    // NOP
    ctx->pc = 0x3aa670u;
}
