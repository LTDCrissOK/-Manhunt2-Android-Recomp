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

// Function: sub_0035FE88
// Address: 0x35fe88 - 0x360318
void sub_0035FE88_0x35fe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FE88_0x35fe88");
#endif

    switch (ctx->pc) {
        case 0x35febcu: goto label_35febc;
        case 0x35feccu: goto label_35fecc;
        case 0x35fed8u: goto label_35fed8;
        case 0x35fee0u: goto label_35fee0;
        case 0x35fee8u: goto label_35fee8;
        case 0x35ff1cu: goto label_35ff1c;
        case 0x35ff30u: goto label_35ff30;
        case 0x35ff44u: goto label_35ff44;
        case 0x35ff50u: goto label_35ff50;
        case 0x35ff58u: goto label_35ff58;
        case 0x35ff68u: goto label_35ff68;
        case 0x35fffcu: goto label_35fffc;
        case 0x360024u: goto label_360024;
        case 0x3600b8u: goto label_3600b8;
        case 0x3600ccu: goto label_3600cc;
        case 0x3600dcu: goto label_3600dc;
        case 0x360128u: goto label_360128;
        case 0x360170u: goto label_360170;
        case 0x360198u: goto label_360198;
        case 0x3601a8u: goto label_3601a8;
        case 0x3601bcu: goto label_3601bc;
        case 0x3601d0u: goto label_3601d0;
        case 0x3601e0u: goto label_3601e0;
        case 0x360234u: goto label_360234;
        case 0x360250u: goto label_360250;
        case 0x3602bcu: goto label_3602bc;
        case 0x3602d0u: goto label_3602d0;
        case 0x3602ecu: goto label_3602ec;
        default: break;
    }

    ctx->pc = 0x35fe88u;

    // 0x35fe88: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x35fe88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x35fe8c: 0xffb101d8  sd          $s1, 0x1D8($sp)
    ctx->pc = 0x35fe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 17));
    // 0x35fe90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35fe90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe94: 0xffb201e0  sd          $s2, 0x1E0($sp)
    ctx->pc = 0x35fe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 18));
    // 0x35fe98: 0xffb301e8  sd          $s3, 0x1E8($sp)
    ctx->pc = 0x35fe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 19));
    // 0x35fe9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35fe9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fea0: 0xffb401f0  sd          $s4, 0x1F0($sp)
    ctx->pc = 0x35fea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 20));
    // 0x35fea4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35fea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fea8: 0xffb501f8  sd          $s5, 0x1F8($sp)
    ctx->pc = 0x35fea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 21));
    // 0x35feac: 0xffb001d0  sd          $s0, 0x1D0($sp)
    ctx->pc = 0x35feacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 16));
    // 0x35feb0: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x35feb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x35feb4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x35FEB4u;
    SET_GPR_U32(ctx, 31, 0x35FEBCu);
    ctx->pc = 0x35FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FEB4u;
    // 0x35feb8: 0xe7b40210  swc1        $f20, 0x210($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x35FEB4u, 0x35FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FEBCu;
label_35febc:
    // 0x35febc: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x35febcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35fec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35fec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fec4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x35FEC4u;
    SET_GPR_U32(ctx, 31, 0x35FECCu);
    ctx->pc = 0x35FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FEC4u;
    // 0x35fec8: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x35FEC4u, 0x35FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FECCu;
label_35fecc:
    // 0x35fecc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x35feccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x35fed0: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x35FED0u;
    SET_GPR_U32(ctx, 31, 0x35FED8u);
    ctx->pc = 0x35FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FED0u;
    // 0x35fed4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x35FED0u, 0x35FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FED8u;
label_35fed8:
    // 0x35fed8: 0xc0c2332  jal         func_308CC8
    ctx->pc = 0x35FED8u;
    SET_GPR_U32(ctx, 31, 0x35FEE0u);
    ctx->pc = 0x35FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FED8u;
    // 0x35fedc: 0xafa001c4  sw          $zero, 0x1C4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308CC8u, 0x35FED8u, 0x35FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FEE0u;
label_35fee0:
    // 0x35fee0: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x35FEE0u;
    SET_GPR_U32(ctx, 31, 0x35FEE8u);
    ctx->pc = 0x35FEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FEE0u;
    // 0x35fee4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x35FEE0u, 0x35FEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FEE8u;
label_35fee8:
    // 0x35fee8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x35fee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x35feec: 0x54400074  bnel        $v0, $zero, . + 4 + (0x74 << 2)
    ctx->pc = 0x35FEECu;
    {
        const bool branch_taken_0x35feec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35feec) {
            ctx->pc = 0x35FEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FEECu;
            // 0x35fef0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3600C0u;
            goto label_3600c0;
        }
    }
    ctx->pc = 0x35FEF4u;
    // 0x35fef4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x35fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x35fef8: 0x27b001c0  addiu       $s0, $sp, 0x1C0
    ctx->pc = 0x35fef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x35fefc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35fefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ff00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35ff08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35ff08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff0c: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x35ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ff10: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x35ff10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x35ff14: 0xc0d8226  jal         func_360898
    ctx->pc = 0x35FF14u;
    SET_GPR_U32(ctx, 31, 0x35FF1Cu);
    ctx->pc = 0x35FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF14u;
    // 0x35ff18: 0xe7a001c0  swc1        $f0, 0x1C0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x360898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360898u, 0x35FF14u, 0x35FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF1Cu;
label_35ff1c:
    // 0x35ff1c: 0xc7ac01c0  lwc1        $f12, 0x1C0($sp)
    ctx->pc = 0x35ff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35ff20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ff20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff24: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x35ff24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff28: 0xc0d8350  jal         func_360D40
    ctx->pc = 0x35FF28u;
    SET_GPR_U32(ctx, 31, 0x35FF30u);
    ctx->pc = 0x35FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF28u;
    // 0x35ff2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360D40u, 0x35FF28u, 0x35FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF30u;
label_35ff30:
    // 0x35ff30: 0xc7ac01c0  lwc1        $f12, 0x1C0($sp)
    ctx->pc = 0x35ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35ff34: 0x27a501c4  addiu       $a1, $sp, 0x1C4
    ctx->pc = 0x35ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x35ff38: 0x27a601c8  addiu       $a2, $sp, 0x1C8
    ctx->pc = 0x35ff38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x35ff3c: 0xc0d8664  jal         func_361990
    ctx->pc = 0x35FF3Cu;
    SET_GPR_U32(ctx, 31, 0x35FF44u);
    ctx->pc = 0x35FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF3Cu;
    // 0x35ff40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361990u, 0x35FF3Cu, 0x35FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF44u;
label_35ff44:
    // 0x35ff44: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x35ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x35ff48: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35FF48u;
    SET_GPR_U32(ctx, 31, 0x35FF50u);
    ctx->pc = 0x35FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF48u;
    // 0x35ff4c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35FF48u, 0x35FF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF50u;
label_35ff50:
    // 0x35ff50: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35FF50u;
    SET_GPR_U32(ctx, 31, 0x35FF58u);
    ctx->pc = 0x35FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF50u;
    // 0x35ff54: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35FF50u, 0x35FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF58u;
label_35ff58:
    // 0x35ff58: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x35ff58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x35ff5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35ff5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ff60: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x35FF60u;
    SET_GPR_U32(ctx, 31, 0x35FF68u);
    ctx->pc = 0x35FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FF60u;
    // 0x35ff64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x35FF60u, 0x35FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FF68u;
label_35ff68:
    // 0x35ff68: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x35ff68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x35ff6c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35ff6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35ff70: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x35ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35ff74: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x35ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x35ff78: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x35ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ff7c: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x35ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35ff80: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x35ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x35ff84: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x35ff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ff88: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x35ff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35ff8c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x35ff8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x35ff90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35ff90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35ff94: 0x0  nop
    ctx->pc = 0x35ff94u;
    // NOP
    // 0x35ff98: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x35ff98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x35ff9c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x35ff9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x35ffa0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x35ffa0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x35ffa4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35ffa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35ffa8: 0xe7a4015c  swc1        $f4, 0x15C($sp)
    ctx->pc = 0x35ffa8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x35ffac: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x35ffacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x35ffb0: 0xe7a30158  swc1        $f3, 0x158($sp)
    ctx->pc = 0x35ffb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x35ffb4: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x35ffb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x35ffb8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x35ffb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ffbc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x35ffbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35ffc0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35ffc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35ffc4: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x35ffc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35ffc8: 0xc7a30160  lwc1        $f3, 0x160($sp)
    ctx->pc = 0x35ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35ffcc: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x35ffccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x35ffd0: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x35ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ffd4: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x35ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ffd8: 0xc7a2016c  lwc1        $f2, 0x16C($sp)
    ctx->pc = 0x35ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ffdc: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x35ffdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x35ffe0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x35ffe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x35ffe4: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x35ffe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x35ffe8: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x35ffe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x35ffec: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35ffecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35fff0: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x35fff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35fff4: 0xc0d2f34  jal         func_34BCD0
    ctx->pc = 0x35FFF4u;
    SET_GPR_U32(ctx, 31, 0x35FFFCu);
    ctx->pc = 0x34BCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BCD0u, 0x35FFF4u, 0x35FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FFFCu;
label_35fffc:
    // 0x35fffc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360000: 0x8fa501c4  lw          $a1, 0x1C4($sp)
    ctx->pc = 0x360000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x360004: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x360004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x360008: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x360008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x36000c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x36000cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x360010: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x360010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x360014: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x360014u;
    {
        const bool branch_taken_0x360014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x360018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360014u;
        // 0x360018: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360014) {
            ctx->pc = 0x360034u;
            goto label_360034;
        }
    }
    ctx->pc = 0x36001Cu;
    // 0x36001c: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x36001Cu;
    SET_GPR_U32(ctx, 31, 0x360024u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x36001Cu, 0x360024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360024u;
label_360024:
    // 0x360024: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x360024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360028: 0x38420083  xori        $v0, $v0, 0x83
    ctx->pc = 0x360028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)131);
    // 0x36002c: 0x213180a  movz        $v1, $s0, $s3
    ctx->pc = 0x36002cu;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x360030: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x360030u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_360034:
    // 0x360034: 0x120000ab  beqz        $s0, . + 4 + (0xAB << 2)
    ctx->pc = 0x360034u;
    {
        const bool branch_taken_0x360034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x360038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360034u;
        // 0x360038: 0x8fa2008c  lw          $v0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360034) {
            ctx->pc = 0x3602E4u;
            goto label_3602e4;
        }
    }
    ctx->pc = 0x36003Cu;
    // 0x36003c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36003Cu;
    {
        const bool branch_taken_0x36003c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36003Cu;
        // 0x360040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36003c) {
            ctx->pc = 0x360050u;
            goto label_360050;
        }
    }
    ctx->pc = 0x360044u;
    // 0x360044: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x360044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x360048: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x360048u;
    {
        const bool branch_taken_0x360048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360048u;
        // 0x36004c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360048) {
            ctx->pc = 0x3600B0u;
            goto label_3600b0;
        }
    }
    ctx->pc = 0x360050u;
label_360050:
    // 0x360050: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x360050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x360054: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x360054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x360058: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x360058u;
    {
        const bool branch_taken_0x360058 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x36005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360058u;
        // 0x36005c: 0xc7a001c0  lwc1        $f0, 0x1C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x360058) {
            ctx->pc = 0x3600A8u;
            goto label_3600a8;
        }
    }
    ctx->pc = 0x360060u;
    // 0x360060: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x360060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x360064: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x360064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360068: 0xc442cb20  lwc1        $f2, -0x34E0($v0)
    ctx->pc = 0x360068u;
    { uint32_t bits = FAST_READ32(0x3FCB20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36006c: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x36006cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x360070: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x360070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360074: 0x0  nop
    ctx->pc = 0x360074u;
    // NOP
    // 0x360078: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x360078u;
    {
        const bool branch_taken_0x360078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360078u;
        // 0x36007c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360078) {
            ctx->pc = 0x36008Cu;
            goto label_36008c;
        }
    }
    ctx->pc = 0x360080u;
    // 0x360080: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x360080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x360084: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x360084u;
    {
        const bool branch_taken_0x360084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360084u;
        // 0x360088: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360084) {
            ctx->pc = 0x3600B0u;
            goto label_3600b0;
        }
    }
    ctx->pc = 0x36008Cu;
label_36008c:
    // 0x36008c: 0x0  nop
    ctx->pc = 0x36008cu;
    // NOP
    // 0x360090: 0x0  nop
    ctx->pc = 0x360090u;
    // NOP
    // 0x360094: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x360094u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
    // 0x360098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x360098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36009c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36009cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3600a0: 0x0  nop
    ctx->pc = 0x3600a0u;
    // NOP
    // 0x3600a4: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x3600a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_3600a8:
    // 0x3600a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3600a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3600ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3600acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3600b0:
    // 0x3600b0: 0xc0d7a5e  jal         func_35E978
    ctx->pc = 0x3600B0u;
    SET_GPR_U32(ctx, 31, 0x3600B8u);
    ctx->pc = 0x35E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E978u, 0x3600B0u, 0x3600B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3600B8u;
label_3600b8:
    // 0x3600b8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x3600B8u;
    {
        const bool branch_taken_0x3600b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3600BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3600B8u;
        // 0x3600bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3600b8) {
            ctx->pc = 0x3602E4u;
            goto label_3602e4;
        }
    }
    ctx->pc = 0x3600C0u;
label_3600c0:
    // 0x3600c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3600c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3600c4: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x3600C4u;
    SET_GPR_U32(ctx, 31, 0x3600CCu);
    ctx->pc = 0x3600C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3600C4u;
    // 0x3600c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x3600C4u, 0x3600CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3600CCu;
label_3600cc:
    // 0x3600cc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3600CCu;
    {
        const bool branch_taken_0x3600cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3600cc) {
            ctx->pc = 0x3600D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3600CCu;
            // 0x3600d0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3600E8u;
            goto label_3600e8;
        }
    }
    ctx->pc = 0x3600D4u;
    // 0x3600d4: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x3600D4u;
    SET_GPR_U32(ctx, 31, 0x3600DCu);
    ctx->pc = 0x3600D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3600D4u;
    // 0x3600d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x3600D4u, 0x3600DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3600DCu;
label_3600dc:
    // 0x3600dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3600dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3600e0: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x3600E0u;
    {
        const bool branch_taken_0x3600e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3600e0) {
            ctx->pc = 0x3600E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3600E0u;
            // 0x3600e4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3600E8u;
            goto label_3600e8;
        }
    }
    ctx->pc = 0x3600E8u;
label_3600e8:
    // 0x3600e8: 0x12400032  beqz        $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x3600E8u;
    {
        const bool branch_taken_0x3600e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3600e8) {
            ctx->pc = 0x3601B4u;
            goto label_3601b4;
        }
    }
    ctx->pc = 0x3600F0u;
    // 0x3600f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3600f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3600f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3600f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3600f8: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x3600f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x3600fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3600fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360100: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x360100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x360104: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x360104u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360108: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x360108u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36010c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x36010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x360110: 0x27b001c8  addiu       $s0, $sp, 0x1C8
    ctx->pc = 0x360110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x360114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x360114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360118: 0x27a501c4  addiu       $a1, $sp, 0x1C4
    ctx->pc = 0x360118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x36011c: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x36011cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x360120: 0xc0d8664  jal         func_361990
    ctx->pc = 0x360120u;
    SET_GPR_U32(ctx, 31, 0x360128u);
    ctx->pc = 0x360124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360120u;
    // 0x360124: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361990u, 0x360120u, 0x360128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360128u;
label_360128:
    // 0x360128: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x360128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36012c: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x36012Cu;
    {
        const bool branch_taken_0x36012c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x36012c) {
            ctx->pc = 0x360130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36012Cu;
            // 0x360130: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36013Cu;
            goto label_36013c;
        }
    }
    ctx->pc = 0x360134u;
    // 0x360134: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x360134u;
    {
        const bool branch_taken_0x360134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360134u;
        // 0x360138: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360134) {
            ctx->pc = 0x3602E4u;
            goto label_3602e4;
        }
    }
    ctx->pc = 0x36013Cu;
label_36013c:
    // 0x36013c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x36013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x360140: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x360140u;
    {
        const bool branch_taken_0x360140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360140u;
        // 0x360144: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360140) {
            ctx->pc = 0x360158u;
            goto label_360158;
        }
    }
    ctx->pc = 0x360148u;
    // 0x360148: 0x8c420334  lw          $v0, 0x334($v0)
    ctx->pc = 0x360148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x36014c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x36014cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x360150: 0x10640064  beq         $v1, $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x360150u;
    {
        const bool branch_taken_0x360150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x360150) {
            ctx->pc = 0x3602E4u;
            goto label_3602e4;
        }
    }
    ctx->pc = 0x360158u;
label_360158:
    // 0x360158: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x360158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36015c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360160: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x360160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360164: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360168: 0xc0d8350  jal         func_360D40
    ctx->pc = 0x360168u;
    SET_GPR_U32(ctx, 31, 0x360170u);
    ctx->pc = 0x36016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360168u;
    // 0x36016c: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x360D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360D40u, 0x360168u, 0x360170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360170u;
label_360170:
    // 0x360170: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x360170u;
    {
        const bool branch_taken_0x360170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360170u;
        // 0x360174: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360170) {
            ctx->pc = 0x360198u;
            goto label_360198;
        }
    }
    ctx->pc = 0x360178u;
    // 0x360178: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x360178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36017c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360180: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x360180u;
    {
        const bool branch_taken_0x360180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x360184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360180u;
        // 0x360184: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360180) {
            ctx->pc = 0x360198u;
            goto label_360198;
        }
    }
    ctx->pc = 0x360188u;
    // 0x360188: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x360188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36018c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36018cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360190: 0xc0d8226  jal         func_360898
    ctx->pc = 0x360190u;
    SET_GPR_U32(ctx, 31, 0x360198u);
    ctx->pc = 0x360194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360190u;
    // 0x360194: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360898u, 0x360190u, 0x360198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360198u;
label_360198:
    // 0x360198: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x360198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36019c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3601a0: 0xc0d7a5e  jal         func_35E978
    ctx->pc = 0x3601A0u;
    SET_GPR_U32(ctx, 31, 0x3601A8u);
    ctx->pc = 0x3601A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3601A0u;
    // 0x3601a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E978u, 0x3601A0u, 0x3601A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601A8u;
label_3601a8:
    // 0x3601a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3601a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3601ac: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3601ACu;
    {
        const bool branch_taken_0x3601ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3601B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3601ACu;
        // 0x3601b0: 0x62980b  movn        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3601ac) {
            ctx->pc = 0x3602E4u;
            goto label_3602e4;
        }
    }
    ctx->pc = 0x3601B4u;
label_3601b4:
    // 0x3601b4: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x3601B4u;
    SET_GPR_U32(ctx, 31, 0x3601BCu);
    ctx->pc = 0x3601B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3601B4u;
    // 0x3601b8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x3601B4u, 0x3601BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601BCu;
label_3601bc:
    // 0x3601bc: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x3601bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x3601c0: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3601C0u;
    {
        const bool branch_taken_0x3601c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3601C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3601C0u;
        // 0x3601c4: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3601c0) {
            ctx->pc = 0x3602E4u;
            goto label_3602e4;
        }
    }
    ctx->pc = 0x3601C8u;
    // 0x3601c8: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x3601C8u;
    SET_GPR_U32(ctx, 31, 0x3601D0u);
    ctx->pc = 0x3601CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3601C8u;
    // 0x3601cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x3601C8u, 0x3601D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601D0u;
label_3601d0:
    // 0x3601d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3601d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3601d4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x3601d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x3601d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3601D8u;
    SET_GPR_U32(ctx, 31, 0x3601E0u);
    ctx->pc = 0x3601DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3601D8u;
    // 0x3601dc: 0xc4540010  lwc1        $f20, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3601D8u, 0x3601E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601E0u;
label_3601e0:
    // 0x3601e0: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x3601e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x3601e4: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x3601e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3601e8: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x3601e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x3601ec: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x3601ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3601f0: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x3601f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x3601f4: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x3601f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x3601f8: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x3601f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3601fc: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x3601fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360200: 0xc7a20188  lwc1        $f2, 0x188($sp)
    ctx->pc = 0x360200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x360204: 0xc7a3018c  lwc1        $f3, 0x18C($sp)
    ctx->pc = 0x360204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x360208: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x360208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x36020c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x36020cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x360210: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x360210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x360214: 0xe7a3013c  swc1        $f3, 0x13C($sp)
    ctx->pc = 0x360214u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x360218: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x360218u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36021c: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x36021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360220: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x360220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x360224: 0x24053000  addiu       $a1, $zero, 0x3000
    ctx->pc = 0x360224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x360228: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x360228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36022c: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x36022Cu;
    SET_GPR_U32(ctx, 31, 0x360234u);
    ctx->pc = 0x360230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36022Cu;
    // 0x360230: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x36022Cu, 0x360234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360234u;
label_360234:
    // 0x360234: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x360234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x360238: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x360238u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x36023c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x36023Cu;
    {
        const bool branch_taken_0x36023c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36023Cu;
        // 0x360240: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36023c) {
            ctx->pc = 0x3602E4u;
            goto label_3602e4;
        }
    }
    ctx->pc = 0x360244u;
    // 0x360244: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x360244u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x360248: 0x8e422b20  lw          $v0, 0x2B20($s2)
    ctx->pc = 0x360248u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B20u));
    // 0x36024c: 0x0  nop
    ctx->pc = 0x36024cu;
    // NOP
label_360250:
    // 0x360250: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x360250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x360254: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x360254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360258: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x360258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36025c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x36025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x360260: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x360260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x360264: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x360264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x360268: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x360268u;
    {
        const bool branch_taken_0x360268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360268u;
        // 0x36026c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360268) {
            ctx->pc = 0x360274u;
            goto label_360274;
        }
    }
    ctx->pc = 0x360270u;
    // 0x360270: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x360270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_360274:
    // 0x360274: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x360274u;
    {
        const bool branch_taken_0x360274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x360274) {
            ctx->pc = 0x3602C4u;
            goto label_3602c4;
        }
    }
    ctx->pc = 0x36027Cu;
    // 0x36027c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x36027Cu;
    {
        const bool branch_taken_0x36027c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x360280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36027Cu;
        // 0x360280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36027c) {
            ctx->pc = 0x360288u;
            goto label_360288;
        }
    }
    ctx->pc = 0x360284u;
    // 0x360284: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x360284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_360288:
    // 0x360288: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x360288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x36028c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x36028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x360290: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x360290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x360294: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x360294u;
    {
        const bool branch_taken_0x360294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360294) {
            ctx->pc = 0x3602C4u;
            goto label_3602c4;
        }
    }
    ctx->pc = 0x36029Cu;
    // 0x36029c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x36029Cu;
    {
        const bool branch_taken_0x36029c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3602A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36029Cu;
        // 0x3602a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36029c) {
            ctx->pc = 0x3602A8u;
            goto label_3602a8;
        }
    }
    ctx->pc = 0x3602A4u;
    // 0x3602a4: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x3602a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_3602a8:
    // 0x3602a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3602a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3602ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3602acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3602b0: 0x24060448  addiu       $a2, $zero, 0x448
    ctx->pc = 0x3602b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
    // 0x3602b4: 0xc0d77a8  jal         func_35DEA0
    ctx->pc = 0x3602B4u;
    SET_GPR_U32(ctx, 31, 0x3602BCu);
    ctx->pc = 0x3602B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3602B4u;
    // 0x3602b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DEA0u, 0x3602B4u, 0x3602BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3602BCu;
label_3602bc:
    // 0x3602bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3602BCu;
    {
        const bool branch_taken_0x3602bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3602C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3602BCu;
        // 0x3602c0: 0x8e822b1c  lw          $v0, 0x2B1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3602bc) {
            ctx->pc = 0x3602D4u;
            goto label_3602d4;
        }
    }
    ctx->pc = 0x3602C4u;
label_3602c4:
    // 0x3602c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3602c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3602c8: 0xc0d7a5e  jal         func_35E978
    ctx->pc = 0x3602C8u;
    SET_GPR_U32(ctx, 31, 0x3602D0u);
    ctx->pc = 0x3602CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3602C8u;
    // 0x3602cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E978u, 0x3602C8u, 0x3602D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3602D0u;
label_3602d0:
    // 0x3602d0: 0x8e822b1c  lw          $v0, 0x2B1C($s4)
    ctx->pc = 0x3602d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11036)));
label_3602d4:
    // 0x3602d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3602d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3602d8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3602d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3602dc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3602DCu;
    {
        const bool branch_taken_0x3602dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3602E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3602DCu;
        // 0x3602e0: 0x8e422b20  lw          $v0, 0x2B20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3602dc) {
            ctx->pc = 0x360250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360250;
        }
    }
    ctx->pc = 0x3602E4u;
label_3602e4:
    // 0x3602e4: 0xc0c2352  jal         func_308D48
    ctx->pc = 0x3602E4u;
    SET_GPR_U32(ctx, 31, 0x3602ECu);
    ctx->pc = 0x308D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D48u, 0x3602E4u, 0x3602ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3602ECu;
label_3602ec:
    // 0x3602ec: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3602ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3602f0: 0xdfb001d0  ld          $s0, 0x1D0($sp)
    ctx->pc = 0x3602f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x3602f4: 0xdfb101d8  ld          $s1, 0x1D8($sp)
    ctx->pc = 0x3602f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x3602f8: 0xdfb201e0  ld          $s2, 0x1E0($sp)
    ctx->pc = 0x3602f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x3602fc: 0xdfb301e8  ld          $s3, 0x1E8($sp)
    ctx->pc = 0x3602fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x360300: 0xdfb401f0  ld          $s4, 0x1F0($sp)
    ctx->pc = 0x360300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x360304: 0xdfb501f8  ld          $s5, 0x1F8($sp)
    ctx->pc = 0x360304u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x360308: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x360308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x36030c: 0xc7b40210  lwc1        $f20, 0x210($sp)
    ctx->pc = 0x36030cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360310: 0x3e00008  jr          $ra
    ctx->pc = 0x360310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360310u;
        // 0x360314: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360318u;
}
