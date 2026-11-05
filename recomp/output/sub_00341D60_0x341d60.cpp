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

// Function: sub_00341D60
// Address: 0x341d60 - 0x342b18
void sub_00341D60_0x341d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341D60_0x341d60");
#endif

    switch (ctx->pc) {
        case 0x341dccu: goto label_341dcc;
        case 0x341df8u: goto label_341df8;
        case 0x341e64u: goto label_341e64;
        case 0x341e6cu: goto label_341e6c;
        case 0x341e74u: goto label_341e74;
        case 0x341e80u: goto label_341e80;
        case 0x341e90u: goto label_341e90;
        case 0x34210cu: goto label_34210c;
        case 0x342124u: goto label_342124;
        case 0x342160u: goto label_342160;
        case 0x342170u: goto label_342170;
        case 0x342194u: goto label_342194;
        case 0x3421acu: goto label_3421ac;
        case 0x3421d8u: goto label_3421d8;
        case 0x342220u: goto label_342220;
        case 0x34224cu: goto label_34224c;
        case 0x342284u: goto label_342284;
        case 0x34228cu: goto label_34228c;
        case 0x342294u: goto label_342294;
        case 0x3422a0u: goto label_3422a0;
        case 0x3422b0u: goto label_3422b0;
        case 0x342548u: goto label_342548;
        case 0x342570u: goto label_342570;
        case 0x342578u: goto label_342578;
        case 0x342584u: goto label_342584;
        case 0x342594u: goto label_342594;
        case 0x342634u: goto label_342634;
        case 0x34263cu: goto label_34263c;
        case 0x342644u: goto label_342644;
        case 0x342658u: goto label_342658;
        case 0x342670u: goto label_342670;
        case 0x3426d4u: goto label_3426d4;
        case 0x342700u: goto label_342700;
        case 0x342734u: goto label_342734;
        case 0x3427b8u: goto label_3427b8;
        case 0x3428c4u: goto label_3428c4;
        case 0x342900u: goto label_342900;
        case 0x34290cu: goto label_34290c;
        case 0x342920u: goto label_342920;
        case 0x342950u: goto label_342950;
        case 0x342a34u: goto label_342a34;
        case 0x342a4cu: goto label_342a4c;
        case 0x342a54u: goto label_342a54;
        case 0x342a5cu: goto label_342a5c;
        case 0x342a70u: goto label_342a70;
        case 0x342a7cu: goto label_342a7c;
        case 0x342a88u: goto label_342a88;
        case 0x342ab8u: goto label_342ab8;
        case 0x342ac0u: goto label_342ac0;
        default: break;
    }

    ctx->pc = 0x341d60u;

    // 0x341d60: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x341d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x341d64: 0xffb301e8  sd          $s3, 0x1E8($sp)
    ctx->pc = 0x341d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 19));
    // 0x341d68: 0xffb60200  sd          $s6, 0x200($sp)
    ctx->pc = 0x341d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 22));
    // 0x341d6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x341d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341d70: 0xffb001d0  sd          $s0, 0x1D0($sp)
    ctx->pc = 0x341d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 16));
    // 0x341d74: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x341d74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341d78: 0xffb101d8  sd          $s1, 0x1D8($sp)
    ctx->pc = 0x341d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 17));
    // 0x341d7c: 0xffb201e0  sd          $s2, 0x1E0($sp)
    ctx->pc = 0x341d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 18));
    // 0x341d80: 0xffb401f0  sd          $s4, 0x1F0($sp)
    ctx->pc = 0x341d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 20));
    // 0x341d84: 0xffb501f8  sd          $s5, 0x1F8($sp)
    ctx->pc = 0x341d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 21));
    // 0x341d88: 0xffb70208  sd          $s7, 0x208($sp)
    ctx->pc = 0x341d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 23));
    // 0x341d8c: 0xffbe0210  sd          $fp, 0x210($sp)
    ctx->pc = 0x341d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 30));
    // 0x341d90: 0xffbf0218  sd          $ra, 0x218($sp)
    ctx->pc = 0x341d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 31));
    // 0x341d94: 0xe7bd0268  swc1        $f29, 0x268($sp)
    ctx->pc = 0x341d94u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x341d98: 0xe7bc0260  swc1        $f28, 0x260($sp)
    ctx->pc = 0x341d98u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x341d9c: 0xe7bb0258  swc1        $f27, 0x258($sp)
    ctx->pc = 0x341d9cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x341da0: 0xe7ba0250  swc1        $f26, 0x250($sp)
    ctx->pc = 0x341da0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x341da4: 0xe7b90248  swc1        $f25, 0x248($sp)
    ctx->pc = 0x341da4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x341da8: 0xe7b80240  swc1        $f24, 0x240($sp)
    ctx->pc = 0x341da8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x341dac: 0xe7b70238  swc1        $f23, 0x238($sp)
    ctx->pc = 0x341dacu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x341db0: 0xe7b60230  swc1        $f22, 0x230($sp)
    ctx->pc = 0x341db0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x341db4: 0xe7b50228  swc1        $f21, 0x228($sp)
    ctx->pc = 0x341db4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x341db8: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x341db8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x341dbc: 0x92620024  lbu         $v0, 0x24($s3)
    ctx->pc = 0x341dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x341dc0: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x341dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x341dc4: 0xc0d0fec  jal         func_343FB0
    ctx->pc = 0x341DC4u;
    SET_GPR_U32(ctx, 31, 0x341DCCu);
    ctx->pc = 0x341DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341DC4u;
    // 0x341dc8: 0xafa201a0  sw          $v0, 0x1A0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343FB0u, 0x341DC4u, 0x341DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341DCCu;
label_341dcc:
    // 0x341dcc: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x341dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x341dd0: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x341dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341dd4: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x341dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341dd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x341dd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341ddc: 0x0  nop
    ctx->pc = 0x341ddcu;
    // NOP
    // 0x341de0: 0x45010338  bc1t        . + 4 + (0x338 << 2)
    ctx->pc = 0x341DE0u;
    {
        const bool branch_taken_0x341de0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x341DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DE0u;
        // 0x341de4: 0xdfb001d0  ld          $s0, 0x1D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341de0) {
            ctx->pc = 0x342AC4u;
            goto label_342ac4;
        }
    }
    ctx->pc = 0x341DE8u;
    // 0x341de8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x341de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x341dec: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x341decu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x341df0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x341DF0u;
    SET_GPR_U32(ctx, 31, 0x341DF8u);
    ctx->pc = 0x341DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341DF0u;
    // 0x341df4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x341DF0u, 0x341DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341DF8u;
label_341df8:
    // 0x341df8: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x341DF8u;
    {
        const bool branch_taken_0x341df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x341df8) {
            ctx->pc = 0x341DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341DF8u;
            // 0x341dfc: 0x8e630064  lw          $v1, 0x64($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341E54u;
            goto label_341e54;
        }
    }
    ctx->pc = 0x341E00u;
    // 0x341e00: 0x92020144  lbu         $v0, 0x144($s0)
    ctx->pc = 0x341e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x341e04: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x341e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x341e08: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x341e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
    // 0x341e0c: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x341e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x341e10: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x341e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x341e14: 0x5040032b  beql        $v0, $zero, . + 4 + (0x32B << 2)
    ctx->pc = 0x341E14u;
    {
        const bool branch_taken_0x341e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341e14) {
            ctx->pc = 0x341E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341E14u;
            // 0x341e18: 0xdfb001d0  ld          $s0, 0x1D0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342AC4u;
            goto label_342ac4;
        }
    }
    ctx->pc = 0x341E1Cu;
    // 0x341e1c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x341e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x341e20: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x341e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x341e24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341E24u;
    {
        const bool branch_taken_0x341e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E24u;
        // 0x341e28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e24) {
            ctx->pc = 0x341E38u;
            goto label_341e38;
        }
    }
    ctx->pc = 0x341E2Cu;
    // 0x341e2c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x341e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x341e30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x341E30u;
    {
        const bool branch_taken_0x341e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341e30) {
            ctx->pc = 0x341E3Cu;
            goto label_341e3c;
        }
    }
    ctx->pc = 0x341E38u;
label_341e38:
    // 0x341e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x341e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_341e3c:
    // 0x341e3c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x341E3Cu;
    {
        const bool branch_taken_0x341e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x341E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E3Cu;
        // 0x341e40: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e3c) {
            ctx->pc = 0x341E5Cu;
            goto label_341e5c;
        }
    }
    ctx->pc = 0x341E44u;
    // 0x341e44: 0x14400308  bnez        $v0, . + 4 + (0x308 << 2)
    ctx->pc = 0x341E44u;
    {
        const bool branch_taken_0x341e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E44u;
        // 0x341e48: 0xdfb001d0  ld          $s0, 0x1D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e44) {
            ctx->pc = 0x342A68u;
            goto label_342a68;
        }
    }
    ctx->pc = 0x341E4Cu;
    // 0x341e4c: 0x1000031e  b           . + 4 + (0x31E << 2)
    ctx->pc = 0x341E4Cu;
    {
        const bool branch_taken_0x341e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E4Cu;
        // 0x341e50: 0xdfb101d8  ld          $s1, 0x1D8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e4c) {
            ctx->pc = 0x342AC8u;
            goto label_342ac8;
        }
    }
    ctx->pc = 0x341E54u;
label_341e54:
    // 0x341e54: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x341e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x341e58: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x341e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_341e5c:
    // 0x341e5c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x341E5Cu;
    SET_GPR_U32(ctx, 31, 0x341E64u);
    ctx->pc = 0x341E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341E5Cu;
    // 0x341e60: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x341E5Cu, 0x341E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341E64u;
label_341e64:
    // 0x341e64: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x341E64u;
    SET_GPR_U32(ctx, 31, 0x341E6Cu);
    ctx->pc = 0x341E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341E64u;
    // 0x341e68: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x341E64u, 0x341E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341E6Cu;
label_341e6c:
    // 0x341e6c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x341E6Cu;
    SET_GPR_U32(ctx, 31, 0x341E74u);
    ctx->pc = 0x341E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341E6Cu;
    // 0x341e70: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x341E6Cu, 0x341E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341E74u;
label_341e74:
    // 0x341e74: 0x8ed00100  lw          $s0, 0x100($s6)
    ctx->pc = 0x341e74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 256)));
    // 0x341e78: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x341E78u;
    SET_GPR_U32(ctx, 31, 0x341E80u);
    ctx->pc = 0x341E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341E78u;
    // 0x341e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x341E78u, 0x341E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341E80u;
label_341e80:
    // 0x341e80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341E80u;
    {
        const bool branch_taken_0x341e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E80u;
        // 0x341e84: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e80) {
            ctx->pc = 0x341E94u;
            goto label_341e94;
        }
    }
    ctx->pc = 0x341E88u;
    // 0x341e88: 0xc0c4900  jal         func_312400
    ctx->pc = 0x341E88u;
    SET_GPR_U32(ctx, 31, 0x341E90u);
    ctx->pc = 0x341E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341E88u;
    // 0x341e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x341E88u, 0x341E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341E90u;
label_341e90:
    // 0x341e90: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x341e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_341e94:
    // 0x341e94: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x341e94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341e98: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x341e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341e9c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x341e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x341ea0: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x341ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x341ea4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x341ea4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341ea8: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x341ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341eac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x341eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x341eb0: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x341eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x341eb4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x341eb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341eb8: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x341eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341ebc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x341ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x341ec0: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x341ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x341ec4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x341ec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341ec8: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x341ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341ecc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x341eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x341ed0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x341ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x341ed4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x341ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x341ed8: 0xc6c000e0  lwc1        $f0, 0xE0($s6)
    ctx->pc = 0x341ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341edc: 0x0  nop
    ctx->pc = 0x341edcu;
    // NOP
    // 0x341ee0: 0x4600a183  div.s       $f6, $f20, $f0
    ctx->pc = 0x341ee0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x341ee4: 0x44083000  mfc1        $t0, $f6
    ctx->pc = 0x341ee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x341ee8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x341ee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341eec: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x341eecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x341ef0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x341ef0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341ef4: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x341ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341ef8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x341ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x341efc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x341efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x341f00: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x341f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x341f04: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x341f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x341f08: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x341f08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x341f0c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x341f0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x341f10: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x341f10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341f14: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x341f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341f18: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x341f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x341f1c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x341f1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341f20: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x341f20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341f24: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x341f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341f28: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x341f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341f2c: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x341f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341f30: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x341f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x341f34: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x341f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341f38: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x341f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341f3c: 0xc7a2011c  lwc1        $f2, 0x11C($sp)
    ctx->pc = 0x341f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341f40: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x341f40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x341f44: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x341f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x341f48: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x341f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x341f4c: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x341f4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x341f50: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x341f50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x341f54: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x341f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341f58: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x341f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341f5c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x341f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341f60: 0xc7a400e8  lwc1        $f4, 0xE8($sp)
    ctx->pc = 0x341f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x341f64: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x341f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x341f68: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x341f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x341f6c: 0xe6240020  swc1        $f4, 0x20($s1)
    ctx->pc = 0x341f6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x341f70: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x341f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341f74: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x341f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341f78: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x341f78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x341f7c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x341f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341f80: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x341f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341f84: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x341f84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x341f88: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x341f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341f8c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x341f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341f90: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x341f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x341f94: 0xc6c100e4  lwc1        $f1, 0xE4($s6)
    ctx->pc = 0x341f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341f98: 0x46003146  mov.s       $f5, $f6
    ctx->pc = 0x341f98u;
    ctx->f[5] = FPU_MOV_S(ctx->f[6]);
    // 0x341f9c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x341f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x341fa0: 0x0  nop
    ctx->pc = 0x341fa0u;
    // NOP
    // 0x341fa4: 0x0  nop
    ctx->pc = 0x341fa4u;
    // NOP
    // 0x341fa8: 0x4601a183  div.s       $f6, $f20, $f1
    ctx->pc = 0x341fa8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x341fac: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x341facu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x341fb0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x341fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x341fb4: 0x44083000  mfc1        $t0, $f6
    ctx->pc = 0x341fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x341fb8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x341fb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x341fbc: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x341fbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x341fc0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x341fc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341fc4: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x341fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341fc8: 0x44082800  mfc1        $t0, $f5
    ctx->pc = 0x341fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x341fcc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x341fccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x341fd0: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x341fd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x341fd4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x341fd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341fd8: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x341fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341fdc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x341fdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341fe0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x341fe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x341fe4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x341fe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x341fe8: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x341fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x341fec: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x341fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341ff0: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x341ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341ff4: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x341ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341ff8: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x341ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341ffc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x341ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x342000: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x342000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x342004: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x342004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x342008: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x342008u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x34200c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x34200cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x342010: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x342010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342014: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x342014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342018: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x342018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34201c: 0xc7a400e8  lwc1        $f4, 0xE8($sp)
    ctx->pc = 0x34201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x342020: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x342020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x342024: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x342024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x342028: 0xe6240024  swc1        $f4, 0x24($s1)
    ctx->pc = 0x342028u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x34202c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x34202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342030: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x342030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342034: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x342034u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x342038: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x342038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34203c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x34203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342040: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x342040u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x342044: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x342044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342048: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x342048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34204c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x34204cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x342050: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x342050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x342054: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x342054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342058: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x342058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34205c: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x34205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342060: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x342060u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x342064: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x342064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x342068: 0xe6220018  swc1        $f2, 0x18($s1)
    ctx->pc = 0x342068u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x34206c: 0xe6230028  swc1        $f3, 0x28($s1)
    ctx->pc = 0x34206cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x342070: 0xe6250034  swc1        $f5, 0x34($s1)
    ctx->pc = 0x342070u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x342074: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x342074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342078: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x342078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34207c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x34207cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x342080: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x342080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342084: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x342084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342088: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x342088u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34208c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x34208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342090: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x342090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342094: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x342094u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x342098: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x342098u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x34209c: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x34209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x3420a0: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x3420a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3420a4: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x3420a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x3420a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3420a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3420ac: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x3420acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3420b0: 0xda230010  lqc2        $vf3, 0x10($s1)
    ctx->pc = 0x3420b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3420b4: 0xda240020  lqc2        $vf4, 0x20($s1)
    ctx->pc = 0x3420b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3420b8: 0xda250030  lqc2        $vf5, 0x30($s1)
    ctx->pc = 0x3420b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3420bc: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x3420bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3420c0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x3420c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3420c4: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x3420c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3420c8: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x3420c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3420cc: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x3420ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3420d0: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x3420d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x3420d4: 0xc6c000f0  lwc1        $f0, 0xF0($s6)
    ctx->pc = 0x3420d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3420d8: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x3420d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3420dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3420dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3420e0: 0x0  nop
    ctx->pc = 0x3420e0u;
    // NOP
    // 0x3420e4: 0x4500025e  bc1f        . + 4 + (0x25E << 2)
    ctx->pc = 0x3420E4u;
    {
        const bool branch_taken_0x3420e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3420E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420E4u;
        // 0x3420e8: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3420e4) {
            ctx->pc = 0x342A60u;
            goto label_342a60;
        }
    }
    ctx->pc = 0x3420ECu;
    // 0x3420ec: 0xc6c000f4  lwc1        $f0, 0xF4($s6)
    ctx->pc = 0x3420ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3420f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3420f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3420f4: 0x0  nop
    ctx->pc = 0x3420f4u;
    // NOP
    // 0x3420f8: 0x45000259  bc1f        . + 4 + (0x259 << 2)
    ctx->pc = 0x3420F8u;
    {
        const bool branch_taken_0x3420f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3420f8) {
            ctx->pc = 0x342A60u;
            goto label_342a60;
        }
    }
    ctx->pc = 0x342100u;
    // 0x342100: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x342100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342104: 0xc0d102a  jal         func_3440A8
    ctx->pc = 0x342104u;
    SET_GPR_U32(ctx, 31, 0x34210Cu);
    ctx->pc = 0x342108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342104u;
    // 0x342108: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3440A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3440A8u, 0x342104u, 0x34210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34210Cu;
label_34210c:
    // 0x34210c: 0x10400254  beqz        $v0, . + 4 + (0x254 << 2)
    ctx->pc = 0x34210Cu;
    {
        const bool branch_taken_0x34210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34210Cu;
        // 0x342110: 0x8fa201a0  lw          $v0, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34210c) {
            ctx->pc = 0x342A60u;
            goto label_342a60;
        }
    }
    ctx->pc = 0x342114u;
    // 0x342114: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x342114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x342118: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x342118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34211c: 0xc0db180  jal         func_36C600
    ctx->pc = 0x34211Cu;
    SET_GPR_U32(ctx, 31, 0x342124u);
    ctx->pc = 0x342120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34211Cu;
    // 0x342120: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C600u, 0x34211Cu, 0x342124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342124u;
label_342124:
    // 0x342124: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x342124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x342128: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x342128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34212c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x34212Cu;
    {
        const bool branch_taken_0x34212c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34212c) {
            ctx->pc = 0x342130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34212Cu;
            // 0x342130: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342164u;
            goto label_342164;
        }
    }
    ctx->pc = 0x342134u;
    // 0x342134: 0x92680038  lbu         $t0, 0x38($s3)
    ctx->pc = 0x342134u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x342138: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x342138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34213c: 0x9263003c  lbu         $v1, 0x3C($s3)
    ctx->pc = 0x34213cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x342140: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x342140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x342144: 0x92620040  lbu         $v0, 0x40($s3)
    ctx->pc = 0x342144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x342148: 0x8e650064  lw          $a1, 0x64($s3)
    ctx->pc = 0x342148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x34214c: 0x8fa701b0  lw          $a3, 0x1B0($sp)
    ctx->pc = 0x34214cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x342150: 0xa3a800a0  sb          $t0, 0xA0($sp)
    ctx->pc = 0x342150u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 8));
    // 0x342154: 0xa3a300a1  sb          $v1, 0xA1($sp)
    ctx->pc = 0x342154u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 161), (uint8_t)GPR_U32(ctx, 3));
    // 0x342158: 0xc0d10ea  jal         func_3443A8
    ctx->pc = 0x342158u;
    SET_GPR_U32(ctx, 31, 0x342160u);
    ctx->pc = 0x34215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342158u;
    // 0x34215c: 0xa3a200a2  sb          $v0, 0xA2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 162), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3443A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3443A8u, 0x342158u, 0x342160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342160u;
label_342160:
    // 0x342160: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x342160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_342164:
    // 0x342164: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x342164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342168: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x342168u;
    SET_GPR_U32(ctx, 31, 0x342170u);
    ctx->pc = 0x34216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342168u;
    // 0x34216c: 0xafa301b4  sw          $v1, 0x1B4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x342168u, 0x342170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342170u;
label_342170:
    // 0x342170: 0x8fa401b4  lw          $a0, 0x1B4($sp)
    ctx->pc = 0x342170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x342174: 0x10800170  beqz        $a0, . + 4 + (0x170 << 2)
    ctx->pc = 0x342174u;
    {
        const bool branch_taken_0x342174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x342178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342174u;
        // 0x342178: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342174) {
            ctx->pc = 0x342738u;
            goto label_342738;
        }
    }
    ctx->pc = 0x34217Cu;
    // 0x34217c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x342180: 0x5040016d  beql        $v0, $zero, . + 4 + (0x16D << 2)
    ctx->pc = 0x342180u;
    {
        const bool branch_taken_0x342180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342180) {
            ctx->pc = 0x342184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342180u;
            // 0x342184: 0x8e620024  lw          $v0, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342738u;
            goto label_342738;
        }
    }
    ctx->pc = 0x342188u;
    // 0x342188: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x342188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34218c: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x34218Cu;
    SET_GPR_U32(ctx, 31, 0x342194u);
    ctx->pc = 0x342190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34218Cu;
    // 0x342190: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x34218Cu, 0x342194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342194u;
label_342194:
    // 0x342194: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x342194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x342198: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x342198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x34219c: 0x3421b22d  ori         $at, $at, 0xB22D
    ctx->pc = 0x34219cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45613);
    // 0x3421a0: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x3421a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x3421a4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3421A4u;
    SET_GPR_U32(ctx, 31, 0x3421ACu);
    ctx->pc = 0x3421A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421A4u;
    // 0x3421a8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3421A4u, 0x3421ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421ACu;
label_3421ac:
    // 0x3421ac: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x3421acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
    // 0x3421b0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x3421b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x3421b4: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x3421b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x3421b8: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x3421b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3421bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3421bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3421c0: 0xafa801b8  sw          $t0, 0x1B8($sp)
    ctx->pc = 0x3421c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 8));
    // 0x3421c4: 0x4600a6c6  mov.s       $f27, $f20
    ctx->pc = 0x3421c4u;
    ctx->f[27] = FPU_MOV_S(ctx->f[20]);
    // 0x3421c8: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x3421c8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3421cc: 0xe7b800a4  swc1        $f24, 0xA4($sp)
    ctx->pc = 0x3421ccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3421d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3421D0u;
    SET_GPR_U32(ctx, 31, 0x3421D8u);
    ctx->pc = 0x3421D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421D0u;
    // 0x3421d4: 0xe7b800a8  swc1        $f24, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3421D0u, 0x3421D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421D8u;
label_3421d8:
    // 0x3421d8: 0x3c013e8c  lui         $at, 0x3E8C
    ctx->pc = 0x3421d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16012 << 16));
    // 0x3421dc: 0x342149ba  ori         $at, $at, 0x49BA
    ctx->pc = 0x3421dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18874);
    // 0x3421e0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3421e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x3421e4: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x3421e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3421e8: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x3421e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3421ec: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3421ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3421f0: 0x27a80180  addiu       $t0, $sp, 0x180
    ctx->pc = 0x3421f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3421f4: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x3421f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
    // 0x3421f8: 0x27be0140  addiu       $fp, $sp, 0x140
    ctx->pc = 0x3421f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3421fc: 0xafa301c8  sw          $v1, 0x1C8($sp)
    ctx->pc = 0x3421fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 3));
    // 0x342200: 0x27b70150  addiu       $s7, $sp, 0x150
    ctx->pc = 0x342200u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x342204: 0xafa401bc  sw          $a0, 0x1BC($sp)
    ctx->pc = 0x342204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
    // 0x342208: 0x27b50160  addiu       $s5, $sp, 0x160
    ctx->pc = 0x342208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x34220c: 0xafa801c0  sw          $t0, 0x1C0($sp)
    ctx->pc = 0x34220cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 8));
    // 0x342210: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x342210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x342214: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x342214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x342218: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x342218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x34221c: 0x0  nop
    ctx->pc = 0x34221cu;
    // NOP
label_342220:
    // 0x342220: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x342220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x342224: 0x461ac600  add.s       $f24, $f24, $f26
    ctx->pc = 0x342224u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[26]);
    // 0x342228: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x342228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34222c: 0x461dd681  sub.s       $f26, $f26, $f29
    ctx->pc = 0x34222cu;
    ctx->f[26] = FPU_SUB_S(ctx->f[26], ctx->f[29]);
    // 0x342230: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x342230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342234: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x342234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342238: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x342238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x34223c: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x34223cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x342240: 0x461905c2  mul.s       $f23, $f0, $f25
    ctx->pc = 0x342240u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x342244: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x342244u;
    SET_GPR_U32(ctx, 31, 0x34224Cu);
    ctx->pc = 0x342248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342244u;
    // 0x342248: 0x46190d82  mul.s       $f22, $f1, $f25 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x342244u, 0x34224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34224Cu;
label_34224c:
    // 0x34224c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x34224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x342250: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x342250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x342254: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x342254u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x342258: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x342258u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34225c: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x34225cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x342260: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x342260u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x342264: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x342264u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x342268: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x342268u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x34226c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x34226cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x342270: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x342270u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x342274: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x342274u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x342278: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x342278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34227c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34227Cu;
    SET_GPR_U32(ctx, 31, 0x342284u);
    ctx->pc = 0x342280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34227Cu;
    // 0x342280: 0x8fa401c4  lw          $a0, 0x1C4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34227Cu, 0x342284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342284u;
label_342284:
    // 0x342284: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x342284u;
    SET_GPR_U32(ctx, 31, 0x34228Cu);
    ctx->pc = 0x342288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342284u;
    // 0x342288: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x342284u, 0x34228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34228Cu;
label_34228c:
    // 0x34228c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34228Cu;
    SET_GPR_U32(ctx, 31, 0x342294u);
    ctx->pc = 0x342290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34228Cu;
    // 0x342290: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34228Cu, 0x342294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342294u;
label_342294:
    // 0x342294: 0x8ed00100  lw          $s0, 0x100($s6)
    ctx->pc = 0x342294u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 256)));
    // 0x342298: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x342298u;
    SET_GPR_U32(ctx, 31, 0x3422A0u);
    ctx->pc = 0x34229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342298u;
    // 0x34229c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x342298u, 0x3422A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422A0u;
label_3422a0:
    // 0x3422a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3422A0u;
    {
        const bool branch_taken_0x3422a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3422A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422A0u;
        // 0x3422a4: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3422a0) {
            ctx->pc = 0x3422B4u;
            goto label_3422b4;
        }
    }
    ctx->pc = 0x3422A8u;
    // 0x3422a8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x3422A8u;
    SET_GPR_U32(ctx, 31, 0x3422B0u);
    ctx->pc = 0x3422ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422A8u;
    // 0x3422ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x3422A8u, 0x3422B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422B0u;
label_3422b0:
    // 0x3422b0: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x3422b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_3422b4:
    // 0x3422b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3422b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3422b8: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x3422b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3422bc: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x3422bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3422c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3422c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3422c4: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x3422c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3422c8: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x3422c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x3422cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3422ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3422d0: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x3422d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3422d4: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x3422d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x3422d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3422d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3422dc: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x3422dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3422e0: 0xc6c000e0  lwc1        $f0, 0xE0($s6)
    ctx->pc = 0x3422e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3422e4: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x3422e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x3422e8: 0x0  nop
    ctx->pc = 0x3422e8u;
    // NOP
    // 0x3422ec: 0x0  nop
    ctx->pc = 0x3422ecu;
    // NOP
    // 0x3422f0: 0x4600d943  div.s       $f5, $f27, $f0
    ctx->pc = 0x3422f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[27], ctx->f[0]); }
    // 0x3422f4: 0x44082800  mfc1        $t0, $f5
    ctx->pc = 0x3422f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3422f8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3422f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3422fc: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x3422fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x342300: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x342300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x342304: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x342304u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342308: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x342308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34230c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x34230cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x342310: 0x0  nop
    ctx->pc = 0x342310u;
    // NOP
    // 0x342314: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x342314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x342318: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x342318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34231c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34231cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x342320: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x342320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x342324: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x342324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342328: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x342328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x34232c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x34232cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x342330: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x342330u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342334: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x342334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x342338: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x342338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34233c: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x34233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342340: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x342340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342344: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x342344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342348: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x342348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34234c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x34234cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x342350: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x342350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x342354: 0xe7a20188  swc1        $f2, 0x188($sp)
    ctx->pc = 0x342354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x342358: 0xe7a3018c  swc1        $f3, 0x18C($sp)
    ctx->pc = 0x342358u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x34235c: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x34235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x342360: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x342360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x342364: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x342364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342368: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x342368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34236c: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x34236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342370: 0xc7a40168  lwc1        $f4, 0x168($sp)
    ctx->pc = 0x342370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x342374: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x342374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x342378: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x342378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x34237c: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x34237cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x342380: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x342380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342384: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x342384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342388: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x342388u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34238c: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x34238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342390: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x342390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342394: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x342394u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x342398: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x342398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34239c: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x34239cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3423a0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3423a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3423a4: 0xc6c100e4  lwc1        $f1, 0xE4($s6)
    ctx->pc = 0x3423a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3423a8: 0x46002d06  mov.s       $f20, $f5
    ctx->pc = 0x3423a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[5]);
    // 0x3423ac: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3423acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3423b0: 0x8fa801c8  lw          $t0, 0x1C8($sp)
    ctx->pc = 0x3423b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x3423b4: 0x0  nop
    ctx->pc = 0x3423b4u;
    // NOP
    // 0x3423b8: 0x0  nop
    ctx->pc = 0x3423b8u;
    // NOP
    // 0x3423bc: 0x4601d943  div.s       $f5, $f27, $f1
    ctx->pc = 0x3423bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[27], ctx->f[1]); }
    // 0x3423c0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3423c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3423c4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x3423c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x3423c8: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x3423c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3423cc: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x3423ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3423d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3423d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3423d4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3423d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3423d8: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x3423d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3423dc: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x3423dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3423e0: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x3423e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3423e4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3423e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3423e8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3423e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3423ec: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x3423ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3423f0: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x3423f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x3423f4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x3423f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3423f8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x3423f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3423fc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3423fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x342400: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x342400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342404: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x342404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342408: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x342408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34240c: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x34240cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342410: 0xc7a3019c  lwc1        $f3, 0x19C($sp)
    ctx->pc = 0x342410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342414: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x342414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x342418: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x342418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x34241c: 0xe7a20188  swc1        $f2, 0x188($sp)
    ctx->pc = 0x34241cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x342420: 0xe7a3018c  swc1        $f3, 0x18C($sp)
    ctx->pc = 0x342420u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x342424: 0x8fa801c0  lw          $t0, 0x1C0($sp)
    ctx->pc = 0x342424u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x342428: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x342428u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x34242c: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x34242cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x342430: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x342430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342434: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x342434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342438: 0xc7a40168  lwc1        $f4, 0x168($sp)
    ctx->pc = 0x342438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34243c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x34243cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x342440: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x342440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x342444: 0xe7a400e4  swc1        $f4, 0xE4($sp)
    ctx->pc = 0x342444u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x342448: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x342448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34244c: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x34244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342450: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x342450u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x342454: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x342454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342458: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x342458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34245c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34245cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x342460: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x342460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342464: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x342464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342468: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x342468u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34246c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x34246cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x342470: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x342470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342474: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x342474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342478: 0xc7a30148  lwc1        $f3, 0x148($sp)
    ctx->pc = 0x342478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34247c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x34247cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x342480: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x342480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x342484: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x342484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x342488: 0xe7a300e8  swc1        $f3, 0xE8($sp)
    ctx->pc = 0x342488u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x34248c: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x34248cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x342490: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x342490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342494: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x342494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342498: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x342498u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34249c: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x34249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3424a0: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x3424a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3424a4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x3424a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x3424a8: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x3424a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3424ac: 0xc7c30008  lwc1        $f3, 0x8($fp)
    ctx->pc = 0x3424acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3424b0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3424b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3424b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3424b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3424b8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x3424b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3424bc: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x3424bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3424c0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x3424c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x3424c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3424c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3424c8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3424c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3424cc: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x3424ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3424d0: 0xd8640020  lqc2        $vf4, 0x20($v1)
    ctx->pc = 0x3424d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3424d4: 0xd8650030  lqc2        $vf5, 0x30($v1)
    ctx->pc = 0x3424d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3424d8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x3424d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3424dc: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x3424dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3424e0: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x3424e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3424e4: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x3424e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3424e8: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x3424e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3424ec: 0x4619c002  mul.s       $f0, $f24, $f25
    ctx->pc = 0x3424ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[25]);
    // 0x3424f0: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x3424f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3424f4: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x3424f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3424f8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3424f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3424fc: 0x461c0002  mul.s       $f0, $f0, $f28
    ctx->pc = 0x3424fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
    // 0x342500: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x342500u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342504: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x342504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x342508: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x342508u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34250c: 0x45010082  bc1t        . + 4 + (0x82 << 2)
    ctx->pc = 0x34250Cu;
    {
        const bool branch_taken_0x34250c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x342510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34250Cu;
        // 0x342510: 0xe7a100a0  swc1        $f1, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34250c) {
            ctx->pc = 0x342718u;
            goto label_342718;
        }
    }
    ctx->pc = 0x342514u;
    // 0x342514: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x342514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342518: 0x46001b06  mov.s       $f12, $f3
    ctx->pc = 0x342518u;
    ctx->f[12] = FPU_MOV_S(ctx->f[3]);
    // 0x34251c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x34251cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342520: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x342520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342524: 0x0  nop
    ctx->pc = 0x342524u;
    // NOP
    // 0x342528: 0x0  nop
    ctx->pc = 0x342528u;
    // NOP
    // 0x34252c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x34252cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x342530: 0x0  nop
    ctx->pc = 0x342530u;
    // NOP
    // 0x342534: 0x0  nop
    ctx->pc = 0x342534u;
    // NOP
    // 0x342538: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x342538u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x34253c: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x34253cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x342540: 0xc0da65c  jal         func_369970
    ctx->pc = 0x342540u;
    SET_GPR_U32(ctx, 31, 0x342548u);
    ctx->pc = 0x342544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342540u;
    // 0x342544: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x369970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369970u, 0x342540u, 0x342548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342548u;
label_342548:
    // 0x342548: 0x4614b882  mul.s       $f2, $f23, $f20
    ctx->pc = 0x342548u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x34254c: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x34254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342550: 0x4614b042  mul.s       $f1, $f22, $f20
    ctx->pc = 0x342550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x342554: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x342554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342558: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x342558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x34255c: 0x46020541  sub.s       $f21, $f0, $f2
    ctx->pc = 0x34255cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x342560: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x342560u;
    {
        const bool branch_taken_0x342560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342560u;
        // 0x342564: 0x46011d01  sub.s       $f20, $f3, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342560) {
            ctx->pc = 0x34263Cu;
            goto label_34263c;
        }
    }
    ctx->pc = 0x342568u;
    // 0x342568: 0xc0db180  jal         func_36C600
    ctx->pc = 0x342568u;
    SET_GPR_U32(ctx, 31, 0x342570u);
    ctx->pc = 0x34256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342568u;
    // 0x34256c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C600u, 0x342568u, 0x342570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342570u;
label_342570:
    // 0x342570: 0xc0db22c  jal         func_36C8B0
    ctx->pc = 0x342570u;
    SET_GPR_U32(ctx, 31, 0x342578u);
    ctx->pc = 0x36C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C8B0u, 0x342570u, 0x342578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342578u;
label_342578:
    // 0x342578: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x342578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34257c: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x34257Cu;
    SET_GPR_U32(ctx, 31, 0x342584u);
    ctx->pc = 0x342580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34257Cu;
    // 0x342580: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x34257Cu, 0x342584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342584u;
label_342584:
    // 0x342584: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x342584u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x342588: 0x2508f620  addiu       $t0, $t0, -0x9E0
    ctx->pc = 0x342588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964768));
    // 0x34258c: 0xc0da81e  jal         func_36A078
    ctx->pc = 0x34258Cu;
    SET_GPR_U32(ctx, 31, 0x342594u);
    ctx->pc = 0x342590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34258Cu;
    // 0x342590: 0x8d04003c  lw          $a0, 0x3C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A078u, 0x34258Cu, 0x342594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342594u;
label_342594:
    // 0x342594: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x342594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x342598: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x342598u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34259c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34259cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3425a0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3425a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3425a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3425a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3425a8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3425a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x3425ac: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x3425acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3425b0: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x3425b0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x3425b4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3425b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3425b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3425b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425bc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3425bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3425c0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x3425c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3425c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3425c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425c8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3425c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3425cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3425ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3425d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3425d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425d8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3425d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3425dc: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x3425dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3425e0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3425e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3425e4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3425e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3425e8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x3425e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3425ec: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3425ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3425f0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3425f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3425f4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3425f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x3425f8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3425f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x3425fc: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x3425fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342600: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x342600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x342604: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x342608: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x342608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x34260c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x34260cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x342610: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x342610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x342614: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x342614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342618: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342618u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x34261c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x34261cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x342620: 0xc4530014  lwc1        $f19, 0x14($v0)
    ctx->pc = 0x342620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x342624: 0xc4500000  lwc1        $f16, 0x0($v0)
    ctx->pc = 0x342624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x342628: 0xc4510010  lwc1        $f17, 0x10($v0)
    ctx->pc = 0x342628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x34262c: 0xc0da852  jal         func_36A148
    ctx->pc = 0x34262Cu;
    SET_GPR_U32(ctx, 31, 0x342634u);
    ctx->pc = 0x342630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34262Cu;
    // 0x342630: 0xc4520004  lwc1        $f18, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A148u, 0x34262Cu, 0x342634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342634u;
label_342634:
    // 0x342634: 0xc0da828  jal         func_36A0A0
    ctx->pc = 0x342634u;
    SET_GPR_U32(ctx, 31, 0x34263Cu);
    ctx->pc = 0x36A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0A0u, 0x342634u, 0x34263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34263Cu;
label_34263c:
    // 0x34263c: 0xc0db180  jal         func_36C600
    ctx->pc = 0x34263Cu;
    SET_GPR_U32(ctx, 31, 0x342644u);
    ctx->pc = 0x342640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34263Cu;
    // 0x342640: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C600u, 0x34263Cu, 0x342644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342644u;
label_342644:
    // 0x342644: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x342644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x342648: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x342648u;
    {
        const bool branch_taken_0x342648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342648u;
        // 0x34264c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342648) {
            ctx->pc = 0x342668u;
            goto label_342668;
        }
    }
    ctx->pc = 0x342650u;
    // 0x342650: 0xc0db234  jal         func_36C8D0
    ctx->pc = 0x342650u;
    SET_GPR_U32(ctx, 31, 0x342658u);
    ctx->pc = 0x342654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342650u;
    // 0x342654: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C8D0u, 0x342650u, 0x342658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342658u;
label_342658:
    // 0x342658: 0x8e710038  lw          $s1, 0x38($s3)
    ctx->pc = 0x342658u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x34265c: 0x8e70003c  lw          $s0, 0x3C($s3)
    ctx->pc = 0x34265cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x342660: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x342660u;
    {
        const bool branch_taken_0x342660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342660u;
        // 0x342664: 0x8e720040  lw          $s2, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342660) {
            ctx->pc = 0x3426C8u;
            goto label_3426c8;
        }
    }
    ctx->pc = 0x342668u;
label_342668:
    // 0x342668: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x342668u;
    SET_GPR_U32(ctx, 31, 0x342670u);
    ctx->pc = 0x34266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342668u;
    // 0x34266c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x342668u, 0x342670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342670u;
label_342670:
    // 0x342670: 0x241400ff  addiu       $s4, $zero, 0xFF
    ctx->pc = 0x342670u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x342674: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x342674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x342678: 0xc6630038  lwc1        $f3, 0x38($s3)
    ctx->pc = 0x342678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34267c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x34267cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x342680: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x342680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x342684: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x342684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x342688: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x342688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x34268c: 0xc662003c  lwc1        $f2, 0x3C($s3)
    ctx->pc = 0x34268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342690: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x342690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x342694: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x342694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342698: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x342698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34269c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34269cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3426a0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3426a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3426a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3426a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3426a8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3426a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3426ac: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3426acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3426b0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3426b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3426b4: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x3426b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x3426b8: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3426b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3426bc: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x3426bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x3426c0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3426c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3426c4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x3426c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_3426c8:
    // 0x3426c8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3426c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3426cc: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x3426CCu;
    SET_GPR_U32(ctx, 31, 0x3426D4u);
    ctx->pc = 0x3426D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3426CCu;
    // 0x3426d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3426CCu, 0x3426D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426D4u;
label_3426d4:
    // 0x3426d4: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x3426d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x3426d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3426d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3426dc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3426dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3426e0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x3426e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x3426e4: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x3426e4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x3426e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3426e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3426ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3426f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426f4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3426f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426f8: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x3426F8u;
    SET_GPR_U32(ctx, 31, 0x342700u);
    ctx->pc = 0x3426FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3426F8u;
    // 0x3426fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x3426F8u, 0x342700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342700u;
label_342700:
    // 0x342700: 0x3c01454c  lui         $at, 0x454C
    ctx->pc = 0x342700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17740 << 16));
    // 0x342704: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x342704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x342708: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x342708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34270c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34270cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x342710: 0x2442ca60  addiu       $v0, $v0, -0x35A0
    ctx->pc = 0x342710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x342714: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x342714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BCA6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA6Cu, _value); } while (0); }
label_342718:
    // 0x342718: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x342718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x34271c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x34271cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x342720: 0x461febf  bgez        $v1, . + 4 + (-0x141 << 2)
    ctx->pc = 0x342720u;
    {
        const bool branch_taken_0x342720 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x342724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342720u;
        // 0x342724: 0xafa301b8  sw          $v1, 0x1B8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342720) {
            ctx->pc = 0x342220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342220;
        }
    }
    ctx->pc = 0x342728u;
    // 0x342728: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x342728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34272c: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x34272Cu;
    SET_GPR_U32(ctx, 31, 0x342734u);
    ctx->pc = 0x342730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34272Cu;
    // 0x342730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x34272Cu, 0x342734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342734u;
label_342734:
    // 0x342734: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x342734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_342738:
    // 0x342738: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x342738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x34273c: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x34273Cu;
    {
        const bool branch_taken_0x34273c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34273c) {
            ctx->pc = 0x342A4Cu;
            goto label_342a4c;
        }
    }
    ctx->pc = 0x342744u;
    // 0x342744: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x342744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x342748: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x342748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x34274c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34274cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342750: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x342750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342754: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x342754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342758: 0x0  nop
    ctx->pc = 0x342758u;
    // NOP
    // 0x34275c: 0x450000bb  bc1f        . + 4 + (0xBB << 2)
    ctx->pc = 0x34275Cu;
    {
        const bool branch_taken_0x34275c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x342760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34275Cu;
        // 0x342760: 0x3c1e0040  lui         $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34275c) {
            ctx->pc = 0x342A4Cu;
            goto label_342a4c;
        }
    }
    ctx->pc = 0x342764u;
    // 0x342764: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x342764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x342768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x342768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34276c: 0xc4820040  lwc1        $f2, 0x40($a0)
    ctx->pc = 0x34276cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342770: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x342770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x342774: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x342774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x342778: 0x2463c480  addiu       $v1, $v1, -0x3B80
    ctx->pc = 0x342778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952064));
    // 0x34277c: 0x460205c1  sub.s       $f23, $f0, $f2
    ctx->pc = 0x34277cu;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x342780: 0xc48a0064  lwc1        $f10, 0x64($a0)
    ctx->pc = 0x342780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x342784: 0x46010581  sub.s       $f22, $f0, $f1
    ctx->pc = 0x342784u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x342788: 0x27c2c4c0  addiu       $v0, $fp, -0x3B40
    ctx->pc = 0x342788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952128));
    // 0x34278c: 0xc4890060  lwc1        $f9, 0x60($a0)
    ctx->pc = 0x34278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x342790: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x342790u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x342794: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x342794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x342798: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x342798u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    // 0x34279c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34279cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3427a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3427a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3427a4: 0x46000ac6  mov.s       $f11, $f1
    ctx->pc = 0x3427a4u;
    ctx->f[11] = FPU_MOV_S(ctx->f[1]);
    // 0x3427a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3427a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3427ac: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3427acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3427b0: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3427b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x3427b4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3427b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3427b8:
    // 0x3427b8: 0xc460fffc  lwc1        $f0, -0x4($v1)
    ctx->pc = 0x3427b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3427bc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3427bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3427c0: 0x4600b102  mul.s       $f4, $f22, $f0
    ctx->pc = 0x3427c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x3427c4: 0xc443fffc  lwc1        $f3, -0x4($v0)
    ctx->pc = 0x3427c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3427c8: 0x4602b142  mul.s       $f5, $f22, $f2
    ctx->pc = 0x3427c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x3427cc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3427ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3427d0: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x3427d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x3427d4: 0x4602b882  mul.s       $f2, $f23, $f2
    ctx->pc = 0x3427d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x3427d8: 0x46045900  add.s       $f4, $f11, $f4
    ctx->pc = 0x3427d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x3427dc: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x3427dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3427e0: 0x46026080  add.s       $f2, $f12, $f2
    ctx->pc = 0x3427e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x3427e4: 0x46055940  add.s       $f5, $f11, $f5
    ctx->pc = 0x3427e4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x3427e8: 0x46035182  mul.s       $f6, $f10, $f3
    ctx->pc = 0x3427e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x3427ec: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3427ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3427f0: 0x46015082  mul.s       $f2, $f10, $f1
    ctx->pc = 0x3427f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x3427f4: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x3427f4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x3427f8: 0x460348c2  mul.s       $f3, $f9, $f3
    ctx->pc = 0x3427f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x3427fc: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x3427fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x342800: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x342800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x342804: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x342804u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x342808: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x342808u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x34280c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x34280cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x342810: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x342810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x342814: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x342814u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x342818: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x342818u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34281c: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x34281cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x342820: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x342820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x342824: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x342824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x342828: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x342828u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x34282c: 0x0  nop
    ctx->pc = 0x34282cu;
    // NOP
    // 0x342830: 0x0  nop
    ctx->pc = 0x342830u;
    // NOP
    // 0x342834: 0x46000084  c1          0x84
    ctx->pc = 0x342834u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x342838: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x342838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x34283c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x34283cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x342840: 0x0  nop
    ctx->pc = 0x342840u;
    // NOP
    // 0x342844: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x342844u;
    {
        const bool branch_taken_0x342844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x342848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342844u;
        // 0x342848: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342844) {
            ctx->pc = 0x342864u;
            goto label_342864;
        }
    }
    ctx->pc = 0x34284Cu;
    // 0x34284c: 0x0  nop
    ctx->pc = 0x34284cu;
    // NOP
    // 0x342850: 0x0  nop
    ctx->pc = 0x342850u;
    // NOP
    // 0x342854: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x342854u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x342858: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x342858u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x34285c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x34285cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x342860: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x342860u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
label_342864:
    // 0x342864: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x342864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x342868: 0x481ffd3  bgez        $a0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x342868u;
    {
        const bool branch_taken_0x342868 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x34286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342868u;
        // 0x34286c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342868) {
            ctx->pc = 0x3427B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3427b8;
        }
    }
    ctx->pc = 0x342870u;
    // 0x342870: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x342870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
    // 0x342874: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x342874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x342878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x342878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34287c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34287cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x342880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x342880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x342884: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x342884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x342888: 0x46004202  mul.s       $f8, $f8, $f0
    ctx->pc = 0x342888u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x34288c: 0xc442c5bc  lwc1        $f2, -0x3A44($v0)
    ctx->pc = 0x34288cu;
    { uint32_t bits = FAST_READ32(0x3FC5BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x342890: 0x4608a801  sub.s       $f0, $f21, $f8
    ctx->pc = 0x342890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[8]);
    // 0x342894: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x342894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x342898: 0x4600aa01  sub.s       $f8, $f21, $f0
    ctx->pc = 0x342898u;
    ctx->f[8] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x34289c: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x34289cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3428a0: 0x0  nop
    ctx->pc = 0x3428a0u;
    // NOP
    // 0x3428a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3428A4u;
    {
        const bool branch_taken_0x3428a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3428A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428A4u;
        // 0x3428a8: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3428a4) {
            ctx->pc = 0x3428BCu;
            goto label_3428bc;
        }
    }
    ctx->pc = 0x3428ACu;
    // 0x3428ac: 0x4602a041  sub.s       $f1, $f20, $f2
    ctx->pc = 0x3428acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x3428b0: 0x46024001  sub.s       $f0, $f8, $f2
    ctx->pc = 0x3428b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
    // 0x3428b4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3428b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3428b8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3428b8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3428bc:
    // 0x3428bc: 0xc0d1026  jal         func_344098
    ctx->pc = 0x3428BCu;
    SET_GPR_U32(ctx, 31, 0x3428C4u);
    ctx->pc = 0x344098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344098u, 0x3428BCu, 0x3428C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428C4u;
label_3428c4:
    // 0x3428c4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3428c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3428c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3428c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3428cc: 0x0  nop
    ctx->pc = 0x3428ccu;
    // NOP
    // 0x3428d0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x3428d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3428d4: 0x0  nop
    ctx->pc = 0x3428d4u;
    // NOP
    // 0x3428d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3428D8u;
    {
        const bool branch_taken_0x3428d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3428d8) {
            ctx->pc = 0x3428E8u;
            goto label_3428e8;
        }
    }
    ctx->pc = 0x3428E0u;
    // 0x3428e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3428E0u;
    {
        const bool branch_taken_0x3428e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3428E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428E0u;
        // 0x3428e4: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3428e0) {
            ctx->pc = 0x3428F8u;
            goto label_3428f8;
        }
    }
    ctx->pc = 0x3428E8u;
label_3428e8:
    // 0x3428e8: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x3428e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3428ec: 0x0  nop
    ctx->pc = 0x3428ecu;
    // NOP
    // 0x3428f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3428F0u;
    {
        const bool branch_taken_0x3428f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3428f0) {
            ctx->pc = 0x3428F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3428F0u;
            // 0x3428f4: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3428F8u;
            goto label_3428f8;
        }
    }
    ctx->pc = 0x3428F8u;
label_3428f8:
    // 0x3428f8: 0xc0db234  jal         func_36C8D0
    ctx->pc = 0x3428F8u;
    SET_GPR_U32(ctx, 31, 0x342900u);
    ctx->pc = 0x36C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C8D0u, 0x3428F8u, 0x342900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342900u;
label_342900:
    // 0x342900: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x342900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x342904: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x342904u;
    SET_GPR_U32(ctx, 31, 0x34290Cu);
    ctx->pc = 0x342908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342904u;
    // 0x342908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x342904u, 0x34290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34290Cu;
label_34290c:
    // 0x34290c: 0x9243c5c0  lbu         $v1, -0x3A40($s2)
    ctx->pc = 0x34290cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294952384)));
    // 0x342910: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x342910u;
    {
        const bool branch_taken_0x342910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x342914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342910u;
        // 0x342914: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342910) {
            ctx->pc = 0x342920u;
            goto label_342920;
        }
    }
    ctx->pc = 0x342918u;
    // 0x342918: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x342918u;
    SET_GPR_U32(ctx, 31, 0x342920u);
    ctx->pc = 0x34291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342918u;
    // 0x34291c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x342918u, 0x342920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342920u;
label_342920:
    // 0x342920: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x342920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342924: 0x0  nop
    ctx->pc = 0x342924u;
    // NOP
    // 0x342928: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x342928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34292c: 0x0  nop
    ctx->pc = 0x34292cu;
    // NOP
    // 0x342930: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x342930u;
    {
        const bool branch_taken_0x342930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x342934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342930u;
        // 0x342934: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342930) {
            ctx->pc = 0x342A40u;
            goto label_342a40;
        }
    }
    ctx->pc = 0x342938u;
    // 0x342938: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x342938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34293c: 0x2451c480  addiu       $s1, $v0, -0x3B80
    ctx->pc = 0x34293cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
    // 0x342940: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x342940u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x342944: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x342944u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x342948: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x342948u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x34294c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x34294cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_342950:
    // 0x342950: 0x27c3c4c0  addiu       $v1, $fp, -0x3B40
    ctx->pc = 0x342950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294952128));
    // 0x342954: 0x26e4c500  addiu       $a0, $s7, -0x3B00
    ctx->pc = 0x342954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952192));
    // 0x342958: 0x2685c580  addiu       $a1, $s4, -0x3A80
    ctx->pc = 0x342958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952320));
    // 0x34295c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x34295cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342960: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x342960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x342964: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x342964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x342968: 0x26a6c540  addiu       $a2, $s5, -0x3AC0
    ctx->pc = 0x342968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952256));
    // 0x34296c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x34296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x342970: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x342970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342974: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x342974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x342978: 0xc6670038  lwc1        $f7, 0x38($s3)
    ctx->pc = 0x342978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x34297c: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x34297cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x342980: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x342980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x342984: 0x4600b242  mul.s       $f9, $f22, $f0
    ctx->pc = 0x342984u;
    ctx->f[9] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x342988: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x342988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x34298c: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x34298cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x342990: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x342990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x342994: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x342994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x342998: 0xc666003c  lwc1        $f6, 0x3C($s3)
    ctx->pc = 0x342998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x34299c: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x34299cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3429a0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3429a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3429a4: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x3429a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x3429a8: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x3429a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3429ac: 0x460c4302  mul.s       $f12, $f8, $f12
    ctx->pc = 0x3429acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x3429b0: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x3429b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3429b4: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3429b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3429b8: 0xc44f0064  lwc1        $f15, 0x64($v0)
    ctx->pc = 0x3429b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3429bc: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x3429bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x3429c0: 0xc44d0044  lwc1        $f13, 0x44($v0)
    ctx->pc = 0x3429c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3429c4: 0xc6650040  lwc1        $f5, 0x40($s3)
    ctx->pc = 0x3429c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3429c8: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3429c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3429cc: 0xc44e0060  lwc1        $f14, 0x60($v0)
    ctx->pc = 0x3429ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3429d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3429d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3429d4: 0x460c7802  mul.s       $f0, $f15, $f12
    ctx->pc = 0x3429d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[12]);
    // 0x3429d8: 0x9243c5c0  lbu         $v1, -0x3A40($s2)
    ctx->pc = 0x3429d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294952384)));
    // 0x3429dc: 0x46096b40  add.s       $f13, $f13, $f9
    ctx->pc = 0x3429dcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[9]);
    // 0x3429e0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x3429e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3429e4: 0x460c7302  mul.s       $f12, $f14, $f12
    ctx->pc = 0x3429e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x3429e8: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x3429e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x3429ec: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x3429ecu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x3429f0: 0x3380a  movz        $a3, $zero, $v1
    ctx->pc = 0x3429f0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x3429f4: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x3429f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x3429f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3429f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3429fc: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x3429fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x342a00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x342a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x342a04: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x342a04u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x342a08: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x342a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x342a0c: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342a10: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x342a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x342a14: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342a14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342a18: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x342a18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x342a1c: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x342a1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x342a20: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x342a20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x342a24: 0x46087bc2  mul.s       $f15, $f15, $f8
    ctx->pc = 0x342a24u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[8]);
    // 0x342a28: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x342a28u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x342a2c: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x342A2Cu;
    SET_GPR_U32(ctx, 31, 0x342A34u);
    ctx->pc = 0x342A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A2Cu;
    // 0x342a30: 0x46087382  mul.s       $f14, $f14, $f8 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x342A2Cu, 0x342A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A34u;
label_342a34:
    // 0x342a34: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x342a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x342a38: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x342A38u;
    {
        const bool branch_taken_0x342a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A38u;
        // 0x342a3c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342a38) {
            ctx->pc = 0x342950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342950;
        }
    }
    ctx->pc = 0x342A40u;
label_342a40:
    // 0x342a40: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x342a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x342a44: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x342A44u;
    SET_GPR_U32(ctx, 31, 0x342A4Cu);
    ctx->pc = 0x342A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A44u;
    // 0x342a48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x342A44u, 0x342A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A4Cu;
label_342a4c:
    // 0x342a4c: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x342A4Cu;
    SET_GPR_U32(ctx, 31, 0x342A54u);
    ctx->pc = 0x342A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A4Cu;
    // 0x342a50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x342A4Cu, 0x342A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A54u;
label_342a54:
    // 0x342a54: 0xc0db180  jal         func_36C600
    ctx->pc = 0x342A54u;
    SET_GPR_U32(ctx, 31, 0x342A5Cu);
    ctx->pc = 0x342A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A54u;
    // 0x342a58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C600u, 0x342A54u, 0x342A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A5Cu;
label_342a5c:
    // 0x342a5c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x342a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_342a60:
    // 0x342a60: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x342A60u;
    {
        const bool branch_taken_0x342a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A60u;
        // 0x342a64: 0xdfb001d0  ld          $s0, 0x1D0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342a60) {
            ctx->pc = 0x342AC4u;
            goto label_342ac4;
        }
    }
    ctx->pc = 0x342A68u;
label_342a68:
    // 0x342a68: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x342A68u;
    SET_GPR_U32(ctx, 31, 0x342A70u);
    ctx->pc = 0x342A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A68u;
    // 0x342a6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x342A68u, 0x342A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A70u;
label_342a70:
    // 0x342a70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x342a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x342a74: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x342A74u;
    SET_GPR_U32(ctx, 31, 0x342A7Cu);
    ctx->pc = 0x342A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A74u;
    // 0x342a78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x342A74u, 0x342A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A7Cu;
label_342a7c:
    // 0x342a7c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x342a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x342a80: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x342A80u;
    SET_GPR_U32(ctx, 31, 0x342A88u);
    ctx->pc = 0x342A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A80u;
    // 0x342a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x342A80u, 0x342A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A88u;
label_342a88:
    // 0x342a88: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x342a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x342a8c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x342a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x342a90: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x342a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x342a94: 0xc46cc478  lwc1        $f12, -0x3B88($v1)
    ctx->pc = 0x342a94u;
    { uint32_t bits = FAST_READ32(0x3FC478u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x342a98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x342a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342a9c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x342a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x342aa0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x342aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x342aa4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x342aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342aa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x342aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x342aac: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x342aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x342ab0: 0xc0d0ac6  jal         func_342B18
    ctx->pc = 0x342AB0u;
    SET_GPR_U32(ctx, 31, 0x342AB8u);
    ctx->pc = 0x342AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AB0u;
    // 0x342ab4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B18u, 0x342AB0u, 0x342AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AB8u;
label_342ab8:
    // 0x342ab8: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x342AB8u;
    SET_GPR_U32(ctx, 31, 0x342AC0u);
    ctx->pc = 0x342ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342AB8u;
    // 0x342abc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x342AB8u, 0x342AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342AC0u;
label_342ac0:
    // 0x342ac0: 0xdfb001d0  ld          $s0, 0x1D0($sp)
    ctx->pc = 0x342ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 464)));
label_342ac4:
    // 0x342ac4: 0xdfb101d8  ld          $s1, 0x1D8($sp)
    ctx->pc = 0x342ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 472)));
label_342ac8:
    // 0x342ac8: 0xdfb201e0  ld          $s2, 0x1E0($sp)
    ctx->pc = 0x342ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x342acc: 0xdfb301e8  ld          $s3, 0x1E8($sp)
    ctx->pc = 0x342accu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x342ad0: 0xdfb401f0  ld          $s4, 0x1F0($sp)
    ctx->pc = 0x342ad0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x342ad4: 0xdfb501f8  ld          $s5, 0x1F8($sp)
    ctx->pc = 0x342ad4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x342ad8: 0xdfb60200  ld          $s6, 0x200($sp)
    ctx->pc = 0x342ad8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x342adc: 0xdfb70208  ld          $s7, 0x208($sp)
    ctx->pc = 0x342adcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x342ae0: 0xdfbe0210  ld          $fp, 0x210($sp)
    ctx->pc = 0x342ae0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x342ae4: 0xdfbf0218  ld          $ra, 0x218($sp)
    ctx->pc = 0x342ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x342ae8: 0xc7bd0268  lwc1        $f29, 0x268($sp)
    ctx->pc = 0x342ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x342aec: 0xc7bc0260  lwc1        $f28, 0x260($sp)
    ctx->pc = 0x342aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x342af0: 0xc7bb0258  lwc1        $f27, 0x258($sp)
    ctx->pc = 0x342af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x342af4: 0xc7ba0250  lwc1        $f26, 0x250($sp)
    ctx->pc = 0x342af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x342af8: 0xc7b90248  lwc1        $f25, 0x248($sp)
    ctx->pc = 0x342af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x342afc: 0xc7b80240  lwc1        $f24, 0x240($sp)
    ctx->pc = 0x342afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x342b00: 0xc7b70238  lwc1        $f23, 0x238($sp)
    ctx->pc = 0x342b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x342b04: 0xc7b60230  lwc1        $f22, 0x230($sp)
    ctx->pc = 0x342b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x342b08: 0xc7b50228  lwc1        $f21, 0x228($sp)
    ctx->pc = 0x342b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x342b0c: 0xc7b40220  lwc1        $f20, 0x220($sp)
    ctx->pc = 0x342b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x342b10: 0x3e00008  jr          $ra
    ctx->pc = 0x342B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B10u;
        // 0x342b14: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342B18u;
}
