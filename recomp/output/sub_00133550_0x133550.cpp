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

// Function: sub_00133550
// Address: 0x133550 - 0x133658
void sub_00133550_0x133550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133550_0x133550");
#endif

    switch (ctx->pc) {
        case 0x133578u: goto label_133578;
        case 0x133588u: goto label_133588;
        case 0x1335d0u: goto label_1335d0;
        case 0x1335d8u: goto label_1335d8;
        case 0x1335f4u: goto label_1335f4;
        case 0x133600u: goto label_133600;
        case 0x133610u: goto label_133610;
        case 0x13361cu: goto label_13361c;
        case 0x13362cu: goto label_13362c;
        case 0x133638u: goto label_133638;
        default: break;
    }

    ctx->pc = 0x133550u;

    // 0x133550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x133550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x133554: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x133554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x133558: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x133558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13355c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13355cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133560: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x133560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133564: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x133564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x133568: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x133568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13356c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x133570: 0xc04566a  jal         func_1159A8
    ctx->pc = 0x133570u;
    SET_GPR_U32(ctx, 31, 0x133578u);
    ctx->pc = 0x133574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133570u;
    // 0x133574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A8u, 0x133570u, 0x133578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133578u;
label_133578:
    // 0x133578: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x133578u;
    {
        const bool branch_taken_0x133578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133578u;
        // 0x13357c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133578) {
            ctx->pc = 0x13363Cu;
            goto label_13363c;
        }
    }
    ctx->pc = 0x133580u;
    // 0x133580: 0xc045616  jal         func_115858
    ctx->pc = 0x133580u;
    SET_GPR_U32(ctx, 31, 0x133588u);
    ctx->pc = 0x133584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133580u;
    // 0x133584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115858u, 0x133580u, 0x133588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133588u;
label_133588:
    // 0x133588: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x133588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13358c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x133590: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x133590u;
    {
        const bool branch_taken_0x133590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x133594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133590u;
        // 0x133594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133590) {
            ctx->pc = 0x13363Cu;
            goto label_13363c;
        }
    }
    ctx->pc = 0x133598u;
    // 0x133598: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x133598u;
    {
        const bool branch_taken_0x133598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133598u;
        // 0x13359c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133598) {
            ctx->pc = 0x1335B8u;
            goto label_1335b8;
        }
    }
    ctx->pc = 0x1335A0u;
    // 0x1335a0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1335A0u;
    {
        const bool branch_taken_0x1335a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1335A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335A0u;
        // 0x1335a4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335a0) {
            ctx->pc = 0x1335B8u;
            goto label_1335b8;
        }
    }
    ctx->pc = 0x1335A8u;
    // 0x1335a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1335A8u;
    {
        const bool branch_taken_0x1335a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1335ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335A8u;
        // 0x1335ac: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335a8) {
            ctx->pc = 0x1335B8u;
            goto label_1335b8;
        }
    }
    ctx->pc = 0x1335B0u;
    // 0x1335b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1335B0u;
    {
        const bool branch_taken_0x1335b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1335B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335B0u;
        // 0x1335b4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335b0) {
            ctx->pc = 0x1335C0u;
            goto label_1335c0;
        }
    }
    ctx->pc = 0x1335B8u;
label_1335b8:
    // 0x1335b8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1335B8u;
    {
        const bool branch_taken_0x1335b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1335BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335B8u;
        // 0x1335bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335b8) {
            ctx->pc = 0x13363Cu;
            goto label_13363c;
        }
    }
    ctx->pc = 0x1335C0u;
label_1335c0:
    // 0x1335c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1335c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1335c4: 0x24529c14  addiu       $s2, $v0, -0x63EC
    ctx->pc = 0x1335c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x1335c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1335C8u;
    {
        const bool branch_taken_0x1335c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1335CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1335C8u;
        // 0x1335cc: 0x3c110049  lui         $s1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335c8) {
            ctx->pc = 0x133610u;
            goto label_133610;
        }
    }
    ctx->pc = 0x1335D0u;
label_1335d0:
    // 0x1335d0: 0xc042442  jal         func_109108
    ctx->pc = 0x1335D0u;
    SET_GPR_U32(ctx, 31, 0x1335D8u);
    ctx->pc = 0x1335D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1335D0u;
    // 0x1335d4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109108u, 0x1335D0u, 0x1335D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335D8u;
label_1335d8:
    // 0x1335d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1335d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1335dc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1335dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1335e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1335e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1335e4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1335E4u;
    {
        const bool branch_taken_0x1335e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1335e4) {
            ctx->pc = 0x133608u;
            goto label_133608;
        }
    }
    ctx->pc = 0x1335ECu;
    // 0x1335ec: 0xc042426  jal         func_109098
    ctx->pc = 0x1335ECu;
    SET_GPR_U32(ctx, 31, 0x1335F4u);
    ctx->pc = 0x1335F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1335ECu;
    // 0x1335f0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109098u, 0x1335ECu, 0x1335F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1335F4u;
label_1335f4:
    // 0x1335f4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1335f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1335f8: 0xc041eca  jal         func_107B28
    ctx->pc = 0x1335F8u;
    SET_GPR_U32(ctx, 31, 0x133600u);
    ctx->pc = 0x1335FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1335F8u;
    // 0x1335fc: 0x26248758  addiu       $a0, $s1, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B28u, 0x1335F8u, 0x133600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133600u;
label_133600:
    // 0x133600: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x133600u;
    {
        const bool branch_taken_0x133600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133600u;
        // 0x133604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133600) {
            ctx->pc = 0x133614u;
            goto label_133614;
        }
    }
    ctx->pc = 0x133608u;
label_133608:
    // 0x133608: 0xc043f1a  jal         func_10FC68
    ctx->pc = 0x133608u;
    SET_GPR_U32(ctx, 31, 0x133610u);
    ctx->pc = 0x13360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133608u;
    // 0x13360c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC68u, 0x133608u, 0x133610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133610u;
label_133610:
    // 0x133610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133614:
    // 0x133614: 0xc045632  jal         func_1158C8
    ctx->pc = 0x133614u;
    SET_GPR_U32(ctx, 31, 0x13361Cu);
    ctx->pc = 0x133618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133614u;
    // 0x133618: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1158C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C8u, 0x133614u, 0x13361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13361Cu;
label_13361c:
    // 0x13361c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13361Cu;
    {
        const bool branch_taken_0x13361c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13361c) {
            ctx->pc = 0x1335D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1335d0;
        }
    }
    ctx->pc = 0x133624u;
    // 0x133624: 0xc04561a  jal         func_115868
    ctx->pc = 0x133624u;
    SET_GPR_U32(ctx, 31, 0x13362Cu);
    ctx->pc = 0x133628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133624u;
    // 0x133628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x133624u, 0x13362Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13362Cu;
label_13362c:
    // 0x13362c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x13362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x133630: 0xc043c20  jal         func_10F080
    ctx->pc = 0x133630u;
    SET_GPR_U32(ctx, 31, 0x133638u);
    ctx->pc = 0x133634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133630u;
    // 0x133634: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F080u, 0x133630u, 0x133638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133638u;
label_133638:
    // 0x133638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13363c:
    // 0x13363c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13363cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133640: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x133640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x133644: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x133644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133648: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x133648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13364c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13364cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133650: 0x3e00008  jr          $ra
    ctx->pc = 0x133650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133650u;
        // 0x133654: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133658u;
}
