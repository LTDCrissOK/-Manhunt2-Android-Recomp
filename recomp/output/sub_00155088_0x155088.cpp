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

// Function: sub_00155088
// Address: 0x155088 - 0x155220
void sub_00155088_0x155088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155088_0x155088");
#endif

    switch (ctx->pc) {
        case 0x1550ecu: goto label_1550ec;
        case 0x155100u: goto label_155100;
        case 0x155114u: goto label_155114;
        case 0x155120u: goto label_155120;
        case 0x155130u: goto label_155130;
        case 0x15513cu: goto label_15513c;
        case 0x155160u: goto label_155160;
        case 0x15516cu: goto label_15516c;
        case 0x155178u: goto label_155178;
        case 0x155184u: goto label_155184;
        case 0x155190u: goto label_155190;
        case 0x1551a4u: goto label_1551a4;
        case 0x1551b0u: goto label_1551b0;
        case 0x1551bcu: goto label_1551bc;
        case 0x1551ccu: goto label_1551cc;
        case 0x1551d8u: goto label_1551d8;
        case 0x1551ecu: goto label_1551ec;
        case 0x1551f8u: goto label_1551f8;
        default: break;
    }

    ctx->pc = 0x155088u;

    // 0x155088: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15508c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x15508cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x155090: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155094: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x155094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x155098: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x155098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15509c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15509cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1550a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1550a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1550a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1550a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1550a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1550ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1550acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1550b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1550b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1550b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1550b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1550b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1550b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1550bc: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1550bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1550c0: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x1550c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1550c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1550c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1550c8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1550c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1550cc: 0x8e320660  lw          $s2, 0x660($s1)
    ctx->pc = 0x1550ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
    // 0x1550d0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1550d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1550d4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1550d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1550d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1550d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550dc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1550dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1550e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1550e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1550e4: 0xc04e16a  jal         func_1385A8
    ctx->pc = 0x1550E4u;
    SET_GPR_U32(ctx, 31, 0x1550ECu);
    ctx->pc = 0x1550E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1550E4u;
    // 0x1550e8: 0x8c74020c  lw          $s4, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1385A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A8u, 0x1550E4u, 0x1550ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1550ECu;
label_1550ec:
    // 0x1550ec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1550ECu;
    {
        const bool branch_taken_0x1550ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1550ec) {
            ctx->pc = 0x1550F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1550ECu;
            // 0x1550f0: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155108u;
            goto label_155108;
        }
    }
    ctx->pc = 0x1550F4u;
    // 0x1550f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1550f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550f8: 0xc04da5c  jal         func_136970
    ctx->pc = 0x1550F8u;
    SET_GPR_U32(ctx, 31, 0x155100u);
    ctx->pc = 0x1550FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1550F8u;
    // 0x1550fc: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x1550F8u, 0x155100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155100u;
label_155100:
    // 0x155100: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x155100u;
    {
        const bool branch_taken_0x155100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155100u;
        // 0x155104: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155100) {
            ctx->pc = 0x1551FCu;
            goto label_1551fc;
        }
    }
    ctx->pc = 0x155108u;
label_155108:
    // 0x155108: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x155108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15510c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x15510Cu;
    SET_GPR_U32(ctx, 31, 0x155114u);
    ctx->pc = 0x155110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15510Cu;
    // 0x155110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x15510Cu, 0x155114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155114u;
label_155114:
    // 0x155114: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x155114u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x155118: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x155118u;
    SET_GPR_U32(ctx, 31, 0x155120u);
    ctx->pc = 0x15511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155118u;
    // 0x15511c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x155118u, 0x155120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155120u;
label_155120:
    // 0x155120: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x155120u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x155124: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x155124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155128: 0xc0551e4  jal         func_154790
    ctx->pc = 0x155128u;
    SET_GPR_U32(ctx, 31, 0x155130u);
    ctx->pc = 0x15512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155128u;
    // 0x15512c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154790u, 0x155128u, 0x155130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155130u;
label_155130:
    // 0x155130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155134: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x155134u;
    SET_GPR_U32(ctx, 31, 0x15513Cu);
    ctx->pc = 0x155138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155134u;
    // 0x155138: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x155134u, 0x15513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15513Cu;
label_15513c:
    // 0x15513c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15513cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155140: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x155140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155144: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x155144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155148: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x155148u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15514c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x15514cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x155150: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x155150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155158: 0xc04daca  jal         func_136B28
    ctx->pc = 0x155158u;
    SET_GPR_U32(ctx, 31, 0x155160u);
    ctx->pc = 0x15515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155158u;
    // 0x15515c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x155158u, 0x155160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155160u;
label_155160:
    // 0x155160: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x155160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155164: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x155164u;
    SET_GPR_U32(ctx, 31, 0x15516Cu);
    ctx->pc = 0x155168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155164u;
    // 0x155168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x155164u, 0x15516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15516Cu;
label_15516c:
    // 0x15516c: 0x8e250668  lw          $a1, 0x668($s1)
    ctx->pc = 0x15516cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1640)));
    // 0x155170: 0xc046104  jal         func_118410
    ctx->pc = 0x155170u;
    SET_GPR_U32(ctx, 31, 0x155178u);
    ctx->pc = 0x155174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155170u;
    // 0x155174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x155170u, 0x155178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155178u;
label_155178:
    // 0x155178: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x155178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x15517c: 0xc046290  jal         func_118A40
    ctx->pc = 0x15517Cu;
    SET_GPR_U32(ctx, 31, 0x155184u);
    ctx->pc = 0x155180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15517Cu;
    // 0x155180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x15517Cu, 0x155184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155184u;
label_155184:
    // 0x155184: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x155184u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x155188: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x155188u;
    SET_GPR_U32(ctx, 31, 0x155190u);
    ctx->pc = 0x15518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155188u;
    // 0x15518c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x155188u, 0x155190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155190u;
label_155190:
    // 0x155190: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x155190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155194: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x155194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155198: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x155198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15519c: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x15519Cu;
    SET_GPR_U32(ctx, 31, 0x1551A4u);
    ctx->pc = 0x1551A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15519Cu;
    // 0x1551a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x15519Cu, 0x1551A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551A4u;
label_1551a4:
    // 0x1551a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1551a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1551a8: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1551A8u;
    SET_GPR_U32(ctx, 31, 0x1551B0u);
    ctx->pc = 0x1551ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551A8u;
    // 0x1551ac: 0x24050049  addiu       $a1, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1551A8u, 0x1551B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551B0u;
label_1551b0:
    // 0x1551b0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1551b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1551b4: 0xc04d9a2  jal         func_136688
    ctx->pc = 0x1551B4u;
    SET_GPR_U32(ctx, 31, 0x1551BCu);
    ctx->pc = 0x1551B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551B4u;
    // 0x1551b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136688u, 0x1551B4u, 0x1551BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551BCu;
label_1551bc:
    // 0x1551bc: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1551bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1551c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1551c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1551c4: 0xc04d9e4  jal         func_136790
    ctx->pc = 0x1551C4u;
    SET_GPR_U32(ctx, 31, 0x1551CCu);
    ctx->pc = 0x1551C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551C4u;
    // 0x1551c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136790u, 0x1551C4u, 0x1551CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551CCu;
label_1551cc:
    // 0x1551cc: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1551ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1551d0: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x1551D0u;
    SET_GPR_U32(ctx, 31, 0x1551D8u);
    ctx->pc = 0x1551D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551D0u;
    // 0x1551d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x1551D0u, 0x1551D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551D8u;
label_1551d8:
    // 0x1551d8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1551d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1551dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1551dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1551e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1551e4: 0xc04d7dc  jal         func_135F70
    ctx->pc = 0x1551E4u;
    SET_GPR_U32(ctx, 31, 0x1551ECu);
    ctx->pc = 0x1551E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551E4u;
    // 0x1551e8: 0xae2204c8  sw          $v0, 0x4C8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x1551E4u, 0x1551ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551ECu;
label_1551ec:
    // 0x1551ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1551ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1551f0: 0xc04e046  jal         func_138118
    ctx->pc = 0x1551F0u;
    SET_GPR_U32(ctx, 31, 0x1551F8u);
    ctx->pc = 0x1551F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551F0u;
    // 0x1551f4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138118u, 0x1551F0u, 0x1551F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1551F8u;
label_1551f8:
    // 0x1551f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1551f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1551fc:
    // 0x1551fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1551fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155200: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155204: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155208: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x155208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15520c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15520cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x155210: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x155210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x155214: 0x3e00008  jr          $ra
    ctx->pc = 0x155214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155214u;
        // 0x155218: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15521Cu;
    // 0x15521c: 0x0  nop
    ctx->pc = 0x15521cu;
    // NOP
    ctx->pc = 0x155220u;
}
