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

// Function: sub_00148490
// Address: 0x148490 - 0x1485b8
void sub_00148490_0x148490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148490_0x148490");
#endif

    switch (ctx->pc) {
        case 0x1484e8u: goto label_1484e8;
        case 0x148500u: goto label_148500;
        case 0x148520u: goto label_148520;
        case 0x14854cu: goto label_14854c;
        case 0x148588u: goto label_148588;
        case 0x148594u: goto label_148594;
        default: break;
    }

    ctx->pc = 0x148490u;

    // 0x148490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x148494: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x148494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x148498: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x148498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14849c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x14849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1484a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1484a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1484a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1484a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1484a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1484ac: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x1484acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1484b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1484b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1484b4: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x1484b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1484b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1484b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1484bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1484bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1484c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1484c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1484c4: 0x8e2504c0  lw          $a1, 0x4C0($s1)
    ctx->pc = 0x1484c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1216)));
    // 0x1484c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1484c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1484cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1484ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1484d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1484d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1484d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1484d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1484d8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1484D8u;
    {
        const bool branch_taken_0x1484d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1484DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484D8u;
        // 0x1484dc: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1484d8) {
            ctx->pc = 0x1484E8u;
            goto label_1484e8;
        }
    }
    ctx->pc = 0x1484E0u;
    // 0x1484e0: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x1484E0u;
    SET_GPR_U32(ctx, 31, 0x1484E8u);
    ctx->pc = 0x1484E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1484E0u;
    // 0x1484e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x1484E0u, 0x1484E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484E8u;
label_1484e8:
    // 0x1484e8: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x1484e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1484ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1484ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1484f0: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1484F0u;
    {
        const bool branch_taken_0x1484f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1484F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484F0u;
        // 0x1484f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1484f0) {
            ctx->pc = 0x148594u;
            goto label_148594;
        }
    }
    ctx->pc = 0x1484F8u;
    // 0x1484f8: 0xc052446  jal         func_149118
    ctx->pc = 0x1484F8u;
    SET_GPR_U32(ctx, 31, 0x148500u);
    ctx->pc = 0x1484FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1484F8u;
    // 0x1484fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149118u, 0x1484F8u, 0x148500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148500u;
label_148500:
    // 0x148500: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x148500u;
    {
        const bool branch_taken_0x148500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148500u;
        // 0x148504: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148500) {
            ctx->pc = 0x148598u;
            goto label_148598;
        }
    }
    ctx->pc = 0x148508u;
    // 0x148508: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x148508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14850c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x14850cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x148510: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x148510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148514: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x148514u;
    {
        const bool branch_taken_0x148514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148514u;
        // 0x148518: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148514) {
            ctx->pc = 0x148574u;
            goto label_148574;
        }
    }
    ctx->pc = 0x14851Cu;
    // 0x14851c: 0x0  nop
    ctx->pc = 0x14851cu;
    // NOP
label_148520:
    // 0x148520: 0x1214000c  beq         $s0, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x148520u;
    {
        const bool branch_taken_0x148520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x148524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148520u;
        // 0x148524: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148520) {
            ctx->pc = 0x148554u;
            goto label_148554;
        }
    }
    ctx->pc = 0x148528u;
    // 0x148528: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x148528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14852c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148530: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x148530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148534: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x148534u;
    {
        const bool branch_taken_0x148534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x148538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148534u;
        // 0x148538: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148534) {
            ctx->pc = 0x148554u;
            goto label_148554;
        }
    }
    ctx->pc = 0x14853Cu;
    // 0x14853c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14853cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148540: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x148540u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x148544: 0xc052446  jal         func_149118
    ctx->pc = 0x148544u;
    SET_GPR_U32(ctx, 31, 0x14854Cu);
    ctx->pc = 0x148548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148544u;
    // 0x148548: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149118u, 0x148544u, 0x14854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14854Cu;
label_14854c:
    // 0x14854c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14854Cu;
    {
        const bool branch_taken_0x14854c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14854Cu;
        // 0x148550: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14854c) {
            ctx->pc = 0x148594u;
            goto label_148594;
        }
    }
    ctx->pc = 0x148554u;
label_148554:
    // 0x148554: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x148554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148558: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x148558u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14855c: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x14855cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x148560: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x148560u;
    {
        const bool branch_taken_0x148560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x148560) {
            ctx->pc = 0x148564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148560u;
            // 0x148564: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148578u;
            goto label_148578;
        }
    }
    ctx->pc = 0x148568u;
    // 0x148568: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x148568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x14856c: 0x1642ffec  bne         $s2, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x14856Cu;
    {
        const bool branch_taken_0x14856c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14856c) {
            ctx->pc = 0x148520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148520;
        }
    }
    ctx->pc = 0x148574u;
label_148574:
    // 0x148574: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x148574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_148578:
    // 0x148578: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148578u;
    {
        const bool branch_taken_0x148578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148578u;
        // 0x14857c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148578) {
            ctx->pc = 0x148588u;
            goto label_148588;
        }
    }
    ctx->pc = 0x148580u;
    // 0x148580: 0xc05260e  jal         func_149838
    ctx->pc = 0x148580u;
    SET_GPR_U32(ctx, 31, 0x148588u);
    ctx->pc = 0x148584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148580u;
    // 0x148584: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149838u, 0x148580u, 0x148588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148588u;
label_148588:
    // 0x148588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x148588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14858c: 0xc04da5c  jal         func_136970
    ctx->pc = 0x14858Cu;
    SET_GPR_U32(ctx, 31, 0x148594u);
    ctx->pc = 0x148590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14858Cu;
    // 0x148590: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x14858Cu, 0x148594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148594u;
label_148594:
    // 0x148594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x148594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148598:
    // 0x148598: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x148598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14859c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14859cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1485a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1485a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1485a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1485a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1485a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1485a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1485ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1485ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1485B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1485ACu;
        // 0x1485b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1485ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1485B4u;
    // 0x1485b4: 0x0  nop
    ctx->pc = 0x1485b4u;
    // NOP
    ctx->pc = 0x1485b8u;
}
