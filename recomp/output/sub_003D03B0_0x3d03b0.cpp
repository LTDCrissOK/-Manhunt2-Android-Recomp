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

// Function: sub_003D03B0
// Address: 0x3d03b0 - 0x3d0490
void sub_003D03B0_0x3d03b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D03B0_0x3d03b0");
#endif

    switch (ctx->pc) {
        case 0x3d03c8u: goto label_3d03c8;
        case 0x3d03e8u: goto label_3d03e8;
        case 0x3d0400u: goto label_3d0400;
        case 0x3d0408u: goto label_3d0408;
        case 0x3d0410u: goto label_3d0410;
        case 0x3d041cu: goto label_3d041c;
        case 0x3d0420u: goto label_3d0420;
        case 0x3d0428u: goto label_3d0428;
        case 0x3d0438u: goto label_3d0438;
        case 0x3d0460u: goto label_3d0460;
        case 0x3d0468u: goto label_3d0468;
        default: break;
    }

    ctx->pc = 0x3d03b0u;

    // 0x3d03b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d03b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d03b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d03b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d03b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d03b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d03bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d03bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d03c0: 0xc0f40d2  jal         func_3D0348
    ctx->pc = 0x3D03C0u;
    SET_GPR_U32(ctx, 31, 0x3D03C8u);
    ctx->pc = 0x3D03C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D03C0u;
    // 0x3d03c4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0348u, 0x3D03C0u, 0x3D03C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D03C8u;
label_3d03c8:
    // 0x3d03c8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3D03C8u;
    {
        const bool branch_taken_0x3d03c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D03CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D03C8u;
        // 0x3d03cc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d03c8) {
            ctx->pc = 0x3D0444u;
            goto label_3d0444;
        }
    }
    ctx->pc = 0x3D03D0u;
    // 0x3d03d0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x3d03d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d03d4: 0x2450de78  addiu       $s0, $v0, -0x2188
    ctx->pc = 0x3d03d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958712));
    // 0x3d03d8: 0x8c44de78  lw          $a0, -0x2188($v0)
    ctx->pc = 0x3d03d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958712)));
    // 0x3d03dc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3d03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d03e0: 0xc0f40b8  jal         func_3D02E0
    ctx->pc = 0x3D03E0u;
    SET_GPR_U32(ctx, 31, 0x3D03E8u);
    ctx->pc = 0x3D03E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D03E0u;
    // 0x3d03e4: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D02E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D02E0u, 0x3D03E0u, 0x3D03E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D03E8u;
label_3d03e8:
    // 0x3d03e8: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x3d03e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x3d03ec: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x3d03ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x3d03f0: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x3d03f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x3d03f4: 0x24a5d6d0  addiu       $a1, $a1, -0x2930
    ctx->pc = 0x3d03f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956752));
    // 0x3d03f8: 0xc0f40bc  jal         func_3D02F0
    ctx->pc = 0x3D03F8u;
    SET_GPR_U32(ctx, 31, 0x3D0400u);
    ctx->pc = 0x3D03FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D03F8u;
    // 0x3d03fc: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D02F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D02F0u, 0x3D03F8u, 0x3D0400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0400u;
label_3d0400:
    // 0x3d0400: 0xc0f2708  jal         func_3C9C20
    ctx->pc = 0x3D0400u;
    SET_GPR_U32(ctx, 31, 0x3D0408u);
    ctx->pc = 0x3D0404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0400u;
    // 0x3d0404: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9C20u, 0x3D0400u, 0x3D0408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0408u;
label_3d0408:
    // 0x3d0408: 0xc0f2708  jal         func_3C9C20
    ctx->pc = 0x3D0408u;
    SET_GPR_U32(ctx, 31, 0x3D0410u);
    ctx->pc = 0x3D040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0408u;
    // 0x3d040c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9C20u, 0x3D0408u, 0x3D0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0410u;
label_3d0410:
    // 0x3d0410: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3d0410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d0414: 0xc0f40b8  jal         func_3D02E0
    ctx->pc = 0x3D0414u;
    SET_GPR_U32(ctx, 31, 0x3D041Cu);
    ctx->pc = 0x3D0418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0414u;
    // 0x3d0418: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D02E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D02E0u, 0x3D0414u, 0x3D041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D041Cu;
label_3d041c:
    // 0x3d041c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3d041cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d0420:
    // 0x3d0420: 0xc0f40ce  jal         func_3D0338
    ctx->pc = 0x3D0420u;
    SET_GPR_U32(ctx, 31, 0x3D0428u);
    ctx->pc = 0x3D0424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0420u;
    // 0x3d0424: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0338u, 0x3D0420u, 0x3D0428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0428u;
label_3d0428:
    // 0x3d0428: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3d0428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d042c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d042cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0430: 0xc0f40b8  jal         func_3D02E0
    ctx->pc = 0x3D0430u;
    SET_GPR_U32(ctx, 31, 0x3D0438u);
    ctx->pc = 0x3D0434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0430u;
    // 0x3d0434: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D02E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D02E0u, 0x3D0430u, 0x3D0438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0438u;
label_3d0438:
    // 0x3d0438: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x3d0438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d043c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3D043Cu;
    {
        const bool branch_taken_0x3d043c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d043c) {
            ctx->pc = 0x3D0440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D043Cu;
            // 0x3d0440: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0420;
        }
    }
    ctx->pc = 0x3D0444u;
label_3d0444:
    // 0x3d0444: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d0444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d0448: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d0448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d044c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d044cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d0450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d0450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d0454: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0454u;
        // 0x3d0458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D045Cu;
    // 0x3d045c: 0x0  nop
    ctx->pc = 0x3d045cu;
    // NOP
label_3d0460:
    // 0x3d0460: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D0460u;
    {
        const bool branch_taken_0x3d0460 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0460u;
        // 0x3d0464: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0460) {
            ctx->pc = 0x3D0488u;
            goto label_3d0488;
        }
    }
    ctx->pc = 0x3D0468u;
label_3d0468:
    // 0x3d0468: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3d0468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d046c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3d046cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3d0470: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d0470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d0474: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3d0474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d0478: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3d0478u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d047c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d0480: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D0480u;
    {
        const bool branch_taken_0x3d0480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d0480) {
            ctx->pc = 0x3D0468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0468;
        }
    }
    ctx->pc = 0x3D0488u;
label_3d0488:
    // 0x3d0488: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0488u;
        // 0x3d048c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0490u;
}
