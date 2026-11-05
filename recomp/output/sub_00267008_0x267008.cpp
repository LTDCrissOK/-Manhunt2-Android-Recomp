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

// Function: sub_00267008
// Address: 0x267008 - 0x267110
void sub_00267008_0x267008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267008_0x267008");
#endif

    switch (ctx->pc) {
        case 0x267040u: goto label_267040;
        case 0x267064u: goto label_267064;
        case 0x26706cu: goto label_26706c;
        case 0x267098u: goto label_267098;
        case 0x2670acu: goto label_2670ac;
        case 0x2670c0u: goto label_2670c0;
        case 0x2670d4u: goto label_2670d4;
        case 0x2670e8u: goto label_2670e8;
        case 0x2670f8u: goto label_2670f8;
        default: break;
    }

    ctx->pc = 0x267008u;

    // 0x267008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x267008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26700c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26700cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x267010: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x267010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x267014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x267014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267018: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26701c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26701cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267020: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x267020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x267024: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x267024u;
    {
        const bool branch_taken_0x267024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x267028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267024u;
        // 0x267028: 0x2e220005  sltiu       $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267024) {
            ctx->pc = 0x267070u;
            goto label_267070;
        }
    }
    ctx->pc = 0x26702Cu;
    // 0x26702c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x26702cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x267030: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x267030u;
    {
        const bool branch_taken_0x267030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x267030) {
            ctx->pc = 0x267034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267030u;
            // 0x267034: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267048u;
            goto label_267048;
        }
    }
    ctx->pc = 0x267038u;
    // 0x267038: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x267038u;
    SET_GPR_U32(ctx, 31, 0x267040u);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x267038u, 0x267040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267040u;
label_267040:
    // 0x267040: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x267040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x267044: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x267044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_267048:
    // 0x267048: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267048u;
    {
        const bool branch_taken_0x267048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267048u;
        // 0x26704c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267048) {
            ctx->pc = 0x267064u;
            goto label_267064;
        }
    }
    ctx->pc = 0x267050u;
    // 0x267050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267054: 0xac62bce4  sw          $v0, -0x431C($v1)
    ctx->pc = 0x267054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950116), GPR_U32(ctx, 2));
    // 0x267058: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x267058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x26705c: 0xc0c4858  jal         func_312160
    ctx->pc = 0x26705Cu;
    SET_GPR_U32(ctx, 31, 0x267064u);
    ctx->pc = 0x267060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26705Cu;
    // 0x267060: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x26705Cu, 0x267064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267064u;
label_267064:
    // 0x267064: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x267064u;
    SET_GPR_U32(ctx, 31, 0x26706Cu);
    ctx->pc = 0x267068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267064u;
    // 0x267068: 0x8e040220  lw          $a0, 0x220($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x267064u, 0x26706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26706Cu;
label_26706c:
    // 0x26706c: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x26706cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_267070:
    // 0x267070: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x267070u;
    {
        const bool branch_taken_0x267070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267070u;
        // 0x267074: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267070) {
            ctx->pc = 0x2670FCu;
            goto label_2670fc;
        }
    }
    ctx->pc = 0x267078u;
    // 0x267078: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x267078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x26707c: 0x24427890  addiu       $v0, $v0, 0x7890
    ctx->pc = 0x26707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30864));
    // 0x267080: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x267080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267084: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x267084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267088: 0x800008  jr          $a0
    ctx->pc = 0x267088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x267090u: goto label_267090;
            case 0x2670A4u: goto label_2670a4;
            case 0x2670B8u: goto label_2670b8;
            case 0x2670CCu: goto label_2670cc;
            case 0x2670E0u: goto label_2670e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267088u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x267090u;
label_267090:
    // 0x267090: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x267090u;
    SET_GPR_U32(ctx, 31, 0x267098u);
    ctx->pc = 0x267094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267090u;
    // 0x267094: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x267090u, 0x267098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267098u;
label_267098:
    // 0x267098: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x267098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26709c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26709Cu;
    {
        const bool branch_taken_0x26709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26709Cu;
        // 0x2670a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26709c) {
            ctx->pc = 0x2670F0u;
            goto label_2670f0;
        }
    }
    ctx->pc = 0x2670A4u;
label_2670a4:
    // 0x2670a4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2670A4u;
    SET_GPR_U32(ctx, 31, 0x2670ACu);
    ctx->pc = 0x2670A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2670A4u;
    // 0x2670a8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2670A4u, 0x2670ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670ACu;
label_2670ac:
    // 0x2670ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2670acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2670b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2670B0u;
    {
        const bool branch_taken_0x2670b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670B0u;
        // 0x2670b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670b0) {
            ctx->pc = 0x2670F0u;
            goto label_2670f0;
        }
    }
    ctx->pc = 0x2670B8u;
label_2670b8:
    // 0x2670b8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2670B8u;
    SET_GPR_U32(ctx, 31, 0x2670C0u);
    ctx->pc = 0x2670BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2670B8u;
    // 0x2670bc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2670B8u, 0x2670C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670C0u;
label_2670c0:
    // 0x2670c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2670c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2670c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2670C4u;
    {
        const bool branch_taken_0x2670c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670C4u;
        // 0x2670c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670c4) {
            ctx->pc = 0x2670F0u;
            goto label_2670f0;
        }
    }
    ctx->pc = 0x2670CCu;
label_2670cc:
    // 0x2670cc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2670CCu;
    SET_GPR_U32(ctx, 31, 0x2670D4u);
    ctx->pc = 0x2670D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2670CCu;
    // 0x2670d0: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2670CCu, 0x2670D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670D4u;
label_2670d4:
    // 0x2670d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2670d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2670d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2670D8u;
    {
        const bool branch_taken_0x2670d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670D8u;
        // 0x2670dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670d8) {
            ctx->pc = 0x2670F0u;
            goto label_2670f0;
        }
    }
    ctx->pc = 0x2670E0u;
label_2670e0:
    // 0x2670e0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2670E0u;
    SET_GPR_U32(ctx, 31, 0x2670E8u);
    ctx->pc = 0x2670E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2670E0u;
    // 0x2670e4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2670E0u, 0x2670E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670E8u;
label_2670e8:
    // 0x2670e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2670e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2670ec: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2670ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2670f0:
    // 0x2670f0: 0xc0c49dc  jal         func_312770
    ctx->pc = 0x2670F0u;
    SET_GPR_U32(ctx, 31, 0x2670F8u);
    ctx->pc = 0x312770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312770u, 0x2670F0u, 0x2670F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670F8u;
label_2670f8:
    // 0x2670f8: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x2670f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
label_2670fc:
    // 0x2670fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2670fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267100: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x267100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x267104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x267104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267108: 0x3e00008  jr          $ra
    ctx->pc = 0x267108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267108u;
        // 0x26710c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267110u;
}
