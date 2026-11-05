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

// Function: sub_00150A18
// Address: 0x150a18 - 0x150b08
void sub_00150A18_0x150a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150A18_0x150a18");
#endif

    switch (ctx->pc) {
        case 0x150a3cu: goto label_150a3c;
        case 0x150a48u: goto label_150a48;
        case 0x150a58u: goto label_150a58;
        case 0x150a64u: goto label_150a64;
        case 0x150a88u: goto label_150a88;
        case 0x150aa4u: goto label_150aa4;
        case 0x150ab8u: goto label_150ab8;
        case 0x150ac4u: goto label_150ac4;
        case 0x150ae0u: goto label_150ae0;
        case 0x150aecu: goto label_150aec;
        default: break;
    }

    ctx->pc = 0x150a18u;

    // 0x150a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150a1c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x150a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150a20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x150a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x150a24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x150a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x150a28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x150a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x150a30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x150a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x150a34: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x150A34u;
    SET_GPR_U32(ctx, 31, 0x150A3Cu);
    ctx->pc = 0x150A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A34u;
    // 0x150a38: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x150A34u, 0x150A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A3Cu;
label_150a3c:
    // 0x150a3c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150a3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150a40: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x150A40u;
    SET_GPR_U32(ctx, 31, 0x150A48u);
    ctx->pc = 0x150A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A40u;
    // 0x150a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x150A40u, 0x150A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A48u;
label_150a48:
    // 0x150a48: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150a48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150a4c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x150a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x150a50: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x150A50u;
    SET_GPR_U32(ctx, 31, 0x150A58u);
    ctx->pc = 0x150A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A50u;
    // 0x150a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x150A50u, 0x150A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A58u;
label_150a58:
    // 0x150a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a5c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x150A5Cu;
    SET_GPR_U32(ctx, 31, 0x150A64u);
    ctx->pc = 0x150A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A5Cu;
    // 0x150a60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x150A5Cu, 0x150A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A64u;
label_150a64:
    // 0x150a64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x150a64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a68: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x150a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150a6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x150a6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x150a70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a78: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x150a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a80: 0xc04daca  jal         func_136B28
    ctx->pc = 0x150A80u;
    SET_GPR_U32(ctx, 31, 0x150A88u);
    ctx->pc = 0x150A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A80u;
    // 0x150a84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x150A80u, 0x150A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A88u;
label_150a88:
    // 0x150a88: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150a88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150a94: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x150a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x150a98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150a9c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x150A9Cu;
    SET_GPR_U32(ctx, 31, 0x150AA4u);
    ctx->pc = 0x150AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A9Cu;
    // 0x150aa0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x150A9Cu, 0x150AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AA4u;
label_150aa4:
    // 0x150aa4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x150aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150aa8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x150aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ab0: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x150AB0u;
    SET_GPR_U32(ctx, 31, 0x150AB8u);
    ctx->pc = 0x150AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150AB0u;
    // 0x150ab4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x150AB0u, 0x150AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AB8u;
label_150ab8:
    // 0x150ab8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150ab8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150abc: 0xc053daa  jal         func_14F6A8
    ctx->pc = 0x150ABCu;
    SET_GPR_U32(ctx, 31, 0x150AC4u);
    ctx->pc = 0x150AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150ABCu;
    // 0x150ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F6A8u, 0x150ABCu, 0x150AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AC4u;
label_150ac4:
    // 0x150ac4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x150ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x150ac8: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x150ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x150acc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x150accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x150ad0: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x150ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x150ad4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x150ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x150ad8: 0xc043c56  jal         func_10F158
    ctx->pc = 0x150AD8u;
    SET_GPR_U32(ctx, 31, 0x150AE0u);
    ctx->pc = 0x150ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150AD8u;
    // 0x150adc: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x150AD8u, 0x150AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AE0u;
label_150ae0:
    // 0x150ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ae4: 0xc054952  jal         func_152548
    ctx->pc = 0x150AE4u;
    SET_GPR_U32(ctx, 31, 0x150AECu);
    ctx->pc = 0x150AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150AE4u;
    // 0x150ae8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152548u, 0x150AE4u, 0x150AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AECu;
label_150aec:
    // 0x150aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x150aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150af0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x150af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x150af4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x150af4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150af8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x150af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x150afc: 0x3e00008  jr          $ra
    ctx->pc = 0x150AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150AFCu;
        // 0x150b00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150B04u;
    // 0x150b04: 0x0  nop
    ctx->pc = 0x150b04u;
    // NOP
    ctx->pc = 0x150b08u;
}
