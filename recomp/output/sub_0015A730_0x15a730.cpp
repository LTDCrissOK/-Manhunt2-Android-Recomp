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

// Function: sub_0015A730
// Address: 0x15a730 - 0x15a9f0
void sub_0015A730_0x15a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A730_0x15a730");
#endif

    switch (ctx->pc) {
        case 0x15a774u: goto label_15a774;
        case 0x15a790u: goto label_15a790;
        case 0x15a7b8u: goto label_15a7b8;
        case 0x15a7f8u: goto label_15a7f8;
        case 0x15a85cu: goto label_15a85c;
        case 0x15a8b0u: goto label_15a8b0;
        case 0x15a8d4u: goto label_15a8d4;
        case 0x15a8f8u: goto label_15a8f8;
        case 0x15a914u: goto label_15a914;
        case 0x15a968u: goto label_15a968;
        case 0x15a98cu: goto label_15a98c;
        case 0x15a9a0u: goto label_15a9a0;
        default: break;
    }

    ctx->pc = 0x15a730u;

    // 0x15a730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15a734: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x15a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x15a738: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x15a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x15a73c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a740: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x15a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x15a744: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x15a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x15a748: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x15a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x15a74c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x15a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x15a750: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x15a750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x15a754: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x15a754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x15a758: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x15a758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x15a75c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x15a75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x15a760: 0x92220a20  lbu         $v0, 0xA20($s1)
    ctx->pc = 0x15a760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2592)));
    // 0x15a764: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x15A764u;
    {
        const bool branch_taken_0x15a764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A764u;
        // 0x15a768: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a764) {
            ctx->pc = 0x15A9C4u;
            goto label_15a9c4;
        }
    }
    ctx->pc = 0x15A76Cu;
    // 0x15a76c: 0xc056e78  jal         func_15B9E0
    ctx->pc = 0x15A76Cu;
    SET_GPR_U32(ctx, 31, 0x15A774u);
    ctx->pc = 0x15B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B9E0u, 0x15A76Cu, 0x15A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A774u;
label_15a774:
    // 0x15a774: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x15A774u;
    {
        const bool branch_taken_0x15a774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A774u;
        // 0x15a778: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a774) {
            ctx->pc = 0x15A9C4u;
            goto label_15a9c4;
        }
    }
    ctx->pc = 0x15A77Cu;
    // 0x15a77c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15a77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a780: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x15a780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x15a784: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15A784u;
    {
        const bool branch_taken_0x15a784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A784u;
        // 0x15a788: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a784) {
            ctx->pc = 0x15A7D8u;
            goto label_15a7d8;
        }
    }
    ctx->pc = 0x15A78Cu;
    // 0x15a78c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15a790:
    // 0x15a790: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15a790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15a794: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15a794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15a798: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15a798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a79c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A79Cu;
    {
        const bool branch_taken_0x15a79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A79Cu;
        // 0x15a7a0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a79c) {
            ctx->pc = 0x15A7B8u;
            goto label_15a7b8;
        }
    }
    ctx->pc = 0x15A7A4u;
    // 0x15a7a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a7a8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x15a7a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15a7ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a7b0: 0xc056aec  jal         func_15ABB0
    ctx->pc = 0x15A7B0u;
    SET_GPR_U32(ctx, 31, 0x15A7B8u);
    ctx->pc = 0x15A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A7B0u;
    // 0x15a7b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ABB0u, 0x15A7B0u, 0x15A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A7B8u;
label_15a7b8:
    // 0x15a7b8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x15a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15a7bc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15a7bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15a7c0: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x15a7c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15a7c4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A7C4u;
    {
        const bool branch_taken_0x15a7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a7c4) {
            ctx->pc = 0x15A7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A7C4u;
            // 0x15a7c8: 0x92220a20  lbu         $v0, 0xA20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A7DCu;
            goto label_15a7dc;
        }
    }
    ctx->pc = 0x15A7CCu;
    // 0x15a7cc: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x15a7ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x15a7d0: 0x5642ffef  bnel        $s2, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15A7D0u;
    {
        const bool branch_taken_0x15a7d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x15a7d0) {
            ctx->pc = 0x15A7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A7D0u;
            // 0x15a7d4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a790;
        }
    }
    ctx->pc = 0x15A7D8u;
label_15a7d8:
    // 0x15a7d8: 0x92220a20  lbu         $v0, 0xA20($s1)
    ctx->pc = 0x15a7d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2592)));
label_15a7dc:
    // 0x15a7dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15a7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a7e0: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x15A7E0u;
    {
        const bool branch_taken_0x15a7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7E0u;
        // 0x15a7e4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7e0) {
            ctx->pc = 0x15A948u;
            goto label_15a948;
        }
    }
    ctx->pc = 0x15A7E8u;
    // 0x15a7e8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15a7ec: 0x245e9a08  addiu       $fp, $v0, -0x65F8
    ctx->pc = 0x15a7ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x15a7f0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15a7f4: 0x0  nop
    ctx->pc = 0x15a7f4u;
    // NOP
label_15a7f8:
    // 0x15a7f8: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x15a7f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15a7fc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x15a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15a800: 0x8c740320  lw          $s4, 0x320($v1)
    ctx->pc = 0x15a800u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x15a804: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x15a804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x15a808: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x15a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x15a80c: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x15a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x15a810: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x15A810u;
    {
        const bool branch_taken_0x15a810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A810u;
        // 0x15a814: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a810) {
            ctx->pc = 0x15A934u;
            goto label_15a934;
        }
    }
    ctx->pc = 0x15A818u;
    // 0x15a818: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15a81c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x15a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x15a820: 0x24639b10  addiu       $v1, $v1, -0x64F0
    ctx->pc = 0x15a820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x15a824: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15a824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15a828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a82c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a830: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A830u;
    {
        const bool branch_taken_0x15a830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a830) {
            ctx->pc = 0x15A834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A830u;
            // 0x15a834: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A840u;
            goto label_15a840;
        }
    }
    ctx->pc = 0x15A838u;
    // 0x15a838: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15A838u;
    {
        const bool branch_taken_0x15a838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A838u;
        // 0x15a83c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a838) {
            ctx->pc = 0x15A848u;
            goto label_15a848;
        }
    }
    ctx->pc = 0x15A840u;
label_15a840:
    // 0x15a840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15a840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a844: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x15a844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15a848:
    // 0x15a848: 0x10c0003a  beqz        $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x15A848u;
    {
        const bool branch_taken_0x15a848 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A848u;
        // 0x15a84c: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a848) {
            ctx->pc = 0x15A934u;
            goto label_15a934;
        }
    }
    ctx->pc = 0x15A850u;
    // 0x15a850: 0x8e2502e4  lw          $a1, 0x2E4($s1)
    ctx->pc = 0x15a850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
    // 0x15a854: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15A854u;
    SET_GPR_U32(ctx, 31, 0x15A85Cu);
    ctx->pc = 0x15A858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A854u;
    // 0x15a858: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15A854u, 0x15A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A85Cu;
label_15a85c:
    // 0x15a85c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15a85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a860: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a864: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15a868: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15a868u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15a86c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15a86cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15a870: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15a870u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15a874: 0xc62002f0  lwc1        $f0, 0x2F0($s1)
    ctx->pc = 0x15a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a878: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15a878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a87c: 0x0  nop
    ctx->pc = 0x15a87cu;
    // NOP
    // 0x15a880: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
    ctx->pc = 0x15A880u;
    {
        const bool branch_taken_0x15a880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a880) {
            ctx->pc = 0x15A884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A880u;
            // 0x15a884: 0x92220a20  lbu         $v0, 0xA20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A938u;
            goto label_15a938;
        }
    }
    ctx->pc = 0x15A888u;
    // 0x15a888: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15a888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a88c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x15a88cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x15a890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a894: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x15a894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a898: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x15A898u;
    {
        const bool branch_taken_0x15a898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A898u;
        // 0x15a89c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a898) {
            ctx->pc = 0x15A934u;
            goto label_15a934;
        }
    }
    ctx->pc = 0x15A8A0u;
    // 0x15a8a0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15a8a4: 0x24170009  addiu       $s7, $zero, 0x9
    ctx->pc = 0x15a8a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15a8a8: 0x24569c14  addiu       $s6, $v0, -0x63EC
    ctx->pc = 0x15a8a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x15a8ac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x15a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15a8b0:
    // 0x15a8b0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x15a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15a8b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a8b8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x15a8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a8bc: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15A8BCu;
    {
        const bool branch_taken_0x15a8bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A8BCu;
        // 0x15a8c0: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a8bc) {
            ctx->pc = 0x15A914u;
            goto label_15a914;
        }
    }
    ctx->pc = 0x15A8C4u;
    // 0x15a8c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a8c8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x15a8c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15a8cc: 0xc056af2  jal         func_15ABC8
    ctx->pc = 0x15A8CCu;
    SET_GPR_U32(ctx, 31, 0x15A8D4u);
    ctx->pc = 0x15A8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A8CCu;
    // 0x15a8d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ABC8u, 0x15A8CCu, 0x15A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8D4u;
label_15a8d4:
    // 0x15a8d4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15A8D4u;
    {
        const bool branch_taken_0x15a8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A8D4u;
        // 0x15a8d8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a8d4) {
            ctx->pc = 0x15A918u;
            goto label_15a918;
        }
    }
    ctx->pc = 0x15A8DCu;
    // 0x15a8dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15a8e0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x15a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x15a8e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15a8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a8e8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x15A8E8u;
    {
        const bool branch_taken_0x15a8e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A8E8u;
        // 0x15a8ec: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a8e8) {
            ctx->pc = 0x15A918u;
            goto label_15a918;
        }
    }
    ctx->pc = 0x15A8F0u;
    // 0x15a8f0: 0xc044234  jal         func_1108D0
    ctx->pc = 0x15A8F0u;
    SET_GPR_U32(ctx, 31, 0x15A8F8u);
    ctx->pc = 0x15A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A8F0u;
    // 0x15a8f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x15A8F0u, 0x15A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8F8u;
label_15a8f8:
    // 0x15a8f8: 0x50570007  beql        $v0, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x15A8F8u;
    {
        const bool branch_taken_0x15a8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x15a8f8) {
            ctx->pc = 0x15A8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A8F8u;
            // 0x15a8fc: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A918u;
            goto label_15a918;
        }
    }
    ctx->pc = 0x15A900u;
    // 0x15a900: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A900u;
    {
        const bool branch_taken_0x15a900 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A900u;
        // 0x15a904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a900) {
            ctx->pc = 0x15A914u;
            goto label_15a914;
        }
    }
    ctx->pc = 0x15A908u;
    // 0x15a908: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15a908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a90c: 0xc056aec  jal         func_15ABB0
    ctx->pc = 0x15A90Cu;
    SET_GPR_U32(ctx, 31, 0x15A914u);
    ctx->pc = 0x15A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A90Cu;
    // 0x15a910: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ABB0u, 0x15A90Cu, 0x15A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A914u;
label_15a914:
    // 0x15a914: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x15a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15a918:
    // 0x15a918: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x15a918u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15a91c: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x15a91cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15a920: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A920u;
    {
        const bool branch_taken_0x15a920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a920) {
            ctx->pc = 0x15A924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A920u;
            // 0x15a924: 0x92220a20  lbu         $v0, 0xA20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A938u;
            goto label_15a938;
        }
    }
    ctx->pc = 0x15A928u;
    // 0x15a928: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x15a928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x15a92c: 0x5662ffe0  bnel        $s3, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x15A92Cu;
    {
        const bool branch_taken_0x15a92c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x15a92c) {
            ctx->pc = 0x15A930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A92Cu;
            // 0x15a930: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a8b0;
        }
    }
    ctx->pc = 0x15A934u;
label_15a934:
    // 0x15a934: 0x92220a20  lbu         $v0, 0xA20($s1)
    ctx->pc = 0x15a934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2592)));
label_15a938:
    // 0x15a938: 0x32b000ff  andi        $s0, $s5, 0xFF
    ctx->pc = 0x15a938u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15a93c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x15a93cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15a940: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x15A940u;
    {
        const bool branch_taken_0x15a940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A940u;
        // 0x15a944: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a940) {
            ctx->pc = 0x15A7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a7f8;
        }
    }
    ctx->pc = 0x15A948u;
label_15a948:
    // 0x15a948: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15a948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a94c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15A94Cu;
    {
        const bool branch_taken_0x15a94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A94Cu;
        // 0x15a950: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a94c) {
            ctx->pc = 0x15A9C0u;
            goto label_15a9c0;
        }
    }
    ctx->pc = 0x15A954u;
    // 0x15a954: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x15a954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x15a958: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15A958u;
    {
        const bool branch_taken_0x15a958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A958u;
        // 0x15a95c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a958) {
            ctx->pc = 0x15A9C0u;
            goto label_15a9c0;
        }
    }
    ctx->pc = 0x15A960u;
    // 0x15a960: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15a964: 0x0  nop
    ctx->pc = 0x15a964u;
    // NOP
label_15a968:
    // 0x15a968: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15a968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15a96c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15a970: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15a970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a974: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x15A974u;
    {
        const bool branch_taken_0x15a974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A974u;
        // 0x15a978: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a974) {
            ctx->pc = 0x15A9A0u;
            goto label_15a9a0;
        }
    }
    ctx->pc = 0x15A97Cu;
    // 0x15a97c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a980: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x15a980u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15a984: 0xc056af2  jal         func_15ABC8
    ctx->pc = 0x15A984u;
    SET_GPR_U32(ctx, 31, 0x15A98Cu);
    ctx->pc = 0x15A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A984u;
    // 0x15a988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ABC8u, 0x15A984u, 0x15A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A98Cu;
label_15a98c:
    // 0x15a98c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A98Cu;
    {
        const bool branch_taken_0x15a98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A98Cu;
        // 0x15a990: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a98c) {
            ctx->pc = 0x15A9A4u;
            goto label_15a9a4;
        }
    }
    ctx->pc = 0x15A994u;
    // 0x15a994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a998: 0xc057fb6  jal         func_15FED8
    ctx->pc = 0x15A998u;
    SET_GPR_U32(ctx, 31, 0x15A9A0u);
    ctx->pc = 0x15A99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A998u;
    // 0x15a99c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FED8u, 0x15A998u, 0x15A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A9A0u;
label_15a9a0:
    // 0x15a9a0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x15a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15a9a4:
    // 0x15a9a4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15a9a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15a9a8: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x15a9a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15a9ac: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A9ACu;
    {
        const bool branch_taken_0x15a9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9ac) {
            ctx->pc = 0x15A9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A9ACu;
            // 0x15a9b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A9C4u;
            goto label_15a9c4;
        }
    }
    ctx->pc = 0x15A9B4u;
    // 0x15a9b4: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x15a9b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x15a9b8: 0x5642ffeb  bnel        $s2, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15A9B8u;
    {
        const bool branch_taken_0x15a9b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x15a9b8) {
            ctx->pc = 0x15A9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A9B8u;
            // 0x15a9bc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a968;
        }
    }
    ctx->pc = 0x15A9C0u;
label_15a9c0:
    // 0x15a9c0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x15a9c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15a9c4:
    // 0x15a9c4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x15a9c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15a9c8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x15a9c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a9cc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x15a9ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a9d0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x15a9d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a9d4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x15a9d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15a9d8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x15a9d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a9dc: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x15a9dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15a9e0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x15a9e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15a9e4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x15a9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15a9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x15A9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9E8u;
        // 0x15a9ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A9F0u;
}
