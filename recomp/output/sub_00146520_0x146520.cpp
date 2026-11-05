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

// Function: sub_00146520
// Address: 0x146520 - 0x146680
void sub_00146520_0x146520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146520_0x146520");
#endif

    switch (ctx->pc) {
        case 0x14653cu: goto label_14653c;
        case 0x146554u: goto label_146554;
        case 0x146568u: goto label_146568;
        case 0x14658cu: goto label_14658c;
        case 0x146594u: goto label_146594;
        case 0x1465bcu: goto label_1465bc;
        case 0x1465ccu: goto label_1465cc;
        case 0x1465e0u: goto label_1465e0;
        case 0x146630u: goto label_146630;
        case 0x14663cu: goto label_14663c;
        case 0x146654u: goto label_146654;
        case 0x146664u: goto label_146664;
        default: break;
    }

    ctx->pc = 0x146520u;

    // 0x146520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x146524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x146528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14652c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14652cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146530: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146534: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x146534u;
    SET_GPR_U32(ctx, 31, 0x14653Cu);
    ctx->pc = 0x146538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146534u;
    // 0x146538: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x146534u, 0x14653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14653Cu;
label_14653c:
    // 0x14653c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x146540: 0x14430049  bne         $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x146540u;
    {
        const bool branch_taken_0x146540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x146544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146540u;
        // 0x146544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146540) {
            ctx->pc = 0x146668u;
            goto label_146668;
        }
    }
    ctx->pc = 0x146548u;
    // 0x146548: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x146548u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14654c: 0xc051b40  jal         func_146D00
    ctx->pc = 0x14654Cu;
    SET_GPR_U32(ctx, 31, 0x146554u);
    ctx->pc = 0x146550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14654Cu;
    // 0x146550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146D00u, 0x14654Cu, 0x146554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146554u;
label_146554:
    // 0x146554: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x146554u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x146558: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x146558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14655c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146560: 0xc051b3a  jal         func_146CE8
    ctx->pc = 0x146560u;
    SET_GPR_U32(ctx, 31, 0x146568u);
    ctx->pc = 0x146564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146560u;
    // 0x146564: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146CE8u, 0x146560u, 0x146568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146568u;
label_146568:
    // 0x146568: 0x56200016  bnel        $s1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x146568u;
    {
        const bool branch_taken_0x146568 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x146568) {
            ctx->pc = 0x14656Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146568u;
            // 0x14656c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1465C4u;
            goto label_1465c4;
        }
    }
    ctx->pc = 0x146570u;
    // 0x146570: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x146570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x146574: 0x8c430790  lw          $v1, 0x790($v0)
    ctx->pc = 0x146574u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F0790u));
    // 0x146578: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x146578u;
    {
        const bool branch_taken_0x146578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146578u;
        // 0x14657c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146578) {
            ctx->pc = 0x14659Cu;
            goto label_14659c;
        }
    }
    ctx->pc = 0x146580u;
    // 0x146580: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x146580u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x146584: 0xc051b3a  jal         func_146CE8
    ctx->pc = 0x146584u;
    SET_GPR_U32(ctx, 31, 0x14658Cu);
    ctx->pc = 0x146588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146584u;
    // 0x146588: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146CE8u, 0x146584u, 0x14658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14658Cu;
label_14658c:
    // 0x14658c: 0xc051d6c  jal         func_1475B0
    ctx->pc = 0x14658Cu;
    SET_GPR_U32(ctx, 31, 0x146594u);
    ctx->pc = 0x146590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14658Cu;
    // 0x146590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1475B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1475B0u, 0x14658Cu, 0x146594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146594u;
label_146594:
    // 0x146594: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x146594u;
    {
        const bool branch_taken_0x146594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146594u;
        // 0x146598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146594) {
            ctx->pc = 0x146668u;
            goto label_146668;
        }
    }
    ctx->pc = 0x14659Cu;
label_14659c:
    // 0x14659c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1465a0: 0x8c430794  lw          $v1, 0x794($v0)
    ctx->pc = 0x1465a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F0794u));
    // 0x1465a4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1465A4u;
    {
        const bool branch_taken_0x1465a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1465a4) {
            ctx->pc = 0x1465A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1465A4u;
            // 0x1465a8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1465C4u;
            goto label_1465c4;
        }
    }
    ctx->pc = 0x1465ACu;
    // 0x1465ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1465acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1465b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1465b4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1465B4u;
    SET_GPR_U32(ctx, 31, 0x1465BCu);
    ctx->pc = 0x1465B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465B4u;
    // 0x1465b8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1465B4u, 0x1465BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465BCu;
label_1465bc:
    // 0x1465bc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1465BCu;
    {
        const bool branch_taken_0x1465bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1465C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465BCu;
        // 0x1465c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465bc) {
            ctx->pc = 0x146668u;
            goto label_146668;
        }
    }
    ctx->pc = 0x1465C4u;
label_1465c4:
    // 0x1465c4: 0xc04d97a  jal         func_1365E8
    ctx->pc = 0x1465C4u;
    SET_GPR_U32(ctx, 31, 0x1465CCu);
    ctx->pc = 0x1465C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465C4u;
    // 0x1465c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365E8u, 0x1465C4u, 0x1465CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465CCu;
label_1465cc:
    // 0x1465cc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1465CCu;
    {
        const bool branch_taken_0x1465cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1465D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465CCu;
        // 0x1465d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465cc) {
            ctx->pc = 0x14665Cu;
            goto label_14665c;
        }
    }
    ctx->pc = 0x1465D4u;
    // 0x1465d4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1465d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1465d8: 0xc04d980  jal         func_136600
    ctx->pc = 0x1465D8u;
    SET_GPR_U32(ctx, 31, 0x1465E0u);
    ctx->pc = 0x1465DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465D8u;
    // 0x1465dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136600u, 0x1465D8u, 0x1465E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465E0u;
label_1465e0:
    // 0x1465e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1465e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465e4: 0x14c0001d  bnez        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1465E4u;
    {
        const bool branch_taken_0x1465e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1465E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465E4u;
        // 0x1465e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465e4) {
            ctx->pc = 0x14665Cu;
            goto label_14665c;
        }
    }
    ctx->pc = 0x1465ECu;
    // 0x1465ec: 0x9207046c  lbu         $a3, 0x46C($s0)
    ctx->pc = 0x1465ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1465f0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1465f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1465f4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1465f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1465f8: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1465f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x1465fc: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1465fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x146600: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x146600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x146604: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x146604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146608: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14660c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14660cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x146610: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x146610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x146614: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x146614u;
    {
        const bool branch_taken_0x146614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146614) {
            ctx->pc = 0x146640u;
            goto label_146640;
        }
    }
    ctx->pc = 0x14661Cu;
    // 0x14661c: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x14661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x146620: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x146620u;
    {
        const bool branch_taken_0x146620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146620u;
        // 0x146624: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146620) {
            ctx->pc = 0x146640u;
            goto label_146640;
        }
    }
    ctx->pc = 0x146628u;
    // 0x146628: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x146628u;
    SET_GPR_U32(ctx, 31, 0x146630u);
    ctx->pc = 0x14662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146628u;
    // 0x14662c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x146628u, 0x146630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146630u;
label_146630:
    // 0x146630: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x146630u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x146634: 0xc04d974  jal         func_1365D0
    ctx->pc = 0x146634u;
    SET_GPR_U32(ctx, 31, 0x14663Cu);
    ctx->pc = 0x146638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146634u;
    // 0x146638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365D0u, 0x146634u, 0x14663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14663Cu;
label_14663c:
    // 0x14663c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14663cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146640:
    // 0x146640: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x146640u;
    {
        const bool branch_taken_0x146640 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x146644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146640u;
        // 0x146644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146640) {
            ctx->pc = 0x14665Cu;
            goto label_14665c;
        }
    }
    ctx->pc = 0x146648u;
    // 0x146648: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x146648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14664c: 0xc051b3a  jal         func_146CE8
    ctx->pc = 0x14664Cu;
    SET_GPR_U32(ctx, 31, 0x146654u);
    ctx->pc = 0x146650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14664Cu;
    // 0x146650: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146CE8u, 0x14664Cu, 0x146654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146654u;
label_146654:
    // 0x146654: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146654u;
    {
        const bool branch_taken_0x146654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146654u;
        // 0x146658: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146654) {
            ctx->pc = 0x146668u;
            goto label_146668;
        }
    }
    ctx->pc = 0x14665Cu;
label_14665c:
    // 0x14665c: 0xc04da5c  jal         func_136970
    ctx->pc = 0x14665Cu;
    SET_GPR_U32(ctx, 31, 0x146664u);
    ctx->pc = 0x146660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14665Cu;
    // 0x146660: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x14665Cu, 0x146664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146664u;
label_146664:
    // 0x146664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146668:
    // 0x146668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14666c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14666cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146674: 0x3e00008  jr          $ra
    ctx->pc = 0x146674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146674u;
        // 0x146678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14667Cu;
    // 0x14667c: 0x0  nop
    ctx->pc = 0x14667cu;
    // NOP
    ctx->pc = 0x146680u;
}
