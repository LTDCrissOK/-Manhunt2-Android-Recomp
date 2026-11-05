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

// Function: sub_002BBFC8
// Address: 0x2bbfc8 - 0x2bca28
void sub_002BBFC8_0x2bbfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBFC8_0x2bbfc8");
#endif

    switch (ctx->pc) {
        case 0x2bc034u: goto label_2bc034;
        case 0x2bc048u: goto label_2bc048;
        case 0x2bc0c8u: goto label_2bc0c8;
        case 0x2bc0d0u: goto label_2bc0d0;
        case 0x2bc0dcu: goto label_2bc0dc;
        case 0x2bc0e4u: goto label_2bc0e4;
        case 0x2bc0ecu: goto label_2bc0ec;
        case 0x2bc100u: goto label_2bc100;
        case 0x2bc10cu: goto label_2bc10c;
        case 0x2bc158u: goto label_2bc158;
        case 0x2bc214u: goto label_2bc214;
        case 0x2bc25cu: goto label_2bc25c;
        case 0x2bc264u: goto label_2bc264;
        case 0x2bc348u: goto label_2bc348;
        case 0x2bc450u: goto label_2bc450;
        case 0x2bc4c0u: goto label_2bc4c0;
        case 0x2bc4c8u: goto label_2bc4c8;
        case 0x2bc4d0u: goto label_2bc4d0;
        case 0x2bc4d8u: goto label_2bc4d8;
        case 0x2bc91cu: goto label_2bc91c;
        case 0x2bc944u: goto label_2bc944;
        case 0x2bc96cu: goto label_2bc96c;
        case 0x2bc994u: goto label_2bc994;
        case 0x2bc9bcu: goto label_2bc9bc;
        case 0x2bc9e4u: goto label_2bc9e4;
        default: break;
    }

    ctx->pc = 0x2bbfc8u;

    // 0x2bbfc8: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2bbfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2bbfcc: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x2bbfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x2bbfd0: 0xffb10168  sd          $s1, 0x168($sp)
    ctx->pc = 0x2bbfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 17));
    // 0x2bbfd4: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x2bbfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbfd8: 0xffb20170  sd          $s2, 0x170($sp)
    ctx->pc = 0x2bbfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
    // 0x2bbfdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bbfdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbfe0: 0xffb30178  sd          $s3, 0x178($sp)
    ctx->pc = 0x2bbfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 19));
    // 0x2bbfe4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bbfe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbfe8: 0xffb50188  sd          $s5, 0x188($sp)
    ctx->pc = 0x2bbfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 21));
    // 0x2bbfec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2bbfecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbff0: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x2bbff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
    // 0x2bbff4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2bbff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbff8: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x2bbff8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2bbffc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2bbffcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc000: 0xffb40180  sd          $s4, 0x180($sp)
    ctx->pc = 0x2bc000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 20));
    // 0x2bc004: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2bc004u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2bc008: 0xffb70198  sd          $s7, 0x198($sp)
    ctx->pc = 0x2bc008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 23));
    // 0x2bc00c: 0xffbe01a0  sd          $fp, 0x1A0($sp)
    ctx->pc = 0x2bc00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 30));
    // 0x2bc010: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x2bc010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x2bc014: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2bc014u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2bc018: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2bc018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bc01c: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BC01Cu;
    {
        const bool branch_taken_0x2bc01c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC01Cu;
        // 0x2bc020: 0xafa90130  sw          $t1, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc01c) {
            ctx->pc = 0x2BC048u;
            goto label_2bc048;
        }
    }
    ctx->pc = 0x2BC024u;
    // 0x2bc024: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC024u;
    {
        const bool branch_taken_0x2bc024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc024) {
            ctx->pc = 0x2BC028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC024u;
            // 0x2bc028: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC038u;
            goto label_2bc038;
        }
    }
    ctx->pc = 0x2BC02Cu;
    // 0x2bc02c: 0xc0dab7e  jal         func_36ADF8
    ctx->pc = 0x2BC02Cu;
    SET_GPR_U32(ctx, 31, 0x2BC034u);
    ctx->pc = 0x2BC030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC02Cu;
    // 0x2bc030: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADF8u, 0x2BC02Cu, 0x2BC034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC034u;
label_2bc034:
    // 0x2bc034: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2bc034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_2bc038:
    // 0x2bc038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc03c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bc03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc040: 0xc0dab74  jal         func_36ADD0
    ctx->pc = 0x2BC040u;
    SET_GPR_U32(ctx, 31, 0x2BC048u);
    ctx->pc = 0x2BC044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC040u;
    // 0x2bc044: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ADD0u, 0x2BC040u, 0x2BC048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC048u;
label_2bc048:
    // 0x2bc048: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2bc048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2bc04c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2bc04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2bc050: 0x12c20267  beq         $s6, $v0, . + 4 + (0x267 << 2)
    ctx->pc = 0x2BC050u;
    {
        const bool branch_taken_0x2bc050 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC050u;
        // 0x2bc054: 0xafa20134  sw          $v0, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc050) {
            ctx->pc = 0x2BC9F0u;
            goto label_2bc9f0;
        }
    }
    ctx->pc = 0x2BC058u;
    // 0x2bc058: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x2bc058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2bc05c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2bc05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bc060: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2bc060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bc064: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2bc064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bc068: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2bc068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bc06c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x2bc06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x2bc070: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x2bc070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
    // 0x2bc074: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2bc074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2bc078: 0xafa40148  sw          $a0, 0x148($sp)
    ctx->pc = 0x2bc078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 4));
    // 0x2bc07c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2bc07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bc080: 0xafa5014c  sw          $a1, 0x14C($sp)
    ctx->pc = 0x2bc080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 5));
    // 0x2bc084: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2bc084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2bc088: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x2bc088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x2bc08c: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x2bc08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x2bc090: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x2bc090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2bc094: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2bc094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2bc098: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x2bc098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x2bc09c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bc09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bc0a0: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x2bc0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x2bc0a4: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x2bc0a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bc0a8: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x2bc0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x2bc0ac: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x2bc0acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bc0b0: 0x1ef03e  dsrl32      $fp, $fp, 0
    ctx->pc = 0x2bc0b0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) >> (32 + 0));
    // 0x2bc0b4: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x2bc0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
    // 0x2bc0b8: 0xafa50138  sw          $a1, 0x138($sp)
    ctx->pc = 0x2bc0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 5));
    // 0x2bc0bc: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x2bc0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
    // 0x2bc0c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bc0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0c4: 0x0  nop
    ctx->pc = 0x2bc0c4u;
    // NOP
label_2bc0c8:
    // 0x2bc0c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BC0C8u;
    SET_GPR_U32(ctx, 31, 0x2BC0D0u);
    ctx->pc = 0x2BC0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC0C8u;
    // 0x2bc0cc: 0x8ed10000  lw          $s1, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BC0C8u, 0x2BC0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC0D0u;
label_2bc0d0:
    // 0x2bc0d0: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x2bc0d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x2bc0d4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BC0D4u;
    SET_GPR_U32(ctx, 31, 0x2BC0DCu);
    ctx->pc = 0x2BC0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC0D4u;
    // 0x2bc0d8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BC0D4u, 0x2BC0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC0DCu;
label_2bc0dc:
    // 0x2bc0dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BC0DCu;
    SET_GPR_U32(ctx, 31, 0x2BC0E4u);
    ctx->pc = 0x2BC0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC0DCu;
    // 0x2bc0e0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BC0DCu, 0x2BC0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC0E4u;
label_2bc0e4:
    // 0x2bc0e4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BC0E4u;
    SET_GPR_U32(ctx, 31, 0x2BC0ECu);
    ctx->pc = 0x2BC0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC0E4u;
    // 0x2bc0e8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BC0E4u, 0x2BC0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC0ECu;
label_2bc0ec:
    // 0x2bc0ec: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2bc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2bc0f0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BC0F0u;
    {
        const bool branch_taken_0x2bc0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0F0u;
        // 0x2bc0f4: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc0f0) {
            ctx->pc = 0x2BC144u;
            goto label_2bc144;
        }
    }
    ctx->pc = 0x2BC0F8u;
    // 0x2bc0f8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BC0F8u;
    SET_GPR_U32(ctx, 31, 0x2BC100u);
    ctx->pc = 0x2BC0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC0F8u;
    // 0x2bc0fc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BC0F8u, 0x2BC100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC100u;
label_2bc100:
    // 0x2bc100: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2bc100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2bc104: 0xc0b10a6  jal         func_2C4298
    ctx->pc = 0x2BC104u;
    SET_GPR_U32(ctx, 31, 0x2BC10Cu);
    ctx->pc = 0x2BC108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC104u;
    // 0x2bc108: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4298u, 0x2BC104u, 0x2BC10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC10Cu;
label_2bc10c:
    // 0x2bc10c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2bc10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bc110: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2bc110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bc114: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bc114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc118: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2bc118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc11c: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x2bc11cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bc120: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x2bc120u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2bc124: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x2bc124u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2bc128: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2bc128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bc12c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2bc12cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bc130: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x2bc130u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bc134: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x2bc134u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc138: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x2bc138u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc13c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC13Cu;
    {
        const bool branch_taken_0x2bc13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC13Cu;
        // 0x2bc140: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc13c) {
            ctx->pc = 0x2BC150u;
            goto label_2bc150;
        }
    }
    ctx->pc = 0x2BC144u;
label_2bc144:
    // 0x2bc144: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bc144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc148: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2bc148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc14c: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x2bc14cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2bc150:
    // 0x2bc150: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BC150u;
    SET_GPR_U32(ctx, 31, 0x2BC158u);
    ctx->pc = 0x2BC154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC150u;
    // 0x2bc154: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BC150u, 0x2BC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC158u;
label_2bc158:
    // 0x2bc158: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2bc158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bc15c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2bc15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2bc160: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bc160u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc164: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2bc164u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc168: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bc168u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc16c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2bc16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc170: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2bc170u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc174: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2bc174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bc178: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bc178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bc17c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bc17cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bc180: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bc180u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bc184: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bc184u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bc188: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2bc188u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc18c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2bc18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc190: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x2bc190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x2bc194: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2bc194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc198: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x2bc198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc19c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2bc19cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2bc1a0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2bc1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc1a4: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2bc1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc1a8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2bc1a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2bc1ac: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2bc1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc1b0: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x2bc1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc1b4: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2bc1b4u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2bc1b8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2bc1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2bc1bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bc1bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc1c0: 0x26b40030  addiu       $s4, $s5, 0x30
    ctx->pc = 0x2bc1c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x2bc1c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc1c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc1cc: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2bc1ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc1d0: 0x0  nop
    ctx->pc = 0x2bc1d0u;
    // NOP
    // 0x2bc1d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC1D4u;
    {
        const bool branch_taken_0x2bc1d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1D4u;
        // 0x2bc1d8: 0x26b20020  addiu       $s2, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1d4) {
            ctx->pc = 0x2BC1E4u;
            goto label_2bc1e4;
        }
    }
    ctx->pc = 0x2BC1DCu;
    // 0x2bc1dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC1DCu;
    {
        const bool branch_taken_0x2bc1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC1DCu;
        // 0x2bc1e0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc1dc) {
            ctx->pc = 0x2BC1F4u;
            goto label_2bc1f4;
        }
    }
    ctx->pc = 0x2BC1E4u;
label_2bc1e4:
    // 0x2bc1e4: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x2bc1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc1e8: 0x0  nop
    ctx->pc = 0x2bc1e8u;
    // NOP
    // 0x2bc1ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BC1ECu;
    {
        const bool branch_taken_0x2bc1ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc1ec) {
            ctx->pc = 0x2BC1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC1ECu;
            // 0x2bc1f0: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC1F4u;
            goto label_2bc1f4;
        }
    }
    ctx->pc = 0x2BC1F4u;
label_2bc1f4:
    // 0x2bc1f4: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2bc1f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2bc1f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc1fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2bc1fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bc200: 0x0  nop
    ctx->pc = 0x2bc200u;
    // NOP
    // 0x2bc204: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2bc204u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2bc208: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2bc208u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bc20c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2BC20Cu;
    SET_GPR_U32(ctx, 31, 0x2BC214u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2BC20Cu, 0x2BC214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC214u;
label_2bc214:
    // 0x2bc214: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2bc214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2bc218: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2bc218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2bc21c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc220: 0x0  nop
    ctx->pc = 0x2bc220u;
    // NOP
    // 0x2bc224: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bc224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bc228: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2bc228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc22c: 0x0  nop
    ctx->pc = 0x2bc22cu;
    // NOP
    // 0x2bc230: 0x450301ed  bc1tl       . + 4 + (0x1ED << 2)
    ctx->pc = 0x2BC230u;
    {
        const bool branch_taken_0x2bc230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc230) {
            ctx->pc = 0x2BC234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC230u;
            // 0x2bc234: 0x8fa40134  lw          $a0, 0x134($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC9E8u;
            goto label_2bc9e8;
        }
    }
    ctx->pc = 0x2BC238u;
    // 0x2bc238: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x2bc238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc23c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bc23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc240: 0xc62c0040  lwc1        $f12, 0x40($s1)
    ctx->pc = 0x2bc240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bc244: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bc244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc248: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2bc248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bc24c: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2bc24cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x2bc250: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2bc250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bc254: 0xc0af9dc  jal         func_2BE770
    ctx->pc = 0x2BC254u;
    SET_GPR_U32(ctx, 31, 0x2BC25Cu);
    ctx->pc = 0x2BC258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC254u;
    // 0x2bc258: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE770u, 0x2BC254u, 0x2BC25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC25Cu;
label_2bc25c:
    // 0x2bc25c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BC25Cu;
    SET_GPR_U32(ctx, 31, 0x2BC264u);
    ctx->pc = 0x2BC260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC25Cu;
    // 0x2bc260: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BC25Cu, 0x2BC264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC264u;
label_2bc264:
    // 0x2bc264: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x2bc264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x2bc268: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x2BC268u;
    {
        const bool branch_taken_0x2bc268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc268) {
            ctx->pc = 0x2BC26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC268u;
            // 0x2bc26c: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC384u;
            goto label_2bc384;
        }
    }
    ctx->pc = 0x2BC270u;
    // 0x2bc270: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x2bc270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2bc274: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC274u;
    {
        const bool branch_taken_0x2bc274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC274u;
        // 0x2bc278: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc274) {
            ctx->pc = 0x2BC28Cu;
            goto label_2bc28c;
        }
    }
    ctx->pc = 0x2BC27Cu;
    // 0x2bc27c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bc27cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc280: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2bc280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc284: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BC284u;
    {
        const bool branch_taken_0x2bc284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC284u;
        // 0x2bc288: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc284) {
            ctx->pc = 0x2BC2A8u;
            goto label_2bc2a8;
        }
    }
    ctx->pc = 0x2BC28Cu;
label_2bc28c:
    // 0x2bc28c: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x2bc28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc290: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2bc290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc294: 0xc60200a8  lwc1        $f2, 0xA8($s0)
    ctx->pc = 0x2bc294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc298: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2bc298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bc29c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2bc29cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bc2a0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2bc2a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2bc2a4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2bc2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bc2a8:
    // 0x2bc2a8: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x2bc2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x2bc2ac: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x2bc2acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x2bc2b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc2b4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2bc2b4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2bc2b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bc2b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc2bc: 0x0  nop
    ctx->pc = 0x2bc2bcu;
    // NOP
    // 0x2bc2c0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2BC2C0u;
    {
        const bool branch_taken_0x2bc2c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2C0u;
        // 0x2bc2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2c0) {
            ctx->pc = 0x2BC2F4u;
            goto label_2bc2f4;
        }
    }
    ctx->pc = 0x2BC2C8u;
    // 0x2bc2c8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2bc2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc2cc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2bc2ccu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2bc2d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bc2d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc2d4: 0x0  nop
    ctx->pc = 0x2bc2d4u;
    // NOP
    // 0x2bc2d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC2D8u;
    {
        const bool branch_taken_0x2bc2d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC2D8u;
        // 0x2bc2dc: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2d8) {
            ctx->pc = 0x2BC2F4u;
            goto label_2bc2f4;
        }
    }
    ctx->pc = 0x2BC2E0u;
    // 0x2bc2e0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2bc2e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2bc2e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bc2e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc2e8: 0x0  nop
    ctx->pc = 0x2bc2e8u;
    // NOP
    // 0x2bc2ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BC2ECu;
    {
        const bool branch_taken_0x2bc2ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc2ec) {
            ctx->pc = 0x2BC2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC2ECu;
            // 0x2bc2f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC2F4u;
            goto label_2bc2f4;
        }
    }
    ctx->pc = 0x2BC2F4u;
label_2bc2f4:
    // 0x2bc2f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC2F4u;
    {
        const bool branch_taken_0x2bc2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc2f4) {
            ctx->pc = 0x2BC30Cu;
            goto label_2bc30c;
        }
    }
    ctx->pc = 0x2BC2FCu;
    // 0x2bc2fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc2fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bc300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc304: 0x0  nop
    ctx->pc = 0x2bc304u;
    // NOP
    // 0x2bc308: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2bc308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2bc30c:
    // 0x2bc30c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2bc30cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2bc310: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2bc310u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bc314: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bc314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bc318: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bc318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bc31c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bc31cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bc320: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bc320u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bc324: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2bc324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc328: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2bc328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc32c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2bc32cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2bc330: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2bc330u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc334: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2bc334u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bc338: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2bc338u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc33c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2bc33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc340: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BC340u;
    SET_GPR_U32(ctx, 31, 0x2BC348u);
    ctx->pc = 0x2BC344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC340u;
    // 0x2bc344: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BC340u, 0x2BC348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC348u;
label_2bc348:
    // 0x2bc348: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2bc348u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2bc34c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2bc34cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc350: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2bc350u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bc354: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2bc354u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc358: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2bc358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc35c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2bc35cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc360: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2bc360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc364: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2bc364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2bc368: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2bc368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc36c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2bc36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bc370: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2bc370u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bc374: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2bc374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc378: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2bc378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bc37c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2BC37Cu;
    {
        const bool branch_taken_0x2bc37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC37Cu;
        // 0x2bc380: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc37c) {
            ctx->pc = 0x2BC3FCu;
            goto label_2bc3fc;
        }
    }
    ctx->pc = 0x2BC384u;
label_2bc384:
    // 0x2bc384: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BC384u;
    {
        const bool branch_taken_0x2bc384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC384u;
        // 0x2bc388: 0x26020060  addiu       $v0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc384) {
            ctx->pc = 0x2BC3C8u;
            goto label_2bc3c8;
        }
    }
    ctx->pc = 0x2BC38Cu;
    // 0x2bc38c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bc38cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc390: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2bc390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc394: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x2bc394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2bc398: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bc398u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc39c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2bc39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc3a0: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x2bc3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2bc3a4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2bc3a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bc3a8: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2bc3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc3ac: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x2bc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2bc3b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bc3b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc3b4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2bc3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc3b8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2bc3b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bc3bc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2bc3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc3c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BC3C0u;
    {
        const bool branch_taken_0x2bc3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC3C0u;
        // 0x2bc3c4: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3c0) {
            ctx->pc = 0x2BC3F8u;
            goto label_2bc3f8;
        }
    }
    ctx->pc = 0x2BC3C8u;
label_2bc3c8:
    // 0x2bc3c8: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2bc3c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2bc3cc: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2bc3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc3d0: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x2bc3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2bc3d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bc3d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc3d8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2bc3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc3dc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2bc3dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bc3e0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2bc3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc3e4: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2bc3e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bc3e8: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2bc3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc3ec: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2bc3ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bc3f0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2bc3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc3f4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2bc3f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2bc3f8:
    // 0x2bc3f8: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2bc3f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2bc3fc:
    // 0x2bc3fc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2bc3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2bc400: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BC400u;
    {
        const bool branch_taken_0x2bc400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC400u;
        // 0x2bc404: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc400) {
            ctx->pc = 0x2BC450u;
            goto label_2bc450;
        }
    }
    ctx->pc = 0x2BC408u;
    // 0x2bc408: 0xc6020034  lwc1        $f2, 0x34($s0)
    ctx->pc = 0x2bc408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc40c: 0x9222003a  lbu         $v0, 0x3A($s1)
    ctx->pc = 0x2bc40cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x2bc410: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2bc410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc414: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2bc414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc418: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2bc418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bc41c: 0x0  nop
    ctx->pc = 0x2bc41cu;
    // NOP
    // 0x2bc420: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2bc420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bc424: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x2bc424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bc428: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2bc428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2bc42c: 0x92220039  lbu         $v0, 0x39($s1)
    ctx->pc = 0x2bc42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
    // 0x2bc430: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x2bc430u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2bc434: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bc434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc438: 0x0  nop
    ctx->pc = 0x2bc438u;
    // NOP
    // 0x2bc43c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bc43cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bc440: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bc440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bc444: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2bc444u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2bc448: 0xc0b15b8  jal         func_2C56E0
    ctx->pc = 0x2BC448u;
    SET_GPR_U32(ctx, 31, 0x2BC450u);
    ctx->pc = 0x2BC44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC448u;
    // 0x2bc44c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C56E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C56E0u, 0x2BC448u, 0x2BC450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC450u;
label_2bc450:
    // 0x2bc450: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2bc450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2bc454: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bc454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc458: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2bc458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc45c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2bc45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bc460: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bc460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc464: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2bc464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc468: 0x92220038  lbu         $v0, 0x38($s1)
    ctx->pc = 0x2bc468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2bc46c: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x2bc46cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x2bc470: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BC470u;
    {
        const bool branch_taken_0x2bc470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc470) {
            ctx->pc = 0x2BC4B8u;
            goto label_2bc4b8;
        }
    }
    ctx->pc = 0x2BC478u;
    // 0x2bc478: 0x92220038  lbu         $v0, 0x38($s1)
    ctx->pc = 0x2bc478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2bc47c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2bc47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc480: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bc480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bc484: 0x0  nop
    ctx->pc = 0x2bc484u;
    // NOP
    // 0x2bc488: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bc488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bc48c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2bc48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc490: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bc490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bc494: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2bc494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2bc498: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bc498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bc49c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2bc49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2bc4a0: 0x92220038  lbu         $v0, 0x38($s1)
    ctx->pc = 0x2bc4a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2bc4a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc4a8: 0x0  nop
    ctx->pc = 0x2bc4a8u;
    // NOP
    // 0x2bc4ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bc4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bc4b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bc4b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc4b4: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2bc4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2bc4b8:
    // 0x2bc4b8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BC4B8u;
    SET_GPR_U32(ctx, 31, 0x2BC4C0u);
    ctx->pc = 0x2BC4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4B8u;
    // 0x2bc4bc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BC4B8u, 0x2BC4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4C0u;
label_2bc4c0:
    // 0x2bc4c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BC4C0u;
    SET_GPR_U32(ctx, 31, 0x2BC4C8u);
    ctx->pc = 0x2BC4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4C0u;
    // 0x2bc4c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BC4C0u, 0x2BC4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4C8u;
label_2bc4c8:
    // 0x2bc4c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BC4C8u;
    SET_GPR_U32(ctx, 31, 0x2BC4D0u);
    ctx->pc = 0x2BC4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4C8u;
    // 0x2bc4cc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BC4C8u, 0x2BC4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4D0u;
label_2bc4d0:
    // 0x2bc4d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BC4D0u;
    SET_GPR_U32(ctx, 31, 0x2BC4D8u);
    ctx->pc = 0x2BC4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4D0u;
    // 0x2bc4d4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BC4D0u, 0x2BC4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4D8u;
label_2bc4d8:
    // 0x2bc4d8: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2bc4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc4dc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2bc4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc4e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bc4e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bc4e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bc4e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bc4e8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2bc4e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bc4ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2bc4ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bc4f0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2bc4f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc4f4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2bc4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc4f8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2bc4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc4fc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2bc4fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bc500: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2bc500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bc504: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2bc504u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bc508: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2bc508u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2bc50c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2bc50cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc510: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2bc510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc514: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2bc514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc518: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2bc518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc51c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2bc51cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2bc520: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2bc520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2bc524: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2bc524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc528: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2bc528u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2bc52c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2bc52cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc530: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2bc530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc534: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x2bc534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc538: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2bc538u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2bc53c: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x2bc53cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2bc540: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2bc540u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc544: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2bc544u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2bc548: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2bc548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc54c: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2bc54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc550: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x2bc550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2bc554: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2bc554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2bc558: 0x54620032  bnel        $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2BC558u;
    {
        const bool branch_taken_0x2bc558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bc558) {
            ctx->pc = 0x2BC55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC558u;
            // 0x2bc55c: 0x92220034  lbu         $v0, 0x34($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC624u;
            goto label_2bc624;
        }
    }
    ctx->pc = 0x2BC560u;
    // 0x2bc560: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2bc560u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bc564: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x2bc564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bc568: 0x92240034  lbu         $a0, 0x34($s1)
    ctx->pc = 0x2bc568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2bc56c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2bc56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2bc570: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x2bc570u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2bc574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc578: 0x0  nop
    ctx->pc = 0x2bc578u;
    // NOP
    // 0x2bc57c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bc57cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bc580: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x2bc580u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bc584: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2bc584u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bc588: 0x0  nop
    ctx->pc = 0x2bc588u;
    // NOP
    // 0x2bc58c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2bc58cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bc590: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x2bc590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2bc594: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x2bc594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2bc598: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bc598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bc59c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2bc59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2bc5a0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2bc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2bc5a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bc5a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc5a8: 0x0  nop
    ctx->pc = 0x2bc5a8u;
    // NOP
    // 0x2bc5ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bc5acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bc5b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bc5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bc5b4: 0x0  nop
    ctx->pc = 0x2bc5b4u;
    // NOP
    // 0x2bc5b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bc5b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bc5bc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2bc5bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bc5c0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2bc5c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2bc5c4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2bc5c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2bc5c8: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bc5c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2bc5cc: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2bc5ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bc5d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2bc5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bc5d4: 0xa2050000  sb          $a1, 0x0($s0)
    ctx->pc = 0x2bc5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2bc5d8: 0x92220035  lbu         $v0, 0x35($s1)
    ctx->pc = 0x2bc5d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x2bc5dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc5e0: 0x0  nop
    ctx->pc = 0x2bc5e0u;
    // NOP
    // 0x2bc5e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bc5e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bc5e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bc5e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bc5ec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bc5ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bc5f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bc5f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bc5f4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2bc5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2bc5f8: 0xa2060001  sb          $a2, 0x1($s0)
    ctx->pc = 0x2bc5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bc5fc: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x2bc5fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x2bc600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc604: 0x0  nop
    ctx->pc = 0x2bc604u;
    // NOP
    // 0x2bc608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bc608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bc60c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2bc60cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bc610: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bc610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bc614: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bc614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bc618: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2bc618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2bc61c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2BC61Cu;
    {
        const bool branch_taken_0x2bc61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC61Cu;
        // 0x2bc620: 0xa2070002  sb          $a3, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc61c) {
            ctx->pc = 0x2BC730u;
            goto label_2bc730;
        }
    }
    ctx->pc = 0x2BC624u;
label_2bc624:
    // 0x2bc624: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x2bc624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x2bc628: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2BC628u;
    {
        const bool branch_taken_0x2bc628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc628) {
            ctx->pc = 0x2BC62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC628u;
            // 0x2bc62c: 0x92220035  lbu         $v0, 0x35($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC668u;
            goto label_2bc668;
        }
    }
    ctx->pc = 0x2BC630u;
    // 0x2bc630: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2bc630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bc634: 0x92230034  lbu         $v1, 0x34($s1)
    ctx->pc = 0x2bc634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2bc638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc63c: 0x0  nop
    ctx->pc = 0x2bc63cu;
    // NOP
    // 0x2bc640: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bc640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bc644: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bc644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc648: 0x0  nop
    ctx->pc = 0x2bc648u;
    // NOP
    // 0x2bc64c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bc64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bc650: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bc650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bc654: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bc654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bc658: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bc658u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bc65c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bc65cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bc660: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2bc660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc664: 0x92220035  lbu         $v0, 0x35($s1)
    ctx->pc = 0x2bc664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
label_2bc668:
    // 0x2bc668: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x2bc668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x2bc66c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2BC66Cu;
    {
        const bool branch_taken_0x2bc66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc66c) {
            ctx->pc = 0x2BC670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC66Cu;
            // 0x2bc670: 0x92220036  lbu         $v0, 0x36($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC6ACu;
            goto label_2bc6ac;
        }
    }
    ctx->pc = 0x2BC674u;
    // 0x2bc674: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2bc674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2bc678: 0x92230035  lbu         $v1, 0x35($s1)
    ctx->pc = 0x2bc678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x2bc67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc680: 0x0  nop
    ctx->pc = 0x2bc680u;
    // NOP
    // 0x2bc684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bc684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bc688: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bc688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc68c: 0x0  nop
    ctx->pc = 0x2bc68cu;
    // NOP
    // 0x2bc690: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bc690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bc694: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bc694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bc698: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bc698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bc69c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bc69cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bc6a0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bc6a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bc6a4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2bc6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc6a8: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x2bc6a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_2bc6ac:
    // 0x2bc6ac: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x2bc6acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x2bc6b0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2BC6B0u;
    {
        const bool branch_taken_0x2bc6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6b0) {
            ctx->pc = 0x2BC6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC6B0u;
            // 0x2bc6b4: 0x92220037  lbu         $v0, 0x37($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC6F0u;
            goto label_2bc6f0;
        }
    }
    ctx->pc = 0x2BC6B8u;
    // 0x2bc6b8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x2bc6b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bc6bc: 0x92230036  lbu         $v1, 0x36($s1)
    ctx->pc = 0x2bc6bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x2bc6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc6c4: 0x0  nop
    ctx->pc = 0x2bc6c4u;
    // NOP
    // 0x2bc6c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bc6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bc6cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bc6ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc6d0: 0x0  nop
    ctx->pc = 0x2bc6d0u;
    // NOP
    // 0x2bc6d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bc6d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bc6d8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bc6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bc6dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bc6dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bc6e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bc6e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bc6e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bc6e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bc6e8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x2bc6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc6ec: 0x92220037  lbu         $v0, 0x37($s1)
    ctx->pc = 0x2bc6ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
label_2bc6f0:
    // 0x2bc6f0: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x2bc6f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x2bc6f4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2BC6F4u;
    {
        const bool branch_taken_0x2bc6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6f4) {
            ctx->pc = 0x2BC6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC6F4u;
            // 0x2bc6f8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC734u;
            goto label_2bc734;
        }
    }
    ctx->pc = 0x2BC6FCu;
    // 0x2bc6fc: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x2bc6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2bc700: 0x92230037  lbu         $v1, 0x37($s1)
    ctx->pc = 0x2bc700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x2bc704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bc704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc708: 0x0  nop
    ctx->pc = 0x2bc708u;
    // NOP
    // 0x2bc70c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bc70cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bc710: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bc710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc714: 0x0  nop
    ctx->pc = 0x2bc714u;
    // NOP
    // 0x2bc718: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bc718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bc71c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bc71cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bc720: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bc720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bc724: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bc724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bc728: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bc728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bc72c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2bc72cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_2bc730:
    // 0x2bc730: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2bc730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2bc734:
    // 0x2bc734: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC734u;
    {
        const bool branch_taken_0x2bc734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC734u;
        // 0x2bc738: 0x2611003c  addiu       $s1, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc734) {
            ctx->pc = 0x2BC744u;
            goto label_2bc744;
        }
    }
    ctx->pc = 0x2BC73Cu;
    // 0x2bc73c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2bc73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2bc740: 0x2451afc0  addiu       $s1, $v0, -0x5040
    ctx->pc = 0x2bc740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
label_2bc744:
    // 0x2bc744: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2bc744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bc748: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bc748u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc74c: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2bc74cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc750: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bc750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc754: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x2bc754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc758: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2bc758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc75c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x2bc75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc760: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x2bc760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc764: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x2bc764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc768: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2bc768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2bc76c: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x2bc76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2bc770: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x2bc770u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2bc774: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x2bc774u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2bc778: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x2bc778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2bc77c: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x2bc77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2bc780: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bc780u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc784: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2bc784u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bc788: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bc788u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc78c: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x2bc78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc790: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2bc790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc794: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bc794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc798: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x2bc798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc79c: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x2bc79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc7a0: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x2bc7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc7a4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2bc7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2bc7a8: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2bc7a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2bc7ac: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2bc7acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2bc7b0: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x2bc7b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2bc7b4: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x2bc7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2bc7b8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2bc7b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bc7bc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2bc7bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bc7c0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bc7c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc7c4: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x2bc7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc7c8: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2bc7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc7cc: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x2bc7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc7d0: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x2bc7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc7d4: 0xc7a3010c  lwc1        $f3, 0x10C($sp)
    ctx->pc = 0x2bc7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc7d8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2bc7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2bc7dc: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x2bc7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2bc7e0: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x2bc7e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2bc7e4: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x2bc7e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2bc7e8: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x2bc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2bc7ec: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x2bc7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2bc7f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bc7f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc7f4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2bc7f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc7f8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bc7f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc7fc: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x2bc7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc800: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2bc800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc804: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bc804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc808: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x2bc808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc80c: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x2bc80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc810: 0xc7a3010c  lwc1        $f3, 0x10C($sp)
    ctx->pc = 0x2bc810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc814: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2bc814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2bc818: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x2bc818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2bc81c: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x2bc81cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2bc820: 0xe7a300ec  swc1        $f3, 0xEC($sp)
    ctx->pc = 0x2bc820u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2bc824: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2bc824u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bc828: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2bc828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc82c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bc82cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc830: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2bc830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc834: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2bc834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc838: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2bc838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc83c: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x2bc83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc840: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x2bc840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc844: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2bc844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2bc848: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x2bc848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2bc84c: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x2bc84cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2bc850: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x2bc850u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2bc854: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x2bc854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2bc858: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2bc858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bc85c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2bc85cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc860: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bc860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc864: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2bc864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc868: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2bc868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc86c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bc86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc870: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2bc870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc874: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x2bc874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc878: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x2bc878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc87c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2bc87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2bc880: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x2bc880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2bc884: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x2bc884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2bc888: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x2bc888u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2bc88c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bc88cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc890: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2bc890u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bc894: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bc894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc898: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2bc898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc89c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2bc89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc8a0: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x2bc8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc8a4: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x2bc8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc8a8: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x2bc8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc8ac: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2bc8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2bc8b0: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x2bc8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2bc8b4: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x2bc8b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2bc8b8: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x2bc8b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2bc8bc: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x2bc8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x2bc8c0: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x2bc8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2bc8c4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bc8c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc8c8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2bc8c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bc8cc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bc8ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bc8d0: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x2bc8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bc8d4: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x2bc8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc8d8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2bc8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2bc8dc: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2bc8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc8e0: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x2bc8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc8e4: 0xc7a2012c  lwc1        $f2, 0x12C($sp)
    ctx->pc = 0x2bc8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc8e8: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x2bc8e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2bc8ec: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2bc8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2bc8f0: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x2bc8f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2bc8f4: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x2bc8f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2bc8f8: 0x8a050003  lwl         $a1, 0x3($s0)
    ctx->pc = 0x2bc8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x2bc8fc: 0x9a050000  lwr         $a1, 0x0($s0)
    ctx->pc = 0x2bc8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x2bc900: 0xaba50113  swl         $a1, 0x113($sp)
    ctx->pc = 0x2bc900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bc904: 0xbba50110  swr         $a1, 0x110($sp)
    ctx->pc = 0x2bc904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bc908: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2bc908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bc90c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2bc90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bc910: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2bc910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bc914: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x2BC914u;
    SET_GPR_U32(ctx, 31, 0x2BC91Cu);
    ctx->pc = 0x2BC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC914u;
    // 0x2bc918: 0xbe2824  and         $a1, $a1, $fp (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x2BC914u, 0x2BC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC91Cu;
label_2bc91c:
    // 0x2bc91c: 0x8a040003  lwl         $a0, 0x3($s0)
    ctx->pc = 0x2bc91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2bc920: 0x9a040000  lwr         $a0, 0x0($s0)
    ctx->pc = 0x2bc920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x2bc924: 0xaba40113  swl         $a0, 0x113($sp)
    ctx->pc = 0x2bc924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bc928: 0xbba40110  swr         $a0, 0x110($sp)
    ctx->pc = 0x2bc928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bc92c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x2bc92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2bc930: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2bc930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bc934: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x2bc934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bc938: 0xc62d0014  lwc1        $f13, 0x14($s1)
    ctx->pc = 0x2bc938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bc93c: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x2BC93Cu;
    SET_GPR_U32(ctx, 31, 0x2BC944u);
    ctx->pc = 0x2BC940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC93Cu;
    // 0x2bc940: 0xbe2824  and         $a1, $a1, $fp (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x2BC93Cu, 0x2BC944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC944u;
label_2bc944:
    // 0x2bc944: 0x8a030003  lwl         $v1, 0x3($s0)
    ctx->pc = 0x2bc944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2bc948: 0x9a030000  lwr         $v1, 0x0($s0)
    ctx->pc = 0x2bc948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2bc94c: 0xaba30113  swl         $v1, 0x113($sp)
    ctx->pc = 0x2bc94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bc950: 0xbba30110  swr         $v1, 0x110($sp)
    ctx->pc = 0x2bc950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bc954: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x2bc954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x2bc958: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2bc958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bc95c: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x2bc95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bc960: 0xc62d000c  lwc1        $f13, 0xC($s1)
    ctx->pc = 0x2bc960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bc964: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x2BC964u;
    SET_GPR_U32(ctx, 31, 0x2BC96Cu);
    ctx->pc = 0x2BC968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC964u;
    // 0x2bc968: 0xbe2824  and         $a1, $a1, $fp (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x2BC964u, 0x2BC96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC96Cu;
label_2bc96c:
    // 0x2bc96c: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x2bc96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2bc970: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x2bc970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2bc974: 0xaba20113  swl         $v0, 0x113($sp)
    ctx->pc = 0x2bc974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bc978: 0xbba20110  swr         $v0, 0x110($sp)
    ctx->pc = 0x2bc978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bc97c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x2bc97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2bc980: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2bc980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bc984: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x2bc984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bc988: 0xc62d0014  lwc1        $f13, 0x14($s1)
    ctx->pc = 0x2bc988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bc98c: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x2BC98Cu;
    SET_GPR_U32(ctx, 31, 0x2BC994u);
    ctx->pc = 0x2BC990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC98Cu;
    // 0x2bc990: 0xbe2824  and         $a1, $a1, $fp (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x2BC98Cu, 0x2BC994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC994u;
label_2bc994:
    // 0x2bc994: 0x8a060003  lwl         $a2, 0x3($s0)
    ctx->pc = 0x2bc994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2bc998: 0x9a060000  lwr         $a2, 0x0($s0)
    ctx->pc = 0x2bc998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2bc99c: 0xaba60113  swl         $a2, 0x113($sp)
    ctx->pc = 0x2bc99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bc9a0: 0xbba60110  swr         $a2, 0x110($sp)
    ctx->pc = 0x2bc9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bc9a4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2bc9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2bc9a8: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2bc9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bc9ac: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2bc9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bc9b0: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2bc9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bc9b4: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x2BC9B4u;
    SET_GPR_U32(ctx, 31, 0x2BC9BCu);
    ctx->pc = 0x2BC9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9B4u;
    // 0x2bc9b8: 0xbe2824  and         $a1, $a1, $fp (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x2BC9B4u, 0x2BC9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9BCu;
label_2bc9bc:
    // 0x2bc9bc: 0x8a050003  lwl         $a1, 0x3($s0)
    ctx->pc = 0x2bc9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x2bc9c0: 0x9a050000  lwr         $a1, 0x0($s0)
    ctx->pc = 0x2bc9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x2bc9c4: 0xaba50113  swl         $a1, 0x113($sp)
    ctx->pc = 0x2bc9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bc9c8: 0xbba50110  swr         $a1, 0x110($sp)
    ctx->pc = 0x2bc9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2bc9cc: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2bc9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bc9d0: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x2bc9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x2bc9d4: 0xc62d001c  lwc1        $f13, 0x1C($s1)
    ctx->pc = 0x2bc9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2bc9d8: 0xbe2824  and         $a1, $a1, $fp
    ctx->pc = 0x2bc9d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 30));
    // 0x2bc9dc: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x2BC9DCu;
    SET_GPR_U32(ctx, 31, 0x2BC9E4u);
    ctx->pc = 0x2BC9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9DCu;
    // 0x2bc9e0: 0xc62c0018  lwc1        $f12, 0x18($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x2BC9DCu, 0x2BC9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9E4u;
label_2bc9e4:
    // 0x2bc9e4: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x2bc9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_2bc9e8:
    // 0x2bc9e8: 0x16c4fdb7  bne         $s6, $a0, . + 4 + (-0x249 << 2)
    ctx->pc = 0x2BC9E8u;
    {
        const bool branch_taken_0x2bc9e8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x2BC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9E8u;
        // 0x2bc9ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc9e8) {
            ctx->pc = 0x2BC0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc0c8;
        }
    }
    ctx->pc = 0x2BC9F0u;
label_2bc9f0:
    // 0x2bc9f0: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x2bc9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2bc9f4: 0xdfb10168  ld          $s1, 0x168($sp)
    ctx->pc = 0x2bc9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2bc9f8: 0xdfb20170  ld          $s2, 0x170($sp)
    ctx->pc = 0x2bc9f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bc9fc: 0xdfb30178  ld          $s3, 0x178($sp)
    ctx->pc = 0x2bc9fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2bca00: 0xdfb40180  ld          $s4, 0x180($sp)
    ctx->pc = 0x2bca00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bca04: 0xdfb50188  ld          $s5, 0x188($sp)
    ctx->pc = 0x2bca04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2bca08: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x2bca08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2bca0c: 0xdfb70198  ld          $s7, 0x198($sp)
    ctx->pc = 0x2bca0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2bca10: 0xdfbe01a0  ld          $fp, 0x1A0($sp)
    ctx->pc = 0x2bca10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2bca14: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x2bca14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2bca18: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x2bca18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bca1c: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2bca1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bca20: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA20u;
        // 0x2bca24: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCA28u;
}
