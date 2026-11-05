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

// Function: sub_00110F98
// Address: 0x110f98 - 0x1110c8
void sub_00110F98_0x110f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110F98_0x110f98");
#endif

    switch (ctx->pc) {
        case 0x111018u: goto label_111018;
        case 0x111038u: goto label_111038;
        case 0x11104cu: goto label_11104c;
        case 0x111060u: goto label_111060;
        case 0x1110a8u: goto label_1110a8;
        default: break;
    }

    ctx->pc = 0x110f98u;

    // 0x110f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110f9c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x110f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x110fa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110fa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x110fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x110fa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x110fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110fac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x110facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x110fb0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x110fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x110fb4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x110fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x110fb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110FB8u;
    {
        const bool branch_taken_0x110fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110FB8u;
        // 0x110fbc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fb8) {
            ctx->pc = 0x110FCCu;
            goto label_110fcc;
        }
    }
    ctx->pc = 0x110FC0u;
    // 0x110fc0: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x110fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x110fc4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x110FC4u;
    {
        const bool branch_taken_0x110fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110fc4) {
            ctx->pc = 0x110FD0u;
            goto label_110fd0;
        }
    }
    ctx->pc = 0x110FCCu;
label_110fcc:
    // 0x110fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x110fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_110fd0:
    // 0x110fd0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x110FD0u;
    {
        const bool branch_taken_0x110fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x110fd0) {
            ctx->pc = 0x110FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110FD0u;
            // 0x110fd4: 0x8e0200d0  lw          $v0, 0xD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110FECu;
            goto label_110fec;
        }
    }
    ctx->pc = 0x110FD8u;
    // 0x110fd8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x110fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x110fdc: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x110FDCu;
    {
        const bool branch_taken_0x110fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110fdc) {
            ctx->pc = 0x110FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110FDCu;
            // 0x110fe0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1110B4u;
            goto label_1110b4;
        }
    }
    ctx->pc = 0x110FE4u;
    // 0x110fe4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x110FE4u;
    {
        const bool branch_taken_0x110fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x110fe4) {
            ctx->pc = 0x1110A0u;
            goto label_1110a0;
        }
    }
    ctx->pc = 0x110FECu;
label_110fec:
    // 0x110fec: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x110FECu;
    {
        const bool branch_taken_0x110fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110fec) {
            ctx->pc = 0x110FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110FECu;
            // 0x110ff0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1110B4u;
            goto label_1110b4;
        }
    }
    ctx->pc = 0x110FF4u;
    // 0x110ff4: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x110ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x110ff8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x110ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x110ffc: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x110ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x111000: 0x8c830720  lw          $v1, 0x720($a0)
    ctx->pc = 0x111000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1824)));
    // 0x111004: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x111004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111008: 0x5220002a  beql        $s1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x111008u;
    {
        const bool branch_taken_0x111008 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x111008) {
            ctx->pc = 0x11100Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111008u;
            // 0x11100c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1110B4u;
            goto label_1110b4;
        }
    }
    ctx->pc = 0x111010u;
    // 0x111010: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x111010u;
    SET_GPR_U32(ctx, 31, 0x111018u);
    ctx->pc = 0x111014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111010u;
    // 0x111014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x111010u, 0x111018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111018u;
label_111018:
    // 0x111018: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11101c: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x11101Cu;
    {
        const bool branch_taken_0x11101c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x111020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11101Cu;
        // 0x111020: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11101c) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x111024u;
    // 0x111024: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x111024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x111028: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x111028u;
    {
        const bool branch_taken_0x111028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111028u;
        // 0x11102c: 0x90a50020  lbu         $a1, 0x20($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111028) {
            ctx->pc = 0x11103Cu;
            goto label_11103c;
        }
    }
    ctx->pc = 0x111030u;
    // 0x111030: 0xc04134a  jal         func_104D28
    ctx->pc = 0x111030u;
    SET_GPR_U32(ctx, 31, 0x111038u);
    ctx->pc = 0x111034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111030u;
    // 0x111034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D28u, 0x111030u, 0x111038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111038u;
label_111038:
    // 0x111038: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x111038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11103c:
    // 0x11103c: 0x5640000a  bnel        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11103Cu;
    {
        const bool branch_taken_0x11103c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11103c) {
            ctx->pc = 0x111040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11103Cu;
            // 0x111040: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111068u;
            goto label_111068;
        }
    }
    ctx->pc = 0x111044u;
    // 0x111044: 0xc044442  jal         func_111108
    ctx->pc = 0x111044u;
    SET_GPR_U32(ctx, 31, 0x11104Cu);
    ctx->pc = 0x111048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111044u;
    // 0x111048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111108u, 0x111044u, 0x11104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11104Cu;
label_11104c:
    // 0x11104c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11104Cu;
    {
        const bool branch_taken_0x11104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11104c) {
            ctx->pc = 0x111050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11104Cu;
            // 0x111050: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111068u;
            goto label_111068;
        }
    }
    ctx->pc = 0x111054u;
    // 0x111054: 0x90450020  lbu         $a1, 0x20($v0)
    ctx->pc = 0x111054u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x111058: 0xc04134a  jal         func_104D28
    ctx->pc = 0x111058u;
    SET_GPR_U32(ctx, 31, 0x111060u);
    ctx->pc = 0x11105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111058u;
    // 0x11105c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D28u, 0x111058u, 0x111060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111060u;
label_111060:
    // 0x111060: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x111060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111064: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x111064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_111068:
    // 0x111068: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x111068u;
    {
        const bool branch_taken_0x111068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x111068) {
            ctx->pc = 0x111090u;
            goto label_111090;
        }
    }
    ctx->pc = 0x111070u;
    // 0x111070: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x111070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x111074: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111074u;
    {
        const bool branch_taken_0x111074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111074) {
            ctx->pc = 0x111090u;
            goto label_111090;
        }
    }
    ctx->pc = 0x11107Cu;
    // 0x11107c: 0x5640000d  bnel        $s2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x11107Cu;
    {
        const bool branch_taken_0x11107c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x11107c) {
            ctx->pc = 0x111080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11107Cu;
            // 0x111080: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1110B4u;
            goto label_1110b4;
        }
    }
    ctx->pc = 0x111084u;
    // 0x111084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111088: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x111088u;
    {
        const bool branch_taken_0x111088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111088u;
        // 0x11108c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111088) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x111090u;
label_111090:
    // 0x111090: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x111090u;
    {
        const bool branch_taken_0x111090 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x111090) {
            ctx->pc = 0x111094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111090u;
            // 0x111094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1110B4u;
            goto label_1110b4;
        }
    }
    ctx->pc = 0x111098u;
    // 0x111098: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x111098u;
    {
        const bool branch_taken_0x111098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111098) {
            ctx->pc = 0x11109Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111098u;
            // 0x11109c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x1110A0u;
label_1110a0:
    // 0x1110a0: 0xc044f98  jal         func_113E60
    ctx->pc = 0x1110A0u;
    SET_GPR_U32(ctx, 31, 0x1110A8u);
    ctx->pc = 0x1110A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1110A0u;
    // 0x1110a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113E60u, 0x1110A0u, 0x1110A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1110A8u;
label_1110a8:
    // 0x1110a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1110A8u;
    {
        const bool branch_taken_0x1110a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110A8u;
        // 0x1110ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110a8) {
            ctx->pc = 0x1110B4u;
            goto label_1110b4;
        }
    }
    ctx->pc = 0x1110B0u;
label_1110b0:
    // 0x1110b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1110b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1110b4:
    // 0x1110b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1110b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1110b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1110b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1110bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1110bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1110c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1110C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1110C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1110C0u;
        // 0x1110c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1110C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1110C8u;
}
