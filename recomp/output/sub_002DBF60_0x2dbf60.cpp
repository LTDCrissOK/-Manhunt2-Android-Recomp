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

// Function: sub_002DBF60
// Address: 0x2dbf60 - 0x2dc0d8
void sub_002DBF60_0x2dbf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBF60_0x2dbf60");
#endif

    switch (ctx->pc) {
        case 0x2dbfb4u: goto label_2dbfb4;
        case 0x2dbfc8u: goto label_2dbfc8;
        case 0x2dbfdcu: goto label_2dbfdc;
        case 0x2dbfe8u: goto label_2dbfe8;
        case 0x2dbff4u: goto label_2dbff4;
        case 0x2dc018u: goto label_2dc018;
        case 0x2dc028u: goto label_2dc028;
        case 0x2dc05cu: goto label_2dc05c;
        case 0x2dc06cu: goto label_2dc06c;
        case 0x2dc0a4u: goto label_2dc0a4;
        default: break;
    }

    ctx->pc = 0x2dbf60u;

    // 0x2dbf60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dbf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dbf64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2dbf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2dbf68: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2dbf68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbf70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dbf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dbf74: 0x131280  sll         $v0, $s3, 10
    ctx->pc = 0x2dbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
    // 0x2dbf78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dbf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dbf7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dbf7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf80: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2dbf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2dbf84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2dbf84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf88: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2dbf88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2dbf8c: 0x24420490  addiu       $v0, $v0, 0x490
    ctx->pc = 0x2dbf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1168));
    // 0x2dbf90: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2dbf90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2dbf94: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x2dbf94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dbf98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2dbf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2dbf9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2dbf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbfa0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dbfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dbfa4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x2dbfa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbfa8: 0xc60c63c8  lwc1        $f12, 0x63C8($s0)
    ctx->pc = 0x2dbfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 25544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dbfac: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x2DBFACu;
    SET_GPR_U32(ctx, 31, 0x2DBFB4u);
    ctx->pc = 0x2DBFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBFACu;
    // 0x2dbfb0: 0x8e0563c4  lw          $a1, 0x63C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x2DBFACu, 0x2DBFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFB4u;
label_2dbfb4:
    // 0x2dbfb4: 0xc60c63c8  lwc1        $f12, 0x63C8($s0)
    ctx->pc = 0x2dbfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 25544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dbfb8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2dbfb8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2dbfbc: 0x8e0563c4  lw          $a1, 0x63C4($s0)
    ctx->pc = 0x2dbfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25540)));
    // 0x2dbfc0: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x2DBFC0u;
    SET_GPR_U32(ctx, 31, 0x2DBFC8u);
    ctx->pc = 0x2DBFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBFC0u;
    // 0x2dbfc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x2DBFC0u, 0x2DBFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFC8u;
label_2dbfc8:
    // 0x2dbfc8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2dbfc8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2dbfcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbfd0: 0x4614ab00  add.s       $f12, $f21, $f20
    ctx->pc = 0x2dbfd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2dbfd4: 0xc0b7036  jal         func_2DC0D8
    ctx->pc = 0x2DBFD4u;
    SET_GPR_U32(ctx, 31, 0x2DBFDCu);
    ctx->pc = 0x2DBFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBFD4u;
    // 0x2dbfd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC0D8u, 0x2DBFD4u, 0x2DBFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFDCu;
label_2dbfdc:
    // 0x2dbfdc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBFDCu;
    {
        const bool branch_taken_0x2dbfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbfdc) {
            ctx->pc = 0x2DBFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBFDCu;
            // 0x2dbfe0: 0xc6000418  lwc1        $f0, 0x418($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBFFCu;
            goto label_2dbffc;
        }
    }
    ctx->pc = 0x2DBFE4u;
    // 0x2dbfe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dbfe8:
    // 0x2dbfe8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2dbfe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbfec: 0xc0b6f7e  jal         func_2DBDF8
    ctx->pc = 0x2DBFECu;
    SET_GPR_U32(ctx, 31, 0x2DBFF4u);
    ctx->pc = 0x2DBFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBFECu;
    // 0x2dbff0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBDF8u, 0x2DBFECu, 0x2DBFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBFF4u;
label_2dbff4:
    // 0x2dbff4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2DBFF4u;
    {
        const bool branch_taken_0x2dbff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFF4u;
        // 0x2dbff8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbff4) {
            ctx->pc = 0x2DC0A8u;
            goto label_2dc0a8;
        }
    }
    ctx->pc = 0x2DBFFCu;
label_2dbffc:
    // 0x2dbffc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2dbffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc000: 0x0  nop
    ctx->pc = 0x2dc000u;
    // NOP
    // 0x2dc004: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC004u;
    {
        const bool branch_taken_0x2dc004 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC004u;
        // 0x2dc008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc004) {
            ctx->pc = 0x2DC020u;
            goto label_2dc020;
        }
    }
    ctx->pc = 0x2DC00Cu;
    // 0x2dc00c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dc00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc010: 0xc0b703e  jal         func_2DC0F8
    ctx->pc = 0x2DC010u;
    SET_GPR_U32(ctx, 31, 0x2DC018u);
    ctx->pc = 0x2DC014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC010u;
    // 0x2dc014: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC0F8u, 0x2DC010u, 0x2DC018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC018u;
label_2dc018:
    // 0x2dc018: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DC018u;
    {
        const bool branch_taken_0x2dc018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC018u;
        // 0x2dc01c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc018) {
            ctx->pc = 0x2DC0ACu;
            goto label_2dc0ac;
        }
    }
    ctx->pc = 0x2DC020u;
label_2dc020:
    // 0x2dc020: 0xc0aedbe  jal         func_2BB6F8
    ctx->pc = 0x2DC020u;
    SET_GPR_U32(ctx, 31, 0x2DC028u);
    ctx->pc = 0x2DC024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC020u;
    // 0x2dc024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6F8u, 0x2DC020u, 0x2DC028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC028u;
label_2dc028:
    // 0x2dc028: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dc028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2dc02c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DC02Cu;
    {
        const bool branch_taken_0x2dc02c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC02Cu;
        // 0x2dc030: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc02c) {
            ctx->pc = 0x2DC078u;
            goto label_2dc078;
        }
    }
    ctx->pc = 0x2DC034u;
    // 0x2dc034: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2dc034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dc038: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x2dc038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2dc03c: 0x96540000  lhu         $s4, 0x0($s2)
    ctx->pc = 0x2dc03cu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2dc040: 0x5683000e  bnel        $s4, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2DC040u;
    {
        const bool branch_taken_0x2dc040 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dc040) {
            ctx->pc = 0x2DC044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC040u;
            // 0x2dc044: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC07Cu;
            goto label_2dc07c;
        }
    }
    ctx->pc = 0x2DC048u;
    // 0x2dc048: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x2dc048u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dc04c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc050: 0xc60c63c8  lwc1        $f12, 0x63C8($s0)
    ctx->pc = 0x2dc050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 25544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc054: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x2DC054u;
    SET_GPR_U32(ctx, 31, 0x2DC05Cu);
    ctx->pc = 0x2DC058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC054u;
    // 0x2dc058: 0x8e0563c4  lw          $a1, 0x63C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x2DC054u, 0x2DC05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC05Cu;
label_2dc05c:
    // 0x2dc05c: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x2dc05cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2dc060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc064: 0xc0b7036  jal         func_2DC0D8
    ctx->pc = 0x2DC064u;
    SET_GPR_U32(ctx, 31, 0x2DC06Cu);
    ctx->pc = 0x2DC068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC064u;
    // 0x2dc068: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC0D8u, 0x2DC064u, 0x2DC06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC06Cu;
label_2dc06c:
    // 0x2dc06c: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2DC06Cu;
    {
        const bool branch_taken_0x2dc06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC06Cu;
        // 0x2dc070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc06c) {
            ctx->pc = 0x2DBFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbfe8;
        }
    }
    ctx->pc = 0x2DC074u;
    // 0x2dc074: 0xa6540000  sh          $s4, 0x0($s2)
    ctx->pc = 0x2dc074u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 20));
label_2dc078:
    // 0x2dc078: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2dc078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2dc07c:
    // 0x2dc07c: 0x2e620021  sltiu       $v0, $s3, 0x21
    ctx->pc = 0x2dc07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x2dc080: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC080u;
    {
        const bool branch_taken_0x2dc080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc080) {
            ctx->pc = 0x2DC084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC080u;
            // 0x2dc084: 0x132a80  sll         $a1, $s3, 10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC090u;
            goto label_2dc090;
        }
    }
    ctx->pc = 0x2DC088u;
    // 0x2dc088: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC088u;
    {
        const bool branch_taken_0x2dc088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC088u;
        // 0x2dc08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc088) {
            ctx->pc = 0x2DC0A8u;
            goto label_2dc0a8;
        }
    }
    ctx->pc = 0x2DC090u;
label_2dc090:
    // 0x2dc090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc094: 0x24a50490  addiu       $a1, $a1, 0x490
    ctx->pc = 0x2dc094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1168));
    // 0x2dc098: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dc098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc09c: 0xc0b6f7e  jal         func_2DBDF8
    ctx->pc = 0x2DC09Cu;
    SET_GPR_U32(ctx, 31, 0x2DC0A4u);
    ctx->pc = 0x2DC0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC09Cu;
    // 0x2dc0a0: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBDF8u, 0x2DC09Cu, 0x2DC0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC0A4u;
label_2dc0a4:
    // 0x2dc0a4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dc0a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dc0a8:
    // 0x2dc0a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dc0a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc0ac:
    // 0x2dc0ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dc0acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dc0b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dc0b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc0b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2dc0b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dc0b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2dc0b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc0bc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2dc0bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dc0c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dc0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc0c4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2dc0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dc0c8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2dc0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0CCu;
        // 0x2dc0d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC0D4u;
    // 0x2dc0d4: 0x0  nop
    ctx->pc = 0x2dc0d4u;
    // NOP
    ctx->pc = 0x2dc0d8u;
}
