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

// Function: sub_00142670
// Address: 0x142670 - 0x142748
void sub_00142670_0x142670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142670_0x142670");
#endif

    switch (ctx->pc) {
        case 0x14268cu: goto label_14268c;
        case 0x14269cu: goto label_14269c;
        case 0x1426c0u: goto label_1426c0;
        case 0x1426ccu: goto label_1426cc;
        case 0x1426d8u: goto label_1426d8;
        case 0x1426f4u: goto label_1426f4;
        case 0x142708u: goto label_142708;
        case 0x142724u: goto label_142724;
        case 0x142730u: goto label_142730;
        default: break;
    }

    ctx->pc = 0x142670u;

    // 0x142670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14267c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14267cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x142680: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x142680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x142684: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x142684u;
    SET_GPR_U32(ctx, 31, 0x14268Cu);
    ctx->pc = 0x142688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142684u;
    // 0x142688: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x142684u, 0x14268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14268Cu;
label_14268c:
    // 0x14268c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14268cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142694: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x142694u;
    SET_GPR_U32(ctx, 31, 0x14269Cu);
    ctx->pc = 0x142698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142694u;
    // 0x142698: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x142694u, 0x14269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14269Cu;
label_14269c:
    // 0x14269c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14269cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1426a0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1426a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1426a4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1426a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1426a8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1426a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1426ac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1426acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1426b0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1426b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1426b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1426b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1426b8: 0xc04daca  jal         func_136B28
    ctx->pc = 0x1426B8u;
    SET_GPR_U32(ctx, 31, 0x1426C0u);
    ctx->pc = 0x1426BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1426B8u;
    // 0x1426bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x1426B8u, 0x1426C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426C0u;
label_1426c0:
    // 0x1426c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1426c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1426c4: 0xc046030  jal         func_1180C0
    ctx->pc = 0x1426C4u;
    SET_GPR_U32(ctx, 31, 0x1426CCu);
    ctx->pc = 0x1426C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1426C4u;
    // 0x1426c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x1426C4u, 0x1426CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426CCu;
label_1426cc:
    // 0x1426cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1426ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1426d0: 0xc0460c4  jal         func_118310
    ctx->pc = 0x1426D0u;
    SET_GPR_U32(ctx, 31, 0x1426D8u);
    ctx->pc = 0x1426D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1426D0u;
    // 0x1426d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x1426D0u, 0x1426D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426D8u;
label_1426d8:
    // 0x1426d8: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1426d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1426dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1426dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1426e0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1426e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1426e4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1426e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1426e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1426e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1426ec: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x1426ECu;
    SET_GPR_U32(ctx, 31, 0x1426F4u);
    ctx->pc = 0x1426F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1426ECu;
    // 0x1426f0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x1426ECu, 0x1426F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426F4u;
label_1426f4:
    // 0x1426f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1426f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1426f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1426f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1426fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1426fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142700: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x142700u;
    SET_GPR_U32(ctx, 31, 0x142708u);
    ctx->pc = 0x142704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142700u;
    // 0x142704: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x142700u, 0x142708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142708u;
label_142708:
    // 0x142708: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x142708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14270c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14270cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x142710: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x142710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x142714: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x142714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x142718: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x142718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14271c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14271Cu;
    SET_GPR_U32(ctx, 31, 0x142724u);
    ctx->pc = 0x142720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14271Cu;
    // 0x142720: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14271Cu, 0x142724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142724u;
label_142724:
    // 0x142724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142728: 0xc050874  jal         func_1421D0
    ctx->pc = 0x142728u;
    SET_GPR_U32(ctx, 31, 0x142730u);
    ctx->pc = 0x14272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142728u;
    // 0x14272c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421D0u, 0x142728u, 0x142730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142730u;
label_142730:
    // 0x142730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142734: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142738: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x142738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14273c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14273cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x142740: 0x3e00008  jr          $ra
    ctx->pc = 0x142740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142740u;
        // 0x142744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142748u;
}
