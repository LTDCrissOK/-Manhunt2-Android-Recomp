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

// Function: sub_003349E8
// Address: 0x3349e8 - 0x334e38
void sub_003349E8_0x3349e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003349E8_0x3349e8");
#endif

    switch (ctx->pc) {
        case 0x334a14u: goto label_334a14;
        case 0x334a28u: goto label_334a28;
        case 0x334a38u: goto label_334a38;
        case 0x334a4cu: goto label_334a4c;
        case 0x334a5cu: goto label_334a5c;
        case 0x334a70u: goto label_334a70;
        case 0x334a80u: goto label_334a80;
        case 0x334a94u: goto label_334a94;
        case 0x334aa8u: goto label_334aa8;
        case 0x334abcu: goto label_334abc;
        case 0x334ad0u: goto label_334ad0;
        case 0x334ae4u: goto label_334ae4;
        case 0x334af8u: goto label_334af8;
        case 0x334b0cu: goto label_334b0c;
        case 0x334b20u: goto label_334b20;
        case 0x334b34u: goto label_334b34;
        case 0x334b48u: goto label_334b48;
        case 0x334b5cu: goto label_334b5c;
        case 0x334b70u: goto label_334b70;
        case 0x334b84u: goto label_334b84;
        case 0x334b98u: goto label_334b98;
        case 0x334bacu: goto label_334bac;
        case 0x334bc0u: goto label_334bc0;
        case 0x334bd4u: goto label_334bd4;
        case 0x334becu: goto label_334bec;
        case 0x334c00u: goto label_334c00;
        case 0x334c14u: goto label_334c14;
        case 0x334c28u: goto label_334c28;
        case 0x334c3cu: goto label_334c3c;
        case 0x334c50u: goto label_334c50;
        case 0x334c64u: goto label_334c64;
        case 0x334c78u: goto label_334c78;
        case 0x334c8cu: goto label_334c8c;
        case 0x334ca0u: goto label_334ca0;
        case 0x334cb4u: goto label_334cb4;
        case 0x334cc8u: goto label_334cc8;
        case 0x334cdcu: goto label_334cdc;
        case 0x334cf0u: goto label_334cf0;
        case 0x334d04u: goto label_334d04;
        case 0x334d18u: goto label_334d18;
        case 0x334d2cu: goto label_334d2c;
        case 0x334d40u: goto label_334d40;
        case 0x334d54u: goto label_334d54;
        case 0x334d68u: goto label_334d68;
        case 0x334d7cu: goto label_334d7c;
        case 0x334d90u: goto label_334d90;
        case 0x334da4u: goto label_334da4;
        case 0x334db8u: goto label_334db8;
        case 0x334dccu: goto label_334dcc;
        case 0x334de0u: goto label_334de0;
        case 0x334df4u: goto label_334df4;
        case 0x334e08u: goto label_334e08;
        case 0x334e1cu: goto label_334e1c;
        default: break;
    }

    ctx->pc = 0x3349e8u;

    // 0x3349e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3349e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3349ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3349ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3349f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3349f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3349f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3349f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3349f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3349f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3349fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3349fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334a00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x334a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x334a04: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x334a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x334a08: 0x24a55998  addiu       $a1, $a1, 0x5998
    ctx->pc = 0x334a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22936));
    // 0x334a0c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334A0Cu;
    SET_GPR_U32(ctx, 31, 0x334A14u);
    ctx->pc = 0x334A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A0Cu;
    // 0x334a10: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334A0Cu, 0x334A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A14u;
label_334a14:
    // 0x334a14: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x334A14u;
    {
        const bool branch_taken_0x334a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334a14) {
            ctx->pc = 0x334A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334A14u;
            // 0x334a18: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334A2Cu;
            goto label_334a2c;
        }
    }
    ctx->pc = 0x334A1Cu;
    // 0x334a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334a20: 0xc0cd5d4  jal         func_335750
    ctx->pc = 0x334A20u;
    SET_GPR_U32(ctx, 31, 0x334A28u);
    ctx->pc = 0x334A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A20u;
    // 0x334a24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335750u, 0x334A20u, 0x334A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A28u;
label_334a28:
    // 0x334a28: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x334a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_334a2c:
    // 0x334a2c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334a30: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334A30u;
    SET_GPR_U32(ctx, 31, 0x334A38u);
    ctx->pc = 0x334A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A30u;
    // 0x334a34: 0x24a559a8  addiu       $a1, $a1, 0x59A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334A30u, 0x334A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A38u;
label_334a38:
    // 0x334a38: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x334A38u;
    {
        const bool branch_taken_0x334a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334a38) {
            ctx->pc = 0x334A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334A38u;
            // 0x334a3c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334A50u;
            goto label_334a50;
        }
    }
    ctx->pc = 0x334A40u;
    // 0x334a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334a44: 0xc0cd5d6  jal         func_335758
    ctx->pc = 0x334A44u;
    SET_GPR_U32(ctx, 31, 0x334A4Cu);
    ctx->pc = 0x334A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A44u;
    // 0x334a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335758u, 0x334A44u, 0x334A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A4Cu;
label_334a4c:
    // 0x334a4c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x334a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_334a50:
    // 0x334a50: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334a54: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334A54u;
    SET_GPR_U32(ctx, 31, 0x334A5Cu);
    ctx->pc = 0x334A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A54u;
    // 0x334a58: 0x24a559b8  addiu       $a1, $a1, 0x59B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334A54u, 0x334A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A5Cu;
label_334a5c:
    // 0x334a5c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x334A5Cu;
    {
        const bool branch_taken_0x334a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334a5c) {
            ctx->pc = 0x334A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334A5Cu;
            // 0x334a60: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334A74u;
            goto label_334a74;
        }
    }
    ctx->pc = 0x334A64u;
    // 0x334a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334a68: 0xc0cd5d8  jal         func_335760
    ctx->pc = 0x334A68u;
    SET_GPR_U32(ctx, 31, 0x334A70u);
    ctx->pc = 0x334A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A68u;
    // 0x334a6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335760u, 0x334A68u, 0x334A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A70u;
label_334a70:
    // 0x334a70: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x334a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_334a74:
    // 0x334a74: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334a78: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334A78u;
    SET_GPR_U32(ctx, 31, 0x334A80u);
    ctx->pc = 0x334A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A78u;
    // 0x334a7c: 0x24a559c8  addiu       $a1, $a1, 0x59C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334A78u, 0x334A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A80u;
label_334a80:
    // 0x334a80: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334A80u;
    {
        const bool branch_taken_0x334a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A80u;
        // 0x334a84: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a80) {
            ctx->pc = 0x334A9Cu;
            goto label_334a9c;
        }
    }
    ctx->pc = 0x334A88u;
    // 0x334a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334a8c: 0xc0cd5da  jal         func_335768
    ctx->pc = 0x334A8Cu;
    SET_GPR_U32(ctx, 31, 0x334A94u);
    ctx->pc = 0x334A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334A8Cu;
    // 0x334a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335768u, 0x334A8Cu, 0x334A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334A94u;
label_334a94:
    // 0x334a94: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x334A94u;
    {
        const bool branch_taken_0x334a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334A94u;
        // 0x334a98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334a94) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334A9Cu;
label_334a9c:
    // 0x334a9c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334aa0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334AA0u;
    SET_GPR_U32(ctx, 31, 0x334AA8u);
    ctx->pc = 0x334AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AA0u;
    // 0x334aa4: 0x24a559d8  addiu       $a1, $a1, 0x59D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334AA0u, 0x334AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334AA8u;
label_334aa8:
    // 0x334aa8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334AA8u;
    {
        const bool branch_taken_0x334aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AA8u;
        // 0x334aac: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334aa8) {
            ctx->pc = 0x334AC4u;
            goto label_334ac4;
        }
    }
    ctx->pc = 0x334AB0u;
    // 0x334ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ab4: 0xc0cd5dc  jal         func_335770
    ctx->pc = 0x334AB4u;
    SET_GPR_U32(ctx, 31, 0x334ABCu);
    ctx->pc = 0x334AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AB4u;
    // 0x334ab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335770u, 0x334AB4u, 0x334ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334ABCu;
label_334abc:
    // 0x334abc: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x334ABCu;
    {
        const bool branch_taken_0x334abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334ABCu;
        // 0x334ac0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334abc) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334AC4u;
label_334ac4:
    // 0x334ac4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334ac8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334AC8u;
    SET_GPR_U32(ctx, 31, 0x334AD0u);
    ctx->pc = 0x334ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AC8u;
    // 0x334acc: 0x24a559e8  addiu       $a1, $a1, 0x59E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334AC8u, 0x334AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334AD0u;
label_334ad0:
    // 0x334ad0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334AD0u;
    {
        const bool branch_taken_0x334ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AD0u;
        // 0x334ad4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ad0) {
            ctx->pc = 0x334AECu;
            goto label_334aec;
        }
    }
    ctx->pc = 0x334AD8u;
    // 0x334ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334adc: 0xc0cd5ee  jal         func_3357B8
    ctx->pc = 0x334ADCu;
    SET_GPR_U32(ctx, 31, 0x334AE4u);
    ctx->pc = 0x334AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334ADCu;
    // 0x334ae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357B8u, 0x334ADCu, 0x334AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334AE4u;
label_334ae4:
    // 0x334ae4: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x334AE4u;
    {
        const bool branch_taken_0x334ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AE4u;
        // 0x334ae8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ae4) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334AECu;
label_334aec:
    // 0x334aec: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334af0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334AF0u;
    SET_GPR_U32(ctx, 31, 0x334AF8u);
    ctx->pc = 0x334AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AF0u;
    // 0x334af4: 0x24a559f8  addiu       $a1, $a1, 0x59F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334AF0u, 0x334AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334AF8u;
label_334af8:
    // 0x334af8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334AF8u;
    {
        const bool branch_taken_0x334af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AF8u;
        // 0x334afc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334af8) {
            ctx->pc = 0x334B14u;
            goto label_334b14;
        }
    }
    ctx->pc = 0x334B00u;
    // 0x334b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b04: 0xc0cd600  jal         func_335800
    ctx->pc = 0x334B04u;
    SET_GPR_U32(ctx, 31, 0x334B0Cu);
    ctx->pc = 0x334B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B04u;
    // 0x334b08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335800u, 0x334B04u, 0x334B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B0Cu;
label_334b0c:
    // 0x334b0c: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x334B0Cu;
    {
        const bool branch_taken_0x334b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B0Cu;
        // 0x334b10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b0c) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334B14u;
label_334b14:
    // 0x334b14: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334b18: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334B18u;
    SET_GPR_U32(ctx, 31, 0x334B20u);
    ctx->pc = 0x334B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B18u;
    // 0x334b1c: 0x24a55a10  addiu       $a1, $a1, 0x5A10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334B18u, 0x334B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B20u;
label_334b20:
    // 0x334b20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334B20u;
    {
        const bool branch_taken_0x334b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B20u;
        // 0x334b24: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b20) {
            ctx->pc = 0x334B3Cu;
            goto label_334b3c;
        }
    }
    ctx->pc = 0x334B28u;
    // 0x334b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b2c: 0xc0cd610  jal         func_335840
    ctx->pc = 0x334B2Cu;
    SET_GPR_U32(ctx, 31, 0x334B34u);
    ctx->pc = 0x334B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B2Cu;
    // 0x334b30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335840u, 0x334B2Cu, 0x334B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B34u;
label_334b34:
    // 0x334b34: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x334B34u;
    {
        const bool branch_taken_0x334b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B34u;
        // 0x334b38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b34) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334B3Cu;
label_334b3c:
    // 0x334b3c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334b40: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334B40u;
    SET_GPR_U32(ctx, 31, 0x334B48u);
    ctx->pc = 0x334B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B40u;
    // 0x334b44: 0x24a55a20  addiu       $a1, $a1, 0x5A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334B40u, 0x334B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B48u;
label_334b48:
    // 0x334b48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334B48u;
    {
        const bool branch_taken_0x334b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B48u;
        // 0x334b4c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b48) {
            ctx->pc = 0x334B64u;
            goto label_334b64;
        }
    }
    ctx->pc = 0x334B50u;
    // 0x334b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b54: 0xc0cd620  jal         func_335880
    ctx->pc = 0x334B54u;
    SET_GPR_U32(ctx, 31, 0x334B5Cu);
    ctx->pc = 0x334B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B54u;
    // 0x334b58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335880u, 0x334B54u, 0x334B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B5Cu;
label_334b5c:
    // 0x334b5c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x334B5Cu;
    {
        const bool branch_taken_0x334b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B5Cu;
        // 0x334b60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b5c) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334B64u;
label_334b64:
    // 0x334b64: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334b68: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334B68u;
    SET_GPR_U32(ctx, 31, 0x334B70u);
    ctx->pc = 0x334B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B68u;
    // 0x334b6c: 0x24a55a38  addiu       $a1, $a1, 0x5A38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334B68u, 0x334B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B70u;
label_334b70:
    // 0x334b70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334B70u;
    {
        const bool branch_taken_0x334b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B70u;
        // 0x334b74: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b70) {
            ctx->pc = 0x334B8Cu;
            goto label_334b8c;
        }
    }
    ctx->pc = 0x334B78u;
    // 0x334b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b7c: 0xc0cd630  jal         func_3358C0
    ctx->pc = 0x334B7Cu;
    SET_GPR_U32(ctx, 31, 0x334B84u);
    ctx->pc = 0x334B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B7Cu;
    // 0x334b80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3358C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3358C0u, 0x334B7Cu, 0x334B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B84u;
label_334b84:
    // 0x334b84: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x334B84u;
    {
        const bool branch_taken_0x334b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B84u;
        // 0x334b88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b84) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334B8Cu;
label_334b8c:
    // 0x334b8c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334b90: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334B90u;
    SET_GPR_U32(ctx, 31, 0x334B98u);
    ctx->pc = 0x334B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334B90u;
    // 0x334b94: 0x24a55a50  addiu       $a1, $a1, 0x5A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334B90u, 0x334B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334B98u;
label_334b98:
    // 0x334b98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334B98u;
    {
        const bool branch_taken_0x334b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B98u;
        // 0x334b9c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b98) {
            ctx->pc = 0x334BB4u;
            goto label_334bb4;
        }
    }
    ctx->pc = 0x334BA0u;
    // 0x334ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ba4: 0xc0cd632  jal         func_3358C8
    ctx->pc = 0x334BA4u;
    SET_GPR_U32(ctx, 31, 0x334BACu);
    ctx->pc = 0x334BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334BA4u;
    // 0x334ba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3358C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3358C8u, 0x334BA4u, 0x334BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334BACu;
label_334bac:
    // 0x334bac: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x334BACu;
    {
        const bool branch_taken_0x334bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BACu;
        // 0x334bb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334bac) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334BB4u;
label_334bb4:
    // 0x334bb4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334bb8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334BB8u;
    SET_GPR_U32(ctx, 31, 0x334BC0u);
    ctx->pc = 0x334BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334BB8u;
    // 0x334bbc: 0x24a55a68  addiu       $a1, $a1, 0x5A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334BB8u, 0x334BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334BC0u;
label_334bc0:
    // 0x334bc0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334BC0u;
    {
        const bool branch_taken_0x334bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BC0u;
        // 0x334bc4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334bc0) {
            ctx->pc = 0x334BDCu;
            goto label_334bdc;
        }
    }
    ctx->pc = 0x334BC8u;
    // 0x334bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334bcc: 0xc0cd634  jal         func_3358D0
    ctx->pc = 0x334BCCu;
    SET_GPR_U32(ctx, 31, 0x334BD4u);
    ctx->pc = 0x334BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334BCCu;
    // 0x334bd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3358D0u, 0x334BCCu, 0x334BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334BD4u;
label_334bd4:
    // 0x334bd4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x334BD4u;
    {
        const bool branch_taken_0x334bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BD4u;
        // 0x334bd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334bd4) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334BDCu;
label_334bdc:
    // 0x334bdc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334be0: 0x24525a80  addiu       $s2, $v0, 0x5A80
    ctx->pc = 0x334be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 23168));
    // 0x334be4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334BE4u;
    SET_GPR_U32(ctx, 31, 0x334BECu);
    ctx->pc = 0x334BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334BE4u;
    // 0x334be8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334BE4u, 0x334BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334BECu;
label_334bec:
    // 0x334bec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x334BECu;
    {
        const bool branch_taken_0x334bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BECu;
        // 0x334bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334bec) {
            ctx->pc = 0x334C0Cu;
            goto label_334c0c;
        }
    }
    ctx->pc = 0x334BF4u;
    // 0x334bf4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334bf8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334BF8u;
    SET_GPR_U32(ctx, 31, 0x334C00u);
    ctx->pc = 0x334BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334BF8u;
    // 0x334bfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334BF8u, 0x334C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C00u;
label_334c00:
    // 0x334c00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334C00u;
    {
        const bool branch_taken_0x334c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C00u;
        // 0x334c04: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c00) {
            ctx->pc = 0x334C1Cu;
            goto label_334c1c;
        }
    }
    ctx->pc = 0x334C08u;
    // 0x334c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334c0c:
    // 0x334c0c: 0xc0cd636  jal         func_3358D8
    ctx->pc = 0x334C0Cu;
    SET_GPR_U32(ctx, 31, 0x334C14u);
    ctx->pc = 0x334C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C0Cu;
    // 0x334c10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3358D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3358D8u, 0x334C0Cu, 0x334C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C14u;
label_334c14:
    // 0x334c14: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x334C14u;
    {
        const bool branch_taken_0x334c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C14u;
        // 0x334c18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c14) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334C1Cu;
label_334c1c:
    // 0x334c1c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334c20: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334C20u;
    SET_GPR_U32(ctx, 31, 0x334C28u);
    ctx->pc = 0x334C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C20u;
    // 0x334c24: 0x24a55a90  addiu       $a1, $a1, 0x5A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334C20u, 0x334C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C28u;
label_334c28:
    // 0x334c28: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334C28u;
    {
        const bool branch_taken_0x334c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C28u;
        // 0x334c2c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c28) {
            ctx->pc = 0x334C44u;
            goto label_334c44;
        }
    }
    ctx->pc = 0x334C30u;
    // 0x334c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c34: 0xc0cd638  jal         func_3358E0
    ctx->pc = 0x334C34u;
    SET_GPR_U32(ctx, 31, 0x334C3Cu);
    ctx->pc = 0x334C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C34u;
    // 0x334c38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3358E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3358E0u, 0x334C34u, 0x334C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C3Cu;
label_334c3c:
    // 0x334c3c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x334C3Cu;
    {
        const bool branch_taken_0x334c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C3Cu;
        // 0x334c40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c3c) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334C44u;
label_334c44:
    // 0x334c44: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334c48: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334C48u;
    SET_GPR_U32(ctx, 31, 0x334C50u);
    ctx->pc = 0x334C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C48u;
    // 0x334c4c: 0x24a55aa0  addiu       $a1, $a1, 0x5AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334C48u, 0x334C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C50u;
label_334c50:
    // 0x334c50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334C50u;
    {
        const bool branch_taken_0x334c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C50u;
        // 0x334c54: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c50) {
            ctx->pc = 0x334C6Cu;
            goto label_334c6c;
        }
    }
    ctx->pc = 0x334C58u;
    // 0x334c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c5c: 0xc0cd63a  jal         func_3358E8
    ctx->pc = 0x334C5Cu;
    SET_GPR_U32(ctx, 31, 0x334C64u);
    ctx->pc = 0x334C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C5Cu;
    // 0x334c60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3358E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3358E8u, 0x334C5Cu, 0x334C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C64u;
label_334c64:
    // 0x334c64: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x334C64u;
    {
        const bool branch_taken_0x334c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C64u;
        // 0x334c68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c64) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334C6Cu;
label_334c6c:
    // 0x334c6c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334c70: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334C70u;
    SET_GPR_U32(ctx, 31, 0x334C78u);
    ctx->pc = 0x334C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C70u;
    // 0x334c74: 0x24a55ab8  addiu       $a1, $a1, 0x5AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334C70u, 0x334C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C78u;
label_334c78:
    // 0x334c78: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334C78u;
    {
        const bool branch_taken_0x334c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C78u;
        // 0x334c7c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c78) {
            ctx->pc = 0x334C94u;
            goto label_334c94;
        }
    }
    ctx->pc = 0x334C80u;
    // 0x334c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334c84: 0xc0cd63c  jal         func_3358F0
    ctx->pc = 0x334C84u;
    SET_GPR_U32(ctx, 31, 0x334C8Cu);
    ctx->pc = 0x334C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C84u;
    // 0x334c88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3358F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3358F0u, 0x334C84u, 0x334C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C8Cu;
label_334c8c:
    // 0x334c8c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x334C8Cu;
    {
        const bool branch_taken_0x334c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334C8Cu;
        // 0x334c90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334c8c) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334C94u;
label_334c94:
    // 0x334c94: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334c98: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334C98u;
    SET_GPR_U32(ctx, 31, 0x334CA0u);
    ctx->pc = 0x334C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334C98u;
    // 0x334c9c: 0x24a55ac8  addiu       $a1, $a1, 0x5AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334C98u, 0x334CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CA0u;
label_334ca0:
    // 0x334ca0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334CA0u;
    {
        const bool branch_taken_0x334ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CA0u;
        // 0x334ca4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ca0) {
            ctx->pc = 0x334CBCu;
            goto label_334cbc;
        }
    }
    ctx->pc = 0x334CA8u;
    // 0x334ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334cac: 0xc0cd63e  jal         func_3358F8
    ctx->pc = 0x334CACu;
    SET_GPR_U32(ctx, 31, 0x334CB4u);
    ctx->pc = 0x334CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CACu;
    // 0x334cb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3358F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3358F8u, 0x334CACu, 0x334CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CB4u;
label_334cb4:
    // 0x334cb4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x334CB4u;
    {
        const bool branch_taken_0x334cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CB4u;
        // 0x334cb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334cb4) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334CBCu;
label_334cbc:
    // 0x334cbc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334cc0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334CC0u;
    SET_GPR_U32(ctx, 31, 0x334CC8u);
    ctx->pc = 0x334CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CC0u;
    // 0x334cc4: 0x24a55ad8  addiu       $a1, $a1, 0x5AD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334CC0u, 0x334CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CC8u;
label_334cc8:
    // 0x334cc8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334CC8u;
    {
        const bool branch_taken_0x334cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CC8u;
        // 0x334ccc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334cc8) {
            ctx->pc = 0x334CE4u;
            goto label_334ce4;
        }
    }
    ctx->pc = 0x334CD0u;
    // 0x334cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334cd4: 0xc0cd640  jal         func_335900
    ctx->pc = 0x334CD4u;
    SET_GPR_U32(ctx, 31, 0x334CDCu);
    ctx->pc = 0x334CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CD4u;
    // 0x334cd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335900u, 0x334CD4u, 0x334CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CDCu;
label_334cdc:
    // 0x334cdc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x334CDCu;
    {
        const bool branch_taken_0x334cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CDCu;
        // 0x334ce0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334cdc) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334CE4u;
label_334ce4:
    // 0x334ce4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334ce8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334CE8u;
    SET_GPR_U32(ctx, 31, 0x334CF0u);
    ctx->pc = 0x334CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CE8u;
    // 0x334cec: 0x24a55ae8  addiu       $a1, $a1, 0x5AE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334CE8u, 0x334CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334CF0u;
label_334cf0:
    // 0x334cf0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334CF0u;
    {
        const bool branch_taken_0x334cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334CF0u;
        // 0x334cf4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334cf0) {
            ctx->pc = 0x334D0Cu;
            goto label_334d0c;
        }
    }
    ctx->pc = 0x334CF8u;
    // 0x334cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334cfc: 0xc0cd642  jal         func_335908
    ctx->pc = 0x334CFCu;
    SET_GPR_U32(ctx, 31, 0x334D04u);
    ctx->pc = 0x334D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334CFCu;
    // 0x334d00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335908u, 0x334CFCu, 0x334D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D04u;
label_334d04:
    // 0x334d04: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x334D04u;
    {
        const bool branch_taken_0x334d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D04u;
        // 0x334d08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d04) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334D0Cu;
label_334d0c:
    // 0x334d0c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334d10: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334D10u;
    SET_GPR_U32(ctx, 31, 0x334D18u);
    ctx->pc = 0x334D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D10u;
    // 0x334d14: 0x24a55b00  addiu       $a1, $a1, 0x5B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334D10u, 0x334D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D18u;
label_334d18:
    // 0x334d18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334D18u;
    {
        const bool branch_taken_0x334d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D18u;
        // 0x334d1c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d18) {
            ctx->pc = 0x334D34u;
            goto label_334d34;
        }
    }
    ctx->pc = 0x334D20u;
    // 0x334d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d24: 0xc0cd644  jal         func_335910
    ctx->pc = 0x334D24u;
    SET_GPR_U32(ctx, 31, 0x334D2Cu);
    ctx->pc = 0x334D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D24u;
    // 0x334d28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335910u, 0x334D24u, 0x334D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D2Cu;
label_334d2c:
    // 0x334d2c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x334D2Cu;
    {
        const bool branch_taken_0x334d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D2Cu;
        // 0x334d30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d2c) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334D34u;
label_334d34:
    // 0x334d34: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334d38: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334D38u;
    SET_GPR_U32(ctx, 31, 0x334D40u);
    ctx->pc = 0x334D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D38u;
    // 0x334d3c: 0x24a55b18  addiu       $a1, $a1, 0x5B18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334D38u, 0x334D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D40u;
label_334d40:
    // 0x334d40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334D40u;
    {
        const bool branch_taken_0x334d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D40u;
        // 0x334d44: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d40) {
            ctx->pc = 0x334D5Cu;
            goto label_334d5c;
        }
    }
    ctx->pc = 0x334D48u;
    // 0x334d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d4c: 0xc0cd646  jal         func_335918
    ctx->pc = 0x334D4Cu;
    SET_GPR_U32(ctx, 31, 0x334D54u);
    ctx->pc = 0x334D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D4Cu;
    // 0x334d50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335918u, 0x334D4Cu, 0x334D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D54u;
label_334d54:
    // 0x334d54: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x334D54u;
    {
        const bool branch_taken_0x334d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D54u;
        // 0x334d58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d54) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334D5Cu;
label_334d5c:
    // 0x334d5c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334d60: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334D60u;
    SET_GPR_U32(ctx, 31, 0x334D68u);
    ctx->pc = 0x334D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D60u;
    // 0x334d64: 0x24a55b38  addiu       $a1, $a1, 0x5B38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334D60u, 0x334D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D68u;
label_334d68:
    // 0x334d68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334D68u;
    {
        const bool branch_taken_0x334d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D68u;
        // 0x334d6c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d68) {
            ctx->pc = 0x334D84u;
            goto label_334d84;
        }
    }
    ctx->pc = 0x334D70u;
    // 0x334d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d74: 0xc0cd648  jal         func_335920
    ctx->pc = 0x334D74u;
    SET_GPR_U32(ctx, 31, 0x334D7Cu);
    ctx->pc = 0x334D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D74u;
    // 0x334d78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335920u, 0x334D74u, 0x334D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D7Cu;
label_334d7c:
    // 0x334d7c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x334D7Cu;
    {
        const bool branch_taken_0x334d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D7Cu;
        // 0x334d80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d7c) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334D84u;
label_334d84:
    // 0x334d84: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334d88: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334D88u;
    SET_GPR_U32(ctx, 31, 0x334D90u);
    ctx->pc = 0x334D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D88u;
    // 0x334d8c: 0x24a55b58  addiu       $a1, $a1, 0x5B58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334D88u, 0x334D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D90u;
label_334d90:
    // 0x334d90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334D90u;
    {
        const bool branch_taken_0x334d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D90u;
        // 0x334d94: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d90) {
            ctx->pc = 0x334DACu;
            goto label_334dac;
        }
    }
    ctx->pc = 0x334D98u;
    // 0x334d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d9c: 0xc0cd64a  jal         func_335928
    ctx->pc = 0x334D9Cu;
    SET_GPR_U32(ctx, 31, 0x334DA4u);
    ctx->pc = 0x334DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D9Cu;
    // 0x334da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335928u, 0x334D9Cu, 0x334DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DA4u;
label_334da4:
    // 0x334da4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x334DA4u;
    {
        const bool branch_taken_0x334da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DA4u;
        // 0x334da8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334da4) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334DACu;
label_334dac:
    // 0x334dac: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334db0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334DB0u;
    SET_GPR_U32(ctx, 31, 0x334DB8u);
    ctx->pc = 0x334DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DB0u;
    // 0x334db4: 0x24a55b68  addiu       $a1, $a1, 0x5B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334DB0u, 0x334DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DB8u;
label_334db8:
    // 0x334db8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334DB8u;
    {
        const bool branch_taken_0x334db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DB8u;
        // 0x334dbc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334db8) {
            ctx->pc = 0x334DD4u;
            goto label_334dd4;
        }
    }
    ctx->pc = 0x334DC0u;
    // 0x334dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334dc4: 0xc0cd64c  jal         func_335930
    ctx->pc = 0x334DC4u;
    SET_GPR_U32(ctx, 31, 0x334DCCu);
    ctx->pc = 0x334DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DC4u;
    // 0x334dc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335930u, 0x334DC4u, 0x334DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DCCu;
label_334dcc:
    // 0x334dcc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x334DCCu;
    {
        const bool branch_taken_0x334dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DCCu;
        // 0x334dd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334dcc) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334DD4u;
label_334dd4:
    // 0x334dd4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334dd8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334DD8u;
    SET_GPR_U32(ctx, 31, 0x334DE0u);
    ctx->pc = 0x334DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DD8u;
    // 0x334ddc: 0x24a55b78  addiu       $a1, $a1, 0x5B78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334DD8u, 0x334DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DE0u;
label_334de0:
    // 0x334de0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x334DE0u;
    {
        const bool branch_taken_0x334de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DE0u;
        // 0x334de4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334de0) {
            ctx->pc = 0x334DFCu;
            goto label_334dfc;
        }
    }
    ctx->pc = 0x334DE8u;
    // 0x334de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334dec: 0xc0cd64e  jal         func_335938
    ctx->pc = 0x334DECu;
    SET_GPR_U32(ctx, 31, 0x334DF4u);
    ctx->pc = 0x334DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DECu;
    // 0x334df0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335938u, 0x334DECu, 0x334DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DF4u;
label_334df4:
    // 0x334df4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x334DF4u;
    {
        const bool branch_taken_0x334df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DF4u;
        // 0x334df8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334df4) {
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334DFCu;
label_334dfc:
    // 0x334dfc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x334dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x334e00: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x334E00u;
    SET_GPR_U32(ctx, 31, 0x334E08u);
    ctx->pc = 0x334E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334E00u;
    // 0x334e04: 0x24a55b88  addiu       $a1, $a1, 0x5B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x334E00u, 0x334E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334E08u;
label_334e08:
    // 0x334e08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x334E08u;
    {
        const bool branch_taken_0x334e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334e08) {
            ctx->pc = 0x334E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334E08u;
            // 0x334e0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334E20u;
            goto label_334e20;
        }
    }
    ctx->pc = 0x334E10u;
    // 0x334e10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x334e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e14: 0xc0cd650  jal         func_335940
    ctx->pc = 0x334E14u;
    SET_GPR_U32(ctx, 31, 0x334E1Cu);
    ctx->pc = 0x334E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334E14u;
    // 0x334e18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335940u, 0x334E14u, 0x334E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334E1Cu;
label_334e1c:
    // 0x334e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334e20:
    // 0x334e20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334e24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x334e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334e28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x334e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x334E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E2Cu;
        // 0x334e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334E34u;
    // 0x334e34: 0x0  nop
    ctx->pc = 0x334e34u;
    // NOP
    ctx->pc = 0x334e38u;
}
