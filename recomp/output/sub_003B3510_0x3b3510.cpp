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

// Function: sub_003B3510
// Address: 0x3b3510 - 0x3b3600
void sub_003B3510_0x3b3510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3510_0x3b3510");
#endif

    switch (ctx->pc) {
        case 0x3b3534u: goto label_3b3534;
        case 0x3b3550u: goto label_3b3550;
        case 0x3b3594u: goto label_3b3594;
        case 0x3b35b0u: goto label_3b35b0;
        case 0x3b35dcu: goto label_3b35dc;
        default: break;
    }

    ctx->pc = 0x3b3510u;

    // 0x3b3510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b3510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b3514: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b3514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b3518: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b3518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b351c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b351cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3520: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b3520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b3524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b3524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3528: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b3528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b352c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3B352Cu;
    SET_GPR_U32(ctx, 31, 0x3B3534u);
    ctx->pc = 0x3B3530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B352Cu;
    // 0x3b3530: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3B352Cu, 0x3B3534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3534u;
label_3b3534:
    // 0x3b3534: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b3534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b3538: 0x245160c8  addiu       $s1, $v0, 0x60C8
    ctx->pc = 0x3b3538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24776));
    // 0x3b353c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x3b353cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x4260C8u));
    // 0x3b3540: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3B3540u;
    {
        const bool branch_taken_0x3b3540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3540u;
        // 0x3b3544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3540) {
            ctx->pc = 0x3B3574u;
            goto label_3b3574;
        }
    }
    ctx->pc = 0x3B3548u;
    // 0x3b3548: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b3548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b354c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b354cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3550:
    // 0x3b3550: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3b3550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3b3554: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x3b3554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x3b3558: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x3b3558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b355c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B355Cu;
    {
        const bool branch_taken_0x3b355c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B355Cu;
        // 0x3b3560: 0x51980  sll         $v1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b355c) {
            ctx->pc = 0x3B3574u;
            goto label_3b3574;
        }
    }
    ctx->pc = 0x3B3564u;
    // 0x3b3564: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3b3564u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b3568: 0x0  nop
    ctx->pc = 0x3b3568u;
    // NOP
    // 0x3b356c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3B356Cu;
    {
        const bool branch_taken_0x3b356c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B356Cu;
        // 0x3b3570: 0x668821  addu        $s1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b356c) {
            ctx->pc = 0x3B3550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3550;
        }
    }
    ctx->pc = 0x3B3574u;
label_3b3574:
    // 0x3b3574: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3b3574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b3578: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B3578u;
    {
        const bool branch_taken_0x3b3578 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3578u;
        // 0x3b357c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3578) {
            ctx->pc = 0x3B35A0u;
            goto label_3b35a0;
        }
    }
    ctx->pc = 0x3B3580u;
    // 0x3b3580: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b3580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b3584: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x3b3584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b3588: 0x248400b8  addiu       $a0, $a0, 0xB8
    ctx->pc = 0x3b3588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
    // 0x3b358c: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3B358Cu;
    SET_GPR_U32(ctx, 31, 0x3B3594u);
    ctx->pc = 0x3B3590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B358Cu;
    // 0x3b3590: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3B358Cu, 0x3B3594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3594u;
label_3b3594:
    // 0x3b3594: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B3594u;
    {
        const bool branch_taken_0x3b3594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3594u;
        // 0x3b3598: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3594) {
            ctx->pc = 0x3B35D4u;
            goto label_3b35d4;
        }
    }
    ctx->pc = 0x3B359Cu;
    // 0x3b359c: 0x0  nop
    ctx->pc = 0x3b359cu;
    // NOP
label_3b35a0:
    // 0x3b35a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b35a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b35a4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3b35a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3b35a8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B35A8u;
    SET_GPR_U32(ctx, 31, 0x3B35B0u);
    ctx->pc = 0x3B35ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B35A8u;
    // 0x3b35ac: 0x24100040  addiu       $s0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B35A8u, 0x3B35B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B35B0u;
label_3b35b0:
    // 0x3b35b0: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x3b35b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b35b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b35b8: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x3b35b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    // 0x3b35bc: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x3b35bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x3b35c0: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x3b35c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x3b35c4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3b35c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b35c8: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3b35c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b35cc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x3b35ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x3b35d0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x3b35d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_3b35d4:
    // 0x3b35d4: 0xc0ea7de  jal         func_3A9F78
    ctx->pc = 0x3B35D4u;
    SET_GPR_U32(ctx, 31, 0x3B35DCu);
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3B35D4u, 0x3B35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B35DCu;
label_3b35dc:
    // 0x3b35dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b35dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b35e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b35e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b35e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b35e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b35e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b35e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b35ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b35ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b35f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b35f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b35f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B35F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B35F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35F4u;
        // 0x3b35f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B35F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B35FCu;
    // 0x3b35fc: 0x0  nop
    ctx->pc = 0x3b35fcu;
    // NOP
    ctx->pc = 0x3b3600u;
}
