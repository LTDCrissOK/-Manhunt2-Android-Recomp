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

// Function: sub_00153600
// Address: 0x153600 - 0x153738
void sub_00153600_0x153600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153600_0x153600");
#endif

    switch (ctx->pc) {
        case 0x153620u: goto label_153620;
        case 0x153634u: goto label_153634;
        case 0x153648u: goto label_153648;
        case 0x153658u: goto label_153658;
        case 0x153680u: goto label_153680;
        case 0x153690u: goto label_153690;
        case 0x1536b8u: goto label_1536b8;
        case 0x1536c4u: goto label_1536c4;
        case 0x1536e4u: goto label_1536e4;
        case 0x1536ecu: goto label_1536ec;
        case 0x15370cu: goto label_15370c;
        case 0x15371cu: goto label_15371c;
        default: break;
    }

    ctx->pc = 0x153600u;

    // 0x153600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x153600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x153604: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x153604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x153608: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x153608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15360c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15360cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153610: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x153610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x153614: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x153614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x153618: 0xc0551ea  jal         func_1547A8
    ctx->pc = 0x153618u;
    SET_GPR_U32(ctx, 31, 0x153620u);
    ctx->pc = 0x15361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153618u;
    // 0x15361c: 0x9245046c  lbu         $a1, 0x46C($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A8u, 0x153618u, 0x153620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153620u;
label_153620:
    // 0x153620: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x153620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153624: 0x1043003e  beq         $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x153624u;
    {
        const bool branch_taken_0x153624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x153628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153624u;
        // 0x153628: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153624) {
            ctx->pc = 0x153720u;
            goto label_153720;
        }
    }
    ctx->pc = 0x15362Cu;
    // 0x15362c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15362Cu;
    SET_GPR_U32(ctx, 31, 0x153634u);
    ctx->pc = 0x153630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15362Cu;
    // 0x153630: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15362Cu, 0x153634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153634u;
label_153634:
    // 0x153634: 0x8e450678  lw          $a1, 0x678($s2)
    ctx->pc = 0x153634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
    // 0x153638: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x153638u;
    {
        const bool branch_taken_0x153638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x153638) {
            ctx->pc = 0x1536E4u;
            goto label_1536e4;
        }
    }
    ctx->pc = 0x153640u;
    // 0x153640: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x153640u;
    SET_GPR_U32(ctx, 31, 0x153648u);
    ctx->pc = 0x153644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153640u;
    // 0x153644: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x153640u, 0x153648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153648u;
label_153648:
    // 0x153648: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x153648u;
    {
        const bool branch_taken_0x153648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153648u;
        // 0x15364c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153648) {
            ctx->pc = 0x153678u;
            goto label_153678;
        }
    }
    ctx->pc = 0x153650u;
    // 0x153650: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x153650u;
    SET_GPR_U32(ctx, 31, 0x153658u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x153650u, 0x153658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153658u;
label_153658:
    // 0x153658: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x153658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15365c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x15365cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x153660: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x153660u;
    {
        const bool branch_taken_0x153660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153660) {
            ctx->pc = 0x153664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153660u;
            // 0x153664: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x153668u;
            goto label_153668;
        }
    }
    ctx->pc = 0x153668u;
label_153668:
    // 0x153668: 0x2010  mfhi        $a0
    ctx->pc = 0x153668u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15366c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15366Cu;
    {
        const bool branch_taken_0x15366c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15366c) {
            ctx->pc = 0x153688u;
            goto label_153688;
        }
    }
    ctx->pc = 0x153674u;
    // 0x153674: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x153674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_153678:
    // 0x153678: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x153678u;
    SET_GPR_U32(ctx, 31, 0x153680u);
    ctx->pc = 0x15367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153678u;
    // 0x15367c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x153678u, 0x153680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153680u;
label_153680:
    // 0x153680: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x153680u;
    {
        const bool branch_taken_0x153680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153680u;
        // 0x153684: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153680) {
            ctx->pc = 0x153720u;
            goto label_153720;
        }
    }
    ctx->pc = 0x153688u;
label_153688:
    // 0x153688: 0xc04dabc  jal         func_136AF0
    ctx->pc = 0x153688u;
    SET_GPR_U32(ctx, 31, 0x153690u);
    ctx->pc = 0x15368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153688u;
    // 0x15368c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AF0u, 0x153688u, 0x153690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153690u;
label_153690:
    // 0x153690: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x153690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153694: 0x9243046c  lbu         $v1, 0x46C($s2)
    ctx->pc = 0x153694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1132)));
    // 0x153698: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x153698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15369c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15369cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1536a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1536a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1536a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1536a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1536a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1536a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1536ac: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1536acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1536b0: 0xc045612  jal         func_115848
    ctx->pc = 0x1536B0u;
    SET_GPR_U32(ctx, 31, 0x1536B8u);
    ctx->pc = 0x1536B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536B0u;
    // 0x1536b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x1536B0u, 0x1536B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536B8u;
label_1536b8:
    // 0x1536b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1536b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1536bc: 0xc045668  jal         func_1159A0
    ctx->pc = 0x1536BCu;
    SET_GPR_U32(ctx, 31, 0x1536C4u);
    ctx->pc = 0x1536C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536BCu;
    // 0x1536c0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x1536BCu, 0x1536C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536C4u;
label_1536c4:
    // 0x1536c4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1536c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1536c8: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1536c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1536cc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1536ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1536d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1536d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1536d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1536d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1536d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1536d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1536dc: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x1536DCu;
    SET_GPR_U32(ctx, 31, 0x1536E4u);
    ctx->pc = 0x1536E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536DCu;
    // 0x1536e0: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x1536DCu, 0x1536E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536E4u;
label_1536e4:
    // 0x1536e4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x1536E4u;
    SET_GPR_U32(ctx, 31, 0x1536ECu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x1536E4u, 0x1536ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536ECu;
label_1536ec:
    // 0x1536ec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1536ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1536f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1536f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1536f4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1536f4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1536f8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1536F8u;
    {
        const bool branch_taken_0x1536f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1536f8) {
            ctx->pc = 0x1536FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1536F8u;
            // 0x1536fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x153700u;
            goto label_153700;
        }
    }
    ctx->pc = 0x153700u;
label_153700:
    // 0x153700: 0x2810  mfhi        $a1
    ctx->pc = 0x153700u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x153704: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x153704u;
    SET_GPR_U32(ctx, 31, 0x15370Cu);
    ctx->pc = 0x153708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153704u;
    // 0x153708: 0x24a5000a  addiu       $a1, $a1, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x153704u, 0x15370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15370Cu;
label_15370c:
    // 0x15370c: 0xae420678  sw          $v0, 0x678($s2)
    ctx->pc = 0x15370cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1656), GPR_U32(ctx, 2));
    // 0x153710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x153710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153714: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x153714u;
    SET_GPR_U32(ctx, 31, 0x15371Cu);
    ctx->pc = 0x153718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153714u;
    // 0x153718: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x153714u, 0x15371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15371Cu;
label_15371c:
    // 0x15371c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15371cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_153720:
    // 0x153720: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x153720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x153724: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x153724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153728: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x153728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15372c: 0x3e00008  jr          $ra
    ctx->pc = 0x15372Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15372Cu;
        // 0x153730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15372Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153734u;
    // 0x153734: 0x0  nop
    ctx->pc = 0x153734u;
    // NOP
    ctx->pc = 0x153738u;
}
