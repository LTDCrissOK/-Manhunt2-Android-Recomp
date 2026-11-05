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

// Function: sub_001C9068
// Address: 0x1c9068 - 0x1c9390
void sub_001C9068_0x1c9068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9068_0x1c9068");
#endif

    switch (ctx->pc) {
        case 0x1c90c0u: goto label_1c90c0;
        case 0x1c90ccu: goto label_1c90cc;
        case 0x1c9180u: goto label_1c9180;
        case 0x1c91acu: goto label_1c91ac;
        case 0x1c9230u: goto label_1c9230;
        case 0x1c935cu: goto label_1c935c;
        default: break;
    }

    ctx->pc = 0x1c9068u;

    // 0x1c9068: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c9068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1c906c: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1c906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x1c9070: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x1c9070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x1c9074: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1c9074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9078: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1c9078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x1c907c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c907cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9080: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x1c9080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x1c9084: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c9084u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9088: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x1c9088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x1c908c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1c908cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9090: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x1c9090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x1c9094: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1c9094u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9098: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x1c9098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x1c909c: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1c909cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c90a0: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1c90a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1c90a4: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1c90a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1c90a8: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1c90a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x1c90ac: 0x8e620318  lw          $v0, 0x318($s3)
    ctx->pc = 0x1c90acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
    // 0x1c90b0: 0x1242003a  beq         $s2, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1C90B0u;
    {
        const bool branch_taken_0x1c90b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90B0u;
        // 0x1c90b4: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90b0) {
            ctx->pc = 0x1C919Cu;
            goto label_1c919c;
        }
    }
    ctx->pc = 0x1C90B8u;
    // 0x1c90b8: 0xc095306  jal         func_254C18
    ctx->pc = 0x1C90B8u;
    SET_GPR_U32(ctx, 31, 0x1C90C0u);
    ctx->pc = 0x1C90BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C90B8u;
    // 0x1c90bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x1C90B8u, 0x1C90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C90C0u;
label_1c90c0:
    // 0x1c90c0: 0x8e640318  lw          $a0, 0x318($s3)
    ctx->pc = 0x1c90c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
    // 0x1c90c4: 0xc095306  jal         func_254C18
    ctx->pc = 0x1C90C4u;
    SET_GPR_U32(ctx, 31, 0x1C90CCu);
    ctx->pc = 0x1C90C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C90C4u;
    // 0x1c90c8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x1C90C4u, 0x1C90CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C90CCu;
label_1c90cc:
    // 0x1c90cc: 0x5602000c  bnel        $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C90CCu;
    {
        const bool branch_taken_0x1c90cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c90cc) {
            ctx->pc = 0x1C90D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C90CCu;
            // 0x1c90d0: 0x8e421060  lw          $v0, 0x1060($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9100u;
            goto label_1c9100;
        }
    }
    ctx->pc = 0x1C90D4u;
    // 0x1c90d4: 0x8e420fec  lw          $v0, 0xFEC($s2)
    ctx->pc = 0x1c90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4076)));
    // 0x1c90d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c90d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c90dc: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1c90dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c90e0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c90e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c90e4: 0x0  nop
    ctx->pc = 0x1c90e4u;
    // NOP
    // 0x1c90e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C90E8u;
    {
        const bool branch_taken_0x1c90e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90E8u;
        // 0x1c90ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90e8) {
            ctx->pc = 0x1C90F4u;
            goto label_1c90f4;
        }
    }
    ctx->pc = 0x1C90F0u;
    // 0x1c90f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c90f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c90f4:
    // 0x1c90f4: 0x10600099  beqz        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x1C90F4u;
    {
        const bool branch_taken_0x1c90f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90F4u;
        // 0x1c90f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90f4) {
            ctx->pc = 0x1C935Cu;
            goto label_1c935c;
        }
    }
    ctx->pc = 0x1C90FCu;
    // 0x1c90fc: 0x8e421060  lw          $v0, 0x1060($s2)
    ctx->pc = 0x1c90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4192)));
label_1c9100:
    // 0x1c9100: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x1c9100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x1c9104: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1C9104u;
    {
        const bool branch_taken_0x1c9104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9104u;
        // 0x1c9108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9104) {
            ctx->pc = 0x1C935Cu;
            goto label_1c935c;
        }
    }
    ctx->pc = 0x1C910Cu;
    // 0x1c910c: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x1c910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x1c9110: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c9110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1c9114: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1C9114u;
    {
        const bool branch_taken_0x1c9114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9114u;
        // 0x1c9118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9114) {
            ctx->pc = 0x1C935Cu;
            goto label_1c935c;
        }
    }
    ctx->pc = 0x1C911Cu;
    // 0x1c911c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1c911cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c9120: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1C9120u;
    {
        const bool branch_taken_0x1c9120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9120u;
        // 0x1c9124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9120) {
            ctx->pc = 0x1C935Cu;
            goto label_1c935c;
        }
    }
    ctx->pc = 0x1C9128u;
    // 0x1c9128: 0x8e620318  lw          $v0, 0x318($s3)
    ctx->pc = 0x1c9128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
    // 0x1c912c: 0x8c430fe8  lw          $v1, 0xFE8($v0)
    ctx->pc = 0x1c912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    // 0x1c9130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c9130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9134: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x1c9134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x1c9138: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1c9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c913c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C913Cu;
    {
        const bool branch_taken_0x1c913c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c913c) {
            ctx->pc = 0x1C9140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C913Cu;
            // 0x1c9140: 0x8c830fe8  lw          $v1, 0xFE8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9154u;
            goto label_1c9154;
        }
    }
    ctx->pc = 0x1C9144u;
    // 0x1c9144: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1c9144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1c9148: 0x10520084  beq         $v0, $s2, . + 4 + (0x84 << 2)
    ctx->pc = 0x1C9148u;
    {
        const bool branch_taken_0x1c9148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9148u;
        // 0x1c914c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9148) {
            ctx->pc = 0x1C935Cu;
            goto label_1c935c;
        }
    }
    ctx->pc = 0x1C9150u;
    // 0x1c9150: 0x8c830fe8  lw          $v1, 0xFE8($a0)
    ctx->pc = 0x1c9150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
label_1c9154:
    // 0x1c9154: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x1c9154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1c9158: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1c9158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c915c: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1c915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1c9160: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C9160u;
    {
        const bool branch_taken_0x1c9160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9160) {
            ctx->pc = 0x1C9164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9160u;
            // 0x1c9164: 0x8e500fe8  lw          $s0, 0xFE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C91A4u;
            goto label_1c91a4;
        }
    }
    ctx->pc = 0x1C9168u;
    // 0x1c9168: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x1c9168u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1c916c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1c916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c9170: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C9170u;
    {
        const bool branch_taken_0x1c9170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9170) {
            ctx->pc = 0x1C9174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9170u;
            // 0x1c9174: 0x8e500fe8  lw          $s0, 0xFE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C91A4u;
            goto label_1c91a4;
        }
    }
    ctx->pc = 0x1C9178u;
    // 0x1c9178: 0xc095306  jal         func_254C18
    ctx->pc = 0x1C9178u;
    SET_GPR_U32(ctx, 31, 0x1C9180u);
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x1C9178u, 0x1C9180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9180u;
label_1c9180:
    // 0x1c9180: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1c9180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1c9184: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1c9184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1c9188: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1c9188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c918c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c9190: 0x8c4401bc  lw          $a0, 0x1BC($v0)
    ctx->pc = 0x1c9190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x1c9194: 0x54920003  bnel        $a0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9194u;
    {
        const bool branch_taken_0x1c9194 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c9194) {
            ctx->pc = 0x1C9198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9194u;
            // 0x1c9198: 0x8e500fe8  lw          $s0, 0xFE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C91A4u;
            goto label_1c91a4;
        }
    }
    ctx->pc = 0x1C919Cu;
label_1c919c:
    // 0x1c919c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1C919Cu;
    {
        const bool branch_taken_0x1c919c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C919Cu;
        // 0x1c91a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c919c) {
            ctx->pc = 0x1C935Cu;
            goto label_1c935c;
        }
    }
    ctx->pc = 0x1C91A4u;
label_1c91a4:
    // 0x1c91a4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C91A4u;
    SET_GPR_U32(ctx, 31, 0x1C91ACu);
    ctx->pc = 0x1C91A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C91A4u;
    // 0x1c91a8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C91A4u, 0x1C91ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C91ACu;
label_1c91ac:
    // 0x1c91ac: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1c91acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x1c91b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c91b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c91b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c91b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c91b8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1c91b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c91bc: 0x3c013e9a  lui         $at, 0x3E9A
    ctx->pc = 0x1c91bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16026 << 16));
    // 0x1c91c0: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1c91c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1c91c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c91c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c91c8: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x1c91c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c91cc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c91ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c91d0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1c91d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c91d4: 0x7a0201e0  lq          $v0, 0x1E0($s0)
    ctx->pc = 0x1c91d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x1c91d8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c91d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1c91dc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c91dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c91e0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c91e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c91e4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c91e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c91e8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1c91e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c91ec: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1c91ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c91f0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1c91f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1c91f4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1c91f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c91f8: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x1c91f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1c91fc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1c91fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9200: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c9200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9204: 0x264203b0  addiu       $v0, $s2, 0x3B0
    ctx->pc = 0x1c9204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
    // 0x1c9208: 0xc64203b0  lwc1        $f2, 0x3B0($s2)
    ctx->pc = 0x1c9208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c920c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c920cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9210: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c9210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9214: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1c9214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9218: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1c9218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c921c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c921cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c9220: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1c9220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1c9224: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x1c9224u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c9228: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C9228u;
    SET_GPR_U32(ctx, 31, 0x1C9230u);
    ctx->pc = 0x1C922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9228u;
    // 0x1c922c: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C9228u, 0x1C9230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9230u;
label_1c9230:
    // 0x1c9230: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1c9230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9234: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1c9234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1c9238: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1c9238u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1c923c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c923cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9240: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c9240u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c9244: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c9244u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9248: 0x0  nop
    ctx->pc = 0x1c9248u;
    // NOP
    // 0x1c924c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1C924Cu;
    {
        const bool branch_taken_0x1c924c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C924Cu;
        // 0x1c9250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c924c) {
            ctx->pc = 0x1C9280u;
            goto label_1c9280;
        }
    }
    ctx->pc = 0x1C9254u;
    // 0x1c9254: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1c9254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9258: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c9258u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c925c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c925cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9260: 0x0  nop
    ctx->pc = 0x1c9260u;
    // NOP
    // 0x1c9264: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9264u;
    {
        const bool branch_taken_0x1c9264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9264u;
        // 0x1c9268: 0xc7a00058  lwc1        $f0, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9264) {
            ctx->pc = 0x1C9280u;
            goto label_1c9280;
        }
    }
    ctx->pc = 0x1C926Cu;
    // 0x1c926c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1c926cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1c9270: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c9270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9274: 0x0  nop
    ctx->pc = 0x1c9274u;
    // NOP
    // 0x1c9278: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9278u;
    {
        const bool branch_taken_0x1c9278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9278) {
            ctx->pc = 0x1C927Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9278u;
            // 0x1c927c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9280u;
            goto label_1c9280;
        }
    }
    ctx->pc = 0x1C9280u;
label_1c9280:
    // 0x1c9280: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C9280u;
    {
        const bool branch_taken_0x1c9280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9280) {
            ctx->pc = 0x1C9334u;
            goto label_1c9334;
        }
    }
    ctx->pc = 0x1C9288u;
    // 0x1c9288: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x1c9288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x1c928c: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x1c928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x1c9290: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1c9290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1c9294: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C9294u;
    {
        const bool branch_taken_0x1c9294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9294) {
            ctx->pc = 0x1C92F0u;
            goto label_1c92f0;
        }
    }
    ctx->pc = 0x1C929Cu;
    // 0x1c929c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1c929cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c92a0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c92a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c92a4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c92a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c92a8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c92a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c92ac: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c92acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c92b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c92b0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c92b4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c92b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c92b8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c92b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c92bc: 0x8e420fe8  lw          $v0, 0xFE8($s2)
    ctx->pc = 0x1c92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4072)));
    // 0x1c92c0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1c92c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1c92c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c92c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c92c8: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x1c92c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c92cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c92ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c92d0: 0x0  nop
    ctx->pc = 0x1c92d0u;
    // NOP
    // 0x1c92d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C92D4u;
    {
        const bool branch_taken_0x1c92d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c92d4) {
            ctx->pc = 0x1C92D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C92D4u;
            // 0x1c92d8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C92DCu;
            goto label_1c92dc;
        }
    }
    ctx->pc = 0x1C92DCu;
label_1c92dc:
    // 0x1c92dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c92dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c92e0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1c92e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c92e4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c92e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c92e8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c92e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c92ec: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1c92ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c92f0:
    // 0x1c92f0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1c92f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c92f4: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1c92f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c92f8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c92f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c92fc: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1c92fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c9300: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x1c9300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c9304: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1c9304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c9308: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1c9308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c930c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1c930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9310: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x1c9310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c9314: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x1c9314u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c9318: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1c9318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1c931c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1c931cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c9320: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x1c9320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1c9324: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c9324u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c9328: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1c9328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c932c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C932Cu;
    {
        const bool branch_taken_0x1c932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C932Cu;
        // 0x1c9330: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c932c) {
            ctx->pc = 0x1C9340u;
            goto label_1c9340;
        }
    }
    ctx->pc = 0x1C9334u;
label_1c9334:
    // 0x1c9334: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1c9334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c9338: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1c9338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c933c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c9340:
    // 0x1c9340: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1c9340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9344: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1c9344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9348: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1c9348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c934c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x1c934cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9350: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c9350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9354: 0xc072368  jal         func_1C8DA0
    ctx->pc = 0x1C9354u;
    SET_GPR_U32(ctx, 31, 0x1C935Cu);
    ctx->pc = 0x1C9358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9354u;
    // 0x1c9358: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DA0u, 0x1C9354u, 0x1C935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C935Cu;
label_1c935c:
    // 0x1c935c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1c935cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9360: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1c9360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c9364: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1c9364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c9368: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x1c9368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1c936c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1c936cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c9370: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x1c9370u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1c9374: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1c9374u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c9378: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x1c9378u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1c937c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1c937cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c9380: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1c9380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1c9384: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9384u;
        // 0x1c9388: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C938Cu;
    // 0x1c938c: 0x0  nop
    ctx->pc = 0x1c938cu;
    // NOP
    ctx->pc = 0x1c9390u;
}
