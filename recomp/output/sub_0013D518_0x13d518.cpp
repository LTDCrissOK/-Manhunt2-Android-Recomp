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

// Function: sub_0013D518
// Address: 0x13d518 - 0x13d5d8
void sub_0013D518_0x13d518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D518_0x13d518");
#endif

    switch (ctx->pc) {
        case 0x13d55cu: goto label_13d55c;
        case 0x13d570u: goto label_13d570;
        case 0x13d580u: goto label_13d580;
        case 0x13d58cu: goto label_13d58c;
        case 0x13d5acu: goto label_13d5ac;
        default: break;
    }

    ctx->pc = 0x13d518u;

    // 0x13d518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d51c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13d520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13d520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13d524: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d528: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13d528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13d52c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13d52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d530: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13d530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13d534: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13d534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13d538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13d53c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13d53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13d540: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x13d540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x13d544: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13D544u;
    {
        const bool branch_taken_0x13d544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D544u;
        // 0x13d548: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d544) {
            ctx->pc = 0x13D5ACu;
            goto label_13d5ac;
        }
    }
    ctx->pc = 0x13D54Cu;
    // 0x13d54c: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x13D54Cu;
    {
        const bool branch_taken_0x13d54c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D54Cu;
        // 0x13d550: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d54c) {
            ctx->pc = 0x13D5B0u;
            goto label_13d5b0;
        }
    }
    ctx->pc = 0x13D554u;
    // 0x13d554: 0xc04f0a8  jal         func_13C2A0
    ctx->pc = 0x13D554u;
    SET_GPR_U32(ctx, 31, 0x13D55Cu);
    ctx->pc = 0x13C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2A0u, 0x13D554u, 0x13D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D55Cu;
label_13d55c:
    // 0x13d55c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d55cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d560: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13d560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d568: 0xc045612  jal         func_115848
    ctx->pc = 0x13D568u;
    SET_GPR_U32(ctx, 31, 0x13D570u);
    ctx->pc = 0x13D56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D568u;
    // 0x13d56c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x13D568u, 0x13D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D570u;
label_13d570:
    // 0x13d570: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x13d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x13d574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d578: 0xc045642  jal         func_115908
    ctx->pc = 0x13D578u;
    SET_GPR_U32(ctx, 31, 0x13D580u);
    ctx->pc = 0x13D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D578u;
    // 0x13d57c: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115908u, 0x13D578u, 0x13D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D580u;
label_13d580:
    // 0x13d580: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13d580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d584: 0xc045668  jal         func_1159A0
    ctx->pc = 0x13D584u;
    SET_GPR_U32(ctx, 31, 0x13D58Cu);
    ctx->pc = 0x13D588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D584u;
    // 0x13d588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x13D584u, 0x13D58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D58Cu;
label_13d58c:
    // 0x13d58c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13d590: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13d590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13d594: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13d594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13d598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d5a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5a4: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x13D5A4u;
    SET_GPR_U32(ctx, 31, 0x13D5ACu);
    ctx->pc = 0x13D5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D5A4u;
    // 0x13d5a8: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x13D5A4u, 0x13D5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D5ACu;
label_13d5ac:
    // 0x13d5ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13d5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13d5b0:
    // 0x13d5b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13d5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13d5b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13d5b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d5b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13d5b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13d5bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13d5bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d5c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13d5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13d5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5C4u;
        // 0x13d5c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D5CCu;
    // 0x13d5cc: 0x0  nop
    ctx->pc = 0x13d5ccu;
    // NOP
    // 0x13d5d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d5d4: 0x0  nop
    ctx->pc = 0x13d5d4u;
    // NOP
    ctx->pc = 0x13d5d8u;
}
