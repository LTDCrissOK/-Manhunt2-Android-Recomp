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

// Function: sub_001BB558
// Address: 0x1bb558 - 0x1bb758
void sub_001BB558_0x1bb558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB558_0x1bb558");
#endif

    switch (ctx->pc) {
        case 0x1bb5c8u: goto label_1bb5c8;
        case 0x1bb63cu: goto label_1bb63c;
        case 0x1bb668u: goto label_1bb668;
        case 0x1bb678u: goto label_1bb678;
        case 0x1bb680u: goto label_1bb680;
        default: break;
    }

    ctx->pc = 0x1bb558u;

    // 0x1bb558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb55c: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x1bb55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
    // 0x1bb560: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1bb560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1bb564: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb568: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x1bb568u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1bb56c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1bb56cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1bb570: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1bb570u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1bb574: 0x4600ad05  abs.s       $f20, $f21
    ctx->pc = 0x1bb574u;
    ctx->f[20] = FPU_ABS_S(ctx->f[21]);
    // 0x1bb578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb57c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bb57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bb580: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1bb580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb584: 0x0  nop
    ctx->pc = 0x1bb584u;
    // NOP
    // 0x1bb588: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB588u;
    {
        const bool branch_taken_0x1bb588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB588u;
        // 0x1bb58c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb588) {
            ctx->pc = 0x1BB59Cu;
            goto label_1bb59c;
        }
    }
    ctx->pc = 0x1BB590u;
    // 0x1bb590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bb590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb594: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1BB594u;
    {
        const bool branch_taken_0x1bb594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB594u;
        // 0x1bb598: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb594) {
            ctx->pc = 0x1BB738u;
            goto label_1bb738;
        }
    }
    ctx->pc = 0x1BB59Cu;
label_1bb59c:
    // 0x1bb59c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1bb59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb5a0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1bb5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1bb5a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb5a8: 0x0  nop
    ctx->pc = 0x1bb5a8u;
    // NOP
    // 0x1bb5ac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bb5acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb5b0: 0x0  nop
    ctx->pc = 0x1bb5b0u;
    // NOP
    // 0x1bb5b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB5B4u;
    {
        const bool branch_taken_0x1bb5b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5B4u;
        // 0x1bb5b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5b4) {
            ctx->pc = 0x1BB5C0u;
            goto label_1bb5c0;
        }
    }
    ctx->pc = 0x1BB5BCu;
    // 0x1bb5bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb5c0:
    // 0x1bb5c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB5C0u;
    {
        const bool branch_taken_0x1bb5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5c0) {
            ctx->pc = 0x1BB5D8u;
            goto label_1bb5d8;
        }
    }
    ctx->pc = 0x1BB5C8u;
label_1bb5c8:
    // 0x1bb5c8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1bb5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1bb5cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb5d0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1BB5D0u;
    {
        const bool branch_taken_0x1bb5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5d0) {
            ctx->pc = 0x1BB6C8u;
            goto label_1bb6c8;
        }
    }
    ctx->pc = 0x1BB5D8u;
label_1bb5d8:
    // 0x1bb5d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bb5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bb5dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb5e0: 0x0  nop
    ctx->pc = 0x1bb5e0u;
    // NOP
    // 0x1bb5e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bb5e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb5e8: 0x0  nop
    ctx->pc = 0x1bb5e8u;
    // NOP
    // 0x1bb5ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB5ECu;
    {
        const bool branch_taken_0x1bb5ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB5ECu;
        // 0x1bb5f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5ec) {
            ctx->pc = 0x1BB5F8u;
            goto label_1bb5f8;
        }
    }
    ctx->pc = 0x1BB5F4u;
    // 0x1bb5f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb5f8:
    // 0x1bb5f8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1BB5F8u;
    {
        const bool branch_taken_0x1bb5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5f8) {
            ctx->pc = 0x1BB6C0u;
            goto label_1bb6c0;
        }
    }
    ctx->pc = 0x1BB600u;
    // 0x1bb600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bb600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb604: 0x0  nop
    ctx->pc = 0x1bb604u;
    // NOP
    // 0x1bb608: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1bb608u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb60c: 0x0  nop
    ctx->pc = 0x1bb60cu;
    // NOP
    // 0x1bb610: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB610u;
    {
        const bool branch_taken_0x1bb610 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB610u;
        // 0x1bb614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb610) {
            ctx->pc = 0x1BB61Cu;
            goto label_1bb61c;
        }
    }
    ctx->pc = 0x1BB618u;
    // 0x1bb618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb61c:
    // 0x1bb61c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BB61Cu;
    {
        const bool branch_taken_0x1bb61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb61c) {
            ctx->pc = 0x1BB6C0u;
            goto label_1bb6c0;
        }
    }
    ctx->pc = 0x1BB624u;
    // 0x1bb624: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1bb624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1bb628: 0x8c621004  lw          $v0, 0x1004($v1)
    ctx->pc = 0x1bb628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x1bb62c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BB62Cu;
    {
        const bool branch_taken_0x1bb62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb62c) {
            ctx->pc = 0x1BB660u;
            goto label_1bb660;
        }
    }
    ctx->pc = 0x1BB634u;
    // 0x1bb634: 0xc06e0fa  jal         func_1B83E8
    ctx->pc = 0x1BB634u;
    SET_GPR_U32(ctx, 31, 0x1BB63Cu);
    ctx->pc = 0x1BB638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB634u;
    // 0x1bb638: 0x8c640ff0  lw          $a0, 0xFF0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x1BB634u, 0x1BB63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB63Cu;
label_1bb63c:
    // 0x1bb63c: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1bb63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1bb640: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb644: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BB644u;
    {
        const bool branch_taken_0x1bb644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb644) {
            ctx->pc = 0x1BB6C8u;
            goto label_1bb6c8;
        }
    }
    ctx->pc = 0x1BB64Cu;
    // 0x1bb64c: 0x3c01443b  lui         $at, 0x443B
    ctx->pc = 0x1bb64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17467 << 16));
    // 0x1bb650: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1bb650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x1bb654: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb658: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1BB658u;
    {
        const bool branch_taken_0x1bb658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb658) {
            ctx->pc = 0x1BB6C8u;
            goto label_1bb6c8;
        }
    }
    ctx->pc = 0x1BB660u;
label_1bb660:
    // 0x1bb660: 0xc06e0fa  jal         func_1B83E8
    ctx->pc = 0x1BB660u;
    SET_GPR_U32(ctx, 31, 0x1BB668u);
    ctx->pc = 0x1BB664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB660u;
    // 0x1bb664: 0x8c640ff0  lw          $a0, 0xFF0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E8u, 0x1BB660u, 0x1BB668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB668u;
label_1bb668:
    // 0x1bb668: 0x1040ffd7  beqz        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1BB668u;
    {
        const bool branch_taken_0x1bb668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb668) {
            ctx->pc = 0x1BB5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb5c8;
        }
    }
    ctx->pc = 0x1BB670u;
    // 0x1bb670: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1BB670u;
    SET_GPR_U32(ctx, 31, 0x1BB678u);
    ctx->pc = 0x1BB674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB670u;
    // 0x1bb674: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1BB670u, 0x1BB678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB678u;
label_1bb678:
    // 0x1bb678: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x1BB678u;
    SET_GPR_U32(ctx, 31, 0x1BB680u);
    ctx->pc = 0x1BB67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB678u;
    // 0x1bb67c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x1BB678u, 0x1BB680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB680u;
label_1bb680:
    // 0x1bb680: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x1bb680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x1bb684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb688: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BB688u;
    {
        const bool branch_taken_0x1bb688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb688) {
            ctx->pc = 0x1BB6C8u;
            goto label_1bb6c8;
        }
    }
    ctx->pc = 0x1BB690u;
    // 0x1bb690: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1bb690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1bb694: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x1bb694u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
    // 0x1bb698: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x1bb698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x1bb69c: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x1bb69cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
    // 0x1bb6a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bb6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bb6a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1bb6a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1bb6a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB6A8u;
    {
        const bool branch_taken_0x1bb6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6a8) {
            ctx->pc = 0x1BB6C8u;
            goto label_1bb6c8;
        }
    }
    ctx->pc = 0x1BB6B0u;
    // 0x1bb6b0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1bb6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1bb6b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb6b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB6B8u;
    {
        const bool branch_taken_0x1bb6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6b8) {
            ctx->pc = 0x1BB6C8u;
            goto label_1bb6c8;
        }
    }
    ctx->pc = 0x1BB6C0u;
label_1bb6c0:
    // 0x1bb6c0: 0x3c014307  lui         $at, 0x4307
    ctx->pc = 0x1bb6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17159 << 16));
    // 0x1bb6c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bb6c8:
    // 0x1bb6c8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1bb6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1bb6cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb6d0: 0x0  nop
    ctx->pc = 0x1bb6d0u;
    // NOP
    // 0x1bb6d4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1bb6d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb6d8: 0x0  nop
    ctx->pc = 0x1bb6d8u;
    // NOP
    // 0x1bb6dc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB6DCu;
    {
        const bool branch_taken_0x1bb6dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb6dc) {
            ctx->pc = 0x1BB6FCu;
            goto label_1bb6fc;
        }
    }
    ctx->pc = 0x1BB6E4u;
    // 0x1bb6e4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1bb6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1bb6e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bb6e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bb6ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb6ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb6f0: 0x0  nop
    ctx->pc = 0x1bb6f0u;
    // NOP
    // 0x1bb6f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bb6f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bb6f8: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x1bb6f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1bb6fc:
    // 0x1bb6fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bb6fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb700: 0x0  nop
    ctx->pc = 0x1bb700u;
    // NOP
    // 0x1bb704: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1bb704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb708: 0x0  nop
    ctx->pc = 0x1bb708u;
    // NOP
    // 0x1bb70c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BB70Cu;
    {
        const bool branch_taken_0x1bb70c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb70c) {
            ctx->pc = 0x1BB710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB70Cu;
            // 0x1bb710: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB714u;
            goto label_1bb714;
        }
    }
    ctx->pc = 0x1BB714u;
label_1bb714:
    // 0x1bb714: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1bb714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1bb718: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x1bb718u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb71c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bb71cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bb720: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x1bb720u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x1bb724: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1bb724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb728: 0x0  nop
    ctx->pc = 0x1bb728u;
    // NOP
    // 0x1bb72c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BB72Cu;
    {
        const bool branch_taken_0x1bb72c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb72c) {
            ctx->pc = 0x1BB730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB72Cu;
            // 0x1bb730: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB734u;
            goto label_1bb734;
        }
    }
    ctx->pc = 0x1BB734u;
label_1bb734:
    // 0x1bb734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb738:
    // 0x1bb738: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bb738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb73c: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x1bb73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bb740: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1bb740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bb744: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB744u;
        // 0x1bb748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB74Cu;
    // 0x1bb74c: 0x0  nop
    ctx->pc = 0x1bb74cu;
    // NOP
    // 0x1bb750: 0xe4810030  swc1        $f1, 0x30($a0)
    ctx->pc = 0x1bb750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1bb754: 0x0  nop
    ctx->pc = 0x1bb754u;
    // NOP
    ctx->pc = 0x1bb758u;
}
