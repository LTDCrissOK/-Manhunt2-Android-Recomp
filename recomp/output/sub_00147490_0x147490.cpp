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

// Function: sub_00147490
// Address: 0x147490 - 0x1475b0
void sub_00147490_0x147490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147490_0x147490");
#endif

    switch (ctx->pc) {
        case 0x1474b0u: goto label_1474b0;
        case 0x1474c8u: goto label_1474c8;
        case 0x1474d4u: goto label_1474d4;
        case 0x1474e4u: goto label_1474e4;
        case 0x1474f4u: goto label_1474f4;
        case 0x147500u: goto label_147500;
        case 0x147524u: goto label_147524;
        case 0x147530u: goto label_147530;
        case 0x14753cu: goto label_14753c;
        case 0x147548u: goto label_147548;
        case 0x147564u: goto label_147564;
        case 0x147578u: goto label_147578;
        case 0x147594u: goto label_147594;
        default: break;
    }

    ctx->pc = 0x147490u;

    // 0x147490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147494: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x147494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x147498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x147498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14749c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14749cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1474a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1474a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1474a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1474a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1474a8: 0xc051b40  jal         func_146D00
    ctx->pc = 0x1474A8u;
    SET_GPR_U32(ctx, 31, 0x1474B0u);
    ctx->pc = 0x1474ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1474A8u;
    // 0x1474ac: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146D00u, 0x1474A8u, 0x1474B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474B0u;
label_1474b0:
    // 0x1474b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1474b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1474b4: 0x10430037  beq         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1474B4u;
    {
        const bool branch_taken_0x1474b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1474B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1474B4u;
        // 0x1474b8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1474b4) {
            ctx->pc = 0x147594u;
            goto label_147594;
        }
    }
    ctx->pc = 0x1474BCu;
    // 0x1474bc: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1474bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1474c0: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1474C0u;
    SET_GPR_U32(ctx, 31, 0x1474C8u);
    ctx->pc = 0x1474C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1474C0u;
    // 0x1474c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1474C0u, 0x1474C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474C8u;
label_1474c8:
    // 0x1474c8: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1474c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1474cc: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1474CCu;
    SET_GPR_U32(ctx, 31, 0x1474D4u);
    ctx->pc = 0x1474D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1474CCu;
    // 0x1474d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1474CCu, 0x1474D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474D4u;
label_1474d4:
    // 0x1474d4: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x1474d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x1474d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1474d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1474dc: 0xc051b3a  jal         func_146CE8
    ctx->pc = 0x1474DCu;
    SET_GPR_U32(ctx, 31, 0x1474E4u);
    ctx->pc = 0x1474E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1474DCu;
    // 0x1474e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146CE8u, 0x1474DCu, 0x1474E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474E4u;
label_1474e4:
    // 0x1474e4: 0x8e460564  lw          $a2, 0x564($s2)
    ctx->pc = 0x1474e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x1474e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1474e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1474ec: 0xc051b74  jal         func_146DD0
    ctx->pc = 0x1474ECu;
    SET_GPR_U32(ctx, 31, 0x1474F4u);
    ctx->pc = 0x1474F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1474ECu;
    // 0x1474f0: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146DD0u, 0x1474ECu, 0x1474F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474F4u;
label_1474f4:
    // 0x1474f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1474f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1474f8: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1474F8u;
    SET_GPR_U32(ctx, 31, 0x147500u);
    ctx->pc = 0x1474FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1474F8u;
    // 0x1474fc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1474F8u, 0x147500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147500u;
label_147500:
    // 0x147500: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x147500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147504: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x147504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147508: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x147508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14750c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14750cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147510: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x147510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x147514: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x147514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14751c: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14751Cu;
    SET_GPR_U32(ctx, 31, 0x147524u);
    ctx->pc = 0x147520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14751Cu;
    // 0x147520: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14751Cu, 0x147524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147524u;
label_147524:
    // 0x147524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147528: 0xc046104  jal         func_118410
    ctx->pc = 0x147528u;
    SET_GPR_U32(ctx, 31, 0x147530u);
    ctx->pc = 0x14752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147528u;
    // 0x14752c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x147528u, 0x147530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147530u;
label_147530:
    // 0x147530: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x147530u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x147534: 0xc051b7a  jal         func_146DE8
    ctx->pc = 0x147534u;
    SET_GPR_U32(ctx, 31, 0x14753Cu);
    ctx->pc = 0x147538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147534u;
    // 0x147538: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146DE8u, 0x147534u, 0x14753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14753Cu;
label_14753c:
    // 0x14753c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14753cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147540: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x147540u;
    SET_GPR_U32(ctx, 31, 0x147548u);
    ctx->pc = 0x147544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147540u;
    // 0x147544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x147540u, 0x147548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147548u;
label_147548:
    // 0x147548: 0x9245046c  lbu         $a1, 0x46C($s2)
    ctx->pc = 0x147548u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x14754c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14754cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147550: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x147550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x147554: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x147554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x147558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x147558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14755c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14755Cu;
    SET_GPR_U32(ctx, 31, 0x147564u);
    ctx->pc = 0x147560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14755Cu;
    // 0x147560: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14755Cu, 0x147564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147564u;
label_147564:
    // 0x147564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x147564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x147568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14756c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14756cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147570: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x147570u;
    SET_GPR_U32(ctx, 31, 0x147578u);
    ctx->pc = 0x147574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147570u;
    // 0x147574: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x147570u, 0x147578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147578u;
label_147578:
    // 0x147578: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x147578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14757c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14757cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x147580: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x147580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x147584: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x147584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x147588: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x147588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14758c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14758Cu;
    SET_GPR_U32(ctx, 31, 0x147594u);
    ctx->pc = 0x147590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14758Cu;
    // 0x147590: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14758Cu, 0x147594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147594u;
label_147594:
    // 0x147594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x147594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147598: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x147598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14759c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14759cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1475a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1475a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1475a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1475A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1475A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1475A4u;
        // 0x1475a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1475A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1475ACu;
    // 0x1475ac: 0x0  nop
    ctx->pc = 0x1475acu;
    // NOP
    ctx->pc = 0x1475b0u;
}
