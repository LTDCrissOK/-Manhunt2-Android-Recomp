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

// Function: sub_00264030
// Address: 0x264030 - 0x264258
void sub_00264030_0x264030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264030_0x264030");
#endif

    switch (ctx->pc) {
        case 0x264078u: goto label_264078;
        case 0x2640acu: goto label_2640ac;
        case 0x2640c4u: goto label_2640c4;
        case 0x2640d0u: goto label_2640d0;
        case 0x2640f0u: goto label_2640f0;
        case 0x264100u: goto label_264100;
        case 0x26411cu: goto label_26411c;
        case 0x264134u: goto label_264134;
        case 0x26413cu: goto label_26413c;
        case 0x264154u: goto label_264154;
        case 0x26416cu: goto label_26416c;
        case 0x264184u: goto label_264184;
        case 0x264194u: goto label_264194;
        case 0x2641acu: goto label_2641ac;
        case 0x2641e0u: goto label_2641e0;
        case 0x2641f4u: goto label_2641f4;
        case 0x26420cu: goto label_26420c;
        case 0x264224u: goto label_264224;
        default: break;
    }

    ctx->pc = 0x264030u;

    // 0x264030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x264030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x264034: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x264034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x264038: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x264038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26403c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26403cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264040: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x264040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x264044: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x264044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x264048: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x264048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26404c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x26404cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x264050: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x264050u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264054: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x264054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x264058: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x264058u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26405c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26405cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x264060: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x264060u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264064: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x264064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x264068: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x264068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x26406c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26406cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264070: 0xc097f2a  jal         func_25FCA8
    ctx->pc = 0x264070u;
    SET_GPR_U32(ctx, 31, 0x264078u);
    ctx->pc = 0x264074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264070u;
    // 0x264074: 0x8e700224  lw          $s0, 0x224($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x264070u, 0x264078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264078u;
label_264078:
    // 0x264078: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x264078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26407c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26407cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x264080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264084: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x264084u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264088: 0x12510066  beq         $s2, $s1, . + 4 + (0x66 << 2)
    ctx->pc = 0x264088u;
    {
        const bool branch_taken_0x264088 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x26408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264088u;
        // 0x26408c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264088) {
            ctx->pc = 0x264224u;
            goto label_264224;
        }
    }
    ctx->pc = 0x264090u;
    // 0x264090: 0x1240004d  beqz        $s2, . + 4 + (0x4D << 2)
    ctx->pc = 0x264090u;
    {
        const bool branch_taken_0x264090 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x264094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264090u;
        // 0x264094: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264090) {
            ctx->pc = 0x2641C8u;
            goto label_2641c8;
        }
    }
    ctx->pc = 0x264098u;
    // 0x264098: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x264098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x26409c: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x26409Cu;
    {
        const bool branch_taken_0x26409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26409c) {
            ctx->pc = 0x2640A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26409Cu;
            // 0x2640a0: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2641C8u;
            goto label_2641c8;
        }
    }
    ctx->pc = 0x2640A4u;
    // 0x2640a4: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2640A4u;
    SET_GPR_U32(ctx, 31, 0x2640ACu);
    ctx->pc = 0x2640A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2640A4u;
    // 0x2640a8: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2640A4u, 0x2640ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2640ACu;
label_2640ac:
    // 0x2640ac: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2640acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2640b0: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x2640B0u;
    {
        const bool branch_taken_0x2640b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2640b0) {
            ctx->pc = 0x2640B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2640B0u;
            // 0x2640b4: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2641C8u;
            goto label_2641c8;
        }
    }
    ctx->pc = 0x2640B8u;
    // 0x2640b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2640b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640bc: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2640BCu;
    SET_GPR_U32(ctx, 31, 0x2640C4u);
    ctx->pc = 0x2640C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2640BCu;
    // 0x2640c0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2640BCu, 0x2640C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2640C4u;
label_2640c4:
    // 0x2640c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2640c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640c8: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2640C8u;
    SET_GPR_U32(ctx, 31, 0x2640D0u);
    ctx->pc = 0x2640CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2640C8u;
    // 0x2640cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2640C8u, 0x2640D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2640D0u;
label_2640d0:
    // 0x2640d0: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x2640d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x2640d4: 0x2e150001  sltiu       $s5, $s0, 0x1
    ctx->pc = 0x2640d4u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2640d8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2640D8u;
    {
        const bool branch_taken_0x2640d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2640d8) {
            ctx->pc = 0x2640E8u;
            goto label_2640e8;
        }
    }
    ctx->pc = 0x2640E0u;
    // 0x2640e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2640E0u;
    {
        const bool branch_taken_0x2640e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2640E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2640E0u;
        // 0x2640e4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2640e0) {
            ctx->pc = 0x264104u;
            goto label_264104;
        }
    }
    ctx->pc = 0x2640E8u;
label_2640e8:
    // 0x2640e8: 0xc097f90  jal         func_25FE40
    ctx->pc = 0x2640E8u;
    SET_GPR_U32(ctx, 31, 0x2640F0u);
    ctx->pc = 0x2640ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2640E8u;
    // 0x2640ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE40u, 0x2640E8u, 0x2640F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2640F0u;
label_2640f0:
    // 0x2640f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2640F0u;
    {
        const bool branch_taken_0x2640f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2640f0) {
            ctx->pc = 0x264104u;
            goto label_264104;
        }
    }
    ctx->pc = 0x2640F8u;
    // 0x2640f8: 0xc097f90  jal         func_25FE40
    ctx->pc = 0x2640F8u;
    SET_GPR_U32(ctx, 31, 0x264100u);
    ctx->pc = 0x2640FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2640F8u;
    // 0x2640fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE40u, 0x2640F8u, 0x264100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264100u;
label_264100:
    // 0x264100: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x264100u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_264104:
    // 0x264104: 0x52800030  beql        $s4, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x264104u;
    {
        const bool branch_taken_0x264104 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x264104) {
            ctx->pc = 0x264108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264104u;
            // 0x264108: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2641C8u;
            goto label_2641c8;
        }
    }
    ctx->pc = 0x26410Cu;
    // 0x26410c: 0x8e500274  lw          $s0, 0x274($s2)
    ctx->pc = 0x26410cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
    // 0x264110: 0x8e320274  lw          $s2, 0x274($s1)
    ctx->pc = 0x264110u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x264114: 0xc0d9094  jal         func_364250
    ctx->pc = 0x264114u;
    SET_GPR_U32(ctx, 31, 0x26411Cu);
    ctx->pc = 0x264118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264114u;
    // 0x264118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364250u, 0x264114u, 0x26411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26411Cu;
label_26411c:
    // 0x26411c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26411Cu;
    {
        const bool branch_taken_0x26411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26411Cu;
        // 0x264120: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26411c) {
            ctx->pc = 0x26412Cu;
            goto label_26412c;
        }
    }
    ctx->pc = 0x264124u;
    // 0x264124: 0x12c00025  beqz        $s6, . + 4 + (0x25 << 2)
    ctx->pc = 0x264124u;
    {
        const bool branch_taken_0x264124 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x264124) {
            ctx->pc = 0x2641BCu;
            goto label_2641bc;
        }
    }
    ctx->pc = 0x26412Cu;
label_26412c:
    // 0x26412c: 0xc0cda26  jal         func_336898
    ctx->pc = 0x26412Cu;
    SET_GPR_U32(ctx, 31, 0x264134u);
    ctx->pc = 0x264130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26412Cu;
    // 0x264130: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x26412Cu, 0x264134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264134u;
label_264134:
    // 0x264134: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x264134u;
    SET_GPR_U32(ctx, 31, 0x26413Cu);
    ctx->pc = 0x264138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264134u;
    // 0x264138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x264134u, 0x26413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26413Cu;
label_26413c:
    // 0x26413c: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x26413Cu;
    {
        const bool branch_taken_0x26413c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x264140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26413Cu;
        // 0x264140: 0xae62022c  sw          $v0, 0x22C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26413c) {
            ctx->pc = 0x26415Cu;
            goto label_26415c;
        }
    }
    ctx->pc = 0x264144u;
    // 0x264144: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x264144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x264148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26414c: 0xc0d909e  jal         func_364278
    ctx->pc = 0x26414Cu;
    SET_GPR_U32(ctx, 31, 0x264154u);
    ctx->pc = 0x264150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26414Cu;
    // 0x264150: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364278u, 0x26414Cu, 0x264154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264154u;
label_264154:
    // 0x264154: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x264154u;
    {
        const bool branch_taken_0x264154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264154u;
        // 0x264158: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264154) {
            ctx->pc = 0x264188u;
            goto label_264188;
        }
    }
    ctx->pc = 0x26415Cu;
label_26415c:
    // 0x26415c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26415cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264160: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x264160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264164: 0xc0d909e  jal         func_364278
    ctx->pc = 0x264164u;
    SET_GPR_U32(ctx, 31, 0x26416Cu);
    ctx->pc = 0x264168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264164u;
    // 0x264168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364278u, 0x264164u, 0x26416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26416Cu;
label_26416c:
    // 0x26416c: 0x8e6300bc  lw          $v1, 0xBC($s3)
    ctx->pc = 0x26416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x264170: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x264170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x264174: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x264174u;
    {
        const bool branch_taken_0x264174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264174) {
            ctx->pc = 0x264178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264174u;
            // 0x264178: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264188u;
            goto label_264188;
        }
    }
    ctx->pc = 0x26417Cu;
    // 0x26417c: 0xc0a2df0  jal         func_28B7C0
    ctx->pc = 0x26417Cu;
    SET_GPR_U32(ctx, 31, 0x264184u);
    ctx->pc = 0x28B7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B7C0u, 0x26417Cu, 0x264184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264184u;
label_264184:
    // 0x264184: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x264184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_264188:
    // 0x264188: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x264188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26418c: 0xc049554  jal         func_125550
    ctx->pc = 0x26418Cu;
    SET_GPR_U32(ctx, 31, 0x264194u);
    ctx->pc = 0x264190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26418Cu;
    // 0x264190: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125550u, 0x26418Cu, 0x264194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264194u;
label_264194:
    // 0x264194: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x264194u;
    {
        const bool branch_taken_0x264194 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x264194) {
            ctx->pc = 0x2641ACu;
            goto label_2641ac;
        }
    }
    ctx->pc = 0x26419Cu;
    // 0x26419c: 0x52a0000a  beql        $s5, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x26419Cu;
    {
        const bool branch_taken_0x26419c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x26419c) {
            ctx->pc = 0x2641A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26419Cu;
            // 0x2641a0: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2641C8u;
            goto label_2641c8;
        }
    }
    ctx->pc = 0x2641A4u;
    // 0x2641a4: 0xc0837b4  jal         func_20DED0
    ctx->pc = 0x2641A4u;
    SET_GPR_U32(ctx, 31, 0x2641ACu);
    ctx->pc = 0x2641A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2641A4u;
    // 0x2641a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x2641A4u, 0x2641ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2641ACu;
label_2641ac:
    // 0x2641ac: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2641ACu;
    {
        const bool branch_taken_0x2641ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2641B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641ACu;
        // 0x2641b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641ac) {
            ctx->pc = 0x2641C4u;
            goto label_2641c4;
        }
    }
    ctx->pc = 0x2641B4u;
    // 0x2641b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2641B4u;
    {
        const bool branch_taken_0x2641b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2641B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641B4u;
        // 0x2641b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641b4) {
            ctx->pc = 0x264228u;
            goto label_264228;
        }
    }
    ctx->pc = 0x2641BCu;
label_2641bc:
    // 0x2641bc: 0x16a00019  bnez        $s5, . + 4 + (0x19 << 2)
    ctx->pc = 0x2641BCu;
    {
        const bool branch_taken_0x2641bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2641C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641BCu;
        // 0x2641c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641bc) {
            ctx->pc = 0x264224u;
            goto label_264224;
        }
    }
    ctx->pc = 0x2641C4u;
label_2641c4:
    // 0x2641c4: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x2641c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_2641c8:
    // 0x2641c8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2641c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2641cc: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x2641ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x2641d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2641D0u;
    {
        const bool branch_taken_0x2641d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2641d0) {
            ctx->pc = 0x2641ECu;
            goto label_2641ec;
        }
    }
    ctx->pc = 0x2641D8u;
    // 0x2641d8: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2641D8u;
    SET_GPR_U32(ctx, 31, 0x2641E0u);
    ctx->pc = 0x2641DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2641D8u;
    // 0x2641dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2641D8u, 0x2641E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2641E0u;
label_2641e0:
    // 0x2641e0: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x2641e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2641e4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2641E4u;
    {
        const bool branch_taken_0x2641e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2641E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641E4u;
        // 0x2641e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641e4) {
            ctx->pc = 0x264210u;
            goto label_264210;
        }
    }
    ctx->pc = 0x2641ECu;
label_2641ec:
    // 0x2641ec: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2641ECu;
    SET_GPR_U32(ctx, 31, 0x2641F4u);
    ctx->pc = 0x2641F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2641ECu;
    // 0x2641f0: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2641ECu, 0x2641F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2641F4u;
label_2641f4:
    // 0x2641f4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2641f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2641f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2641F8u;
    {
        const bool branch_taken_0x2641f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2641FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2641F8u;
        // 0x2641fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641f8) {
            ctx->pc = 0x264210u;
            goto label_264210;
        }
    }
    ctx->pc = 0x264200u;
    // 0x264200: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x264200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x264204: 0xc0d9080  jal         func_364200
    ctx->pc = 0x264204u;
    SET_GPR_U32(ctx, 31, 0x26420Cu);
    ctx->pc = 0x264208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264204u;
    // 0x264208: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364200u, 0x264204u, 0x26420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26420Cu;
label_26420c:
    // 0x26420c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26420cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264210:
    // 0x264210: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x264210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264214: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x264214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264218: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x264218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26421c: 0xc097ff0  jal         func_25FFC0
    ctx->pc = 0x26421Cu;
    SET_GPR_U32(ctx, 31, 0x264224u);
    ctx->pc = 0x264220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26421Cu;
    // 0x264220: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FFC0u, 0x26421Cu, 0x264224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264224u;
label_264224:
    // 0x264224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264228:
    // 0x264228: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x264228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26422c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26422cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264230: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x264230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264234: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x264234u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264238: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x264238u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26423c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x26423cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264240: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x264240u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x264244: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x264244u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264248: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x264248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x26424c: 0x3e00008  jr          $ra
    ctx->pc = 0x26424Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26424Cu;
        // 0x264250: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26424Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264254u;
    // 0x264254: 0x0  nop
    ctx->pc = 0x264254u;
    // NOP
    ctx->pc = 0x264258u;
}
