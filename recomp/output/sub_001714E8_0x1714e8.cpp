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

// Function: sub_001714E8
// Address: 0x1714e8 - 0x171658
void sub_001714E8_0x1714e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001714E8_0x1714e8");
#endif

    switch (ctx->pc) {
        case 0x171514u: goto label_171514;
        case 0x171528u: goto label_171528;
        case 0x171538u: goto label_171538;
        case 0x171540u: goto label_171540;
        case 0x171558u: goto label_171558;
        case 0x171568u: goto label_171568;
        case 0x171574u: goto label_171574;
        case 0x171584u: goto label_171584;
        case 0x17159cu: goto label_17159c;
        case 0x1715b0u: goto label_1715b0;
        case 0x1715c0u: goto label_1715c0;
        case 0x1715ccu: goto label_1715cc;
        case 0x1715dcu: goto label_1715dc;
        case 0x1715ecu: goto label_1715ec;
        case 0x1715f8u: goto label_1715f8;
        case 0x17160cu: goto label_17160c;
        case 0x171624u: goto label_171624;
        case 0x17162cu: goto label_17162c;
        case 0x17163cu: goto label_17163c;
        default: break;
    }

    ctx->pc = 0x1714e8u;

    // 0x1714e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1714e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1714ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1714ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1714f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1714f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1714f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1714f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1714f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1714fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1714fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171500: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x171500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x171504: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x171504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x171508: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x171508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x17150c: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x17150Cu;
    SET_GPR_U32(ctx, 31, 0x171514u);
    ctx->pc = 0x171510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17150Cu;
    // 0x171510: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x17150Cu, 0x171514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171514u;
label_171514:
    // 0x171514: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x171514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x171518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17151c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x17151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x171520: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x171520u;
    SET_GPR_U32(ctx, 31, 0x171528u);
    ctx->pc = 0x171524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171520u;
    // 0x171524: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x171520u, 0x171528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171528u;
label_171528:
    // 0x171528: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x171528u;
    {
        const bool branch_taken_0x171528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171528u;
        // 0x17152c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171528) {
            ctx->pc = 0x171548u;
            goto label_171548;
        }
    }
    ctx->pc = 0x171530u;
    // 0x171530: 0xc05c82c  jal         func_1720B0
    ctx->pc = 0x171530u;
    SET_GPR_U32(ctx, 31, 0x171538u);
    ctx->pc = 0x171534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171530u;
    // 0x171534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1720B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1720B0u, 0x171530u, 0x171538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171538u;
label_171538:
    // 0x171538: 0xc05c86a  jal         func_1721A8
    ctx->pc = 0x171538u;
    SET_GPR_U32(ctx, 31, 0x171540u);
    ctx->pc = 0x17153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171538u;
    // 0x17153c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721A8u, 0x171538u, 0x171540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171540u;
label_171540:
    // 0x171540: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x171540u;
    {
        const bool branch_taken_0x171540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171540u;
        // 0x171544: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171540) {
            ctx->pc = 0x171640u;
            goto label_171640;
        }
    }
    ctx->pc = 0x171548u;
label_171548:
    // 0x171548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17154c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17154cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171550: 0xc05ca20  jal         func_172880
    ctx->pc = 0x171550u;
    SET_GPR_U32(ctx, 31, 0x171558u);
    ctx->pc = 0x171554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171550u;
    // 0x171554: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x171550u, 0x171558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171558u;
label_171558:
    // 0x171558: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x171558u;
    {
        const bool branch_taken_0x171558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171558u;
        // 0x17155c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171558) {
            ctx->pc = 0x17158Cu;
            goto label_17158c;
        }
    }
    ctx->pc = 0x171560u;
    // 0x171560: 0xc05c82c  jal         func_1720B0
    ctx->pc = 0x171560u;
    SET_GPR_U32(ctx, 31, 0x171568u);
    ctx->pc = 0x171564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171560u;
    // 0x171564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1720B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1720B0u, 0x171560u, 0x171568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171568u;
label_171568:
    // 0x171568: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x171568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17156c: 0xc05d0de  jal         func_174378
    ctx->pc = 0x17156Cu;
    SET_GPR_U32(ctx, 31, 0x171574u);
    ctx->pc = 0x171570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17156Cu;
    // 0x171570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174378u, 0x17156Cu, 0x171574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171574u;
label_171574:
    // 0x171574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17157c: 0xc05c720  jal         func_171C80
    ctx->pc = 0x17157Cu;
    SET_GPR_U32(ctx, 31, 0x171584u);
    ctx->pc = 0x171580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17157Cu;
    // 0x171580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C80u, 0x17157Cu, 0x171584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171584u;
label_171584:
    // 0x171584: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x171584u;
    {
        const bool branch_taken_0x171584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171584u;
        // 0x171588: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171584) {
            ctx->pc = 0x171640u;
            goto label_171640;
        }
    }
    ctx->pc = 0x17158Cu;
label_17158c:
    // 0x17158c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17158cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x171590: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x171590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x171594: 0xc05ca20  jal         func_172880
    ctx->pc = 0x171594u;
    SET_GPR_U32(ctx, 31, 0x17159Cu);
    ctx->pc = 0x171598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171594u;
    // 0x171598: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x171594u, 0x17159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17159Cu;
label_17159c:
    // 0x17159c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17159Cu;
    {
        const bool branch_taken_0x17159c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1715A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17159Cu;
        // 0x1715a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17159c) {
            ctx->pc = 0x1715D4u;
            goto label_1715d4;
        }
    }
    ctx->pc = 0x1715A4u;
    // 0x1715a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1715a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1715a8: 0xc05ca62  jal         func_172988
    ctx->pc = 0x1715A8u;
    SET_GPR_U32(ctx, 31, 0x1715B0u);
    ctx->pc = 0x1715ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715A8u;
    // 0x1715ac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172988u, 0x1715A8u, 0x1715B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715B0u;
label_1715b0:
    // 0x1715b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1715B0u;
    {
        const bool branch_taken_0x1715b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1715b0) {
            ctx->pc = 0x1715D4u;
            goto label_1715d4;
        }
    }
    ctx->pc = 0x1715B8u;
    // 0x1715b8: 0xc05c82c  jal         func_1720B0
    ctx->pc = 0x1715B8u;
    SET_GPR_U32(ctx, 31, 0x1715C0u);
    ctx->pc = 0x1715BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715B8u;
    // 0x1715bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1720B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1720B0u, 0x1715B8u, 0x1715C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715C0u;
label_1715c0:
    // 0x1715c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1715c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715c4: 0xc05c766  jal         func_171D98
    ctx->pc = 0x1715C4u;
    SET_GPR_U32(ctx, 31, 0x1715CCu);
    ctx->pc = 0x1715C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715C4u;
    // 0x1715c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D98u, 0x1715C4u, 0x1715CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715CCu;
label_1715cc:
    // 0x1715cc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1715CCu;
    {
        const bool branch_taken_0x1715cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1715D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715CCu;
        // 0x1715d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715cc) {
            ctx->pc = 0x171640u;
            goto label_171640;
        }
    }
    ctx->pc = 0x1715D4u;
label_1715d4:
    // 0x1715d4: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x1715D4u;
    SET_GPR_U32(ctx, 31, 0x1715DCu);
    ctx->pc = 0x1715D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715D4u;
    // 0x1715d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x1715D4u, 0x1715DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715DCu;
label_1715dc:
    // 0x1715dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1715DCu;
    {
        const bool branch_taken_0x1715dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1715E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1715DCu;
        // 0x1715e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1715dc) {
            ctx->pc = 0x171640u;
            goto label_171640;
        }
    }
    ctx->pc = 0x1715E4u;
    // 0x1715e4: 0xc05c82c  jal         func_1720B0
    ctx->pc = 0x1715E4u;
    SET_GPR_U32(ctx, 31, 0x1715ECu);
    ctx->pc = 0x1715E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715E4u;
    // 0x1715e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1720B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1720B0u, 0x1715E4u, 0x1715ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715ECu;
label_1715ec:
    // 0x1715ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1715ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1715f0: 0xc04f90e  jal         func_13E438
    ctx->pc = 0x1715F0u;
    SET_GPR_U32(ctx, 31, 0x1715F8u);
    ctx->pc = 0x1715F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1715F0u;
    // 0x1715f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E438u, 0x1715F0u, 0x1715F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715F8u;
label_1715f8:
    // 0x1715f8: 0x8e23027c  lw          $v1, 0x27C($s1)
    ctx->pc = 0x1715f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
    // 0x1715fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1715fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171600: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x171600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x171604: 0xc05e43e  jal         func_1790F8
    ctx->pc = 0x171604u;
    SET_GPR_U32(ctx, 31, 0x17160Cu);
    ctx->pc = 0x171608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171604u;
    // 0x171608: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1790F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1790F8u, 0x171604u, 0x17160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17160Cu;
label_17160c:
    // 0x17160c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17160cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171610: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x171610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171618: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x171618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17161c: 0xc05c734  jal         func_171CD0
    ctx->pc = 0x17161Cu;
    SET_GPR_U32(ctx, 31, 0x171624u);
    ctx->pc = 0x171620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17161Cu;
    // 0x171620: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171CD0u, 0x17161Cu, 0x171624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171624u;
label_171624:
    // 0x171624: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x171624u;
    SET_GPR_U32(ctx, 31, 0x17162Cu);
    ctx->pc = 0x171628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171624u;
    // 0x171628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x171624u, 0x17162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17162Cu;
label_17162c:
    // 0x17162c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17162cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x171630: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171634: 0xc042128  jal         func_1084A0
    ctx->pc = 0x171634u;
    SET_GPR_U32(ctx, 31, 0x17163Cu);
    ctx->pc = 0x171638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171634u;
    // 0x171638: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x171634u, 0x17163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17163Cu;
label_17163c:
    // 0x17163c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17163cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171640:
    // 0x171640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171644: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171648: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x171648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17164c: 0x3e00008  jr          $ra
    ctx->pc = 0x17164Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17164Cu;
        // 0x171650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17164Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171654u;
    // 0x171654: 0x0  nop
    ctx->pc = 0x171654u;
    // NOP
    ctx->pc = 0x171658u;
}
