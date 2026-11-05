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

// Function: sub_002E52B0
// Address: 0x2e52b0 - 0x2e53b8
void sub_002E52B0_0x2e52b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E52B0_0x2e52b0");
#endif

    switch (ctx->pc) {
        case 0x2e52f8u: goto label_2e52f8;
        case 0x2e5300u: goto label_2e5300;
        case 0x2e530cu: goto label_2e530c;
        case 0x2e5334u: goto label_2e5334;
        case 0x2e534cu: goto label_2e534c;
        case 0x2e537cu: goto label_2e537c;
        case 0x2e538cu: goto label_2e538c;
        case 0x2e5398u: goto label_2e5398;
        default: break;
    }

    ctx->pc = 0x2e52b0u;

    // 0x2e52b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e52b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e52b4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2e52b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2e52b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2e52b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2e52bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e52bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e52c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e52c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e52c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e52c8: 0x24424dc0  addiu       $v0, $v0, 0x4DC0
    ctx->pc = 0x2e52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19904));
    // 0x2e52cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e52ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e52d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e52d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e52d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e52d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e52d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e52dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e52dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x594DC4u));
    // 0x2e52e0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E52E0u;
    {
        const bool branch_taken_0x2e52e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E52E0u;
        // 0x2e52e4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52e0) {
            ctx->pc = 0x2E52ECu;
            goto label_2e52ec;
        }
    }
    ctx->pc = 0x2E52E8u;
    // 0x2e52e8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2e52e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e52ec:
    // 0x2e52ec: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E52ECu;
    {
        const bool branch_taken_0x2e52ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E52F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E52ECu;
        // 0x2e52f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52ec) {
            ctx->pc = 0x2E5384u;
            goto label_2e5384;
        }
    }
    ctx->pc = 0x2E52F4u;
    // 0x2e52f4: 0x0  nop
    ctx->pc = 0x2e52f4u;
    // NOP
label_2e52f8:
    // 0x2e52f8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2E52F8u;
    SET_GPR_U32(ctx, 31, 0x2E5300u);
    ctx->pc = 0x2E52FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E52F8u;
    // 0x2e52fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2E52F8u, 0x2E5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5300u;
label_2e5300:
    // 0x2e5300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5304: 0xc0b950c  jal         func_2E5430
    ctx->pc = 0x2E5304u;
    SET_GPR_U32(ctx, 31, 0x2E530Cu);
    ctx->pc = 0x2E5308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5304u;
    // 0x2e5308: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5430u, 0x2E5304u, 0x2E530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E530Cu;
label_2e530c:
    // 0x2e530c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5310: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E5310u;
    {
        const bool branch_taken_0x2e5310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5310u;
        // 0x2e5314: 0x26634dc0  addiu       $v1, $s3, 0x4DC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 19904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5310) {
            ctx->pc = 0x2E5350u;
            goto label_2e5350;
        }
    }
    ctx->pc = 0x2E5318u;
    // 0x2e5318: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2e5318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2e531c: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2e531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2e5320: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E5320u;
    {
        const bool branch_taken_0x2e5320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5320) {
            ctx->pc = 0x2E5324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5320u;
            // 0x2e5324: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5354u;
            goto label_2e5354;
        }
    }
    ctx->pc = 0x2E5328u;
    // 0x2e5328: 0x8c900274  lw          $s0, 0x274($a0)
    ctx->pc = 0x2e5328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2e532c: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2E532Cu;
    SET_GPR_U32(ctx, 31, 0x2E5334u);
    ctx->pc = 0x2E5330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E532Cu;
    // 0x2e5330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2E532Cu, 0x2E5334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5334u;
label_2e5334:
    // 0x2e5334: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2e5334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2e5338: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5338u;
    {
        const bool branch_taken_0x2e5338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5338u;
        // 0x2e533c: 0x26634dc0  addiu       $v1, $s3, 0x4DC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 19904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5338) {
            ctx->pc = 0x2E5350u;
            goto label_2e5350;
        }
    }
    ctx->pc = 0x2E5340u;
    // 0x2e5340: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2e5340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2e5344: 0xc0d9080  jal         func_364200
    ctx->pc = 0x2E5344u;
    SET_GPR_U32(ctx, 31, 0x2E534Cu);
    ctx->pc = 0x2E5348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5344u;
    // 0x2e5348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364200u, 0x2E5344u, 0x2E534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E534Cu;
label_2e534c:
    // 0x2e534c: 0x26634dc0  addiu       $v1, $s3, 0x4DC0
    ctx->pc = 0x2e534cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 19904));
label_2e5350:
    // 0x2e5350: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2e5350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2e5354:
    // 0x2e5354: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5354u;
    {
        const bool branch_taken_0x2e5354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5354u;
        // 0x2e5358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5354) {
            ctx->pc = 0x2E5360u;
            goto label_2e5360;
        }
    }
    ctx->pc = 0x2E535Cu;
    // 0x2e535c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e535cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e5360:
    // 0x2e5360: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5360u;
    {
        const bool branch_taken_0x2e5360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5360u;
        // 0x2e5364: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5360) {
            ctx->pc = 0x2E5370u;
            goto label_2e5370;
        }
    }
    ctx->pc = 0x2E5368u;
    // 0x2e5368: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e5368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e536c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2e536cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2e5370:
    // 0x2e5370: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e5370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5374: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2E5374u;
    SET_GPR_U32(ctx, 31, 0x2E537Cu);
    ctx->pc = 0x2E5378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5374u;
    // 0x2e5378: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2E5374u, 0x2E537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E537Cu;
label_2e537c:
    // 0x2e537c: 0x1620ffde  bnez        $s1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E537Cu;
    {
        const bool branch_taken_0x2e537c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E537Cu;
        // 0x2e5380: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e537c) {
            ctx->pc = 0x2E52F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e52f8;
        }
    }
    ctx->pc = 0x2E5384u;
label_2e5384:
    // 0x2e5384: 0xc0a2de2  jal         func_28B788
    ctx->pc = 0x2E5384u;
    SET_GPR_U32(ctx, 31, 0x2E538Cu);
    ctx->pc = 0x28B788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B788u, 0x2E5384u, 0x2E538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E538Cu;
label_2e538c:
    // 0x2e538c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e538cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5390: 0xc0bf040  jal         func_2FC100
    ctx->pc = 0x2E5390u;
    SET_GPR_U32(ctx, 31, 0x2E5398u);
    ctx->pc = 0x2E5394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5390u;
    // 0x2e5394: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC100u, 0x2E5390u, 0x2E5398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5398u;
label_2e5398:
    // 0x2e5398: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e5398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e539c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e539cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e53a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e53a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e53a4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2e53a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e53a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e53a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e53ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E53ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53ACu;
        // 0x2e53b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E53ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E53B4u;
    // 0x2e53b4: 0x0  nop
    ctx->pc = 0x2e53b4u;
    // NOP
    ctx->pc = 0x2e53b8u;
}
