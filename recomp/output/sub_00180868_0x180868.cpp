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

// Function: sub_00180868
// Address: 0x180868 - 0x180938
void sub_00180868_0x180868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180868_0x180868");
#endif

    switch (ctx->pc) {
        case 0x1808acu: goto label_1808ac;
        case 0x1808b8u: goto label_1808b8;
        case 0x1808ccu: goto label_1808cc;
        case 0x1808ecu: goto label_1808ec;
        case 0x1808fcu: goto label_1808fc;
        case 0x180908u: goto label_180908;
        case 0x180924u: goto label_180924;
        default: break;
    }

    ctx->pc = 0x180868u;

    // 0x180868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18086c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x18086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x180870: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x180870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x180874: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x180874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x180878: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x180878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18087c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x180880: 0x92230412  lbu         $v1, 0x412($s1)
    ctx->pc = 0x180880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1042)));
    // 0x180884: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x180884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180888: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18088c: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x18088cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x180890: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x180890u;
    {
        const bool branch_taken_0x180890 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x180890) {
            ctx->pc = 0x1808F4u;
            goto label_1808f4;
        }
    }
    ctx->pc = 0x180898u;
    // 0x180898: 0x8cb0002c  lw          $s0, 0x2C($a1)
    ctx->pc = 0x180898u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x18089c: 0x52000022  beql        $s0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x18089Cu;
    {
        const bool branch_taken_0x18089c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18089c) {
            ctx->pc = 0x1808A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18089Cu;
            // 0x1808a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180928u;
            goto label_180928;
        }
    }
    ctx->pc = 0x1808A4u;
    // 0x1808a4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1808A4u;
    SET_GPR_U32(ctx, 31, 0x1808ACu);
    ctx->pc = 0x1808A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1808A4u;
    // 0x1808a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1808A4u, 0x1808ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1808ACu;
label_1808ac:
    // 0x1808ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1808acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808b0: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x1808B0u;
    SET_GPR_U32(ctx, 31, 0x1808B8u);
    ctx->pc = 0x1808B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1808B0u;
    // 0x1808b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x1808B0u, 0x1808B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1808B8u;
label_1808b8:
    // 0x1808b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1808B8u;
    {
        const bool branch_taken_0x1808b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1808b8) {
            ctx->pc = 0x1808BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1808B8u;
            // 0x1808bc: 0x92220412  lbu         $v0, 0x412($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1042)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1808D4u;
            goto label_1808d4;
        }
    }
    ctx->pc = 0x1808C0u;
    // 0x1808c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1808c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808c4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1808C4u;
    SET_GPR_U32(ctx, 31, 0x1808CCu);
    ctx->pc = 0x1808C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1808C4u;
    // 0x1808c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1808C4u, 0x1808CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1808CCu;
label_1808cc:
    // 0x1808cc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1808CCu;
    {
        const bool branch_taken_0x1808cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1808D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808CCu;
        // 0x1808d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808cc) {
            ctx->pc = 0x180928u;
            goto label_180928;
        }
    }
    ctx->pc = 0x1808D4u;
label_1808d4:
    // 0x1808d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1808d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1808d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1808dc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1808dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1808e0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1808e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1808e4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1808E4u;
    SET_GPR_U32(ctx, 31, 0x1808ECu);
    ctx->pc = 0x1808E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1808E4u;
    // 0x1808e8: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1808E4u, 0x1808ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1808ECu;
label_1808ec:
    // 0x1808ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1808ECu;
    {
        const bool branch_taken_0x1808ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1808F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808ECu;
        // 0x1808f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808ec) {
            ctx->pc = 0x180928u;
            goto label_180928;
        }
    }
    ctx->pc = 0x1808F4u;
label_1808f4:
    // 0x1808f4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1808F4u;
    SET_GPR_U32(ctx, 31, 0x1808FCu);
    ctx->pc = 0x1808F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1808F4u;
    // 0x1808f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1808F4u, 0x1808FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1808FCu;
label_1808fc:
    // 0x1808fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1808fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180900: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x180900u;
    SET_GPR_U32(ctx, 31, 0x180908u);
    ctx->pc = 0x180904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180900u;
    // 0x180904: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x180900u, 0x180908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180908u;
label_180908:
    // 0x180908: 0x92230412  lbu         $v1, 0x412($s1)
    ctx->pc = 0x180908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1042)));
    // 0x18090c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180910: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180914: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x180914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x180918: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x180918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18091c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x18091Cu;
    SET_GPR_U32(ctx, 31, 0x180924u);
    ctx->pc = 0x180920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18091Cu;
    // 0x180920: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x18091Cu, 0x180924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180924u;
label_180924:
    // 0x180924: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x180924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_180928:
    // 0x180928: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x180928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18092c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180930: 0x3e00008  jr          $ra
    ctx->pc = 0x180930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180930u;
        // 0x180934: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180938u;
}
