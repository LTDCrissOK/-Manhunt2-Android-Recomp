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

// Function: sub_002EF760
// Address: 0x2ef760 - 0x2ef818
void sub_002EF760_0x2ef760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF760_0x2ef760");
#endif

    switch (ctx->pc) {
        case 0x2ef77cu: goto label_2ef77c;
        case 0x2ef790u: goto label_2ef790;
        case 0x2ef7a4u: goto label_2ef7a4;
        case 0x2ef7b8u: goto label_2ef7b8;
        case 0x2ef7f8u: goto label_2ef7f8;
        case 0x2ef808u: goto label_2ef808;
        default: break;
    }

    ctx->pc = 0x2ef760u;

    // 0x2ef760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ef760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ef764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ef768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ef76c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef770: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ef770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ef774: 0xc0bb5de  jal         func_2ED778
    ctx->pc = 0x2EF774u;
    SET_GPR_U32(ctx, 31, 0x2EF77Cu);
    ctx->pc = 0x2EF778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF774u;
    // 0x2ef778: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EF774u, 0x2EF77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF77Cu;
label_2ef77c:
    // 0x2ef77c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EF77Cu;
    {
        const bool branch_taken_0x2ef77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF77Cu;
        // 0x2ef780: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef77c) {
            ctx->pc = 0x2EF7C4u;
            goto label_2ef7c4;
        }
    }
    ctx->pc = 0x2EF784u;
    // 0x2ef784: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x2ef784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2ef788: 0xc0bb5de  jal         func_2ED778
    ctx->pc = 0x2EF788u;
    SET_GPR_U32(ctx, 31, 0x2EF790u);
    ctx->pc = 0x2EF78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF788u;
    // 0x2ef78c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EF788u, 0x2EF790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF790u;
label_2ef790:
    // 0x2ef790: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EF790u;
    {
        const bool branch_taken_0x2ef790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF790u;
        // 0x2ef794: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef790) {
            ctx->pc = 0x2EF7C4u;
            goto label_2ef7c4;
        }
    }
    ctx->pc = 0x2EF798u;
    // 0x2ef798: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x2ef798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2ef79c: 0xc0bb5de  jal         func_2ED778
    ctx->pc = 0x2EF79Cu;
    SET_GPR_U32(ctx, 31, 0x2EF7A4u);
    ctx->pc = 0x2EF7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF79Cu;
    // 0x2ef7a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EF79Cu, 0x2EF7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF7A4u;
label_2ef7a4:
    // 0x2ef7a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF7A4u;
    {
        const bool branch_taken_0x2ef7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7A4u;
        // 0x2ef7a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7a4) {
            ctx->pc = 0x2EF7C4u;
            goto label_2ef7c4;
        }
    }
    ctx->pc = 0x2EF7ACu;
    // 0x2ef7ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7b0: 0xc0bb5de  jal         func_2ED778
    ctx->pc = 0x2EF7B0u;
    SET_GPR_U32(ctx, 31, 0x2EF7B8u);
    ctx->pc = 0x2EF7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF7B0u;
    // 0x2ef7b4: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EF7B0u, 0x2EF7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF7B8u;
label_2ef7b8:
    // 0x2ef7b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ef7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ef7bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7c0: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x2ef7c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2ef7c4:
    // 0x2ef7c4: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EF7C4u;
    {
        const bool branch_taken_0x2ef7c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7C4u;
        // 0x2ef7c8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7c4) {
            ctx->pc = 0x2EF808u;
            goto label_2ef808;
        }
    }
    ctx->pc = 0x2EF7CCu;
    // 0x2ef7cc: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x2ef7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x2ef7d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2ef7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ef7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ef7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ef7d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ef7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ef7dc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EF7DCu;
    {
        const bool branch_taken_0x2ef7dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7DCu;
        // 0x2ef7e0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7dc) {
            ctx->pc = 0x2EF808u;
            goto label_2ef808;
        }
    }
    ctx->pc = 0x2EF7E4u;
    // 0x2ef7e4: 0x8c43adf0  lw          $v1, -0x5210($v0)
    ctx->pc = 0x2ef7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946288)));
    // 0x2ef7e8: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF7E8u;
    {
        const bool branch_taken_0x2ef7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ef7e8) {
            ctx->pc = 0x2EF800u;
            goto label_2ef800;
        }
    }
    ctx->pc = 0x2EF7F0u;
    // 0x2ef7f0: 0xc0a2b9e  jal         func_28AE78
    ctx->pc = 0x2EF7F0u;
    SET_GPR_U32(ctx, 31, 0x2EF7F8u);
    ctx->pc = 0x2EF7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF7F0u;
    // 0x2ef7f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AE78u, 0x2EF7F0u, 0x2EF7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF7F8u;
label_2ef7f8:
    // 0x2ef7f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF7F8u;
    {
        const bool branch_taken_0x2ef7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF7F8u;
        // 0x2ef7fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef7f8) {
            ctx->pc = 0x2EF80Cu;
            goto label_2ef80c;
        }
    }
    ctx->pc = 0x2EF800u;
label_2ef800:
    // 0x2ef800: 0xc0a2b9e  jal         func_28AE78
    ctx->pc = 0x2EF800u;
    SET_GPR_U32(ctx, 31, 0x2EF808u);
    ctx->pc = 0x2EF804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF800u;
    // 0x2ef804: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AE78u, 0x2EF800u, 0x2EF808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF808u;
label_2ef808:
    // 0x2ef808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ef808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef80c:
    // 0x2ef80c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ef80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ef810: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF810u;
        // 0x2ef814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF818u;
}
