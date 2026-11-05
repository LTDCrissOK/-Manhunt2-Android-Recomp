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

// Function: sub_001492B8
// Address: 0x1492b8 - 0x149390
void sub_001492B8_0x1492b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001492B8_0x1492b8");
#endif

    switch (ctx->pc) {
        case 0x1492dcu: goto label_1492dc;
        case 0x1492e8u: goto label_1492e8;
        case 0x1492f8u: goto label_1492f8;
        case 0x149304u: goto label_149304;
        case 0x149328u: goto label_149328;
        case 0x149344u: goto label_149344;
        case 0x149358u: goto label_149358;
        case 0x149374u: goto label_149374;
        default: break;
    }

    ctx->pc = 0x1492b8u;

    // 0x1492b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1492b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1492bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1492bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1492c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1492c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1492c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1492c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1492c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1492c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1492ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1492d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1492d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1492d4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1492D4u;
    SET_GPR_U32(ctx, 31, 0x1492DCu);
    ctx->pc = 0x1492D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1492D4u;
    // 0x1492d8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1492D4u, 0x1492DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492DCu;
label_1492dc:
    // 0x1492dc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1492dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1492e0: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1492E0u;
    SET_GPR_U32(ctx, 31, 0x1492E8u);
    ctx->pc = 0x1492E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1492E0u;
    // 0x1492e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1492E0u, 0x1492E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492E8u;
label_1492e8:
    // 0x1492e8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1492e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1492ec: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1492ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1492f0: 0xc052388  jal         func_148E20
    ctx->pc = 0x1492F0u;
    SET_GPR_U32(ctx, 31, 0x1492F8u);
    ctx->pc = 0x1492F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1492F0u;
    // 0x1492f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E20u, 0x1492F0u, 0x1492F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492F8u;
label_1492f8:
    // 0x1492f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1492f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492fc: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1492FCu;
    SET_GPR_U32(ctx, 31, 0x149304u);
    ctx->pc = 0x149300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1492FCu;
    // 0x149300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1492FCu, 0x149304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149304u;
label_149304:
    // 0x149304: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x149304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149308: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x149308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14930c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14930cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149310: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x149310u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149318: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x149318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14931c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14931cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149320: 0xc04daca  jal         func_136B28
    ctx->pc = 0x149320u;
    SET_GPR_U32(ctx, 31, 0x149328u);
    ctx->pc = 0x149324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149320u;
    // 0x149324: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x149320u, 0x149328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149328u;
label_149328:
    // 0x149328: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x149328u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14932c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149330: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x149330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x149334: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x149334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x149338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14933c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14933Cu;
    SET_GPR_U32(ctx, 31, 0x149344u);
    ctx->pc = 0x149340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14933Cu;
    // 0x149340: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14933Cu, 0x149344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149344u;
label_149344:
    // 0x149344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149348: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x149348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14934c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14934cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149350: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x149350u;
    SET_GPR_U32(ctx, 31, 0x149358u);
    ctx->pc = 0x149354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149350u;
    // 0x149354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x149350u, 0x149358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149358u;
label_149358:
    // 0x149358: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x149358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14935c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x14935cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x149360: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x149360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x149364: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x149364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x149368: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x149368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x14936c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14936Cu;
    SET_GPR_U32(ctx, 31, 0x149374u);
    ctx->pc = 0x149370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14936Cu;
    // 0x149370: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14936Cu, 0x149374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149374u;
label_149374:
    // 0x149374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x149374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x149378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14937c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14937cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149380: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x149380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x149384: 0x3e00008  jr          $ra
    ctx->pc = 0x149384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149384u;
        // 0x149388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14938Cu;
    // 0x14938c: 0x0  nop
    ctx->pc = 0x14938cu;
    // NOP
    ctx->pc = 0x149390u;
}
