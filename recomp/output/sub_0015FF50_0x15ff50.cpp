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

// Function: sub_0015FF50
// Address: 0x15ff50 - 0x160098
void sub_0015FF50_0x15ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FF50_0x15ff50");
#endif

    switch (ctx->pc) {
        case 0x15ffa0u: goto label_15ffa0;
        case 0x15fffcu: goto label_15fffc;
        case 0x160028u: goto label_160028;
        case 0x160040u: goto label_160040;
        case 0x16004cu: goto label_16004c;
        case 0x160068u: goto label_160068;
        default: break;
    }

    ctx->pc = 0x15ff50u;

    // 0x15ff50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15ff54: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15ff54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15ff58: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x15ff5c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x15ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15ff60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15ff60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15ff64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15ff64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15ff68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15ff6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15ff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15ff70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15ff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15ff74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15ff74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15ff78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x15ff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x15ff7c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x15ff7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x15ff80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15ff84: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x15ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x15ff88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ff8c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x15ff8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ff90: 0x12800036  beqz        $s4, . + 4 + (0x36 << 2)
    ctx->pc = 0x15FF90u;
    {
        const bool branch_taken_0x15ff90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF90u;
        // 0x15ff94: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff90) {
            ctx->pc = 0x16006Cu;
            goto label_16006c;
        }
    }
    ctx->pc = 0x15FF98u;
    // 0x15ff98: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x15FF98u;
    SET_GPR_U32(ctx, 31, 0x15FFA0u);
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x15FF98u, 0x15FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FFA0u;
label_15ffa0:
    // 0x15ffa0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15ffa4: 0x14430031  bne         $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x15FFA4u;
    {
        const bool branch_taken_0x15ffa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFA4u;
        // 0x15ffa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffa4) {
            ctx->pc = 0x16006Cu;
            goto label_16006c;
        }
    }
    ctx->pc = 0x15FFACu;
    // 0x15ffac: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x15ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x15ffb0: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x15ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x15ffb4: 0x24769a08  addiu       $s6, $v1, -0x65F8
    ctx->pc = 0x15ffb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x15ffb8: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x15ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x15ffbc: 0x8c530108  lw          $s3, 0x108($v0)
    ctx->pc = 0x15ffbcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x15ffc0: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x15FFC0u;
    {
        const bool branch_taken_0x15ffc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFC0u;
        // 0x15ffc4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffc0) {
            ctx->pc = 0x160070u;
            goto label_160070;
        }
    }
    ctx->pc = 0x15FFC8u;
    // 0x15ffc8: 0x8e630ff8  lw          $v1, 0xFF8($s3)
    ctx->pc = 0x15ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4088)));
    // 0x15ffcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ffd0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x15ffd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x15ffd4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x15FFD4u;
    {
        const bool branch_taken_0x15ffd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFD4u;
        // 0x15ffd8: 0xdfb20010  ld          $s2, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffd4) {
            ctx->pc = 0x160074u;
            goto label_160074;
        }
    }
    ctx->pc = 0x15FFDCu;
    // 0x15ffdc: 0x8e771004  lw          $s7, 0x1004($s3)
    ctx->pc = 0x15ffdcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4100)));
    // 0x15ffe0: 0x12e00024  beqz        $s7, . + 4 + (0x24 << 2)
    ctx->pc = 0x15FFE0u;
    {
        const bool branch_taken_0x15ffe0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFE0u;
        // 0x15ffe4: 0x2c41021  addu        $v0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffe0) {
            ctx->pc = 0x160074u;
            goto label_160074;
        }
    }
    ctx->pc = 0x15FFE8u;
    // 0x15ffe8: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x15ffe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x15ffec: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x15FFECu;
    {
        const bool branch_taken_0x15ffec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ffec) {
            ctx->pc = 0x15FFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FFECu;
            // 0x15fff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160074u;
            goto label_160074;
        }
    }
    ctx->pc = 0x15FFF4u;
    // 0x15fff4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x15FFF4u;
    SET_GPR_U32(ctx, 31, 0x15FFFCu);
    ctx->pc = 0x15FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FFF4u;
    // 0x15fff8: 0x24110017  addiu       $s1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x15FFF4u, 0x15FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FFFCu;
label_15fffc:
    // 0x15fffc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160000: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x160000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x160004: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x160004u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x160008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x160008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16000c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16000Cu;
    {
        const bool branch_taken_0x16000c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16000c) {
            ctx->pc = 0x160010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16000Cu;
            // 0x160010: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x160014u;
            goto label_160014;
        }
    }
    ctx->pc = 0x160014u;
label_160014:
    // 0x160014: 0x24120017  addiu       $s2, $zero, 0x17
    ctx->pc = 0x160014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x160018: 0x24100022  addiu       $s0, $zero, 0x22
    ctx->pc = 0x160018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x16001c: 0x2810  mfhi        $a1
    ctx->pc = 0x16001cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x160020: 0xc043996  jal         func_10E658
    ctx->pc = 0x160020u;
    SET_GPR_U32(ctx, 31, 0x160028u);
    ctx->pc = 0x160024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160020u;
    // 0x160024: 0xc5880b  movn        $s1, $a2, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x160020u, 0x160028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160028u;
label_160028:
    // 0x160028: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x160028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16002c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16002cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160030: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x160030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160034: 0x202300b  movn        $a2, $s0, $v0
    ctx->pc = 0x160034u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
    // 0x160038: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x160038u;
    SET_GPR_U32(ctx, 31, 0x160040u);
    ctx->pc = 0x16003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160038u;
    // 0x16003c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x160038u, 0x160040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160040u;
label_160040:
    // 0x160040: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x160040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160044: 0xc047860  jal         func_11E180
    ctx->pc = 0x160044u;
    SET_GPR_U32(ctx, 31, 0x16004Cu);
    ctx->pc = 0x160048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160044u;
    // 0x160048: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E180u, 0x160044u, 0x16004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16004Cu;
label_16004c:
    // 0x16004c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16004Cu;
    {
        const bool branch_taken_0x16004c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16004Cu;
        // 0x160050: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16004c) {
            ctx->pc = 0x160068u;
            goto label_160068;
        }
    }
    ctx->pc = 0x160054u;
    // 0x160054: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x160054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160058: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x160058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x16005c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16005cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160060: 0xc04668a  jal         func_119A28
    ctx->pc = 0x160060u;
    SET_GPR_U32(ctx, 31, 0x160068u);
    ctx->pc = 0x160064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160060u;
    // 0x160064: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x160060u, 0x160068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160068u;
label_160068:
    // 0x160068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16006c:
    // 0x16006c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16006cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_160070:
    // 0x160070: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x160070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_160074:
    // 0x160074: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x160074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x160078: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x160078u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16007c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16007cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x160080: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x160080u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160084: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x160084u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x160088: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x160088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16008c: 0x3e00008  jr          $ra
    ctx->pc = 0x16008Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16008Cu;
        // 0x160090: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16008Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160094u;
    // 0x160094: 0x0  nop
    ctx->pc = 0x160094u;
    // NOP
    ctx->pc = 0x160098u;
}
