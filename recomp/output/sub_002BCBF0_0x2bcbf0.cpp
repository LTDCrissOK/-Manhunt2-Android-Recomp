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

// Function: sub_002BCBF0
// Address: 0x2bcbf0 - 0x2bcd80
void sub_002BCBF0_0x2bcbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCBF0_0x2bcbf0");
#endif

    switch (ctx->pc) {
        case 0x2bcc38u: goto label_2bcc38;
        case 0x2bcc40u: goto label_2bcc40;
        case 0x2bcc48u: goto label_2bcc48;
        case 0x2bcc50u: goto label_2bcc50;
        case 0x2bcc78u: goto label_2bcc78;
        case 0x2bcc80u: goto label_2bcc80;
        case 0x2bcc88u: goto label_2bcc88;
        case 0x2bcc90u: goto label_2bcc90;
        case 0x2bcc9cu: goto label_2bcc9c;
        case 0x2bcd04u: goto label_2bcd04;
        case 0x2bcd10u: goto label_2bcd10;
        case 0x2bcd20u: goto label_2bcd20;
        case 0x2bcd34u: goto label_2bcd34;
        case 0x2bcd54u: goto label_2bcd54;
        default: break;
    }

    ctx->pc = 0x2bcbf0u;

    // 0x2bcbf0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2bcbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2bcbf4: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x2bcbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x2bcbf8: 0xffb00170  sd          $s0, 0x170($sp)
    ctx->pc = 0x2bcbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 16));
    // 0x2bcbfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bcbfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc00: 0xffb40190  sd          $s4, 0x190($sp)
    ctx->pc = 0x2bcc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x2bcc04: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bcc04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bcc08: 0xffb50198  sd          $s5, 0x198($sp)
    ctx->pc = 0x2bcc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 21));
    // 0x2bcc0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bcc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc10: 0xffb601a0  sd          $s6, 0x1A0($sp)
    ctx->pc = 0x2bcc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 22));
    // 0x2bcc14: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2bcc14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc18: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2bcc18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2bcc1c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2bcc1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc20: 0xffb10178  sd          $s1, 0x178($sp)
    ctx->pc = 0x2bcc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 17));
    // 0x2bcc24: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2bcc24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc28: 0xffb30188  sd          $s3, 0x188($sp)
    ctx->pc = 0x2bcc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 19));
    // 0x2bcc2c: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x2bcc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x2bcc30: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCC30u;
    SET_GPR_U32(ctx, 31, 0x2BCC38u);
    ctx->pc = 0x2BCC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC30u;
    // 0x2bcc34: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCC30u, 0x2BCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC38u;
label_2bcc38:
    // 0x2bcc38: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCC38u;
    SET_GPR_U32(ctx, 31, 0x2BCC40u);
    ctx->pc = 0x2BCC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC38u;
    // 0x2bcc3c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCC38u, 0x2BCC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC40u;
label_2bcc40:
    // 0x2bcc40: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCC40u;
    SET_GPR_U32(ctx, 31, 0x2BCC48u);
    ctx->pc = 0x2BCC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC40u;
    // 0x2bcc44: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCC40u, 0x2BCC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC48u;
label_2bcc48:
    // 0x2bcc48: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCC48u;
    SET_GPR_U32(ctx, 31, 0x2BCC50u);
    ctx->pc = 0x2BCC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC48u;
    // 0x2bcc4c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCC48u, 0x2BCC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC50u;
label_2bcc50:
    // 0x2bcc50: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2bcc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bcc54: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bcc54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bcc58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bcc5c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2bcc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2bcc60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2bcc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bcc64: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2bcc64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2bcc68: 0xc44e000c  lwc1        $f14, 0xC($v0)
    ctx->pc = 0x2bcc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2bcc6c: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x2bcc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2bcc70: 0xc0af91a  jal         func_2BE468
    ctx->pc = 0x2BCC70u;
    SET_GPR_U32(ctx, 31, 0x2BCC78u);
    ctx->pc = 0x2BCC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC70u;
    // 0x2bcc74: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE468u, 0x2BCC70u, 0x2BCC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC78u;
label_2bcc78:
    // 0x2bcc78: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BCC78u;
    SET_GPR_U32(ctx, 31, 0x2BCC80u);
    ctx->pc = 0x2BCC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC78u;
    // 0x2bcc7c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BCC78u, 0x2BCC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC80u;
label_2bcc80:
    // 0x2bcc80: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BCC80u;
    SET_GPR_U32(ctx, 31, 0x2BCC88u);
    ctx->pc = 0x2BCC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC80u;
    // 0x2bcc84: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BCC80u, 0x2BCC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC88u;
label_2bcc88:
    // 0x2bcc88: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BCC88u;
    SET_GPR_U32(ctx, 31, 0x2BCC90u);
    ctx->pc = 0x2BCC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC88u;
    // 0x2bcc8c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BCC88u, 0x2BCC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC90u;
label_2bcc90:
    // 0x2bcc90: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x2bcc90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bcc94: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BCC94u;
    SET_GPR_U32(ctx, 31, 0x2BCC9Cu);
    ctx->pc = 0x2BCC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC94u;
    // 0x2bcc98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BCC94u, 0x2BCC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC9Cu;
label_2bcc9c:
    // 0x2bcc9c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2bcc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcca0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2bcca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcca4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2bcca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcca8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2bcca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2bccac: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x2bccacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2bccb0: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x2bccb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2bccb4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2bccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bccb8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2bccb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2bccbc: 0x14c0000e  bnez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2BCCBCu;
    {
        const bool branch_taken_0x2bccbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BCCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCBCu;
        // 0x2bccc0: 0x27b000b0  addiu       $s0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccbc) {
            ctx->pc = 0x2BCCF8u;
            goto label_2bccf8;
        }
    }
    ctx->pc = 0x2BCCC4u;
    // 0x2bccc4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2bccc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bccc8: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2bccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bcccc: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2bccccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2bccd0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bccd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bccd4: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2bccd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bccd8: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x2bccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2bccdc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bccdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bcce0: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2bcce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bcce4: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x2bcce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2bcce8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bcce8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bccec: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x2bccecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bccf0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BCCF0u;
    {
        const bool branch_taken_0x2bccf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCF0u;
        // 0x2bccf4: 0x27b300b0  addiu       $s3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bccf0) {
            ctx->pc = 0x2BCD08u;
            goto label_2bcd08;
        }
    }
    ctx->pc = 0x2BCCF8u;
label_2bccf8:
    // 0x2bccf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bccf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bccfc: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2BCCFCu;
    SET_GPR_U32(ctx, 31, 0x2BCD04u);
    ctx->pc = 0x2BCD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCCFCu;
    // 0x2bcd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2BCCFCu, 0x2BCD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD04u;
label_2bcd04:
    // 0x2bcd04: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2bcd04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bcd08:
    // 0x2bcd08: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BCD08u;
    SET_GPR_U32(ctx, 31, 0x2BCD10u);
    ctx->pc = 0x2BCD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD08u;
    // 0x2bcd0c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BCD08u, 0x2BCD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD10u;
label_2bcd10:
    // 0x2bcd10: 0x27b00130  addiu       $s0, $sp, 0x130
    ctx->pc = 0x2bcd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2bcd14: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2bcd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bcd18: 0xc0b0cc4  jal         func_2C3310
    ctx->pc = 0x2BCD18u;
    SET_GPR_U32(ctx, 31, 0x2BCD20u);
    ctx->pc = 0x2BCD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD18u;
    // 0x2bcd1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3310u, 0x2BCD18u, 0x2BCD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD20u;
label_2bcd20:
    // 0x2bcd20: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x2bcd20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bcd24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bcd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bcd28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd2c: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2BCD2Cu;
    SET_GPR_U32(ctx, 31, 0x2BCD34u);
    ctx->pc = 0x2BCD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD2Cu;
    // 0x2bcd30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2BCD2Cu, 0x2BCD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD34u;
label_2bcd34:
    // 0x2bcd34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bcd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bcd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd3c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2bcd3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bcd40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bcd44: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2bcd44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd48: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2bcd48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd4c: 0xc0af4ca  jal         func_2BD328
    ctx->pc = 0x2BCD4Cu;
    SET_GPR_U32(ctx, 31, 0x2BCD54u);
    ctx->pc = 0x2BCD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD4Cu;
    // 0x2bcd50: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD328u, 0x2BCD4Cu, 0x2BCD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD54u;
label_2bcd54:
    // 0x2bcd54: 0xdfb00170  ld          $s0, 0x170($sp)
    ctx->pc = 0x2bcd54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bcd58: 0xdfb10178  ld          $s1, 0x178($sp)
    ctx->pc = 0x2bcd58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2bcd5c: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x2bcd5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bcd60: 0xdfb30188  ld          $s3, 0x188($sp)
    ctx->pc = 0x2bcd60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x2bcd64: 0xdfb40190  ld          $s4, 0x190($sp)
    ctx->pc = 0x2bcd64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2bcd68: 0xdfb50198  ld          $s5, 0x198($sp)
    ctx->pc = 0x2bcd68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2bcd6c: 0xdfb601a0  ld          $s6, 0x1A0($sp)
    ctx->pc = 0x2bcd6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2bcd70: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x2bcd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2bcd74: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2bcd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bcd78: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD78u;
        // 0x2bcd7c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCD80u;
}
