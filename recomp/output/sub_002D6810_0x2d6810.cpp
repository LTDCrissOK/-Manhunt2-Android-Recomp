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

// Function: sub_002D6810
// Address: 0x2d6810 - 0x2d6948
void sub_002D6810_0x2d6810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6810_0x2d6810");
#endif

    switch (ctx->pc) {
        case 0x2d6810u: goto label_2d6810;
        case 0x2d6814u: goto label_2d6814;
        case 0x2d6818u: goto label_2d6818;
        case 0x2d681cu: goto label_2d681c;
        case 0x2d6820u: goto label_2d6820;
        case 0x2d6824u: goto label_2d6824;
        case 0x2d6828u: goto label_2d6828;
        case 0x2d682cu: goto label_2d682c;
        case 0x2d6830u: goto label_2d6830;
        case 0x2d6834u: goto label_2d6834;
        case 0x2d6838u: goto label_2d6838;
        case 0x2d683cu: goto label_2d683c;
        case 0x2d6840u: goto label_2d6840;
        case 0x2d6844u: goto label_2d6844;
        case 0x2d6848u: goto label_2d6848;
        case 0x2d684cu: goto label_2d684c;
        case 0x2d6850u: goto label_2d6850;
        case 0x2d6854u: goto label_2d6854;
        case 0x2d6858u: goto label_2d6858;
        case 0x2d685cu: goto label_2d685c;
        case 0x2d6860u: goto label_2d6860;
        case 0x2d6864u: goto label_2d6864;
        case 0x2d6868u: goto label_2d6868;
        case 0x2d686cu: goto label_2d686c;
        case 0x2d6870u: goto label_2d6870;
        case 0x2d6874u: goto label_2d6874;
        case 0x2d6878u: goto label_2d6878;
        case 0x2d687cu: goto label_2d687c;
        case 0x2d6880u: goto label_2d6880;
        case 0x2d6884u: goto label_2d6884;
        case 0x2d6888u: goto label_2d6888;
        case 0x2d688cu: goto label_2d688c;
        case 0x2d6890u: goto label_2d6890;
        case 0x2d6894u: goto label_2d6894;
        case 0x2d6898u: goto label_2d6898;
        case 0x2d689cu: goto label_2d689c;
        case 0x2d68a0u: goto label_2d68a0;
        case 0x2d68a4u: goto label_2d68a4;
        case 0x2d68a8u: goto label_2d68a8;
        case 0x2d68acu: goto label_2d68ac;
        case 0x2d68b0u: goto label_2d68b0;
        case 0x2d68b4u: goto label_2d68b4;
        case 0x2d68b8u: goto label_2d68b8;
        case 0x2d68bcu: goto label_2d68bc;
        case 0x2d68c0u: goto label_2d68c0;
        case 0x2d68c4u: goto label_2d68c4;
        case 0x2d68c8u: goto label_2d68c8;
        case 0x2d68ccu: goto label_2d68cc;
        case 0x2d68d0u: goto label_2d68d0;
        case 0x2d68d4u: goto label_2d68d4;
        case 0x2d68d8u: goto label_2d68d8;
        case 0x2d68dcu: goto label_2d68dc;
        case 0x2d68e0u: goto label_2d68e0;
        case 0x2d68e4u: goto label_2d68e4;
        case 0x2d68e8u: goto label_2d68e8;
        case 0x2d68ecu: goto label_2d68ec;
        case 0x2d68f0u: goto label_2d68f0;
        case 0x2d68f4u: goto label_2d68f4;
        case 0x2d68f8u: goto label_2d68f8;
        case 0x2d68fcu: goto label_2d68fc;
        case 0x2d6900u: goto label_2d6900;
        case 0x2d6904u: goto label_2d6904;
        case 0x2d6908u: goto label_2d6908;
        case 0x2d690cu: goto label_2d690c;
        case 0x2d6910u: goto label_2d6910;
        case 0x2d6914u: goto label_2d6914;
        case 0x2d6918u: goto label_2d6918;
        case 0x2d691cu: goto label_2d691c;
        case 0x2d6920u: goto label_2d6920;
        case 0x2d6924u: goto label_2d6924;
        case 0x2d6928u: goto label_2d6928;
        case 0x2d692cu: goto label_2d692c;
        case 0x2d6930u: goto label_2d6930;
        case 0x2d6934u: goto label_2d6934;
        case 0x2d6938u: goto label_2d6938;
        case 0x2d693cu: goto label_2d693c;
        case 0x2d6940u: goto label_2d6940;
        case 0x2d6944u: goto label_2d6944;
        default: break;
    }

    ctx->pc = 0x2d6810u;

label_2d6810:
    // 0x2d6810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d6810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d6814:
    // 0x2d6814: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d6814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2d6818:
    // 0x2d6818: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d6818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2d681c:
    // 0x2d681c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d681cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2d6820:
    // 0x2d6820: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d6820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d6824:
    // 0x2d6824: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d6824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2d6828:
    // 0x2d6828: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d6828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d682c:
    // 0x2d682c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2d6830:
    // 0x2d6830: 0xc09dd18  jal         func_277460
label_2d6834:
    if (ctx->pc == 0x2D6834u) {
        ctx->pc = 0x2D6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6830u;
        // 0x2d6834: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6838u;
        goto label_2d6838;
    }
    ctx->pc = 0x2D6830u;
    SET_GPR_U32(ctx, 31, 0x2D6838u);
    ctx->pc = 0x2D6834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6830u;
    // 0x2d6834: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277460u, 0x2D6830u, 0x2D6838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6838u;
label_2d6838:
    // 0x2d6838: 0x24040818  addiu       $a0, $zero, 0x818
    ctx->pc = 0x2d6838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2072));
label_2d683c:
    // 0x2d683c: 0xc0f5240  jal         func_3D4900
label_2d6840:
    if (ctx->pc == 0x2D6840u) {
        ctx->pc = 0x2D6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D683Cu;
        // 0x2d6840: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6844u;
        goto label_2d6844;
    }
    ctx->pc = 0x2D683Cu;
    SET_GPR_U32(ctx, 31, 0x2D6844u);
    ctx->pc = 0x2D6840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D683Cu;
    // 0x2d6840: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D683Cu, 0x2D6844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6844u;
label_2d6844:
    // 0x2d6844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6848:
    // 0x2d6848: 0xc0d737c  jal         func_35CDF0
label_2d684c:
    if (ctx->pc == 0x2D684Cu) {
        ctx->pc = 0x2D684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6848u;
        // 0x2d684c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6850u;
        goto label_2d6850;
    }
    ctx->pc = 0x2D6848u;
    SET_GPR_U32(ctx, 31, 0x2D6850u);
    ctx->pc = 0x2D684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6848u;
    // 0x2d684c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x2D6848u, 0x2D6850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6850u;
label_2d6850:
    // 0x2d6850: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d6850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2d6854:
    // 0x2d6854: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d6854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d6858:
    // 0x2d6858: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2d6858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2d685c:
    // 0x2d685c: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x2d685cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2d6860:
    // 0x2d6860: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2d6860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2d6864:
    // 0x2d6864: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x2d6864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_2d6868:
    // 0x2d6868: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2d6868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2d686c:
    // 0x2d686c: 0x0  nop
    ctx->pc = 0x2d686cu;
    // NOP
label_2d6870:
    // 0x2d6870: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d6870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2d6874:
    // 0x2d6874: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d6874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2d6878:
    // 0x2d6878: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d6878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d687c:
    // 0x2d687c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2d687cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_2d6880:
    // 0x2d6880: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
label_2d6884:
    if (ctx->pc == 0x2D6884u) {
        ctx->pc = 0x2D6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6880u;
        // 0x2d6884: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6888u;
        goto label_2d6888;
    }
    ctx->pc = 0x2D6880u;
    {
        const bool branch_taken_0x2d6880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D6884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6880u;
        // 0x2d6884: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6880) {
            ctx->pc = 0x2D6870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6870;
        }
    }
    ctx->pc = 0x2D6888u;
label_2d6888:
    // 0x2d6888: 0x26020418  addiu       $v0, $s0, 0x418
    ctx->pc = 0x2d6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1048));
label_2d688c:
    // 0x2d688c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x2d688cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_2d6890:
    // 0x2d6890: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d6890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d6894:
    // 0x2d6894: 0x0  nop
    ctx->pc = 0x2d6894u;
    // NOP
label_2d6898:
    // 0x2d6898: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d6898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2d689c:
    // 0x2d689c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2d68a0:
    // 0x2d68a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d68a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d68a4:
    // 0x2d68a4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2d68a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_2d68a8:
    // 0x2d68a8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
label_2d68ac:
    if (ctx->pc == 0x2D68ACu) {
        ctx->pc = 0x2D68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68A8u;
        // 0x2d68ac: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68B0u;
        goto label_2d68b0;
    }
    ctx->pc = 0x2D68A8u;
    {
        const bool branch_taken_0x2d68a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68A8u;
        // 0x2d68ac: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d68a8) {
            ctx->pc = 0x2D6898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6898;
        }
    }
    ctx->pc = 0x2D68B0u;
label_2d68b0:
    // 0x2d68b0: 0xae50001c  sw          $s0, 0x1C($s2)
    ctx->pc = 0x2d68b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 16));
label_2d68b4:
    // 0x2d68b4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d68b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2d68b8:
    // 0x2d68b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d68b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d68bc:
    // 0x2d68bc: 0xc0d7468  jal         func_35D1A0
label_2d68c0:
    if (ctx->pc == 0x2D68C0u) {
        ctx->pc = 0x2D68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68BCu;
        // 0x2d68c0: 0x24a50f90  addiu       $a1, $a1, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68C4u;
        goto label_2d68c4;
    }
    ctx->pc = 0x2D68BCu;
    SET_GPR_U32(ctx, 31, 0x2D68C4u);
    ctx->pc = 0x2D68C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D68BCu;
    // 0x2d68c0: 0x24a50f90  addiu       $a1, $a1, 0xF90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2D68BCu, 0x2D68C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D68C4u;
label_2d68c4:
    // 0x2d68c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d68c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d68c8:
    // 0x2d68c8: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x2d68c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2d68cc:
    // 0x2d68cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d68ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d68d0:
    // 0x2d68d0: 0xc0755cc  jal         func_1D5730
label_2d68d4:
    if (ctx->pc == 0x2D68D4u) {
        ctx->pc = 0x2D68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68D0u;
        // 0x2d68d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68D8u;
        goto label_2d68d8;
    }
    ctx->pc = 0x2D68D0u;
    SET_GPR_U32(ctx, 31, 0x2D68D8u);
    ctx->pc = 0x2D68D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D68D0u;
    // 0x2d68d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5730u, 0x2D68D0u, 0x2D68D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D68D8u;
label_2d68d8:
    // 0x2d68d8: 0xc0754a4  jal         func_1D5290
label_2d68dc:
    if (ctx->pc == 0x2D68DCu) {
        ctx->pc = 0x2D68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68D8u;
        // 0x2d68dc: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68E0u;
        goto label_2d68e0;
    }
    ctx->pc = 0x2D68D8u;
    SET_GPR_U32(ctx, 31, 0x2D68E0u);
    ctx->pc = 0x2D68DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D68D8u;
    // 0x2d68dc: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5290u, 0x2D68D8u, 0x2D68E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D68E0u;
label_2d68e0:
    // 0x2d68e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d68e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d68e4:
    // 0x2d68e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2d68e8:
    // 0x2d68e8: 0x40f809  jalr        $v0
label_2d68ec:
    if (ctx->pc == 0x2D68ECu) {
        ctx->pc = 0x2D68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68E8u;
        // 0x2d68ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D68F0u;
        goto label_2d68f0;
    }
    ctx->pc = 0x2D68E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D68F0u);
        ctx->pc = 0x2D68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68E8u;
        // 0x2d68ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D68E8u, 0x2D68F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D68F0u;
label_2d68f0:
    // 0x2d68f0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2d68f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2d68f4:
    // 0x2d68f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2d68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2d68f8:
    // 0x2d68f8: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_2d68fc:
    if (ctx->pc == 0x2D68FCu) {
        ctx->pc = 0x2D68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68F8u;
        // 0x2d68fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6900u;
        goto label_2d6900;
    }
    ctx->pc = 0x2D68F8u;
    {
        const bool branch_taken_0x2d68f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D68F8u;
        // 0x2d68fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d68f8) {
            ctx->pc = 0x2D6924u;
            goto label_2d6924;
        }
    }
    ctx->pc = 0x2D6900u;
label_2d6900:
    // 0x2d6900: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2d6900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d6904:
    // 0x2d6904: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d6904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d6908:
    // 0x2d6908: 0xc074920  jal         func_1D2480
label_2d690c:
    if (ctx->pc == 0x2D690Cu) {
        ctx->pc = 0x2D690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6908u;
        // 0x2d690c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6910u;
        goto label_2d6910;
    }
    ctx->pc = 0x2D6908u;
    SET_GPR_U32(ctx, 31, 0x2D6910u);
    ctx->pc = 0x2D690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6908u;
    // 0x2d690c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2480u, 0x2D6908u, 0x2D6910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6910u;
label_2d6910:
    // 0x2d6910: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2d6910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2d6914:
    // 0x2d6914: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2d6914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2d6918:
    // 0x2d6918: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2d6918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2d691c:
    // 0x2d691c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2d6920:
    if (ctx->pc == 0x2D6920u) {
        ctx->pc = 0x2D6920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D691Cu;
        // 0x2d6920: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6924u;
        goto label_2d6924;
    }
    ctx->pc = 0x2D691Cu;
    {
        const bool branch_taken_0x2d691c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D691Cu;
        // 0x2d6920: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d691c) {
            ctx->pc = 0x2D6900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6900;
        }
    }
    ctx->pc = 0x2D6924u;
label_2d6924:
    // 0x2d6924: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d6924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d6928:
    // 0x2d6928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d692c:
    // 0x2d692c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d692cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d6930:
    // 0x2d6930: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d6930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d6934:
    // 0x2d6934: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d6934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d6938:
    // 0x2d6938: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d6938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d693c:
    // 0x2d693c: 0x3e00008  jr          $ra
label_2d6940:
    if (ctx->pc == 0x2D6940u) {
        ctx->pc = 0x2D6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D693Cu;
        // 0x2d6940: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6944u;
        goto label_2d6944;
    }
    ctx->pc = 0x2D693Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D693Cu;
        // 0x2d6940: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D693Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6944u;
label_2d6944:
    // 0x2d6944: 0x0  nop
    ctx->pc = 0x2d6944u;
    // NOP
    ctx->pc = 0x2d6948u;
}
