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

// Function: sub_003AB1D8
// Address: 0x3ab1d8 - 0x3ab228
void sub_003AB1D8_0x3ab1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB1D8_0x3ab1d8");
#endif

    switch (ctx->pc) {
        case 0x3ab1fcu: goto label_3ab1fc;
        case 0x3ab20cu: goto label_3ab20c;
        default: break;
    }

    ctx->pc = 0x3ab1d8u;

    // 0x3ab1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ab1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ab1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ab1e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab1e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ab1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ab1e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ab1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab1ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ab1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ab1f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ab1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ab1f4: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AB1F4u;
    SET_GPR_U32(ctx, 31, 0x3AB1FCu);
    ctx->pc = 0x3AB1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB1F4u;
    // 0x3ab1f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AB1F4u, 0x3AB1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB1FCu;
label_3ab1fc:
    // 0x3ab1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab200: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ab200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab204: 0xc0eac8a  jal         func_3AB228
    ctx->pc = 0x3AB204u;
    SET_GPR_U32(ctx, 31, 0x3AB20Cu);
    ctx->pc = 0x3AB208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB204u;
    // 0x3ab208: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB228u, 0x3AB204u, 0x3AB20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB20Cu;
label_3ab20c:
    // 0x3ab20c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ab214: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ab214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab218: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ab218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ab21c: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AB21Cu;
    ctx->pc = 0x3AB220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB21Cu;
    // 0x3ab220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB224u;
    // 0x3ab224: 0x0  nop
    ctx->pc = 0x3ab224u;
    // NOP
    ctx->pc = 0x3ab228u;
}
