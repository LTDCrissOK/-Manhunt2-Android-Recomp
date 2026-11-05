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

// Function: sub_00158750
// Address: 0x158750 - 0x158808
void sub_00158750_0x158750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158750_0x158750");
#endif

    switch (ctx->pc) {
        case 0x158750u: goto label_158750;
        case 0x158754u: goto label_158754;
        case 0x158758u: goto label_158758;
        case 0x15875cu: goto label_15875c;
        case 0x158760u: goto label_158760;
        case 0x158764u: goto label_158764;
        case 0x158768u: goto label_158768;
        case 0x15876cu: goto label_15876c;
        case 0x158770u: goto label_158770;
        case 0x158774u: goto label_158774;
        case 0x158778u: goto label_158778;
        case 0x15877cu: goto label_15877c;
        case 0x158780u: goto label_158780;
        case 0x158784u: goto label_158784;
        case 0x158788u: goto label_158788;
        case 0x15878cu: goto label_15878c;
        case 0x158790u: goto label_158790;
        case 0x158794u: goto label_158794;
        case 0x158798u: goto label_158798;
        case 0x15879cu: goto label_15879c;
        case 0x1587a0u: goto label_1587a0;
        case 0x1587a4u: goto label_1587a4;
        case 0x1587a8u: goto label_1587a8;
        case 0x1587acu: goto label_1587ac;
        case 0x1587b0u: goto label_1587b0;
        case 0x1587b4u: goto label_1587b4;
        case 0x1587b8u: goto label_1587b8;
        case 0x1587bcu: goto label_1587bc;
        case 0x1587c0u: goto label_1587c0;
        case 0x1587c4u: goto label_1587c4;
        case 0x1587c8u: goto label_1587c8;
        case 0x1587ccu: goto label_1587cc;
        case 0x1587d0u: goto label_1587d0;
        case 0x1587d4u: goto label_1587d4;
        case 0x1587d8u: goto label_1587d8;
        case 0x1587dcu: goto label_1587dc;
        case 0x1587e0u: goto label_1587e0;
        case 0x1587e4u: goto label_1587e4;
        case 0x1587e8u: goto label_1587e8;
        case 0x1587ecu: goto label_1587ec;
        case 0x1587f0u: goto label_1587f0;
        case 0x1587f4u: goto label_1587f4;
        case 0x1587f8u: goto label_1587f8;
        case 0x1587fcu: goto label_1587fc;
        case 0x158800u: goto label_158800;
        case 0x158804u: goto label_158804;
        default: break;
    }

    ctx->pc = 0x158750u;

label_158750:
    // 0x158750: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x158750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_158754:
    // 0x158754: 0xffb201c0  sd          $s2, 0x1C0($sp)
    ctx->pc = 0x158754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 18));
label_158758:
    // 0x158758: 0xffb001b0  sd          $s0, 0x1B0($sp)
    ctx->pc = 0x158758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
label_15875c:
    // 0x15875c: 0xffb101b8  sd          $s1, 0x1B8($sp)
    ctx->pc = 0x15875cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 17));
label_158760:
    // 0x158760: 0xffb301c8  sd          $s3, 0x1C8($sp)
    ctx->pc = 0x158760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 19));
label_158764:
    // 0x158764: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x158764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
label_158768:
    // 0x158768: 0xc04f1e0  jal         func_13C780
label_15876c:
    if (ctx->pc == 0x15876Cu) {
        ctx->pc = 0x15876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158768u;
        // 0x15876c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158770u;
        goto label_158770;
    }
    ctx->pc = 0x158768u;
    SET_GPR_U32(ctx, 31, 0x158770u);
    ctx->pc = 0x15876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158768u;
    // 0x15876c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C780u, 0x158768u, 0x158770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158770u;
label_158770:
    // 0x158770: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x158770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158774:
    // 0x158774: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x158774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_158778:
    // 0x158778: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x158778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15877c:
    // 0x15877c: 0xc04f33e  jal         func_13CCF8
label_158780:
    if (ctx->pc == 0x158780u) {
        ctx->pc = 0x158780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15877Cu;
        // 0x158780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158784u;
        goto label_158784;
    }
    ctx->pc = 0x15877Cu;
    SET_GPR_U32(ctx, 31, 0x158784u);
    ctx->pc = 0x158780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15877Cu;
    // 0x158780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15877Cu, 0x158784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158784u;
label_158784:
    // 0x158784: 0xc05a7b0  jal         func_169EC0
label_158788:
    if (ctx->pc == 0x158788u) {
        ctx->pc = 0x158788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158784u;
        // 0x158788: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15878Cu;
        goto label_15878c;
    }
    ctx->pc = 0x158784u;
    SET_GPR_U32(ctx, 31, 0x15878Cu);
    ctx->pc = 0x158788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158784u;
    // 0x158788: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169EC0u, 0x158784u, 0x15878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15878Cu;
label_15878c:
    // 0x15878c: 0xc05abc8  jal         func_16AF20
label_158790:
    if (ctx->pc == 0x158790u) {
        ctx->pc = 0x158790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15878Cu;
        // 0x158790: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158794u;
        goto label_158794;
    }
    ctx->pc = 0x15878Cu;
    SET_GPR_U32(ctx, 31, 0x158794u);
    ctx->pc = 0x158790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15878Cu;
    // 0x158790: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF20u, 0x15878Cu, 0x158794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158794u;
label_158794:
    // 0x158794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158798:
    // 0x158798: 0x3403c34f  ori         $v1, $zero, 0xC34F
    ctx->pc = 0x158798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49999);
label_15879c:
    // 0x15879c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1587a0:
    // 0x1587a0: 0xa6030016  sh          $v1, 0x16($s0)
    ctx->pc = 0x1587a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 3));
label_1587a4:
    // 0x1587a4: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x1587a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
label_1587a8:
    // 0x1587a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1587a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1587ac:
    // 0x1587ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1587acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1587b0:
    // 0x1587b0: 0xc04f0b6  jal         func_13C2D8
label_1587b4:
    if (ctx->pc == 0x1587B4u) {
        ctx->pc = 0x1587B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587B0u;
        // 0x1587b4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587B8u;
        goto label_1587b8;
    }
    ctx->pc = 0x1587B0u;
    SET_GPR_U32(ctx, 31, 0x1587B8u);
    ctx->pc = 0x1587B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1587B0u;
    // 0x1587b4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x1587B0u, 0x1587B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1587B8u;
label_1587b8:
    // 0x1587b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1587b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1587bc:
    // 0x1587bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1587bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1587c0:
    // 0x1587c0: 0xc046304  jal         func_118C10
label_1587c4:
    if (ctx->pc == 0x1587C4u) {
        ctx->pc = 0x1587C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587C0u;
        // 0x1587c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587C8u;
        goto label_1587c8;
    }
    ctx->pc = 0x1587C0u;
    SET_GPR_U32(ctx, 31, 0x1587C8u);
    ctx->pc = 0x1587C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1587C0u;
    // 0x1587c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C10u, 0x1587C0u, 0x1587C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1587C8u;
label_1587c8:
    // 0x1587c8: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1587c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1587cc:
    // 0x1587cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1587ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1587d0:
    // 0x1587d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1587d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1587d4:
    // 0x1587d4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1587d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1587d8:
    // 0x1587d8: 0x40f809  jalr        $v0
label_1587dc:
    if (ctx->pc == 0x1587DCu) {
        ctx->pc = 0x1587DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587D8u;
        // 0x1587dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587E0u;
        goto label_1587e0;
    }
    ctx->pc = 0x1587D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1587E0u);
        ctx->pc = 0x1587DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587D8u;
        // 0x1587dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1587D8u, 0x1587E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1587E0u;
label_1587e0:
    // 0x1587e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1587e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1587e4:
    // 0x1587e4: 0xc05a7e6  jal         func_169F98
label_1587e8:
    if (ctx->pc == 0x1587E8u) {
        ctx->pc = 0x1587E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587E4u;
        // 0x1587e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587ECu;
        goto label_1587ec;
    }
    ctx->pc = 0x1587E4u;
    SET_GPR_U32(ctx, 31, 0x1587ECu);
    ctx->pc = 0x1587E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1587E4u;
    // 0x1587e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169F98u, 0x1587E4u, 0x1587ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1587ECu;
label_1587ec:
    // 0x1587ec: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x1587ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_1587f0:
    // 0x1587f0: 0xdfb101b8  ld          $s1, 0x1B8($sp)
    ctx->pc = 0x1587f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 440)));
label_1587f4:
    // 0x1587f4: 0xdfb201c0  ld          $s2, 0x1C0($sp)
    ctx->pc = 0x1587f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_1587f8:
    // 0x1587f8: 0xdfb301c8  ld          $s3, 0x1C8($sp)
    ctx->pc = 0x1587f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 456)));
label_1587fc:
    // 0x1587fc: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x1587fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
label_158800:
    // 0x158800: 0x3e00008  jr          $ra
label_158804:
    if (ctx->pc == 0x158804u) {
        ctx->pc = 0x158804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158800u;
        // 0x158804: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158808u;
        goto label_fallthrough_0x158800;
    }
    ctx->pc = 0x158800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158800u;
        // 0x158804: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x158800:
    ctx->pc = 0x158808u;
}
