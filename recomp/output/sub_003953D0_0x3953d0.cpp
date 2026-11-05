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

// Function: sub_003953D0
// Address: 0x3953d0 - 0x395428
void sub_003953D0_0x3953d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003953D0_0x3953d0");
#endif

    switch (ctx->pc) {
        case 0x3953f4u: goto label_3953f4;
        case 0x395404u: goto label_395404;
        case 0x39540cu: goto label_39540c;
        default: break;
    }

    ctx->pc = 0x3953d0u;

    // 0x3953d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3953d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3953d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3953d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3953d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3953d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3953dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3953dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3953e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3953e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3953e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3953e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3953e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3953e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3953ec: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x3953ECu;
    SET_GPR_U32(ctx, 31, 0x3953F4u);
    ctx->pc = 0x3953F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3953ECu;
    // 0x3953f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x3953ECu, 0x3953F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3953F4u;
label_3953f4:
    // 0x3953f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3953f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3953f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3953f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3953fc: 0xc0e550a  jal         func_395428
    ctx->pc = 0x3953FCu;
    SET_GPR_U32(ctx, 31, 0x395404u);
    ctx->pc = 0x395400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3953FCu;
    // 0x395400: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395428u, 0x3953FCu, 0x395404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395404u;
label_395404:
    // 0x395404: 0xc0e579c  jal         func_395E70
    ctx->pc = 0x395404u;
    SET_GPR_U32(ctx, 31, 0x39540Cu);
    ctx->pc = 0x395408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395404u;
    // 0x395408: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E70u, 0x395404u, 0x39540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39540Cu;
label_39540c:
    // 0x39540c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39540cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395410: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x395414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39541c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39541cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x395420: 0x3e00008  jr          $ra
    ctx->pc = 0x395420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395420u;
        // 0x395424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395428u;
}
