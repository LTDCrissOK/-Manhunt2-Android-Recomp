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

// Function: sub_001066E0
// Address: 0x1066e0 - 0x1067d8
void sub_001066E0_0x1066e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001066E0_0x1066e0");
#endif

    switch (ctx->pc) {
        case 0x106718u: goto label_106718;
        case 0x106720u: goto label_106720;
        case 0x106758u: goto label_106758;
        case 0x10678cu: goto label_10678c;
        default: break;
    }

    ctx->pc = 0x1066e0u;

    // 0x1066e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1066e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1066e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1066e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1066e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1066e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1066ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1066ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1066f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1066f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1066f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1066f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1066fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1066fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106700: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x106700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x106704: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x106704u;
    {
        const bool branch_taken_0x106704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106704u;
        // 0x106708: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106704) {
            ctx->pc = 0x1067B8u;
            goto label_1067b8;
        }
    }
    ctx->pc = 0x10670Cu;
    // 0x10670c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x10670Cu;
    {
        const bool branch_taken_0x10670c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10670Cu;
        // 0x106710: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10670c) {
            ctx->pc = 0x1067B8u;
            goto label_1067b8;
        }
    }
    ctx->pc = 0x106714u;
    // 0x106714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106718:
    // 0x106718: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x106718u;
    SET_GPR_U32(ctx, 31, 0x106720u);
    ctx->pc = 0x10671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106718u;
    // 0x10671c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x106718u, 0x106720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106720u;
label_106720:
    // 0x106720: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106724: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x106724u;
    {
        const bool branch_taken_0x106724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x106728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106724u;
        // 0x106728: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106724) {
            ctx->pc = 0x1067A4u;
            goto label_1067a4;
        }
    }
    ctx->pc = 0x10672Cu;
    // 0x10672c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106730: 0x5453001d  bnel        $v0, $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x106730u;
    {
        const bool branch_taken_0x106730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x106730) {
            ctx->pc = 0x106734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106730u;
            // 0x106734: 0x92220022  lbu         $v0, 0x22($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1067A8u;
            goto label_1067a8;
        }
    }
    ctx->pc = 0x106738u;
    // 0x106738: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x106738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x10673c: 0x5080001f  beql        $a0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x10673Cu;
    {
        const bool branch_taken_0x10673c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10673c) {
            ctx->pc = 0x106740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10673Cu;
            // 0x106740: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1067BCu;
            goto label_1067bc;
        }
    }
    ctx->pc = 0x106744u;
    // 0x106744: 0x80860004  lb          $a2, 0x4($a0)
    ctx->pc = 0x106744u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x106748: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x106748u;
    {
        const bool branch_taken_0x106748 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106748u;
        // 0x10674c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106748) {
            ctx->pc = 0x1067A4u;
            goto label_1067a4;
        }
    }
    ctx->pc = 0x106750u;
    // 0x106750: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x106750u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x106754: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_106758:
    // 0x106758: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x106758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10675c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x10675cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106760: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x106760u;
    {
        const bool branch_taken_0x106760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106760u;
        // 0x106764: 0x8ce395a8  lw          $v1, -0x6A58($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294940072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106760) {
            ctx->pc = 0x1067B8u;
            goto label_1067b8;
        }
    }
    ctx->pc = 0x106768u;
    // 0x106768: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x106768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10676c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x106770: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x106770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106774: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x106774u;
    {
        const bool branch_taken_0x106774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106774) {
            ctx->pc = 0x106778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106774u;
            // 0x106778: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106794u;
            goto label_106794;
        }
    }
    ctx->pc = 0x10677Cu;
    // 0x10677c: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x10677Cu;
    {
        const bool branch_taken_0x10677c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x10677c) {
            ctx->pc = 0x106780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10677Cu;
            // 0x106780: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106794u;
            goto label_106794;
        }
    }
    ctx->pc = 0x106784u;
    // 0x106784: 0xc040036  jal         func_1000D8
    ctx->pc = 0x106784u;
    SET_GPR_U32(ctx, 31, 0x10678Cu);
    ctx->pc = 0x1000D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1000D8u, 0x106784u, 0x10678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10678Cu;
label_10678c:
    // 0x10678c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10678Cu;
    {
        const bool branch_taken_0x10678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10678Cu;
        // 0x106790: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10678c) {
            ctx->pc = 0x1067BCu;
            goto label_1067bc;
        }
    }
    ctx->pc = 0x106794u;
label_106794:
    // 0x106794: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x106794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x106798: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x106798u;
    {
        const bool branch_taken_0x106798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106798) {
            ctx->pc = 0x10679Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106798u;
            // 0x10679c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106758;
        }
    }
    ctx->pc = 0x1067A0u;
    // 0x1067a0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1067a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1067a4:
    // 0x1067a4: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x1067a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_1067a8:
    // 0x1067a8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1067a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1067ac: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1067acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1067b0: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1067B0u;
    {
        const bool branch_taken_0x1067b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1067b0) {
            ctx->pc = 0x1067B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1067B0u;
            // 0x1067b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106718;
        }
    }
    ctx->pc = 0x1067B8u;
label_1067b8:
    // 0x1067b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1067b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1067bc:
    // 0x1067bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1067bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1067c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1067c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1067c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1067c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1067c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1067c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1067cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1067CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1067D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067CCu;
        // 0x1067d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1067CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1067D4u;
    // 0x1067d4: 0x0  nop
    ctx->pc = 0x1067d4u;
    // NOP
    ctx->pc = 0x1067d8u;
}
