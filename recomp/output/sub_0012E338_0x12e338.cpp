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

// Function: sub_0012E338
// Address: 0x12e338 - 0x12e3d8
void sub_0012E338_0x12e338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E338_0x12e338");
#endif

    switch (ctx->pc) {
        case 0x12e35cu: goto label_12e35c;
        case 0x12e36cu: goto label_12e36c;
        case 0x12e378u: goto label_12e378;
        case 0x12e388u: goto label_12e388;
        case 0x12e394u: goto label_12e394;
        case 0x12e39cu: goto label_12e39c;
        case 0x12e3a8u: goto label_12e3a8;
        case 0x12e3bcu: goto label_12e3bc;
        default: break;
    }

    ctx->pc = 0x12e338u;

    // 0x12e338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e33c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e340: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e344: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12e344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e348: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12e348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e34c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e350: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12e350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12e354: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E354u;
    SET_GPR_U32(ctx, 31, 0x12E35Cu);
    ctx->pc = 0x12E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E354u;
    // 0x12e358: 0x2405042a  addiu       $a1, $zero, 0x42A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E354u, 0x12E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E35Cu;
label_12e35c:
    // 0x12e35c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e360: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x12e360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12e364: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E364u;
    SET_GPR_U32(ctx, 31, 0x12E36Cu);
    ctx->pc = 0x12E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E364u;
    // 0x12e368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E364u, 0x12E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E36Cu;
label_12e36c:
    // 0x12e36c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e370: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12E370u;
    SET_GPR_U32(ctx, 31, 0x12E378u);
    ctx->pc = 0x12E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E370u;
    // 0x12e374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12E370u, 0x12E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E378u;
label_12e378:
    // 0x12e378: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12e378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e380: 0xc046002  jal         func_118008
    ctx->pc = 0x12E380u;
    SET_GPR_U32(ctx, 31, 0x12E388u);
    ctx->pc = 0x12E384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E380u;
    // 0x12e384: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x12E380u, 0x12E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E388u;
label_12e388:
    // 0x12e388: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e38c: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x12E38Cu;
    SET_GPR_U32(ctx, 31, 0x12E394u);
    ctx->pc = 0x12E390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E38Cu;
    // 0x12e390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x12E38Cu, 0x12E394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E394u;
label_12e394:
    // 0x12e394: 0xc046086  jal         func_118218
    ctx->pc = 0x12E394u;
    SET_GPR_U32(ctx, 31, 0x12E39Cu);
    ctx->pc = 0x12E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E394u;
    // 0x12e398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x12E394u, 0x12E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E39Cu;
label_12e39c:
    // 0x12e39c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3a0: 0xc046058  jal         func_118160
    ctx->pc = 0x12E3A0u;
    SET_GPR_U32(ctx, 31, 0x12E3A8u);
    ctx->pc = 0x12E3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E3A0u;
    // 0x12e3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x12E3A0u, 0x12E3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E3A8u;
label_12e3a8:
    // 0x12e3a8: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x12e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12e3ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12e3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3b0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12e3b4: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E3B4u;
    SET_GPR_U32(ctx, 31, 0x12E3BCu);
    ctx->pc = 0x12E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E3B4u;
    // 0x12e3b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E3B4u, 0x12E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E3BCu;
label_12e3bc:
    // 0x12e3bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e3bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e3c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e3c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e3c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e3c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e3c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12e3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x12E3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3CCu;
        // 0x12e3d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E3D4u;
    // 0x12e3d4: 0x0  nop
    ctx->pc = 0x12e3d4u;
    // NOP
    ctx->pc = 0x12e3d8u;
}
