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

// Function: sub_0012E3D8
// Address: 0x12e3d8 - 0x12e4b0
void sub_0012E3D8_0x12e3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E3D8_0x12e3d8");
#endif

    switch (ctx->pc) {
        case 0x12e3fcu: goto label_12e3fc;
        case 0x12e40cu: goto label_12e40c;
        case 0x12e418u: goto label_12e418;
        case 0x12e428u: goto label_12e428;
        case 0x12e438u: goto label_12e438;
        case 0x12e440u: goto label_12e440;
        case 0x12e450u: goto label_12e450;
        case 0x12e45cu: goto label_12e45c;
        case 0x12e464u: goto label_12e464;
        case 0x12e470u: goto label_12e470;
        case 0x12e478u: goto label_12e478;
        case 0x12e484u: goto label_12e484;
        case 0x12e498u: goto label_12e498;
        default: break;
    }

    ctx->pc = 0x12e3d8u;

    // 0x12e3d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e3dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e3e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e3e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12e3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12e3e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e3f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12e3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12e3f4: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E3F4u;
    SET_GPR_U32(ctx, 31, 0x12E3FCu);
    ctx->pc = 0x12E3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E3F4u;
    // 0x12e3f8: 0x2405043c  addiu       $a1, $zero, 0x43C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1084));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E3F4u, 0x12E3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E3FCu;
label_12e3fc:
    // 0x12e3fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e400: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x12e400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12e404: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E404u;
    SET_GPR_U32(ctx, 31, 0x12E40Cu);
    ctx->pc = 0x12E408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E404u;
    // 0x12e408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E404u, 0x12E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E40Cu;
label_12e40c:
    // 0x12e40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e410: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12E410u;
    SET_GPR_U32(ctx, 31, 0x12E418u);
    ctx->pc = 0x12E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E410u;
    // 0x12e414: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12E410u, 0x12E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E418u;
label_12e418:
    // 0x12e418: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x12e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12e41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e420: 0xc046002  jal         func_118008
    ctx->pc = 0x12E420u;
    SET_GPR_U32(ctx, 31, 0x12E428u);
    ctx->pc = 0x12E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E420u;
    // 0x12e424: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x12E420u, 0x12E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E428u;
label_12e428:
    // 0x12e428: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12E428u;
    {
        const bool branch_taken_0x12e428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E428u;
        // 0x12e42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e428) {
            ctx->pc = 0x12E45Cu;
            goto label_12e45c;
        }
    }
    ctx->pc = 0x12E430u;
    // 0x12e430: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x12E430u;
    SET_GPR_U32(ctx, 31, 0x12E438u);
    ctx->pc = 0x12E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E430u;
    // 0x12e434: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x12E430u, 0x12E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E438u;
label_12e438:
    // 0x12e438: 0xc046086  jal         func_118218
    ctx->pc = 0x12E438u;
    SET_GPR_U32(ctx, 31, 0x12E440u);
    ctx->pc = 0x12E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E438u;
    // 0x12e43c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x12E438u, 0x12E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E440u;
label_12e440:
    // 0x12e440: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E440u;
    {
        const bool branch_taken_0x12e440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e440) {
            ctx->pc = 0x12E45Cu;
            goto label_12e45c;
        }
    }
    ctx->pc = 0x12E448u;
    // 0x12e448: 0xc046086  jal         func_118218
    ctx->pc = 0x12E448u;
    SET_GPR_U32(ctx, 31, 0x12E450u);
    ctx->pc = 0x12E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E448u;
    // 0x12e44c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x12E448u, 0x12E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E450u;
label_12e450:
    // 0x12e450: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e454: 0xc046058  jal         func_118160
    ctx->pc = 0x12E454u;
    SET_GPR_U32(ctx, 31, 0x12E45Cu);
    ctx->pc = 0x12E458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E454u;
    // 0x12e458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x12E454u, 0x12E45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E45Cu;
label_12e45c:
    // 0x12e45c: 0xc046044  jal         func_118110
    ctx->pc = 0x12E45Cu;
    SET_GPR_U32(ctx, 31, 0x12E464u);
    ctx->pc = 0x12E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E45Cu;
    // 0x12e460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x12E45Cu, 0x12E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E464u;
label_12e464:
    // 0x12e464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e468: 0xc046030  jal         func_1180C0
    ctx->pc = 0x12E468u;
    SET_GPR_U32(ctx, 31, 0x12E470u);
    ctx->pc = 0x12E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E468u;
    // 0x12e46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x12E468u, 0x12E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E470u;
label_12e470:
    // 0x12e470: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x12E470u;
    SET_GPR_U32(ctx, 31, 0x12E478u);
    ctx->pc = 0x12E474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E470u;
    // 0x12e474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x12E470u, 0x12E478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E478u;
label_12e478:
    // 0x12e478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e47c: 0xc046290  jal         func_118A40
    ctx->pc = 0x12E47Cu;
    SET_GPR_U32(ctx, 31, 0x12E484u);
    ctx->pc = 0x12E480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E47Cu;
    // 0x12e480: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x12E47Cu, 0x12E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E484u;
label_12e484:
    // 0x12e484: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x12e484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12e488: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12e488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e48c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12e490: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E490u;
    SET_GPR_U32(ctx, 31, 0x12E498u);
    ctx->pc = 0x12E494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E490u;
    // 0x12e494: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E490u, 0x12E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E498u;
label_12e498:
    // 0x12e498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e49c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e49cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e4a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e4a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e4a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12e4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4A8u;
        // 0x12e4ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E4B0u;
}
