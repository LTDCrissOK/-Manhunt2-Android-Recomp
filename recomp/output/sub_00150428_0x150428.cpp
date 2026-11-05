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

// Function: sub_00150428
// Address: 0x150428 - 0x150528
void sub_00150428_0x150428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150428_0x150428");
#endif

    switch (ctx->pc) {
        case 0x150450u: goto label_150450;
        case 0x15045cu: goto label_15045c;
        case 0x15046cu: goto label_15046c;
        case 0x150478u: goto label_150478;
        case 0x15049cu: goto label_15049c;
        case 0x1504a8u: goto label_1504a8;
        case 0x1504b4u: goto label_1504b4;
        case 0x1504c4u: goto label_1504c4;
        case 0x1504e0u: goto label_1504e0;
        case 0x1504f4u: goto label_1504f4;
        case 0x150510u: goto label_150510;
        default: break;
    }

    ctx->pc = 0x150428u;

    // 0x150428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15042c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15042cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x150430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x150434: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x150434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x150438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15043c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x15043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x150440: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x150440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x150444: 0x8e1108c0  lw          $s1, 0x8C0($s0)
    ctx->pc = 0x150444u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2240)));
    // 0x150448: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x150448u;
    SET_GPR_U32(ctx, 31, 0x150450u);
    ctx->pc = 0x15044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150448u;
    // 0x15044c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x150448u, 0x150450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150450u;
label_150450:
    // 0x150450: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150450u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150454: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x150454u;
    SET_GPR_U32(ctx, 31, 0x15045Cu);
    ctx->pc = 0x150458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150454u;
    // 0x150458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x150454u, 0x15045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15045Cu;
label_15045c:
    // 0x15045c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x15045cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150460: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x150460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x150464: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x150464u;
    SET_GPR_U32(ctx, 31, 0x15046Cu);
    ctx->pc = 0x150468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150464u;
    // 0x150468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x150464u, 0x15046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15046Cu;
label_15046c:
    // 0x15046c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15046cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150470: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x150470u;
    SET_GPR_U32(ctx, 31, 0x150478u);
    ctx->pc = 0x150474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150470u;
    // 0x150474: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x150470u, 0x150478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150478u;
label_150478:
    // 0x150478: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x150478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15047c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x15047cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150480: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x150480u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150484: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x150484u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150488: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x150488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15048c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x15048cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150494: 0xc04daca  jal         func_136B28
    ctx->pc = 0x150494u;
    SET_GPR_U32(ctx, 31, 0x15049Cu);
    ctx->pc = 0x150498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150494u;
    // 0x150498: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x150494u, 0x15049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15049Cu;
label_15049c:
    // 0x15049c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15049cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504a0: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x1504A0u;
    SET_GPR_U32(ctx, 31, 0x1504A8u);
    ctx->pc = 0x1504A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504A0u;
    // 0x1504a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x1504A0u, 0x1504A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504A8u;
label_1504a8:
    // 0x1504a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1504a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504ac: 0xc046104  jal         func_118410
    ctx->pc = 0x1504ACu;
    SET_GPR_U32(ctx, 31, 0x1504B4u);
    ctx->pc = 0x1504B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504ACu;
    // 0x1504b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x1504ACu, 0x1504B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504B4u;
label_1504b4:
    // 0x1504b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1504b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1504b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1504b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1504bc: 0xc046290  jal         func_118A40
    ctx->pc = 0x1504BCu;
    SET_GPR_U32(ctx, 31, 0x1504C4u);
    ctx->pc = 0x1504C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504BCu;
    // 0x1504c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x1504BCu, 0x1504C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504C4u;
label_1504c4:
    // 0x1504c4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1504c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x1504c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1504c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1504ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1504d0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1504d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1504d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1504d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1504d8: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x1504D8u;
    SET_GPR_U32(ctx, 31, 0x1504E0u);
    ctx->pc = 0x1504DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504D8u;
    // 0x1504dc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x1504D8u, 0x1504E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504E0u;
label_1504e0:
    // 0x1504e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1504e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1504e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1504e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504ec: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x1504ECu;
    SET_GPR_U32(ctx, 31, 0x1504F4u);
    ctx->pc = 0x1504F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504ECu;
    // 0x1504f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x1504ECu, 0x1504F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504F4u;
label_1504f4:
    // 0x1504f4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1504f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1504f8: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1504f8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1504fc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1504fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x150500: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x150500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x150504: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x150504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x150508: 0xc043c56  jal         func_10F158
    ctx->pc = 0x150508u;
    SET_GPR_U32(ctx, 31, 0x150510u);
    ctx->pc = 0x15050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150508u;
    // 0x15050c: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x150508u, 0x150510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150510u;
label_150510:
    // 0x150510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x150510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x150514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x150518: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x150518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15051c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15051cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x150520: 0x3e00008  jr          $ra
    ctx->pc = 0x150520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150520u;
        // 0x150524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150528u;
}
