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

// Function: sub_001A6548
// Address: 0x1a6548 - 0x1a6648
void sub_001A6548_0x1a6548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6548_0x1a6548");
#endif

    switch (ctx->pc) {
        case 0x1a656cu: goto label_1a656c;
        case 0x1a65a0u: goto label_1a65a0;
        case 0x1a65b0u: goto label_1a65b0;
        case 0x1a65c8u: goto label_1a65c8;
        case 0x1a65e0u: goto label_1a65e0;
        case 0x1a65f8u: goto label_1a65f8;
        case 0x1a6604u: goto label_1a6604;
        default: break;
    }

    ctx->pc = 0x1a6548u;

    // 0x1a6548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a654c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a654cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6554: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6558: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a655c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a655cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6560: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a6564: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1A6564u;
    SET_GPR_U32(ctx, 31, 0x1A656Cu);
    ctx->pc = 0x1A6568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6564u;
    // 0x1a6568: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1A6564u, 0x1A656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A656Cu;
label_1a656c:
    // 0x1a656c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a656cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6570: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6570u;
    {
        const bool branch_taken_0x1a6570 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A6574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6570u;
        // 0x1a6574: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6570) {
            ctx->pc = 0x1A6580u;
            goto label_1a6580;
        }
    }
    ctx->pc = 0x1A6578u;
    // 0x1a6578: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A6578u;
    {
        const bool branch_taken_0x1a6578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6578u;
        // 0x1a657c: 0x2412045c  addiu       $s2, $zero, 0x45C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6578) {
            ctx->pc = 0x1A65E8u;
            goto label_1a65e8;
        }
    }
    ctx->pc = 0x1A6580u;
label_1a6580:
    // 0x1a6580: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6580u;
    {
        const bool branch_taken_0x1a6580 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6580u;
        // 0x1a6584: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6580) {
            ctx->pc = 0x1A6590u;
            goto label_1a6590;
        }
    }
    ctx->pc = 0x1A6588u;
    // 0x1a6588: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1A6588u;
    {
        const bool branch_taken_0x1a6588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6588u;
        // 0x1a658c: 0x2412045b  addiu       $s2, $zero, 0x45B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6588) {
            ctx->pc = 0x1A65E8u;
            goto label_1a65e8;
        }
    }
    ctx->pc = 0x1A6590u;
label_1a6590:
    // 0x1a6590: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A6590u;
    {
        const bool branch_taken_0x1a6590 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6590u;
        // 0x1a6594: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6590) {
            ctx->pc = 0x1A65B8u;
            goto label_1a65b8;
        }
    }
    ctx->pc = 0x1A6598u;
    // 0x1a6598: 0xc08da92  jal         func_236A48
    ctx->pc = 0x1A6598u;
    SET_GPR_U32(ctx, 31, 0x1A65A0u);
    ctx->pc = 0x1A659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6598u;
    // 0x1a659c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x1A6598u, 0x1A65A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A65A0u;
label_1a65a0:
    // 0x1a65a0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A65A0u;
    {
        const bool branch_taken_0x1a65a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65A0u;
        // 0x1a65a4: 0x2412045d  addiu       $s2, $zero, 0x45D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65a0) {
            ctx->pc = 0x1A65E8u;
            goto label_1a65e8;
        }
    }
    ctx->pc = 0x1A65A8u;
    // 0x1a65a8: 0xc069ffa  jal         func_1A7FE8
    ctx->pc = 0x1A65A8u;
    SET_GPR_U32(ctx, 31, 0x1A65B0u);
    ctx->pc = 0x1A65ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A65A8u;
    // 0x1a65ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7FE8u, 0x1A65A8u, 0x1A65B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A65B0u;
label_1a65b0:
    // 0x1a65b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A65B0u;
    {
        const bool branch_taken_0x1a65b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65B0u;
        // 0x1a65b4: 0x2452045d  addiu       $s2, $v0, 0x45D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65b0) {
            ctx->pc = 0x1A65E8u;
            goto label_1a65e8;
        }
    }
    ctx->pc = 0x1A65B8u;
label_1a65b8:
    // 0x1a65b8: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A65B8u;
    {
        const bool branch_taken_0x1a65b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65B8u;
        // 0x1a65bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65b8) {
            ctx->pc = 0x1A65ECu;
            goto label_1a65ec;
        }
    }
    ctx->pc = 0x1A65C0u;
    // 0x1a65c0: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x1A65C0u;
    SET_GPR_U32(ctx, 31, 0x1A65C8u);
    ctx->pc = 0x1A65C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A65C0u;
    // 0x1a65c4: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x1A65C0u, 0x1A65C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A65C8u;
label_1a65c8:
    // 0x1a65c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A65C8u;
    {
        const bool branch_taken_0x1a65c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a65c8) {
            ctx->pc = 0x1A65D8u;
            goto label_1a65d8;
        }
    }
    ctx->pc = 0x1A65D0u;
    // 0x1a65d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A65D0u;
    {
        const bool branch_taken_0x1a65d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65D0u;
        // 0x1a65d4: 0x24120463  addiu       $s2, $zero, 0x463 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65d0) {
            ctx->pc = 0x1A65E8u;
            goto label_1a65e8;
        }
    }
    ctx->pc = 0x1A65D8u;
label_1a65d8:
    // 0x1a65d8: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x1A65D8u;
    SET_GPR_U32(ctx, 31, 0x1A65E0u);
    ctx->pc = 0x1A65DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A65D8u;
    // 0x1a65dc: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x1A65D8u, 0x1A65E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A65E0u;
label_1a65e0:
    // 0x1a65e0: 0x24030462  addiu       $v1, $zero, 0x462
    ctx->pc = 0x1a65e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1122));
    // 0x1a65e4: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x1a65e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_1a65e8:
    // 0x1a65e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a65e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a65ec:
    // 0x1a65ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a65ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a65f0: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A65F0u;
    SET_GPR_U32(ctx, 31, 0x1A65F8u);
    ctx->pc = 0x1A65F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A65F0u;
    // 0x1a65f4: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A65F0u, 0x1A65F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A65F8u;
label_1a65f8:
    // 0x1a65f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a65f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a65fc: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A65FCu;
    SET_GPR_U32(ctx, 31, 0x1A6604u);
    ctx->pc = 0x1A6600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A65FCu;
    // 0x1a6600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1A65FCu, 0x1A6604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6604u;
label_1a6604:
    // 0x1a6604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a660c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a660cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6610: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a6610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6614: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6614u;
        // 0x1a6618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A661Cu;
    // 0x1a661c: 0x0  nop
    ctx->pc = 0x1a661cu;
    // NOP
    // 0x1a6620: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a6620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a6624: 0x0  nop
    ctx->pc = 0x1a6624u;
    // NOP
    // 0x1a6628: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a6628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a662c: 0x0  nop
    ctx->pc = 0x1a662cu;
    // NOP
    // 0x1a6630: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a6630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a6634: 0x0  nop
    ctx->pc = 0x1a6634u;
    // NOP
    // 0x1a6638: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a6638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a663c: 0x0  nop
    ctx->pc = 0x1a663cu;
    // NOP
    // 0x1a6640: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a6640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a6644: 0x0  nop
    ctx->pc = 0x1a6644u;
    // NOP
    ctx->pc = 0x1a6648u;
}
