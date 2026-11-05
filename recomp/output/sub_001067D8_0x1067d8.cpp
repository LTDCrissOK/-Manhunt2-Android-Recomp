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

// Function: sub_001067D8
// Address: 0x1067d8 - 0x1068b8
void sub_001067D8_0x1067d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001067D8_0x1067d8");
#endif

    switch (ctx->pc) {
        case 0x106810u: goto label_106810;
        case 0x106818u: goto label_106818;
        case 0x106850u: goto label_106850;
        case 0x106870u: goto label_106870;
        default: break;
    }

    ctx->pc = 0x1067d8u;

    // 0x1067d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1067d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1067dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1067dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1067e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1067e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1067e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1067e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1067e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1067ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1067ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1067f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1067f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1067f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1067f8: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x1067f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x1067fc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1067FCu;
    {
        const bool branch_taken_0x1067fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067FCu;
        // 0x106800: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067fc) {
            ctx->pc = 0x10689Cu;
            goto label_10689c;
        }
    }
    ctx->pc = 0x106804u;
    // 0x106804: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x106804u;
    {
        const bool branch_taken_0x106804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106804u;
        // 0x106808: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106804) {
            ctx->pc = 0x10689Cu;
            goto label_10689c;
        }
    }
    ctx->pc = 0x10680Cu;
    // 0x10680c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10680cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106810:
    // 0x106810: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x106810u;
    SET_GPR_U32(ctx, 31, 0x106818u);
    ctx->pc = 0x106814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106810u;
    // 0x106814: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x106810u, 0x106818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106818u;
label_106818:
    // 0x106818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10681c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10681Cu;
    {
        const bool branch_taken_0x10681c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x106820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10681Cu;
        // 0x106820: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10681c) {
            ctx->pc = 0x106888u;
            goto label_106888;
        }
    }
    ctx->pc = 0x106824u;
    // 0x106824: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x106828: 0x54530018  bnel        $v0, $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x106828u;
    {
        const bool branch_taken_0x106828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x106828) {
            ctx->pc = 0x10682Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106828u;
            // 0x10682c: 0x92220022  lbu         $v0, 0x22($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10688Cu;
            goto label_10688c;
        }
    }
    ctx->pc = 0x106830u;
    // 0x106830: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x106830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x106834: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x106834u;
    {
        const bool branch_taken_0x106834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106834) {
            ctx->pc = 0x106838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106834u;
            // 0x106838: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1068A0u;
            goto label_1068a0;
        }
    }
    ctx->pc = 0x10683Cu;
    // 0x10683c: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x10683cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x106840: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x106840u;
    {
        const bool branch_taken_0x106840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106840u;
        // 0x106844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106840) {
            ctx->pc = 0x106884u;
            goto label_106884;
        }
    }
    ctx->pc = 0x106848u;
    // 0x106848: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10684c: 0x0  nop
    ctx->pc = 0x10684cu;
    // NOP
label_106850:
    // 0x106850: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x106850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x106854: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x106854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106858: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x106858u;
    {
        const bool branch_taken_0x106858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106858) {
            ctx->pc = 0x10685Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106858u;
            // 0x10685c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1068A0u;
            goto label_1068a0;
        }
    }
    ctx->pc = 0x106860u;
    // 0x106860: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x106860u;
    {
        const bool branch_taken_0x106860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x106860) {
            ctx->pc = 0x106864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106860u;
            // 0x106864: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106878u;
            goto label_106878;
        }
    }
    ctx->pc = 0x106868u;
    // 0x106868: 0xc040036  jal         func_1000D8
    ctx->pc = 0x106868u;
    SET_GPR_U32(ctx, 31, 0x106870u);
    ctx->pc = 0x1000D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1000D8u, 0x106868u, 0x106870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106870u;
label_106870:
    // 0x106870: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x106870u;
    {
        const bool branch_taken_0x106870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106870u;
        // 0x106874: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106870) {
            ctx->pc = 0x1068A0u;
            goto label_1068a0;
        }
    }
    ctx->pc = 0x106878u;
label_106878:
    // 0x106878: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x106878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10687c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x10687Cu;
    {
        const bool branch_taken_0x10687c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10687c) {
            ctx->pc = 0x106880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10687Cu;
            // 0x106880: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106850;
        }
    }
    ctx->pc = 0x106884u;
label_106884:
    // 0x106884: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x106884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_106888:
    // 0x106888: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x106888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_10688c:
    // 0x10688c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x10688cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x106890: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x106890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x106894: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x106894u;
    {
        const bool branch_taken_0x106894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106894) {
            ctx->pc = 0x106898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106894u;
            // 0x106898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106810;
        }
    }
    ctx->pc = 0x10689Cu;
label_10689c:
    // 0x10689c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10689cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1068a0:
    // 0x1068a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1068a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1068a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1068a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1068a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1068a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1068ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1068acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1068b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1068B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1068B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068B0u;
        // 0x1068b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1068B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1068B8u;
}
