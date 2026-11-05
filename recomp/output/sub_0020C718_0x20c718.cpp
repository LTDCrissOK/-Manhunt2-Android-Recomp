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

// Function: sub_0020C718
// Address: 0x20c718 - 0x20c800
void sub_0020C718_0x20c718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C718_0x20c718");
#endif

    switch (ctx->pc) {
        case 0x20c754u: goto label_20c754;
        case 0x20c760u: goto label_20c760;
        case 0x20c770u: goto label_20c770;
        case 0x20c77cu: goto label_20c77c;
        case 0x20c78cu: goto label_20c78c;
        case 0x20c798u: goto label_20c798;
        case 0x20c7a8u: goto label_20c7a8;
        case 0x20c7b4u: goto label_20c7b4;
        case 0x20c7c4u: goto label_20c7c4;
        case 0x20c7d0u: goto label_20c7d0;
        case 0x20c7e8u: goto label_20c7e8;
        default: break;
    }

    ctx->pc = 0x20c718u;

    // 0x20c718: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20c718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20c71c: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x20c71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x20c720: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x20c720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x20c724: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x20c724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x20c728: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x20C728u;
    {
        const bool branch_taken_0x20c728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C728u;
        // 0x20c72c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c728) {
            ctx->pc = 0x20C7D8u;
            goto label_20c7d8;
        }
    }
    ctx->pc = 0x20C730u;
    // 0x20c730: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20c730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x20c734: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20c734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20c738: 0x244210e0  addiu       $v0, $v0, 0x10E0
    ctx->pc = 0x20c738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x20c73c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c740: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20c740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20c744: 0x800008  jr          $a0
    ctx->pc = 0x20C744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C74Cu: goto label_20c74c;
            case 0x20C768u: goto label_20c768;
            case 0x20C784u: goto label_20c784;
            case 0x20C7A0u: goto label_20c7a0;
            case 0x20C7BCu: goto label_20c7bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C744u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20C74Cu;
label_20c74c:
    // 0x20c74c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C74Cu;
    SET_GPR_U32(ctx, 31, 0x20C754u);
    ctx->pc = 0x20C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C74Cu;
    // 0x20c750: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C74Cu, 0x20C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C754u;
label_20c754:
    // 0x20c754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c758: 0xc0b7188  jal         func_2DC620
    ctx->pc = 0x20C758u;
    SET_GPR_U32(ctx, 31, 0x20C760u);
    ctx->pc = 0x20C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C758u;
    // 0x20c75c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC620u, 0x20C758u, 0x20C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C760u;
label_20c760:
    // 0x20c760: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x20C760u;
    {
        const bool branch_taken_0x20c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C760u;
        // 0x20c764: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c760) {
            ctx->pc = 0x20C7F0u;
            goto label_20c7f0;
        }
    }
    ctx->pc = 0x20C768u;
label_20c768:
    // 0x20c768: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C768u;
    SET_GPR_U32(ctx, 31, 0x20C770u);
    ctx->pc = 0x20C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C768u;
    // 0x20c76c: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C768u, 0x20C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C770u;
label_20c770:
    // 0x20c770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c774: 0xc0b75de  jal         func_2DD778
    ctx->pc = 0x20C774u;
    SET_GPR_U32(ctx, 31, 0x20C77Cu);
    ctx->pc = 0x20C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C774u;
    // 0x20c778: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD778u, 0x20C774u, 0x20C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C77Cu;
label_20c77c:
    // 0x20c77c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20C77Cu;
    {
        const bool branch_taken_0x20c77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C77Cu;
        // 0x20c780: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c77c) {
            ctx->pc = 0x20C7F0u;
            goto label_20c7f0;
        }
    }
    ctx->pc = 0x20C784u;
label_20c784:
    // 0x20c784: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C784u;
    SET_GPR_U32(ctx, 31, 0x20C78Cu);
    ctx->pc = 0x20C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C784u;
    // 0x20c788: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C784u, 0x20C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C78Cu;
label_20c78c:
    // 0x20c78c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c790: 0xc0b80da  jal         func_2E0368
    ctx->pc = 0x20C790u;
    SET_GPR_U32(ctx, 31, 0x20C798u);
    ctx->pc = 0x20C794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C790u;
    // 0x20c794: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0368u, 0x20C790u, 0x20C798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C798u;
label_20c798:
    // 0x20c798: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x20C798u;
    {
        const bool branch_taken_0x20c798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C798u;
        // 0x20c79c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c798) {
            ctx->pc = 0x20C7F0u;
            goto label_20c7f0;
        }
    }
    ctx->pc = 0x20C7A0u;
label_20c7a0:
    // 0x20c7a0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C7A0u;
    SET_GPR_U32(ctx, 31, 0x20C7A8u);
    ctx->pc = 0x20C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C7A0u;
    // 0x20c7a4: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C7A0u, 0x20C7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7A8u;
label_20c7a8:
    // 0x20c7a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c7ac: 0xc0b83ba  jal         func_2E0EE8
    ctx->pc = 0x20C7ACu;
    SET_GPR_U32(ctx, 31, 0x20C7B4u);
    ctx->pc = 0x20C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C7ACu;
    // 0x20c7b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0EE8u, 0x20C7ACu, 0x20C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7B4u;
label_20c7b4:
    // 0x20c7b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20C7B4u;
    {
        const bool branch_taken_0x20c7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7B4u;
        // 0x20c7b8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7b4) {
            ctx->pc = 0x20C7F0u;
            goto label_20c7f0;
        }
    }
    ctx->pc = 0x20C7BCu;
label_20c7bc:
    // 0x20c7bc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20C7BCu;
    SET_GPR_U32(ctx, 31, 0x20C7C4u);
    ctx->pc = 0x20C7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C7BCu;
    // 0x20c7c0: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20C7BCu, 0x20C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7C4u;
label_20c7c4:
    // 0x20c7c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20c7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c7c8: 0xc0b85de  jal         func_2E1778
    ctx->pc = 0x20C7C8u;
    SET_GPR_U32(ctx, 31, 0x20C7D0u);
    ctx->pc = 0x20C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C7C8u;
    // 0x20c7cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1778u, 0x20C7C8u, 0x20C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7D0u;
label_20c7d0:
    // 0x20c7d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20C7D0u;
    {
        const bool branch_taken_0x20c7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7D0u;
        // 0x20c7d4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7d0) {
            ctx->pc = 0x20C7F0u;
            goto label_20c7f0;
        }
    }
    ctx->pc = 0x20C7D8u;
label_20c7d8:
    // 0x20c7d8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20c7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20c7dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c7e0: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x20C7E0u;
    SET_GPR_U32(ctx, 31, 0x20C7E8u);
    ctx->pc = 0x20C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C7E0u;
    // 0x20c7e4: 0x24a510c0  addiu       $a1, $a1, 0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x20C7E0u, 0x20C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7E8u;
label_20c7e8:
    // 0x20c7e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20c7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c7ec: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x20c7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20c7f0:
    // 0x20c7f0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20c7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20c7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x20C7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7F4u;
        // 0x20c7f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C7FCu;
    // 0x20c7fc: 0x0  nop
    ctx->pc = 0x20c7fcu;
    // NOP
    ctx->pc = 0x20c800u;
}
