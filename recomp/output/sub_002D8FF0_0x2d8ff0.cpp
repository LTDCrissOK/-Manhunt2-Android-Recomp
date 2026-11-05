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

// Function: sub_002D8FF0
// Address: 0x2d8ff0 - 0x2d9140
void sub_002D8FF0_0x2d8ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8FF0_0x2d8ff0");
#endif

    switch (ctx->pc) {
        case 0x2d8ff0u: goto label_2d8ff0;
        case 0x2d8ff4u: goto label_2d8ff4;
        case 0x2d8ff8u: goto label_2d8ff8;
        case 0x2d8ffcu: goto label_2d8ffc;
        case 0x2d9000u: goto label_2d9000;
        case 0x2d9004u: goto label_2d9004;
        case 0x2d9008u: goto label_2d9008;
        case 0x2d900cu: goto label_2d900c;
        case 0x2d9010u: goto label_2d9010;
        case 0x2d9014u: goto label_2d9014;
        case 0x2d9018u: goto label_2d9018;
        case 0x2d901cu: goto label_2d901c;
        case 0x2d9020u: goto label_2d9020;
        case 0x2d9024u: goto label_2d9024;
        case 0x2d9028u: goto label_2d9028;
        case 0x2d902cu: goto label_2d902c;
        case 0x2d9030u: goto label_2d9030;
        case 0x2d9034u: goto label_2d9034;
        case 0x2d9038u: goto label_2d9038;
        case 0x2d903cu: goto label_2d903c;
        case 0x2d9040u: goto label_2d9040;
        case 0x2d9044u: goto label_2d9044;
        case 0x2d9048u: goto label_2d9048;
        case 0x2d904cu: goto label_2d904c;
        case 0x2d9050u: goto label_2d9050;
        case 0x2d9054u: goto label_2d9054;
        case 0x2d9058u: goto label_2d9058;
        case 0x2d905cu: goto label_2d905c;
        case 0x2d9060u: goto label_2d9060;
        case 0x2d9064u: goto label_2d9064;
        case 0x2d9068u: goto label_2d9068;
        case 0x2d906cu: goto label_2d906c;
        case 0x2d9070u: goto label_2d9070;
        case 0x2d9074u: goto label_2d9074;
        case 0x2d9078u: goto label_2d9078;
        case 0x2d907cu: goto label_2d907c;
        case 0x2d9080u: goto label_2d9080;
        case 0x2d9084u: goto label_2d9084;
        case 0x2d9088u: goto label_2d9088;
        case 0x2d908cu: goto label_2d908c;
        case 0x2d9090u: goto label_2d9090;
        case 0x2d9094u: goto label_2d9094;
        case 0x2d9098u: goto label_2d9098;
        case 0x2d909cu: goto label_2d909c;
        case 0x2d90a0u: goto label_2d90a0;
        case 0x2d90a4u: goto label_2d90a4;
        case 0x2d90a8u: goto label_2d90a8;
        case 0x2d90acu: goto label_2d90ac;
        case 0x2d90b0u: goto label_2d90b0;
        case 0x2d90b4u: goto label_2d90b4;
        case 0x2d90b8u: goto label_2d90b8;
        case 0x2d90bcu: goto label_2d90bc;
        case 0x2d90c0u: goto label_2d90c0;
        case 0x2d90c4u: goto label_2d90c4;
        case 0x2d90c8u: goto label_2d90c8;
        case 0x2d90ccu: goto label_2d90cc;
        case 0x2d90d0u: goto label_2d90d0;
        case 0x2d90d4u: goto label_2d90d4;
        case 0x2d90d8u: goto label_2d90d8;
        case 0x2d90dcu: goto label_2d90dc;
        case 0x2d90e0u: goto label_2d90e0;
        case 0x2d90e4u: goto label_2d90e4;
        case 0x2d90e8u: goto label_2d90e8;
        case 0x2d90ecu: goto label_2d90ec;
        case 0x2d90f0u: goto label_2d90f0;
        case 0x2d90f4u: goto label_2d90f4;
        case 0x2d90f8u: goto label_2d90f8;
        case 0x2d90fcu: goto label_2d90fc;
        case 0x2d9100u: goto label_2d9100;
        case 0x2d9104u: goto label_2d9104;
        case 0x2d9108u: goto label_2d9108;
        case 0x2d910cu: goto label_2d910c;
        case 0x2d9110u: goto label_2d9110;
        case 0x2d9114u: goto label_2d9114;
        case 0x2d9118u: goto label_2d9118;
        case 0x2d911cu: goto label_2d911c;
        case 0x2d9120u: goto label_2d9120;
        case 0x2d9124u: goto label_2d9124;
        case 0x2d9128u: goto label_2d9128;
        case 0x2d912cu: goto label_2d912c;
        case 0x2d9130u: goto label_2d9130;
        case 0x2d9134u: goto label_2d9134;
        case 0x2d9138u: goto label_2d9138;
        case 0x2d913cu: goto label_2d913c;
        default: break;
    }

    ctx->pc = 0x2d8ff0u;

label_2d8ff0:
    // 0x2d8ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d8ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d8ff4:
    // 0x2d8ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d8ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d8ff8:
    // 0x2d8ff8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d8ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d8ffc:
    // 0x2d8ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d8ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9000:
    // 0x2d9000: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9004:
    // 0x2d9004: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2d9004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2d9008:
    // 0x2d9008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d900c:
    // 0x2d900c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d900cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9010:
    // 0x2d9010: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9014:
    // 0x2d9014: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d9014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2d9018:
    // 0x2d9018: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2d9018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2d901c:
    // 0x2d901c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2d901cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2d9020:
    // 0x2d9020: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d9020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d9024:
    // 0x2d9024: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d9024u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d9028:
    // 0x2d9028: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d9028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2d902c:
    // 0x2d902c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2d9030:
    if (ctx->pc == 0x2D9030u) {
        ctx->pc = 0x2D9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D902Cu;
        // 0x2d9030: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9034u;
        goto label_2d9034;
    }
    ctx->pc = 0x2D902Cu;
    {
        const bool branch_taken_0x2d902c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D902Cu;
        // 0x2d9030: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d902c) {
            ctx->pc = 0x2D903Cu;
            goto label_2d903c;
        }
    }
    ctx->pc = 0x2D9034u;
label_2d9034:
    // 0x2d9034: 0x10000039  b           . + 4 + (0x39 << 2)
label_2d9038:
    if (ctx->pc == 0x2D9038u) {
        ctx->pc = 0x2D9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9034u;
        // 0x2d9038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D903Cu;
        goto label_2d903c;
    }
    ctx->pc = 0x2D9034u;
    {
        const bool branch_taken_0x2d9034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9034u;
        // 0x2d9038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9034) {
            ctx->pc = 0x2D911Cu;
            goto label_2d911c;
        }
    }
    ctx->pc = 0x2D903Cu;
label_2d903c:
    // 0x2d903c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2d903cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2d9040:
    // 0x2d9040: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d9040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2d9044:
    // 0x2d9044: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2d9048:
    if (ctx->pc == 0x2D9048u) {
        ctx->pc = 0x2D9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9044u;
        // 0x2d9048: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D904Cu;
        goto label_2d904c;
    }
    ctx->pc = 0x2D9044u;
    {
        const bool branch_taken_0x2d9044 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9044u;
        // 0x2d9048: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9044) {
            ctx->pc = 0x2D9058u;
            goto label_2d9058;
        }
    }
    ctx->pc = 0x2D904Cu;
label_2d904c:
    // 0x2d904c: 0xc6540004  lwc1        $f20, 0x4($s2)
    ctx->pc = 0x2d904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d9050:
    // 0x2d9050: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2d9050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2d9054:
    // 0x2d9054: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x2d9054u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d9058:
    // 0x2d9058: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d9058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d905c:
    // 0x2d905c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d905cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d9060:
    // 0x2d9060: 0xc0b63d4  jal         func_2D8F50
label_2d9064:
    if (ctx->pc == 0x2D9064u) {
        ctx->pc = 0x2D9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9060u;
        // 0x2d9064: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9068u;
        goto label_2d9068;
    }
    ctx->pc = 0x2D9060u;
    SET_GPR_U32(ctx, 31, 0x2D9068u);
    ctx->pc = 0x2D9064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9060u;
    // 0x2d9064: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8F50u, 0x2D9060u, 0x2D9068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9068u;
label_2d9068:
    // 0x2d9068: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_2d906c:
    if (ctx->pc == 0x2D906Cu) {
        ctx->pc = 0x2D906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9068u;
        // 0x2d906c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9070u;
        goto label_2d9070;
    }
    ctx->pc = 0x2D9068u;
    {
        const bool branch_taken_0x2d9068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9068) {
            ctx->pc = 0x2D906Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9068u;
            // 0x2d906c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D90D0u;
            goto label_2d90d0;
        }
    }
    ctx->pc = 0x2D9070u;
label_2d9070:
    // 0x2d9070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9074:
    // 0x2d9074: 0x280f809  jalr        $s4
label_2d9078:
    if (ctx->pc == 0x2D9078u) {
        ctx->pc = 0x2D9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9074u;
        // 0x2d9078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D907Cu;
        goto label_2d907c;
    }
    ctx->pc = 0x2D9074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2D907Cu);
        ctx->pc = 0x2D9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9074u;
        // 0x2d9078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9074u, 0x2D907Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D907Cu;
label_2d907c:
    // 0x2d907c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2d9080:
    if (ctx->pc == 0x2D9080u) {
        ctx->pc = 0x2D9084u;
        goto label_2d9084;
    }
    ctx->pc = 0x2D907Cu;
    {
        const bool branch_taken_0x2d907c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d907c) {
            ctx->pc = 0x2D908Cu;
            goto label_2d908c;
        }
    }
    ctx->pc = 0x2D9084u;
label_2d9084:
    // 0x2d9084: 0x10000025  b           . + 4 + (0x25 << 2)
label_2d9088:
    if (ctx->pc == 0x2D9088u) {
        ctx->pc = 0x2D9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9084u;
        // 0x2d9088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D908Cu;
        goto label_2d908c;
    }
    ctx->pc = 0x2D9084u;
    {
        const bool branch_taken_0x2d9084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9084u;
        // 0x2d9088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9084) {
            ctx->pc = 0x2D911Cu;
            goto label_2d911c;
        }
    }
    ctx->pc = 0x2D908Cu;
label_2d908c:
    // 0x2d908c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2d9090:
    if (ctx->pc == 0x2D9090u) {
        ctx->pc = 0x2D9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D908Cu;
        // 0x2d9090: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9094u;
        goto label_2d9094;
    }
    ctx->pc = 0x2D908Cu;
    {
        const bool branch_taken_0x2d908c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d908c) {
            ctx->pc = 0x2D9090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D908Cu;
            // 0x2d9090: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D90D0u;
            goto label_2d90d0;
        }
    }
    ctx->pc = 0x2D9094u;
label_2d9094:
    // 0x2d9094: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2d9094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d9098:
    // 0x2d9098: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2d9098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2d909c:
    // 0x2d909c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2d909cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d90a0:
    // 0x2d90a0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d90a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2d90a4:
    // 0x2d90a4: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x2d90a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2d90a8:
    // 0x2d90a8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2d90ac:
    if (ctx->pc == 0x2D90ACu) {
        ctx->pc = 0x2D90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90A8u;
        // 0x2d90ac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D90B0u;
        goto label_2d90b0;
    }
    ctx->pc = 0x2D90A8u;
    {
        const bool branch_taken_0x2d90a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d90a8) {
            ctx->pc = 0x2D90ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D90A8u;
            // 0x2d90ac: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D90D0u;
            goto label_2d90d0;
        }
    }
    ctx->pc = 0x2D90B0u;
label_2d90b0:
    // 0x2d90b0: 0x8c65fffc  lw          $a1, -0x4($v1)
    ctx->pc = 0x2d90b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_2d90b4:
    // 0x2d90b4: 0xc0b631a  jal         func_2D8C68
label_2d90b8:
    if (ctx->pc == 0x2D90B8u) {
        ctx->pc = 0x2D90B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90B4u;
        // 0x2d90b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D90BCu;
        goto label_2d90bc;
    }
    ctx->pc = 0x2D90B4u;
    SET_GPR_U32(ctx, 31, 0x2D90BCu);
    ctx->pc = 0x2D90B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D90B4u;
    // 0x2d90b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8C68u, 0x2D90B4u, 0x2D90BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90BCu;
label_2d90bc:
    // 0x2d90bc: 0xc0b63ac  jal         func_2D8EB0
label_2d90c0:
    if (ctx->pc == 0x2D90C0u) {
        ctx->pc = 0x2D90C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90BCu;
        // 0x2d90c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D90C4u;
        goto label_2d90c4;
    }
    ctx->pc = 0x2D90BCu;
    SET_GPR_U32(ctx, 31, 0x2D90C4u);
    ctx->pc = 0x2D90C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D90BCu;
    // 0x2d90c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8EB0u, 0x2D90BCu, 0x2D90C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90C4u;
label_2d90c4:
    // 0x2d90c4: 0xc0b614c  jal         func_2D8530
label_2d90c8:
    if (ctx->pc == 0x2D90C8u) {
        ctx->pc = 0x2D90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90C4u;
        // 0x2d90c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D90CCu;
        goto label_2d90cc;
    }
    ctx->pc = 0x2D90C4u;
    SET_GPR_U32(ctx, 31, 0x2D90CCu);
    ctx->pc = 0x2D90C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D90C4u;
    // 0x2d90c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8530u, 0x2D90C4u, 0x2D90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D90CCu;
label_2d90cc:
    // 0x2d90cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d90d0:
    // 0x2d90d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d90d4:
    // 0x2d90d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d90d8:
    // 0x2d90d8: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x2d90d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_2d90dc:
    // 0x2d90dc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_2d90e0:
    if (ctx->pc == 0x2D90E0u) {
        ctx->pc = 0x2D90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90DCu;
        // 0x2d90e0: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D90E4u;
        goto label_2d90e4;
    }
    ctx->pc = 0x2D90DCu;
    {
        const bool branch_taken_0x2d90dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d90dc) {
            ctx->pc = 0x2D90E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D90DCu;
            // 0x2d90e0: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9100u;
            goto label_2d9100;
        }
    }
    ctx->pc = 0x2D90E4u;
label_2d90e4:
    // 0x2d90e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2d90e8:
    // 0x2d90e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d90ec:
    // 0x2d90ec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2d90ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2d90f0:
    // 0x2d90f0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2d90f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d90f4:
    // 0x2d90f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2d90f8:
    if (ctx->pc == 0x2D90F8u) {
        ctx->pc = 0x2D90FCu;
        goto label_2d90fc;
    }
    ctx->pc = 0x2D90F4u;
    {
        const bool branch_taken_0x2d90f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d90f4) {
            ctx->pc = 0x2D910Cu;
            goto label_2d910c;
        }
    }
    ctx->pc = 0x2D90FCu;
label_2d90fc:
    // 0x2d90fc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2d90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2d9100:
    // 0x2d9100: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9104:
    // 0x2d9104: 0x10000005  b           . + 4 + (0x5 << 2)
label_2d9108:
    if (ctx->pc == 0x2D9108u) {
        ctx->pc = 0x2D9108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9104u;
        // 0x2d9108: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D910Cu;
        goto label_2d910c;
    }
    ctx->pc = 0x2D9104u;
    {
        const bool branch_taken_0x2d9104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9104u;
        // 0x2d9108: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9104) {
            ctx->pc = 0x2D911Cu;
            goto label_2d911c;
        }
    }
    ctx->pc = 0x2D910Cu;
label_2d910c:
    // 0x2d910c: 0xc0b62f0  jal         func_2D8BC0
label_2d9110:
    if (ctx->pc == 0x2D9110u) {
        ctx->pc = 0x2D9110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D910Cu;
        // 0x2d9110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9114u;
        goto label_2d9114;
    }
    ctx->pc = 0x2D910Cu;
    SET_GPR_U32(ctx, 31, 0x2D9114u);
    ctx->pc = 0x2D9110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D910Cu;
    // 0x2d9110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8BC0u, 0x2D910Cu, 0x2D9114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9114u;
label_2d9114:
    // 0x2d9114: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
label_2d9118:
    if (ctx->pc == 0x2D9118u) {
        ctx->pc = 0x2D9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9114u;
        // 0x2d9118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D911Cu;
        goto label_2d911c;
    }
    ctx->pc = 0x2D9114u;
    {
        const bool branch_taken_0x2d9114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9114u;
        // 0x2d9118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9114) {
            ctx->pc = 0x2D9060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9060;
        }
    }
    ctx->pc = 0x2D911Cu;
label_2d911c:
    // 0x2d911c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d911cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9120:
    // 0x2d9120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d9120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d9124:
    // 0x2d9124: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d9124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9128:
    // 0x2d9128: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d9128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d912c:
    // 0x2d912c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d912cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9130:
    // 0x2d9130: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d9130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9134:
    // 0x2d9134: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2d9134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d9138:
    // 0x2d9138: 0x3e00008  jr          $ra
label_2d913c:
    if (ctx->pc == 0x2D913Cu) {
        ctx->pc = 0x2D913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9138u;
        // 0x2d913c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9140u;
        goto label_fallthrough_0x2d9138;
    }
    ctx->pc = 0x2D9138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9138u;
        // 0x2d913c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d9138:
    ctx->pc = 0x2D9140u;
}
