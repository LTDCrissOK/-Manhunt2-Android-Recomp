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

// Function: sub_003776E8
// Address: 0x3776e8 - 0x377850
void sub_003776E8_0x3776e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003776E8_0x3776e8");
#endif

    switch (ctx->pc) {
        case 0x377718u: goto label_377718;
        case 0x377724u: goto label_377724;
        case 0x377730u: goto label_377730;
        case 0x37773cu: goto label_37773c;
        case 0x377748u: goto label_377748;
        case 0x377770u: goto label_377770;
        case 0x37777cu: goto label_37777c;
        case 0x37779cu: goto label_37779c;
        case 0x3777b0u: goto label_3777b0;
        case 0x3777bcu: goto label_3777bc;
        case 0x3777c0u: goto label_3777c0;
        case 0x3777ccu: goto label_3777cc;
        case 0x3777e8u: goto label_3777e8;
        case 0x3777f4u: goto label_3777f4;
        case 0x377810u: goto label_377810;
        case 0x37781cu: goto label_37781c;
        case 0x377834u: goto label_377834;
        default: break;
    }

    ctx->pc = 0x3776e8u;

    // 0x3776e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3776e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3776ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3776ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3776f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3776f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3776f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3776f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3776f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3776f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3776fc: 0x14a2004d  bne         $a1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x3776FCu;
    {
        const bool branch_taken_0x3776fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x377700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3776FCu;
        // 0x377700: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3776fc) {
            ctx->pc = 0x377834u;
            goto label_377834;
        }
    }
    ctx->pc = 0x377704u;
    // 0x377704: 0x1080004c  beqz        $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x377704u;
    {
        const bool branch_taken_0x377704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x377708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377704u;
        // 0x377708: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377704) {
            ctx->pc = 0x377838u;
            goto label_377838;
        }
    }
    ctx->pc = 0x37770Cu;
    // 0x37770c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x37770cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x377710: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x377710u;
    SET_GPR_U32(ctx, 31, 0x377718u);
    ctx->pc = 0x377714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377710u;
    // 0x377714: 0x24845b40  addiu       $a0, $a0, 0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x377710u, 0x377718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377718u;
label_377718:
    // 0x377718: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x377718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x37771c: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x37771Cu;
    SET_GPR_U32(ctx, 31, 0x377724u);
    ctx->pc = 0x377720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37771Cu;
    // 0x377720: 0x24845b80  addiu       $a0, $a0, 0x5B80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x37771Cu, 0x377724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377724u;
label_377724:
    // 0x377724: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x377724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x377728: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x377728u;
    SET_GPR_U32(ctx, 31, 0x377730u);
    ctx->pc = 0x37772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377728u;
    // 0x37772c: 0x24845bc0  addiu       $a0, $a0, 0x5BC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x377728u, 0x377730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377730u;
label_377730:
    // 0x377730: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x377730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x377734: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x377734u;
    SET_GPR_U32(ctx, 31, 0x37773Cu);
    ctx->pc = 0x377738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377734u;
    // 0x377738: 0x24845c00  addiu       $a0, $a0, 0x5C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x377734u, 0x37773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37773Cu;
label_37773c:
    // 0x37773c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x377740: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x377740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x377744: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x377744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_377748:
    // 0x377748: 0x0  nop
    ctx->pc = 0x377748u;
    // NOP
    // 0x37774c: 0x0  nop
    ctx->pc = 0x37774cu;
    // NOP
    // 0x377750: 0x0  nop
    ctx->pc = 0x377750u;
    // NOP
    // 0x377754: 0x0  nop
    ctx->pc = 0x377754u;
    // NOP
    // 0x377758: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x377758u;
    {
        const bool branch_taken_0x377758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x37775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377758u;
        // 0x37775c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377758) {
            ctx->pc = 0x377748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377748;
        }
    }
    ctx->pc = 0x377760u;
    // 0x377760: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x377760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x377764: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x377764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x377768: 0x24515c80  addiu       $s1, $v0, 0x5C80
    ctx->pc = 0x377768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23680));
    // 0x37776c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x37776cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_377770:
    // 0x377770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377774: 0xc0dedb0  jal         func_37B6C0
    ctx->pc = 0x377774u;
    SET_GPR_U32(ctx, 31, 0x37777Cu);
    ctx->pc = 0x377778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377774u;
    // 0x377778: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6C0u, 0x377774u, 0x37777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37777Cu;
label_37777c:
    // 0x37777c: 0x0  nop
    ctx->pc = 0x37777cu;
    // NOP
    // 0x377780: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x377780u;
    {
        const bool branch_taken_0x377780 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x377784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377780u;
        // 0x377784: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377780) {
            ctx->pc = 0x377770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377770;
        }
    }
    ctx->pc = 0x377788u;
    // 0x377788: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x377788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x37778c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x37778cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x377790: 0x24845ce0  addiu       $a0, $a0, 0x5CE0
    ctx->pc = 0x377790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23776));
    // 0x377794: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x377794u;
    SET_GPR_U32(ctx, 31, 0x37779Cu);
    ctx->pc = 0x377798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377794u;
    // 0x377798: 0x24515db0  addiu       $s1, $v0, 0x5DB0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x377794u, 0x37779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37779Cu;
label_37779c:
    // 0x37779c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x37779cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3777a0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3777a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x3777a4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x3777a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3777a8: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x3777A8u;
    SET_GPR_U32(ctx, 31, 0x3777B0u);
    ctx->pc = 0x3777ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3777A8u;
    // 0x3777ac: 0x24845d20  addiu       $a0, $a0, 0x5D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x3777A8u, 0x3777B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3777B0u;
label_3777b0:
    // 0x3777b0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3777b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x3777b4: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x3777B4u;
    SET_GPR_U32(ctx, 31, 0x3777BCu);
    ctx->pc = 0x3777B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3777B4u;
    // 0x3777b8: 0x24845d60  addiu       $a0, $a0, 0x5D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x3777B4u, 0x3777BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3777BCu;
label_3777bc:
    // 0x3777bc: 0x0  nop
    ctx->pc = 0x3777bcu;
    // NOP
label_3777c0:
    // 0x3777c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3777c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3777c4: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x3777C4u;
    SET_GPR_U32(ctx, 31, 0x3777CCu);
    ctx->pc = 0x3777C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3777C4u;
    // 0x3777c8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x3777C4u, 0x3777CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3777CCu;
label_3777cc:
    // 0x3777cc: 0x0  nop
    ctx->pc = 0x3777ccu;
    // NOP
    // 0x3777d0: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3777D0u;
    {
        const bool branch_taken_0x3777d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x3777D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3777D0u;
        // 0x3777d4: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3777d0) {
            ctx->pc = 0x3777C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3777c0;
        }
    }
    ctx->pc = 0x3777D8u;
    // 0x3777d8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3777d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3777dc: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x3777dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3777e0: 0x24515e70  addiu       $s1, $v0, 0x5E70
    ctx->pc = 0x3777e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24176));
    // 0x3777e4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x3777e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3777e8:
    // 0x3777e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3777e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3777ec: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x3777ECu;
    SET_GPR_U32(ctx, 31, 0x3777F4u);
    ctx->pc = 0x3777F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3777ECu;
    // 0x3777f0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x3777ECu, 0x3777F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3777F4u;
label_3777f4:
    // 0x3777f4: 0x0  nop
    ctx->pc = 0x3777f4u;
    // NOP
    // 0x3777f8: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3777F8u;
    {
        const bool branch_taken_0x3777f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x3777FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3777F8u;
        // 0x3777fc: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3777f8) {
            ctx->pc = 0x3777E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3777e8;
        }
    }
    ctx->pc = 0x377800u;
    // 0x377800: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x377800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x377804: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x377804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x377808: 0x24515f30  addiu       $s1, $v0, 0x5F30
    ctx->pc = 0x377808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24368));
    // 0x37780c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x37780cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_377810:
    // 0x377810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377814: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x377814u;
    SET_GPR_U32(ctx, 31, 0x37781Cu);
    ctx->pc = 0x377818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377814u;
    // 0x377818: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x377814u, 0x37781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37781Cu;
label_37781c:
    // 0x37781c: 0x0  nop
    ctx->pc = 0x37781cu;
    // NOP
    // 0x377820: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x377820u;
    {
        const bool branch_taken_0x377820 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x377824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377820u;
        // 0x377824: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377820) {
            ctx->pc = 0x377810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377810;
        }
    }
    ctx->pc = 0x377828u;
    // 0x377828: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x377828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x37782c: 0xc0dec2a  jal         func_37B0A8
    ctx->pc = 0x37782Cu;
    SET_GPR_U32(ctx, 31, 0x377834u);
    ctx->pc = 0x377830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37782Cu;
    // 0x377830: 0x24845ff0  addiu       $a0, $a0, 0x5FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0A8u, 0x37782Cu, 0x377834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377834u;
label_377834:
    // 0x377834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x377834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_377838:
    // 0x377838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x377838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37783c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x37783cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377840: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x377840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x377844: 0x3e00008  jr          $ra
    ctx->pc = 0x377844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377844u;
        // 0x377848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37784Cu;
    // 0x37784c: 0x0  nop
    ctx->pc = 0x37784cu;
    // NOP
    ctx->pc = 0x377850u;
}
