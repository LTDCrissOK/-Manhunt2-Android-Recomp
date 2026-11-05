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

// Function: sub_00290328
// Address: 0x290328 - 0x290480
void sub_00290328_0x290328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290328_0x290328");
#endif

    switch (ctx->pc) {
        case 0x290354u: goto label_290354;
        case 0x29035cu: goto label_29035c;
        case 0x290374u: goto label_290374;
        case 0x29037cu: goto label_29037c;
        case 0x29038cu: goto label_29038c;
        case 0x2903a0u: goto label_2903a0;
        case 0x2903acu: goto label_2903ac;
        case 0x2903b8u: goto label_2903b8;
        case 0x2903ccu: goto label_2903cc;
        case 0x2903e4u: goto label_2903e4;
        case 0x290414u: goto label_290414;
        case 0x29041cu: goto label_29041c;
        case 0x29042cu: goto label_29042c;
        case 0x290440u: goto label_290440;
        case 0x29044cu: goto label_29044c;
        case 0x290454u: goto label_290454;
        case 0x290464u: goto label_290464;
        default: break;
    }

    ctx->pc = 0x290328u;

    // 0x290328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29032c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x290330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x290330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x290334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x290334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290338: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x290338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29033c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29033cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x290340: 0x8e22030c  lw          $v0, 0x30C($s1)
    ctx->pc = 0x290340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 780)));
    // 0x290344: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x290344u;
    {
        const bool branch_taken_0x290344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290344) {
            ctx->pc = 0x29036Cu;
            goto label_29036c;
        }
    }
    ctx->pc = 0x29034Cu;
    // 0x29034c: 0xc0a9748  jal         func_2A5D20
    ctx->pc = 0x29034Cu;
    SET_GPR_U32(ctx, 31, 0x290354u);
    ctx->pc = 0x2A5D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5D20u, 0x29034Cu, 0x290354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290354u;
label_290354:
    // 0x290354: 0xc0a9c2a  jal         func_2A70A8
    ctx->pc = 0x290354u;
    SET_GPR_U32(ctx, 31, 0x29035Cu);
    ctx->pc = 0x290358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290354u;
    // 0x290358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A70A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A70A8u, 0x290354u, 0x29035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29035Cu;
label_29035c:
    // 0x29035c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x29035Cu;
    {
        const bool branch_taken_0x29035c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29035Cu;
        // 0x290360: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29035c) {
            ctx->pc = 0x290468u;
            goto label_290468;
        }
    }
    ctx->pc = 0x290364u;
    // 0x290364: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x290364u;
    {
        const bool branch_taken_0x290364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290364) {
            ctx->pc = 0x290374u;
            goto label_290374;
        }
    }
    ctx->pc = 0x29036Cu;
label_29036c:
    // 0x29036c: 0xc0a7adc  jal         func_29EB70
    ctx->pc = 0x29036Cu;
    SET_GPR_U32(ctx, 31, 0x290374u);
    ctx->pc = 0x290370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29036Cu;
    // 0x290370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB70u, 0x29036Cu, 0x290374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290374u;
label_290374:
    // 0x290374: 0xc0a7c16  jal         func_29F058
    ctx->pc = 0x290374u;
    SET_GPR_U32(ctx, 31, 0x29037Cu);
    ctx->pc = 0x290378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290374u;
    // 0x290378: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F058u, 0x290374u, 0x29037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29037Cu;
label_29037c:
    // 0x29037c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29037cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x290380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x290380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290384: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x290384u;
    SET_GPR_U32(ctx, 31, 0x29038Cu);
    ctx->pc = 0x290388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290384u;
    // 0x290388: 0x24a5b3e0  addiu       $a1, $a1, -0x4C20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x290384u, 0x29038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29038Cu;
label_29038c:
    // 0x29038c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29038cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x290390: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x290390u;
    {
        const bool branch_taken_0x290390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290390) {
            ctx->pc = 0x290394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290390u;
            // 0x290394: 0x8e220308  lw          $v0, 0x308($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2903ECu;
            goto label_2903ec;
        }
    }
    ctx->pc = 0x290398u;
    // 0x290398: 0xc0a7c16  jal         func_29F058
    ctx->pc = 0x290398u;
    SET_GPR_U32(ctx, 31, 0x2903A0u);
    ctx->pc = 0x29039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290398u;
    // 0x29039c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F058u, 0x290398u, 0x2903A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903A0u;
label_2903a0:
    // 0x2903a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2903a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2903a4: 0xc0a6892  jal         func_29A248
    ctx->pc = 0x2903A4u;
    SET_GPR_U32(ctx, 31, 0x2903ACu);
    ctx->pc = 0x2903A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2903A4u;
    // 0x2903a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A248u, 0x2903A4u, 0x2903ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903ACu;
label_2903ac:
    // 0x2903ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2903acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2903b0: 0xc0a6890  jal         func_29A240
    ctx->pc = 0x2903B0u;
    SET_GPR_U32(ctx, 31, 0x2903B8u);
    ctx->pc = 0x2903B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2903B0u;
    // 0x2903b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A240u, 0x2903B0u, 0x2903B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903B8u;
label_2903b8:
    // 0x2903b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2903B8u;
    {
        const bool branch_taken_0x2903b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2903BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903B8u;
        // 0x2903bc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903b8) {
            ctx->pc = 0x2903E8u;
            goto label_2903e8;
        }
    }
    ctx->pc = 0x2903C0u;
    // 0x2903c0: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x2903c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2903c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2903C4u;
    SET_GPR_U32(ctx, 31, 0x2903CCu);
    ctx->pc = 0x2903C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2903C4u;
    // 0x2903c8: 0x24a5b3f0  addiu       $a1, $a1, -0x4C10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2903C4u, 0x2903CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903CCu;
label_2903cc:
    // 0x2903cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2903ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2903d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2903D0u;
    {
        const bool branch_taken_0x2903d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2903D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903D0u;
        // 0x2903d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903d0) {
            ctx->pc = 0x2903E8u;
            goto label_2903e8;
        }
    }
    ctx->pc = 0x2903D8u;
    // 0x2903d8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2903d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2903dc: 0xc0ae6b8  jal         func_2B9AE0
    ctx->pc = 0x2903DCu;
    SET_GPR_U32(ctx, 31, 0x2903E4u);
    ctx->pc = 0x2903E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2903DCu;
    // 0x2903e0: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x2903DCu, 0x2903E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2903E4u;
label_2903e4:
    // 0x2903e4: 0xae200308  sw          $zero, 0x308($s1)
    ctx->pc = 0x2903e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 776), GPR_U32(ctx, 0));
label_2903e8:
    // 0x2903e8: 0x8e220308  lw          $v0, 0x308($s1)
    ctx->pc = 0x2903e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 776)));
label_2903ec:
    // 0x2903ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2903ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2903f0: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2903F0u;
    {
        const bool branch_taken_0x2903f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2903F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903F0u;
        // 0x2903f4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903f0) {
            ctx->pc = 0x290414u;
            goto label_290414;
        }
    }
    ctx->pc = 0x2903F8u;
    // 0x2903f8: 0x2843000b  slti        $v1, $v0, 0xB
    ctx->pc = 0x2903f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2903fc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2903FCu;
    {
        const bool branch_taken_0x2903fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2903FCu;
        // 0x290400: 0xae220308  sw          $v0, 0x308($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903fc) {
            ctx->pc = 0x290414u;
            goto label_290414;
        }
    }
    ctx->pc = 0x290404u;
    // 0x290404: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x290404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x290408: 0xae250308  sw          $a1, 0x308($s1)
    ctx->pc = 0x290408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 776), GPR_U32(ctx, 5));
    // 0x29040c: 0xc0ae686  jal         func_2B9A18
    ctx->pc = 0x29040Cu;
    SET_GPR_U32(ctx, 31, 0x290414u);
    ctx->pc = 0x290410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29040Cu;
    // 0x290410: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9A18u, 0x29040Cu, 0x290414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290414u;
label_290414:
    // 0x290414: 0xc0a7c16  jal         func_29F058
    ctx->pc = 0x290414u;
    SET_GPR_U32(ctx, 31, 0x29041Cu);
    ctx->pc = 0x290418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290414u;
    // 0x290418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F058u, 0x290414u, 0x29041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29041Cu;
label_29041c:
    // 0x29041c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29041cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x290420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x290420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290424: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x290424u;
    SET_GPR_U32(ctx, 31, 0x29042Cu);
    ctx->pc = 0x290428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290424u;
    // 0x290428: 0x24a5b3f8  addiu       $a1, $a1, -0x4C08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x290424u, 0x29042Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29042Cu;
label_29042c:
    // 0x29042c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29042cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x290430: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x290430u;
    {
        const bool branch_taken_0x290430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290430u;
        // 0x290434: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290430) {
            ctx->pc = 0x290468u;
            goto label_290468;
        }
    }
    ctx->pc = 0x290438u;
    // 0x290438: 0xc0a7c16  jal         func_29F058
    ctx->pc = 0x290438u;
    SET_GPR_U32(ctx, 31, 0x290440u);
    ctx->pc = 0x29043Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290438u;
    // 0x29043c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F058u, 0x290438u, 0x290440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290440u;
label_290440:
    // 0x290440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290444: 0xc0a6892  jal         func_29A248
    ctx->pc = 0x290444u;
    SET_GPR_U32(ctx, 31, 0x29044Cu);
    ctx->pc = 0x290448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290444u;
    // 0x290448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A248u, 0x290444u, 0x29044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29044Cu;
label_29044c:
    // 0x29044c: 0xc0a6890  jal         func_29A240
    ctx->pc = 0x29044Cu;
    SET_GPR_U32(ctx, 31, 0x290454u);
    ctx->pc = 0x290450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29044Cu;
    // 0x290450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A240u, 0x29044Cu, 0x290454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290454u;
label_290454:
    // 0x290454: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290454u;
    {
        const bool branch_taken_0x290454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290454u;
        // 0x290458: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290454) {
            ctx->pc = 0x290464u;
            goto label_290464;
        }
    }
    ctx->pc = 0x29045Cu;
    // 0x29045c: 0xc0a172a  jal         func_285CA8
    ctx->pc = 0x29045Cu;
    SET_GPR_U32(ctx, 31, 0x290464u);
    ctx->pc = 0x290460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29045Cu;
    // 0x290460: 0xa2220300  sb          $v0, 0x300($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 768), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CA8u, 0x29045Cu, 0x290464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290464u;
label_290464:
    // 0x290464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x290464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_290468:
    // 0x290468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x290468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29046c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29046cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290470: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x290470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290474: 0x3e00008  jr          $ra
    ctx->pc = 0x290474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290474u;
        // 0x290478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29047Cu;
    // 0x29047c: 0x0  nop
    ctx->pc = 0x29047cu;
    // NOP
    ctx->pc = 0x290480u;
}
