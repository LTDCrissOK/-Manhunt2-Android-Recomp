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

// Function: sub_0020FF70
// Address: 0x20ff70 - 0x210120
void sub_0020FF70_0x20ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FF70_0x20ff70");
#endif

    switch (ctx->pc) {
        case 0x20ffc0u: goto label_20ffc0;
        case 0x20ffd0u: goto label_20ffd0;
        case 0x20ffe0u: goto label_20ffe0;
        case 0x20fff4u: goto label_20fff4;
        case 0x20fffcu: goto label_20fffc;
        case 0x210084u: goto label_210084;
        case 0x21009cu: goto label_21009c;
        case 0x2100c8u: goto label_2100c8;
        case 0x2100dcu: goto label_2100dc;
        case 0x2100ecu: goto label_2100ec;
        default: break;
    }

    ctx->pc = 0x20ff70u;

    // 0x20ff70: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x20ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x20ff74: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20ff74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20ff78: 0x90625aec  lbu         $v0, 0x5AEC($v1)
    ctx->pc = 0x20ff78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x595AECu));
    // 0x20ff7c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x20ff7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x20ff80: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x20ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x20ff84: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x20ff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x20ff88: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x20ff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x20ff8c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x20ff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x20ff90: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x20ff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x20ff94: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x20FF94u;
    {
        const bool branch_taken_0x20ff94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF94u;
        // 0x20ff98: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff94) {
            ctx->pc = 0x2100B8u;
            goto label_2100b8;
        }
    }
    ctx->pc = 0x20FF9Cu;
    // 0x20ff9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20ff9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x20ffa0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20ffa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20ffa4: 0x249001d8  addiu       $s0, $a0, 0x1D8
    ctx->pc = 0x20ffa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
    // 0x20ffa8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x20ffa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20ffac: 0x3c14005a  lui         $s4, 0x5A
    ctx->pc = 0x20ffacu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)90 << 16));
    // 0x20ffb0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20ffb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ffb4: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x20ffb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20ffb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20ffbc: 0x0  nop
    ctx->pc = 0x20ffbcu;
    // NOP
label_20ffc0:
    // 0x20ffc0: 0x50800038  beql        $a0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x20FFC0u;
    {
        const bool branch_taken_0x20ffc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ffc0) {
            ctx->pc = 0x20FFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FFC0u;
            // 0x20ffc4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2100A4u;
            goto label_2100a4;
        }
    }
    ctx->pc = 0x20FFC8u;
    // 0x20ffc8: 0xc0b10c0  jal         func_2C4300
    ctx->pc = 0x20FFC8u;
    SET_GPR_U32(ctx, 31, 0x20FFD0u);
    ctx->pc = 0x2C4300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4300u, 0x20FFC8u, 0x20FFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFD0u;
label_20ffd0:
    // 0x20ffd0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x20FFD0u;
    {
        const bool branch_taken_0x20ffd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ffd0) {
            ctx->pc = 0x21008Cu;
            goto label_21008c;
        }
    }
    ctx->pc = 0x20FFD8u;
    // 0x20ffd8: 0xc0b1198  jal         func_2C4660
    ctx->pc = 0x20FFD8u;
    SET_GPR_U32(ctx, 31, 0x20FFE0u);
    ctx->pc = 0x20FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFD8u;
    // 0x20ffdc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4660u, 0x20FFD8u, 0x20FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFE0u;
label_20ffe0:
    // 0x20ffe0: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x20FFE0u;
    {
        const bool branch_taken_0x20ffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ffe0) {
            ctx->pc = 0x20FFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FFE0u;
            // 0x20ffe4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2100A4u;
            goto label_2100a4;
        }
    }
    ctx->pc = 0x20FFE8u;
    // 0x20ffe8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20ffec: 0xc0b112e  jal         func_2C44B8
    ctx->pc = 0x20FFECu;
    SET_GPR_U32(ctx, 31, 0x20FFF4u);
    ctx->pc = 0x20FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFECu;
    // 0x20fff0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C44B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C44B8u, 0x20FFECu, 0x20FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFF4u;
label_20fff4:
    // 0x20fff4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20FFF4u;
    SET_GPR_U32(ctx, 31, 0x20FFFCu);
    ctx->pc = 0x20FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FFF4u;
    // 0x20fff8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20FFF4u, 0x20FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FFFCu;
label_20fffc:
    // 0x20fffc: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x20fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x210000: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x210000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x210004: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x210004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210008: 0xc7a70008  lwc1        $f7, 0x8($sp)
    ctx->pc = 0x210008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x21000c: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x21000cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x210010: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x210010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210014: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x210014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x210018: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x210018u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x21001c: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x21001cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x210020: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x210020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x210024: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x210024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x210028: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x210028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x21002c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x21002cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x210030: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x210030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x210034: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x210034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x210038: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x210038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21003c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x21003cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x210040: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x210040u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x210044: 0x4604231c  madd.s      $f12, $f4, $f4
    ctx->pc = 0x210044u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x210048: 0x460c0304  c1          0xC0304
    ctx->pc = 0x210048u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x21004c: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x21004cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x210050: 0x26846920  addiu       $a0, $s4, 0x6920
    ctx->pc = 0x210050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 26912));
    // 0x210054: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x210054u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x210058: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x210058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21005c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x21005cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x210060: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x210060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210064: 0x46054200  add.s       $f8, $f8, $f5
    ctx->pc = 0x210064u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[5]);
    // 0x210068: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x210068u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x21006c: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x21006cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x210070: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x210070u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x210074: 0xe7a80020  swc1        $f8, 0x20($sp)
    ctx->pc = 0x210074u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x210078: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x210078u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x21007c: 0xc0c266a  jal         func_3099A8
    ctx->pc = 0x21007Cu;
    SET_GPR_U32(ctx, 31, 0x210084u);
    ctx->pc = 0x210080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21007Cu;
    // 0x210080: 0xe7a60028  swc1        $f6, 0x28($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3099A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3099A8u, 0x21007Cu, 0x210084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210084u;
label_210084:
    // 0x210084: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x210084u;
    {
        const bool branch_taken_0x210084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210084u;
        // 0x210088: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210084) {
            ctx->pc = 0x2100A4u;
            goto label_2100a4;
        }
    }
    ctx->pc = 0x21008Cu;
label_21008c:
    // 0x21008c: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x21008Cu;
    {
        const bool branch_taken_0x21008c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x21008c) {
            ctx->pc = 0x210090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21008Cu;
            // 0x210090: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2100A4u;
            goto label_2100a4;
        }
    }
    ctx->pc = 0x210094u;
    // 0x210094: 0xc0b0f1a  jal         func_2C3C68
    ctx->pc = 0x210094u;
    SET_GPR_U32(ctx, 31, 0x21009Cu);
    ctx->pc = 0x210098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210094u;
    // 0x210098: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C68u, 0x210094u, 0x21009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21009Cu;
label_21009c:
    // 0x21009c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x21009cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2100a0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2100a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2100a4:
    // 0x2100a4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2100a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2100a8: 0x623ffc5  bgezl       $s1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2100A8u;
    {
        const bool branch_taken_0x2100a8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2100a8) {
            ctx->pc = 0x2100ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2100A8u;
            // 0x2100ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ffc0;
        }
    }
    ctx->pc = 0x2100B0u;
    // 0x2100b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2100B0u;
    {
        const bool branch_taken_0x2100b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100B0u;
        // 0x2100b4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100b0) {
            ctx->pc = 0x210100u;
            goto label_210100;
        }
    }
    ctx->pc = 0x2100B8u;
label_2100b8:
    // 0x2100b8: 0x249001d8  addiu       $s0, $a0, 0x1D8
    ctx->pc = 0x2100b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
    // 0x2100bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2100bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2100c0: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x2100c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2100c4: 0x0  nop
    ctx->pc = 0x2100c4u;
    // NOP
label_2100c8:
    // 0x2100c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2100c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2100cc: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2100CCu;
    {
        const bool branch_taken_0x2100cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2100cc) {
            ctx->pc = 0x2100D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2100CCu;
            // 0x2100d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2100F4u;
            goto label_2100f4;
        }
    }
    ctx->pc = 0x2100D4u;
    // 0x2100d4: 0xc0b10c0  jal         func_2C4300
    ctx->pc = 0x2100D4u;
    SET_GPR_U32(ctx, 31, 0x2100DCu);
    ctx->pc = 0x2C4300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4300u, 0x2100D4u, 0x2100DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100DCu;
label_2100dc:
    // 0x2100dc: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2100DCu;
    {
        const bool branch_taken_0x2100dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2100dc) {
            ctx->pc = 0x2100E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2100DCu;
            // 0x2100e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2100F4u;
            goto label_2100f4;
        }
    }
    ctx->pc = 0x2100E4u;
    // 0x2100e4: 0xc0b0f1a  jal         func_2C3C68
    ctx->pc = 0x2100E4u;
    SET_GPR_U32(ctx, 31, 0x2100ECu);
    ctx->pc = 0x2100E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100E4u;
    // 0x2100e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C68u, 0x2100E4u, 0x2100ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100ECu;
label_2100ec:
    // 0x2100ec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2100ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2100f0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2100f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2100f4:
    // 0x2100f4: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2100F4u;
    {
        const bool branch_taken_0x2100f4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2100F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100F4u;
        // 0x2100f8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100f4) {
            ctx->pc = 0x2100C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2100c8;
        }
    }
    ctx->pc = 0x2100FCu;
    // 0x2100fc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2100fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_210100:
    // 0x210100: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x210100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x210104: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x210104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210108: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x210108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21010c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x21010cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210110: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x210110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x210114: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x210114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x210118: 0x3e00008  jr          $ra
    ctx->pc = 0x210118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210118u;
        // 0x21011c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210120u;
}
