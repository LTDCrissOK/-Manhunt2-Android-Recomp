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

// Function: sub_001486C8
// Address: 0x1486c8 - 0x148818
void sub_001486C8_0x1486c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001486C8_0x1486c8");
#endif

    switch (ctx->pc) {
        case 0x1486e4u: goto label_1486e4;
        case 0x1486fcu: goto label_1486fc;
        case 0x148710u: goto label_148710;
        case 0x148728u: goto label_148728;
        case 0x148734u: goto label_148734;
        case 0x148740u: goto label_148740;
        case 0x148758u: goto label_148758;
        case 0x148768u: goto label_148768;
        case 0x1487b8u: goto label_1487b8;
        case 0x1487c4u: goto label_1487c4;
        case 0x1487e0u: goto label_1487e0;
        case 0x1487f4u: goto label_1487f4;
        case 0x1487fcu: goto label_1487fc;
        default: break;
    }

    ctx->pc = 0x1486c8u;

    // 0x1486c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1486c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1486cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1486ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1486d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1486d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1486d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1486d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1486d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1486d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1486dc: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x1486DCu;
    SET_GPR_U32(ctx, 31, 0x1486E4u);
    ctx->pc = 0x1486E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1486DCu;
    // 0x1486e0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x1486DCu, 0x1486E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486E4u;
label_1486e4:
    // 0x1486e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1486e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1486e8: 0x14430045  bne         $v0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1486E8u;
    {
        const bool branch_taken_0x1486e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1486ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486E8u;
        // 0x1486ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1486e8) {
            ctx->pc = 0x148800u;
            goto label_148800;
        }
    }
    ctx->pc = 0x1486F0u;
    // 0x1486f0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1486f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1486f4: 0xc05238e  jal         func_148E38
    ctx->pc = 0x1486F4u;
    SET_GPR_U32(ctx, 31, 0x1486FCu);
    ctx->pc = 0x1486F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1486F4u;
    // 0x1486f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E38u, 0x1486F4u, 0x1486FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486FCu;
label_1486fc:
    // 0x1486fc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1486fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x148700: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x148700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148708: 0xc052388  jal         func_148E20
    ctx->pc = 0x148708u;
    SET_GPR_U32(ctx, 31, 0x148710u);
    ctx->pc = 0x14870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148708u;
    // 0x14870c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E20u, 0x148708u, 0x148710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148710u;
label_148710:
    // 0x148710: 0x2622fffe  addiu       $v0, $s1, -0x2
    ctx->pc = 0x148710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x148714: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x148714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x148718: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x148718u;
    {
        const bool branch_taken_0x148718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148718u;
        // 0x14871c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148718) {
            ctx->pc = 0x148748u;
            goto label_148748;
        }
    }
    ctx->pc = 0x148720u;
    // 0x148720: 0xc0525ba  jal         func_1496E8
    ctx->pc = 0x148720u;
    SET_GPR_U32(ctx, 31, 0x148728u);
    ctx->pc = 0x148724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148720u;
    // 0x148724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1496E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1496E8u, 0x148720u, 0x148728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148728u;
label_148728:
    // 0x148728: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x148728u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14872c: 0xc05248c  jal         func_149230
    ctx->pc = 0x14872Cu;
    SET_GPR_U32(ctx, 31, 0x148734u);
    ctx->pc = 0x148730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14872Cu;
    // 0x148730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149230u, 0x14872Cu, 0x148734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148734u;
label_148734:
    // 0x148734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148738: 0xc052634  jal         func_1498D0
    ctx->pc = 0x148738u;
    SET_GPR_U32(ctx, 31, 0x148740u);
    ctx->pc = 0x14873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148738u;
    // 0x14873c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1498D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1498D0u, 0x148738u, 0x148740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148740u;
label_148740:
    // 0x148740: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x148740u;
    {
        const bool branch_taken_0x148740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148740u;
        // 0x148744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148740) {
            ctx->pc = 0x148800u;
            goto label_148800;
        }
    }
    ctx->pc = 0x148748u;
label_148748:
    // 0x148748: 0x16220027  bne         $s1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x148748u;
    {
        const bool branch_taken_0x148748 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x14874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148748u;
        // 0x14874c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148748) {
            ctx->pc = 0x1487E8u;
            goto label_1487e8;
        }
    }
    ctx->pc = 0x148750u;
    // 0x148750: 0xc04d97a  jal         func_1365E8
    ctx->pc = 0x148750u;
    SET_GPR_U32(ctx, 31, 0x148758u);
    ctx->pc = 0x148754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148750u;
    // 0x148754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365E8u, 0x148750u, 0x148758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148758u;
label_148758:
    // 0x148758: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x148758u;
    {
        const bool branch_taken_0x148758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148758u;
        // 0x14875c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148758) {
            ctx->pc = 0x1487E8u;
            goto label_1487e8;
        }
    }
    ctx->pc = 0x148760u;
    // 0x148760: 0xc04d980  jal         func_136600
    ctx->pc = 0x148760u;
    SET_GPR_U32(ctx, 31, 0x148768u);
    ctx->pc = 0x148764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148760u;
    // 0x148764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136600u, 0x148760u, 0x148768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148768u;
label_148768:
    // 0x148768: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x148768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14876c: 0x54c0001e  bnel        $a2, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x14876Cu;
    {
        const bool branch_taken_0x14876c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x14876c) {
            ctx->pc = 0x148770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14876Cu;
            // 0x148770: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1487E8u;
            goto label_1487e8;
        }
    }
    ctx->pc = 0x148774u;
    // 0x148774: 0x9207046c  lbu         $a3, 0x46C($s0)
    ctx->pc = 0x148774u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x148778: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x148778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x14877c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14877cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x148780: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x148780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x148784: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x148784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x148788: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x148788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14878c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14878cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148790: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x148790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148794: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x148794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x148798: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x148798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x14879c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14879Cu;
    {
        const bool branch_taken_0x14879c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14879c) {
            ctx->pc = 0x1487C8u;
            goto label_1487c8;
        }
    }
    ctx->pc = 0x1487A4u;
    // 0x1487a4: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x1487a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x1487a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1487A8u;
    {
        const bool branch_taken_0x1487a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1487ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1487A8u;
        // 0x1487ac: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487a8) {
            ctx->pc = 0x1487C8u;
            goto label_1487c8;
        }
    }
    ctx->pc = 0x1487B0u;
    // 0x1487b0: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x1487B0u;
    SET_GPR_U32(ctx, 31, 0x1487B8u);
    ctx->pc = 0x1487B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1487B0u;
    // 0x1487b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x1487B0u, 0x1487B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487B8u;
label_1487b8:
    // 0x1487b8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1487b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1487bc: 0xc04d974  jal         func_1365D0
    ctx->pc = 0x1487BCu;
    SET_GPR_U32(ctx, 31, 0x1487C4u);
    ctx->pc = 0x1487C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1487BCu;
    // 0x1487c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365D0u, 0x1487BCu, 0x1487C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487C4u;
label_1487c4:
    // 0x1487c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1487c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1487c8:
    // 0x1487c8: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1487C8u;
    {
        const bool branch_taken_0x1487c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1487c8) {
            ctx->pc = 0x1487CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1487C8u;
            // 0x1487cc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1487E8u;
            goto label_1487e8;
        }
    }
    ctx->pc = 0x1487D0u;
    // 0x1487d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1487d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1487d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1487d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1487d8: 0xc052388  jal         func_148E20
    ctx->pc = 0x1487D8u;
    SET_GPR_U32(ctx, 31, 0x1487E0u);
    ctx->pc = 0x1487DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1487D8u;
    // 0x1487dc: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E20u, 0x1487D8u, 0x1487E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487E0u;
label_1487e0:
    // 0x1487e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1487E0u;
    {
        const bool branch_taken_0x1487e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1487E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1487E0u;
        // 0x1487e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1487e0) {
            ctx->pc = 0x148800u;
            goto label_148800;
        }
    }
    ctx->pc = 0x1487E8u;
label_1487e8:
    // 0x1487e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1487e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1487ec: 0xc052440  jal         func_149100
    ctx->pc = 0x1487ECu;
    SET_GPR_U32(ctx, 31, 0x1487F4u);
    ctx->pc = 0x1487F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1487ECu;
    // 0x1487f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149100u, 0x1487ECu, 0x1487F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487F4u;
label_1487f4:
    // 0x1487f4: 0xc0525fe  jal         func_1497F8
    ctx->pc = 0x1487F4u;
    SET_GPR_U32(ctx, 31, 0x1487FCu);
    ctx->pc = 0x1487F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1487F4u;
    // 0x1487f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1497F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1497F8u, 0x1487F4u, 0x1487FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1487FCu;
label_1487fc:
    // 0x1487fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1487fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148800:
    // 0x148800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x148800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x148804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x148808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14880c: 0x3e00008  jr          $ra
    ctx->pc = 0x14880Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14880Cu;
        // 0x148810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14880Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148814u;
    // 0x148814: 0x0  nop
    ctx->pc = 0x148814u;
    // NOP
    ctx->pc = 0x148818u;
}
