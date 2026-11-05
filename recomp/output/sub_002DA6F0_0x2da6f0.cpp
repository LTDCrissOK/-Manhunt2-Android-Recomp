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

// Function: sub_002DA6F0
// Address: 0x2da6f0 - 0x2da800
void sub_002DA6F0_0x2da6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA6F0_0x2da6f0");
#endif

    switch (ctx->pc) {
        case 0x2da71cu: goto label_2da71c;
        case 0x2da764u: goto label_2da764;
        case 0x2da778u: goto label_2da778;
        case 0x2da7a0u: goto label_2da7a0;
        case 0x2da7b4u: goto label_2da7b4;
        case 0x2da7c8u: goto label_2da7c8;
        case 0x2da7dcu: goto label_2da7dc;
        case 0x2da7e8u: goto label_2da7e8;
        default: break;
    }

    ctx->pc = 0x2da6f0u;

    // 0x2da6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2da6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2da6f4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2da6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2da6f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2da6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2da6fc: 0x8c62f198  lw          $v0, -0xE68($v1)
    ctx->pc = 0x2da6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BF198u));
    // 0x2da700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2da700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2da704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2da708: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2DA708u;
    {
        const bool branch_taken_0x2da708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA708u;
        // 0x2da70c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da708) {
            ctx->pc = 0x2DA7E8u;
            goto label_2da7e8;
        }
    }
    ctx->pc = 0x2DA710u;
    // 0x2da710: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2da710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2da714: 0xc0495b4  jal         func_1256D0
    ctx->pc = 0x2DA714u;
    SET_GPR_U32(ctx, 31, 0x2DA71Cu);
    ctx->pc = 0x2DA718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA714u;
    // 0x2da718: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1256D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1256D0u, 0x2DA714u, 0x2DA71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA71Cu;
label_2da71c:
    // 0x2da71c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2DA71Cu;
    {
        const bool branch_taken_0x2da71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da71c) {
            ctx->pc = 0x2DA720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA71Cu;
            // 0x2da720: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA754u;
            goto label_2da754;
        }
    }
    ctx->pc = 0x2DA724u;
    // 0x2da724: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2da724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2da728: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x2da728u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x2da72c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA72Cu;
    {
        const bool branch_taken_0x2da72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA72Cu;
        // 0x2da730: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da72c) {
            ctx->pc = 0x2DA744u;
            goto label_2da744;
        }
    }
    ctx->pc = 0x2DA734u;
    // 0x2da734: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2da734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2da738: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x2da738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FB821u));
    // 0x2da73c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA73Cu;
    {
        const bool branch_taken_0x2da73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA73Cu;
        // 0x2da740: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da73c) {
            ctx->pc = 0x2DA750u;
            goto label_2da750;
        }
    }
    ctx->pc = 0x2DA744u;
label_2da744:
    // 0x2da744: 0x8c43bee8  lw          $v1, -0x4118($v0)
    ctx->pc = 0x2da744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950632)));
    // 0x2da748: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2DA748u;
    {
        const bool branch_taken_0x2da748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA748u;
        // 0x2da74c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da748) {
            ctx->pc = 0x2DA7ECu;
            goto label_2da7ec;
        }
    }
    ctx->pc = 0x2DA750u;
label_2da750:
    // 0x2da750: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2da750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2da754:
    // 0x2da754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2da754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da758: 0x2484b0e0  addiu       $a0, $a0, -0x4F20
    ctx->pc = 0x2da758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947040));
    // 0x2da75c: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x2DA75Cu;
    SET_GPR_U32(ctx, 31, 0x2DA764u);
    ctx->pc = 0x2DA760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA75Cu;
    // 0x2da760: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x2DA75Cu, 0x2DA764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA764u;
label_2da764:
    // 0x2da764: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2da764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2da768: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2da768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da76c: 0x248414e0  addiu       $a0, $a0, 0x14E0
    ctx->pc = 0x2da76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5344));
    // 0x2da770: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x2DA770u;
    SET_GPR_U32(ctx, 31, 0x2DA778u);
    ctx->pc = 0x2DA774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA770u;
    // 0x2da774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x2DA770u, 0x2DA778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA778u;
label_2da778:
    // 0x2da778: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2da778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2da77c: 0x245078e0  addiu       $s0, $v0, 0x78E0
    ctx->pc = 0x2da77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30944));
    // 0x2da780: 0x8e036394  lw          $v1, 0x6394($s0)
    ctx->pc = 0x2da780u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58DC74u));
    // 0x2da784: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DA784u;
    {
        const bool branch_taken_0x2da784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA784u;
        // 0x2da788: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da784) {
            ctx->pc = 0x2DA7C8u;
            goto label_2da7c8;
        }
    }
    ctx->pc = 0x2DA78Cu;
    // 0x2da78c: 0x90439b1c  lbu         $v1, -0x64E4($v0)
    ctx->pc = 0x2da78cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294941468)));
    // 0x2da790: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA790u;
    {
        const bool branch_taken_0x2da790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA790u;
        // 0x2da794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da790) {
            ctx->pc = 0x2DA7A8u;
            goto label_2da7a8;
        }
    }
    ctx->pc = 0x2DA798u;
    // 0x2da798: 0xc07f43c  jal         func_1FD0F0
    ctx->pc = 0x2DA798u;
    SET_GPR_U32(ctx, 31, 0x2DA7A0u);
    ctx->pc = 0x1FD0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD0F0u, 0x2DA798u, 0x2DA7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7A0u;
label_2da7a0:
    // 0x2da7a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA7A0u;
    {
        const bool branch_taken_0x2da7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7A0u;
        // 0x2da7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7a0) {
            ctx->pc = 0x2DA7BCu;
            goto label_2da7bc;
        }
    }
    ctx->pc = 0x2DA7A8u;
label_2da7a8:
    // 0x2da7a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2da7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da7ac: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x2DA7ACu;
    SET_GPR_U32(ctx, 31, 0x2DA7B4u);
    ctx->pc = 0x2DA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7ACu;
    // 0x2da7b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x2DA7ACu, 0x2DA7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7B4u;
label_2da7b4:
    // 0x2da7b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DA7B4u;
    {
        const bool branch_taken_0x2da7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7B4u;
        // 0x2da7b8: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7b4) {
            ctx->pc = 0x2DA7CCu;
            goto label_2da7cc;
        }
    }
    ctx->pc = 0x2DA7BCu;
label_2da7bc:
    // 0x2da7bc: 0xae006394  sw          $zero, 0x6394($s0)
    ctx->pc = 0x2da7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25492), GPR_U32(ctx, 0));
    // 0x2da7c0: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2DA7C0u;
    SET_GPR_U32(ctx, 31, 0x2DA7C8u);
    ctx->pc = 0x2DA7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7C0u;
    // 0x2da7c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2DA7C0u, 0x2DA7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7C8u;
label_2da7c8:
    // 0x2da7c8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2da7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_2da7cc:
    // 0x2da7cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2da7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da7d0: 0x2484dce0  addiu       $a0, $a0, -0x2320
    ctx->pc = 0x2da7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958304));
    // 0x2da7d4: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x2DA7D4u;
    SET_GPR_U32(ctx, 31, 0x2DA7DCu);
    ctx->pc = 0x2DA7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7D4u;
    // 0x2da7d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x2DA7D4u, 0x2DA7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7DCu;
label_2da7dc:
    // 0x2da7dc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2da7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2da7e0: 0xc0b6b08  jal         func_2DAC20
    ctx->pc = 0x2DA7E0u;
    SET_GPR_U32(ctx, 31, 0x2DA7E8u);
    ctx->pc = 0x2DA7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7E0u;
    // 0x2da7e4: 0x248440e0  addiu       $a0, $a0, 0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAC20u, 0x2DA7E0u, 0x2DA7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA7E8u;
label_2da7e8:
    // 0x2da7e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2da7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2da7ec:
    // 0x2da7ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2da7ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2da7f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2da7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7F4u;
        // 0x2da7f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA7FCu;
    // 0x2da7fc: 0x0  nop
    ctx->pc = 0x2da7fcu;
    // NOP
    ctx->pc = 0x2da800u;
}
