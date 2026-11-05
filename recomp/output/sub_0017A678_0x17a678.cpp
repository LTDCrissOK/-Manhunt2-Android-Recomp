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

// Function: sub_0017A678
// Address: 0x17a678 - 0x17a790
void sub_0017A678_0x17a678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A678_0x17a678");
#endif

    switch (ctx->pc) {
        case 0x17a6a0u: goto label_17a6a0;
        case 0x17a6b0u: goto label_17a6b0;
        case 0x17a6c4u: goto label_17a6c4;
        case 0x17a6d8u: goto label_17a6d8;
        case 0x17a704u: goto label_17a704;
        case 0x17a714u: goto label_17a714;
        case 0x17a730u: goto label_17a730;
        case 0x17a740u: goto label_17a740;
        default: break;
    }

    ctx->pc = 0x17a678u;

    // 0x17a678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a67c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a680: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17a680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17a684: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a688: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17a688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a68c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a690: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17a690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17a694: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17a694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17a698: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x17A698u;
    SET_GPR_U32(ctx, 31, 0x17A6A0u);
    ctx->pc = 0x17A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A698u;
    // 0x17a69c: 0x30d400ff  andi        $s4, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x17A698u, 0x17A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6A0u;
label_17a6a0:
    // 0x17a6a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17a6a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6a8: 0xc05eb1e  jal         func_17AC78
    ctx->pc = 0x17A6A8u;
    SET_GPR_U32(ctx, 31, 0x17A6B0u);
    ctx->pc = 0x17A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6A8u;
    // 0x17a6ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC78u, 0x17A6A8u, 0x17A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6B0u;
label_17a6b0:
    // 0x17a6b0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x17A6B0u;
    {
        const bool branch_taken_0x17a6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6B0u;
        // 0x17a6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6b0) {
            ctx->pc = 0x17A76Cu;
            goto label_17a76c;
        }
    }
    ctx->pc = 0x17A6B8u;
    // 0x17a6b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6bc: 0xc05eb2a  jal         func_17ACA8
    ctx->pc = 0x17A6BCu;
    SET_GPR_U32(ctx, 31, 0x17A6C4u);
    ctx->pc = 0x17A6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6BCu;
    // 0x17a6c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x17A6BCu, 0x17A6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6C4u;
label_17a6c4:
    // 0x17a6c4: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x17A6C4u;
    {
        const bool branch_taken_0x17a6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6C4u;
        // 0x17a6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6c4) {
            ctx->pc = 0x17A76Cu;
            goto label_17a76c;
        }
    }
    ctx->pc = 0x17A6CCu;
    // 0x17a6cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6d0: 0xc05eaee  jal         func_17ABB8
    ctx->pc = 0x17A6D0u;
    SET_GPR_U32(ctx, 31, 0x17A6D8u);
    ctx->pc = 0x17A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6D0u;
    // 0x17a6d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABB8u, 0x17A6D0u, 0x17A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6D8u;
label_17a6d8:
    // 0x17a6d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17a6d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a6dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17a6e0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17A6E0u;
    {
        const bool branch_taken_0x17a6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6E0u;
        // 0x17a6e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6e0) {
            ctx->pc = 0x17A714u;
            goto label_17a714;
        }
    }
    ctx->pc = 0x17A6E8u;
    // 0x17a6e8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x17A6E8u;
    {
        const bool branch_taken_0x17a6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6E8u;
        // 0x17a6ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6e8) {
            ctx->pc = 0x17A770u;
            goto label_17a770;
        }
    }
    ctx->pc = 0x17A6F0u;
    // 0x17a6f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17a6f4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17A6F4u;
    {
        const bool branch_taken_0x17a6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6F4u;
        // 0x17a6f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6f4) {
            ctx->pc = 0x17A768u;
            goto label_17a768;
        }
    }
    ctx->pc = 0x17A6FCu;
    // 0x17a6fc: 0xc05eb12  jal         func_17AC48
    ctx->pc = 0x17A6FCu;
    SET_GPR_U32(ctx, 31, 0x17A704u);
    ctx->pc = 0x17A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6FCu;
    // 0x17a700: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC48u, 0x17A6FCu, 0x17A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A704u;
label_17a704:
    // 0x17a704: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A704u;
    {
        const bool branch_taken_0x17a704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A704u;
        // 0x17a708: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a704) {
            ctx->pc = 0x17A71Cu;
            goto label_17a71c;
        }
    }
    ctx->pc = 0x17A70Cu;
    // 0x17a70c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17A70Cu;
    {
        const bool branch_taken_0x17a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A70Cu;
        // 0x17a710: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a70c) {
            ctx->pc = 0x17A770u;
            goto label_17a770;
        }
    }
    ctx->pc = 0x17A714u;
label_17a714:
    // 0x17a714: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17A714u;
    {
        const bool branch_taken_0x17a714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A714u;
        // 0x17a718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a714) {
            ctx->pc = 0x17A76Cu;
            goto label_17a76c;
        }
    }
    ctx->pc = 0x17A71Cu;
label_17a71c:
    // 0x17a71c: 0x92220584  lbu         $v0, 0x584($s1)
    ctx->pc = 0x17a71cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1412)));
    // 0x17a720: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17A720u;
    {
        const bool branch_taken_0x17a720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A720u;
        // 0x17a724: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a720) {
            ctx->pc = 0x17A768u;
            goto label_17a768;
        }
    }
    ctx->pc = 0x17A728u;
    // 0x17a728: 0x26330534  addiu       $s3, $s1, 0x534
    ctx->pc = 0x17a728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1332));
    // 0x17a72c: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x17a72cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_17a730:
    // 0x17a730: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17A730u;
    {
        const bool branch_taken_0x17a730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A730u;
        // 0x17a734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a730) {
            ctx->pc = 0x17A768u;
            goto label_17a768;
        }
    }
    ctx->pc = 0x17A738u;
    // 0x17a738: 0xc05eb06  jal         func_17AC18
    ctx->pc = 0x17A738u;
    SET_GPR_U32(ctx, 31, 0x17A740u);
    ctx->pc = 0x17A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A738u;
    // 0x17a73c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC18u, 0x17A738u, 0x17A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A740u;
label_17a740:
    // 0x17a740: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17a740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17a744: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x17a744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x17a748: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17a748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a74c: 0x1044fff1  beq         $v0, $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x17A74Cu;
    {
        const bool branch_taken_0x17a74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x17A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A74Cu;
        // 0x17a750: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a74c) {
            ctx->pc = 0x17A714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a714;
        }
    }
    ctx->pc = 0x17A754u;
    // 0x17a754: 0x92220584  lbu         $v0, 0x584($s1)
    ctx->pc = 0x17a754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1412)));
    // 0x17a758: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x17a758u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17a75c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x17a75cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a760: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17A760u;
    {
        const bool branch_taken_0x17a760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A760u;
        // 0x17a764: 0x290102b  sltu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a760) {
            ctx->pc = 0x17A730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a730;
        }
    }
    ctx->pc = 0x17A768u;
label_17a768:
    // 0x17a768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a76c:
    // 0x17a76c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a76cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a770:
    // 0x17a770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a774: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17a774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a778: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17a778u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a77c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17a77cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a780: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17a780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a784: 0x3e00008  jr          $ra
    ctx->pc = 0x17A784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A784u;
        // 0x17a788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A78Cu;
    // 0x17a78c: 0x0  nop
    ctx->pc = 0x17a78cu;
    // NOP
    ctx->pc = 0x17a790u;
}
