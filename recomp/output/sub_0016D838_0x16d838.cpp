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

// Function: sub_0016D838
// Address: 0x16d838 - 0x16d930
void sub_0016D838_0x16d838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D838_0x16d838");
#endif

    switch (ctx->pc) {
        case 0x16d850u: goto label_16d850;
        case 0x16d860u: goto label_16d860;
        case 0x16d868u: goto label_16d868;
        case 0x16d878u: goto label_16d878;
        case 0x16d888u: goto label_16d888;
        case 0x16d890u: goto label_16d890;
        case 0x16d8a0u: goto label_16d8a0;
        case 0x16d8bcu: goto label_16d8bc;
        case 0x16d8ccu: goto label_16d8cc;
        case 0x16d8d4u: goto label_16d8d4;
        case 0x16d8e8u: goto label_16d8e8;
        case 0x16d8f8u: goto label_16d8f8;
        case 0x16d908u: goto label_16d908;
        case 0x16d910u: goto label_16d910;
        case 0x16d918u: goto label_16d918;
        default: break;
    }

    ctx->pc = 0x16d838u;

    // 0x16d838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d83c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d840: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16d840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d848: 0xc05ba26  jal         func_16E898
    ctx->pc = 0x16D848u;
    SET_GPR_U32(ctx, 31, 0x16D850u);
    ctx->pc = 0x16D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D848u;
    // 0x16d84c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E898u, 0x16D848u, 0x16D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D850u;
label_16d850:
    // 0x16d850: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D850u;
    {
        const bool branch_taken_0x16d850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d850) {
            ctx->pc = 0x16D870u;
            goto label_16d870;
        }
    }
    ctx->pc = 0x16D858u;
    // 0x16d858: 0xc05b9b8  jal         func_16E6E0
    ctx->pc = 0x16D858u;
    SET_GPR_U32(ctx, 31, 0x16D860u);
    ctx->pc = 0x16D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D858u;
    // 0x16d85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E6E0u, 0x16D858u, 0x16D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D860u;
label_16d860:
    // 0x16d860: 0xc05b8b0  jal         func_16E2C0
    ctx->pc = 0x16D860u;
    SET_GPR_U32(ctx, 31, 0x16D868u);
    ctx->pc = 0x16D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D860u;
    // 0x16d864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E2C0u, 0x16D860u, 0x16D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D868u;
label_16d868:
    // 0x16d868: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16D868u;
    {
        const bool branch_taken_0x16d868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D868u;
        // 0x16d86c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d868) {
            ctx->pc = 0x16D91Cu;
            goto label_16d91c;
        }
    }
    ctx->pc = 0x16D870u;
label_16d870:
    // 0x16d870: 0xc05bd66  jal         func_16F598
    ctx->pc = 0x16D870u;
    SET_GPR_U32(ctx, 31, 0x16D878u);
    ctx->pc = 0x16D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D870u;
    // 0x16d874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F598u, 0x16D870u, 0x16D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D878u;
label_16d878:
    // 0x16d878: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D878u;
    {
        const bool branch_taken_0x16d878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d878) {
            ctx->pc = 0x16D898u;
            goto label_16d898;
        }
    }
    ctx->pc = 0x16D880u;
    // 0x16d880: 0xc05b9b8  jal         func_16E6E0
    ctx->pc = 0x16D880u;
    SET_GPR_U32(ctx, 31, 0x16D888u);
    ctx->pc = 0x16D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D880u;
    // 0x16d884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E6E0u, 0x16D880u, 0x16D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D888u;
label_16d888:
    // 0x16d888: 0xc05b94a  jal         func_16E528
    ctx->pc = 0x16D888u;
    SET_GPR_U32(ctx, 31, 0x16D890u);
    ctx->pc = 0x16D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D888u;
    // 0x16d88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E528u, 0x16D888u, 0x16D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D890u;
label_16d890:
    // 0x16d890: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16D890u;
    {
        const bool branch_taken_0x16d890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D890u;
        // 0x16d894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d890) {
            ctx->pc = 0x16D91Cu;
            goto label_16d91c;
        }
    }
    ctx->pc = 0x16D898u;
label_16d898:
    // 0x16d898: 0xc05a618  jal         func_169860
    ctx->pc = 0x16D898u;
    SET_GPR_U32(ctx, 31, 0x16D8A0u);
    ctx->pc = 0x16D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D898u;
    // 0x16d89c: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16D898u, 0x16D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8A0u;
label_16d8a0:
    // 0x16d8a0: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16d8a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d8a8: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16d8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d8b4: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x16D8B4u;
    SET_GPR_U32(ctx, 31, 0x16D8BCu);
    ctx->pc = 0x16D8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8B4u;
    // 0x16d8b8: 0x8c71020c  lw          $s1, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x16D8B4u, 0x16D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8BCu;
label_16d8bc:
    // 0x16d8bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16D8BCu;
    {
        const bool branch_taken_0x16d8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d8bc) {
            ctx->pc = 0x16D8F0u;
            goto label_16d8f0;
        }
    }
    ctx->pc = 0x16D8C4u;
    // 0x16d8c4: 0xc05b9b8  jal         func_16E6E0
    ctx->pc = 0x16D8C4u;
    SET_GPR_U32(ctx, 31, 0x16D8CCu);
    ctx->pc = 0x16D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8C4u;
    // 0x16d8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E6E0u, 0x16D8C4u, 0x16D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8CCu;
label_16d8cc:
    // 0x16d8cc: 0xc05b866  jal         func_16E198
    ctx->pc = 0x16D8CCu;
    SET_GPR_U32(ctx, 31, 0x16D8D4u);
    ctx->pc = 0x16D8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8CCu;
    // 0x16d8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E198u, 0x16D8CCu, 0x16D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8D4u;
label_16d8d4:
    // 0x16d8d4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x16D8D4u;
    {
        const bool branch_taken_0x16d8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d8d4) {
            ctx->pc = 0x16D8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D8D4u;
            // 0x16d8d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D91Cu;
            goto label_16d91c;
        }
    }
    ctx->pc = 0x16D8DCu;
    // 0x16d8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8e0: 0xc05b7f0  jal         func_16DFC0
    ctx->pc = 0x16D8E0u;
    SET_GPR_U32(ctx, 31, 0x16D8E8u);
    ctx->pc = 0x16D8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8E0u;
    // 0x16d8e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DFC0u, 0x16D8E0u, 0x16D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8E8u;
label_16d8e8:
    // 0x16d8e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16D8E8u;
    {
        const bool branch_taken_0x16d8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D8E8u;
        // 0x16d8ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8e8) {
            ctx->pc = 0x16D91Cu;
            goto label_16d91c;
        }
    }
    ctx->pc = 0x16D8F0u;
label_16d8f0:
    // 0x16d8f0: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16D8F0u;
    SET_GPR_U32(ctx, 31, 0x16D8F8u);
    ctx->pc = 0x16D8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D8F0u;
    // 0x16d8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16D8F0u, 0x16D8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D8F8u;
label_16d8f8:
    // 0x16d8f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D8F8u;
    {
        const bool branch_taken_0x16d8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d8f8) {
            ctx->pc = 0x16D8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D8F8u;
            // 0x16d8fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D91Cu;
            goto label_16d91c;
        }
    }
    ctx->pc = 0x16D900u;
    // 0x16d900: 0xc05b9b8  jal         func_16E6E0
    ctx->pc = 0x16D900u;
    SET_GPR_U32(ctx, 31, 0x16D908u);
    ctx->pc = 0x16D904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D900u;
    // 0x16d904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E6E0u, 0x16D900u, 0x16D908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D908u;
label_16d908:
    // 0x16d908: 0xc05b72c  jal         func_16DCB0
    ctx->pc = 0x16D908u;
    SET_GPR_U32(ctx, 31, 0x16D910u);
    ctx->pc = 0x16D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D908u;
    // 0x16d90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DCB0u, 0x16D908u, 0x16D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D910u;
label_16d910:
    // 0x16d910: 0xc05be2a  jal         func_16F8A8
    ctx->pc = 0x16D910u;
    SET_GPR_U32(ctx, 31, 0x16D918u);
    ctx->pc = 0x16D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D910u;
    // 0x16d914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F8A8u, 0x16D910u, 0x16D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D918u;
label_16d918:
    // 0x16d918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d91c:
    // 0x16d91c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16d91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d924: 0x3e00008  jr          $ra
    ctx->pc = 0x16D924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D924u;
        // 0x16d928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D92Cu;
    // 0x16d92c: 0x0  nop
    ctx->pc = 0x16d92cu;
    // NOP
    ctx->pc = 0x16d930u;
}
