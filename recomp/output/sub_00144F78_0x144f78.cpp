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

// Function: sub_00144F78
// Address: 0x144f78 - 0x145080
void sub_00144F78_0x144f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144F78_0x144f78");
#endif

    switch (ctx->pc) {
        case 0x144f98u: goto label_144f98;
        case 0x144fc0u: goto label_144fc0;
        case 0x144fccu: goto label_144fcc;
        case 0x144fdcu: goto label_144fdc;
        case 0x144fe4u: goto label_144fe4;
        case 0x144ff4u: goto label_144ff4;
        case 0x145018u: goto label_145018;
        case 0x145034u: goto label_145034;
        case 0x145048u: goto label_145048;
        case 0x145064u: goto label_145064;
        default: break;
    }

    ctx->pc = 0x144f78u;

    // 0x144f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144f7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x144f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x144f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144f84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x144f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144f88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x144f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x144f8c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x144f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x144f90: 0xc04e866  jal         func_13A198
    ctx->pc = 0x144F90u;
    SET_GPR_U32(ctx, 31, 0x144F98u);
    ctx->pc = 0x144F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144F90u;
    // 0x144f94: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x144F90u, 0x144F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144F98u;
label_144f98:
    // 0x144f98: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x144f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x144f9c: 0x10430031  beq         $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x144F9Cu;
    {
        const bool branch_taken_0x144f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x144FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144F9Cu;
        // 0x144fa0: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144f9c) {
            ctx->pc = 0x145064u;
            goto label_145064;
        }
    }
    ctx->pc = 0x144FA4u;
    // 0x144fa4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x144fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144fa8: 0x8c620788  lw          $v0, 0x788($v1)
    ctx->pc = 0x144fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
    // 0x144fac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144fb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x144fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x144fb4: 0xac620788  sw          $v0, 0x788($v1)
    ctx->pc = 0x144fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1928), GPR_U32(ctx, 2));
    // 0x144fb8: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x144FB8u;
    SET_GPR_U32(ctx, 31, 0x144FC0u);
    ctx->pc = 0x144FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144FB8u;
    // 0x144fbc: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x144FB8u, 0x144FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144FC0u;
label_144fc0:
    // 0x144fc0: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x144fc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x144fc4: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x144FC4u;
    SET_GPR_U32(ctx, 31, 0x144FCCu);
    ctx->pc = 0x144FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144FC4u;
    // 0x144fc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x144FC4u, 0x144FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144FCCu;
label_144fcc:
    // 0x144fcc: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x144fccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x144fd0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x144fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x144fd4: 0xc04e860  jal         func_13A180
    ctx->pc = 0x144FD4u;
    SET_GPR_U32(ctx, 31, 0x144FDCu);
    ctx->pc = 0x144FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144FD4u;
    // 0x144fd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x144FD4u, 0x144FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144FDCu;
label_144fdc:
    // 0x144fdc: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x144FDCu;
    SET_GPR_U32(ctx, 31, 0x144FE4u);
    ctx->pc = 0x144FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144FDCu;
    // 0x144fe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x144FDCu, 0x144FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144FE4u;
label_144fe4:
    // 0x144fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144fe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144fec: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x144FECu;
    SET_GPR_U32(ctx, 31, 0x144FF4u);
    ctx->pc = 0x144FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144FECu;
    // 0x144ff0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x144FECu, 0x144FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144FF4u;
label_144ff4:
    // 0x144ff4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x144ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ff8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x144ff8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ffc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x144ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145000: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x145000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145004: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145008: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x145008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14500c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14500cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145010: 0xc04daca  jal         func_136B28
    ctx->pc = 0x145010u;
    SET_GPR_U32(ctx, 31, 0x145018u);
    ctx->pc = 0x145014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145010u;
    // 0x145014: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x145010u, 0x145018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145018u;
label_145018:
    // 0x145018: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x145018u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14501c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14501cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145020: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x145020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x145024: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x145024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x145028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14502c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14502Cu;
    SET_GPR_U32(ctx, 31, 0x145034u);
    ctx->pc = 0x145030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14502Cu;
    // 0x145030: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14502Cu, 0x145034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145034u;
label_145034:
    // 0x145034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x145034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145038: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x145038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14503c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14503cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145040: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x145040u;
    SET_GPR_U32(ctx, 31, 0x145048u);
    ctx->pc = 0x145044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145040u;
    // 0x145044: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x145040u, 0x145048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145048u;
label_145048:
    // 0x145048: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x145048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14504c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14504cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x145050: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x145050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x145054: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x145054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x145058: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x145058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14505c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14505Cu;
    SET_GPR_U32(ctx, 31, 0x145064u);
    ctx->pc = 0x145060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14505Cu;
    // 0x145060: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14505Cu, 0x145064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145064u;
label_145064:
    // 0x145064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14506c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14506cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145070: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x145070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x145074: 0x3e00008  jr          $ra
    ctx->pc = 0x145074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145074u;
        // 0x145078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14507Cu;
    // 0x14507c: 0x0  nop
    ctx->pc = 0x14507cu;
    // NOP
    ctx->pc = 0x145080u;
}
