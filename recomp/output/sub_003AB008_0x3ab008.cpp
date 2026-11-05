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

// Function: sub_003AB008
// Address: 0x3ab008 - 0x3ab058
void sub_003AB008_0x3ab008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB008_0x3ab008");
#endif

    switch (ctx->pc) {
        case 0x3ab02cu: goto label_3ab02c;
        case 0x3ab03cu: goto label_3ab03c;
        default: break;
    }

    ctx->pc = 0x3ab008u;

    // 0x3ab008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ab008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ab00c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ab010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab014: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ab014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ab018: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ab018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab01c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ab01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ab020: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ab020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ab024: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AB024u;
    SET_GPR_U32(ctx, 31, 0x3AB02Cu);
    ctx->pc = 0x3AB028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB024u;
    // 0x3ab028: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AB024u, 0x3AB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB02Cu;
label_3ab02c:
    // 0x3ab02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab030: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ab030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab034: 0xc0eac16  jal         func_3AB058
    ctx->pc = 0x3AB034u;
    SET_GPR_U32(ctx, 31, 0x3AB03Cu);
    ctx->pc = 0x3AB038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB034u;
    // 0x3ab038: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB058u, 0x3AB034u, 0x3AB03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB03Cu;
label_3ab03c:
    // 0x3ab03c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ab044: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ab044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab048: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ab048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ab04c: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AB04Cu;
    ctx->pc = 0x3AB050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB04Cu;
    // 0x3ab050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB054u;
    // 0x3ab054: 0x0  nop
    ctx->pc = 0x3ab054u;
    // NOP
    ctx->pc = 0x3ab058u;
}
