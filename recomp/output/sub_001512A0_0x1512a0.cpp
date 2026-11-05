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

// Function: sub_001512A0
// Address: 0x1512a0 - 0x1515b0
void sub_001512A0_0x1512a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001512A0_0x1512a0");
#endif

    switch (ctx->pc) {
        case 0x1512e4u: goto label_1512e4;
        case 0x151318u: goto label_151318;
        case 0x15133cu: goto label_15133c;
        case 0x151354u: goto label_151354;
        case 0x151368u: goto label_151368;
        case 0x151378u: goto label_151378;
        case 0x151380u: goto label_151380;
        case 0x1513b0u: goto label_1513b0;
        case 0x1513d0u: goto label_1513d0;
        case 0x1513dcu: goto label_1513dc;
        case 0x1513ecu: goto label_1513ec;
        case 0x151408u: goto label_151408;
        case 0x151418u: goto label_151418;
        case 0x151420u: goto label_151420;
        case 0x151458u: goto label_151458;
        case 0x151468u: goto label_151468;
        case 0x151470u: goto label_151470;
        case 0x1514b4u: goto label_1514b4;
        case 0x1514c8u: goto label_1514c8;
        case 0x1514d0u: goto label_1514d0;
        case 0x151510u: goto label_151510;
        case 0x151550u: goto label_151550;
        case 0x151560u: goto label_151560;
        case 0x151568u: goto label_151568;
        default: break;
    }

    ctx->pc = 0x1512a0u;

    // 0x1512a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1512a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1512a4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1512a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1512a8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1512a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1512ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1512acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1512b0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1512b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1512b4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1512b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1512b8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1512b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1512bc: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1512bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1512c0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1512c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1512c4: 0x8e0208c0  lw          $v0, 0x8C0($s0)
    ctx->pc = 0x1512c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2240)));
    // 0x1512c8: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x1512C8u;
    {
        const bool branch_taken_0x1512c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512C8u;
        // 0x1512cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512c8) {
            ctx->pc = 0x151588u;
            goto label_151588;
        }
    }
    ctx->pc = 0x1512D0u;
    // 0x1512d0: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1512D0u;
    {
        const bool branch_taken_0x1512d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1512D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512D0u;
        // 0x1512d4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512d0) {
            ctx->pc = 0x1512ECu;
            goto label_1512ec;
        }
    }
    ctx->pc = 0x1512D8u;
    // 0x1512d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1512d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1512dc: 0xc054498  jal         func_151260
    ctx->pc = 0x1512DCu;
    SET_GPR_U32(ctx, 31, 0x1512E4u);
    ctx->pc = 0x1512E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1512DCu;
    // 0x1512e0: 0xae020960  sw          $v0, 0x960($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2400), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151260u, 0x1512DCu, 0x1512E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512E4u;
label_1512e4:
    // 0x1512e4: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x1512E4u;
    {
        const bool branch_taken_0x1512e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512E4u;
        // 0x1512e8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512e4) {
            ctx->pc = 0x15158Cu;
            goto label_15158c;
        }
    }
    ctx->pc = 0x1512ECu;
label_1512ec:
    // 0x1512ec: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1512ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1512f0: 0x245402d8  addiu       $s4, $v0, 0x2D8
    ctx->pc = 0x1512f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x1512f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1512f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1512f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1512f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1512fc: 0xafb40024  sw          $s4, 0x24($sp)
    ctx->pc = 0x1512fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 20));
    // 0x151300: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x151300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x151304: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x151304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151308: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x151308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x15130c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x15130cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x151310: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x151310u;
    SET_GPR_U32(ctx, 31, 0x151318u);
    ctx->pc = 0x151314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151310u;
    // 0x151314: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x151310u, 0x151318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151318u;
label_151318:
    // 0x151318: 0x8e0608c0  lw          $a2, 0x8C0($s0)
    ctx->pc = 0x151318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2240)));
    // 0x15131c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15131cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151320: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x151320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x151324: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x151324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151328: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x151328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x15132c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15132cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151330: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x151330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x151334: 0xc0411ac  jal         func_1046B0
    ctx->pc = 0x151334u;
    SET_GPR_U32(ctx, 31, 0x15133Cu);
    ctx->pc = 0x151338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151334u;
    // 0x151338: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046B0u, 0x151334u, 0x15133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15133Cu;
label_15133c:
    // 0x15133c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15133Cu;
    {
        const bool branch_taken_0x15133c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15133Cu;
        // 0x151340: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15133c) {
            ctx->pc = 0x151398u;
            goto label_151398;
        }
    }
    ctx->pc = 0x151344u;
    // 0x151344: 0xae130960  sw          $s3, 0x960($s0)
    ctx->pc = 0x151344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2400), GPR_U32(ctx, 19));
    // 0x151348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15134c: 0xc054498  jal         func_151260
    ctx->pc = 0x15134Cu;
    SET_GPR_U32(ctx, 31, 0x151354u);
    ctx->pc = 0x151350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15134Cu;
    // 0x151350: 0x8c8508c0  lw          $a1, 0x8C0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151260u, 0x15134Cu, 0x151354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151354u;
label_151354:
    // 0x151354: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x151354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151358: 0xafb40024  sw          $s4, 0x24($sp)
    ctx->pc = 0x151358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 20));
    // 0x15135c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151360: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x151360u;
    SET_GPR_U32(ctx, 31, 0x151368u);
    ctx->pc = 0x151364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151360u;
    // 0x151364: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x151360u, 0x151368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151368u;
label_151368:
    // 0x151368: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x151368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15136c: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x15136Cu;
    {
        const bool branch_taken_0x15136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15136Cu;
        // 0x151370: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15136c) {
            ctx->pc = 0x151578u;
            goto label_151578;
        }
    }
    ctx->pc = 0x151374u;
    // 0x151374: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x151374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_151378:
    // 0x151378: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x151378u;
    SET_GPR_U32(ctx, 31, 0x151380u);
    ctx->pc = 0x15137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151378u;
    // 0x15137c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x151378u, 0x151380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151380u;
label_151380:
    // 0x151380: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x151380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x151384: 0x0  nop
    ctx->pc = 0x151384u;
    // NOP
    // 0x151388: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x151388u;
    {
        const bool branch_taken_0x151388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151388) {
            ctx->pc = 0x15138Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151388u;
            // 0x15138c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151378;
        }
    }
    ctx->pc = 0x151390u;
    // 0x151390: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x151390u;
    {
        const bool branch_taken_0x151390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151390u;
        // 0x151394: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151390) {
            ctx->pc = 0x15157Cu;
            goto label_15157c;
        }
    }
    ctx->pc = 0x151398u;
label_151398:
    // 0x151398: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x151398u;
    {
        const bool branch_taken_0x151398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151398u;
        // 0x15139c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151398) {
            ctx->pc = 0x1513A4u;
            goto label_1513a4;
        }
    }
    ctx->pc = 0x1513A0u;
    // 0x1513a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1513a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1513a4:
    // 0x1513a4: 0xae020964  sw          $v0, 0x964($s0)
    ctx->pc = 0x1513a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2404), GPR_U32(ctx, 2));
    // 0x1513a8: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1513A8u;
    SET_GPR_U32(ctx, 31, 0x1513B0u);
    ctx->pc = 0x1513ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513A8u;
    // 0x1513ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1513A8u, 0x1513B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513B0u;
label_1513b0:
    // 0x1513b0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1513b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1513b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1513b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1513b8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1513B8u;
    {
        const bool branch_taken_0x1513b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1513BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513B8u;
        // 0x1513bc: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513b8) {
            ctx->pc = 0x1513C4u;
            goto label_1513c4;
        }
    }
    ctx->pc = 0x1513C0u;
    // 0x1513c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1513c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1513c4:
    // 0x1513c4: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1513C4u;
    {
        const bool branch_taken_0x1513c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1513C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513C4u;
        // 0x1513c8: 0xae020964  sw          $v0, 0x964($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513c4) {
            ctx->pc = 0x1514FCu;
            goto label_1514fc;
        }
    }
    ctx->pc = 0x1513CCu;
    // 0x1513cc: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1513ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1513d0:
    // 0x1513d0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1513d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1513d4: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1513D4u;
    SET_GPR_U32(ctx, 31, 0x1513DCu);
    ctx->pc = 0x1513D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513D4u;
    // 0x1513d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1513D4u, 0x1513DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513DCu;
label_1513dc:
    // 0x1513dc: 0x8e050964  lw          $a1, 0x964($s0)
    ctx->pc = 0x1513dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2404)));
    // 0x1513e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1513e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1513e4: 0xc05456c  jal         func_1515B0
    ctx->pc = 0x1513E4u;
    SET_GPR_U32(ctx, 31, 0x1513ECu);
    ctx->pc = 0x1513E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513E4u;
    // 0x1513e8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515B0u, 0x1513E4u, 0x1513ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513ECu;
label_1513ec:
    // 0x1513ec: 0x92020938  lbu         $v0, 0x938($s0)
    ctx->pc = 0x1513ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2360)));
    // 0x1513f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1513F0u;
    {
        const bool branch_taken_0x1513f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1513F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513F0u;
        // 0x1513f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513f0) {
            ctx->pc = 0x151438u;
            goto label_151438;
        }
    }
    ctx->pc = 0x1513F8u;
    // 0x1513f8: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x1513f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x1513fc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1513fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151400: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x151400u;
    SET_GPR_U32(ctx, 31, 0x151408u);
    ctx->pc = 0x151404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151400u;
    // 0x151404: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x151400u, 0x151408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151408u;
label_151408:
    // 0x151408: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x151408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15140c: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x15140Cu;
    {
        const bool branch_taken_0x15140c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15140Cu;
        // 0x151410: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15140c) {
            ctx->pc = 0x151578u;
            goto label_151578;
        }
    }
    ctx->pc = 0x151414u;
    // 0x151414: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x151414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_151418:
    // 0x151418: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x151418u;
    SET_GPR_U32(ctx, 31, 0x151420u);
    ctx->pc = 0x15141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151418u;
    // 0x15141c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x151418u, 0x151420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151420u;
label_151420:
    // 0x151420: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x151420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x151424: 0x0  nop
    ctx->pc = 0x151424u;
    // NOP
    // 0x151428: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x151428u;
    {
        const bool branch_taken_0x151428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151428) {
            ctx->pc = 0x15142Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151428u;
            // 0x15142c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151418;
        }
    }
    ctx->pc = 0x151430u;
    // 0x151430: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x151430u;
    {
        const bool branch_taken_0x151430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151430u;
        // 0x151434: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151430) {
            ctx->pc = 0x15157Cu;
            goto label_15157c;
        }
    }
    ctx->pc = 0x151438u;
label_151438:
    // 0x151438: 0x9204095c  lbu         $a0, 0x95C($s0)
    ctx->pc = 0x151438u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2396)));
    // 0x15143c: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x15143Cu;
    {
        const bool branch_taken_0x15143c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15143c) {
            ctx->pc = 0x151440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15143Cu;
            // 0x151440: 0x8e030964  lw          $v1, 0x964($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151488u;
            goto label_151488;
        }
    }
    ctx->pc = 0x151444u;
    // 0x151444: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x151444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x151448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15144c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x15144cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151450: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x151450u;
    SET_GPR_U32(ctx, 31, 0x151458u);
    ctx->pc = 0x151454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151450u;
    // 0x151454: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x151450u, 0x151458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151458u;
label_151458:
    // 0x151458: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x151458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x15145c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x15145Cu;
    {
        const bool branch_taken_0x15145c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15145Cu;
        // 0x151460: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15145c) {
            ctx->pc = 0x151578u;
            goto label_151578;
        }
    }
    ctx->pc = 0x151464u;
    // 0x151464: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x151464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_151468:
    // 0x151468: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x151468u;
    SET_GPR_U32(ctx, 31, 0x151470u);
    ctx->pc = 0x15146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151468u;
    // 0x15146c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x151468u, 0x151470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151470u;
label_151470:
    // 0x151470: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x151470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x151474: 0x0  nop
    ctx->pc = 0x151474u;
    // NOP
    // 0x151478: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x151478u;
    {
        const bool branch_taken_0x151478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151478) {
            ctx->pc = 0x15147Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151478u;
            // 0x15147c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151468;
        }
    }
    ctx->pc = 0x151480u;
    // 0x151480: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x151480u;
    {
        const bool branch_taken_0x151480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151480u;
        // 0x151484: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151480) {
            ctx->pc = 0x15157Cu;
            goto label_15157c;
        }
    }
    ctx->pc = 0x151488u;
label_151488:
    // 0x151488: 0x8e0208c0  lw          $v0, 0x8C0($s0)
    ctx->pc = 0x151488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2240)));
    // 0x15148c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15148Cu;
    {
        const bool branch_taken_0x15148c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x151490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15148Cu;
        // 0x151490: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15148c) {
            ctx->pc = 0x1514E8u;
            goto label_1514e8;
        }
    }
    ctx->pc = 0x151494u;
    // 0x151494: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x151494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x151498: 0xae03093c  sw          $v1, 0x93C($s0)
    ctx->pc = 0x151498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2364), GPR_U32(ctx, 3));
    // 0x15149c: 0xa202095c  sb          $v0, 0x95C($s0)
    ctx->pc = 0x15149cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2396), (uint8_t)GPR_U32(ctx, 2));
    // 0x1514a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1514a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514a4: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x1514a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x1514a8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1514a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514ac: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1514ACu;
    SET_GPR_U32(ctx, 31, 0x1514B4u);
    ctx->pc = 0x1514B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1514ACu;
    // 0x1514b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1514ACu, 0x1514B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514B4u;
label_1514b4:
    // 0x1514b4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1514b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1514b8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1514B8u;
    {
        const bool branch_taken_0x1514b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514B8u;
        // 0x1514bc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514b8) {
            ctx->pc = 0x151578u;
            goto label_151578;
        }
    }
    ctx->pc = 0x1514C0u;
    // 0x1514c0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1514c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1514c4: 0x0  nop
    ctx->pc = 0x1514c4u;
    // NOP
label_1514c8:
    // 0x1514c8: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1514C8u;
    SET_GPR_U32(ctx, 31, 0x1514D0u);
    ctx->pc = 0x1514CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1514C8u;
    // 0x1514cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1514C8u, 0x1514D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514D0u;
label_1514d0:
    // 0x1514d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1514d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1514d4: 0x0  nop
    ctx->pc = 0x1514d4u;
    // NOP
    // 0x1514d8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1514D8u;
    {
        const bool branch_taken_0x1514d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1514d8) {
            ctx->pc = 0x1514DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1514D8u;
            // 0x1514dc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1514C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1514c8;
        }
    }
    ctx->pc = 0x1514E0u;
    // 0x1514e0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1514E0u;
    {
        const bool branch_taken_0x1514e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514E0u;
        // 0x1514e4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514e0) {
            ctx->pc = 0x15157Cu;
            goto label_15157c;
        }
    }
    ctx->pc = 0x1514E8u;
label_1514e8:
    // 0x1514e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1514E8u;
    {
        const bool branch_taken_0x1514e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514E8u;
        // 0x1514ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514e8) {
            ctx->pc = 0x1514F4u;
            goto label_1514f4;
        }
    }
    ctx->pc = 0x1514F0u;
    // 0x1514f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1514f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1514f4:
    // 0x1514f4: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1514F4u;
    {
        const bool branch_taken_0x1514f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1514F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514F4u;
        // 0x1514f8: 0xae030964  sw          $v1, 0x964($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514f4) {
            ctx->pc = 0x1513D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1513d0;
        }
    }
    ctx->pc = 0x1514FCu;
label_1514fc:
    // 0x1514fc: 0x8e0208c0  lw          $v0, 0x8C0($s0)
    ctx->pc = 0x1514fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2240)));
    // 0x151500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151504: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x151504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151508: 0xc05456c  jal         func_1515B0
    ctx->pc = 0x151508u;
    SET_GPR_U32(ctx, 31, 0x151510u);
    ctx->pc = 0x15150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151508u;
    // 0x15150c: 0xae020964  sw          $v0, 0x964($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2404), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515B0u, 0x151508u, 0x151510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151510u;
label_151510:
    // 0x151510: 0x92020938  lbu         $v0, 0x938($s0)
    ctx->pc = 0x151510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2360)));
    // 0x151514: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151514u;
    {
        const bool branch_taken_0x151514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151514u;
        // 0x151518: 0x26a202d8  addiu       $v0, $s5, 0x2D8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151514) {
            ctx->pc = 0x15153Cu;
            goto label_15153c;
        }
    }
    ctx->pc = 0x15151Cu;
    // 0x15151c: 0x9202095c  lbu         $v0, 0x95C($s0)
    ctx->pc = 0x15151cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2396)));
    // 0x151520: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x151520u;
    {
        const bool branch_taken_0x151520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151520) {
            ctx->pc = 0x151524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151520u;
            // 0x151524: 0x26a202d8  addiu       $v0, $s5, 0x2D8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 728));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15153Cu;
            goto label_15153c;
        }
    }
    ctx->pc = 0x151528u;
    // 0x151528: 0x8e030964  lw          $v1, 0x964($s0)
    ctx->pc = 0x151528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2404)));
    // 0x15152c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151530: 0xa202095c  sb          $v0, 0x95C($s0)
    ctx->pc = 0x151530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2396), (uint8_t)GPR_U32(ctx, 2));
    // 0x151534: 0xae03093c  sw          $v1, 0x93C($s0)
    ctx->pc = 0x151534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2364), GPR_U32(ctx, 3));
    // 0x151538: 0x26a202d8  addiu       $v0, $s5, 0x2D8
    ctx->pc = 0x151538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 728));
label_15153c:
    // 0x15153c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15153cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151540: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x151540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x151544: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x151544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151548: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x151548u;
    SET_GPR_U32(ctx, 31, 0x151550u);
    ctx->pc = 0x15154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151548u;
    // 0x15154c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x151548u, 0x151550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151550u;
label_151550:
    // 0x151550: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x151550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x151554: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x151554u;
    {
        const bool branch_taken_0x151554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151554u;
        // 0x151558: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151554) {
            ctx->pc = 0x151578u;
            goto label_151578;
        }
    }
    ctx->pc = 0x15155Cu;
    // 0x15155c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x15155cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_151560:
    // 0x151560: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x151560u;
    SET_GPR_U32(ctx, 31, 0x151568u);
    ctx->pc = 0x151564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151560u;
    // 0x151564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x151560u, 0x151568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151568u;
label_151568:
    // 0x151568: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x151568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15156c: 0x0  nop
    ctx->pc = 0x15156cu;
    // NOP
    // 0x151570: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x151570u;
    {
        const bool branch_taken_0x151570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151570) {
            ctx->pc = 0x151574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151570u;
            // 0x151574: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151560;
        }
    }
    ctx->pc = 0x151578u;
label_151578:
    // 0x151578: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x151578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_15157c:
    // 0x15157c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x15157cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x151580: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x151580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x151584: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x151584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_151588:
    // 0x151588: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x151588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15158c:
    // 0x15158c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x15158cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x151590: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x151590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151594: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x151594u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x151598: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x151598u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15159c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x15159cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1515a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1515a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1515a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1515A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1515A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515A4u;
        // 0x1515a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1515A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1515ACu;
    // 0x1515ac: 0x0  nop
    ctx->pc = 0x1515acu;
    // NOP
    ctx->pc = 0x1515b0u;
}
