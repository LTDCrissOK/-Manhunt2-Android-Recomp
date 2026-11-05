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

// Function: sub_001B8710
// Address: 0x1b8710 - 0x1b8960
void sub_001B8710_0x1b8710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8710_0x1b8710");
#endif

    switch (ctx->pc) {
        case 0x1b877cu: goto label_1b877c;
        case 0x1b8790u: goto label_1b8790;
        case 0x1b879cu: goto label_1b879c;
        case 0x1b87e0u: goto label_1b87e0;
        case 0x1b87f4u: goto label_1b87f4;
        case 0x1b8804u: goto label_1b8804;
        default: break;
    }

    ctx->pc = 0x1b8710u;

    // 0x1b8710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8718: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b871c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b871cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8720: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b8720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b8724: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b8724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8728: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b8728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b872c: 0x8e230fe8  lw          $v1, 0xFE8($s1)
    ctx->pc = 0x1b872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
    // 0x1b8730: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x1b8730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1b8734: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1b8734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b8738: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1b8738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1b873c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B873Cu;
    {
        const bool branch_taken_0x1b873c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B873Cu;
        // 0x1b8740: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b873c) {
            ctx->pc = 0x1B874Cu;
            goto label_1b874c;
        }
    }
    ctx->pc = 0x1B8744u;
    // 0x1b8744: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8744u;
    {
        const bool branch_taken_0x1b8744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8744u;
        // 0x1b8748: 0x8c630014  lw          $v1, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8744) {
            ctx->pc = 0x1B8750u;
            goto label_1b8750;
        }
    }
    ctx->pc = 0x1B874Cu;
label_1b874c:
    // 0x1b874c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b874cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8750:
    // 0x1b8750: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B8750u;
    {
        const bool branch_taken_0x1b8750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8750) {
            ctx->pc = 0x1B8754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8750u;
            // 0x1b8754: 0x8e220fe8  lw          $v0, 0xFE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8784u;
            goto label_1b8784;
        }
    }
    ctx->pc = 0x1B8758u;
    // 0x1b8758: 0x8e230fe8  lw          $v1, 0xFE8($s1)
    ctx->pc = 0x1b8758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
    // 0x1b875c: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x1b875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1b8760: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1b8760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b8764: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1b8764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1b8768: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8768u;
    {
        const bool branch_taken_0x1b8768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8768u;
        // 0x1b876c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8768) {
            ctx->pc = 0x1B8774u;
            goto label_1b8774;
        }
    }
    ctx->pc = 0x1B8770u;
    // 0x1b8770: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x1b8770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1b8774:
    // 0x1b8774: 0xc06fb38  jal         func_1BECE0
    ctx->pc = 0x1B8774u;
    SET_GPR_U32(ctx, 31, 0x1B877Cu);
    ctx->pc = 0x1B8778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8774u;
    // 0x1b8778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1B8774u, 0x1B877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B877Cu;
label_1b877c:
    // 0x1b877c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B877Cu;
    {
        const bool branch_taken_0x1b877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B877Cu;
        // 0x1b8780: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b877c) {
            ctx->pc = 0x1B8794u;
            goto label_1b8794;
        }
    }
    ctx->pc = 0x1B8784u;
label_1b8784:
    // 0x1b8784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8788: 0xc06fb38  jal         func_1BECE0
    ctx->pc = 0x1B8788u;
    SET_GPR_U32(ctx, 31, 0x1B8790u);
    ctx->pc = 0x1B878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8788u;
    // 0x1b878c: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1B8788u, 0x1B8790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8790u;
label_1b8790:
    // 0x1b8790: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1b8790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1b8794:
    // 0x1b8794: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x1B8794u;
    SET_GPR_U32(ctx, 31, 0x1B879Cu);
    ctx->pc = 0x1B8798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8794u;
    // 0x1b8798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1B8794u, 0x1B879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B879Cu;
label_1b879c:
    // 0x1b879c: 0x8e0303e0  lw          $v1, 0x3E0($s0)
    ctx->pc = 0x1b879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 992)));
    // 0x1b87a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b87a4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B87A4u;
    {
        const bool branch_taken_0x1b87a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87A4u;
        // 0x1b87a8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87a4) {
            ctx->pc = 0x1B87D4u;
            goto label_1b87d4;
        }
    }
    ctx->pc = 0x1B87ACu;
    // 0x1b87ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B87ACu;
    {
        const bool branch_taken_0x1b87ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87ACu;
        // 0x1b87b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87ac) {
            ctx->pc = 0x1B87C4u;
            goto label_1b87c4;
        }
    }
    ctx->pc = 0x1B87B4u;
    // 0x1b87b4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B87B4u;
    {
        const bool branch_taken_0x1b87b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87B4u;
        // 0x1b87b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87b4) {
            ctx->pc = 0x1B87FCu;
            goto label_1b87fc;
        }
    }
    ctx->pc = 0x1B87BCu;
    // 0x1b87bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B87BCu;
    {
        const bool branch_taken_0x1b87bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B87C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87BCu;
        // 0x1b87c0: 0x8e230ff8  lw          $v1, 0xFF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87bc) {
            ctx->pc = 0x1B8808u;
            goto label_1b8808;
        }
    }
    ctx->pc = 0x1B87C4u;
label_1b87c4:
    // 0x1b87c4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B87C4u;
    {
        const bool branch_taken_0x1b87c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87C4u;
        // 0x1b87c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87c4) {
            ctx->pc = 0x1B87E8u;
            goto label_1b87e8;
        }
    }
    ctx->pc = 0x1B87CCu;
    // 0x1b87cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B87CCu;
    {
        const bool branch_taken_0x1b87cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B87D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87CCu;
        // 0x1b87d0: 0x8e230ff8  lw          $v1, 0xFF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87cc) {
            ctx->pc = 0x1B8808u;
            goto label_1b8808;
        }
    }
    ctx->pc = 0x1B87D4u;
label_1b87d4:
    // 0x1b87d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b87d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87d8: 0xc06e5e2  jal         func_1B9788
    ctx->pc = 0x1B87D8u;
    SET_GPR_U32(ctx, 31, 0x1B87E0u);
    ctx->pc = 0x1B87DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B87D8u;
    // 0x1b87dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9788u, 0x1B87D8u, 0x1B87E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87E0u;
label_1b87e0:
    // 0x1b87e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B87E0u;
    {
        const bool branch_taken_0x1b87e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B87E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87E0u;
        // 0x1b87e4: 0x8e230ff8  lw          $v1, 0xFF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87e0) {
            ctx->pc = 0x1B8808u;
            goto label_1b8808;
        }
    }
    ctx->pc = 0x1B87E8u;
label_1b87e8:
    // 0x1b87e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b87e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87ec: 0xc06e952  jal         func_1BA548
    ctx->pc = 0x1B87ECu;
    SET_GPR_U32(ctx, 31, 0x1B87F4u);
    ctx->pc = 0x1B87F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B87ECu;
    // 0x1b87f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA548u, 0x1B87ECu, 0x1B87F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87F4u;
label_1b87f4:
    // 0x1b87f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B87F4u;
    {
        const bool branch_taken_0x1b87f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87F4u;
        // 0x1b87f8: 0x8e230ff8  lw          $v1, 0xFF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b87f4) {
            ctx->pc = 0x1B8808u;
            goto label_1b8808;
        }
    }
    ctx->pc = 0x1B87FCu;
label_1b87fc:
    // 0x1b87fc: 0xc06e9c4  jal         func_1BA710
    ctx->pc = 0x1B87FCu;
    SET_GPR_U32(ctx, 31, 0x1B8804u);
    ctx->pc = 0x1B8800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B87FCu;
    // 0x1b8800: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA710u, 0x1B87FCu, 0x1B8804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8804u;
label_1b8804:
    // 0x1b8804: 0x8e230ff8  lw          $v1, 0xFF8($s1)
    ctx->pc = 0x1b8804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
label_1b8808:
    // 0x1b8808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b880c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8810: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b8810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b8814: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8814u;
    {
        const bool branch_taken_0x1b8814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8814u;
        // 0x1b8818: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8814) {
            ctx->pc = 0x1B8838u;
            goto label_1b8838;
        }
    }
    ctx->pc = 0x1B881Cu;
    // 0x1b881c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b8820: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1b8820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1b8824: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8824u;
    {
        const bool branch_taken_0x1b8824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8824) {
            ctx->pc = 0x1B8828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8824u;
            // 0x1b8828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8838u;
            goto label_1b8838;
        }
    }
    ctx->pc = 0x1B882Cu;
    // 0x1b882c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1b882cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1b8830: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B8830u;
    {
        const bool branch_taken_0x1b8830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8830) {
            ctx->pc = 0x1B8834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8830u;
            // 0x1b8834: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8838u;
            goto label_1b8838;
        }
    }
    ctx->pc = 0x1B8838u;
label_1b8838:
    // 0x1b8838: 0x14a00034  bnez        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1B8838u;
    {
        const bool branch_taken_0x1b8838 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8838u;
        // 0x1b883c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8838) {
            ctx->pc = 0x1B890Cu;
            goto label_1b890c;
        }
    }
    ctx->pc = 0x1B8840u;
    // 0x1b8840: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b8840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b8844: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b8844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b8848: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1B8848u;
    {
        const bool branch_taken_0x1b8848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8848u;
        // 0x1b884c: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8848) {
            ctx->pc = 0x1B8940u;
            goto label_1b8940;
        }
    }
    ctx->pc = 0x1B8850u;
    // 0x1b8850: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x1b8850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8854: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1b8854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1b8858: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1b8858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1b885c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b885cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b8860: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b8860u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b8864: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8868: 0x0  nop
    ctx->pc = 0x1b8868u;
    // NOP
    // 0x1b886c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1B886Cu;
    {
        const bool branch_taken_0x1b886c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B886Cu;
        // 0x1b8870: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b886c) {
            ctx->pc = 0x1B88A4u;
            goto label_1b88a4;
        }
    }
    ctx->pc = 0x1B8874u;
    // 0x1b8874: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b8874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8878: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b8878u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b887c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b887cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8880: 0x0  nop
    ctx->pc = 0x1b8880u;
    // NOP
    // 0x1b8884: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8884u;
    {
        const bool branch_taken_0x1b8884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b8884) {
            ctx->pc = 0x1B88A4u;
            goto label_1b88a4;
        }
    }
    ctx->pc = 0x1B888Cu;
    // 0x1b888c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8890: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b8890u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b8894: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b8894u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8898: 0x0  nop
    ctx->pc = 0x1b8898u;
    // NOP
    // 0x1b889c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B889Cu;
    {
        const bool branch_taken_0x1b889c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b889c) {
            ctx->pc = 0x1B88A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B889Cu;
            // 0x1b88a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B88A4u;
            goto label_1b88a4;
        }
    }
    ctx->pc = 0x1B88A4u;
label_1b88a4:
    // 0x1b88a4: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B88A4u;
    {
        const bool branch_taken_0x1b88a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88A4u;
        // 0x1b88a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88a4) {
            ctx->pc = 0x1B890Cu;
            goto label_1b890c;
        }
    }
    ctx->pc = 0x1B88ACu;
    // 0x1b88ac: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x1b88acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b88b0: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x1b88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1b88b4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1b88b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1b88b8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1b88b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1b88bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b88bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b88c0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b88c0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b88c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b88c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b88c8: 0x0  nop
    ctx->pc = 0x1b88c8u;
    // NOP
    // 0x1b88cc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1B88CCu;
    {
        const bool branch_taken_0x1b88cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B88CCu;
        // 0x1b88d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b88cc) {
            ctx->pc = 0x1B8904u;
            goto label_1b8904;
        }
    }
    ctx->pc = 0x1B88D4u;
    // 0x1b88d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b88d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b88d8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b88d8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b88dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b88dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b88e0: 0x0  nop
    ctx->pc = 0x1b88e0u;
    // NOP
    // 0x1b88e4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B88E4u;
    {
        const bool branch_taken_0x1b88e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b88e4) {
            ctx->pc = 0x1B8904u;
            goto label_1b8904;
        }
    }
    ctx->pc = 0x1B88ECu;
    // 0x1b88ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b88ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b88f0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b88f0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b88f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b88f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b88f8: 0x0  nop
    ctx->pc = 0x1b88f8u;
    // NOP
    // 0x1b88fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B88FCu;
    {
        const bool branch_taken_0x1b88fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b88fc) {
            ctx->pc = 0x1B8900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B88FCu;
            // 0x1b8900: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8904u;
            goto label_1b8904;
        }
    }
    ctx->pc = 0x1B8904u;
label_1b8904:
    // 0x1b8904: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B8904u;
    {
        const bool branch_taken_0x1b8904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8904u;
        // 0x1b8908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8904) {
            ctx->pc = 0x1B8940u;
            goto label_1b8940;
        }
    }
    ctx->pc = 0x1B890Cu;
label_1b890c:
    // 0x1b890c: 0xae020420  sw          $v0, 0x420($s0)
    ctx->pc = 0x1b890cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
    // 0x1b8910: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x1b8910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1b8914: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b8914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8918: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1b8918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1b891c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b891cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8920: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x1b8920u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8924: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x1b8924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1b8928: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b8928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b892c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1b892cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1b8930: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b8930u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b8934: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x1b8934u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b8938: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8938u;
    {
        const bool branch_taken_0x1b8938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8938u;
        // 0x1b893c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8938) {
            ctx->pc = 0x1B8948u;
            goto label_1b8948;
        }
    }
    ctx->pc = 0x1B8940u;
label_1b8940:
    // 0x1b8940: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x1b8940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
    // 0x1b8944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8948:
    // 0x1b8948: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b894c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b894cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8950: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b8950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b8954: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8954u;
        // 0x1b8958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B895Cu;
    // 0x1b895c: 0x0  nop
    ctx->pc = 0x1b895cu;
    // NOP
    ctx->pc = 0x1b8960u;
}
