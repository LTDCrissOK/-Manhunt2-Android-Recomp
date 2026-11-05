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

// Function: sub_001A0068
// Address: 0x1a0068 - 0x1a01b8
void sub_001A0068_0x1a0068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0068_0x1a0068");
#endif

    switch (ctx->pc) {
        case 0x1a00a0u: goto label_1a00a0;
        case 0x1a00f8u: goto label_1a00f8;
        case 0x1a0100u: goto label_1a0100;
        case 0x1a0128u: goto label_1a0128;
        case 0x1a0130u: goto label_1a0130;
        default: break;
    }

    ctx->pc = 0x1a0068u;

    // 0x1a0068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a006c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a006cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a007c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a0080: 0x8c501004  lw          $s0, 0x1004($v0)
    ctx->pc = 0x1a0080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1a0084: 0x12000046  beqz        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1A0084u;
    {
        const bool branch_taken_0x1a0084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0084u;
        // 0x1a0088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0084) {
            ctx->pc = 0x1A01A0u;
            goto label_1a01a0;
        }
    }
    ctx->pc = 0x1A008Cu;
    // 0x1a008c: 0x8e040ff0  lw          $a0, 0xFF0($s0)
    ctx->pc = 0x1a008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x1a0090: 0x50800044  beql        $a0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x1A0090u;
    {
        const bool branch_taken_0x1a0090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0090) {
            ctx->pc = 0x1A0094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0090u;
            // 0x1a0094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A01A4u;
            goto label_1a01a4;
        }
    }
    ctx->pc = 0x1A0098u;
    // 0x1a0098: 0xc06e0fa  jal         func_1B83E8
    ctx->pc = 0x1A0098u;
    SET_GPR_U32(ctx, 31, 0x1A00A0u);
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x1A0098u, 0x1A00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A00A0u;
label_1a00a0:
    // 0x1a00a0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1A00A0u;
    {
        const bool branch_taken_0x1a00a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00A0u;
        // 0x1a00a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00a0) {
            ctx->pc = 0x1A01A0u;
            goto label_1a01a0;
        }
    }
    ctx->pc = 0x1A00A8u;
    // 0x1a00a8: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x1a00a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x1a00ac: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A00ACu;
    {
        const bool branch_taken_0x1a00ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A00B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00ACu;
        // 0x1a00b0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00ac) {
            ctx->pc = 0x1A00F0u;
            goto label_1a00f0;
        }
    }
    ctx->pc = 0x1A00B4u;
    // 0x1a00b4: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x1a00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1a00b8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A00B8u;
    {
        const bool branch_taken_0x1a00b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00B8u;
        // 0x1a00bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00b8) {
            ctx->pc = 0x1A00E4u;
            goto label_1a00e4;
        }
    }
    ctx->pc = 0x1A00C0u;
    // 0x1a00c0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1a00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1a00c4: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x1a00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x1a00c8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A00C8u;
    {
        const bool branch_taken_0x1a00c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00C8u;
        // 0x1a00cc: 0x240200ad  addiu       $v0, $zero, 0xAD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00c8) {
            ctx->pc = 0x1A00E0u;
            goto label_1a00e0;
        }
    }
    ctx->pc = 0x1A00D0u;
    // 0x1a00d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A00D0u;
    {
        const bool branch_taken_0x1a00d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00D0u;
        // 0x1a00d4: 0x240200ae  addiu       $v0, $zero, 0xAE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00d0) {
            ctx->pc = 0x1A00E0u;
            goto label_1a00e0;
        }
    }
    ctx->pc = 0x1A00D8u;
    // 0x1a00d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A00D8u;
    {
        const bool branch_taken_0x1a00d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00D8u;
        // 0x1a00dc: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00d8) {
            ctx->pc = 0x1A00E8u;
            goto label_1a00e8;
        }
    }
    ctx->pc = 0x1A00E0u;
label_1a00e0:
    // 0x1a00e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a00e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a00e4:
    // 0x1a00e4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a00e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1a00e8:
    // 0x1a00e8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A00E8u;
    {
        const bool branch_taken_0x1a00e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A00E8u;
        // 0x1a00ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a00e8) {
            ctx->pc = 0x1A01A0u;
            goto label_1a01a0;
        }
    }
    ctx->pc = 0x1A00F0u;
label_1a00f0:
    // 0x1a00f0: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A00F0u;
    SET_GPR_U32(ctx, 31, 0x1A00F8u);
    ctx->pc = 0x1A00F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A00F0u;
    // 0x1a00f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A00F0u, 0x1A00F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A00F8u;
label_1a00f8:
    // 0x1a00f8: 0xc072926  jal         func_1CA498
    ctx->pc = 0x1A00F8u;
    SET_GPR_U32(ctx, 31, 0x1A0100u);
    ctx->pc = 0x1A00FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A00F8u;
    // 0x1a00fc: 0x2444004c  addiu       $a0, $v0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA498u, 0x1A00F8u, 0x1A0100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0100u;
label_1a0100:
    // 0x1a0100: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a0100u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0104: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0108: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0108u;
    {
        const bool branch_taken_0x1a0108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0108u;
        // 0x1a010c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0108) {
            ctx->pc = 0x1A0120u;
            goto label_1a0120;
        }
    }
    ctx->pc = 0x1A0110u;
    // 0x1a0110: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0110u;
    {
        const bool branch_taken_0x1a0110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0110) {
            ctx->pc = 0x1A0120u;
            goto label_1a0120;
        }
    }
    ctx->pc = 0x1A0118u;
    // 0x1a0118: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A0118u;
    {
        const bool branch_taken_0x1a0118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0118u;
        // 0x1a011c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0118) {
            ctx->pc = 0x1A01A0u;
            goto label_1a01a0;
        }
    }
    ctx->pc = 0x1A0120u;
label_1a0120:
    // 0x1a0120: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A0120u;
    SET_GPR_U32(ctx, 31, 0x1A0128u);
    ctx->pc = 0x1A0124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0120u;
    // 0x1a0124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A0120u, 0x1A0128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0128u;
label_1a0128:
    // 0x1a0128: 0xc072930  jal         func_1CA4C0
    ctx->pc = 0x1A0128u;
    SET_GPR_U32(ctx, 31, 0x1A0130u);
    ctx->pc = 0x1A012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0128u;
    // 0x1a012c: 0x2444004c  addiu       $a0, $v0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA4C0u, 0x1A0128u, 0x1A0130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0130u;
label_1a0130:
    // 0x1a0130: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a0130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a0134: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a0134u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1a0138: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0138u;
    {
        const bool branch_taken_0x1a0138 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0138u;
        // 0x1a013c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0138) {
            ctx->pc = 0x1A0154u;
            goto label_1a0154;
        }
    }
    ctx->pc = 0x1A0140u;
    // 0x1a0140: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0144: 0x0  nop
    ctx->pc = 0x1a0144u;
    // NOP
    // 0x1a0148: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a014c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A014Cu;
    {
        const bool branch_taken_0x1a014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a014c) {
            ctx->pc = 0x1A0170u;
            goto label_1a0170;
        }
    }
    ctx->pc = 0x1A0154u;
label_1a0154:
    // 0x1a0154: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a0154u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a0158: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a0158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a015c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a015cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a0160: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a0160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a0164: 0x0  nop
    ctx->pc = 0x1a0164u;
    // NOP
    // 0x1a0168: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a0168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a016c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a016cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a0170:
    // 0x1a0170: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a0170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a0174: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a0174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a0178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a017c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a017cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1a0180: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a0180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0184: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a0184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a0188: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a0188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a018c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a018cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0190: 0x0  nop
    ctx->pc = 0x1a0190u;
    // NOP
    // 0x1a0194: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0194u;
    {
        const bool branch_taken_0x1a0194 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0194u;
        // 0x1a0198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0194) {
            ctx->pc = 0x1A01A0u;
            goto label_1a01a0;
        }
    }
    ctx->pc = 0x1A019Cu;
    // 0x1a019c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a01a0:
    // 0x1a01a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a01a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a01a4:
    // 0x1a01a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a01a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a01a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a01a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a01ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A01ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01ACu;
        // 0x1a01b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A01ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A01B4u;
    // 0x1a01b4: 0x0  nop
    ctx->pc = 0x1a01b4u;
    // NOP
    ctx->pc = 0x1a01b8u;
}
