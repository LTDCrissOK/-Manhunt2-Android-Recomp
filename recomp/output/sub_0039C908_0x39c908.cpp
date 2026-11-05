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

// Function: sub_0039C908
// Address: 0x39c908 - 0x39c958
void sub_0039C908_0x39c908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C908_0x39c908");
#endif

    switch (ctx->pc) {
        case 0x39c92cu: goto label_39c92c;
        case 0x39c93cu: goto label_39c93c;
        default: break;
    }

    ctx->pc = 0x39c908u;

    // 0x39c908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39c908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39c90c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39c90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39c910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39c914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39c918: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39c918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c91c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39c920: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39c920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x39c924: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39C924u;
    SET_GPR_U32(ctx, 31, 0x39C92Cu);
    ctx->pc = 0x39C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C924u;
    // 0x39c928: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39C924u, 0x39C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C92Cu;
label_39c92c:
    // 0x39c92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39c92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c930: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39c930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c934: 0xc0e726a  jal         func_39C9A8
    ctx->pc = 0x39C934u;
    SET_GPR_U32(ctx, 31, 0x39C93Cu);
    ctx->pc = 0x39C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C934u;
    // 0x39c938: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C9A8u, 0x39C934u, 0x39C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C93Cu;
label_39c93c:
    // 0x39c93c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c940: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39c940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39c944: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39c944u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c948: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39c948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39c94c: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39C94Cu;
    ctx->pc = 0x39C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C94Cu;
    // 0x39c950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39C954u;
    // 0x39c954: 0x0  nop
    ctx->pc = 0x39c954u;
    // NOP
    ctx->pc = 0x39c958u;
}
