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

// Function: sub_00144748
// Address: 0x144748 - 0x1448c0
void sub_00144748_0x144748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144748_0x144748");
#endif

    switch (ctx->pc) {
        case 0x1447b0u: goto label_1447b0;
        case 0x1447c4u: goto label_1447c4;
        case 0x1447d0u: goto label_1447d0;
        case 0x1447e0u: goto label_1447e0;
        case 0x1447e8u: goto label_1447e8;
        case 0x1447f8u: goto label_1447f8;
        case 0x14481cu: goto label_14481c;
        case 0x144828u: goto label_144828;
        case 0x144840u: goto label_144840;
        case 0x14484cu: goto label_14484c;
        case 0x144864u: goto label_144864;
        case 0x144870u: goto label_144870;
        case 0x14487cu: goto label_14487c;
        case 0x144890u: goto label_144890;
        case 0x14489cu: goto label_14489c;
        default: break;
    }

    ctx->pc = 0x144748u;

    // 0x144748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x144748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14474c: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x14474cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x144750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144754: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x144754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x144758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x144758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14475c: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x14475cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x144760: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x144760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x144764: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144768: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x144768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14476c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14476cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144770: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x144770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x144774: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x144774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x144778: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x144778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14477c: 0x73800b  movn        $s0, $v1, $s3
    ctx->pc = 0x14477cu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x144780: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x144780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x144784: 0x9227046c  lbu         $a3, 0x46C($s1)
    ctx->pc = 0x144784u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x144788: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x144788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14478c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x14478cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x144790: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x144790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144794: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x144794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x144798: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x144798u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14479c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14479cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447a0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1447a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1447a4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1447a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1447a8: 0xc04e866  jal         func_13A198
    ctx->pc = 0x1447A8u;
    SET_GPR_U32(ctx, 31, 0x1447B0u);
    ctx->pc = 0x1447ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447A8u;
    // 0x1447ac: 0x8cd5020c  lw          $s5, 0x20C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x1447A8u, 0x1447B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447B0u;
label_1447b0:
    // 0x1447b0: 0x1050003a  beq         $v0, $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1447B0u;
    {
        const bool branch_taken_0x1447b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1447B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447B0u;
        // 0x1447b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1447b0) {
            ctx->pc = 0x14489Cu;
            goto label_14489c;
        }
    }
    ctx->pc = 0x1447B8u;
    // 0x1447b8: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1447b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1447bc: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1447BCu;
    SET_GPR_U32(ctx, 31, 0x1447C4u);
    ctx->pc = 0x1447C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447BCu;
    // 0x1447c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1447BCu, 0x1447C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447C4u;
label_1447c4:
    // 0x1447c4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1447c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1447c8: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1447C8u;
    SET_GPR_U32(ctx, 31, 0x1447D0u);
    ctx->pc = 0x1447CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447C8u;
    // 0x1447cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1447C8u, 0x1447D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447D0u;
label_1447d0:
    // 0x1447d0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1447d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1447d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1447d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447d8: 0xc04e860  jal         func_13A180
    ctx->pc = 0x1447D8u;
    SET_GPR_U32(ctx, 31, 0x1447E0u);
    ctx->pc = 0x1447DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447D8u;
    // 0x1447dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x1447D8u, 0x1447E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447E0u;
label_1447e0:
    // 0x1447e0: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x1447E0u;
    SET_GPR_U32(ctx, 31, 0x1447E8u);
    ctx->pc = 0x1447E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447E0u;
    // 0x1447e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x1447E0u, 0x1447E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447E8u;
label_1447e8:
    // 0x1447e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1447e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1447ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447f0: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1447F0u;
    SET_GPR_U32(ctx, 31, 0x1447F8u);
    ctx->pc = 0x1447F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447F0u;
    // 0x1447f4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1447F0u, 0x1447F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447F8u;
label_1447f8:
    // 0x1447f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1447f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1447fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144800: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x144800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144804: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x144804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144808: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x144808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14480c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x14480cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144810: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x144810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x144814: 0xc04daca  jal         func_136B28
    ctx->pc = 0x144814u;
    SET_GPR_U32(ctx, 31, 0x14481Cu);
    ctx->pc = 0x144818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144814u;
    // 0x144818: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x144814u, 0x14481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14481Cu;
label_14481c:
    // 0x14481c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14481cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144820: 0xc046030  jal         func_1180C0
    ctx->pc = 0x144820u;
    SET_GPR_U32(ctx, 31, 0x144828u);
    ctx->pc = 0x144824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144820u;
    // 0x144824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x144820u, 0x144828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144828u;
label_144828:
    // 0x144828: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x144828u;
    {
        const bool branch_taken_0x144828 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x144828) {
            ctx->pc = 0x144854u;
            goto label_144854;
        }
    }
    ctx->pc = 0x144830u;
    // 0x144830: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x144830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x144834: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x144834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x144838: 0xc046290  jal         func_118A40
    ctx->pc = 0x144838u;
    SET_GPR_U32(ctx, 31, 0x144840u);
    ctx->pc = 0x14483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144838u;
    // 0x14483c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x144838u, 0x144840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144840u;
label_144840:
    // 0x144840: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144844: 0xc046256  jal         func_118958
    ctx->pc = 0x144844u;
    SET_GPR_U32(ctx, 31, 0x14484Cu);
    ctx->pc = 0x144848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144844u;
    // 0x144848: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x144844u, 0x14484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14484Cu;
label_14484c:
    // 0x14484c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14484Cu;
    {
        const bool branch_taken_0x14484c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14484Cu;
        // 0x144850: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14484c) {
            ctx->pc = 0x144874u;
            goto label_144874;
        }
    }
    ctx->pc = 0x144854u;
label_144854:
    // 0x144854: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x144854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x144858: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x144858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14485c: 0xc046290  jal         func_118A40
    ctx->pc = 0x14485Cu;
    SET_GPR_U32(ctx, 31, 0x144864u);
    ctx->pc = 0x144860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14485Cu;
    // 0x144860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x14485Cu, 0x144864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144864u;
label_144864:
    // 0x144864: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144868: 0xc046256  jal         func_118958
    ctx->pc = 0x144868u;
    SET_GPR_U32(ctx, 31, 0x144870u);
    ctx->pc = 0x14486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144868u;
    // 0x14486c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x144868u, 0x144870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144870u;
label_144870:
    // 0x144870: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x144870u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_144874:
    // 0x144874: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x144874u;
    SET_GPR_U32(ctx, 31, 0x14487Cu);
    ctx->pc = 0x144878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144874u;
    // 0x144878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x144874u, 0x14487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14487Cu;
label_14487c:
    // 0x14487c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14487cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144880: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x144880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144884: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x144884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144888: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x144888u;
    SET_GPR_U32(ctx, 31, 0x144890u);
    ctx->pc = 0x14488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144888u;
    // 0x14488c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x144888u, 0x144890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144890u;
label_144890:
    // 0x144890: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x144890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144894: 0xc043c56  jal         func_10F158
    ctx->pc = 0x144894u;
    SET_GPR_U32(ctx, 31, 0x14489Cu);
    ctx->pc = 0x144898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144894u;
    // 0x144898: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x144894u, 0x14489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14489Cu;
label_14489c:
    // 0x14489c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14489cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1448a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1448a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1448a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1448a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1448a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1448a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1448ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1448acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1448b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1448b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1448b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1448b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1448b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1448B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1448BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1448B8u;
        // 0x1448bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1448B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1448C0u;
}
