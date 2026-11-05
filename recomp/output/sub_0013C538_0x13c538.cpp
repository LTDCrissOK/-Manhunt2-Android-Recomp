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

// Function: sub_0013C538
// Address: 0x13c538 - 0x13c598
void sub_0013C538_0x13c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C538_0x13c538");
#endif

    switch (ctx->pc) {
        case 0x13c564u: goto label_13c564;
        case 0x13c570u: goto label_13c570;
        case 0x13c584u: goto label_13c584;
        default: break;
    }

    ctx->pc = 0x13c538u;

    // 0x13c538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c53c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13c53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13c540: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13c540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13c544: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x13c544u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13c548: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x13c548u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x13c54c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c550: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c554: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x13c554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x13c558: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13c558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c55c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13C55Cu;
    SET_GPR_U32(ctx, 31, 0x13C564u);
    ctx->pc = 0x13C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C55Cu;
    // 0x13c560: 0xac460024  sw          $a2, 0x24($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13C55Cu, 0x13C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C564u;
label_13c564:
    // 0x13c564: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13c564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c568: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x13C568u;
    SET_GPR_U32(ctx, 31, 0x13C570u);
    ctx->pc = 0x13C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C568u;
    // 0x13c56c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x13C568u, 0x13C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C570u;
label_13c570:
    // 0x13c570: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x13c570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x13c574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13c574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c578: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x13c578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x13c57c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13C57Cu;
    SET_GPR_U32(ctx, 31, 0x13C584u);
    ctx->pc = 0x13C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C57Cu;
    // 0x13c580: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13C57Cu, 0x13C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C584u;
label_13c584:
    // 0x13c584: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13c584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c588: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13c588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13c58c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13c58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c590: 0x3e00008  jr          $ra
    ctx->pc = 0x13C590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C590u;
        // 0x13c594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C598u;
}
