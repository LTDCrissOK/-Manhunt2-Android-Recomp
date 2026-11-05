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

// Function: sub_0013A530
// Address: 0x13a530 - 0x13a5d8
void sub_0013A530_0x13a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A530_0x13a530");
#endif

    switch (ctx->pc) {
        case 0x13a550u: goto label_13a550;
        case 0x13a56cu: goto label_13a56c;
        case 0x13a57cu: goto label_13a57c;
        case 0x13a59cu: goto label_13a59c;
        case 0x13a5b0u: goto label_13a5b0;
        case 0x13a5c0u: goto label_13a5c0;
        default: break;
    }

    ctx->pc = 0x13a530u;

    // 0x13a530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a534: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13a538: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13a538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13a53c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13a53cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a540: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x13a540u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13a544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13a544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13a548: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13A548u;
    SET_GPR_U32(ctx, 31, 0x13A550u);
    ctx->pc = 0x13A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A548u;
    // 0x13a54c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13A548u, 0x13A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A550u;
label_13a550:
    // 0x13a550: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x13a550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13a554: 0x26310504  addiu       $s1, $s1, 0x504
    ctx->pc = 0x13a554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1284));
    // 0x13a558: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x13a558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x13a55c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a560: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x13a560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x13a564: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x13A564u;
    SET_GPR_U32(ctx, 31, 0x13A56Cu);
    ctx->pc = 0x13A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A564u;
    // 0x13a568: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x13A564u, 0x13A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A56Cu;
label_13a56c:
    // 0x13a56c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13A56Cu;
    {
        const bool branch_taken_0x13a56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A56Cu;
        // 0x13a570: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a56c) {
            ctx->pc = 0x13A5B8u;
            goto label_13a5b8;
        }
    }
    ctx->pc = 0x13A574u;
    // 0x13a574: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13A574u;
    SET_GPR_U32(ctx, 31, 0x13A57Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13A574u, 0x13A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A57Cu;
label_13a57c:
    // 0x13a57c: 0x24030fa1  addiu       $v1, $zero, 0xFA1
    ctx->pc = 0x13a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4001));
    // 0x13a580: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a584: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x13a584u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13a588: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13A588u;
    {
        const bool branch_taken_0x13a588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a588) {
            ctx->pc = 0x13A58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A588u;
            // 0x13a58c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A590u;
            goto label_13a590;
        }
    }
    ctx->pc = 0x13A590u;
label_13a590:
    // 0x13a590: 0x8010  mfhi        $s0
    ctx->pc = 0x13a590u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x13a594: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x13A594u;
    SET_GPR_U32(ctx, 31, 0x13A59Cu);
    ctx->pc = 0x13A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A594u;
    // 0x13a598: 0x26100fa0  addiu       $s0, $s0, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x13A594u, 0x13A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A59Cu;
label_13a59c:
    // 0x13a59c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13a5a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x13a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13a5a8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13A5A8u;
    SET_GPR_U32(ctx, 31, 0x13A5B0u);
    ctx->pc = 0x13A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A5A8u;
    // 0x13a5ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13A5A8u, 0x13A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A5B0u;
label_13a5b0:
    // 0x13a5b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13A5B0u;
    {
        const bool branch_taken_0x13a5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5B0u;
        // 0x13a5b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5b0) {
            ctx->pc = 0x13A5C4u;
            goto label_13a5c4;
        }
    }
    ctx->pc = 0x13A5B8u;
label_13a5b8:
    // 0x13a5b8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13A5B8u;
    SET_GPR_U32(ctx, 31, 0x13A5C0u);
    ctx->pc = 0x13A5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A5B8u;
    // 0x13a5bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13A5B8u, 0x13A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A5C0u;
label_13a5c0:
    // 0x13a5c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a5c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a5c4:
    // 0x13a5c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13a5c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a5c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13a5c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a5cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13a5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x13A5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5D0u;
        // 0x13a5d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A5D8u;
}
