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

// Function: sub_0021FBD8
// Address: 0x21fbd8 - 0x2200a0
void sub_0021FBD8_0x21fbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FBD8_0x21fbd8");
#endif

    switch (ctx->pc) {
        case 0x21fc04u: goto label_21fc04;
        case 0x21fc14u: goto label_21fc14;
        case 0x21fc28u: goto label_21fc28;
        case 0x21fc40u: goto label_21fc40;
        case 0x21fc54u: goto label_21fc54;
        case 0x21fc6cu: goto label_21fc6c;
        case 0x21fc84u: goto label_21fc84;
        case 0x21fc8cu: goto label_21fc8c;
        case 0x21fca0u: goto label_21fca0;
        case 0x21fcb4u: goto label_21fcb4;
        case 0x21fcccu: goto label_21fccc;
        case 0x21fcd4u: goto label_21fcd4;
        case 0x21fce8u: goto label_21fce8;
        case 0x21fcfcu: goto label_21fcfc;
        case 0x21fd14u: goto label_21fd14;
        case 0x21fd1cu: goto label_21fd1c;
        case 0x21fd30u: goto label_21fd30;
        case 0x21fd44u: goto label_21fd44;
        case 0x21fd5cu: goto label_21fd5c;
        case 0x21fd64u: goto label_21fd64;
        case 0x21fd78u: goto label_21fd78;
        case 0x21fd8cu: goto label_21fd8c;
        case 0x21fda0u: goto label_21fda0;
        case 0x21fdb8u: goto label_21fdb8;
        case 0x21fdccu: goto label_21fdcc;
        case 0x21fde4u: goto label_21fde4;
        case 0x21fdf8u: goto label_21fdf8;
        case 0x21fe10u: goto label_21fe10;
        case 0x21fe24u: goto label_21fe24;
        case 0x21fe3cu: goto label_21fe3c;
        case 0x21fe50u: goto label_21fe50;
        case 0x21fe68u: goto label_21fe68;
        case 0x21fe7cu: goto label_21fe7c;
        case 0x21fe94u: goto label_21fe94;
        case 0x21fea8u: goto label_21fea8;
        case 0x21fec0u: goto label_21fec0;
        case 0x21fed4u: goto label_21fed4;
        case 0x21feecu: goto label_21feec;
        case 0x21ff00u: goto label_21ff00;
        case 0x21ff18u: goto label_21ff18;
        case 0x21ff2cu: goto label_21ff2c;
        case 0x21ff44u: goto label_21ff44;
        case 0x21ff58u: goto label_21ff58;
        case 0x21ff70u: goto label_21ff70;
        case 0x21ff84u: goto label_21ff84;
        case 0x21ff9cu: goto label_21ff9c;
        case 0x21ffb0u: goto label_21ffb0;
        case 0x21ffc8u: goto label_21ffc8;
        case 0x21ffdcu: goto label_21ffdc;
        case 0x21fff4u: goto label_21fff4;
        case 0x220008u: goto label_220008;
        case 0x220020u: goto label_220020;
        case 0x22003cu: goto label_22003c;
        case 0x220054u: goto label_220054;
        case 0x220064u: goto label_220064;
        case 0x220074u: goto label_220074;
        case 0x220080u: goto label_220080;
        default: break;
    }

    ctx->pc = 0x21fbd8u;

    // 0x21fbd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21fbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21fbdc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x21fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x21fbe0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21fbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21fbe4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21fbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21fbe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21fbe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21fbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21fbf0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21fbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21fbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fbf8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21fbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21fbfc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21FBFCu;
    SET_GPR_U32(ctx, 31, 0x21FC04u);
    ctx->pc = 0x21FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FBFCu;
    // 0x21fc00: 0x2452fe40  addiu       $s2, $v0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21FBFCu, 0x21FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC04u;
label_21fc04:
    // 0x21fc04: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21fc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21fc08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc0c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FC0Cu;
    SET_GPR_U32(ctx, 31, 0x21FC14u);
    ctx->pc = 0x21FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC0Cu;
    // 0x21fc10: 0x24a52598  addiu       $a1, $a1, 0x2598 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FC0Cu, 0x21FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC14u;
label_21fc14:
    // 0x21fc14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fc18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FC18u;
    {
        const bool branch_taken_0x21fc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC18u;
        // 0x21fc1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc18) {
            ctx->pc = 0x21FC30u;
            goto label_21fc30;
        }
    }
    ctx->pc = 0x21FC20u;
    // 0x21fc20: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21FC20u;
    SET_GPR_U32(ctx, 31, 0x21FC28u);
    ctx->pc = 0x21FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC20u;
    // 0x21fc24: 0x262501c0  addiu       $a1, $s1, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21FC20u, 0x21FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC28u;
label_21fc28:
    // 0x21fc28: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x21FC28u;
    {
        const bool branch_taken_0x21fc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC28u;
        // 0x21fc2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc28) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FC30u;
label_21fc30:
    // 0x21fc30: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21fc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc38: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FC38u;
    SET_GPR_U32(ctx, 31, 0x21FC40u);
    ctx->pc = 0x21FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC38u;
    // 0x21fc3c: 0x24a525a8  addiu       $a1, $a1, 0x25A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FC38u, 0x21FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC40u;
label_21fc40:
    // 0x21fc40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fc44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FC44u;
    {
        const bool branch_taken_0x21fc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC44u;
        // 0x21fc48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc44) {
            ctx->pc = 0x21FC5Cu;
            goto label_21fc5c;
        }
    }
    ctx->pc = 0x21FC4Cu;
    // 0x21fc4c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21FC4Cu;
    SET_GPR_U32(ctx, 31, 0x21FC54u);
    ctx->pc = 0x21FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC4Cu;
    // 0x21fc50: 0x262501cc  addiu       $a1, $s1, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21FC4Cu, 0x21FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC54u;
label_21fc54:
    // 0x21fc54: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x21FC54u;
    {
        const bool branch_taken_0x21fc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC54u;
        // 0x21fc58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc54) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FC5Cu;
label_21fc5c:
    // 0x21fc5c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21fc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21fc60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc64: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FC64u;
    SET_GPR_U32(ctx, 31, 0x21FC6Cu);
    ctx->pc = 0x21FC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC64u;
    // 0x21fc68: 0x24a525b0  addiu       $a1, $a1, 0x25B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FC64u, 0x21FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC6Cu;
label_21fc6c:
    // 0x21fc6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fc70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21FC70u;
    {
        const bool branch_taken_0x21fc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FC70u;
        // 0x21fc74: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fc70) {
            ctx->pc = 0x21FCA8u;
            goto label_21fca8;
        }
    }
    ctx->pc = 0x21FC78u;
    // 0x21fc78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21fc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc7c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21FC7Cu;
    SET_GPR_U32(ctx, 31, 0x21FC84u);
    ctx->pc = 0x21FC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC7Cu;
    // 0x21fc80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21FC7Cu, 0x21FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC84u;
label_21fc84:
    // 0x21fc84: 0xc097844  jal         func_25E110
    ctx->pc = 0x21FC84u;
    SET_GPR_U32(ctx, 31, 0x21FC8Cu);
    ctx->pc = 0x21FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC84u;
    // 0x21fc88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E110u, 0x21FC84u, 0x21FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FC8Cu;
label_21fc8c:
    // 0x21fc8c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x21fc90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fc94: 0x244201d8  addiu       $v0, $v0, 0x1D8
    ctx->pc = 0x21fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 472));
    // 0x21fc98: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21FC98u;
    SET_GPR_U32(ctx, 31, 0x21FCA0u);
    ctx->pc = 0x21FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FC98u;
    // 0x21fc9c: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21FC98u, 0x21FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCA0u;
label_21fca0:
    // 0x21fca0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x21FCA0u;
    {
        const bool branch_taken_0x21fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCA0u;
        // 0x21fca4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fca0) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FCA8u;
label_21fca8:
    // 0x21fca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FCACu;
    SET_GPR_U32(ctx, 31, 0x21FCB4u);
    ctx->pc = 0x21FCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCACu;
    // 0x21fcb0: 0x24a525c0  addiu       $a1, $a1, 0x25C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FCACu, 0x21FCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCB4u;
label_21fcb4:
    // 0x21fcb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fcb8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21FCB8u;
    {
        const bool branch_taken_0x21fcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCB8u;
        // 0x21fcbc: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcb8) {
            ctx->pc = 0x21FCF0u;
            goto label_21fcf0;
        }
    }
    ctx->pc = 0x21FCC0u;
    // 0x21fcc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21fcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcc4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21FCC4u;
    SET_GPR_U32(ctx, 31, 0x21FCCCu);
    ctx->pc = 0x21FCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCC4u;
    // 0x21fcc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21FCC4u, 0x21FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCCCu;
label_21fccc:
    // 0x21fccc: 0xc097844  jal         func_25E110
    ctx->pc = 0x21FCCCu;
    SET_GPR_U32(ctx, 31, 0x21FCD4u);
    ctx->pc = 0x21FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCCCu;
    // 0x21fcd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E110u, 0x21FCCCu, 0x21FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCD4u;
label_21fcd4:
    // 0x21fcd4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x21fcd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcdc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21fce0: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21FCE0u;
    SET_GPR_U32(ctx, 31, 0x21FCE8u);
    ctx->pc = 0x21FCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCE0u;
    // 0x21fce4: 0x244501e0  addiu       $a1, $v0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21FCE0u, 0x21FCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCE8u;
label_21fce8:
    // 0x21fce8: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x21FCE8u;
    {
        const bool branch_taken_0x21fce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCE8u;
        // 0x21fcec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fce8) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FCF0u;
label_21fcf0:
    // 0x21fcf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcf4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FCF4u;
    SET_GPR_U32(ctx, 31, 0x21FCFCu);
    ctx->pc = 0x21FCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCF4u;
    // 0x21fcf8: 0x24a525d0  addiu       $a1, $a1, 0x25D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FCF4u, 0x21FCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCFCu;
label_21fcfc:
    // 0x21fcfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fd00: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21FD00u;
    {
        const bool branch_taken_0x21fd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD00u;
        // 0x21fd04: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd00) {
            ctx->pc = 0x21FD38u;
            goto label_21fd38;
        }
    }
    ctx->pc = 0x21FD08u;
    // 0x21fd08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21fd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd0c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21FD0Cu;
    SET_GPR_U32(ctx, 31, 0x21FD14u);
    ctx->pc = 0x21FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD0Cu;
    // 0x21fd10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21FD0Cu, 0x21FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD14u;
label_21fd14:
    // 0x21fd14: 0xc097844  jal         func_25E110
    ctx->pc = 0x21FD14u;
    SET_GPR_U32(ctx, 31, 0x21FD1Cu);
    ctx->pc = 0x21FD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD14u;
    // 0x21fd18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E110u, 0x21FD14u, 0x21FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD1Cu;
label_21fd1c:
    // 0x21fd1c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x21fd20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21fd28: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21FD28u;
    SET_GPR_U32(ctx, 31, 0x21FD30u);
    ctx->pc = 0x21FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD28u;
    // 0x21fd2c: 0x244501e8  addiu       $a1, $v0, 0x1E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21FD28u, 0x21FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD30u;
label_21fd30:
    // 0x21fd30: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x21FD30u;
    {
        const bool branch_taken_0x21fd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD30u;
        // 0x21fd34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd30) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FD38u;
label_21fd38:
    // 0x21fd38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd3c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FD3Cu;
    SET_GPR_U32(ctx, 31, 0x21FD44u);
    ctx->pc = 0x21FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD3Cu;
    // 0x21fd40: 0x24a525e0  addiu       $a1, $a1, 0x25E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FD3Cu, 0x21FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD44u;
label_21fd44:
    // 0x21fd44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fd48: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21FD48u;
    {
        const bool branch_taken_0x21fd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD48u;
        // 0x21fd4c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd48) {
            ctx->pc = 0x21FD80u;
            goto label_21fd80;
        }
    }
    ctx->pc = 0x21FD50u;
    // 0x21fd50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21fd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd54: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21FD54u;
    SET_GPR_U32(ctx, 31, 0x21FD5Cu);
    ctx->pc = 0x21FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD54u;
    // 0x21fd58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21FD54u, 0x21FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD5Cu;
label_21fd5c:
    // 0x21fd5c: 0xc097844  jal         func_25E110
    ctx->pc = 0x21FD5Cu;
    SET_GPR_U32(ctx, 31, 0x21FD64u);
    ctx->pc = 0x21FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD5Cu;
    // 0x21fd60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E110u, 0x21FD5Cu, 0x21FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD64u;
label_21fd64:
    // 0x21fd64: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x21fd68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21fd70: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21FD70u;
    SET_GPR_U32(ctx, 31, 0x21FD78u);
    ctx->pc = 0x21FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD70u;
    // 0x21fd74: 0x244501f0  addiu       $a1, $v0, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21FD70u, 0x21FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD78u;
label_21fd78:
    // 0x21fd78: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x21FD78u;
    {
        const bool branch_taken_0x21fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD78u;
        // 0x21fd7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd78) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FD80u;
label_21fd80:
    // 0x21fd80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd84: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FD84u;
    SET_GPR_U32(ctx, 31, 0x21FD8Cu);
    ctx->pc = 0x21FD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD84u;
    // 0x21fd88: 0x24a525f0  addiu       $a1, $a1, 0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FD84u, 0x21FD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD8Cu;
label_21fd8c:
    // 0x21fd8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fd90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FD90u;
    {
        const bool branch_taken_0x21fd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD90u;
        // 0x21fd94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd90) {
            ctx->pc = 0x21FDA8u;
            goto label_21fda8;
        }
    }
    ctx->pc = 0x21FD98u;
    // 0x21fd98: 0xc09e056  jal         func_278158
    ctx->pc = 0x21FD98u;
    SET_GPR_U32(ctx, 31, 0x21FDA0u);
    ctx->pc = 0x21FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD98u;
    // 0x21fd9c: 0x26251398  addiu       $a1, $s1, 0x1398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x21FD98u, 0x21FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDA0u;
label_21fda0:
    // 0x21fda0: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x21FDA0u;
    {
        const bool branch_taken_0x21fda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDA0u;
        // 0x21fda4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fda0) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FDA8u;
label_21fda8:
    // 0x21fda8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21fdac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fdb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FDB0u;
    SET_GPR_U32(ctx, 31, 0x21FDB8u);
    ctx->pc = 0x21FDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDB0u;
    // 0x21fdb4: 0x24a52600  addiu       $a1, $a1, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FDB0u, 0x21FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDB8u;
label_21fdb8:
    // 0x21fdb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fdbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FDBCu;
    {
        const bool branch_taken_0x21fdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDBCu;
        // 0x21fdc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdbc) {
            ctx->pc = 0x21FDD4u;
            goto label_21fdd4;
        }
    }
    ctx->pc = 0x21FDC4u;
    // 0x21fdc4: 0xc09e056  jal         func_278158
    ctx->pc = 0x21FDC4u;
    SET_GPR_U32(ctx, 31, 0x21FDCCu);
    ctx->pc = 0x21FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDC4u;
    // 0x21fdc8: 0x262501d4  addiu       $a1, $s1, 0x1D4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x21FDC4u, 0x21FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDCCu;
label_21fdcc:
    // 0x21fdcc: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x21FDCCu;
    {
        const bool branch_taken_0x21fdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDCCu;
        // 0x21fdd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdcc) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FDD4u;
label_21fdd4:
    // 0x21fdd4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21fdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fddc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FDDCu;
    SET_GPR_U32(ctx, 31, 0x21FDE4u);
    ctx->pc = 0x21FDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDDCu;
    // 0x21fde0: 0x24a52610  addiu       $a1, $a1, 0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FDDCu, 0x21FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDE4u;
label_21fde4:
    // 0x21fde4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fde8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FDE8u;
    {
        const bool branch_taken_0x21fde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDE8u;
        // 0x21fdec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fde8) {
            ctx->pc = 0x21FE00u;
            goto label_21fe00;
        }
    }
    ctx->pc = 0x21FDF0u;
    // 0x21fdf0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21FDF0u;
    SET_GPR_U32(ctx, 31, 0x21FDF8u);
    ctx->pc = 0x21FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDF0u;
    // 0x21fdf4: 0x2625139c  addiu       $a1, $s1, 0x139C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5020));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21FDF0u, 0x21FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDF8u;
label_21fdf8:
    // 0x21fdf8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x21FDF8u;
    {
        const bool branch_taken_0x21fdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDF8u;
        // 0x21fdfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdf8) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FE00u;
label_21fe00:
    // 0x21fe00: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21fe04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe08: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FE08u;
    SET_GPR_U32(ctx, 31, 0x21FE10u);
    ctx->pc = 0x21FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE08u;
    // 0x21fe0c: 0x24a52618  addiu       $a1, $a1, 0x2618 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FE08u, 0x21FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE10u;
label_21fe10:
    // 0x21fe10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fe14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FE14u;
    {
        const bool branch_taken_0x21fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE14u;
        // 0x21fe18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe14) {
            ctx->pc = 0x21FE2Cu;
            goto label_21fe2c;
        }
    }
    ctx->pc = 0x21FE1Cu;
    // 0x21fe1c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21FE1Cu;
    SET_GPR_U32(ctx, 31, 0x21FE24u);
    ctx->pc = 0x21FE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE1Cu;
    // 0x21fe20: 0x262513a0  addiu       $a1, $s1, 0x13A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21FE1Cu, 0x21FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE24u;
label_21fe24:
    // 0x21fe24: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x21FE24u;
    {
        const bool branch_taken_0x21fe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE24u;
        // 0x21fe28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe24) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FE2Cu;
label_21fe2c:
    // 0x21fe2c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21fe30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe34: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FE34u;
    SET_GPR_U32(ctx, 31, 0x21FE3Cu);
    ctx->pc = 0x21FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE34u;
    // 0x21fe38: 0x24a52628  addiu       $a1, $a1, 0x2628 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FE34u, 0x21FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE3Cu;
label_21fe3c:
    // 0x21fe3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fe40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FE40u;
    {
        const bool branch_taken_0x21fe40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE40u;
        // 0x21fe44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe40) {
            ctx->pc = 0x21FE58u;
            goto label_21fe58;
        }
    }
    ctx->pc = 0x21FE48u;
    // 0x21fe48: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21FE48u;
    SET_GPR_U32(ctx, 31, 0x21FE50u);
    ctx->pc = 0x21FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE48u;
    // 0x21fe4c: 0x262513a4  addiu       $a1, $s1, 0x13A4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5028));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21FE48u, 0x21FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE50u;
label_21fe50:
    // 0x21fe50: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x21FE50u;
    {
        const bool branch_taken_0x21fe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE50u;
        // 0x21fe54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe50) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FE58u;
label_21fe58:
    // 0x21fe58: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21fe5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe60: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FE60u;
    SET_GPR_U32(ctx, 31, 0x21FE68u);
    ctx->pc = 0x21FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE60u;
    // 0x21fe64: 0x24a52640  addiu       $a1, $a1, 0x2640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FE60u, 0x21FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE68u;
label_21fe68:
    // 0x21fe68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fe68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fe6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FE6Cu;
    {
        const bool branch_taken_0x21fe6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE6Cu;
        // 0x21fe70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe6c) {
            ctx->pc = 0x21FE84u;
            goto label_21fe84;
        }
    }
    ctx->pc = 0x21FE74u;
    // 0x21fe74: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21FE74u;
    SET_GPR_U32(ctx, 31, 0x21FE7Cu);
    ctx->pc = 0x21FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE74u;
    // 0x21fe78: 0x262513a8  addiu       $a1, $s1, 0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21FE74u, 0x21FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE7Cu;
label_21fe7c:
    // 0x21fe7c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x21FE7Cu;
    {
        const bool branch_taken_0x21fe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE7Cu;
        // 0x21fe80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe7c) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FE84u;
label_21fe84:
    // 0x21fe84: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21fe84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21fe88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe8c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FE8Cu;
    SET_GPR_U32(ctx, 31, 0x21FE94u);
    ctx->pc = 0x21FE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FE8Cu;
    // 0x21fe90: 0x24a52650  addiu       $a1, $a1, 0x2650 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FE8Cu, 0x21FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FE94u;
label_21fe94:
    // 0x21fe94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fe98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FE98u;
    {
        const bool branch_taken_0x21fe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE98u;
        // 0x21fe9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fe98) {
            ctx->pc = 0x21FEB0u;
            goto label_21feb0;
        }
    }
    ctx->pc = 0x21FEA0u;
    // 0x21fea0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21FEA0u;
    SET_GPR_U32(ctx, 31, 0x21FEA8u);
    ctx->pc = 0x21FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEA0u;
    // 0x21fea4: 0x262513ac  addiu       $a1, $s1, 0x13AC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5036));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21FEA0u, 0x21FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEA8u;
label_21fea8:
    // 0x21fea8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x21FEA8u;
    {
        const bool branch_taken_0x21fea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEA8u;
        // 0x21feac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fea8) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FEB0u;
label_21feb0:
    // 0x21feb0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21feb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21feb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21feb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21feb8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FEB8u;
    SET_GPR_U32(ctx, 31, 0x21FEC0u);
    ctx->pc = 0x21FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEB8u;
    // 0x21febc: 0x24a52660  addiu       $a1, $a1, 0x2660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FEB8u, 0x21FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEC0u;
label_21fec0:
    // 0x21fec0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fec4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FEC4u;
    {
        const bool branch_taken_0x21fec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEC4u;
        // 0x21fec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fec4) {
            ctx->pc = 0x21FEDCu;
            goto label_21fedc;
        }
    }
    ctx->pc = 0x21FECCu;
    // 0x21fecc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21FECCu;
    SET_GPR_U32(ctx, 31, 0x21FED4u);
    ctx->pc = 0x21FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FECCu;
    // 0x21fed0: 0x262513b0  addiu       $a1, $s1, 0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21FECCu, 0x21FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FED4u;
label_21fed4:
    // 0x21fed4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x21FED4u;
    {
        const bool branch_taken_0x21fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FED4u;
        // 0x21fed8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fed4) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FEDCu;
label_21fedc:
    // 0x21fedc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21fedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21fee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fee4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FEE4u;
    SET_GPR_U32(ctx, 31, 0x21FEECu);
    ctx->pc = 0x21FEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEE4u;
    // 0x21fee8: 0x24a52670  addiu       $a1, $a1, 0x2670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FEE4u, 0x21FEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEECu;
label_21feec:
    // 0x21feec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21feecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fef0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FEF0u;
    {
        const bool branch_taken_0x21fef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEF0u;
        // 0x21fef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fef0) {
            ctx->pc = 0x21FF08u;
            goto label_21ff08;
        }
    }
    ctx->pc = 0x21FEF8u;
    // 0x21fef8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21FEF8u;
    SET_GPR_U32(ctx, 31, 0x21FF00u);
    ctx->pc = 0x21FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEF8u;
    // 0x21fefc: 0x262513b4  addiu       $a1, $s1, 0x13B4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5044));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21FEF8u, 0x21FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF00u;
label_21ff00:
    // 0x21ff00: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x21FF00u;
    {
        const bool branch_taken_0x21ff00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF00u;
        // 0x21ff04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff00) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FF08u;
label_21ff08:
    // 0x21ff08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ff0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff10: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FF10u;
    SET_GPR_U32(ctx, 31, 0x21FF18u);
    ctx->pc = 0x21FF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF10u;
    // 0x21ff14: 0x24a52680  addiu       $a1, $a1, 0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FF10u, 0x21FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF18u;
label_21ff18:
    // 0x21ff18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ff18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ff1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FF1Cu;
    {
        const bool branch_taken_0x21ff1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF1Cu;
        // 0x21ff20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff1c) {
            ctx->pc = 0x21FF34u;
            goto label_21ff34;
        }
    }
    ctx->pc = 0x21FF24u;
    // 0x21ff24: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21FF24u;
    SET_GPR_U32(ctx, 31, 0x21FF2Cu);
    ctx->pc = 0x21FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF24u;
    // 0x21ff28: 0x262513b8  addiu       $a1, $s1, 0x13B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21FF24u, 0x21FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF2Cu;
label_21ff2c:
    // 0x21ff2c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x21FF2Cu;
    {
        const bool branch_taken_0x21ff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF2Cu;
        // 0x21ff30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff2c) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FF34u;
label_21ff34:
    // 0x21ff34: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ff38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ff38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff3c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FF3Cu;
    SET_GPR_U32(ctx, 31, 0x21FF44u);
    ctx->pc = 0x21FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF3Cu;
    // 0x21ff40: 0x24a52690  addiu       $a1, $a1, 0x2690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FF3Cu, 0x21FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF44u;
label_21ff44:
    // 0x21ff44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ff44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ff48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FF48u;
    {
        const bool branch_taken_0x21ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF48u;
        // 0x21ff4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff48) {
            ctx->pc = 0x21FF60u;
            goto label_21ff60;
        }
    }
    ctx->pc = 0x21FF50u;
    // 0x21ff50: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21FF50u;
    SET_GPR_U32(ctx, 31, 0x21FF58u);
    ctx->pc = 0x21FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF50u;
    // 0x21ff54: 0x262513c0  addiu       $a1, $s1, 0x13C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21FF50u, 0x21FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF58u;
label_21ff58:
    // 0x21ff58: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x21FF58u;
    {
        const bool branch_taken_0x21ff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF58u;
        // 0x21ff5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff58) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FF60u;
label_21ff60:
    // 0x21ff60: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ff60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ff64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ff64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff68: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FF68u;
    SET_GPR_U32(ctx, 31, 0x21FF70u);
    ctx->pc = 0x21FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF68u;
    // 0x21ff6c: 0x24a526a0  addiu       $a1, $a1, 0x26A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FF68u, 0x21FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF70u;
label_21ff70:
    // 0x21ff70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ff70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ff74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FF74u;
    {
        const bool branch_taken_0x21ff74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF74u;
        // 0x21ff78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff74) {
            ctx->pc = 0x21FF8Cu;
            goto label_21ff8c;
        }
    }
    ctx->pc = 0x21FF7Cu;
    // 0x21ff7c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21FF7Cu;
    SET_GPR_U32(ctx, 31, 0x21FF84u);
    ctx->pc = 0x21FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF7Cu;
    // 0x21ff80: 0x262513bc  addiu       $a1, $s1, 0x13BC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5052));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21FF7Cu, 0x21FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF84u;
label_21ff84:
    // 0x21ff84: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x21FF84u;
    {
        const bool branch_taken_0x21ff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF84u;
        // 0x21ff88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff84) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FF8Cu;
label_21ff8c:
    // 0x21ff8c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ff90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff94: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FF94u;
    SET_GPR_U32(ctx, 31, 0x21FF9Cu);
    ctx->pc = 0x21FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FF94u;
    // 0x21ff98: 0x24a526b0  addiu       $a1, $a1, 0x26B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FF94u, 0x21FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FF9Cu;
label_21ff9c:
    // 0x21ff9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ffa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FFA0u;
    {
        const bool branch_taken_0x21ffa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFA0u;
        // 0x21ffa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffa0) {
            ctx->pc = 0x21FFB8u;
            goto label_21ffb8;
        }
    }
    ctx->pc = 0x21FFA8u;
    // 0x21ffa8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21FFA8u;
    SET_GPR_U32(ctx, 31, 0x21FFB0u);
    ctx->pc = 0x21FFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFA8u;
    // 0x21ffac: 0x262513c4  addiu       $a1, $s1, 0x13C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5060));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21FFA8u, 0x21FFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFB0u;
label_21ffb0:
    // 0x21ffb0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x21FFB0u;
    {
        const bool branch_taken_0x21ffb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFB0u;
        // 0x21ffb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffb0) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FFB8u;
label_21ffb8:
    // 0x21ffb8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ffbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ffbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffc0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FFC0u;
    SET_GPR_U32(ctx, 31, 0x21FFC8u);
    ctx->pc = 0x21FFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFC0u;
    // 0x21ffc4: 0x24a526c0  addiu       $a1, $a1, 0x26C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FFC0u, 0x21FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFC8u;
label_21ffc8:
    // 0x21ffc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ffc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ffcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FFCCu;
    {
        const bool branch_taken_0x21ffcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFCCu;
        // 0x21ffd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffcc) {
            ctx->pc = 0x21FFE4u;
            goto label_21ffe4;
        }
    }
    ctx->pc = 0x21FFD4u;
    // 0x21ffd4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21FFD4u;
    SET_GPR_U32(ctx, 31, 0x21FFDCu);
    ctx->pc = 0x21FFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFD4u;
    // 0x21ffd8: 0x262513c8  addiu       $a1, $s1, 0x13C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21FFD4u, 0x21FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFDCu;
label_21ffdc:
    // 0x21ffdc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x21FFDCu;
    {
        const bool branch_taken_0x21ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFDCu;
        // 0x21ffe0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffdc) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x21FFE4u;
label_21ffe4:
    // 0x21ffe4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ffe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ffe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21FFECu;
    SET_GPR_U32(ctx, 31, 0x21FFF4u);
    ctx->pc = 0x21FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FFECu;
    // 0x21fff0: 0x24a526d0  addiu       $a1, $a1, 0x26D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21FFECu, 0x21FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FFF4u;
label_21fff4:
    // 0x21fff4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21fff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21fff8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FFF8u;
    {
        const bool branch_taken_0x21fff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFF8u;
        // 0x21fffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fff8) {
            ctx->pc = 0x220010u;
            goto label_220010;
        }
    }
    ctx->pc = 0x220000u;
    // 0x220000: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x220000u;
    SET_GPR_U32(ctx, 31, 0x220008u);
    ctx->pc = 0x220004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220000u;
    // 0x220004: 0x262513cc  addiu       $a1, $s1, 0x13CC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5068));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x220000u, 0x220008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220008u;
label_220008:
    // 0x220008: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x220008u;
    {
        const bool branch_taken_0x220008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220008u;
        // 0x22000c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220008) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x220010u;
label_220010:
    // 0x220010: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220018: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220018u;
    SET_GPR_U32(ctx, 31, 0x220020u);
    ctx->pc = 0x22001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220018u;
    // 0x22001c: 0x24a526e0  addiu       $a1, $a1, 0x26E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220018u, 0x220020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220020u;
label_220020:
    // 0x220020: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220024: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x220024u;
    {
        const bool branch_taken_0x220024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220024u;
        // 0x220028: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220024) {
            ctx->pc = 0x220078u;
            goto label_220078;
        }
    }
    ctx->pc = 0x22002Cu;
    // 0x22002c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22002cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220034: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220034u;
    SET_GPR_U32(ctx, 31, 0x22003Cu);
    ctx->pc = 0x220038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220034u;
    // 0x220038: 0x24a526f0  addiu       $a1, $a1, 0x26F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220034u, 0x22003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22003Cu;
label_22003c:
    // 0x22003c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220040: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x220040u;
    {
        const bool branch_taken_0x220040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220040u;
        // 0x220044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220040) {
            ctx->pc = 0x22006Cu;
            goto label_22006c;
        }
    }
    ctx->pc = 0x220048u;
    // 0x220048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x220048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22004c: 0xc087a1e  jal         func_21E878
    ctx->pc = 0x22004Cu;
    SET_GPR_U32(ctx, 31, 0x220054u);
    ctx->pc = 0x220050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22004Cu;
    // 0x220050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E878u, 0x22004Cu, 0x220054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220054u;
label_220054:
    // 0x220054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220058: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x220058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22005c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x22005Cu;
    SET_GPR_U32(ctx, 31, 0x220064u);
    ctx->pc = 0x220060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22005Cu;
    // 0x220060: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x22005Cu, 0x220064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220064u;
label_220064:
    // 0x220064: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x220064u;
    {
        const bool branch_taken_0x220064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220064u;
        // 0x220068: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220064) {
            ctx->pc = 0x220084u;
            goto label_220084;
        }
    }
    ctx->pc = 0x22006Cu;
label_22006c:
    // 0x22006c: 0xc09e056  jal         func_278158
    ctx->pc = 0x22006Cu;
    SET_GPR_U32(ctx, 31, 0x220074u);
    ctx->pc = 0x220070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22006Cu;
    // 0x220070: 0x262513fc  addiu       $a1, $s1, 0x13FC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x22006Cu, 0x220074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220074u;
label_220074:
    // 0x220074: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x220074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_220078:
    // 0x220078: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x220078u;
    SET_GPR_U32(ctx, 31, 0x220080u);
    ctx->pc = 0x22007Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220078u;
    // 0x22007c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x220078u, 0x220080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220080u;
label_220080:
    // 0x220080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220084:
    // 0x220084: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x220084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220088: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x220088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22008c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22008cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220090: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x220090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x220094: 0x3e00008  jr          $ra
    ctx->pc = 0x220094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220094u;
        // 0x220098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22009Cu;
    // 0x22009c: 0x0  nop
    ctx->pc = 0x22009cu;
    // NOP
    ctx->pc = 0x2200a0u;
}
