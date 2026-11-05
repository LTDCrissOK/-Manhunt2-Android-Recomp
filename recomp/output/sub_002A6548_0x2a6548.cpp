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

// Function: sub_002A6548
// Address: 0x2a6548 - 0x2a65a0
void sub_002A6548_0x2a6548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6548_0x2a6548");
#endif

    switch (ctx->pc) {
        case 0x2a656cu: goto label_2a656c;
        case 0x2a6580u: goto label_2a6580;
        case 0x2a6588u: goto label_2a6588;
        default: break;
    }

    ctx->pc = 0x2a6548u;

    // 0x2a6548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a654c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a654cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a6550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a6550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a6554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a6558: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a6558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a655c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a655cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6560: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a6560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a6564: 0xc0a9b7c  jal         func_2A6DF0
    ctx->pc = 0x2A6564u;
    SET_GPR_U32(ctx, 31, 0x2A656Cu);
    ctx->pc = 0x2A6568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6564u;
    // 0x2a6568: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6DF0u, 0x2A6564u, 0x2A656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A656Cu;
label_2a656c:
    // 0x2a656c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2a656cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a6570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a6570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6574: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a6574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6578: 0xc0a790c  jal         func_29E430
    ctx->pc = 0x2A6578u;
    SET_GPR_U32(ctx, 31, 0x2A6580u);
    ctx->pc = 0x2A657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6578u;
    // 0x2a657c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E430u, 0x2A6578u, 0x2A6580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6580u;
label_2a6580:
    // 0x2a6580: 0xc0a9b70  jal         func_2A6DC0
    ctx->pc = 0x2A6580u;
    SET_GPR_U32(ctx, 31, 0x2A6588u);
    ctx->pc = 0x2A6584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6580u;
    // 0x2a6584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6DC0u, 0x2A6580u, 0x2A6588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6588u;
label_2a6588:
    // 0x2a6588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a658c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a658cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a6590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a6590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6594: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a6594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a6598: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6598u;
        // 0x2a659c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A65A0u;
}
