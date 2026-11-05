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

// Function: sub_0020A730
// Address: 0x20a730 - 0x20a8d8
void sub_0020A730_0x20a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A730_0x20a730");
#endif

    switch (ctx->pc) {
        case 0x20a754u: goto label_20a754;
        case 0x20a77cu: goto label_20a77c;
        case 0x20a7a4u: goto label_20a7a4;
        case 0x20a7c8u: goto label_20a7c8;
        case 0x20a7d8u: goto label_20a7d8;
        case 0x20a7e0u: goto label_20a7e0;
        case 0x20a81cu: goto label_20a81c;
        case 0x20a870u: goto label_20a870;
        case 0x20a8a0u: goto label_20a8a0;
        default: break;
    }

    ctx->pc = 0x20a730u;

    // 0x20a730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a734: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20a738: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20a73c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a740: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20a744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20a744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a748: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20a74c: 0xc0e1204  jal         func_384810
    ctx->pc = 0x20A74Cu;
    SET_GPR_U32(ctx, 31, 0x20A754u);
    ctx->pc = 0x20A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A74Cu;
    // 0x20a750: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384810u, 0x20A74Cu, 0x20A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A754u;
label_20a754:
    // 0x20a754: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x20A754u;
    {
        const bool branch_taken_0x20a754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A754u;
        // 0x20a758: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a754) {
            ctx->pc = 0x20A7F8u;
            goto label_20a7f8;
        }
    }
    ctx->pc = 0x20A75Cu;
    // 0x20a75c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a764: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x20A764u;
    {
        const bool branch_taken_0x20a764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a764) {
            ctx->pc = 0x20A768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A764u;
            // 0x20a768: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A800u;
            goto label_20a800;
        }
    }
    ctx->pc = 0x20A76Cu;
    // 0x20a76c: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x20a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x20a770: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20a770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a774: 0xc0e1220  jal         func_384880
    ctx->pc = 0x20A774u;
    SET_GPR_U32(ctx, 31, 0x20A77Cu);
    ctx->pc = 0x20A778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A774u;
    // 0x20a778: 0x24a5e110  addiu       $a1, $a1, -0x1EF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384880u, 0x20A774u, 0x20A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A77Cu;
label_20a77c:
    // 0x20a77c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x20A77Cu;
    {
        const bool branch_taken_0x20a77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A77Cu;
        // 0x20a780: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a77c) {
            ctx->pc = 0x20A7F8u;
            goto label_20a7f8;
        }
    }
    ctx->pc = 0x20A784u;
    // 0x20a784: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20a788: 0x54620025  bnel        $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x20A788u;
    {
        const bool branch_taken_0x20a788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a788) {
            ctx->pc = 0x20A78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A788u;
            // 0x20a78c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A820u;
            goto label_20a820;
        }
    }
    ctx->pc = 0x20A790u;
    // 0x20a790: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x20a790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x20a794: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20a794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a798: 0x24a5e480  addiu       $a1, $a1, -0x1B80
    ctx->pc = 0x20a798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960256));
    // 0x20a79c: 0xc0e10b6  jal         func_3842D8
    ctx->pc = 0x20A79Cu;
    SET_GPR_U32(ctx, 31, 0x20A7A4u);
    ctx->pc = 0x20A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A79Cu;
    // 0x20a7a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3842D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3842D8u, 0x20A79Cu, 0x20A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7A4u;
label_20a7a4:
    // 0x20a7a4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x20A7A4u;
    {
        const bool branch_taken_0x20a7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a7a4) {
            ctx->pc = 0x20A7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A7A4u;
            // 0x20a7a8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A800u;
            goto label_20a800;
        }
    }
    ctx->pc = 0x20A7ACu;
    // 0x20a7ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x20a7b0: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x20a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x20a7b4: 0xac629494  sw          $v0, -0x6B6C($v1)
    ctx->pc = 0x20a7b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F9494u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9494u, _value); } while (0);
    // 0x20a7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20a7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a7c0: 0xc082a88  jal         func_20AA20
    ctx->pc = 0x20A7C0u;
    SET_GPR_U32(ctx, 31, 0x20A7C8u);
    ctx->pc = 0x20A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7C0u;
    // 0x20a7c4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA20u, 0x20A7C0u, 0x20A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7C8u;
label_20a7c8:
    // 0x20a7c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20a7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20a7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7d0: 0xc082a88  jal         func_20AA20
    ctx->pc = 0x20A7D0u;
    SET_GPR_U32(ctx, 31, 0x20A7D8u);
    ctx->pc = 0x20A7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7D0u;
    // 0x20a7d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA20u, 0x20A7D0u, 0x20A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7D8u;
label_20a7d8:
    // 0x20a7d8: 0xc0e12ca  jal         func_384B28
    ctx->pc = 0x20A7D8u;
    SET_GPR_U32(ctx, 31, 0x20A7E0u);
    ctx->pc = 0x20A7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7D8u;
    // 0x20a7dc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384B28u, 0x20A7D8u, 0x20A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7E0u;
label_20a7e0:
    // 0x20a7e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x20a7e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x20a7e8: 0xac409480  sw          $zero, -0x6B80($v0)
    ctx->pc = 0x20a7e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9480u, _value); } while (0);
    // 0x20a7ec: 0xac60947c  sw          $zero, -0x6B84($v1)
    ctx->pc = 0x20a7ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F947Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F947Cu, _value); } while (0);
    // 0x20a7f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20A7F0u;
    {
        const bool branch_taken_0x20a7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7F0u;
        // 0x20a7f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7f0) {
            ctx->pc = 0x20A800u;
            goto label_20a800;
        }
    }
    ctx->pc = 0x20A7F8u;
label_20a7f8:
    // 0x20a7f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20a7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20a7fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20a800:
    // 0x20a800: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a804: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20A804u;
    {
        const bool branch_taken_0x20a804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a804) {
            ctx->pc = 0x20A808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A804u;
            // 0x20a808: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A820u;
            goto label_20a820;
        }
    }
    ctx->pc = 0x20A80Cu;
    // 0x20a80c: 0x52230004  beql        $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A80Cu;
    {
        const bool branch_taken_0x20a80c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x20a80c) {
            ctx->pc = 0x20A810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A80Cu;
            // 0x20a810: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A820u;
            goto label_20a820;
        }
    }
    ctx->pc = 0x20A814u;
    // 0x20a814: 0xc0e1294  jal         func_384A50
    ctx->pc = 0x20A814u;
    SET_GPR_U32(ctx, 31, 0x20A81Cu);
    ctx->pc = 0x20A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A814u;
    // 0x20a818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A50u, 0x20A814u, 0x20A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A81Cu;
label_20a81c:
    // 0x20a81c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20a820:
    // 0x20a820: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x20a820u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x20a824: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x20A824u;
    {
        const bool branch_taken_0x20a824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A824u;
        // 0x20a828: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a824) {
            ctx->pc = 0x20A8BCu;
            goto label_20a8bc;
        }
    }
    ctx->pc = 0x20A82Cu;
    // 0x20a82c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x20a82cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x20a830: 0x8e439480  lw          $v1, -0x6B80($s2)
    ctx->pc = 0x20a830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939776)));
    // 0x20a834: 0x8ca2947c  lw          $v0, -0x6B84($a1)
    ctx->pc = 0x20a834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F947Cu));
    // 0x20a838: 0x50620021  beql        $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x20A838u;
    {
        const bool branch_taken_0x20a838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20a838) {
            ctx->pc = 0x20A83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A838u;
            // 0x20a83c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A8C0u;
            goto label_20a8c0;
        }
    }
    ctx->pc = 0x20A840u;
    // 0x20a840: 0x8cb1947c  lw          $s1, -0x6B84($a1)
    ctx->pc = 0x20a840u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294939772)));
    // 0x20a844: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x20a844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20a848: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20A848u;
    {
        const bool branch_taken_0x20a848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A848u;
        // 0x20a84c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a848) {
            ctx->pc = 0x20A878u;
            goto label_20a878;
        }
    }
    ctx->pc = 0x20A850u;
    // 0x20a850: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x20a850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x20a854: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20a854u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a858: 0x24c6c110  addiu       $a2, $a2, -0x3EF0
    ctx->pc = 0x20a858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951184));
    // 0x20a85c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x20a85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20a860: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x20a860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x20a864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a868: 0xc0e116c  jal         func_3845B0
    ctx->pc = 0x20A868u;
    SET_GPR_U32(ctx, 31, 0x20A870u);
    ctx->pc = 0x20A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A868u;
    // 0x20a86c: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3845B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3845B0u, 0x20A868u, 0x20A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A870u;
label_20a870:
    // 0x20a870: 0xae409480  sw          $zero, -0x6B80($s2)
    ctx->pc = 0x20a870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294939776), GPR_U32(ctx, 0));
    // 0x20a874: 0x8e439480  lw          $v1, -0x6B80($s2)
    ctx->pc = 0x20a874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939776)));
label_20a878:
    // 0x20a878: 0x12230010  beq         $s1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20A878u;
    {
        const bool branch_taken_0x20a878 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A878u;
        // 0x20a87c: 0x3c06004a  lui         $a2, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a878) {
            ctx->pc = 0x20A8BCu;
            goto label_20a8bc;
        }
    }
    ctx->pc = 0x20A880u;
    // 0x20a880: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x20a880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x20a884: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20a884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20a888: 0x24c6c110  addiu       $a2, $a2, -0x3EF0
    ctx->pc = 0x20a888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951184));
    // 0x20a88c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x20a88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20a890: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x20a890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x20a894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a898: 0xc0e116c  jal         func_3845B0
    ctx->pc = 0x20A898u;
    SET_GPR_U32(ctx, 31, 0x20A8A0u);
    ctx->pc = 0x20A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A898u;
    // 0x20a89c: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3845B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3845B0u, 0x20A898u, 0x20A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A8A0u;
label_20a8a0:
    // 0x20a8a0: 0x8e439480  lw          $v1, -0x6B80($s2)
    ctx->pc = 0x20a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939776)));
    // 0x20a8a4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x20a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a8a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a8ac: 0x28642000  slti        $a0, $v1, 0x2000
    ctx->pc = 0x20a8acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x20a8b0: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A8B0u;
    {
        const bool branch_taken_0x20a8b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8B0u;
        // 0x20a8b4: 0xae439480  sw          $v1, -0x6B80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294939776), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8b0) {
            ctx->pc = 0x20A8BCu;
            goto label_20a8bc;
        }
    }
    ctx->pc = 0x20A8B8u;
    // 0x20a8b8: 0xae409480  sw          $zero, -0x6B80($s2)
    ctx->pc = 0x20a8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294939776), GPR_U32(ctx, 0));
label_20a8bc:
    // 0x20a8bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20a8bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20a8c0:
    // 0x20a8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a8c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20a8c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a8c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20a8c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a8cc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20a8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20a8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x20A8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8D0u;
        // 0x20a8d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A8D8u;
}
