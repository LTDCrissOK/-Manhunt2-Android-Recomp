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

// Function: sub_001208F8
// Address: 0x1208f8 - 0x120950
void sub_001208F8_0x1208f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001208F8_0x1208f8");
#endif

    switch (ctx->pc) {
        case 0x12091cu: goto label_12091c;
        case 0x12092cu: goto label_12092c;
        default: break;
    }

    ctx->pc = 0x1208f8u;

    // 0x1208f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1208f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1208fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1208fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120900: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x120900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x120904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x120904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120908: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x120908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12090c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12090cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120910: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x120910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x120914: 0xc048166  jal         func_120598
    ctx->pc = 0x120914u;
    SET_GPR_U32(ctx, 31, 0x12091Cu);
    ctx->pc = 0x120918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120914u;
    // 0x120918: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120598u, 0x120914u, 0x12091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12091Cu;
label_12091c:
    // 0x12091c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12091cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x120920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120924: 0xc0481c6  jal         func_120718
    ctx->pc = 0x120924u;
    SET_GPR_U32(ctx, 31, 0x12092Cu);
    ctx->pc = 0x120928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120924u;
    // 0x120928: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120718u, 0x120924u, 0x12092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12092Cu;
label_12092c:
    // 0x12092c: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x12092cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x120930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x120930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120934: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x120934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x120938: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x120938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12093c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12093cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120940: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x120940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x120944: 0x3e00008  jr          $ra
    ctx->pc = 0x120944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120944u;
        // 0x120948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12094Cu;
    // 0x12094c: 0x0  nop
    ctx->pc = 0x12094cu;
    // NOP
    ctx->pc = 0x120950u;
}
