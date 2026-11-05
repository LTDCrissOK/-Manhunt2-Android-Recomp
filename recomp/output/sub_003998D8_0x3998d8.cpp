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

// Function: sub_003998D8
// Address: 0x3998d8 - 0x399948
void sub_003998D8_0x3998d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003998D8_0x3998d8");
#endif

    switch (ctx->pc) {
        case 0x39990cu: goto label_39990c;
        case 0x399924u: goto label_399924;
        default: break;
    }

    ctx->pc = 0x3998d8u;

    // 0x3998d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3998d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3998dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3998dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3998e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3998e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3998e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3998e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3998e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3998e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3998ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3998ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3998f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3998f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3998f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3998f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3998f8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3998f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3998fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3998fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x399900: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x399900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x399904: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x399904u;
    SET_GPR_U32(ctx, 31, 0x39990Cu);
    ctx->pc = 0x399908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399904u;
    // 0x399908: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x399904u, 0x39990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39990Cu;
label_39990c:
    // 0x39990c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39990cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x399910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399914: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x399914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399918: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x399918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39991c: 0xc0e6652  jal         func_399948
    ctx->pc = 0x39991Cu;
    SET_GPR_U32(ctx, 31, 0x399924u);
    ctx->pc = 0x399920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39991Cu;
    // 0x399920: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399948u, 0x39991Cu, 0x399924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399924u;
label_399924:
    // 0x399924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x399928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39992c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39992cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399930: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x399930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x399934: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x399934u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399938: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x399938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39993c: 0x80e6a78  j           func_39A9E0
    ctx->pc = 0x39993Cu;
    ctx->pc = 0x399940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39993Cu;
    // 0x399940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    sub_0039A9E0_0x39a9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x399944u;
    // 0x399944: 0x0  nop
    ctx->pc = 0x399944u;
    // NOP
    ctx->pc = 0x399948u;
}
