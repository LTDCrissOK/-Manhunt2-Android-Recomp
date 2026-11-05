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

// Function: sub_003CA548
// Address: 0x3ca548 - 0x3ca620
void sub_003CA548_0x3ca548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA548_0x3ca548");
#endif

    switch (ctx->pc) {
        case 0x3ca588u: goto label_3ca588;
        case 0x3ca590u: goto label_3ca590;
        case 0x3ca5e8u: goto label_3ca5e8;
        case 0x3ca5f8u: goto label_3ca5f8;
        case 0x3ca608u: goto label_3ca608;
        case 0x3ca618u: goto label_3ca618;
        default: break;
    }

    ctx->pc = 0x3ca548u;

    // 0x3ca548: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ca548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3ca54c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ca54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3ca550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca554: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3ca554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3ca558: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3ca558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3ca55c: 0x3c160066  lui         $s6, 0x66
    ctx->pc = 0x3ca55cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
    // 0x3ca560: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3ca560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3ca564: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x3ca564u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x3ca568: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3ca568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3ca56c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3ca56cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ca570: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ca570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3ca574: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x3ca574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ca578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ca578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ca57c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x3ca57cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3ca580: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3ca580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3ca584: 0x26300009  addiu       $s0, $s1, 0x9
    ctx->pc = 0x3ca584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
label_3ca588:
    // 0x3ca588: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CA588u;
    SET_GPR_U32(ctx, 31, 0x3CA590u);
    ctx->pc = 0x3CA58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA588u;
    // 0x3ca58c: 0x8ec41540  lw          $a0, 0x1540($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 5440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CA588u, 0x3CA590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA590u;
label_3ca590:
    // 0x3ca590: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ca590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ca594: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x3ca594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x3ca598: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x3ca598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ca59c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3ca59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3ca5a0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3ca5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3ca5a4: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x3ca5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3ca5a8: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x3ca5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3ca5ac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3ca5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ca5b0: 0x1054000f  beq         $v0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x3CA5B0u;
    {
        const bool branch_taken_0x3ca5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x3CA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5B0u;
        // 0x3ca5b4: 0x28450002  slti        $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca5b0) {
            ctx->pc = 0x3CA5F0u;
            goto label_3ca5f0;
        }
    }
    ctx->pc = 0x3CA5B8u;
    // 0x3ca5b8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CA5B8u;
    {
        const bool branch_taken_0x3ca5b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5B8u;
        // 0x3ca5bc: 0x26a419b0  addiu       $a0, $s5, 0x19B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca5b8) {
            ctx->pc = 0x3CA5D0u;
            goto label_3ca5d0;
        }
    }
    ctx->pc = 0x3CA5C0u;
    // 0x3ca5c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CA5C0u;
    {
        const bool branch_taken_0x3ca5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5C0u;
        // 0x3ca5c4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca5c0) {
            ctx->pc = 0x3CA5E0u;
            goto label_3ca5e0;
        }
    }
    ctx->pc = 0x3CA5C8u;
    // 0x3ca5c8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3CA5C8u;
    {
        const bool branch_taken_0x3ca5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca5c8) {
            ctx->pc = 0x3CA610u;
            goto label_3ca610;
        }
    }
    ctx->pc = 0x3CA5D0u;
label_3ca5d0:
    // 0x3ca5d0: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x3CA5D0u;
    {
        const bool branch_taken_0x3ca5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x3CA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5D0u;
        // 0x3ca5d4: 0x2031821  addu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca5d0) {
            ctx->pc = 0x3CA600u;
            goto label_3ca600;
        }
    }
    ctx->pc = 0x3CA5D8u;
    // 0x3ca5d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3CA5D8u;
    {
        const bool branch_taken_0x3ca5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca5d8) {
            ctx->pc = 0x3CA610u;
            goto label_3ca610;
        }
    }
    ctx->pc = 0x3CA5E0u;
label_3ca5e0:
    // 0x3ca5e0: 0xc0f2634  jal         func_3C98D0
    ctx->pc = 0x3CA5E0u;
    SET_GPR_U32(ctx, 31, 0x3CA5E8u);
    ctx->pc = 0x3CA5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA5E0u;
    // 0x3ca5e4: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98D0u, 0x3CA5E0u, 0x3CA5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA5E8u;
label_3ca5e8:
    // 0x3ca5e8: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x3CA5E8u;
    {
        const bool branch_taken_0x3ca5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca5e8) {
            ctx->pc = 0x3CA588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca588;
        }
    }
    ctx->pc = 0x3CA5F0u;
label_3ca5f0:
    // 0x3ca5f0: 0xc0f2614  jal         func_3C9850
    ctx->pc = 0x3CA5F0u;
    SET_GPR_U32(ctx, 31, 0x3CA5F8u);
    ctx->pc = 0x3CA5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA5F0u;
    // 0x3ca5f4: 0x90c40000  lbu         $a0, 0x0($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9850u, 0x3CA5F0u, 0x3CA5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA5F8u;
label_3ca5f8:
    // 0x3ca5f8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x3CA5F8u;
    {
        const bool branch_taken_0x3ca5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca5f8) {
            ctx->pc = 0x3CA588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca588;
        }
    }
    ctx->pc = 0x3CA600u;
label_3ca600:
    // 0x3ca600: 0xc0f2644  jal         func_3C9910
    ctx->pc = 0x3CA600u;
    SET_GPR_U32(ctx, 31, 0x3CA608u);
    ctx->pc = 0x3CA604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA600u;
    // 0x3ca604: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9910u, 0x3CA600u, 0x3CA608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA608u;
label_3ca608:
    // 0x3ca608: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x3CA608u;
    {
        const bool branch_taken_0x3ca608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca608) {
            ctx->pc = 0x3CA588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca588;
        }
    }
    ctx->pc = 0x3CA610u;
label_3ca610:
    // 0x3ca610: 0xc0f3070  jal         func_3CC1C0
    ctx->pc = 0x3CA610u;
    SET_GPR_U32(ctx, 31, 0x3CA618u);
    ctx->pc = 0x3CC1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC1C0u, 0x3CA610u, 0x3CA618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA618u;
label_3ca618:
    // 0x3ca618: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x3CA618u;
    {
        const bool branch_taken_0x3ca618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca618) {
            ctx->pc = 0x3CA588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca588;
        }
    }
    ctx->pc = 0x3CA620u;
}
