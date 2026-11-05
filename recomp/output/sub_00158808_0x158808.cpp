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

// Function: sub_00158808
// Address: 0x158808 - 0x1588a0
void sub_00158808_0x158808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158808_0x158808");
#endif

    switch (ctx->pc) {
        case 0x158808u: goto label_158808;
        case 0x15880cu: goto label_15880c;
        case 0x158810u: goto label_158810;
        case 0x158814u: goto label_158814;
        case 0x158818u: goto label_158818;
        case 0x15881cu: goto label_15881c;
        case 0x158820u: goto label_158820;
        case 0x158824u: goto label_158824;
        case 0x158828u: goto label_158828;
        case 0x15882cu: goto label_15882c;
        case 0x158830u: goto label_158830;
        case 0x158834u: goto label_158834;
        case 0x158838u: goto label_158838;
        case 0x15883cu: goto label_15883c;
        case 0x158840u: goto label_158840;
        case 0x158844u: goto label_158844;
        case 0x158848u: goto label_158848;
        case 0x15884cu: goto label_15884c;
        case 0x158850u: goto label_158850;
        case 0x158854u: goto label_158854;
        case 0x158858u: goto label_158858;
        case 0x15885cu: goto label_15885c;
        case 0x158860u: goto label_158860;
        case 0x158864u: goto label_158864;
        case 0x158868u: goto label_158868;
        case 0x15886cu: goto label_15886c;
        case 0x158870u: goto label_158870;
        case 0x158874u: goto label_158874;
        case 0x158878u: goto label_158878;
        case 0x15887cu: goto label_15887c;
        case 0x158880u: goto label_158880;
        case 0x158884u: goto label_158884;
        case 0x158888u: goto label_158888;
        case 0x15888cu: goto label_15888c;
        case 0x158890u: goto label_158890;
        case 0x158894u: goto label_158894;
        case 0x158898u: goto label_158898;
        case 0x15889cu: goto label_15889c;
        default: break;
    }

    ctx->pc = 0x158808u;

label_158808:
    // 0x158808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15880c:
    // 0x15880c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15880cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_158810:
    // 0x158810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158814:
    // 0x158814: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x158814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_158818:
    // 0x158818: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x158818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_15881c:
    // 0x15881c: 0xc04f1f4  jal         func_13C7D0
label_158820:
    if (ctx->pc == 0x158820u) {
        ctx->pc = 0x158820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15881Cu;
        // 0x158820: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158824u;
        goto label_158824;
    }
    ctx->pc = 0x15881Cu;
    SET_GPR_U32(ctx, 31, 0x158824u);
    ctx->pc = 0x158820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15881Cu;
    // 0x158820: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7D0u, 0x15881Cu, 0x158824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158824u;
label_158824:
    // 0x158824: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x158824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158828:
    // 0x158828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15882c:
    // 0x15882c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15882cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158830:
    // 0x158830: 0xc04f33e  jal         func_13CCF8
label_158834:
    if (ctx->pc == 0x158834u) {
        ctx->pc = 0x158834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158830u;
        // 0x158834: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158838u;
        goto label_158838;
    }
    ctx->pc = 0x158830u;
    SET_GPR_U32(ctx, 31, 0x158838u);
    ctx->pc = 0x158834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158830u;
    // 0x158834: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x158830u, 0x158838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158838u;
label_158838:
    // 0x158838: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x158838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_15883c:
    // 0x15883c: 0xc04f0b6  jal         func_13C2D8
label_158840:
    if (ctx->pc == 0x158840u) {
        ctx->pc = 0x158840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15883Cu;
        // 0x158840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158844u;
        goto label_158844;
    }
    ctx->pc = 0x15883Cu;
    SET_GPR_U32(ctx, 31, 0x158844u);
    ctx->pc = 0x158840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15883Cu;
    // 0x158840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15883Cu, 0x158844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158844u;
label_158844:
    // 0x158844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x158844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158848:
    // 0x158848: 0x8e220308  lw          $v0, 0x308($s1)
    ctx->pc = 0x158848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_15884c:
    // 0x15884c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_158850:
    // 0x158850: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_158854:
    if (ctx->pc == 0x158854u) {
        ctx->pc = 0x158854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158850u;
        // 0x158854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158858u;
        goto label_158858;
    }
    ctx->pc = 0x158850u;
    {
        const bool branch_taken_0x158850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158850u;
        // 0x158854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158850) {
            ctx->pc = 0x15885Cu;
            goto label_15885c;
        }
    }
    ctx->pc = 0x158858u;
label_158858:
    // 0x158858: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x158858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15885c:
    // 0x15885c: 0xc045fea  jal         func_117FA8
label_158860:
    if (ctx->pc == 0x158860u) {
        ctx->pc = 0x158860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15885Cu;
        // 0x158860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158864u;
        goto label_158864;
    }
    ctx->pc = 0x15885Cu;
    SET_GPR_U32(ctx, 31, 0x158864u);
    ctx->pc = 0x158860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15885Cu;
    // 0x158860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x15885Cu, 0x158864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158864u;
label_158864:
    // 0x158864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158868:
    // 0x158868: 0xc046104  jal         func_118410
label_15886c:
    if (ctx->pc == 0x15886Cu) {
        ctx->pc = 0x15886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158868u;
        // 0x15886c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158870u;
        goto label_158870;
    }
    ctx->pc = 0x158868u;
    SET_GPR_U32(ctx, 31, 0x158870u);
    ctx->pc = 0x15886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158868u;
    // 0x15886c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x158868u, 0x158870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158870u;
label_158870:
    // 0x158870: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x158870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_158874:
    // 0x158874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158878:
    // 0x158878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15887c:
    // 0x15887c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_158880:
    // 0x158880: 0x40f809  jalr        $v0
label_158884:
    if (ctx->pc == 0x158884u) {
        ctx->pc = 0x158884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158880u;
        // 0x158884: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158888u;
        goto label_158888;
    }
    ctx->pc = 0x158880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158888u);
        ctx->pc = 0x158884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158880u;
        // 0x158884: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158880u, 0x158888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158888u;
label_158888:
    // 0x158888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15888c:
    // 0x15888c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15888cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_158890:
    // 0x158890: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_158894:
    // 0x158894: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x158894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_158898:
    // 0x158898: 0x3e00008  jr          $ra
label_15889c:
    if (ctx->pc == 0x15889Cu) {
        ctx->pc = 0x15889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158898u;
        // 0x15889c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1588A0u;
        goto label_fallthrough_0x158898;
    }
    ctx->pc = 0x158898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158898u;
        // 0x15889c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x158898:
    ctx->pc = 0x1588A0u;
}
