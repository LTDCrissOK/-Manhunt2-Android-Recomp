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

// Function: sub_00172500
// Address: 0x172500 - 0x1726e0
void sub_00172500_0x172500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172500_0x172500");
#endif

    switch (ctx->pc) {
        case 0x172548u: goto label_172548;
        case 0x172570u: goto label_172570;
        case 0x1725a8u: goto label_1725a8;
        case 0x1725d8u: goto label_1725d8;
        case 0x172618u: goto label_172618;
        case 0x172620u: goto label_172620;
        case 0x172648u: goto label_172648;
        default: break;
    }

    ctx->pc = 0x172500u;

    // 0x172500: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x172500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x172504: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x172504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x172508: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x172508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17250c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x17250cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x172510: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x172510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x172514: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x172514u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172518: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x172518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17251c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17251cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x172520: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x172520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x172524: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x172524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x172528: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x172528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17252c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x17252cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x172530: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x172530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x172534: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x172534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x172538: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x172538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x17253c: 0x8ee20058  lw          $v0, 0x58($s7)
    ctx->pc = 0x17253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 88)));
    // 0x172540: 0xc0484da  jal         func_121368
    ctx->pc = 0x172540u;
    SET_GPR_U32(ctx, 31, 0x172548u);
    ctx->pc = 0x172544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172540u;
    // 0x172544: 0x8c45001c  lw          $a1, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121368u, 0x172540u, 0x172548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172548u;
label_172548:
    // 0x172548: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x172548u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17254c: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x17254Cu;
    {
        const bool branch_taken_0x17254c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x172550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17254Cu;
        // 0x172550: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17254c) {
            ctx->pc = 0x17255Cu;
            goto label_17255c;
        }
    }
    ctx->pc = 0x172554u;
    // 0x172554: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x172554u;
    {
        const bool branch_taken_0x172554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172554u;
        // 0x172558: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172554) {
            ctx->pc = 0x1726ACu;
            goto label_1726ac;
        }
    }
    ctx->pc = 0x17255Cu;
label_17255c:
    // 0x17255c: 0x92e20009  lbu         $v0, 0x9($s7)
    ctx->pc = 0x17255cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 9)));
    // 0x172560: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x172560u;
    {
        const bool branch_taken_0x172560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172560u;
        // 0x172564: 0x3c0b02d  daddu       $s6, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172560) {
            ctx->pc = 0x1726A8u;
            goto label_1726a8;
        }
    }
    ctx->pc = 0x172568u;
    // 0x172568: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x172568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x17256c: 0x0  nop
    ctx->pc = 0x17256cu;
    // NOP
label_172570:
    // 0x172570: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x172570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x172574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172578: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x172578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17257c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x17257Cu;
    {
        const bool branch_taken_0x17257c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17257Cu;
        // 0x172580: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17257c) {
            ctx->pc = 0x172688u;
            goto label_172688;
        }
    }
    ctx->pc = 0x172584u;
    // 0x172584: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x172584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x172588: 0x24849c14  addiu       $a0, $a0, -0x63EC
    ctx->pc = 0x172588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941716));
    // 0x17258c: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x17258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x172590: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x172590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x172594: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x172594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172598: 0x1080003b  beqz        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x172598u;
    {
        const bool branch_taken_0x172598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172598u;
        // 0x17259c: 0x307e00ff  andi        $fp, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172598) {
            ctx->pc = 0x172688u;
            goto label_172688;
        }
    }
    ctx->pc = 0x1725A0u;
    // 0x1725a0: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x1725A0u;
    SET_GPR_U32(ctx, 31, 0x1725A8u);
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x1725A0u, 0x1725A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725A8u;
label_1725a8:
    // 0x1725a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1725a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725ac: 0x12600036  beqz        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x1725ACu;
    {
        const bool branch_taken_0x1725ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1725B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725ACu;
        // 0x1725b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1725ac) {
            ctx->pc = 0x172688u;
            goto label_172688;
        }
    }
    ctx->pc = 0x1725B4u;
    // 0x1725b4: 0x92700020  lbu         $s0, 0x20($s3)
    ctx->pc = 0x1725b4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1725b8: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x1725b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1725bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1725BCu;
    {
        const bool branch_taken_0x1725bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1725C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725BCu;
        // 0x1725c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1725bc) {
            ctx->pc = 0x1725F8u;
            goto label_1725f8;
        }
    }
    ctx->pc = 0x1725C4u;
    // 0x1725c4: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1725c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1725c8: 0x5050000b  beql        $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1725C8u;
    {
        const bool branch_taken_0x1725c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1725c8) {
            ctx->pc = 0x1725CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1725C8u;
            // 0x1725cc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1725F8u;
            goto label_1725f8;
        }
    }
    ctx->pc = 0x1725D0u;
    // 0x1725d0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1725d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1725d4: 0x0  nop
    ctx->pc = 0x1725d4u;
    // NOP
label_1725d8:
    // 0x1725d8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1725d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1725dc: 0x94182b  sltu        $v1, $a0, $s4
    ctx->pc = 0x1725dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1725e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1725E0u;
    {
        const bool branch_taken_0x1725e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1725E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725E0u;
        // 0x1725e4: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1725e0) {
            ctx->pc = 0x1725F8u;
            goto label_1725f8;
        }
    }
    ctx->pc = 0x1725E8u;
    // 0x1725e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1725e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1725ec: 0x1470fffa  bne         $v1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1725ECu;
    {
        const bool branch_taken_0x1725ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x1725F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725ECu;
        // 0x1725f0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1725ec) {
            ctx->pc = 0x1725D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1725d8;
        }
    }
    ctx->pc = 0x1725F4u;
    // 0x1725f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1725f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1725f8:
    // 0x1725f8: 0x16200024  bnez        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1725F8u;
    {
        const bool branch_taken_0x1725f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1725FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1725F8u;
        // 0x1725fc: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1725f8) {
            ctx->pc = 0x17268Cu;
            goto label_17268c;
        }
    }
    ctx->pc = 0x172600u;
    // 0x172600: 0x92750022  lbu         $s5, 0x22($s3)
    ctx->pc = 0x172600u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x172604: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x172604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x172608: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x172608u;
    {
        const bool branch_taken_0x172608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172608u;
        // 0x17260c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172608) {
            ctx->pc = 0x172680u;
            goto label_172680;
        }
    }
    ctx->pc = 0x172610u;
    // 0x172610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x172610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172614: 0x0  nop
    ctx->pc = 0x172614u;
    // NOP
label_172618:
    // 0x172618: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x172618u;
    SET_GPR_U32(ctx, 31, 0x172620u);
    ctx->pc = 0x17261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172618u;
    // 0x17261c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x172618u, 0x172620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172620u;
label_172620:
    // 0x172620: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x172620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172624: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x172624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x172628: 0x10500011  beq         $v0, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x172628u;
    {
        const bool branch_taken_0x172628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x17262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172628u;
        // 0x17262c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172628) {
            ctx->pc = 0x172670u;
            goto label_172670;
        }
    }
    ctx->pc = 0x172630u;
    // 0x172630: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x172630u;
    {
        const bool branch_taken_0x172630 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x172634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172630u;
        // 0x172634: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172630) {
            ctx->pc = 0x172668u;
            goto label_172668;
        }
    }
    ctx->pc = 0x172638u;
    // 0x172638: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x172638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17263c: 0x5050000a  beql        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x17263Cu;
    {
        const bool branch_taken_0x17263c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x17263c) {
            ctx->pc = 0x172640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17263Cu;
            // 0x172640: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172668u;
            goto label_172668;
        }
    }
    ctx->pc = 0x172644u;
    // 0x172644: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x172644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_172648:
    // 0x172648: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x172648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17264c: 0x94182b  sltu        $v1, $a0, $s4
    ctx->pc = 0x17264cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x172650: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x172650u;
    {
        const bool branch_taken_0x172650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172650u;
        // 0x172654: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172650) {
            ctx->pc = 0x172668u;
            goto label_172668;
        }
    }
    ctx->pc = 0x172658u;
    // 0x172658: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x172658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17265c: 0x1470fffa  bne         $v1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17265Cu;
    {
        const bool branch_taken_0x17265c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x172660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17265Cu;
        // 0x172660: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17265c) {
            ctx->pc = 0x172648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172648;
        }
    }
    ctx->pc = 0x172664u;
    // 0x172664: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x172664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172668:
    // 0x172668: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x172668u;
    {
        const bool branch_taken_0x172668 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172668u;
        // 0x17266c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172668) {
            ctx->pc = 0x172688u;
            goto label_172688;
        }
    }
    ctx->pc = 0x172670u;
label_172670:
    // 0x172670: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x172670u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x172674: 0x255182b  sltu        $v1, $s2, $s5
    ctx->pc = 0x172674u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x172678: 0x5460ffe7  bnel        $v1, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x172678u;
    {
        const bool branch_taken_0x172678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172678) {
            ctx->pc = 0x17267Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172678u;
            // 0x17267c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172618;
        }
    }
    ctx->pc = 0x172680u;
label_172680:
    // 0x172680: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x172680u;
    {
        const bool branch_taken_0x172680 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x172684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172680u;
        // 0x172684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172680) {
            ctx->pc = 0x1726ACu;
            goto label_1726ac;
        }
    }
    ctx->pc = 0x172688u;
label_172688:
    // 0x172688: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x172688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_17268c:
    // 0x17268c: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x17268cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x172690: 0x2ec30010  sltiu       $v1, $s6, 0x10
    ctx->pc = 0x172690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x172694: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x172694u;
    {
        const bool branch_taken_0x172694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172694u;
        // 0x172698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172694) {
            ctx->pc = 0x1726ACu;
            goto label_1726ac;
        }
    }
    ctx->pc = 0x17269Cu;
    // 0x17269c: 0x92e20009  lbu         $v0, 0x9($s7)
    ctx->pc = 0x17269cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 9)));
    // 0x1726a0: 0x57c2ffb3  bnel        $fp, $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1726A0u;
    {
        const bool branch_taken_0x1726a0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1726a0) {
            ctx->pc = 0x1726A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1726A0u;
            // 0x1726a4: 0x8ee30004  lw          $v1, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172570;
        }
    }
    ctx->pc = 0x1726A8u;
label_1726a8:
    // 0x1726a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1726a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1726ac:
    // 0x1726ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1726acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1726b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1726b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1726b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1726b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1726b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1726b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1726bc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1726bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1726c0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1726c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1726c4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1726c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1726c8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1726c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1726cc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1726ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1726d0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1726d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1726d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1726D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1726D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726D4u;
        // 0x1726d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1726D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1726DCu;
    // 0x1726dc: 0x0  nop
    ctx->pc = 0x1726dcu;
    // NOP
    ctx->pc = 0x1726e0u;
}
