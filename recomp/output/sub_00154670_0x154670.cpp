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

// Function: sub_00154670
// Address: 0x154670 - 0x154738
void sub_00154670_0x154670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154670_0x154670");
#endif

    switch (ctx->pc) {
        case 0x15468cu: goto label_15468c;
        case 0x15469cu: goto label_15469c;
        case 0x1546b8u: goto label_1546b8;
        case 0x1546c8u: goto label_1546c8;
        case 0x1546dcu: goto label_1546dc;
        case 0x1546ecu: goto label_1546ec;
        case 0x1546fcu: goto label_1546fc;
        case 0x154710u: goto label_154710;
        case 0x154724u: goto label_154724;
        default: break;
    }

    ctx->pc = 0x154670u;

    // 0x154670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x154674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x154674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x154678: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x154678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15467c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15467cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x154680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x154680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154684: 0xc055250  jal         func_154940
    ctx->pc = 0x154684u;
    SET_GPR_U32(ctx, 31, 0x15468Cu);
    ctx->pc = 0x154688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154684u;
    // 0x154688: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154940u, 0x154684u, 0x15468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15468Cu;
label_15468c:
    // 0x15468c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x15468cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x154690: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x154690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154694: 0xc04d942  jal         func_136508
    ctx->pc = 0x154694u;
    SET_GPR_U32(ctx, 31, 0x15469Cu);
    ctx->pc = 0x154698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154694u;
    // 0x154698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136508u, 0x154694u, 0x15469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15469Cu;
label_15469c:
    // 0x15469c: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15469Cu;
    {
        const bool branch_taken_0x15469c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15469c) {
            ctx->pc = 0x1546A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15469Cu;
            // 0x1546a0: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1546C0u;
            goto label_1546c0;
        }
    }
    ctx->pc = 0x1546A4u;
    // 0x1546a4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1546A4u;
    {
        const bool branch_taken_0x1546a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1546a4) {
            ctx->pc = 0x1546A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1546A4u;
            // 0x1546a8: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1546F4u;
            goto label_1546f4;
        }
    }
    ctx->pc = 0x1546ACu;
    // 0x1546ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1546acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1546b0: 0xc05522a  jal         func_1548A8
    ctx->pc = 0x1546B0u;
    SET_GPR_U32(ctx, 31, 0x1546B8u);
    ctx->pc = 0x1546B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1546B0u;
    // 0x1546b4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1548A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1548A8u, 0x1546B0u, 0x1546B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1546B8u;
label_1546b8:
    // 0x1546b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1546B8u;
    {
        const bool branch_taken_0x1546b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546B8u;
        // 0x1546bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546b8) {
            ctx->pc = 0x154728u;
            goto label_154728;
        }
    }
    ctx->pc = 0x1546C0u;
label_1546c0:
    // 0x1546c0: 0xc055258  jal         func_154960
    ctx->pc = 0x1546C0u;
    SET_GPR_U32(ctx, 31, 0x1546C8u);
    ctx->pc = 0x1546C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1546C0u;
    // 0x1546c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154960u, 0x1546C0u, 0x1546C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1546C8u;
label_1546c8:
    // 0x1546c8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1546C8u;
    {
        const bool branch_taken_0x1546c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546C8u;
        // 0x1546cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546c8) {
            ctx->pc = 0x154728u;
            goto label_154728;
        }
    }
    ctx->pc = 0x1546D0u;
    // 0x1546d0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1546d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1546d4: 0xc0555ba  jal         func_1556E8
    ctx->pc = 0x1546D4u;
    SET_GPR_U32(ctx, 31, 0x1546DCu);
    ctx->pc = 0x1546D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1546D4u;
    // 0x1546d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1556E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1556E8u, 0x1546D4u, 0x1546DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1546DCu;
label_1546dc:
    // 0x1546dc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1546DCu;
    {
        const bool branch_taken_0x1546dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546DCu;
        // 0x1546e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546dc) {
            ctx->pc = 0x154724u;
            goto label_154724;
        }
    }
    ctx->pc = 0x1546E4u;
    // 0x1546e4: 0xc0555cc  jal         func_155730
    ctx->pc = 0x1546E4u;
    SET_GPR_U32(ctx, 31, 0x1546ECu);
    ctx->pc = 0x1546E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1546E4u;
    // 0x1546e8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155730u, 0x1546E4u, 0x1546ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1546ECu;
label_1546ec:
    // 0x1546ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1546ECu;
    {
        const bool branch_taken_0x1546ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546ECu;
        // 0x1546f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546ec) {
            ctx->pc = 0x154728u;
            goto label_154728;
        }
    }
    ctx->pc = 0x1546F4u;
label_1546f4:
    // 0x1546f4: 0xc04d948  jal         func_136520
    ctx->pc = 0x1546F4u;
    SET_GPR_U32(ctx, 31, 0x1546FCu);
    ctx->pc = 0x1546F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1546F4u;
    // 0x1546f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136520u, 0x1546F4u, 0x1546FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1546FCu;
label_1546fc:
    // 0x1546fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1546FCu;
    {
        const bool branch_taken_0x1546fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546FCu;
        // 0x154700: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546fc) {
            ctx->pc = 0x154728u;
            goto label_154728;
        }
    }
    ctx->pc = 0x154704u;
    // 0x154704: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x154704u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x154708: 0xc0555ba  jal         func_1556E8
    ctx->pc = 0x154708u;
    SET_GPR_U32(ctx, 31, 0x154710u);
    ctx->pc = 0x15470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154708u;
    // 0x15470c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1556E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1556E8u, 0x154708u, 0x154710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154710u;
label_154710:
    // 0x154710: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154710u;
    {
        const bool branch_taken_0x154710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154710u;
        // 0x154714: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154710) {
            ctx->pc = 0x154728u;
            goto label_154728;
        }
    }
    ctx->pc = 0x154718u;
    // 0x154718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15471c: 0xc0555f6  jal         func_1557D8
    ctx->pc = 0x15471Cu;
    SET_GPR_U32(ctx, 31, 0x154724u);
    ctx->pc = 0x154720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15471Cu;
    // 0x154720: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1557D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1557D8u, 0x15471Cu, 0x154724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154724u;
label_154724:
    // 0x154724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x154724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154728:
    // 0x154728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x154728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15472c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15472cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154730: 0x3e00008  jr          $ra
    ctx->pc = 0x154730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154730u;
        // 0x154734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154738u;
}
