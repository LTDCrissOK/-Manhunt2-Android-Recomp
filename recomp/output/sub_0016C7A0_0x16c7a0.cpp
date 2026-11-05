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

// Function: sub_0016C7A0
// Address: 0x16c7a0 - 0x16c850
void sub_0016C7A0_0x16c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C7A0_0x16c7a0");
#endif

    switch (ctx->pc) {
        case 0x16c7c0u: goto label_16c7c0;
        case 0x16c7dcu: goto label_16c7dc;
        case 0x16c7e8u: goto label_16c7e8;
        case 0x16c7f4u: goto label_16c7f4;
        case 0x16c808u: goto label_16c808;
        case 0x16c818u: goto label_16c818;
        case 0x16c828u: goto label_16c828;
        case 0x16c834u: goto label_16c834;
        default: break;
    }

    ctx->pc = 0x16c7a0u;

    // 0x16c7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c7a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c7a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c7ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16c7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16c7b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16c7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16c7b8: 0xc05a618  jal         func_169860
    ctx->pc = 0x16C7B8u;
    SET_GPR_U32(ctx, 31, 0x16C7C0u);
    ctx->pc = 0x16C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C7B8u;
    // 0x16c7bc: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16C7B8u, 0x16C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C7C0u;
label_16c7c0:
    // 0x16c7c0: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16c7c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16c7c8: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16c7cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c7d0: 0x8c72020c  lw          $s2, 0x20C($v1)
    ctx->pc = 0x16c7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x16c7d4: 0xc043a46  jal         func_10E918
    ctx->pc = 0x16C7D4u;
    SET_GPR_U32(ctx, 31, 0x16C7DCu);
    ctx->pc = 0x16C7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C7D4u;
    // 0x16c7d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E918u, 0x16C7D4u, 0x16C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C7DCu;
label_16c7dc:
    // 0x16c7dc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x16c7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x16c7e0: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x16C7E0u;
    SET_GPR_U32(ctx, 31, 0x16C7E8u);
    ctx->pc = 0x16C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C7E0u;
    // 0x16c7e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16C7E0u, 0x16C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C7E8u;
label_16c7e8:
    // 0x16c7e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16c7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7ec: 0xc043c78  jal         func_10F1E0
    ctx->pc = 0x16C7ECu;
    SET_GPR_U32(ctx, 31, 0x16C7F4u);
    ctx->pc = 0x16C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C7ECu;
    // 0x16c7f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E0u, 0x16C7ECu, 0x16C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C7F4u;
label_16c7f4:
    // 0x16c7f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16c7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c7f8: 0x1230000f  beq         $s1, $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x16C7F8u;
    {
        const bool branch_taken_0x16c7f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x16C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C7F8u;
        // 0x16c7fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c7f8) {
            ctx->pc = 0x16C838u;
            goto label_16c838;
        }
    }
    ctx->pc = 0x16C800u;
    // 0x16c800: 0xc043920  jal         func_10E480
    ctx->pc = 0x16C800u;
    SET_GPR_U32(ctx, 31, 0x16C808u);
    ctx->pc = 0x16C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C800u;
    // 0x16c804: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x16C800u, 0x16C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C808u;
label_16c808:
    // 0x16c808: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16C808u;
    {
        const bool branch_taken_0x16c808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C808u;
        // 0x16c80c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c808) {
            ctx->pc = 0x16C820u;
            goto label_16c820;
        }
    }
    ctx->pc = 0x16C810u;
    // 0x16c810: 0xc0cda26  jal         func_336898
    ctx->pc = 0x16C810u;
    SET_GPR_U32(ctx, 31, 0x16C818u);
    ctx->pc = 0x16C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C810u;
    // 0x16c814: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x16C810u, 0x16C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C818u;
label_16c818:
    // 0x16c818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16C818u;
    {
        const bool branch_taken_0x16c818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C818u;
        // 0x16c81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c818) {
            ctx->pc = 0x16C82Cu;
            goto label_16c82c;
        }
    }
    ctx->pc = 0x16C820u;
label_16c820:
    // 0x16c820: 0xc0cda26  jal         func_336898
    ctx->pc = 0x16C820u;
    SET_GPR_U32(ctx, 31, 0x16C828u);
    ctx->pc = 0x16C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C820u;
    // 0x16c824: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x16C820u, 0x16C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C828u;
label_16c828:
    // 0x16c828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16c828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16c82c:
    // 0x16c82c: 0xc043a3a  jal         func_10E8E8
    ctx->pc = 0x16C82Cu;
    SET_GPR_U32(ctx, 31, 0x16C834u);
    ctx->pc = 0x16C830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C82Cu;
    // 0x16c830: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8E8u, 0x16C82Cu, 0x16C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C834u;
label_16c834:
    // 0x16c834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c838:
    // 0x16c838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c83c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c83cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c840: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16c840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c844: 0x3e00008  jr          $ra
    ctx->pc = 0x16C844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C844u;
        // 0x16c848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C84Cu;
    // 0x16c84c: 0x0  nop
    ctx->pc = 0x16c84cu;
    // NOP
    ctx->pc = 0x16c850u;
}
