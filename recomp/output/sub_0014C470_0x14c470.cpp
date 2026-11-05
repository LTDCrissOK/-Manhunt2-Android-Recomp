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

// Function: sub_0014C470
// Address: 0x14c470 - 0x14c4c8
void sub_0014C470_0x14c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C470_0x14c470");
#endif

    switch (ctx->pc) {
        case 0x14c490u: goto label_14c490;
        case 0x14c498u: goto label_14c498;
        case 0x14c4b4u: goto label_14c4b4;
        default: break;
    }

    ctx->pc = 0x14c470u;

    // 0x14c470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c474: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14c478: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14c478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14c47c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c47cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c480: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14c480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14c484: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x14c484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14c488: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14C488u;
    SET_GPR_U32(ctx, 31, 0x14C490u);
    ctx->pc = 0x14C48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C488u;
    // 0x14c48c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14C488u, 0x14C490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C490u;
label_14c490:
    // 0x14c490: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x14C490u;
    SET_GPR_U32(ctx, 31, 0x14C498u);
    ctx->pc = 0x14C494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C490u;
    // 0x14c494: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x14C490u, 0x14C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C498u;
label_14c498:
    // 0x14c498: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x14c498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14c49c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14c49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4a0: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x14c4a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14c4a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14c4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c4a8: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x14c4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14c4ac: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14C4ACu;
    SET_GPR_U32(ctx, 31, 0x14C4B4u);
    ctx->pc = 0x14C4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C4ACu;
    // 0x14c4b0: 0xae2204f4  sw          $v0, 0x4F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14C4ACu, 0x14C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C4B4u;
label_14c4b4:
    // 0x14c4b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14c4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c4b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14c4b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c4bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14c4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x14C4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C4C0u;
        // 0x14c4c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C4C8u;
}
