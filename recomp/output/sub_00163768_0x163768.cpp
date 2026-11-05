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

// Function: sub_00163768
// Address: 0x163768 - 0x1638c0
void sub_00163768_0x163768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163768_0x163768");
#endif

    switch (ctx->pc) {
        case 0x1637a4u: goto label_1637a4;
        case 0x1637bcu: goto label_1637bc;
        case 0x1637c8u: goto label_1637c8;
        case 0x1637d8u: goto label_1637d8;
        case 0x1637e4u: goto label_1637e4;
        case 0x1637f4u: goto label_1637f4;
        case 0x1637f8u: goto label_1637f8;
        case 0x163818u: goto label_163818;
        case 0x16382cu: goto label_16382c;
        case 0x16383cu: goto label_16383c;
        case 0x16384cu: goto label_16384c;
        case 0x163858u: goto label_163858;
        case 0x163890u: goto label_163890;
        default: break;
    }

    ctx->pc = 0x163768u;

    // 0x163768: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16376c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x163770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x163774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x163774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163778: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x163778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16377c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16377cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x163780: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x163780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x163784: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x163784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x163788: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x163788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16378c: 0x8e02021c  lw          $v0, 0x21C($s0)
    ctx->pc = 0x16378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x163790: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x163790u;
    {
        const bool branch_taken_0x163790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163790u;
        // 0x163794: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163790) {
            ctx->pc = 0x163890u;
            goto label_163890;
        }
    }
    ctx->pc = 0x163798u;
    // 0x163798: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x163798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x16379c: 0xc04f0a8  jal         func_13C2A0
    ctx->pc = 0x16379Cu;
    SET_GPR_U32(ctx, 31, 0x1637A4u);
    ctx->pc = 0x1637A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16379Cu;
    // 0x1637a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2A0u, 0x16379Cu, 0x1637A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637A4u;
label_1637a4:
    // 0x1637a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1637a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1637a8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1637a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1637ac: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1637acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x1637b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1637b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1637b4: 0xc045612  jal         func_115848
    ctx->pc = 0x1637B4u;
    SET_GPR_U32(ctx, 31, 0x1637BCu);
    ctx->pc = 0x1637B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1637B4u;
    // 0x1637b8: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x1637B4u, 0x1637BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637BCu;
label_1637bc:
    // 0x1637bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1637bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1637c0: 0xc045668  jal         func_1159A0
    ctx->pc = 0x1637C0u;
    SET_GPR_U32(ctx, 31, 0x1637C8u);
    ctx->pc = 0x1637C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1637C0u;
    // 0x1637c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x1637C0u, 0x1637C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637C8u;
label_1637c8:
    // 0x1637c8: 0x8e0202e4  lw          $v0, 0x2E4($s0)
    ctx->pc = 0x1637c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x1637cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1637ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1637d0: 0xc0456ac  jal         func_115AB0
    ctx->pc = 0x1637D0u;
    SET_GPR_U32(ctx, 31, 0x1637D8u);
    ctx->pc = 0x1637D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1637D0u;
    // 0x1637d4: 0x90450020  lbu         $a1, 0x20($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AB0u, 0x1637D0u, 0x1637D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637D8u;
label_1637d8:
    // 0x1637d8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1637d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1637dc: 0xc04b2a2  jal         func_12CA88
    ctx->pc = 0x1637DCu;
    SET_GPR_U32(ctx, 31, 0x1637E4u);
    ctx->pc = 0x1637E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1637DCu;
    // 0x1637e0: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA88u, 0x1637DCu, 0x1637E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637E4u;
label_1637e4:
    // 0x1637e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1637e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1637e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1637e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1637ec: 0xc0456a0  jal         func_115A80
    ctx->pc = 0x1637ECu;
    SET_GPR_U32(ctx, 31, 0x1637F4u);
    ctx->pc = 0x1637F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1637ECu;
    // 0x1637f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A80u, 0x1637ECu, 0x1637F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637F4u;
label_1637f4:
    // 0x1637f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1637f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1637f8:
    // 0x1637f8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1637f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1637fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1637fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163800: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x163800u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163804: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x163804u;
    {
        const bool branch_taken_0x163804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x163808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163804u;
        // 0x163808: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163804) {
            ctx->pc = 0x163870u;
            goto label_163870;
        }
    }
    ctx->pc = 0x16380Cu;
    // 0x16380c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16380cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163810: 0xc04f148  jal         func_13C520
    ctx->pc = 0x163810u;
    SET_GPR_U32(ctx, 31, 0x163818u);
    ctx->pc = 0x163814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163810u;
    // 0x163814: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C520u, 0x163810u, 0x163818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163818u;
label_163818:
    // 0x163818: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x163818u;
    {
        const bool branch_taken_0x163818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163818u;
        // 0x16381c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163818) {
            ctx->pc = 0x16386Cu;
            goto label_16386c;
        }
    }
    ctx->pc = 0x163820u;
    // 0x163820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163824: 0xc04f142  jal         func_13C508
    ctx->pc = 0x163824u;
    SET_GPR_U32(ctx, 31, 0x16382Cu);
    ctx->pc = 0x163828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163824u;
    // 0x163828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C508u, 0x163824u, 0x16382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16382Cu;
label_16382c:
    // 0x16382c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16382cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163830: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x163830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163834: 0xc04f136  jal         func_13C4D8
    ctx->pc = 0x163834u;
    SET_GPR_U32(ctx, 31, 0x16383Cu);
    ctx->pc = 0x163838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163834u;
    // 0x163838: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4D8u, 0x163834u, 0x16383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16383Cu;
label_16383c:
    // 0x16383c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16383cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x163840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163844: 0xc04f14e  jal         func_13C538
    ctx->pc = 0x163844u;
    SET_GPR_U32(ctx, 31, 0x16384Cu);
    ctx->pc = 0x163848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163844u;
    // 0x163848: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C538u, 0x163844u, 0x16384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16384Cu;
label_16384c:
    // 0x16384c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16384cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163850: 0xc045642  jal         func_115908
    ctx->pc = 0x163850u;
    SET_GPR_U32(ctx, 31, 0x163858u);
    ctx->pc = 0x163854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163850u;
    // 0x163854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115908u, 0x163850u, 0x163858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163858u;
label_163858:
    // 0x163858: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x163858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x16385c: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x16385cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x163860: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x163860u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x163864: 0x52a30007  beql        $s5, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x163864u;
    {
        const bool branch_taken_0x163864 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x163864) {
            ctx->pc = 0x163868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163864u;
            // 0x163868: 0x8e040214  lw          $a0, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163884u;
            goto label_163884;
        }
    }
    ctx->pc = 0x16386Cu;
label_16386c:
    // 0x16386c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x16386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_163870:
    // 0x163870: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x163870u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x163874: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x163874u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x163878: 0x5460ffdf  bnel        $v1, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x163878u;
    {
        const bool branch_taken_0x163878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x163878) {
            ctx->pc = 0x16387Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163878u;
            // 0x16387c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1637F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1637f8;
        }
    }
    ctx->pc = 0x163880u;
    // 0x163880: 0x8e040214  lw          $a0, 0x214($s0)
    ctx->pc = 0x163880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_163884:
    // 0x163884: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x163884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163888: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x163888u;
    SET_GPR_U32(ctx, 31, 0x163890u);
    ctx->pc = 0x16388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163888u;
    // 0x16388c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x163888u, 0x163890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163890u;
label_163890:
    // 0x163890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x163890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163894: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x163894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163898: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x163898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16389c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16389cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1638a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1638a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1638a4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1638a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1638a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1638a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1638ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1638ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1638B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638ACu;
        // 0x1638b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1638ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1638B4u;
    // 0x1638b4: 0x0  nop
    ctx->pc = 0x1638b4u;
    // NOP
    // 0x1638b8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1638b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1638bc: 0x0  nop
    ctx->pc = 0x1638bcu;
    // NOP
    ctx->pc = 0x1638c0u;
}
