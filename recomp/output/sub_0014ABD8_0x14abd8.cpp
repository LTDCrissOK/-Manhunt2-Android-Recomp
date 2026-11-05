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

// Function: sub_0014ABD8
// Address: 0x14abd8 - 0x14ace0
void sub_0014ABD8_0x14abd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014ABD8_0x14abd8");
#endif

    switch (ctx->pc) {
        case 0x14abf8u: goto label_14abf8;
        case 0x14ac0cu: goto label_14ac0c;
        case 0x14ac18u: goto label_14ac18;
        case 0x14ac28u: goto label_14ac28;
        case 0x14ac34u: goto label_14ac34;
        case 0x14ac58u: goto label_14ac58;
        case 0x14ac64u: goto label_14ac64;
        case 0x14ac70u: goto label_14ac70;
        case 0x14ac7cu: goto label_14ac7c;
        case 0x14ac98u: goto label_14ac98;
        case 0x14acacu: goto label_14acac;
        case 0x14acc8u: goto label_14acc8;
        default: break;
    }

    ctx->pc = 0x14abd8u;

    // 0x14abd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14abd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14abdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14abe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14abe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14abe4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14abe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14abe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14abec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14abecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14abf0: 0xc052ae4  jal         func_14AB90
    ctx->pc = 0x14ABF0u;
    SET_GPR_U32(ctx, 31, 0x14ABF8u);
    ctx->pc = 0x14ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ABF0u;
    // 0x14abf4: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB90u, 0x14ABF0u, 0x14ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ABF8u;
label_14abf8:
    // 0x14abf8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x14ABF8u;
    {
        const bool branch_taken_0x14abf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABF8u;
        // 0x14abfc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abf8) {
            ctx->pc = 0x14ACC8u;
            goto label_14acc8;
        }
    }
    ctx->pc = 0x14AC00u;
    // 0x14ac00: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14ac00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14ac04: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14AC04u;
    SET_GPR_U32(ctx, 31, 0x14AC0Cu);
    ctx->pc = 0x14AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC04u;
    // 0x14ac08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14AC04u, 0x14AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC0Cu;
label_14ac0c:
    // 0x14ac0c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14ac0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14ac10: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14AC10u;
    SET_GPR_U32(ctx, 31, 0x14AC18u);
    ctx->pc = 0x14AC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC10u;
    // 0x14ac14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14AC10u, 0x14AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC18u;
label_14ac18:
    // 0x14ac18: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14ac18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14ac1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14ac1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac20: 0xc052ade  jal         func_14AB78
    ctx->pc = 0x14AC20u;
    SET_GPR_U32(ctx, 31, 0x14AC28u);
    ctx->pc = 0x14AC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC20u;
    // 0x14ac24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB78u, 0x14AC20u, 0x14AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC28u;
label_14ac28:
    // 0x14ac28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ac28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac2c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14AC2Cu;
    SET_GPR_U32(ctx, 31, 0x14AC34u);
    ctx->pc = 0x14AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC2Cu;
    // 0x14ac30: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14AC2Cu, 0x14AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC34u;
label_14ac34:
    // 0x14ac34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14ac34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac38: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14ac38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ac3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14ac3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14ac40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac44: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x14ac44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14ac48: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14ac48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ac4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ac4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac50: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14AC50u;
    SET_GPR_U32(ctx, 31, 0x14AC58u);
    ctx->pc = 0x14AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC50u;
    // 0x14ac54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14AC50u, 0x14AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC58u;
label_14ac58:
    // 0x14ac58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ac58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac5c: 0xc046104  jal         func_118410
    ctx->pc = 0x14AC5Cu;
    SET_GPR_U32(ctx, 31, 0x14AC64u);
    ctx->pc = 0x14AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC5Cu;
    // 0x14ac60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x14AC5Cu, 0x14AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC64u;
label_14ac64:
    // 0x14ac64: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14ac64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14ac68: 0xc052af0  jal         func_14ABC0
    ctx->pc = 0x14AC68u;
    SET_GPR_U32(ctx, 31, 0x14AC70u);
    ctx->pc = 0x14AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC68u;
    // 0x14ac6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ABC0u, 0x14AC68u, 0x14AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC70u;
label_14ac70:
    // 0x14ac70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14ac70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac74: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x14AC74u;
    SET_GPR_U32(ctx, 31, 0x14AC7Cu);
    ctx->pc = 0x14AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC74u;
    // 0x14ac78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x14AC74u, 0x14AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC7Cu;
label_14ac7c:
    // 0x14ac7c: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x14ac7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14ac80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac84: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14ac88: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14ac8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ac90: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14AC90u;
    SET_GPR_U32(ctx, 31, 0x14AC98u);
    ctx->pc = 0x14AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC90u;
    // 0x14ac94: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14AC90u, 0x14AC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC98u;
label_14ac98:
    // 0x14ac98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ac98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aca0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14aca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aca4: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14ACA4u;
    SET_GPR_U32(ctx, 31, 0x14ACACu);
    ctx->pc = 0x14ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ACA4u;
    // 0x14aca8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14ACA4u, 0x14ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ACACu;
label_14acac:
    // 0x14acac: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14acacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14acb0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14acb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14acb4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14acb8: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x14acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x14acbc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14acc0: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14ACC0u;
    SET_GPR_U32(ctx, 31, 0x14ACC8u);
    ctx->pc = 0x14ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ACC0u;
    // 0x14acc4: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14ACC0u, 0x14ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ACC8u;
label_14acc8:
    // 0x14acc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14acc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14accc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14acccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14acd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14acd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14acd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14acd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14acd8: 0x3e00008  jr          $ra
    ctx->pc = 0x14ACD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ACD8u;
        // 0x14acdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14ACD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14ACE0u;
}
