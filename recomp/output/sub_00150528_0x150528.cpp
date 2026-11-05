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

// Function: sub_00150528
// Address: 0x150528 - 0x150640
void sub_00150528_0x150528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150528_0x150528");
#endif

    switch (ctx->pc) {
        case 0x150554u: goto label_150554;
        case 0x150560u: goto label_150560;
        case 0x150570u: goto label_150570;
        case 0x15057cu: goto label_15057c;
        case 0x1505a0u: goto label_1505a0;
        case 0x1505acu: goto label_1505ac;
        case 0x1505b8u: goto label_1505b8;
        case 0x1505c8u: goto label_1505c8;
        case 0x1505e4u: goto label_1505e4;
        case 0x1505f8u: goto label_1505f8;
        case 0x150608u: goto label_150608;
        case 0x150624u: goto label_150624;
        default: break;
    }

    ctx->pc = 0x150528u;

    // 0x150528: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x150528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15052c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15052cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x150530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x150534: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x150534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x150538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15053c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15053cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x150540: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x150540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x150544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x150544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x150548: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x150548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15054c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x15054Cu;
    SET_GPR_U32(ctx, 31, 0x150554u);
    ctx->pc = 0x150550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15054Cu;
    // 0x150550: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x15054Cu, 0x150554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150554u;
label_150554:
    // 0x150554: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150554u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150558: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x150558u;
    SET_GPR_U32(ctx, 31, 0x150560u);
    ctx->pc = 0x15055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150558u;
    // 0x15055c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x150558u, 0x150560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150560u;
label_150560:
    // 0x150560: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150560u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150564: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x150564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x150568: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x150568u;
    SET_GPR_U32(ctx, 31, 0x150570u);
    ctx->pc = 0x15056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150568u;
    // 0x15056c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x150568u, 0x150570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150570u;
label_150570:
    // 0x150570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150574: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x150574u;
    SET_GPR_U32(ctx, 31, 0x15057Cu);
    ctx->pc = 0x150578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150574u;
    // 0x150578: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x150574u, 0x15057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15057Cu;
label_15057c:
    // 0x15057c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15057cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150580: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x150580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150584: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x150584u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150588: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x150588u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15058c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x15058cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x150590: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x150590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150598: 0xc04daca  jal         func_136B28
    ctx->pc = 0x150598u;
    SET_GPR_U32(ctx, 31, 0x1505A0u);
    ctx->pc = 0x15059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150598u;
    // 0x15059c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x150598u, 0x1505A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505A0u;
label_1505a0:
    // 0x1505a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1505a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505a4: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x1505A4u;
    SET_GPR_U32(ctx, 31, 0x1505ACu);
    ctx->pc = 0x1505A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505A4u;
    // 0x1505a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x1505A4u, 0x1505ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505ACu;
label_1505ac:
    // 0x1505ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1505acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505b0: 0xc046104  jal         func_118410
    ctx->pc = 0x1505B0u;
    SET_GPR_U32(ctx, 31, 0x1505B8u);
    ctx->pc = 0x1505B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505B0u;
    // 0x1505b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x1505B0u, 0x1505B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505B8u;
label_1505b8:
    // 0x1505b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1505b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1505bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1505bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1505c0: 0xc046290  jal         func_118A40
    ctx->pc = 0x1505C0u;
    SET_GPR_U32(ctx, 31, 0x1505C8u);
    ctx->pc = 0x1505C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505C0u;
    // 0x1505c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x1505C0u, 0x1505C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505C8u;
label_1505c8:
    // 0x1505c8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1505c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1505cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1505ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1505d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1505d4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1505d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1505d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1505d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1505dc: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x1505DCu;
    SET_GPR_U32(ctx, 31, 0x1505E4u);
    ctx->pc = 0x1505E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505DCu;
    // 0x1505e0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x1505DCu, 0x1505E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505E4u;
label_1505e4:
    // 0x1505e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1505e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1505e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1505ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505f0: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x1505F0u;
    SET_GPR_U32(ctx, 31, 0x1505F8u);
    ctx->pc = 0x1505F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505F0u;
    // 0x1505f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x1505F0u, 0x1505F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505F8u;
label_1505f8:
    // 0x1505f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1505f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1505fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150600: 0xc053c48  jal         func_14F120
    ctx->pc = 0x150600u;
    SET_GPR_U32(ctx, 31, 0x150608u);
    ctx->pc = 0x150604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150600u;
    // 0x150604: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F120u, 0x150600u, 0x150608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150608u;
label_150608:
    // 0x150608: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x150608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15060c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x15060cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x150610: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x150610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x150614: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x150614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x150618: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x150618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15061c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x15061Cu;
    SET_GPR_U32(ctx, 31, 0x150624u);
    ctx->pc = 0x150620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15061Cu;
    // 0x150620: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x15061Cu, 0x150624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150624u;
label_150624:
    // 0x150624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x150624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x150628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15062c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15062cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150630: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x150630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x150634: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x150634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150638: 0x3e00008  jr          $ra
    ctx->pc = 0x150638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150638u;
        // 0x15063c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150640u;
}
