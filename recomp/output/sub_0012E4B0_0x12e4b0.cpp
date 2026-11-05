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

// Function: sub_0012E4B0
// Address: 0x12e4b0 - 0x12e578
void sub_0012E4B0_0x12e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E4B0_0x12e4b0");
#endif

    switch (ctx->pc) {
        case 0x12e4d4u: goto label_12e4d4;
        case 0x12e4e4u: goto label_12e4e4;
        case 0x12e4f0u: goto label_12e4f0;
        case 0x12e500u: goto label_12e500;
        case 0x12e50cu: goto label_12e50c;
        case 0x12e514u: goto label_12e514;
        case 0x12e520u: goto label_12e520;
        case 0x12e528u: goto label_12e528;
        case 0x12e534u: goto label_12e534;
        case 0x12e53cu: goto label_12e53c;
        case 0x12e548u: goto label_12e548;
        case 0x12e55cu: goto label_12e55c;
        default: break;
    }

    ctx->pc = 0x12e4b0u;

    // 0x12e4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e4b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e4b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e4bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12e4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12e4c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e4c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12e4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12e4cc: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E4CCu;
    SET_GPR_U32(ctx, 31, 0x12E4D4u);
    ctx->pc = 0x12E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E4CCu;
    // 0x12e4d0: 0x2405045b  addiu       $a1, $zero, 0x45B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1115));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E4CCu, 0x12E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E4D4u;
label_12e4d4:
    // 0x12e4d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4d8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x12e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12e4dc: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E4DCu;
    SET_GPR_U32(ctx, 31, 0x12E4E4u);
    ctx->pc = 0x12E4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E4DCu;
    // 0x12e4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E4DCu, 0x12E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E4E4u;
label_12e4e4:
    // 0x12e4e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4e8: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12E4E8u;
    SET_GPR_U32(ctx, 31, 0x12E4F0u);
    ctx->pc = 0x12E4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E4E8u;
    // 0x12e4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12E4E8u, 0x12E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E4F0u;
label_12e4f0:
    // 0x12e4f0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x12e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12e4f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4f8: 0xc046002  jal         func_118008
    ctx->pc = 0x12E4F8u;
    SET_GPR_U32(ctx, 31, 0x12E500u);
    ctx->pc = 0x12E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E4F8u;
    // 0x12e4fc: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x12E4F8u, 0x12E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E500u;
label_12e500:
    // 0x12e500: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e504: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x12E504u;
    SET_GPR_U32(ctx, 31, 0x12E50Cu);
    ctx->pc = 0x12E508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E504u;
    // 0x12e508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x12E504u, 0x12E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E50Cu;
label_12e50c:
    // 0x12e50c: 0xc046086  jal         func_118218
    ctx->pc = 0x12E50Cu;
    SET_GPR_U32(ctx, 31, 0x12E514u);
    ctx->pc = 0x12E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E50Cu;
    // 0x12e510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x12E50Cu, 0x12E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E514u;
label_12e514:
    // 0x12e514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e518: 0xc046058  jal         func_118160
    ctx->pc = 0x12E518u;
    SET_GPR_U32(ctx, 31, 0x12E520u);
    ctx->pc = 0x12E51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E518u;
    // 0x12e51c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x12E518u, 0x12E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E520u;
label_12e520:
    // 0x12e520: 0xc0460bc  jal         func_1182F0
    ctx->pc = 0x12E520u;
    SET_GPR_U32(ctx, 31, 0x12E528u);
    ctx->pc = 0x12E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E520u;
    // 0x12e524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1182F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1182F0u, 0x12E520u, 0x12E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E528u;
label_12e528:
    // 0x12e528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e52c: 0xc04609e  jal         func_118278
    ctx->pc = 0x12E52Cu;
    SET_GPR_U32(ctx, 31, 0x12E534u);
    ctx->pc = 0x12E530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E52Cu;
    // 0x12e530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118278u, 0x12E52Cu, 0x12E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E534u;
label_12e534:
    // 0x12e534: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x12E534u;
    SET_GPR_U32(ctx, 31, 0x12E53Cu);
    ctx->pc = 0x12E538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E534u;
    // 0x12e538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x12E534u, 0x12E53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E53Cu;
label_12e53c:
    // 0x12e53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e540: 0xc046290  jal         func_118A40
    ctx->pc = 0x12E540u;
    SET_GPR_U32(ctx, 31, 0x12E548u);
    ctx->pc = 0x12E544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E540u;
    // 0x12e544: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x12E540u, 0x12E548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E548u;
label_12e548:
    // 0x12e548: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x12e548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12e54c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12e54cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e550: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12e550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12e554: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E554u;
    SET_GPR_U32(ctx, 31, 0x12E55Cu);
    ctx->pc = 0x12E558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E554u;
    // 0x12e558: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E554u, 0x12E55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E55Cu;
label_12e55c:
    // 0x12e55c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e560: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e564: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e568: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12e568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e56c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E56Cu;
        // 0x12e570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E574u;
    // 0x12e574: 0x0  nop
    ctx->pc = 0x12e574u;
    // NOP
    ctx->pc = 0x12e578u;
}
