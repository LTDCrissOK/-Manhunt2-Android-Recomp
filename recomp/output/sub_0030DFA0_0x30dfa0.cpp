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

// Function: sub_0030DFA0
// Address: 0x30dfa0 - 0x30e2b8
void sub_0030DFA0_0x30dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DFA0_0x30dfa0");
#endif

    switch (ctx->pc) {
        case 0x30dfd8u: goto label_30dfd8;
        case 0x30dfe4u: goto label_30dfe4;
        case 0x30e010u: goto label_30e010;
        case 0x30e074u: goto label_30e074;
        case 0x30e08cu: goto label_30e08c;
        case 0x30e128u: goto label_30e128;
        case 0x30e148u: goto label_30e148;
        case 0x30e15cu: goto label_30e15c;
        case 0x30e174u: goto label_30e174;
        case 0x30e188u: goto label_30e188;
        case 0x30e194u: goto label_30e194;
        case 0x30e1b0u: goto label_30e1b0;
        case 0x30e1c8u: goto label_30e1c8;
        case 0x30e1e0u: goto label_30e1e0;
        default: break;
    }

    ctx->pc = 0x30dfa0u;

    // 0x30dfa0: 0x27bdf970  addiu       $sp, $sp, -0x690
    ctx->pc = 0x30dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965616));
    // 0x30dfa4: 0xffb10648  sd          $s1, 0x648($sp)
    ctx->pc = 0x30dfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1608), GPR_U64(ctx, 17));
    // 0x30dfa8: 0xffb20650  sd          $s2, 0x650($sp)
    ctx->pc = 0x30dfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 18));
    // 0x30dfac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30dfacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dfb0: 0xffb50668  sd          $s5, 0x668($sp)
    ctx->pc = 0x30dfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1640), GPR_U64(ctx, 21));
    // 0x30dfb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30dfb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dfb8: 0xffb00640  sd          $s0, 0x640($sp)
    ctx->pc = 0x30dfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 16));
    // 0x30dfbc: 0xffb30658  sd          $s3, 0x658($sp)
    ctx->pc = 0x30dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1624), GPR_U64(ctx, 19));
    // 0x30dfc0: 0xffb60670  sd          $s6, 0x670($sp)
    ctx->pc = 0x30dfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 22));
    // 0x30dfc4: 0xffbf0678  sd          $ra, 0x678($sp)
    ctx->pc = 0x30dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1656), GPR_U64(ctx, 31));
    // 0x30dfc8: 0xe7b40680  swc1        $f20, 0x680($sp)
    ctx->pc = 0x30dfc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1664), bits); }
    // 0x30dfcc: 0xffb40660  sd          $s4, 0x660($sp)
    ctx->pc = 0x30dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 20));
    // 0x30dfd0: 0xc0c3dc2  jal         func_30F708
    ctx->pc = 0x30DFD0u;
    SET_GPR_U32(ctx, 31, 0x30DFD8u);
    ctx->pc = 0x30DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DFD0u;
    // 0x30dfd4: 0x8e540004  lw          $s4, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x30DFD0u, 0x30DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DFD8u;
label_30dfd8:
    // 0x30dfd8: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x30dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x30dfdc: 0xc0c47b2  jal         func_311EC8
    ctx->pc = 0x30DFDCu;
    SET_GPR_U32(ctx, 31, 0x30DFE4u);
    ctx->pc = 0x30DFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DFDCu;
    // 0x30dfe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311EC8u, 0x30DFDCu, 0x30DFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DFE4u;
label_30dfe4:
    // 0x30dfe4: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x30dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x30dfe8: 0x24550060  addiu       $s5, $v0, 0x60
    ctx->pc = 0x30dfe8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x30dfec: 0x8e820310  lw          $v0, 0x310($s4)
    ctx->pc = 0x30dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
    // 0x30dff0: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x30DFF0u;
    {
        const bool branch_taken_0x30dff0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DFF0u;
        // 0x30dff4: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dff0) {
            ctx->pc = 0x30E0C8u;
            goto label_30e0c8;
        }
    }
    ctx->pc = 0x30DFF8u;
    // 0x30dff8: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x30dff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x30dffc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x30dffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x30e000: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30e000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30e004: 0x24567ee0  addiu       $s6, $v0, 0x7EE0
    ctx->pc = 0x30e004u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x30e008: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30e008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e00c: 0x0  nop
    ctx->pc = 0x30e00cu;
    // NOP
label_30e010:
    // 0x30e010: 0x8e820304  lw          $v0, 0x304($s4)
    ctx->pc = 0x30e010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 772)));
    // 0x30e014: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x30e014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x30e018: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30e018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30e01c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x30e01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e020: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x30e020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e024: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x30e024u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x30e028: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x30e028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e02c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x30e02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e030: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x30e030u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x30e034: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x30e034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e038: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x30e038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30e03c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x30e03cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x30e040: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x30e040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30e044: 0x0  nop
    ctx->pc = 0x30e044u;
    // NOP
    // 0x30e048: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
    ctx->pc = 0x30E048u;
    {
        const bool branch_taken_0x30e048 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30e048) {
            ctx->pc = 0x30E04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E048u;
            // 0x30e04c: 0x8e820310  lw          $v0, 0x310($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E0B8u;
            goto label_30e0b8;
        }
    }
    ctx->pc = 0x30E050u;
    // 0x30e050: 0x8e830308  lw          $v1, 0x308($s4)
    ctx->pc = 0x30e050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 776)));
    // 0x30e054: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x30e054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x30e058: 0x8e850300  lw          $a1, 0x300($s4)
    ctx->pc = 0x30e058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 768)));
    // 0x30e05c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30e060: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x30e060u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e064: 0xb38021  addu        $s0, $a1, $s3
    ctx->pc = 0x30e064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x30e068: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x30e068u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30e06c: 0xc0c3510  jal         func_30D440
    ctx->pc = 0x30E06Cu;
    SET_GPR_U32(ctx, 31, 0x30E074u);
    ctx->pc = 0x30E070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E06Cu;
    // 0x30e070: 0x962021  addu        $a0, $a0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D440u, 0x30E06Cu, 0x30E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E074u;
label_30e074:
    // 0x30e074: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30E074u;
    {
        const bool branch_taken_0x30e074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E074u;
        // 0x30e078: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e074) {
            ctx->pc = 0x30E0B4u;
            goto label_30e0b4;
        }
    }
    ctx->pc = 0x30E07Cu;
    // 0x30e07c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30e07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e080: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x30e080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x30e084: 0xc0c3788  jal         func_30DE20
    ctx->pc = 0x30E084u;
    SET_GPR_U32(ctx, 31, 0x30E08Cu);
    ctx->pc = 0x30E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E084u;
    // 0x30e088: 0x24a70020  addiu       $a3, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DE20u, 0x30E084u, 0x30E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E08Cu;
label_30e08c:
    // 0x30e08c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x30E08Cu;
    {
        const bool branch_taken_0x30e08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e08c) {
            ctx->pc = 0x30E090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E08Cu;
            // 0x30e090: 0x8e820310  lw          $v0, 0x310($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E0B8u;
            goto label_30e0b8;
        }
    }
    ctx->pc = 0x30E094u;
    // 0x30e094: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x30e094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x30e098: 0x28620320  slti        $v0, $v1, 0x320
    ctx->pc = 0x30e098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)800) ? 1 : 0);
    // 0x30e09c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30E09Cu;
    {
        const bool branch_taken_0x30e09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E09Cu;
        // 0x30e0a0: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e09c) {
            ctx->pc = 0x30E0B4u;
            goto label_30e0b4;
        }
    }
    ctx->pc = 0x30E0A4u;
    // 0x30e0a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30e0a8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x30e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x30e0ac: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x30e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
    // 0x30e0b0: 0xa4910000  sh          $s1, 0x0($a0)
    ctx->pc = 0x30e0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 17));
label_30e0b4:
    // 0x30e0b4: 0x8e820310  lw          $v0, 0x310($s4)
    ctx->pc = 0x30e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
label_30e0b8:
    // 0x30e0b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30e0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30e0bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x30e0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30e0c0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x30E0C0u;
    {
        const bool branch_taken_0x30e0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E0C0u;
        // 0x30e0c4: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e0c0) {
            ctx->pc = 0x30E010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e010;
        }
    }
    ctx->pc = 0x30E0C8u;
label_30e0c8:
    // 0x30e0c8: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x30e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x30e0cc: 0x1080006f  beqz        $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x30E0CCu;
    {
        const bool branch_taken_0x30e0cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E0CCu;
        // 0x30e0d0: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e0cc) {
            ctx->pc = 0x30E28Cu;
            goto label_30e28c;
        }
    }
    ctx->pc = 0x30E0D4u;
    // 0x30e0d4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x30e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x30e0d8: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x30e0d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30e0dc: 0x73202a  slt         $a0, $v1, $s3
    ctx->pc = 0x30e0dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x30e0e0: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30E0E0u;
    {
        const bool branch_taken_0x30e0e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e0e0) {
            ctx->pc = 0x30E0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E0E0u;
            // 0x30e0e4: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E104u;
            goto label_30e104;
        }
    }
    ctx->pc = 0x30E0E8u;
    // 0x30e0e8: 0x731023  subu        $v0, $v1, $s3
    ctx->pc = 0x30e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x30e0ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e0f0: 0x28420033  slti        $v0, $v0, 0x33
    ctx->pc = 0x30e0f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x30e0f4: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x30e0f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x30e0f8: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x30E0F8u;
    {
        const bool branch_taken_0x30e0f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e0f8) {
            ctx->pc = 0x30E0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E0F8u;
            // 0x30e0fc: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E1BCu;
            goto label_30e1bc;
        }
    }
    ctx->pc = 0x30E100u;
    // 0x30e100: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x30e100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_30e104:
    // 0x30e104: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x30E104u;
    {
        const bool branch_taken_0x30e104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e104) {
            ctx->pc = 0x30E108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E104u;
            // 0x30e108: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E14Cu;
            goto label_30e14c;
        }
    }
    ctx->pc = 0x30E10Cu;
    // 0x30e10c: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x30e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x30e110: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30e110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30e114: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30e114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e118: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30E118u;
    {
        const bool branch_taken_0x30e118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E118u;
        // 0x30e11c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e118) {
            ctx->pc = 0x30E140u;
            goto label_30e140;
        }
    }
    ctx->pc = 0x30E120u;
    // 0x30e120: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x30e120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x30e124: 0x0  nop
    ctx->pc = 0x30e124u;
    // NOP
label_30e128:
    // 0x30e128: 0x0  nop
    ctx->pc = 0x30e128u;
    // NOP
    // 0x30e12c: 0x0  nop
    ctx->pc = 0x30e12cu;
    // NOP
    // 0x30e130: 0x0  nop
    ctx->pc = 0x30e130u;
    // NOP
    // 0x30e134: 0x0  nop
    ctx->pc = 0x30e134u;
    // NOP
    // 0x30e138: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30E138u;
    {
        const bool branch_taken_0x30e138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E138u;
        // 0x30e13c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e138) {
            ctx->pc = 0x30E128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e128;
        }
    }
    ctx->pc = 0x30E140u;
label_30e140:
    // 0x30e140: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x30E140u;
    SET_GPR_U32(ctx, 31, 0x30E148u);
    ctx->pc = 0x30E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E140u;
    // 0x30e144: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x30E140u, 0x30E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E148u;
label_30e148:
    // 0x30e148: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x30e148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_30e14c:
    // 0x30e14c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E14Cu;
    {
        const bool branch_taken_0x30e14c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E14Cu;
        // 0x30e150: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e14c) {
            ctx->pc = 0x30E15Cu;
            goto label_30e15c;
        }
    }
    ctx->pc = 0x30E154u;
    // 0x30e154: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x30E154u;
    SET_GPR_U32(ctx, 31, 0x30E15Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x30E154u, 0x30E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E15Cu;
label_30e15c:
    // 0x30e15c: 0x1a600016  blez        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x30E15Cu;
    {
        const bool branch_taken_0x30e15c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x30E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E15Cu;
        // 0x30e160: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e15c) {
            ctx->pc = 0x30E1B8u;
            goto label_30e1b8;
        }
    }
    ctx->pc = 0x30E164u;
    // 0x30e164: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x30e164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x30e168: 0x2671ffff  addiu       $s1, $s3, -0x1
    ctx->pc = 0x30e168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x30e16c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x30E16Cu;
    SET_GPR_U32(ctx, 31, 0x30E174u);
    ctx->pc = 0x30E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E16Cu;
    // 0x30e170: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x30E16Cu, 0x30E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E174u;
label_30e174:
    // 0x30e174: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x30e174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30e178: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x30e178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x30e17c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x30E17Cu;
    {
        const bool branch_taken_0x30e17c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E17Cu;
        // 0x30e180: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e17c) {
            ctx->pc = 0x30E1A0u;
            goto label_30e1a0;
        }
    }
    ctx->pc = 0x30E184u;
    // 0x30e184: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x30e184u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30e188:
    // 0x30e188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30e188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e18c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30E18Cu;
    SET_GPR_U32(ctx, 31, 0x30E194u);
    ctx->pc = 0x30E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E18Cu;
    // 0x30e190: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30E18Cu, 0x30E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E194u;
label_30e194:
    // 0x30e194: 0x0  nop
    ctx->pc = 0x30e194u;
    // NOP
    // 0x30e198: 0x1636fffb  bne         $s1, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30E198u;
    {
        const bool branch_taken_0x30e198 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x30E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E198u;
        // 0x30e19c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e198) {
            ctx->pc = 0x30E188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e188;
        }
    }
    ctx->pc = 0x30E1A0u;
label_30e1a0:
    // 0x30e1a0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x30e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x30e1a4: 0xae55001c  sw          $s5, 0x1C($s2)
    ctx->pc = 0x30e1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 21));
    // 0x30e1a8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x30E1A8u;
    SET_GPR_U32(ctx, 31, 0x30E1B0u);
    ctx->pc = 0x30E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E1A8u;
    // 0x30e1ac: 0x2642018  mult        $a0, $s3, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x30E1A8u, 0x30E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1B0u;
label_30e1b0:
    // 0x30e1b0: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x30e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x30e1b4: 0xae530024  sw          $s3, 0x24($s2)
    ctx->pc = 0x30e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 19));
label_30e1b8:
    // 0x30e1b8: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x30e1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_30e1bc:
    // 0x30e1bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30e1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e1c0: 0xc0c3774  jal         func_30DDD0
    ctx->pc = 0x30E1C0u;
    SET_GPR_U32(ctx, 31, 0x30E1C8u);
    ctx->pc = 0x30E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E1C0u;
    // 0x30e1c4: 0x8e510020  lw          $s1, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DDD0u, 0x30E1C0u, 0x30E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E1C8u;
label_30e1c8:
    // 0x30e1c8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x30e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x30e1cc: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x30E1CCu;
    {
        const bool branch_taken_0x30e1cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E1CCu;
        // 0x30e1d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e1cc) {
            ctx->pc = 0x30E28Cu;
            goto label_30e28c;
        }
    }
    ctx->pc = 0x30E1D4u;
    // 0x30e1d4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x30e1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x30e1d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x30e1d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e1dc: 0x0  nop
    ctx->pc = 0x30e1dcu;
    // NOP
label_30e1e0:
    // 0x30e1e0: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x30e1e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30e1e4: 0x8e820300  lw          $v0, 0x300($s4)
    ctx->pc = 0x30e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 768)));
    // 0x30e1e8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x30e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30e1ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30e1f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30e1f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e1f8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30e1f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e1fc: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30e1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30e200: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x30e200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e204: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x30e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e208: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x30e208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e20c: 0xe4a0ffdc  swc1        $f0, -0x24($a1)
    ctx->pc = 0x30e20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967260), bits); }
    // 0x30e210: 0xe4a1ffe0  swc1        $f1, -0x20($a1)
    ctx->pc = 0x30e210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967264), bits); }
    // 0x30e214: 0xe4a2ffe4  swc1        $f2, -0x1C($a1)
    ctx->pc = 0x30e214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967268), bits); }
    // 0x30e218: 0x8e820300  lw          $v0, 0x300($s4)
    ctx->pc = 0x30e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 768)));
    // 0x30e21c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e220: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30e224: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30e224u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e228: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x30e228u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30e22c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x30e22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e230: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x30e230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e234: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x30e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e238: 0xe4a0fff4  swc1        $f0, -0xC($a1)
    ctx->pc = 0x30e238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), bits); }
    // 0x30e23c: 0xe4a1fff8  swc1        $f1, -0x8($a1)
    ctx->pc = 0x30e23cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), bits); }
    // 0x30e240: 0xe4a2fffc  swc1        $f2, -0x4($a1)
    ctx->pc = 0x30e240u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), bits); }
    // 0x30e244: 0x8e820300  lw          $v0, 0x300($s4)
    ctx->pc = 0x30e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 768)));
    // 0x30e248: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30e248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e24c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x30e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x30e250: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x30e250u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30e254: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x30e254u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30e258: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x30e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e25c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x30e25cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30e260: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x30e260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30e264: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x30e264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x30e268: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x30e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e26c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x30e26cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x30e270: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x30e270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x30e274: 0xe4a20010  swc1        $f2, 0x10($a1)
    ctx->pc = 0x30e274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x30e278: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x30e278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x30e27c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x30e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x30e280: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x30e280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30e284: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x30E284u;
    {
        const bool branch_taken_0x30e284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E284u;
        // 0x30e288: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e284) {
            ctx->pc = 0x30E1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e1e0;
        }
    }
    ctx->pc = 0x30E28Cu;
label_30e28c:
    // 0x30e28c: 0xdfb00640  ld          $s0, 0x640($sp)
    ctx->pc = 0x30e28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x30e290: 0xdfb10648  ld          $s1, 0x648($sp)
    ctx->pc = 0x30e290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1608)));
    // 0x30e294: 0xdfb20650  ld          $s2, 0x650($sp)
    ctx->pc = 0x30e294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x30e298: 0xdfb30658  ld          $s3, 0x658($sp)
    ctx->pc = 0x30e298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1624)));
    // 0x30e29c: 0xdfb40660  ld          $s4, 0x660($sp)
    ctx->pc = 0x30e29cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x30e2a0: 0xdfb50668  ld          $s5, 0x668($sp)
    ctx->pc = 0x30e2a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1640)));
    // 0x30e2a4: 0xdfb60670  ld          $s6, 0x670($sp)
    ctx->pc = 0x30e2a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x30e2a8: 0xdfbf0678  ld          $ra, 0x678($sp)
    ctx->pc = 0x30e2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1656)));
    // 0x30e2ac: 0xc7b40680  lwc1        $f20, 0x680($sp)
    ctx->pc = 0x30e2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30e2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x30E2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E2B0u;
        // 0x30e2b4: 0x27bd0690  addiu       $sp, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E2B8u;
}
