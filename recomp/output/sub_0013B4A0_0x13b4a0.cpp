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

// Function: sub_0013B4A0
// Address: 0x13b4a0 - 0x13b590
void sub_0013B4A0_0x13b4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B4A0_0x13b4a0");
#endif

    switch (ctx->pc) {
        case 0x13b4c4u: goto label_13b4c4;
        case 0x13b4d4u: goto label_13b4d4;
        case 0x13b4e0u: goto label_13b4e0;
        case 0x13b4f0u: goto label_13b4f0;
        case 0x13b524u: goto label_13b524;
        case 0x13b548u: goto label_13b548;
        case 0x13b554u: goto label_13b554;
        case 0x13b568u: goto label_13b568;
        case 0x13b574u: goto label_13b574;
        default: break;
    }

    ctx->pc = 0x13b4a0u;

    // 0x13b4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b4a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13b4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13b4a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13b4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13b4ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13b4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13b4b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13b4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13b4b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13b4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13b4bc: 0xc04ea10  jal         func_13A840
    ctx->pc = 0x13B4BCu;
    SET_GPR_U32(ctx, 31, 0x13B4C4u);
    ctx->pc = 0x13B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B4BCu;
    // 0x13b4c0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A840u, 0x13B4BCu, 0x13B4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B4C4u;
label_13b4c4:
    // 0x13b4c4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13b4c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13b4c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13b4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b4cc: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x13B4CCu;
    SET_GPR_U32(ctx, 31, 0x13B4D4u);
    ctx->pc = 0x13B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B4CCu;
    // 0x13b4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x13B4CCu, 0x13B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B4D4u;
label_13b4d4:
    // 0x13b4d4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13b4d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13b4d8: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x13B4D8u;
    SET_GPR_U32(ctx, 31, 0x13B4E0u);
    ctx->pc = 0x13B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B4D8u;
    // 0x13b4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x13B4D8u, 0x13B4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B4E0u;
label_13b4e0:
    // 0x13b4e0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13b4e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13b4e4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x13b4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13b4e8: 0xc04e860  jal         func_13A180
    ctx->pc = 0x13B4E8u;
    SET_GPR_U32(ctx, 31, 0x13B4F0u);
    ctx->pc = 0x13B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B4E8u;
    // 0x13b4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x13B4E8u, 0x13B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B4F0u;
label_13b4f0:
    // 0x13b4f0: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x13b4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13b4f4: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x13b4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x13b4f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13b4fc: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x13b4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x13b500: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13b500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13b504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b508: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13b508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13b50c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13b50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b510: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x13b510u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b514: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13b514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13b518: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x13b518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13b51c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x13B51Cu;
    SET_GPR_U32(ctx, 31, 0x13B524u);
    ctx->pc = 0x13B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B51Cu;
    // 0x13b520: 0x8cd3020c  lw          $s3, 0x20C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x13B51Cu, 0x13B524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B524u;
label_13b524:
    // 0x13b524: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13b524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b528: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x13b528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b52c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13b52cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b530: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13b530u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b534: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b538: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x13b538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b540: 0xc04daca  jal         func_136B28
    ctx->pc = 0x13B540u;
    SET_GPR_U32(ctx, 31, 0x13B548u);
    ctx->pc = 0x13B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B540u;
    // 0x13b544: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x13B540u, 0x13B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B548u;
label_13b548:
    // 0x13b548: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x13b548u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x13b54c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x13B54Cu;
    SET_GPR_U32(ctx, 31, 0x13B554u);
    ctx->pc = 0x13B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B54Cu;
    // 0x13b550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x13B54Cu, 0x13B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B554u;
label_13b554:
    // 0x13b554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b558: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13b558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b55c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13b55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b560: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x13B560u;
    SET_GPR_U32(ctx, 31, 0x13B568u);
    ctx->pc = 0x13B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B560u;
    // 0x13b564: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x13B560u, 0x13B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B568u;
label_13b568:
    // 0x13b568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b56c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x13B56Cu;
    SET_GPR_U32(ctx, 31, 0x13B574u);
    ctx->pc = 0x13B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B56Cu;
    // 0x13b570: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x13B56Cu, 0x13B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B574u;
label_13b574:
    // 0x13b574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13b574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13b578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13b57c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13b57cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b580: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13b580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b584: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13b584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b588: 0x3e00008  jr          $ra
    ctx->pc = 0x13B588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B588u;
        // 0x13b58c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B590u;
}
