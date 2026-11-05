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

// Function: sub_00173800
// Address: 0x173800 - 0x1738e0
void sub_00173800_0x173800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173800_0x173800");
#endif

    switch (ctx->pc) {
        case 0x173800u: goto label_173800;
        case 0x173804u: goto label_173804;
        case 0x173808u: goto label_173808;
        case 0x17380cu: goto label_17380c;
        case 0x173810u: goto label_173810;
        case 0x173814u: goto label_173814;
        case 0x173818u: goto label_173818;
        case 0x17381cu: goto label_17381c;
        case 0x173820u: goto label_173820;
        case 0x173824u: goto label_173824;
        case 0x173828u: goto label_173828;
        case 0x17382cu: goto label_17382c;
        case 0x173830u: goto label_173830;
        case 0x173834u: goto label_173834;
        case 0x173838u: goto label_173838;
        case 0x17383cu: goto label_17383c;
        case 0x173840u: goto label_173840;
        case 0x173844u: goto label_173844;
        case 0x173848u: goto label_173848;
        case 0x17384cu: goto label_17384c;
        case 0x173850u: goto label_173850;
        case 0x173854u: goto label_173854;
        case 0x173858u: goto label_173858;
        case 0x17385cu: goto label_17385c;
        case 0x173860u: goto label_173860;
        case 0x173864u: goto label_173864;
        case 0x173868u: goto label_173868;
        case 0x17386cu: goto label_17386c;
        case 0x173870u: goto label_173870;
        case 0x173874u: goto label_173874;
        case 0x173878u: goto label_173878;
        case 0x17387cu: goto label_17387c;
        case 0x173880u: goto label_173880;
        case 0x173884u: goto label_173884;
        case 0x173888u: goto label_173888;
        case 0x17388cu: goto label_17388c;
        case 0x173890u: goto label_173890;
        case 0x173894u: goto label_173894;
        case 0x173898u: goto label_173898;
        case 0x17389cu: goto label_17389c;
        case 0x1738a0u: goto label_1738a0;
        case 0x1738a4u: goto label_1738a4;
        case 0x1738a8u: goto label_1738a8;
        case 0x1738acu: goto label_1738ac;
        case 0x1738b0u: goto label_1738b0;
        case 0x1738b4u: goto label_1738b4;
        case 0x1738b8u: goto label_1738b8;
        case 0x1738bcu: goto label_1738bc;
        case 0x1738c0u: goto label_1738c0;
        case 0x1738c4u: goto label_1738c4;
        case 0x1738c8u: goto label_1738c8;
        case 0x1738ccu: goto label_1738cc;
        case 0x1738d0u: goto label_1738d0;
        case 0x1738d4u: goto label_1738d4;
        case 0x1738d8u: goto label_1738d8;
        case 0x1738dcu: goto label_1738dc;
        default: break;
    }

    ctx->pc = 0x173800u;

label_173800:
    // 0x173800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_173804:
    // 0x173804: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_173808:
    // 0x173808: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17380c:
    // 0x17380c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17380cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_173810:
    // 0x173810: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x173810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_173814:
    // 0x173814: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x173814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_173818:
    // 0x173818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17381c:
    // 0x17381c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17381cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_173820:
    // 0x173820: 0xc04f968  jal         func_13E5A0
label_173824:
    if (ctx->pc == 0x173824u) {
        ctx->pc = 0x173824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173820u;
        // 0x173824: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173828u;
        goto label_173828;
    }
    ctx->pc = 0x173820u;
    SET_GPR_U32(ctx, 31, 0x173828u);
    ctx->pc = 0x173824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173820u;
    // 0x173824: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5A0u, 0x173820u, 0x173828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173828u;
label_173828:
    // 0x173828: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x173828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17382c:
    // 0x17382c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x17382cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_173830:
    // 0x173830: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x173830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_173834:
    // 0x173834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173838:
    // 0x173838: 0xc04f8fc  jal         func_13E3F0
label_17383c:
    if (ctx->pc == 0x17383Cu) {
        ctx->pc = 0x17383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173838u;
        // 0x17383c: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173840u;
        goto label_173840;
    }
    ctx->pc = 0x173838u;
    SET_GPR_U32(ctx, 31, 0x173840u);
    ctx->pc = 0x17383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173838u;
    // 0x17383c: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x173838u, 0x173840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173840u;
label_173840:
    // 0x173840: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x173840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_173844:
    // 0x173844: 0xc05a5fe  jal         func_1697F8
label_173848:
    if (ctx->pc == 0x173848u) {
        ctx->pc = 0x173848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173844u;
        // 0x173848: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17384Cu;
        goto label_17384c;
    }
    ctx->pc = 0x173844u;
    SET_GPR_U32(ctx, 31, 0x17384Cu);
    ctx->pc = 0x173848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173844u;
    // 0x173848: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x173844u, 0x17384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17384Cu;
label_17384c:
    // 0x17384c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17384cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173850:
    // 0x173850: 0xc0461e8  jal         func_1187A0
label_173854:
    if (ctx->pc == 0x173854u) {
        ctx->pc = 0x173854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173850u;
        // 0x173854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173858u;
        goto label_173858;
    }
    ctx->pc = 0x173850u;
    SET_GPR_U32(ctx, 31, 0x173858u);
    ctx->pc = 0x173854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173850u;
    // 0x173854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x173850u, 0x173858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173858u;
label_173858:
    // 0x173858: 0xc05c0fc  jal         func_1703F0
label_17385c:
    if (ctx->pc == 0x17385Cu) {
        ctx->pc = 0x17385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173858u;
        // 0x17385c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173860u;
        goto label_173860;
    }
    ctx->pc = 0x173858u;
    SET_GPR_U32(ctx, 31, 0x173860u);
    ctx->pc = 0x17385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173858u;
    // 0x17385c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1703F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1703F0u, 0x173858u, 0x173860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173860u;
label_173860:
    // 0x173860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173864:
    // 0x173864: 0xc0460c4  jal         func_118310
label_173868:
    if (ctx->pc == 0x173868u) {
        ctx->pc = 0x173868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173864u;
        // 0x173868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17386Cu;
        goto label_17386c;
    }
    ctx->pc = 0x173864u;
    SET_GPR_U32(ctx, 31, 0x17386Cu);
    ctx->pc = 0x173868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173864u;
    // 0x173868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x173864u, 0x17386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17386Cu;
label_17386c:
    // 0x17386c: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x17386cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_173870:
    // 0x173870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173874:
    // 0x173874: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x173874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_173878:
    // 0x173878: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x173878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_17387c:
    // 0x17387c: 0x40f809  jalr        $v0
label_173880:
    if (ctx->pc == 0x173880u) {
        ctx->pc = 0x173880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17387Cu;
        // 0x173880: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173884u;
        goto label_173884;
    }
    ctx->pc = 0x17387Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173884u);
        ctx->pc = 0x173880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17387Cu;
        // 0x173880: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17387Cu, 0x173884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173884u;
label_173884:
    // 0x173884: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x173884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_173888:
    // 0x173888: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_17388c:
    if (ctx->pc == 0x17388Cu) {
        ctx->pc = 0x173890u;
        goto label_173890;
    }
    ctx->pc = 0x173888u;
    {
        const bool branch_taken_0x173888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173888) {
            ctx->pc = 0x173898u;
            goto label_173898;
        }
    }
    ctx->pc = 0x173890u;
label_173890:
    // 0x173890: 0xc058650  jal         func_161940
label_173894:
    if (ctx->pc == 0x173894u) {
        ctx->pc = 0x173894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173890u;
        // 0x173894: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173898u;
        goto label_173898;
    }
    ctx->pc = 0x173890u;
    SET_GPR_U32(ctx, 31, 0x173898u);
    ctx->pc = 0x173894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173890u;
    // 0x173894: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161940u, 0x173890u, 0x173898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173898u;
label_173898:
    // 0x173898: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_17389c:
    if (ctx->pc == 0x17389Cu) {
        ctx->pc = 0x1738A0u;
        goto label_1738a0;
    }
    ctx->pc = 0x173898u;
    {
        const bool branch_taken_0x173898 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x173898) {
            ctx->pc = 0x1738ACu;
            goto label_1738ac;
        }
    }
    ctx->pc = 0x1738A0u;
label_1738a0:
    // 0x1738a0: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x1738a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1738a4:
    // 0x1738a4: 0xc058654  jal         func_161950
label_1738a8:
    if (ctx->pc == 0x1738A8u) {
        ctx->pc = 0x1738A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738A4u;
        // 0x1738a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1738ACu;
        goto label_1738ac;
    }
    ctx->pc = 0x1738A4u;
    SET_GPR_U32(ctx, 31, 0x1738ACu);
    ctx->pc = 0x1738A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738A4u;
    // 0x1738a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161950u, 0x1738A4u, 0x1738ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1738ACu;
label_1738ac:
    // 0x1738ac: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_1738b0:
    if (ctx->pc == 0x1738B0u) {
        ctx->pc = 0x1738B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738ACu;
        // 0x1738b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1738B4u;
        goto label_1738b4;
    }
    ctx->pc = 0x1738ACu;
    {
        const bool branch_taken_0x1738ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1738B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738ACu;
        // 0x1738b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738ac) {
            ctx->pc = 0x1738BCu;
            goto label_1738bc;
        }
    }
    ctx->pc = 0x1738B4u;
label_1738b4:
    // 0x1738b4: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x1738b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1738b8:
    // 0x1738b8: 0xac6203ac  sw          $v0, 0x3AC($v1)
    ctx->pc = 0x1738b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 940), GPR_U32(ctx, 2));
label_1738bc:
    // 0x1738bc: 0xae200250  sw          $zero, 0x250($s1)
    ctx->pc = 0x1738bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
label_1738c0:
    // 0x1738c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1738c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1738c4:
    // 0x1738c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1738c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1738c8:
    // 0x1738c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1738c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1738cc:
    // 0x1738cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1738ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1738d0:
    // 0x1738d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1738d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1738d4:
    // 0x1738d4: 0x3e00008  jr          $ra
label_1738d8:
    if (ctx->pc == 0x1738D8u) {
        ctx->pc = 0x1738D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738D4u;
        // 0x1738d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1738DCu;
        goto label_1738dc;
    }
    ctx->pc = 0x1738D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1738D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738D4u;
        // 0x1738d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1738D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1738DCu;
label_1738dc:
    // 0x1738dc: 0x0  nop
    ctx->pc = 0x1738dcu;
    // NOP
    ctx->pc = 0x1738e0u;
}
