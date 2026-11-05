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

// Function: sub_0014A538
// Address: 0x14a538 - 0x14a758
void sub_0014A538_0x14a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A538_0x14a538");
#endif

    switch (ctx->pc) {
        case 0x14a578u: goto label_14a578;
        case 0x14a584u: goto label_14a584;
        case 0x14a594u: goto label_14a594;
        case 0x14a5b8u: goto label_14a5b8;
        case 0x14a5dcu: goto label_14a5dc;
        case 0x14a6f8u: goto label_14a6f8;
        default: break;
    }

    ctx->pc = 0x14a538u;

    // 0x14a538: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14a53c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x14a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x14a540: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x14a540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x14a544: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14a544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a548: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x14a548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x14a54c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x14a54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x14a550: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x14a550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x14a554: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x14a554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x14a558: 0x8e220584  lw          $v0, 0x584($s1)
    ctx->pc = 0x14a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1412)));
    // 0x14a55c: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x14A55Cu;
    {
        const bool branch_taken_0x14a55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a55c) {
            ctx->pc = 0x14A560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A55Cu;
            // 0x14a560: 0xc6200570  lwc1        $f0, 0x570($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A64Cu;
            goto label_14a64c;
        }
    }
    ctx->pc = 0x14A564u;
    // 0x14a564: 0x8e220594  lw          $v0, 0x594($s1)
    ctx->pc = 0x14a564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1428)));
    // 0x14a568: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14A568u;
    {
        const bool branch_taken_0x14a568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A568u;
        // 0x14a56c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a568) {
            ctx->pc = 0x14A594u;
            goto label_14a594;
        }
    }
    ctx->pc = 0x14A570u;
    // 0x14a570: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14A570u;
    SET_GPR_U32(ctx, 31, 0x14A578u);
    ctx->pc = 0x14A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A570u;
    // 0x14a574: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14A570u, 0x14A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A578u;
label_14a578:
    // 0x14a578: 0x8e250594  lw          $a1, 0x594($s1)
    ctx->pc = 0x14a578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1428)));
    // 0x14a57c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14A57Cu;
    SET_GPR_U32(ctx, 31, 0x14A584u);
    ctx->pc = 0x14A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A57Cu;
    // 0x14a580: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14A57Cu, 0x14A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A584u;
label_14a584:
    // 0x14a584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a588: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14a588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a58c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14A58Cu;
    SET_GPR_U32(ctx, 31, 0x14A594u);
    ctx->pc = 0x14A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A58Cu;
    // 0x14a590: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14A58Cu, 0x14A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A594u;
label_14a594:
    // 0x14a594: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x14A594u;
    {
        const bool branch_taken_0x14a594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A594u;
        // 0x14a598: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a594) {
            ctx->pc = 0x14A648u;
            goto label_14a648;
        }
    }
    ctx->pc = 0x14A59Cu;
    // 0x14a59c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x14a59cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x14a5a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14a5a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5a4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x14a5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5a8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14A5A8u;
    {
        const bool branch_taken_0x14a5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5A8u;
        // 0x14a5ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5a8) {
            ctx->pc = 0x14A608u;
            goto label_14a608;
        }
    }
    ctx->pc = 0x14A5B0u;
    // 0x14a5b0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x14a5b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a5b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_14a5b8:
    // 0x14a5b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14a5bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a5c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a5c4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A5C4u;
    {
        const bool branch_taken_0x14a5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5C4u;
        // 0x14a5c8: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5c4) {
            ctx->pc = 0x14A5ECu;
            goto label_14a5ec;
        }
    }
    ctx->pc = 0x14A5CCu;
    // 0x14a5cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14a5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a5d0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x14a5d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14a5d4: 0xc052ae4  jal         func_14AB90
    ctx->pc = 0x14A5D4u;
    SET_GPR_U32(ctx, 31, 0x14A5DCu);
    ctx->pc = 0x14A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A5D4u;
    // 0x14a5d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB90u, 0x14A5D4u, 0x14A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A5DCu;
label_14a5dc:
    // 0x14a5dc: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A5DCu;
    {
        const bool branch_taken_0x14a5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x14A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5DCu;
        // 0x14a5e0: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5dc) {
            ctx->pc = 0x14A5F0u;
            goto label_14a5f0;
        }
    }
    ctx->pc = 0x14A5E4u;
    // 0x14a5e4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x14a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14a5e8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x14a5e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14a5ec:
    // 0x14a5ec: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x14a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_14a5f0:
    // 0x14a5f0: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x14a5f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14a5f4: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x14a5f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x14a5f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A5F8u;
    {
        const bool branch_taken_0x14a5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5F8u;
        // 0x14a5fc: 0x92240009  lbu         $a0, 0x9($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5f8) {
            ctx->pc = 0x14A608u;
            goto label_14a608;
        }
    }
    ctx->pc = 0x14A600u;
    // 0x14a600: 0x5664ffed  bnel        $s3, $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x14A600u;
    {
        const bool branch_taken_0x14a600 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        if (branch_taken_0x14a600) {
            ctx->pc = 0x14A604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A600u;
            // 0x14a604: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a5b8;
        }
    }
    ctx->pc = 0x14A608u;
label_14a608:
    // 0x14a608: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x14a608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14a60c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a610: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A610u;
    {
        const bool branch_taken_0x14a610 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x14A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A610u;
        // 0x14a614: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a610) {
            ctx->pc = 0x14A624u;
            goto label_14a624;
        }
    }
    ctx->pc = 0x14A618u;
    // 0x14a618: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x14a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x14a61c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14a61cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a620: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x14a620u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_14a624:
    // 0x14a624: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A624u;
    {
        const bool branch_taken_0x14a624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a624) {
            ctx->pc = 0x14A628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A624u;
            // 0x14a628: 0xae230584  sw          $v1, 0x584($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A648u;
            goto label_14a648;
        }
    }
    ctx->pc = 0x14A62Cu;
    // 0x14a62c: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x14a62cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14a630: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A630u;
    {
        const bool branch_taken_0x14a630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a630) {
            ctx->pc = 0x14A634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A630u;
            // 0x14a634: 0xae230584  sw          $v1, 0x584($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A648u;
            goto label_14a648;
        }
    }
    ctx->pc = 0x14A638u;
    // 0x14a638: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x14a638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14a63c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14a63cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a640: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x14a640u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x14a644: 0xae230584  sw          $v1, 0x584($s1)
    ctx->pc = 0x14a644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 3));
label_14a648:
    // 0x14a648: 0xc6200570  lwc1        $f0, 0x570($s1)
    ctx->pc = 0x14a648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14a64c:
    // 0x14a64c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14a64cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a650: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x14a650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x14a654: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x14a654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x14a658: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14a658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a65c: 0x26260570  addiu       $a2, $s1, 0x570
    ctx->pc = 0x14a65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
    // 0x14a660: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x14a660u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x14a664: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14a664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a668: 0x0  nop
    ctx->pc = 0x14a668u;
    // NOP
    // 0x14a66c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14A66Cu;
    {
        const bool branch_taken_0x14a66c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A66Cu;
        // 0x14a670: 0xae200580  sw          $zero, 0x580($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a66c) {
            ctx->pc = 0x14A6A4u;
            goto label_14a6a4;
        }
    }
    ctx->pc = 0x14A674u;
    // 0x14a674: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x14a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a678: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x14a678u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x14a67c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14a67cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a680: 0x0  nop
    ctx->pc = 0x14a680u;
    // NOP
    // 0x14a684: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x14A684u;
    {
        const bool branch_taken_0x14a684 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a684) {
            ctx->pc = 0x14A6A4u;
            goto label_14a6a4;
        }
    }
    ctx->pc = 0x14A68Cu;
    // 0x14a68c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x14a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a690: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x14a690u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x14a694: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14a694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a698: 0x0  nop
    ctx->pc = 0x14a698u;
    // NOP
    // 0x14a69c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14A69Cu;
    {
        const bool branch_taken_0x14a69c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14a69c) {
            ctx->pc = 0x14A6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A69Cu;
            // 0x14a6a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A6A4u;
            goto label_14a6a4;
        }
    }
    ctx->pc = 0x14A6A4u;
label_14a6a4:
    // 0x14a6a4: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x14A6A4u;
    {
        const bool branch_taken_0x14a6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a6a4) {
            ctx->pc = 0x14A6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A6A4u;
            // 0x14a6a8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A73Cu;
            goto label_14a73c;
        }
    }
    ctx->pc = 0x14A6ACu;
    // 0x14a6ac: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14a6b0: 0x24439a08  addiu       $v1, $v0, -0x65F8
    ctx->pc = 0x14a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14a6b4: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x14a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x489C1Cu));
    // 0x14a6b8: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x14A6B8u;
    {
        const bool branch_taken_0x14a6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a6b8) {
            ctx->pc = 0x14A6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A6B8u;
            // 0x14a6bc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A73Cu;
            goto label_14a73c;
        }
    }
    ctx->pc = 0x14A6C0u;
    // 0x14a6c0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x14a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a6c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14a6c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14a6cc: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x14a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x14a6d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A6D0u;
    {
        const bool branch_taken_0x14a6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a6d0) {
            ctx->pc = 0x14A6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A6D0u;
            // 0x14a6d4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A6E0u;
            goto label_14a6e0;
        }
    }
    ctx->pc = 0x14A6D8u;
    // 0x14a6d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A6D8u;
    {
        const bool branch_taken_0x14a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6D8u;
        // 0x14a6dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6d8) {
            ctx->pc = 0x14A6E8u;
            goto label_14a6e8;
        }
    }
    ctx->pc = 0x14A6E0u;
label_14a6e0:
    // 0x14a6e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a6e4: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x14a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14a6e8:
    // 0x14a6e8: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x14A6E8u;
    {
        const bool branch_taken_0x14a6e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6E8u;
        // 0x14a6ec: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6e8) {
            ctx->pc = 0x14A73Cu;
            goto label_14a73c;
        }
    }
    ctx->pc = 0x14A6F0u;
    // 0x14a6f0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x14A6F0u;
    SET_GPR_U32(ctx, 31, 0x14A6F8u);
    ctx->pc = 0x14A6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A6F0u;
    // 0x14a6f4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x14A6F0u, 0x14A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6F8u;
label_14a6f8:
    // 0x14a6f8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x14a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14a6fc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x14a6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14a700: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x14a700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14a704: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x14a704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14a708: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x14a708u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x14a70c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x14a70cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x14a710: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x14a710u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x14a714: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x14a714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x14a718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14a718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a71c: 0x0  nop
    ctx->pc = 0x14a71cu;
    // NOP
    // 0x14a720: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14a720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14a724: 0x0  nop
    ctx->pc = 0x14a724u;
    // NOP
    // 0x14a728: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14A728u;
    {
        const bool branch_taken_0x14a728 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A728u;
        // 0x14a72c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a728) {
            ctx->pc = 0x14A734u;
            goto label_14a734;
        }
    }
    ctx->pc = 0x14A730u;
    // 0x14a730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14a730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14a734:
    // 0x14a734: 0xae220580  sw          $v0, 0x580($s1)
    ctx->pc = 0x14a734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 2));
    // 0x14a738: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x14a738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14a73c:
    // 0x14a73c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x14a73cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a740: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x14a740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a744: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x14a744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14a748: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x14a748u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a74c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x14a74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14a750: 0x3e00008  jr          $ra
    ctx->pc = 0x14A750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A750u;
        // 0x14a754: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A758u;
}
