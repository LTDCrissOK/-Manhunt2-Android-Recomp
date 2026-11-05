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

// Function: sub_001F0FF8
// Address: 0x1f0ff8 - 0x1f1230
void sub_001F0FF8_0x1f0ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0FF8_0x1f0ff8");
#endif

    switch (ctx->pc) {
        case 0x1f1050u: goto label_1f1050;
        case 0x1f1078u: goto label_1f1078;
        case 0x1f108cu: goto label_1f108c;
        case 0x1f10b8u: goto label_1f10b8;
        case 0x1f10e0u: goto label_1f10e0;
        case 0x1f1118u: goto label_1f1118;
        case 0x1f112cu: goto label_1f112c;
        case 0x1f11ccu: goto label_1f11cc;
        default: break;
    }

    ctx->pc = 0x1f0ff8u;

    // 0x1f0ff8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f0ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f0ffc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f0ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f1000: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f1000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f1004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1008: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1f1008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1f100c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1f100cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f1010: 0x202b821  addu        $s7, $s0, $v0
    ctx->pc = 0x1f1010u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f1014: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1f1014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1f1018: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1f1018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1f101c: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x1f101cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1020: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1f1020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1f1024: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f1024u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1028: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1f1028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1f102c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1f102cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1030: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1f1030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1f1034: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1f1034u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1038: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1f1038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1f103c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f1040: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1f1040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1f1044: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1f1044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x1f1048: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f1048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f104c: 0x0  nop
    ctx->pc = 0x1f104cu;
    // NOP
label_1f1050:
    // 0x1f1050: 0xc6601594  lwc1        $f0, 0x1594($s3)
    ctx->pc = 0x1f1050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 5524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1054: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1f1054u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1058: 0x0  nop
    ctx->pc = 0x1f1058u;
    // NOP
    // 0x1f105c: 0x4501005c  bc1t        . + 4 + (0x5C << 2)
    ctx->pc = 0x1F105Cu;
    {
        const bool branch_taken_0x1f105c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F105Cu;
        // 0x1f1060: 0x142900  sll         $a1, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f105c) {
            ctx->pc = 0x1F11D0u;
            goto label_1f11d0;
        }
    }
    ctx->pc = 0x1F1064u;
    // 0x1f1064: 0x34169590  ori         $s6, $zero, 0x9590
    ctx->pc = 0x1f1064u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38288);
    // 0x1f1068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f106c: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x1f106cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x1f1070: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1F1070u;
    SET_GPR_U32(ctx, 31, 0x1F1078u);
    ctx->pc = 0x1F1074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1070u;
    // 0x1f1074: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F1070u, 0x1F1078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1078u;
label_1f1078:
    // 0x1f1078: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f1078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f107c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f107cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f1080: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1f1080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1f1084: 0xc07bc8c  jal         func_1EF230
    ctx->pc = 0x1F1084u;
    SET_GPR_U32(ctx, 31, 0x1F108Cu);
    ctx->pc = 0x1F1088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1084u;
    // 0x1f1088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F1084u, 0x1F108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F108Cu;
label_1f108c:
    // 0x1f108c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1f108cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1f1090: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f1090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f1094: 0x24529c38  addiu       $s2, $v0, -0x63C8
    ctx->pc = 0x1f1094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941752));
    // 0x1f1098: 0xa20300fc  sb          $v1, 0xFC($s0)
    ctx->pc = 0x1f1098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f109c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f109cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f10a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f10a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10a4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f10a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f10a8: 0x2446ece8  addiu       $a2, $v0, -0x1318
    ctx->pc = 0x1f10a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962408));
    // 0x1f10ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f10acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10b0: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F10B0u;
    SET_GPR_U32(ctx, 31, 0x1F10B8u);
    ctx->pc = 0x1F10B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10B0u;
    // 0x1f10b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F10B0u, 0x1F10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10B8u;
label_1f10b8:
    // 0x1f10b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f10b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10bc: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F10BCu;
    {
        const bool branch_taken_0x1f10bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10BCu;
        // 0x1f10c0: 0x93a20029  lbu         $v0, 0x29($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f10bc) {
            ctx->pc = 0x1F10E8u;
            goto label_1f10e8;
        }
    }
    ctx->pc = 0x1F10C4u;
    // 0x1f10c4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f10c8: 0x920500fc  lbu         $a1, 0xFC($s0)
    ctx->pc = 0x1f10c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1f10cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f10ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10d0: 0x2466ecf0  addiu       $a2, $v1, -0x1310
    ctx->pc = 0x1f10d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962416));
    // 0x1f10d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f10d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10d8: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1F10D8u;
    SET_GPR_U32(ctx, 31, 0x1F10E0u);
    ctx->pc = 0x1F10DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10D8u;
    // 0x1f10dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1F10D8u, 0x1F10E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10E0u;
label_1f10e0:
    // 0x1f10e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f10e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10e4: 0x93a20029  lbu         $v0, 0x29($sp)
    ctx->pc = 0x1f10e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
label_1f10e8:
    // 0x1f10e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f10e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f10ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f10f0: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x1f10f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1f10f4: 0x93a50028  lbu         $a1, 0x28($sp)
    ctx->pc = 0x1f10f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f10f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f10f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f10fc: 0x0  nop
    ctx->pc = 0x1f10fcu;
    // NOP
    // 0x1f1100: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f1100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f1104: 0xc60d0110  lwc1        $f13, 0x110($s0)
    ctx->pc = 0x1f1104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f1108: 0xa61e00f4  sh          $fp, 0xF4($s0)
    ctx->pc = 0x1f1108u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 30));
    // 0x1f110c: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1f110cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1f1110: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F1110u;
    SET_GPR_U32(ctx, 31, 0x1F1118u);
    ctx->pc = 0x1F1114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1110u;
    // 0x1f1114: 0xae0300f8  sw          $v1, 0xF8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F1110u, 0x1F1118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1118u;
label_1f1118:
    // 0x1f1118: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f1118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f111c: 0x0  nop
    ctx->pc = 0x1f111cu;
    // NOP
    // 0x1f1120: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f1120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f1124: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x1F1124u;
    SET_GPR_U32(ctx, 31, 0x1F112Cu);
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1F1124u, 0x1F112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F112Cu;
label_1f112c:
    // 0x1f112c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f112cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f1130: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f1130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f1134: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f1134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1138: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1f1138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1f113c: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F113Cu;
    {
        const bool branch_taken_0x1f113c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F113Cu;
        // 0x1f1140: 0xa202010c  sb          $v0, 0x10C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f113c) {
            ctx->pc = 0x1F11D0u;
            goto label_1f11d0;
        }
    }
    ctx->pc = 0x1F1144u;
    // 0x1f1144: 0x8ee21344  lw          $v0, 0x1344($s7)
    ctx->pc = 0x1f1144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4932)));
    // 0x1f1148: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x1f1148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x1f114c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1f114cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1f1150: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1f1150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x1f1154: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f1154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1158: 0xfa010130  sqc2        $vf1, 0x130($s0)
    ctx->pc = 0x1f1158u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f115c: 0x93a20029  lbu         $v0, 0x29($sp)
    ctx->pc = 0x1f115cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1f1160: 0x34039370  ori         $v1, $zero, 0x9370
    ctx->pc = 0x1f1160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37744);
    // 0x1f1164: 0x93a50028  lbu         $a1, 0x28($sp)
    ctx->pc = 0x1f1164u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f1168: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f116c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f116cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1170: 0x0  nop
    ctx->pc = 0x1f1170u;
    // NOP
    // 0x1f1174: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f1174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f1178: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1f1178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1f117c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f117cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f1180: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f1180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1184: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1f1184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f1188: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f1188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f118c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1f118cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1f1190: 0xa2000154  sb          $zero, 0x154($s0)
    ctx->pc = 0x1f1190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 340), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1198: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f1198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f119c: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f119cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f11a0: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f11a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f11a4: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x1f11a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x1f11a8: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x1f11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x1f11ac: 0xae060140  sw          $a2, 0x140($s0)
    ctx->pc = 0x1f11acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 6));
    // 0x1f11b0: 0xae060114  sw          $a2, 0x114($s0)
    ctx->pc = 0x1f11b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 6));
    // 0x1f11b4: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1f11b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f11b8: 0xae030144  sw          $v1, 0x144($s0)
    ctx->pc = 0x1f11b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 3));
    // 0x1f11bc: 0xa205011c  sb          $a1, 0x11C($s0)
    ctx->pc = 0x1f11bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f11c0: 0xe601016c  swc1        $f1, 0x16C($s0)
    ctx->pc = 0x1f11c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1f11c4: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F11C4u;
    SET_GPR_U32(ctx, 31, 0x1F11CCu);
    ctx->pc = 0x1F11C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F11C4u;
    // 0x1f11c8: 0xa2020170  sb          $v0, 0x170($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F11C4u, 0x1F11CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11CCu;
label_1f11cc:
    // 0x1f11cc: 0xe6741594  swc1        $f20, 0x1594($s3)
    ctx->pc = 0x1f11ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 5524), bits); }
label_1f11d0:
    // 0x1f11d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f11d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f11d4: 0x27de0005  addiu       $fp, $fp, 0x5
    ctx->pc = 0x1f11d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 5));
    // 0x1f11d8: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1f11d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1f11dc: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x1f11dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f11e0: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x1F11E0u;
    {
        const bool branch_taken_0x1f11e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F11E0u;
        // 0x1f11e4: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f11e0) {
            ctx->pc = 0x1F1050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1050;
        }
    }
    ctx->pc = 0x1F11E8u;
    // 0x1f11e8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f11e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f11ec: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1f11ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f11f0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1f11f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f11f4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1f11f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f11f8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1f11f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f11fc: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1f11fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f1200: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f1200u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f1204: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1f1204u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1f1208: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1f1208u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f120c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1f120cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1f1210: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1f1210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f1214: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1214u;
        // 0x1f1218: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F121Cu;
    // 0x1f121c: 0x0  nop
    ctx->pc = 0x1f121cu;
    // NOP
    // 0x1f1220: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f1220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1224: 0x0  nop
    ctx->pc = 0x1f1224u;
    // NOP
    // 0x1f1228: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f1228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f122c: 0x0  nop
    ctx->pc = 0x1f122cu;
    // NOP
    ctx->pc = 0x1f1230u;
}
