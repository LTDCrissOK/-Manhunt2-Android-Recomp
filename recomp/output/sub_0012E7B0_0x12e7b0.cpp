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

// Function: sub_0012E7B0
// Address: 0x12e7b0 - 0x12e850
void sub_0012E7B0_0x12e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E7B0_0x12e7b0");
#endif

    switch (ctx->pc) {
        case 0x12e7d0u: goto label_12e7d0;
        case 0x12e7e0u: goto label_12e7e0;
        case 0x12e7f0u: goto label_12e7f0;
        case 0x12e7f8u: goto label_12e7f8;
        case 0x12e804u: goto label_12e804;
        case 0x12e80cu: goto label_12e80c;
        case 0x12e818u: goto label_12e818;
        case 0x12e824u: goto label_12e824;
        case 0x12e838u: goto label_12e838;
        default: break;
    }

    ctx->pc = 0x12e7b0u;

    // 0x12e7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e7b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e7b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12e7b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e7c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e7c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12e7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12e7c8: 0xc0456b4  jal         func_115AD0
    ctx->pc = 0x12E7C8u;
    SET_GPR_U32(ctx, 31, 0x12E7D0u);
    ctx->pc = 0x12E7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7C8u;
    // 0x12e7cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AD0u, 0x12E7C8u, 0x12E7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7D0u;
label_12e7d0:
    // 0x12e7d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7d8: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E7D8u;
    SET_GPR_U32(ctx, 31, 0x12E7E0u);
    ctx->pc = 0x12E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7D8u;
    // 0x12e7dc: 0x240504f8  addiu       $a1, $zero, 0x4F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E7D8u, 0x12E7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7E0u;
label_12e7e0:
    // 0x12e7e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7e4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x12e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12e7e8: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E7E8u;
    SET_GPR_U32(ctx, 31, 0x12E7F0u);
    ctx->pc = 0x12E7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7E8u;
    // 0x12e7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E7E8u, 0x12E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7F0u;
label_12e7f0:
    // 0x12e7f0: 0xc046144  jal         func_118510
    ctx->pc = 0x12E7F0u;
    SET_GPR_U32(ctx, 31, 0x12E7F8u);
    ctx->pc = 0x12E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7F0u;
    // 0x12e7f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118510u, 0x12E7F0u, 0x12E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7F8u;
label_12e7f8:
    // 0x12e7f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7fc: 0xc046138  jal         func_1184E0
    ctx->pc = 0x12E7FCu;
    SET_GPR_U32(ctx, 31, 0x12E804u);
    ctx->pc = 0x12E800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7FCu;
    // 0x12e800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x12E7FCu, 0x12E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E804u;
label_12e804:
    // 0x12e804: 0xc04615c  jal         func_118570
    ctx->pc = 0x12E804u;
    SET_GPR_U32(ctx, 31, 0x12E80Cu);
    ctx->pc = 0x12E808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E804u;
    // 0x12e808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118570u, 0x12E804u, 0x12E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E80Cu;
label_12e80c:
    // 0x12e80c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e810: 0xc046154  jal         func_118550
    ctx->pc = 0x12E810u;
    SET_GPR_U32(ctx, 31, 0x12E818u);
    ctx->pc = 0x12E814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E810u;
    // 0x12e814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x12E810u, 0x12E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E818u;
label_12e818:
    // 0x12e818: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e81c: 0xc045fa8  jal         func_117EA0
    ctx->pc = 0x12E81Cu;
    SET_GPR_U32(ctx, 31, 0x12E824u);
    ctx->pc = 0x12E820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E81Cu;
    // 0x12e820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117EA0u, 0x12E81Cu, 0x12E824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E824u;
label_12e824:
    // 0x12e824: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x12e824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12e828: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12e828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e82c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12e82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12e830: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E830u;
    SET_GPR_U32(ctx, 31, 0x12E838u);
    ctx->pc = 0x12E834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E830u;
    // 0x12e834: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E830u, 0x12E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E838u;
label_12e838:
    // 0x12e838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e83c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e83cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e840: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e844: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12e844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e848: 0x3e00008  jr          $ra
    ctx->pc = 0x12E848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E848u;
        // 0x12e84c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E850u;
}
