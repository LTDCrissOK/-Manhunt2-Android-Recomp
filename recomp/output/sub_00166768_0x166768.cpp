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

// Function: sub_00166768
// Address: 0x166768 - 0x166920
void sub_00166768_0x166768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166768_0x166768");
#endif

    switch (ctx->pc) {
        case 0x1667d8u: goto label_1667d8;
        case 0x1667f0u: goto label_1667f0;
        case 0x166814u: goto label_166814;
        case 0x166828u: goto label_166828;
        case 0x16687cu: goto label_16687c;
        case 0x166890u: goto label_166890;
        case 0x1668b0u: goto label_1668b0;
        case 0x1668c0u: goto label_1668c0;
        default: break;
    }

    ctx->pc = 0x166768u;

    // 0x166768: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x166768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16676c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x166770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166774: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x166774u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x166778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16677c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x166780: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x166780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x166784: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x166784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x166788: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x166788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16678c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x16678cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x166790: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x166790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x166794: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x166794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x166798: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x166798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x16679c: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x16679Cu;
    {
        const bool branch_taken_0x16679c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1667A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16679Cu;
        // 0x1667a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16679c) {
            ctx->pc = 0x1668F4u;
            goto label_1668f4;
        }
    }
    ctx->pc = 0x1667A4u;
    // 0x1667a4: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x1667a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1667a8: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1667A8u;
    {
        const bool branch_taken_0x1667a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1667ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667A8u;
        // 0x1667ac: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667a8) {
            ctx->pc = 0x1668F0u;
            goto label_1668f0;
        }
    }
    ctx->pc = 0x1667B0u;
    // 0x1667b0: 0x8e4302e0  lw          $v1, 0x2E0($s2)
    ctx->pc = 0x1667b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x1667b4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1667b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667b8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1667b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1667bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1667bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1667c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1667c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1667c4: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x1667c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1667c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1667C8u;
    {
        const bool branch_taken_0x1667c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1667CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667C8u;
        // 0x1667cc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667c8) {
            ctx->pc = 0x1667DCu;
            goto label_1667dc;
        }
    }
    ctx->pc = 0x1667D0u;
    // 0x1667d0: 0xc043996  jal         func_10E658
    ctx->pc = 0x1667D0u;
    SET_GPR_U32(ctx, 31, 0x1667D8u);
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x1667D0u, 0x1667D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1667D8u;
label_1667d8:
    // 0x1667d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1667d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1667dc:
    // 0x1667dc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1667dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1667e0: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x1667e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1667e4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1667E4u;
    {
        const bool branch_taken_0x1667e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1667E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667E4u;
        // 0x1667e8: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667e4) {
            ctx->pc = 0x1668F0u;
            goto label_1668f0;
        }
    }
    ctx->pc = 0x1667ECu;
    // 0x1667ec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1667ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1667f0:
    // 0x1667f0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1667f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1667f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1667f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1667f8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1667f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1667fc: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1667FCu;
    {
        const bool branch_taken_0x1667fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x166800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1667FCu;
        // 0x166800: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1667fc) {
            ctx->pc = 0x1668D0u;
            goto label_1668d0;
        }
    }
    ctx->pc = 0x166804u;
    // 0x166804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x166804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166808: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x166808u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16680c: 0xc04f112  jal         func_13C448
    ctx->pc = 0x16680Cu;
    SET_GPR_U32(ctx, 31, 0x166814u);
    ctx->pc = 0x166810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16680Cu;
    // 0x166810: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x16680Cu, 0x166814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166814u;
label_166814:
    // 0x166814: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x166814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166818: 0x1054002d  beq         $v0, $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x166818u;
    {
        const bool branch_taken_0x166818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x16681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166818u;
        // 0x16681c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166818) {
            ctx->pc = 0x1668D0u;
            goto label_1668d0;
        }
    }
    ctx->pc = 0x166820u;
    // 0x166820: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x166820u;
    SET_GPR_U32(ctx, 31, 0x166828u);
    ctx->pc = 0x166824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166820u;
    // 0x166824: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x166820u, 0x166828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166828u;
label_166828:
    // 0x166828: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x166828u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16682c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x16682cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x166830: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x166830u;
    {
        const bool branch_taken_0x166830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166830u;
        // 0x166834: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166830) {
            ctx->pc = 0x1668D4u;
            goto label_1668d4;
        }
    }
    ctx->pc = 0x166838u;
    // 0x166838: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x166838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x16683c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16683Cu;
    {
        const bool branch_taken_0x16683c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16683c) {
            ctx->pc = 0x166840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16683Cu;
            // 0x166840: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166854u;
            goto label_166854;
        }
    }
    ctx->pc = 0x166844u;
    // 0x166844: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x166844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x166848: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x166848u;
    {
        const bool branch_taken_0x166848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166848u;
        // 0x16684c: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166848) {
            ctx->pc = 0x1668D4u;
            goto label_1668d4;
        }
    }
    ctx->pc = 0x166850u;
    // 0x166850: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x166850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_166854:
    // 0x166854: 0x26e49a08  addiu       $a0, $s7, -0x65F8
    ctx->pc = 0x166854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941192));
    // 0x166858: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x166858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16685c: 0x8c510108  lw          $s1, 0x108($v0)
    ctx->pc = 0x16685cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x166860: 0x5220001c  beql        $s1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x166860u;
    {
        const bool branch_taken_0x166860 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x166860) {
            ctx->pc = 0x166864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166860u;
            // 0x166864: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1668D4u;
            goto label_1668d4;
        }
    }
    ctx->pc = 0x166868u;
    // 0x166868: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x166868u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16686c: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16686Cu;
    {
        const bool branch_taken_0x16686c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x166870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16686Cu;
        // 0x166870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16686c) {
            ctx->pc = 0x1668D0u;
            goto label_1668d0;
        }
    }
    ctx->pc = 0x166874u;
    // 0x166874: 0xc0952de  jal         func_254B78
    ctx->pc = 0x166874u;
    SET_GPR_U32(ctx, 31, 0x16687Cu);
    ctx->pc = 0x166878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166874u;
    // 0x166878: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254B78u, 0x166874u, 0x16687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16687Cu;
label_16687c:
    // 0x16687c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16687Cu;
    {
        const bool branch_taken_0x16687c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16687Cu;
        // 0x166880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16687c) {
            ctx->pc = 0x1668A8u;
            goto label_1668a8;
        }
    }
    ctx->pc = 0x166884u;
    // 0x166884: 0xae140224  sw          $s4, 0x224($s0)
    ctx->pc = 0x166884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 20));
    // 0x166888: 0xc044234  jal         func_1108D0
    ctx->pc = 0x166888u;
    SET_GPR_U32(ctx, 31, 0x166890u);
    ctx->pc = 0x16688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166888u;
    // 0x16688c: 0x8e4502e0  lw          $a1, 0x2E0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x166888u, 0x166890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166890u;
label_166890:
    // 0x166890: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x166890u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166894: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x166894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x166898: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x166898u;
    {
        const bool branch_taken_0x166898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166898u;
        // 0x16689c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166898) {
            ctx->pc = 0x1668D0u;
            goto label_1668d0;
        }
    }
    ctx->pc = 0x1668A0u;
    // 0x1668a0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1668A0u;
    {
        const bool branch_taken_0x1668a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1668A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668A0u;
        // 0x1668a4: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668a0) {
            ctx->pc = 0x1668D4u;
            goto label_1668d4;
        }
    }
    ctx->pc = 0x1668A8u;
label_1668a8:
    // 0x1668a8: 0xc09526c  jal         func_2549B0
    ctx->pc = 0x1668A8u;
    SET_GPR_U32(ctx, 31, 0x1668B0u);
    ctx->pc = 0x1668ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668A8u;
    // 0x1668ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2549B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2549B0u, 0x1668A8u, 0x1668B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668B0u;
label_1668b0:
    // 0x1668b0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1668B0u;
    {
        const bool branch_taken_0x1668b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668B0u;
        // 0x1668b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668b0) {
            ctx->pc = 0x1668F4u;
            goto label_1668f4;
        }
    }
    ctx->pc = 0x1668B8u;
    // 0x1668b8: 0xc043996  jal         func_10E658
    ctx->pc = 0x1668B8u;
    SET_GPR_U32(ctx, 31, 0x1668C0u);
    ctx->pc = 0x1668BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1668B8u;
    // 0x1668bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x1668B8u, 0x1668C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1668C0u;
label_1668c0:
    // 0x1668c0: 0x52c0000c  beql        $s6, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1668C0u;
    {
        const bool branch_taken_0x1668c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1668c0) {
            ctx->pc = 0x1668C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668C0u;
            // 0x1668c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1668F4u;
            goto label_1668f4;
        }
    }
    ctx->pc = 0x1668C8u;
    // 0x1668c8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1668C8u;
    {
        const bool branch_taken_0x1668c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1668CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668C8u;
        // 0x1668cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668c8) {
            ctx->pc = 0x1668F4u;
            goto label_1668f4;
        }
    }
    ctx->pc = 0x1668D0u;
label_1668d0:
    // 0x1668d0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1668d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1668d4:
    // 0x1668d4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1668d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1668d8: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x1668d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1668dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1668DCu;
    {
        const bool branch_taken_0x1668dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668DCu;
        // 0x1668e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668dc) {
            ctx->pc = 0x1668F4u;
            goto label_1668f4;
        }
    }
    ctx->pc = 0x1668E4u;
    // 0x1668e4: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x1668e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1668e8: 0x56a2ffc1  bnel        $s5, $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1668E8u;
    {
        const bool branch_taken_0x1668e8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1668e8) {
            ctx->pc = 0x1668ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668E8u;
            // 0x1668ec: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1667F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1667f0;
        }
    }
    ctx->pc = 0x1668F0u;
label_1668f0:
    // 0x1668f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1668f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1668f4:
    // 0x1668f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1668f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1668f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1668f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1668fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1668fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166900: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x166900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x166904: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x166904u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166908: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x166908u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16690c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16690cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166910: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x166910u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x166914: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x166914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166918: 0x3e00008  jr          $ra
    ctx->pc = 0x166918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166918u;
        // 0x16691c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166920u;
}
