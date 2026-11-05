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

// Function: sub_0014FA28
// Address: 0x14fa28 - 0x14fb00
void sub_0014FA28_0x14fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FA28_0x14fa28");
#endif

    switch (ctx->pc) {
        case 0x14fa4cu: goto label_14fa4c;
        case 0x14fa58u: goto label_14fa58;
        case 0x14fa68u: goto label_14fa68;
        case 0x14fa74u: goto label_14fa74;
        case 0x14fa98u: goto label_14fa98;
        case 0x14fab4u: goto label_14fab4;
        case 0x14fac8u: goto label_14fac8;
        case 0x14fae4u: goto label_14fae4;
        default: break;
    }

    ctx->pc = 0x14fa28u;

    // 0x14fa28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14fa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14fa2c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14fa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fa30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14fa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14fa34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14fa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14fa38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14fa38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14fa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14fa40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14fa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14fa44: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14FA44u;
    SET_GPR_U32(ctx, 31, 0x14FA4Cu);
    ctx->pc = 0x14FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA44u;
    // 0x14fa48: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14FA44u, 0x14FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA4Cu;
label_14fa4c:
    // 0x14fa4c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14fa4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14fa50: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14FA50u;
    SET_GPR_U32(ctx, 31, 0x14FA58u);
    ctx->pc = 0x14FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA50u;
    // 0x14fa54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14FA50u, 0x14FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA58u;
label_14fa58:
    // 0x14fa58: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14fa58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14fa5c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14fa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14fa60: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x14FA60u;
    SET_GPR_U32(ctx, 31, 0x14FA68u);
    ctx->pc = 0x14FA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA60u;
    // 0x14fa64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x14FA60u, 0x14FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA68u;
label_14fa68:
    // 0x14fa68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14fa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa6c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14FA6Cu;
    SET_GPR_U32(ctx, 31, 0x14FA74u);
    ctx->pc = 0x14FA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA6Cu;
    // 0x14fa70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14FA6Cu, 0x14FA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA74u;
label_14fa74:
    // 0x14fa74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14fa74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa78: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14fa78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fa7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14fa7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14fa80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14fa84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fa88: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14fa88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fa8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14fa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa90: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14FA90u;
    SET_GPR_U32(ctx, 31, 0x14FA98u);
    ctx->pc = 0x14FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FA90u;
    // 0x14fa94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14FA90u, 0x14FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FA98u;
label_14fa98:
    // 0x14fa98: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14fa98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14fa9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14fa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14faa0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14faa4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14faa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14faac: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14FAACu;
    SET_GPR_U32(ctx, 31, 0x14FAB4u);
    ctx->pc = 0x14FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FAACu;
    // 0x14fab0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14FAACu, 0x14FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAB4u;
label_14fab4:
    // 0x14fab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14fab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fab8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14fab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fabc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14fabcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fac0: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14FAC0u;
    SET_GPR_U32(ctx, 31, 0x14FAC8u);
    ctx->pc = 0x14FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FAC0u;
    // 0x14fac4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14FAC0u, 0x14FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAC8u;
label_14fac8:
    // 0x14fac8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14facc: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x14faccu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14fad0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x14fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14fad4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x14fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x14fad8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x14fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14fadc: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14FADCu;
    SET_GPR_U32(ctx, 31, 0x14FAE4u);
    ctx->pc = 0x14FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FADCu;
    // 0x14fae0: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14FADCu, 0x14FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FAE4u;
label_14fae4:
    // 0x14fae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14fae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14fae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14faec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14faecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14faf0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14faf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14faf4: 0x3e00008  jr          $ra
    ctx->pc = 0x14FAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FAF4u;
        // 0x14faf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FAFCu;
    // 0x14fafc: 0x0  nop
    ctx->pc = 0x14fafcu;
    // NOP
    ctx->pc = 0x14fb00u;
}
