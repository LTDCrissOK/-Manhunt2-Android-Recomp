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

// Function: sub_002EDF40
// Address: 0x2edf40 - 0x2ef760
void sub_002EDF40_0x2edf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDF40_0x2edf40");
#endif

    switch (ctx->pc) {
        case 0x2edfbcu: goto label_2edfbc;
        case 0x2ee028u: goto label_2ee028;
        case 0x2ee030u: goto label_2ee030;
        case 0x2ee040u: goto label_2ee040;
        case 0x2ee098u: goto label_2ee098;
        case 0x2ee170u: goto label_2ee170;
        case 0x2ee224u: goto label_2ee224;
        case 0x2ee234u: goto label_2ee234;
        case 0x2ee258u: goto label_2ee258;
        case 0x2ee2ecu: goto label_2ee2ec;
        case 0x2ee4ecu: goto label_2ee4ec;
        case 0x2ee56cu: goto label_2ee56c;
        case 0x2ee5ccu: goto label_2ee5cc;
        case 0x2ee5dcu: goto label_2ee5dc;
        case 0x2ee5ecu: goto label_2ee5ec;
        case 0x2ee5fcu: goto label_2ee5fc;
        case 0x2ee66cu: goto label_2ee66c;
        case 0x2ee67cu: goto label_2ee67c;
        case 0x2ee68cu: goto label_2ee68c;
        case 0x2ee7b0u: goto label_2ee7b0;
        case 0x2ee814u: goto label_2ee814;
        case 0x2ee830u: goto label_2ee830;
        case 0x2ee840u: goto label_2ee840;
        case 0x2ee868u: goto label_2ee868;
        case 0x2ee878u: goto label_2ee878;
        case 0x2ee888u: goto label_2ee888;
        case 0x2ee89cu: goto label_2ee89c;
        case 0x2ee8f4u: goto label_2ee8f4;
        case 0x2ee918u: goto label_2ee918;
        case 0x2ee938u: goto label_2ee938;
        case 0x2ee94cu: goto label_2ee94c;
        case 0x2ee95cu: goto label_2ee95c;
        case 0x2ee988u: goto label_2ee988;
        case 0x2ee9c8u: goto label_2ee9c8;
        case 0x2eea44u: goto label_2eea44;
        case 0x2eeae4u: goto label_2eeae4;
        case 0x2eeb10u: goto label_2eeb10;
        case 0x2eeb20u: goto label_2eeb20;
        case 0x2eeb50u: goto label_2eeb50;
        case 0x2eeb74u: goto label_2eeb74;
        case 0x2eebccu: goto label_2eebcc;
        case 0x2eebe4u: goto label_2eebe4;
        case 0x2eebf4u: goto label_2eebf4;
        case 0x2eec04u: goto label_2eec04;
        case 0x2eec1cu: goto label_2eec1c;
        case 0x2eec30u: goto label_2eec30;
        case 0x2eec78u: goto label_2eec78;
        case 0x2eec9cu: goto label_2eec9c;
        case 0x2eece4u: goto label_2eece4;
        case 0x2eee10u: goto label_2eee10;
        case 0x2eee50u: goto label_2eee50;
        case 0x2eee84u: goto label_2eee84;
        case 0x2eee98u: goto label_2eee98;
        case 0x2eeff0u: goto label_2eeff0;
        case 0x2ef078u: goto label_2ef078;
        case 0x2ef090u: goto label_2ef090;
        case 0x2ef0d8u: goto label_2ef0d8;
        case 0x2ef124u: goto label_2ef124;
        case 0x2ef17cu: goto label_2ef17c;
        case 0x2ef19cu: goto label_2ef19c;
        case 0x2ef1ccu: goto label_2ef1cc;
        case 0x2ef1dcu: goto label_2ef1dc;
        case 0x2ef1f0u: goto label_2ef1f0;
        case 0x2ef298u: goto label_2ef298;
        case 0x2ef38cu: goto label_2ef38c;
        case 0x2ef4d8u: goto label_2ef4d8;
        case 0x2ef4f4u: goto label_2ef4f4;
        case 0x2ef548u: goto label_2ef548;
        case 0x2ef560u: goto label_2ef560;
        case 0x2ef5c0u: goto label_2ef5c0;
        case 0x2ef5e0u: goto label_2ef5e0;
        case 0x2ef608u: goto label_2ef608;
        case 0x2ef6a8u: goto label_2ef6a8;
        case 0x2ef6c0u: goto label_2ef6c0;
        default: break;
    }

    ctx->pc = 0x2edf40u;

    // 0x2edf40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2edf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2edf44: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2edf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2edf48: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2edf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2edf4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2edf4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf50: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2edf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2edf54: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2edf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2edf58: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2edf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2edf5c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2edf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2edf60: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2edf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2edf64: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2edf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2edf68: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2edf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2edf6c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2edf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2edf70: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x2edf70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2edf74: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2edf74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2edf78: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2edf78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2edf7c: 0x92021370  lbu         $v0, 0x1370($s0)
    ctx->pc = 0x2edf7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4976)));
    // 0x2edf80: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EDF80u;
    {
        const bool branch_taken_0x2edf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF80u;
        // 0x2edf84: 0x8e1500b8  lw          $s5, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf80) {
            ctx->pc = 0x2EDFC4u;
            goto label_2edfc4;
        }
    }
    ctx->pc = 0x2EDF88u;
    // 0x2edf88: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2edf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2edf8c: 0x8e031360  lw          $v1, 0x1360($s0)
    ctx->pc = 0x2edf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4960)));
    // 0x2edf90: 0x8c442b00  lw          $a0, 0x2B00($v0)
    ctx->pc = 0x2edf90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B00u));
    // 0x2edf94: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2edf94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2edf98: 0x106005e2  beqz        $v1, . + 4 + (0x5E2 << 2)
    ctx->pc = 0x2EDF98u;
    {
        const bool branch_taken_0x2edf98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF98u;
        // 0x2edf9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf98) {
            ctx->pc = 0x2EF724u;
            goto label_2ef724;
        }
    }
    ctx->pc = 0x2EDFA0u;
    // 0x2edfa0: 0x8e031368  lw          $v1, 0x1368($s0)
    ctx->pc = 0x2edfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4968)));
    // 0x2edfa4: 0x546205df  bnel        $v1, $v0, . + 4 + (0x5DF << 2)
    ctx->pc = 0x2EDFA4u;
    {
        const bool branch_taken_0x2edfa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2edfa4) {
            ctx->pc = 0x2EDFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDFA4u;
            // 0x2edfa8: 0xa2001370  sb          $zero, 0x1370($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 4976), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF724u;
            goto label_2ef724;
        }
    }
    ctx->pc = 0x2EDFACu;
    // 0x2edfac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2edfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edfb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2edfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2edfb4: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x2EDFB4u;
    SET_GPR_U32(ctx, 31, 0x2EDFBCu);
    ctx->pc = 0x2EDFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDFB4u;
    // 0x2edfb8: 0xa2021384  sb          $v0, 0x1384($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4996), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x2EDFB4u, 0x2EDFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDFBCu;
label_2edfbc:
    // 0x2edfbc: 0x100005d9  b           . + 4 + (0x5D9 << 2)
    ctx->pc = 0x2EDFBCu;
    {
        const bool branch_taken_0x2edfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFBCu;
        // 0x2edfc0: 0xa2001370  sb          $zero, 0x1370($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4976), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfbc) {
            ctx->pc = 0x2EF724u;
            goto label_2ef724;
        }
    }
    ctx->pc = 0x2EDFC4u;
label_2edfc4:
    // 0x2edfc4: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2edfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2edfc8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2edfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2edfcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2edfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2edfd0: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EDFD0u;
    {
        const bool branch_taken_0x2edfd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFD0u;
        // 0x2edfd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfd0) {
            ctx->pc = 0x2EE038u;
            goto label_2ee038;
        }
    }
    ctx->pc = 0x2EDFD8u;
    // 0x2edfd8: 0xc60112b0  lwc1        $f1, 0x12B0($s0)
    ctx->pc = 0x2edfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2edfdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2edfdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2edfe0: 0x0  nop
    ctx->pc = 0x2edfe0u;
    // NOP
    // 0x2edfe4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2edfe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2edfe8: 0x0  nop
    ctx->pc = 0x2edfe8u;
    // NOP
    // 0x2edfec: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2EDFECu;
    {
        const bool branch_taken_0x2edfec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFECu;
        // 0x2edff0: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edfec) {
            ctx->pc = 0x2EE020u;
            goto label_2ee020;
        }
    }
    ctx->pc = 0x2EDFF4u;
    // 0x2edff4: 0x8e020550  lw          $v0, 0x550($s0)
    ctx->pc = 0x2edff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x2edff8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDFF8u;
    {
        const bool branch_taken_0x2edff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDFF8u;
        // 0x2edffc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edff8) {
            ctx->pc = 0x2EE00Cu;
            goto label_2ee00c;
        }
    }
    ctx->pc = 0x2EE000u;
    // 0x2ee000: 0x8e020554  lw          $v0, 0x554($s0)
    ctx->pc = 0x2ee000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x2ee004: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE004u;
    {
        const bool branch_taken_0x2ee004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE004u;
        // 0x2ee008: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee004) {
            ctx->pc = 0x2EE020u;
            goto label_2ee020;
        }
    }
    ctx->pc = 0x2EE00Cu;
label_2ee00c:
    // 0x2ee00c: 0xc440b800  lwc1        $f0, -0x4800($v0)
    ctx->pc = 0x2ee00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee010: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ee010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ee014: 0xe60012b0  swc1        $f0, 0x12B0($s0)
    ctx->pc = 0x2ee014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4784), bits); }
    // 0x2ee018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee01c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x2ee01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2ee020:
    // 0x2ee020: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2EE020u;
    SET_GPR_U32(ctx, 31, 0x2EE028u);
    ctx->pc = 0x2EE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE020u;
    // 0x2ee024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2EE020u, 0x2EE028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE028u;
label_2ee028:
    // 0x2ee028: 0xc0bd62c  jal         func_2F58B0
    ctx->pc = 0x2EE028u;
    SET_GPR_U32(ctx, 31, 0x2EE030u);
    ctx->pc = 0x2EE02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE028u;
    // 0x2ee02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2EE028u, 0x2EE030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE030u;
label_2ee030:
    // 0x2ee030: 0x100005bd  b           . + 4 + (0x5BD << 2)
    ctx->pc = 0x2EE030u;
    {
        const bool branch_taken_0x2ee030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE030u;
        // 0x2ee034: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee030) {
            ctx->pc = 0x2EF728u;
            goto label_2ef728;
        }
    }
    ctx->pc = 0x2EE038u;
label_2ee038:
    // 0x2ee038: 0xc0954e2  jal         func_255388
    ctx->pc = 0x2EE038u;
    SET_GPR_U32(ctx, 31, 0x2EE040u);
    ctx->pc = 0x2EE03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE038u;
    // 0x2ee03c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255388u, 0x2EE038u, 0x2EE040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE040u;
label_2ee040:
    // 0x2ee040: 0x260204fc  addiu       $v0, $s0, 0x4FC
    ctx->pc = 0x2ee040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1276));
    // 0x2ee044: 0xc60304fc  lwc1        $f3, 0x4FC($s0)
    ctx->pc = 0x2ee044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ee048: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2ee048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ee04c: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x2ee04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2ee050: 0xc601050c  lwc1        $f1, 0x50C($s0)
    ctx->pc = 0x2ee050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee054: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2ee054u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2ee058: 0xc6000510  lwc1        $f0, 0x510($s0)
    ctx->pc = 0x2ee058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee05c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2ee05cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2ee060: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ee060u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ee064: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ee064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee068: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ee068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ee06c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ee06cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee070: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2ee070u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2ee074: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ee074u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee078: 0x26040534  addiu       $a0, $s0, 0x534
    ctx->pc = 0x2ee078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1332));
    // 0x2ee07c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ee07cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ee080: 0x0  nop
    ctx->pc = 0x2ee080u;
    // NOP
    // 0x2ee084: 0x0  nop
    ctx->pc = 0x2ee084u;
    // NOP
    // 0x2ee088: 0x46030544  c1          0x30544
    ctx->pc = 0x2ee088u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x2ee08c: 0x46010044  c1          0x10044
    ctx->pc = 0x2ee08cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2ee090: 0x4600ad86  mov.s       $f22, $f21
    ctx->pc = 0x2ee090u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
    // 0x2ee094: 0x0  nop
    ctx->pc = 0x2ee094u;
    // NOP
label_2ee098:
    // 0x2ee098: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ee098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee09c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE09Cu;
    {
        const bool branch_taken_0x2ee09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee09c) {
            ctx->pc = 0x2EE0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE09Cu;
            // 0x2ee0a0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE0B4u;
            goto label_2ee0b4;
        }
    }
    ctx->pc = 0x2EE0A4u;
    // 0x2ee0a4: 0x10660002  beq         $v1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE0A4u;
    {
        const bool branch_taken_0x2ee0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2EE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0A4u;
        // 0x2ee0a8: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0a4) {
            ctx->pc = 0x2EE0B0u;
            goto label_2ee0b0;
        }
    }
    ctx->pc = 0x2EE0ACu;
    // 0x2ee0ac: 0xa2880b  movn        $s1, $a1, $v0
    ctx->pc = 0x2ee0acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
label_2ee0b0:
    // 0x2ee0b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ee0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2ee0b4:
    // 0x2ee0b4: 0x28620035  slti        $v0, $v1, 0x35
    ctx->pc = 0x2ee0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x2ee0b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2EE0B8u;
    {
        const bool branch_taken_0x2ee0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0B8u;
        // 0x2ee0bc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0b8) {
            ctx->pc = 0x2EE098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ee098;
        }
    }
    ctx->pc = 0x2EE0C0u;
    // 0x2ee0c0: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ee0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ee0c4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2ee0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2ee0c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ee0cc: 0x1043005b  beq         $v0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2EE0CCu;
    {
        const bool branch_taken_0x2ee0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee0cc) {
            ctx->pc = 0x2EE23Cu;
            goto label_2ee23c;
        }
    }
    ctx->pc = 0x2EE0D4u;
    // 0x2ee0d4: 0x8e0205cc  lw          $v0, 0x5CC($s0)
    ctx->pc = 0x2ee0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1484)));
    // 0x2ee0d8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EE0D8u;
    {
        const bool branch_taken_0x2ee0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee0d8) {
            ctx->pc = 0x2EE0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE0D8u;
            // 0x2ee0dc: 0xc6010504  lwc1        $f1, 0x504($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE120u;
            goto label_2ee120;
        }
    }
    ctx->pc = 0x2EE0E0u;
    // 0x2ee0e0: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x2ee0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
    // 0x2ee0e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE0E4u;
    {
        const bool branch_taken_0x2ee0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE0E4u;
        // 0x2ee0e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee0e4) {
            ctx->pc = 0x2EE0FCu;
            goto label_2ee0fc;
        }
    }
    ctx->pc = 0x2EE0ECu;
    // 0x2ee0ec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ee0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ee0f0: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x2ee0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB958u));
    // 0x2ee0f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ee0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ee0f8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2ee0f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ee0fc:
    // 0x2ee0fc: 0x5060005a  beql        $v1, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x2EE0FCu;
    {
        const bool branch_taken_0x2ee0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee0fc) {
            ctx->pc = 0x2EE100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE0FCu;
            // 0x2ee100: 0x8e020578  lw          $v0, 0x578($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE268u;
            goto label_2ee268;
        }
    }
    ctx->pc = 0x2EE104u;
    // 0x2ee104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ee104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee108: 0x0  nop
    ctx->pc = 0x2ee108u;
    // NOP
    // 0x2ee10c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ee10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee110: 0x0  nop
    ctx->pc = 0x2ee110u;
    // NOP
    // 0x2ee114: 0x45020054  bc1fl       . + 4 + (0x54 << 2)
    ctx->pc = 0x2EE114u;
    {
        const bool branch_taken_0x2ee114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee114) {
            ctx->pc = 0x2EE118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE114u;
            // 0x2ee118: 0x8e020578  lw          $v0, 0x578($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE268u;
            goto label_2ee268;
        }
    }
    ctx->pc = 0x2EE11Cu;
    // 0x2ee11c: 0xc6010504  lwc1        $f1, 0x504($s0)
    ctx->pc = 0x2ee11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ee120:
    // 0x2ee120: 0xc6000508  lwc1        $f0, 0x508($s0)
    ctx->pc = 0x2ee120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee124: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2ee124u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ee128: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2ee128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2ee12c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ee12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ee130: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ee130u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ee134: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x2ee134u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee138: 0x0  nop
    ctx->pc = 0x2ee138u;
    // NOP
    // 0x2ee13c: 0x4502004a  bc1fl       . + 4 + (0x4A << 2)
    ctx->pc = 0x2EE13Cu;
    {
        const bool branch_taken_0x2ee13c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee13c) {
            ctx->pc = 0x2EE140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE13Cu;
            // 0x2ee140: 0x8e020578  lw          $v0, 0x578($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE268u;
            goto label_2ee268;
        }
    }
    ctx->pc = 0x2EE144u;
    // 0x2ee144: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2ee144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2ee148: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2ee148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2ee14c: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x2EE14Cu;
    {
        const bool branch_taken_0x2ee14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee14c) {
            ctx->pc = 0x2EE150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE14Cu;
            // 0x2ee150: 0x8e020578  lw          $v0, 0x578($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE268u;
            goto label_2ee268;
        }
    }
    ctx->pc = 0x2EE154u;
    // 0x2ee154: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2ee154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ee158: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2ee158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ee15c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2ee15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2ee160: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE160u;
    {
        const bool branch_taken_0x2ee160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ee160) {
            ctx->pc = 0x2EE178u;
            goto label_2ee178;
        }
    }
    ctx->pc = 0x2EE168u;
    // 0x2ee168: 0xc06b62e  jal         func_1AD8B8
    ctx->pc = 0x2EE168u;
    SET_GPR_U32(ctx, 31, 0x2EE170u);
    ctx->pc = 0x1AD8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD8B8u, 0x2EE168u, 0x2EE170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE170u;
label_2ee170:
    // 0x2ee170: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EE170u;
    {
        const bool branch_taken_0x2ee170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee170) {
            ctx->pc = 0x2EE1E4u;
            goto label_2ee1e4;
        }
    }
    ctx->pc = 0x2EE178u;
label_2ee178:
    // 0x2ee178: 0x4614b032  c.eq.s      $f22, $f20
    ctx->pc = 0x2ee178u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee17c: 0x0  nop
    ctx->pc = 0x2ee17cu;
    // NOP
    // 0x2ee180: 0x45020039  bc1fl       . + 4 + (0x39 << 2)
    ctx->pc = 0x2EE180u;
    {
        const bool branch_taken_0x2ee180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee180) {
            ctx->pc = 0x2EE184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE180u;
            // 0x2ee184: 0x8e020578  lw          $v0, 0x578($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE268u;
            goto label_2ee268;
        }
    }
    ctx->pc = 0x2EE188u;
    // 0x2ee188: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2ee188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ee18c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2ee18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2ee190: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2ee190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ee194: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE194u;
    {
        const bool branch_taken_0x2ee194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE194u;
        // 0x2ee198: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee194) {
            ctx->pc = 0x2EE1C8u;
            goto label_2ee1c8;
        }
    }
    ctx->pc = 0x2EE19Cu;
    // 0x2ee19c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2ee19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2ee1a0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE1A0u;
    {
        const bool branch_taken_0x2ee1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1A0u;
        // 0x2ee1a4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1a0) {
            ctx->pc = 0x2EE1C8u;
            goto label_2ee1c8;
        }
    }
    ctx->pc = 0x2EE1A8u;
    // 0x2ee1a8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE1A8u;
    {
        const bool branch_taken_0x2ee1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1A8u;
        // 0x2ee1ac: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1a8) {
            ctx->pc = 0x2EE1C8u;
            goto label_2ee1c8;
        }
    }
    ctx->pc = 0x2EE1B0u;
    // 0x2ee1b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE1B0u;
    {
        const bool branch_taken_0x2ee1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1B0u;
        // 0x2ee1b4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1b0) {
            ctx->pc = 0x2EE1C8u;
            goto label_2ee1c8;
        }
    }
    ctx->pc = 0x2EE1B8u;
    // 0x2ee1b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE1B8u;
    {
        const bool branch_taken_0x2ee1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1B8u;
        // 0x2ee1bc: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1b8) {
            ctx->pc = 0x2EE1C8u;
            goto label_2ee1c8;
        }
    }
    ctx->pc = 0x2EE1C0u;
    // 0x2ee1c0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE1C0u;
    {
        const bool branch_taken_0x2ee1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee1c0) {
            ctx->pc = 0x2EE1CCu;
            goto label_2ee1cc;
        }
    }
    ctx->pc = 0x2EE1C8u;
label_2ee1c8:
    // 0x2ee1c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ee1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee1cc:
    // 0x2ee1cc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE1CCu;
    {
        const bool branch_taken_0x2ee1cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1CCu;
        // 0x2ee1d0: 0x24040046  addiu       $a0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1cc) {
            ctx->pc = 0x2EE1E4u;
            goto label_2ee1e4;
        }
    }
    ctx->pc = 0x2EE1D4u;
    // 0x2ee1d4: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x2ee1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ee1d8: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2ee1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x2ee1dc: 0x54640022  bnel        $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2EE1DCu;
    {
        const bool branch_taken_0x2ee1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ee1dc) {
            ctx->pc = 0x2EE1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE1DCu;
            // 0x2ee1e0: 0x8e020578  lw          $v0, 0x578($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE268u;
            goto label_2ee268;
        }
    }
    ctx->pc = 0x2EE1E4u;
label_2ee1e4:
    // 0x2ee1e4: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE1E4u;
    {
        const bool branch_taken_0x2ee1e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee1e4) {
            ctx->pc = 0x2EE1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE1E4u;
            // 0x2ee1e8: 0x920210ce  lbu         $v0, 0x10CE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4302)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE214u;
            goto label_2ee214;
        }
    }
    ctx->pc = 0x2EE1ECu;
    // 0x2ee1ec: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x2ee1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
    // 0x2ee1f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE1F0u;
    {
        const bool branch_taken_0x2ee1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1F0u;
        // 0x2ee1f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1f0) {
            ctx->pc = 0x2EE208u;
            goto label_2ee208;
        }
    }
    ctx->pc = 0x2EE1F8u;
    // 0x2ee1f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ee1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ee1fc: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x2ee1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB958u));
    // 0x2ee200: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ee200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ee204: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2ee204u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ee208:
    // 0x2ee208: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EE208u;
    {
        const bool branch_taken_0x2ee208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee208) {
            ctx->pc = 0x2EE20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE208u;
            // 0x2ee20c: 0x8e020578  lw          $v0, 0x578($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE268u;
            goto label_2ee268;
        }
    }
    ctx->pc = 0x2EE210u;
    // 0x2ee210: 0x920210ce  lbu         $v0, 0x10CE($s0)
    ctx->pc = 0x2ee210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4302)));
label_2ee214:
    // 0x2ee214: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EE214u;
    {
        const bool branch_taken_0x2ee214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee214) {
            ctx->pc = 0x2EE218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE214u;
            // 0x2ee218: 0x8e020578  lw          $v0, 0x578($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE268u;
            goto label_2ee268;
        }
    }
    ctx->pc = 0x2EE21Cu;
    // 0x2ee21c: 0xc0bf868  jal         func_2FE1A0
    ctx->pc = 0x2EE21Cu;
    SET_GPR_U32(ctx, 31, 0x2EE224u);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EE21Cu, 0x2EE224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE224u;
label_2ee224:
    // 0x2ee224: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE224u;
    {
        const bool branch_taken_0x2ee224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee224) {
            ctx->pc = 0x2EE228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE224u;
            // 0x2ee228: 0x8e020578  lw          $v0, 0x578($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE268u;
            goto label_2ee268;
        }
    }
    ctx->pc = 0x2EE22Cu;
    // 0x2ee22c: 0xc0bb5f2  jal         func_2ED7C8
    ctx->pc = 0x2EE22Cu;
    SET_GPR_U32(ctx, 31, 0x2EE234u);
    ctx->pc = 0x2EE230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE22Cu;
    // 0x2ee230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED7C8u, 0x2EE22Cu, 0x2EE234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE234u;
label_2ee234:
    // 0x2ee234: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EE234u;
    {
        const bool branch_taken_0x2ee234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE234u;
        // 0x2ee238: 0x8e020578  lw          $v0, 0x578($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee234) {
            ctx->pc = 0x2EE268u;
            goto label_2ee268;
        }
    }
    ctx->pc = 0x2EE23Cu;
label_2ee23c:
    // 0x2ee23c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE23Cu;
    {
        const bool branch_taken_0x2ee23c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee23c) {
            ctx->pc = 0x2EE250u;
            goto label_2ee250;
        }
    }
    ctx->pc = 0x2EE244u;
    // 0x2ee244: 0x8e0205cc  lw          $v0, 0x5CC($s0)
    ctx->pc = 0x2ee244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1484)));
    // 0x2ee248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE248u;
    {
        const bool branch_taken_0x2ee248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE248u;
        // 0x2ee24c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee248) {
            ctx->pc = 0x2EE260u;
            goto label_2ee260;
        }
    }
    ctx->pc = 0x2EE250u;
label_2ee250:
    // 0x2ee250: 0xc0bb688  jal         func_2EDA20
    ctx->pc = 0x2EE250u;
    SET_GPR_U32(ctx, 31, 0x2EE258u);
    ctx->pc = 0x2EE254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE250u;
    // 0x2ee254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA20u, 0x2EE250u, 0x2EE258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE258u;
label_2ee258:
    // 0x2ee258: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE258u;
    {
        const bool branch_taken_0x2ee258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE258u;
        // 0x2ee25c: 0x8e020578  lw          $v0, 0x578($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee258) {
            ctx->pc = 0x2EE268u;
            goto label_2ee268;
        }
    }
    ctx->pc = 0x2EE260u;
label_2ee260:
    // 0x2ee260: 0xae0205cc  sw          $v0, 0x5CC($s0)
    ctx->pc = 0x2ee260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1484), GPR_U32(ctx, 2));
    // 0x2ee264: 0x8e020578  lw          $v0, 0x578($s0)
    ctx->pc = 0x2ee264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1400)));
label_2ee268:
    // 0x2ee268: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE268u;
    {
        const bool branch_taken_0x2ee268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE268u;
        // 0x2ee26c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee268) {
            ctx->pc = 0x2EE280u;
            goto label_2ee280;
        }
    }
    ctx->pc = 0x2EE270u;
    // 0x2ee270: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ee270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ee274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee278: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ee278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee27c: 0xe6000500  swc1        $f0, 0x500($s0)
    ctx->pc = 0x2ee27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
label_2ee280:
    // 0x2ee280: 0x8e02057c  lw          $v0, 0x57C($s0)
    ctx->pc = 0x2ee280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1404)));
    // 0x2ee284: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE284u;
    {
        const bool branch_taken_0x2ee284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee284) {
            ctx->pc = 0x2EE288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE284u;
            // 0x2ee288: 0x8e020580  lw          $v0, 0x580($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE2A0u;
            goto label_2ee2a0;
        }
    }
    ctx->pc = 0x2EE28Cu;
    // 0x2ee28c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ee28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ee290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee294: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ee294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee298: 0xe6000500  swc1        $f0, 0x500($s0)
    ctx->pc = 0x2ee298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
    // 0x2ee29c: 0x8e020580  lw          $v0, 0x580($s0)
    ctx->pc = 0x2ee29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
label_2ee2a0:
    // 0x2ee2a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE2A0u;
    {
        const bool branch_taken_0x2ee2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee2a0) {
            ctx->pc = 0x2EE2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE2A0u;
            // 0x2ee2a4: 0x8e020584  lw          $v0, 0x584($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE2BCu;
            goto label_2ee2bc;
        }
    }
    ctx->pc = 0x2EE2A8u;
    // 0x2ee2a8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ee2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ee2ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee2b0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ee2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee2b4: 0xe60004fc  swc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2ee2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ee2b8: 0x8e020584  lw          $v0, 0x584($s0)
    ctx->pc = 0x2ee2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
label_2ee2bc:
    // 0x2ee2bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE2BCu;
    {
        const bool branch_taken_0x2ee2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee2bc) {
            ctx->pc = 0x2EE2D4u;
            goto label_2ee2d4;
        }
    }
    ctx->pc = 0x2EE2C4u;
    // 0x2ee2c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ee2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ee2c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee2cc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ee2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee2d0: 0xe60004fc  swc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2ee2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
label_2ee2d4:
    // 0x2ee2d4: 0x52200023  beql        $s1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2EE2D4u;
    {
        const bool branch_taken_0x2ee2d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee2d4) {
            ctx->pc = 0x2EE2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE2D4u;
            // 0x2ee2d8: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE364u;
            goto label_2ee364;
        }
    }
    ctx->pc = 0x2EE2DCu;
    // 0x2ee2dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ee2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ee2e0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2ee2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ee2e4: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x2EE2E4u;
    SET_GPR_U32(ctx, 31, 0x2EE2ECu);
    ctx->pc = 0x2EE2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE2E4u;
    // 0x2ee2e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x2EE2E4u, 0x2EE2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE2ECu;
label_2ee2ec:
    // 0x2ee2ec: 0xc60204fc  lwc1        $f2, 0x4FC($s0)
    ctx->pc = 0x2ee2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ee2f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ee2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee2f4: 0x0  nop
    ctx->pc = 0x2ee2f4u;
    // NOP
    // 0x2ee2f8: 0x0  nop
    ctx->pc = 0x2ee2f8u;
    // NOP
    // 0x2ee2fc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2ee2fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2ee300: 0xe60204fc  swc1        $f2, 0x4FC($s0)
    ctx->pc = 0x2ee300u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ee304: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2ee304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee308: 0x0  nop
    ctx->pc = 0x2ee308u;
    // NOP
    // 0x2ee30c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2ee30cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ee310: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2ee310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2ee314: 0x8e02041c  lw          $v0, 0x41C($s0)
    ctx->pc = 0x2ee314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x2ee318: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2EE318u;
    {
        const bool branch_taken_0x2ee318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ee318) {
            ctx->pc = 0x2EE31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE318u;
            // 0x2ee31c: 0x8e03041c  lw          $v1, 0x41C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE354u;
            goto label_2ee354;
        }
    }
    ctx->pc = 0x2EE320u;
    // 0x2ee320: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x2ee320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
    // 0x2ee324: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE324u;
    {
        const bool branch_taken_0x2ee324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee324) {
            ctx->pc = 0x2EE328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE324u;
            // 0x2ee328: 0x8e03041c  lw          $v1, 0x41C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE354u;
            goto label_2ee354;
        }
    }
    ctx->pc = 0x2EE32Cu;
    // 0x2ee32c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ee32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ee330: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ee330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ee334: 0xc60104fc  lwc1        $f1, 0x4FC($s0)
    ctx->pc = 0x2ee334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee338: 0x46001546  mov.s       $f21, $f2
    ctx->pc = 0x2ee338u;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
    // 0x2ee33c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ee33cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ee340: 0xe60104fc  swc1        $f1, 0x4FC($s0)
    ctx->pc = 0x2ee340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ee344: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2ee344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee348: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ee348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ee34c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE34Cu;
    {
        const bool branch_taken_0x2ee34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE34Cu;
        // 0x2ee350: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee34c) {
            ctx->pc = 0x2EE360u;
            goto label_2ee360;
        }
    }
    ctx->pc = 0x2EE354u;
label_2ee354:
    // 0x2ee354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ee354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee358: 0xae02041c  sw          $v0, 0x41C($s0)
    ctx->pc = 0x2ee358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 2));
    // 0x2ee35c: 0xae030420  sw          $v1, 0x420($s0)
    ctx->pc = 0x2ee35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 3));
label_2ee360:
    // 0x2ee360: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2ee360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2ee364:
    // 0x2ee364: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ee364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ee368: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE368u;
    {
        const bool branch_taken_0x2ee368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE368u;
        // 0x2ee36c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee368) {
            ctx->pc = 0x2EE398u;
            goto label_2ee398;
        }
    }
    ctx->pc = 0x2EE370u;
    // 0x2ee370: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE370u;
    {
        const bool branch_taken_0x2ee370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE370u;
        // 0x2ee374: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee370) {
            ctx->pc = 0x2EE398u;
            goto label_2ee398;
        }
    }
    ctx->pc = 0x2EE378u;
    // 0x2ee378: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE378u;
    {
        const bool branch_taken_0x2ee378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE378u;
        // 0x2ee37c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee378) {
            ctx->pc = 0x2EE398u;
            goto label_2ee398;
        }
    }
    ctx->pc = 0x2EE380u;
    // 0x2ee380: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EE380u;
    {
        const bool branch_taken_0x2ee380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EE384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE380u;
        // 0x2ee384: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee380) {
            ctx->pc = 0x2EE3F0u;
            goto label_2ee3f0;
        }
    }
    ctx->pc = 0x2EE388u;
    // 0x2ee388: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x2ee388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ee38c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2ee38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x2ee390: 0x10640017  beq         $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EE390u;
    {
        const bool branch_taken_0x2ee390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ee390) {
            ctx->pc = 0x2EE3F0u;
            goto label_2ee3f0;
        }
    }
    ctx->pc = 0x2EE398u;
label_2ee398:
    // 0x2ee398: 0xc60004fc  lwc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2ee398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee39c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2ee39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2ee3a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ee3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ee3a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ee3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ee3a8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ee3a8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ee3ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ee3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee3b0: 0x0  nop
    ctx->pc = 0x2ee3b0u;
    // NOP
    // 0x2ee3b4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE3B4u;
    {
        const bool branch_taken_0x2ee3b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE3B4u;
        // 0x2ee3b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee3b4) {
            ctx->pc = 0x2EE3CCu;
            goto label_2ee3cc;
        }
    }
    ctx->pc = 0x2EE3BCu;
    // 0x2ee3bc: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x2ee3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x2ee3c0: 0xae02041c  sw          $v0, 0x41C($s0)
    ctx->pc = 0x2ee3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 2));
    // 0x2ee3c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EE3C4u;
    {
        const bool branch_taken_0x2ee3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE3C4u;
        // 0x2ee3c8: 0xae030420  sw          $v1, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee3c4) {
            ctx->pc = 0x2EE3F0u;
            goto label_2ee3f0;
        }
    }
    ctx->pc = 0x2EE3CCu;
label_2ee3cc:
    // 0x2ee3cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ee3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ee3d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2ee3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2ee3d4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ee3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee3d8: 0xe60004fc  swc1        $f0, 0x4FC($s0)
    ctx->pc = 0x2ee3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1276), bits); }
    // 0x2ee3dc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2ee3dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2ee3e0: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2ee3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2ee3e4: 0x8e02041c  lw          $v0, 0x41C($s0)
    ctx->pc = 0x2ee3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x2ee3e8: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x2ee3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
    // 0x2ee3ec: 0xae020420  sw          $v0, 0x420($s0)
    ctx->pc = 0x2ee3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
label_2ee3f0:
    // 0x2ee3f0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2ee3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2ee3f4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2ee3f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2ee3f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee3fc: 0x0  nop
    ctx->pc = 0x2ee3fcu;
    // NOP
    // 0x2ee400: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2ee400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee404: 0x0  nop
    ctx->pc = 0x2ee404u;
    // NOP
    // 0x2ee408: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x2EE408u;
    {
        const bool branch_taken_0x2ee408 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE408u;
        // 0x2ee40c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee408) {
            ctx->pc = 0x2EE530u;
            goto label_2ee530;
        }
    }
    ctx->pc = 0x2EE410u;
    // 0x2ee410: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ee410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ee414: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ee418: 0x10430045  beq         $v0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2EE418u;
    {
        const bool branch_taken_0x2ee418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee418) {
            ctx->pc = 0x2EE530u;
            goto label_2ee530;
        }
    }
    ctx->pc = 0x2EE420u;
    // 0x2ee420: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2ee420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2ee424: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2ee424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2ee428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee42c: 0x0  nop
    ctx->pc = 0x2ee42cu;
    // NOP
    // 0x2ee430: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2ee430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee434: 0x0  nop
    ctx->pc = 0x2ee434u;
    // NOP
    // 0x2ee438: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x2EE438u;
    {
        const bool branch_taken_0x2ee438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee438) {
            ctx->pc = 0x2EE43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE438u;
            // 0x2ee43c: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE4A8u;
            goto label_2ee4a8;
        }
    }
    ctx->pc = 0x2EE440u;
    // 0x2ee440: 0xc60111dc  lwc1        $f1, 0x11DC($s0)
    ctx->pc = 0x2ee440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee444: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2ee444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ee448: 0x0  nop
    ctx->pc = 0x2ee448u;
    // NOP
    // 0x2ee44c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2ee44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee450: 0x0  nop
    ctx->pc = 0x2ee450u;
    // NOP
    // 0x2ee454: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE454u;
    {
        const bool branch_taken_0x2ee454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE454u;
        // 0x2ee458: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee454) {
            ctx->pc = 0x2EE47Cu;
            goto label_2ee47c;
        }
    }
    ctx->pc = 0x2EE45Cu;
    // 0x2ee45c: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2ee45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee460: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ee460u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ee464: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2ee464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee468: 0x0  nop
    ctx->pc = 0x2ee468u;
    // NOP
    // 0x2ee46c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE46Cu;
    {
        const bool branch_taken_0x2ee46c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE46Cu;
        // 0x2ee470: 0xe60011dc  swc1        $f0, 0x11DC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee46c) {
            ctx->pc = 0x2EE478u;
            goto label_2ee478;
        }
    }
    ctx->pc = 0x2EE474u;
    // 0x2ee474: 0xe60211dc  swc1        $f2, 0x11DC($s0)
    ctx->pc = 0x2ee474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4572), bits); }
label_2ee478:
    // 0x2ee478: 0xc60111dc  lwc1        $f1, 0x11DC($s0)
    ctx->pc = 0x2ee478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ee47c:
    // 0x2ee47c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ee47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee480: 0x0  nop
    ctx->pc = 0x2ee480u;
    // NOP
    // 0x2ee484: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2ee484u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee488: 0x0  nop
    ctx->pc = 0x2ee488u;
    // NOP
    // 0x2ee48c: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
    ctx->pc = 0x2EE48Cu;
    {
        const bool branch_taken_0x2ee48c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee48c) {
            ctx->pc = 0x2EE490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE48Cu;
            // 0x2ee490: 0x8e0205a4  lw          $v0, 0x5A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE548u;
            goto label_2ee548;
        }
    }
    ctx->pc = 0x2EE494u;
    // 0x2ee494: 0x5620002c  bnel        $s1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2EE494u;
    {
        const bool branch_taken_0x2ee494 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee494) {
            ctx->pc = 0x2EE498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE494u;
            // 0x2ee498: 0x8e0205a4  lw          $v0, 0x5A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE548u;
            goto label_2ee548;
        }
    }
    ctx->pc = 0x2EE49Cu;
    // 0x2ee49c: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x2ee49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x2ee4a0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2EE4A0u;
    {
        const bool branch_taken_0x2ee4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4A0u;
        // 0x2ee4a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4a0) {
            ctx->pc = 0x2EE524u;
            goto label_2ee524;
        }
    }
    ctx->pc = 0x2EE4A8u;
label_2ee4a8:
    // 0x2ee4a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ee4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee4ac: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EE4ACu;
    {
        const bool branch_taken_0x2ee4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee4ac) {
            ctx->pc = 0x2EE4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE4ACu;
            // 0x2ee4b0: 0x8e03041c  lw          $v1, 0x41C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE520u;
            goto label_2ee520;
        }
    }
    ctx->pc = 0x2EE4B4u;
    // 0x2ee4b4: 0x8e0211e8  lw          $v0, 0x11E8($s0)
    ctx->pc = 0x2ee4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4584)));
    // 0x2ee4b8: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EE4B8u;
    {
        const bool branch_taken_0x2ee4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee4b8) {
            ctx->pc = 0x2EE4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE4B8u;
            // 0x2ee4bc: 0x8e03041c  lw          $v1, 0x41C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE520u;
            goto label_2ee520;
        }
    }
    ctx->pc = 0x2EE4C0u;
    // 0x2ee4c0: 0x8c510334  lw          $s1, 0x334($v0)
    ctx->pc = 0x2ee4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x2ee4c4: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2ee4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2ee4c8: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2ee4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2ee4cc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2ee4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ee4d0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2EE4D0u;
    {
        const bool branch_taken_0x2ee4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4D0u;
        // 0x2ee4d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4d0) {
            ctx->pc = 0x2EE50Cu;
            goto label_2ee50c;
        }
    }
    ctx->pc = 0x2EE4D8u;
    // 0x2ee4d8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2ee4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2ee4dc: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE4DCu;
    {
        const bool branch_taken_0x2ee4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee4dc) {
            ctx->pc = 0x2EE4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE4DCu;
            // 0x2ee4e0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE510u;
            goto label_2ee510;
        }
    }
    ctx->pc = 0x2EE4E4u;
    // 0x2ee4e4: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2EE4E4u;
    SET_GPR_U32(ctx, 31, 0x2EE4ECu);
    ctx->pc = 0x2EE4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE4E4u;
    // 0x2ee4e8: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2EE4E4u, 0x2EE4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE4ECu;
label_2ee4ec:
    // 0x2ee4ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE4ECu;
    {
        const bool branch_taken_0x2ee4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee4ec) {
            ctx->pc = 0x2EE4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE4ECu;
            // 0x2ee4f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE510u;
            goto label_2ee510;
        }
    }
    ctx->pc = 0x2EE4F4u;
    // 0x2ee4f4: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x2ee4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x2ee4f8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2ee4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2ee4fc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE4FCu;
    {
        const bool branch_taken_0x2ee4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE4FCu;
        // 0x2ee500: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee4fc) {
            ctx->pc = 0x2EE50Cu;
            goto label_2ee50c;
        }
    }
    ctx->pc = 0x2EE504u;
    // 0x2ee504: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE504u;
    {
        const bool branch_taken_0x2ee504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee504) {
            ctx->pc = 0x2EE510u;
            goto label_2ee510;
        }
    }
    ctx->pc = 0x2EE50Cu;
label_2ee50c:
    // 0x2ee50c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ee50cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ee510:
    // 0x2ee510: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE510u;
    {
        const bool branch_taken_0x2ee510 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE510u;
        // 0x2ee514: 0x8e03041c  lw          $v1, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee510) {
            ctx->pc = 0x2EE520u;
            goto label_2ee520;
        }
    }
    ctx->pc = 0x2EE518u;
    // 0x2ee518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE518u;
    {
        const bool branch_taken_0x2ee518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE518u;
        // 0x2ee51c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee518) {
            ctx->pc = 0x2EE524u;
            goto label_2ee524;
        }
    }
    ctx->pc = 0x2EE520u;
label_2ee520:
    // 0x2ee520: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ee520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ee524:
    // 0x2ee524: 0xae02041c  sw          $v0, 0x41C($s0)
    ctx->pc = 0x2ee524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 2));
    // 0x2ee528: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE528u;
    {
        const bool branch_taken_0x2ee528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE528u;
        // 0x2ee52c: 0xae030420  sw          $v1, 0x420($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee528) {
            ctx->pc = 0x2EE544u;
            goto label_2ee544;
        }
    }
    ctx->pc = 0x2EE530u;
label_2ee530:
    // 0x2ee530: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE530u;
    {
        const bool branch_taken_0x2ee530 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee530) {
            ctx->pc = 0x2EE534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE530u;
            // 0x2ee534: 0x8e0205a4  lw          $v0, 0x5A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE548u;
            goto label_2ee548;
        }
    }
    ctx->pc = 0x2EE538u;
    // 0x2ee538: 0x8e02041c  lw          $v0, 0x41C($s0)
    ctx->pc = 0x2ee538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x2ee53c: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x2ee53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
    // 0x2ee540: 0xae020420  sw          $v0, 0x420($s0)
    ctx->pc = 0x2ee540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
label_2ee544:
    // 0x2ee544: 0x8e0205a4  lw          $v0, 0x5A4($s0)
    ctx->pc = 0x2ee544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1444)));
label_2ee548:
    // 0x2ee548: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE548u;
    {
        const bool branch_taken_0x2ee548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee548) {
            ctx->pc = 0x2EE564u;
            goto label_2ee564;
        }
    }
    ctx->pc = 0x2EE550u;
    // 0x2ee550: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x2ee550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x2ee554: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE554u;
    {
        const bool branch_taken_0x2ee554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE554u;
        // 0x2ee558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee554) {
            ctx->pc = 0x2EE564u;
            goto label_2ee564;
        }
    }
    ctx->pc = 0x2EE55Cu;
    // 0x2ee55c: 0xae030420  sw          $v1, 0x420($s0)
    ctx->pc = 0x2ee55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 3));
    // 0x2ee560: 0xae02041c  sw          $v0, 0x41C($s0)
    ctx->pc = 0x2ee560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 2));
label_2ee564:
    // 0x2ee564: 0xc08da92  jal         func_236A48
    ctx->pc = 0x2EE564u;
    SET_GPR_U32(ctx, 31, 0x2EE56Cu);
    ctx->pc = 0x2EE568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE564u;
    // 0x2ee568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2EE564u, 0x2EE56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE56Cu;
label_2ee56c:
    // 0x2ee56c: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x2EE56Cu;
    {
        const bool branch_taken_0x2ee56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE56Cu;
        // 0x2ee570: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee56c) {
            ctx->pc = 0x2EE7A4u;
            goto label_2ee7a4;
        }
    }
    ctx->pc = 0x2EE574u;
    // 0x2ee574: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2ee574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2ee578: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ee57c: 0x5043008a  beql        $v0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x2EE57Cu;
    {
        const bool branch_taken_0x2ee57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee57c) {
            ctx->pc = 0x2EE580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE57Cu;
            // 0x2ee580: 0xae00129c  sw          $zero, 0x129C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4764), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE584u;
    // 0x2ee584: 0x9202047d  lbu         $v0, 0x47D($s0)
    ctx->pc = 0x2ee584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1149)));
    // 0x2ee588: 0x54400087  bnel        $v0, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x2EE588u;
    {
        const bool branch_taken_0x2ee588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee588) {
            ctx->pc = 0x2EE58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE588u;
            // 0x2ee58c: 0xae00129c  sw          $zero, 0x129C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4764), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE590u;
    // 0x2ee590: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ee590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ee594: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2ee594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2ee598: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ee59c: 0x50430082  beql        $v0, $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x2EE59Cu;
    {
        const bool branch_taken_0x2ee59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ee59c) {
            ctx->pc = 0x2EE5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE59Cu;
            // 0x2ee5a0: 0xae00129c  sw          $zero, 0x129C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4764), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE5A4u;
    // 0x2ee5a4: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2ee5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ee5a8: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2ee5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2ee5ac: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x2ee5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x2ee5b0: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2ee5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ee5b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE5B4u;
    {
        const bool branch_taken_0x2ee5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5B4u;
        // 0x2ee5b8: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5b4) {
            ctx->pc = 0x2EE5C4u;
            goto label_2ee5c4;
        }
    }
    ctx->pc = 0x2EE5BCu;
    // 0x2ee5bc: 0x5462007a  bnel        $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2EE5BCu;
    {
        const bool branch_taken_0x2ee5bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ee5bc) {
            ctx->pc = 0x2EE5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE5BCu;
            // 0x2ee5c0: 0xae00129c  sw          $zero, 0x129C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4764), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE5C4u;
label_2ee5c4:
    // 0x2ee5c4: 0xc0bf228  jal         func_2FC8A0
    ctx->pc = 0x2EE5C4u;
    SET_GPR_U32(ctx, 31, 0x2EE5CCu);
    ctx->pc = 0x2EE5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE5C4u;
    // 0x2ee5c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8A0u, 0x2EE5C4u, 0x2EE5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE5CCu;
label_2ee5cc:
    // 0x2ee5cc: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2EE5CCu;
    {
        const bool branch_taken_0x2ee5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE5CCu;
        // 0x2ee5d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee5cc) {
            ctx->pc = 0x2EE7A4u;
            goto label_2ee7a4;
        }
    }
    ctx->pc = 0x2EE5D4u;
    // 0x2ee5d4: 0xc0f7da4  jal         func_3DF690
    ctx->pc = 0x2EE5D4u;
    SET_GPR_U32(ctx, 31, 0x2EE5DCu);
    ctx->pc = 0x2EE5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE5D4u;
    // 0x2ee5d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2EE5D4u, 0x2EE5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE5DCu;
label_2ee5dc:
    // 0x2ee5dc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE5DCu;
    {
        const bool branch_taken_0x2ee5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee5dc) {
            ctx->pc = 0x2EE5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE5DCu;
            // 0x2ee5e0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE604u;
            goto label_2ee604;
        }
    }
    ctx->pc = 0x2EE5E4u;
    // 0x2ee5e4: 0xc0f7da0  jal         func_3DF680
    ctx->pc = 0x2EE5E4u;
    SET_GPR_U32(ctx, 31, 0x2EE5ECu);
    ctx->pc = 0x2EE5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE5E4u;
    // 0x2ee5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2EE5E4u, 0x2EE5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE5ECu;
label_2ee5ec:
    // 0x2ee5ec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE5ECu;
    {
        const bool branch_taken_0x2ee5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee5ec) {
            ctx->pc = 0x2EE5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE5ECu;
            // 0x2ee5f0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE604u;
            goto label_2ee604;
        }
    }
    ctx->pc = 0x2EE5F4u;
    // 0x2ee5f4: 0xc0f7da8  jal         func_3DF6A0
    ctx->pc = 0x2EE5F4u;
    SET_GPR_U32(ctx, 31, 0x2EE5FCu);
    ctx->pc = 0x2EE5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE5F4u;
    // 0x2ee5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2EE5F4u, 0x2EE5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE5FCu;
label_2ee5fc:
    // 0x2ee5fc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE5FCu;
    {
        const bool branch_taken_0x2ee5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee5fc) {
            ctx->pc = 0x2EE600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE5FCu;
            // 0x2ee600: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE604u;
            goto label_2ee604;
        }
    }
    ctx->pc = 0x2EE604u;
label_2ee604:
    // 0x2ee604: 0x56200068  bnel        $s1, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x2EE604u;
    {
        const bool branch_taken_0x2ee604 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee604) {
            ctx->pc = 0x2EE608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE604u;
            // 0x2ee608: 0xae00129c  sw          $zero, 0x129C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4764), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE60Cu;
    // 0x2ee60c: 0x8e020550  lw          $v0, 0x550($s0)
    ctx->pc = 0x2ee60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x2ee610: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2EE610u;
    {
        const bool branch_taken_0x2ee610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE610u;
        // 0x2ee614: 0x8e020554  lw          $v0, 0x554($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee610) {
            ctx->pc = 0x2EE74Cu;
            goto label_2ee74c;
        }
    }
    ctx->pc = 0x2EE618u;
    // 0x2ee618: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2EE618u;
    {
        const bool branch_taken_0x2ee618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE618u;
        // 0x2ee61c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee618) {
            ctx->pc = 0x2EE714u;
            goto label_2ee714;
        }
    }
    ctx->pc = 0x2EE620u;
    // 0x2ee620: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2ee620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2ee624: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x2ee624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x2ee628: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ee62c: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2EE62Cu;
    {
        const bool branch_taken_0x2ee62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EE630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE62Cu;
        // 0x2ee630: 0xae000554  sw          $zero, 0x554($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee62c) {
            ctx->pc = 0x2EE6C4u;
            goto label_2ee6c4;
        }
    }
    ctx->pc = 0x2EE634u;
    // 0x2ee634: 0xc600129c  lwc1        $f0, 0x129C($s0)
    ctx->pc = 0x2ee634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee638: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ee638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ee63c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ee63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ee640: 0x0  nop
    ctx->pc = 0x2ee640u;
    // NOP
    // 0x2ee644: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2ee644u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee648: 0x0  nop
    ctx->pc = 0x2ee648u;
    // NOP
    // 0x2ee64c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE64Cu;
    {
        const bool branch_taken_0x2ee64c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE64Cu;
        // 0x2ee650: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee64c) {
            ctx->pc = 0x2EE664u;
            goto label_2ee664;
        }
    }
    ctx->pc = 0x2EE654u;
    // 0x2ee654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee658: 0xe601129c  swc1        $f1, 0x129C($s0)
    ctx->pc = 0x2ee658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4764), bits); }
    // 0x2ee65c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE65Cu;
    {
        const bool branch_taken_0x2ee65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE65Cu;
        // 0x2ee660: 0xae020564  sw          $v0, 0x564($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee65c) {
            ctx->pc = 0x2EE6A0u;
            goto label_2ee6a0;
        }
    }
    ctx->pc = 0x2EE664u;
label_2ee664:
    // 0x2ee664: 0xc0f7da4  jal         func_3DF690
    ctx->pc = 0x2EE664u;
    SET_GPR_U32(ctx, 31, 0x2EE66Cu);
    ctx->pc = 0x2EE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE664u;
    // 0x2ee668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2EE664u, 0x2EE66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE66Cu;
label_2ee66c:
    // 0x2ee66c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE66Cu;
    {
        const bool branch_taken_0x2ee66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee66c) {
            ctx->pc = 0x2EE670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE66Cu;
            // 0x2ee670: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE694u;
            goto label_2ee694;
        }
    }
    ctx->pc = 0x2EE674u;
    // 0x2ee674: 0xc0f7da0  jal         func_3DF680
    ctx->pc = 0x2EE674u;
    SET_GPR_U32(ctx, 31, 0x2EE67Cu);
    ctx->pc = 0x2EE678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE674u;
    // 0x2ee678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2EE674u, 0x2EE67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE67Cu;
label_2ee67c:
    // 0x2ee67c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE67Cu;
    {
        const bool branch_taken_0x2ee67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee67c) {
            ctx->pc = 0x2EE680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE67Cu;
            // 0x2ee680: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE694u;
            goto label_2ee694;
        }
    }
    ctx->pc = 0x2EE684u;
    // 0x2ee684: 0xc0f7da8  jal         func_3DF6A0
    ctx->pc = 0x2EE684u;
    SET_GPR_U32(ctx, 31, 0x2EE68Cu);
    ctx->pc = 0x2EE688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE684u;
    // 0x2ee688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x2EE684u, 0x2EE68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE68Cu;
label_2ee68c:
    // 0x2ee68c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE68Cu;
    {
        const bool branch_taken_0x2ee68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee68c) {
            ctx->pc = 0x2EE690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE68Cu;
            // 0x2ee690: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE694u;
            goto label_2ee694;
        }
    }
    ctx->pc = 0x2EE694u;
label_2ee694:
    // 0x2ee694: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE694u;
    {
        const bool branch_taken_0x2ee694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE694u;
        // 0x2ee698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee694) {
            ctx->pc = 0x2EE6A0u;
            goto label_2ee6a0;
        }
    }
    ctx->pc = 0x2EE69Cu;
    // 0x2ee69c: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x2ee69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
label_2ee6a0:
    // 0x2ee6a0: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ee6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ee6a4: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x2ee6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x2ee6a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ee6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ee6ac: 0x3c04ffef  lui         $a0, 0xFFEF
    ctx->pc = 0x2ee6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65519 << 16));
    // 0x2ee6b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ee6b4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ee6b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ee6b8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ee6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ee6bc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2EE6BCu;
    {
        const bool branch_taken_0x2ee6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6BCu;
        // 0x2ee6c0: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6bc) {
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE6C4u;
label_2ee6c4:
    // 0x2ee6c4: 0x8e0411c0  lw          $a0, 0x11C0($s0)
    ctx->pc = 0x2ee6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ee6c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ee6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee6cc: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x2ee6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x2ee6d0: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x2ee6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2ee6d4: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE6D4u;
    {
        const bool branch_taken_0x2ee6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2EE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6D4u;
        // 0x2ee6d8: 0xae060564  sw          $a2, 0x564($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6d4) {
            ctx->pc = 0x2EE6F8u;
            goto label_2ee6f8;
        }
    }
    ctx->pc = 0x2EE6DCu;
    // 0x2ee6dc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2ee6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2ee6e0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2ee6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ee6e4: 0x10430030  beq         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2EE6E4u;
    {
        const bool branch_taken_0x2ee6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6E4u;
        // 0x2ee6e8: 0x831025  or          $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6e4) {
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE6ECu;
    // 0x2ee6ec: 0xae060550  sw          $a2, 0x550($s0)
    ctx->pc = 0x2ee6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 6));
    // 0x2ee6f0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2EE6F0u;
    {
        const bool branch_taken_0x2ee6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE6F0u;
        // 0x2ee6f4: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee6f0) {
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE6F8u;
label_2ee6f8:
    // 0x2ee6f8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2ee6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2ee6fc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2ee6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ee700: 0x14430029  bne         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2EE700u;
    {
        const bool branch_taken_0x2ee700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EE704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE700u;
        // 0x2ee704: 0x851025  or          $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee700) {
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE708u;
    // 0x2ee708: 0xae060554  sw          $a2, 0x554($s0)
    ctx->pc = 0x2ee708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 6));
    // 0x2ee70c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2EE70Cu;
    {
        const bool branch_taken_0x2ee70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE70Cu;
        // 0x2ee710: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee70c) {
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE714u;
label_2ee714:
    // 0x2ee714: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2ee714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2ee718: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ee71c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE71Cu;
    {
        const bool branch_taken_0x2ee71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EE720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE71Cu;
        // 0x2ee720: 0xae000550  sw          $zero, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee71c) {
            ctx->pc = 0x2EE734u;
            goto label_2ee734;
        }
    }
    ctx->pc = 0x2EE724u;
    // 0x2ee724: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x2ee724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ee728: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x2ee728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x2ee72c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE72Cu;
    {
        const bool branch_taken_0x2ee72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE72Cu;
        // 0x2ee730: 0x3c040008  lui         $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee72c) {
            ctx->pc = 0x2EE770u;
            goto label_2ee770;
        }
    }
    ctx->pc = 0x2EE734u;
label_2ee734:
    // 0x2ee734: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ee734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ee738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee73c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee740: 0xae020550  sw          $v0, 0x550($s0)
    ctx->pc = 0x2ee740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
    // 0x2ee744: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2EE744u;
    {
        const bool branch_taken_0x2ee744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE744u;
        // 0x2ee748: 0xe600129c  swc1        $f0, 0x129C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4764), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee744) {
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE74Cu;
label_2ee74c:
    // 0x2ee74c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE74Cu;
    {
        const bool branch_taken_0x2ee74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE74Cu;
        // 0x2ee750: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee74c) {
            ctx->pc = 0x2EE7A4u;
            goto label_2ee7a4;
        }
    }
    ctx->pc = 0x2EE754u;
    // 0x2ee754: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2ee754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2ee758: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ee75c: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2EE75Cu;
    {
        const bool branch_taken_0x2ee75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE75Cu;
        // 0x2ee760: 0xae000554  sw          $zero, 0x554($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee75c) {
            ctx->pc = 0x2EE78Cu;
            goto label_2ee78c;
        }
    }
    ctx->pc = 0x2EE764u;
    // 0x2ee764: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x2ee764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ee768: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x2ee768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x2ee76c: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x2ee76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
label_2ee770:
    // 0x2ee770: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ee770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee774: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ee774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ee778: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ee778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ee77c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ee77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ee780: 0xae050564  sw          $a1, 0x564($s0)
    ctx->pc = 0x2ee780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 5));
    // 0x2ee784: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE784u;
    {
        const bool branch_taken_0x2ee784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE784u;
        // 0x2ee788: 0xae0311c0  sw          $v1, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee784) {
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE78Cu;
label_2ee78c:
    // 0x2ee78c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ee78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ee790: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee798: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x2ee798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x2ee79c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE79Cu;
    {
        const bool branch_taken_0x2ee79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE79Cu;
        // 0x2ee7a0: 0xe600129c  swc1        $f0, 0x129C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4764), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee79c) {
            ctx->pc = 0x2EE7A8u;
            goto label_2ee7a8;
        }
    }
    ctx->pc = 0x2EE7A4u;
label_2ee7a4:
    // 0x2ee7a4: 0xae00129c  sw          $zero, 0x129C($s0)
    ctx->pc = 0x2ee7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4764), GPR_U32(ctx, 0));
label_2ee7a8:
    // 0x2ee7a8: 0xc0bf228  jal         func_2FC8A0
    ctx->pc = 0x2EE7A8u;
    SET_GPR_U32(ctx, 31, 0x2EE7B0u);
    ctx->pc = 0x2EE7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE7A8u;
    // 0x2ee7ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8A0u, 0x2EE7A8u, 0x2EE7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE7B0u;
label_2ee7b0:
    // 0x2ee7b0: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2EE7B0u;
    {
        const bool branch_taken_0x2ee7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee7b0) {
            ctx->pc = 0x2EE980u;
            goto label_2ee980;
        }
    }
    ctx->pc = 0x2EE7B8u;
    // 0x2ee7b8: 0x8e020550  lw          $v0, 0x550($s0)
    ctx->pc = 0x2ee7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x2ee7bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE7BCu;
    {
        const bool branch_taken_0x2ee7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7BCu;
        // 0x2ee7c0: 0xc60112b8  lwc1        $f1, 0x12B8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7bc) {
            ctx->pc = 0x2EE7D0u;
            goto label_2ee7d0;
        }
    }
    ctx->pc = 0x2EE7C4u;
    // 0x2ee7c4: 0x8e020554  lw          $v0, 0x554($s0)
    ctx->pc = 0x2ee7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x2ee7c8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EE7C8u;
    {
        const bool branch_taken_0x2ee7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee7c8) {
            ctx->pc = 0x2EE848u;
            goto label_2ee848;
        }
    }
    ctx->pc = 0x2EE7D0u;
label_2ee7d0:
    // 0x2ee7d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ee7d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee7d4: 0x0  nop
    ctx->pc = 0x2ee7d4u;
    // NOP
    // 0x2ee7d8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2ee7d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee7dc: 0x0  nop
    ctx->pc = 0x2ee7dcu;
    // NOP
    // 0x2ee7e0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2EE7E0u;
    {
        const bool branch_taken_0x2ee7e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee7e0) {
            ctx->pc = 0x2EE838u;
            goto label_2ee838;
        }
    }
    ctx->pc = 0x2EE7E8u;
    // 0x2ee7e8: 0x8e0304f4  lw          $v1, 0x4F4($s0)
    ctx->pc = 0x2ee7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
    // 0x2ee7ec: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2ee7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2ee7f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE7F0u;
    {
        const bool branch_taken_0x2ee7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7F0u;
        // 0x2ee7f4: 0x38620003  xori        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7f0) {
            ctx->pc = 0x2EE800u;
            goto label_2ee800;
        }
    }
    ctx->pc = 0x2EE7F8u;
    // 0x2ee7f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EE7F8u;
    {
        const bool branch_taken_0x2ee7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE7F8u;
        // 0x2ee7fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee7f8) {
            ctx->pc = 0x2EE824u;
            goto label_2ee824;
        }
    }
    ctx->pc = 0x2EE800u;
label_2ee800:
    // 0x2ee800: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE800u;
    {
        const bool branch_taken_0x2ee800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE800u;
        // 0x2ee804: 0x38620005  xori        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee800) {
            ctx->pc = 0x2EE81Cu;
            goto label_2ee81c;
        }
    }
    ctx->pc = 0x2EE808u;
    // 0x2ee808: 0xae0011f0  sw          $zero, 0x11F0($s0)
    ctx->pc = 0x2ee808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4592), GPR_U32(ctx, 0));
    // 0x2ee80c: 0xc0bb736  jal         func_2EDCD8
    ctx->pc = 0x2EE80Cu;
    SET_GPR_U32(ctx, 31, 0x2EE814u);
    ctx->pc = 0x2EE810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE80Cu;
    // 0x2ee810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDCD8u, 0x2EE80Cu, 0x2EE814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE814u;
label_2ee814:
    // 0x2ee814: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2EE814u;
    {
        const bool branch_taken_0x2ee814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee814) {
            ctx->pc = 0x2EE980u;
            goto label_2ee980;
        }
    }
    ctx->pc = 0x2EE81Cu;
label_2ee81c:
    // 0x2ee81c: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2EE81Cu;
    {
        const bool branch_taken_0x2ee81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE81Cu;
        // 0x2ee820: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee81c) {
            ctx->pc = 0x2EE980u;
            goto label_2ee980;
        }
    }
    ctx->pc = 0x2EE824u;
label_2ee824:
    // 0x2ee824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee828: 0xc0bb736  jal         func_2EDCD8
    ctx->pc = 0x2EE828u;
    SET_GPR_U32(ctx, 31, 0x2EE830u);
    ctx->pc = 0x2EE82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE828u;
    // 0x2ee82c: 0xae0211f0  sw          $v0, 0x11F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDCD8u, 0x2EE828u, 0x2EE830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE830u;
label_2ee830:
    // 0x2ee830: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2EE830u;
    {
        const bool branch_taken_0x2ee830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee830) {
            ctx->pc = 0x2EE980u;
            goto label_2ee980;
        }
    }
    ctx->pc = 0x2EE838u;
label_2ee838:
    // 0x2ee838: 0xc0bb740  jal         func_2EDD00
    ctx->pc = 0x2EE838u;
    SET_GPR_U32(ctx, 31, 0x2EE840u);
    ctx->pc = 0x2EE83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE838u;
    // 0x2ee83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD00u, 0x2EE838u, 0x2EE840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE840u;
label_2ee840:
    // 0x2ee840: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2EE840u;
    {
        const bool branch_taken_0x2ee840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee840) {
            ctx->pc = 0x2EE980u;
            goto label_2ee980;
        }
    }
    ctx->pc = 0x2EE848u;
label_2ee848:
    // 0x2ee848: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ee848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee84c: 0x0  nop
    ctx->pc = 0x2ee84cu;
    // NOP
    // 0x2ee850: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ee850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee854: 0x0  nop
    ctx->pc = 0x2ee854u;
    // NOP
    // 0x2ee858: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x2EE858u;
    {
        const bool branch_taken_0x2ee858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee858) {
            ctx->pc = 0x2EE980u;
            goto label_2ee980;
        }
    }
    ctx->pc = 0x2EE860u;
    // 0x2ee860: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x2EE860u;
    SET_GPR_U32(ctx, 31, 0x2EE868u);
    ctx->pc = 0x2EE864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE860u;
    // 0x2ee864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2EE860u, 0x2EE868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE868u;
label_2ee868:
    // 0x2ee868: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2EE868u;
    {
        const bool branch_taken_0x2ee868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee868) {
            ctx->pc = 0x2EE980u;
            goto label_2ee980;
        }
    }
    ctx->pc = 0x2EE870u;
    // 0x2ee870: 0xc0b93fe  jal         func_2E4FF8
    ctx->pc = 0x2EE870u;
    SET_GPR_U32(ctx, 31, 0x2EE878u);
    ctx->pc = 0x2EE874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE870u;
    // 0x2ee874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF8u, 0x2EE870u, 0x2EE878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE878u;
label_2ee878:
    // 0x2ee878: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2EE878u;
    {
        const bool branch_taken_0x2ee878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE878u;
        // 0x2ee87c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee878) {
            ctx->pc = 0x2EE980u;
            goto label_2ee980;
        }
    }
    ctx->pc = 0x2EE880u;
    // 0x2ee880: 0xc0bb5de  jal         func_2ED778
    ctx->pc = 0x2EE880u;
    SET_GPR_U32(ctx, 31, 0x2EE888u);
    ctx->pc = 0x2EE884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE880u;
    // 0x2ee884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EE880u, 0x2EE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE888u;
label_2ee888:
    // 0x2ee888: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2EE888u;
    {
        const bool branch_taken_0x2ee888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee888) {
            ctx->pc = 0x2EE88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE888u;
            // 0x2ee88c: 0x92021384  lbu         $v0, 0x1384($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE93Cu;
            goto label_2ee93c;
        }
    }
    ctx->pc = 0x2EE890u;
    // 0x2ee890: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2ee890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ee894: 0xc0bb5de  jal         func_2ED778
    ctx->pc = 0x2EE894u;
    SET_GPR_U32(ctx, 31, 0x2EE89Cu);
    ctx->pc = 0x2EE898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE894u;
    // 0x2ee898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED778u, 0x2EE894u, 0x2EE89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE89Cu;
label_2ee89c:
    // 0x2ee89c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2EE89Cu;
    {
        const bool branch_taken_0x2ee89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee89c) {
            ctx->pc = 0x2EE8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE89Cu;
            // 0x2ee8a0: 0x92021384  lbu         $v0, 0x1384($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE93Cu;
            goto label_2ee93c;
        }
    }
    ctx->pc = 0x2EE8A4u;
    // 0x2ee8a4: 0x8e0311f0  lw          $v1, 0x11F0($s0)
    ctx->pc = 0x2ee8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4592)));
    // 0x2ee8a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ee8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee8ac: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EE8ACu;
    {
        const bool branch_taken_0x2ee8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EE8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8ACu;
        // 0x2ee8b0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8ac) {
            ctx->pc = 0x2EE8FCu;
            goto label_2ee8fc;
        }
    }
    ctx->pc = 0x2EE8B4u;
    // 0x2ee8b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE8B4u;
    {
        const bool branch_taken_0x2ee8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8B4u;
        // 0x2ee8b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8b4) {
            ctx->pc = 0x2EE8CCu;
            goto label_2ee8cc;
        }
    }
    ctx->pc = 0x2EE8BCu;
    // 0x2ee8bc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE8BCu;
    {
        const bool branch_taken_0x2ee8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee8bc) {
            ctx->pc = 0x2EE8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE8BCu;
            // 0x2ee8c0: 0x8e0204f4  lw          $v0, 0x4F4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE8DCu;
            goto label_2ee8dc;
        }
    }
    ctx->pc = 0x2EE8C4u;
    // 0x2ee8c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2EE8C4u;
    {
        const bool branch_taken_0x2ee8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8C4u;
        // 0x2ee8c8: 0x92021384  lbu         $v0, 0x1384($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8c4) {
            ctx->pc = 0x2EE93Cu;
            goto label_2ee93c;
        }
    }
    ctx->pc = 0x2EE8CCu;
label_2ee8cc:
    // 0x2ee8cc: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EE8CCu;
    {
        const bool branch_taken_0x2ee8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ee8cc) {
            ctx->pc = 0x2EE8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE8CCu;
            // 0x2ee8d0: 0x8e0204f4  lw          $v0, 0x4F4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE920u;
            goto label_2ee920;
        }
    }
    ctx->pc = 0x2EE8D4u;
    // 0x2ee8d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2EE8D4u;
    {
        const bool branch_taken_0x2ee8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8D4u;
        // 0x2ee8d8: 0x92021384  lbu         $v0, 0x1384($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8d4) {
            ctx->pc = 0x2EE93Cu;
            goto label_2ee93c;
        }
    }
    ctx->pc = 0x2EE8DCu;
label_2ee8dc:
    // 0x2ee8dc: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2ee8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2ee8e0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EE8E0u;
    {
        const bool branch_taken_0x2ee8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee8e0) {
            ctx->pc = 0x2EE8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE8E0u;
            // 0x2ee8e4: 0x92021384  lbu         $v0, 0x1384($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE93Cu;
            goto label_2ee93c;
        }
    }
    ctx->pc = 0x2EE8E8u;
    // 0x2ee8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8ec: 0xc0be4c4  jal         func_2F9310
    ctx->pc = 0x2EE8ECu;
    SET_GPR_U32(ctx, 31, 0x2EE8F4u);
    ctx->pc = 0x2EE8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE8ECu;
    // 0x2ee8f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9310u, 0x2EE8ECu, 0x2EE8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE8F4u;
label_2ee8f4:
    // 0x2ee8f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2EE8F4u;
    {
        const bool branch_taken_0x2ee8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE8F4u;
        // 0x2ee8f8: 0x92021384  lbu         $v0, 0x1384($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8f4) {
            ctx->pc = 0x2EE93Cu;
            goto label_2ee93c;
        }
    }
    ctx->pc = 0x2EE8FCu;
label_2ee8fc:
    // 0x2ee8fc: 0x8e0204f4  lw          $v0, 0x4F4($s0)
    ctx->pc = 0x2ee8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
    // 0x2ee900: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2ee900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x2ee904: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2EE904u;
    {
        const bool branch_taken_0x2ee904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee904) {
            ctx->pc = 0x2EE908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE904u;
            // 0x2ee908: 0x92021384  lbu         $v0, 0x1384($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE93Cu;
            goto label_2ee93c;
        }
    }
    ctx->pc = 0x2EE90Cu;
    // 0x2ee90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee910: 0xc0be274  jal         func_2F89D0
    ctx->pc = 0x2EE910u;
    SET_GPR_U32(ctx, 31, 0x2EE918u);
    ctx->pc = 0x2EE914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE910u;
    // 0x2ee914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F89D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F89D0u, 0x2EE910u, 0x2EE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE918u;
label_2ee918:
    // 0x2ee918: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE918u;
    {
        const bool branch_taken_0x2ee918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE918u;
        // 0x2ee91c: 0x92021384  lbu         $v0, 0x1384($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee918) {
            ctx->pc = 0x2EE93Cu;
            goto label_2ee93c;
        }
    }
    ctx->pc = 0x2EE920u;
label_2ee920:
    // 0x2ee920: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2ee920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x2ee924: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE924u;
    {
        const bool branch_taken_0x2ee924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee924) {
            ctx->pc = 0x2EE928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE924u;
            // 0x2ee928: 0x92021384  lbu         $v0, 0x1384($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE93Cu;
            goto label_2ee93c;
        }
    }
    ctx->pc = 0x2EE92Cu;
    // 0x2ee92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee930: 0xc0be372  jal         func_2F8DC8
    ctx->pc = 0x2EE930u;
    SET_GPR_U32(ctx, 31, 0x2EE938u);
    ctx->pc = 0x2EE934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE930u;
    // 0x2ee934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8DC8u, 0x2EE930u, 0x2EE938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE938u;
label_2ee938:
    // 0x2ee938: 0x92021384  lbu         $v0, 0x1384($s0)
    ctx->pc = 0x2ee938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
label_2ee93c:
    // 0x2ee93c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE93Cu;
    {
        const bool branch_taken_0x2ee93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee93c) {
            ctx->pc = 0x2EE980u;
            goto label_2ee980;
        }
    }
    ctx->pc = 0x2EE944u;
    // 0x2ee944: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x2EE944u;
    SET_GPR_U32(ctx, 31, 0x2EE94Cu);
    ctx->pc = 0x2EE948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE944u;
    // 0x2ee948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2EE944u, 0x2EE94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE94Cu;
label_2ee94c:
    // 0x2ee94c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE94Cu;
    {
        const bool branch_taken_0x2ee94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee94c) {
            ctx->pc = 0x2EE980u;
            goto label_2ee980;
        }
    }
    ctx->pc = 0x2EE954u;
    // 0x2ee954: 0xc0b93fe  jal         func_2E4FF8
    ctx->pc = 0x2EE954u;
    SET_GPR_U32(ctx, 31, 0x2EE95Cu);
    ctx->pc = 0x2EE958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE954u;
    // 0x2ee958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF8u, 0x2EE954u, 0x2EE95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE95Cu;
label_2ee95c:
    // 0x2ee95c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EE95Cu;
    {
        const bool branch_taken_0x2ee95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ee95c) {
            ctx->pc = 0x2EE980u;
            goto label_2ee980;
        }
    }
    ctx->pc = 0x2EE964u;
    // 0x2ee964: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ee964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ee968: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ee968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ee96c: 0xae0012b8  sw          $zero, 0x12B8($s0)
    ctx->pc = 0x2ee96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4792), GPR_U32(ctx, 0));
    // 0x2ee970: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ee970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ee974: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x2ee974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x2ee978: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ee978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    // 0x2ee97c: 0xae000554  sw          $zero, 0x554($s0)
    ctx->pc = 0x2ee97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
label_2ee980:
    // 0x2ee980: 0xc0bbe1c  jal         func_2EF870
    ctx->pc = 0x2EE980u;
    SET_GPR_U32(ctx, 31, 0x2EE988u);
    ctx->pc = 0x2EE984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE980u;
    // 0x2ee984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF870u, 0x2EE980u, 0x2EE988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE988u;
label_2ee988:
    // 0x2ee988: 0x8e0205e4  lw          $v0, 0x5E4($s0)
    ctx->pc = 0x2ee988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1508)));
    // 0x2ee98c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2EE98Cu;
    {
        const bool branch_taken_0x2ee98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE98Cu;
        // 0x2ee990: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee98c) {
            ctx->pc = 0x2EEA20u;
            goto label_2eea20;
        }
    }
    ctx->pc = 0x2EE994u;
    // 0x2ee994: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x2ee994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x2ee998: 0xc601128c  lwc1        $f1, 0x128C($s0)
    ctx->pc = 0x2ee998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee99c: 0xc4405320  lwc1        $f0, 0x5320($v0)
    ctx->pc = 0x2ee99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee9a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ee9a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee9a4: 0x0  nop
    ctx->pc = 0x2ee9a4u;
    // NOP
    // 0x2ee9a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE9A8u;
    {
        const bool branch_taken_0x2ee9a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9A8u;
        // 0x2ee9ac: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9a8) {
            ctx->pc = 0x2EE9C0u;
            goto label_2ee9c0;
        }
    }
    ctx->pc = 0x2EE9B0u;
    // 0x2ee9b0: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2ee9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ee9b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ee9b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ee9b8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2EE9B8u;
    {
        const bool branch_taken_0x2ee9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE9B8u;
        // 0x2ee9bc: 0xe600128c  swc1        $f0, 0x128C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4748), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9b8) {
            ctx->pc = 0x2EEA58u;
            goto label_2eea58;
        }
    }
    ctx->pc = 0x2EE9C0u;
label_2ee9c0:
    // 0x2ee9c0: 0xc0bf868  jal         func_2FE1A0
    ctx->pc = 0x2EE9C0u;
    SET_GPR_U32(ctx, 31, 0x2EE9C8u);
    ctx->pc = 0x2EE9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE9C0u;
    // 0x2ee9c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EE9C0u, 0x2EE9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE9C8u;
label_2ee9c8:
    // 0x2ee9c8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2EE9C8u;
    {
        const bool branch_taken_0x2ee9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee9c8) {
            ctx->pc = 0x2EE9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE9C8u;
            // 0x2ee9cc: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE9FCu;
            goto label_2ee9fc;
        }
    }
    ctx->pc = 0x2EE9D0u;
    // 0x2ee9d0: 0xc6011288  lwc1        $f1, 0x1288($s0)
    ctx->pc = 0x2ee9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ee9d4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ee9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ee9d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ee9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee9dc: 0x0  nop
    ctx->pc = 0x2ee9dcu;
    // NOP
    // 0x2ee9e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2ee9e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee9e4: 0x0  nop
    ctx->pc = 0x2ee9e4u;
    // NOP
    // 0x2ee9e8: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE9E8u;
    {
        const bool branch_taken_0x2ee9e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee9e8) {
            ctx->pc = 0x2EE9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE9E8u;
            // 0x2ee9ec: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE9FCu;
            goto label_2ee9fc;
        }
    }
    ctx->pc = 0x2EE9F0u;
    // 0x2ee9f0: 0x8e0211e0  lw          $v0, 0x11E0($s0)
    ctx->pc = 0x2ee9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4576)));
    // 0x2ee9f4: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2ee9f4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ee9f8: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ee9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2ee9fc:
    // 0x2ee9fc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2ee9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2eea00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eea00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eea04: 0x50430014  beql        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EEA04u;
    {
        const bool branch_taken_0x2eea04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eea04) {
            ctx->pc = 0x2EEA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEA04u;
            // 0x2eea08: 0xae00128c  sw          $zero, 0x128C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4748), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA58u;
            goto label_2eea58;
        }
    }
    ctx->pc = 0x2EEA0Cu;
    // 0x2eea0c: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EEA0Cu;
    {
        const bool branch_taken_0x2eea0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA0Cu;
        // 0x2eea10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea0c) {
            ctx->pc = 0x2EEA18u;
            goto label_2eea18;
        }
    }
    ctx->pc = 0x2EEA14u;
    // 0x2eea14: 0xae0205e4  sw          $v0, 0x5E4($s0)
    ctx->pc = 0x2eea14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 2));
label_2eea18:
    // 0x2eea18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EEA18u;
    {
        const bool branch_taken_0x2eea18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA18u;
        // 0x2eea1c: 0xae00128c  sw          $zero, 0x128C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4748), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea18) {
            ctx->pc = 0x2EEA58u;
            goto label_2eea58;
        }
    }
    ctx->pc = 0x2EEA20u;
label_2eea20:
    // 0x2eea20: 0xc600128c  lwc1        $f0, 0x128C($s0)
    ctx->pc = 0x2eea20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eea24: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2eea24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2eea28: 0x0  nop
    ctx->pc = 0x2eea28u;
    // NOP
    // 0x2eea2c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2eea2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eea30: 0x0  nop
    ctx->pc = 0x2eea30u;
    // NOP
    // 0x2eea34: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2EEA34u;
    {
        const bool branch_taken_0x2eea34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eea34) {
            ctx->pc = 0x2EEA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEA34u;
            // 0x2eea38: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA5Cu;
            goto label_2eea5c;
        }
    }
    ctx->pc = 0x2EEA3Cu;
    // 0x2eea3c: 0xc0bf868  jal         func_2FE1A0
    ctx->pc = 0x2EEA3Cu;
    SET_GPR_U32(ctx, 31, 0x2EEA44u);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EEA3Cu, 0x2EEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEA44u;
label_2eea44:
    // 0x2eea44: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEA44u;
    {
        const bool branch_taken_0x2eea44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eea44) {
            ctx->pc = 0x2EEA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEA44u;
            // 0x2eea48: 0xe614128c  swc1        $f20, 0x128C($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4748), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA58u;
            goto label_2eea58;
        }
    }
    ctx->pc = 0x2EEA4Cu;
    // 0x2eea4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eea50: 0xae0205e4  sw          $v0, 0x5E4($s0)
    ctx->pc = 0x2eea50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 2));
    // 0x2eea54: 0xe614128c  swc1        $f20, 0x128C($s0)
    ctx->pc = 0x2eea54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4748), bits); }
label_2eea58:
    // 0x2eea58: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2eea58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2eea5c:
    // 0x2eea5c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2eea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2eea60: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2eea60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x2eea64: 0x24515870  addiu       $s1, $v0, 0x5870
    ctx->pc = 0x2eea64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x2eea68: 0x8c650150  lw          $a1, 0x150($v1)
    ctx->pc = 0x2eea68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2eea6c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2eea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2eea70: 0x10a20062  beq         $a1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x2EEA70u;
    {
        const bool branch_taken_0x2eea70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EEA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA70u;
        // 0x2eea74: 0x8c840088  lw          $a0, 0x88($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea70) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEA78u;
    // 0x2eea78: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2eea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2eea7c: 0x10a2005f  beq         $a1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2EEA7Cu;
    {
        const bool branch_taken_0x2eea7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA7Cu;
        // 0x2eea80: 0x24a2ffea  addiu       $v0, $a1, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea7c) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEA84u;
    // 0x2eea84: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2eea84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2eea88: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2EEA88u;
    {
        const bool branch_taken_0x2eea88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA88u;
        // 0x2eea8c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea88) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEA90u;
    // 0x2eea90: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEA90u;
    {
        const bool branch_taken_0x2eea90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA90u;
        // 0x2eea94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea90) {
            ctx->pc = 0x2EEAB4u;
            goto label_2eeab4;
        }
    }
    ctx->pc = 0x2EEA98u;
    // 0x2eea98: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2eea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2eea9c: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEA9Cu;
    {
        const bool branch_taken_0x2eea9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA9Cu;
        // 0x2eeaa0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea9c) {
            ctx->pc = 0x2EEAB4u;
            goto label_2eeab4;
        }
    }
    ctx->pc = 0x2EEAA4u;
    // 0x2eeaa4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEAA4u;
    {
        const bool branch_taken_0x2eeaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAA4u;
        // 0x2eeaa8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeaa4) {
            ctx->pc = 0x2EEAB4u;
            goto label_2eeab4;
        }
    }
    ctx->pc = 0x2EEAACu;
    // 0x2eeaac: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EEAACu;
    {
        const bool branch_taken_0x2eeaac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eeaac) {
            ctx->pc = 0x2EEAB8u;
            goto label_2eeab8;
        }
    }
    ctx->pc = 0x2EEAB4u;
label_2eeab4:
    // 0x2eeab4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eeab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eeab8:
    // 0x2eeab8: 0x14a00050  bnez        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x2EEAB8u;
    {
        const bool branch_taken_0x2eeab8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeab8) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEAC0u;
    // 0x2eeac0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2eeac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2eeac4: 0x2442ffd9  addiu       $v0, $v0, -0x27
    ctx->pc = 0x2eeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967257));
    // 0x2eeac8: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2eeac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2eeacc: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2EEACCu;
    {
        const bool branch_taken_0x2eeacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEACCu;
        // 0x2eead0: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeacc) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEAD4u;
    // 0x2eead4: 0x10820049  beq         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2EEAD4u;
    {
        const bool branch_taken_0x2eead4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eead4) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEADCu;
    // 0x2eeadc: 0xc0bb776  jal         func_2EDDD8
    ctx->pc = 0x2EEADCu;
    SET_GPR_U32(ctx, 31, 0x2EEAE4u);
    ctx->pc = 0x2EEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEADCu;
    // 0x2eeae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDD8u, 0x2EEADCu, 0x2EEAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEAE4u;
label_2eeae4:
    // 0x2eeae4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2EEAE4u;
    {
        const bool branch_taken_0x2eeae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAE4u;
        // 0x2eeae8: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeae4) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEAECu;
    // 0x2eeaec: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2eeaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2eeaf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eeaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eeaf4: 0x10430041  beq         $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2EEAF4u;
    {
        const bool branch_taken_0x2eeaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eeaf4) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEAFCu;
    // 0x2eeafc: 0x9222027c  lbu         $v0, 0x27C($s1)
    ctx->pc = 0x2eeafcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 636)));
    // 0x2eeb00: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2EEB00u;
    {
        const bool branch_taken_0x2eeb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeb00) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEB08u;
    // 0x2eeb08: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x2EEB08u;
    SET_GPR_U32(ctx, 31, 0x2EEB10u);
    ctx->pc = 0x2EEB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB08u;
    // 0x2eeb0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2EEB08u, 0x2EEB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB10u;
label_2eeb10:
    // 0x2eeb10: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2EEB10u;
    {
        const bool branch_taken_0x2eeb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeb10) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEB18u;
    // 0x2eeb18: 0xc0b93fe  jal         func_2E4FF8
    ctx->pc = 0x2EEB18u;
    SET_GPR_U32(ctx, 31, 0x2EEB20u);
    ctx->pc = 0x2EEB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB18u;
    // 0x2eeb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF8u, 0x2EEB18u, 0x2EEB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB20u;
label_2eeb20:
    // 0x2eeb20: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2EEB20u;
    {
        const bool branch_taken_0x2eeb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB20u;
        // 0x2eeb24: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb20) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEB28u;
    // 0x2eeb28: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x2eeb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950236)));
    // 0x2eeb2c: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2EEB2Cu;
    {
        const bool branch_taken_0x2eeb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeb2c) {
            ctx->pc = 0x2EEBFCu;
            goto label_2eebfc;
        }
    }
    ctx->pc = 0x2EEB34u;
    // 0x2eeb34: 0x8e020570  lw          $v0, 0x570($s0)
    ctx->pc = 0x2eeb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1392)));
    // 0x2eeb38: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EEB38u;
    {
        const bool branch_taken_0x2eeb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB38u;
        // 0x2eeb3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb38) {
            ctx->pc = 0x2EEBB8u;
            goto label_2eebb8;
        }
    }
    ctx->pc = 0x2EEB40u;
    // 0x2eeb40: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x2eeb40u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x2eeb44: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x2eeb44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eeb48: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2eeb48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x2eeb4c: 0x8e85bd50  lw          $a1, -0x42B0($s4)
    ctx->pc = 0x2eeb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
label_2eeb50:
    // 0x2eeb50: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2eeb50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2eeb54: 0x8ca20224  lw          $v0, 0x224($a1)
    ctx->pc = 0x2eeb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x2eeb58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2eeb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2eeb5c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2eeb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2eeb60: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2eeb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eeb64: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EEB64u;
    {
        const bool branch_taken_0x2eeb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeb64) {
            ctx->pc = 0x2EEB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEB64u;
            // 0x2eeb68: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEBA4u;
            goto label_2eeba4;
        }
    }
    ctx->pc = 0x2EEB6Cu;
    // 0x2eeb6c: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2EEB6Cu;
    SET_GPR_U32(ctx, 31, 0x2EEB74u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2EEB6Cu, 0x2EEB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB74u;
label_2eeb74:
    // 0x2eeb74: 0x1053000a  beq         $v0, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x2EEB74u;
    {
        const bool branch_taken_0x2eeb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2EEB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB74u;
        // 0x2eeb78: 0x9242b821  lbu         $v0, -0x47DF($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294948897)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb74) {
            ctx->pc = 0x2EEBA0u;
            goto label_2eeba0;
        }
    }
    ctx->pc = 0x2EEB7Cu;
    // 0x2eeb7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2eeb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2eeb80: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EEB80u;
    {
        const bool branch_taken_0x2eeb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB80u;
        // 0x2eeb84: 0xa242b821  sb          $v0, -0x47DF($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4294948897), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb80) {
            ctx->pc = 0x2EEC04u;
            goto label_2eec04;
        }
    }
    ctx->pc = 0x2EEB88u;
    // 0x2eeb88: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x2eeb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x2eeb8c: 0xae000554  sw          $zero, 0x554($s0)
    ctx->pc = 0x2eeb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
    // 0x2eeb90: 0xae000558  sw          $zero, 0x558($s0)
    ctx->pc = 0x2eeb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 0));
    // 0x2eeb94: 0xae00055c  sw          $zero, 0x55C($s0)
    ctx->pc = 0x2eeb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 0));
    // 0x2eeb98: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2EEB98u;
    {
        const bool branch_taken_0x2eeb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB98u;
        // 0x2eeb9c: 0xae0012b8  sw          $zero, 0x12B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb98) {
            ctx->pc = 0x2EEC04u;
            goto label_2eec04;
        }
    }
    ctx->pc = 0x2EEBA0u;
label_2eeba0:
    // 0x2eeba0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2eeba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2eeba4:
    // 0x2eeba4: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x2eeba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2eeba8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2EEBA8u;
    {
        const bool branch_taken_0x2eeba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBA8u;
        // 0x2eebac: 0x8e85bd50  lw          $a1, -0x42B0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeba8) {
            ctx->pc = 0x2EEB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eeb50;
        }
    }
    ctx->pc = 0x2EEBB0u;
    // 0x2eebb0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EEBB0u;
    {
        const bool branch_taken_0x2eebb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBB0u;
        // 0x2eebb4: 0x8e02054c  lw          $v0, 0x54C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebb0) {
            ctx->pc = 0x2EEC08u;
            goto label_2eec08;
        }
    }
    ctx->pc = 0x2EEBB8u;
label_2eebb8:
    // 0x2eebb8: 0x8e0205e0  lw          $v0, 0x5E0($s0)
    ctx->pc = 0x2eebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1504)));
    // 0x2eebbc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEBBCu;
    {
        const bool branch_taken_0x2eebbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eebbc) {
            ctx->pc = 0x2EEBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEBBCu;
            // 0x2eebc0: 0x8e0205e4  lw          $v0, 0x5E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1508)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEBD4u;
            goto label_2eebd4;
        }
    }
    ctx->pc = 0x2EEBC4u;
    // 0x2eebc4: 0xc0a2b4a  jal         func_28AD28
    ctx->pc = 0x2EEBC4u;
    SET_GPR_U32(ctx, 31, 0x2EEBCCu);
    ctx->pc = 0x28AD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AD28u, 0x2EEBC4u, 0x2EEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBCCu;
label_2eebcc:
    // 0x2eebcc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2EEBCCu;
    {
        const bool branch_taken_0x2eebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBCCu;
        // 0x2eebd0: 0x8e02054c  lw          $v0, 0x54C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebcc) {
            ctx->pc = 0x2EEC08u;
            goto label_2eec08;
        }
    }
    ctx->pc = 0x2EEBD4u;
label_2eebd4:
    // 0x2eebd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEBD4u;
    {
        const bool branch_taken_0x2eebd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eebd4) {
            ctx->pc = 0x2EEBECu;
            goto label_2eebec;
        }
    }
    ctx->pc = 0x2EEBDCu;
    // 0x2eebdc: 0xc0a2b74  jal         func_28ADD0
    ctx->pc = 0x2EEBDCu;
    SET_GPR_U32(ctx, 31, 0x2EEBE4u);
    ctx->pc = 0x28ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ADD0u, 0x2EEBDCu, 0x2EEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBE4u;
label_2eebe4:
    // 0x2eebe4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEBE4u;
    {
        const bool branch_taken_0x2eebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBE4u;
        // 0x2eebe8: 0x8e02054c  lw          $v0, 0x54C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebe4) {
            ctx->pc = 0x2EEC08u;
            goto label_2eec08;
        }
    }
    ctx->pc = 0x2EEBECu;
label_2eebec:
    // 0x2eebec: 0xc0a2bb6  jal         func_28AED8
    ctx->pc = 0x2EEBECu;
    SET_GPR_U32(ctx, 31, 0x2EEBF4u);
    ctx->pc = 0x28AED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AED8u, 0x2EEBECu, 0x2EEBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBF4u;
label_2eebf4:
    // 0x2eebf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEBF4u;
    {
        const bool branch_taken_0x2eebf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBF4u;
        // 0x2eebf8: 0x8e02054c  lw          $v0, 0x54C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebf4) {
            ctx->pc = 0x2EEC08u;
            goto label_2eec08;
        }
    }
    ctx->pc = 0x2EEBFCu;
label_2eebfc:
    // 0x2eebfc: 0xc0a2bb6  jal         func_28AED8
    ctx->pc = 0x2EEBFCu;
    SET_GPR_U32(ctx, 31, 0x2EEC04u);
    ctx->pc = 0x28AED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AED8u, 0x2EEBFCu, 0x2EEC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC04u;
label_2eec04:
    // 0x2eec04: 0x8e02054c  lw          $v0, 0x54C($s0)
    ctx->pc = 0x2eec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1356)));
label_2eec08:
    // 0x2eec08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEC08u;
    {
        const bool branch_taken_0x2eec08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC08u;
        // 0x2eec0c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec08) {
            ctx->pc = 0x2EEC1Cu;
            goto label_2eec1c;
        }
    }
    ctx->pc = 0x2EEC10u;
    // 0x2eec10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec14: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x2EEC14u;
    SET_GPR_U32(ctx, 31, 0x2EEC1Cu);
    ctx->pc = 0x2EEC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC14u;
    // 0x2eec18: 0xc44c1a0c  lwc1        $f12, 0x1A0C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x2EEC14u, 0x2EEC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC1Cu;
label_2eec1c:
    // 0x2eec1c: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x2eec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x2eec20: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EEC20u;
    {
        const bool branch_taken_0x2eec20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eec20) {
            ctx->pc = 0x2EEC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEC20u;
            // 0x2eec24: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EECA0u;
            goto label_2eeca0;
        }
    }
    ctx->pc = 0x2EEC28u;
    // 0x2eec28: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x2EEC28u;
    SET_GPR_U32(ctx, 31, 0x2EEC30u);
    ctx->pc = 0x2EEC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC28u;
    // 0x2eec2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2EEC28u, 0x2EEC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC30u;
label_2eec30:
    // 0x2eec30: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EEC30u;
    {
        const bool branch_taken_0x2eec30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eec30) {
            ctx->pc = 0x2EEC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEC30u;
            // 0x2eec34: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EECA0u;
            goto label_2eeca0;
        }
    }
    ctx->pc = 0x2EEC38u;
    // 0x2eec38: 0x8e0411c0  lw          $a0, 0x11C0($s0)
    ctx->pc = 0x2eec38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2eec3c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2eec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2eec40: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2eec40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2eec44: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEC44u;
    {
        const bool branch_taken_0x2eec44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EEC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC44u;
        // 0x2eec48: 0x831025  or          $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec44) {
            ctx->pc = 0x2EEC58u;
            goto label_2eec58;
        }
    }
    ctx->pc = 0x2EEC4Cu;
    // 0x2eec4c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x2eec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x2eec50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eec50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2eec54: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2eec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2eec58:
    // 0x2eec58: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2eec58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    // 0x2eec5c: 0x8e0511c0  lw          $a1, 0x11C0($s0)
    ctx->pc = 0x2eec5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2eec60: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2eec60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2eec64: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x2eec64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2eec68: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EEC68u;
    {
        const bool branch_taken_0x2eec68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC68u;
        // 0x2eec6c: 0x2402dfff  addiu       $v0, $zero, -0x2001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec68) {
            ctx->pc = 0x2EEC88u;
            goto label_2eec88;
        }
    }
    ctx->pc = 0x2EEC70u;
    // 0x2eec70: 0xc0bd62c  jal         func_2F58B0
    ctx->pc = 0x2EEC70u;
    SET_GPR_U32(ctx, 31, 0x2EEC78u);
    ctx->pc = 0x2EEC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC70u;
    // 0x2eec74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2EEC70u, 0x2EEC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC78u;
label_2eec78:
    // 0x2eec78: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2eec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2eec7c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2eec7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2eec80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EEC80u;
    {
        const bool branch_taken_0x2eec80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC80u;
        // 0x2eec84: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec80) {
            ctx->pc = 0x2EEC9Cu;
            goto label_2eec9c;
        }
    }
    ctx->pc = 0x2EEC88u;
label_2eec88:
    // 0x2eec88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eec88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec8c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2eec8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2eec90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eec90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eec94: 0xc0bd0e2  jal         func_2F4388
    ctx->pc = 0x2EEC94u;
    SET_GPR_U32(ctx, 31, 0x2EEC9Cu);
    ctx->pc = 0x2EEC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC94u;
    // 0x2eec98: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4388u, 0x2EEC94u, 0x2EEC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC9Cu;
label_2eec9c:
    // 0x2eec9c: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2eec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2eeca0:
    // 0x2eeca0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2eeca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2eeca4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eeca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eeca8: 0x504300aa  beql        $v0, $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x2EECA8u;
    {
        const bool branch_taken_0x2eeca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eeca8) {
            ctx->pc = 0x2EECACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EECA8u;
            // 0x2eecac: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF54u;
            goto label_2eef54;
        }
    }
    ctx->pc = 0x2EECB0u;
    // 0x2eecb0: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2eecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2eecb4: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2eecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2eecb8: 0x38420045  xori        $v0, $v0, 0x45
    ctx->pc = 0x2eecb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)69);
    // 0x2eecbc: 0x504000a5  beql        $v0, $zero, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2EECBCu;
    {
        const bool branch_taken_0x2eecbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eecbc) {
            ctx->pc = 0x2EECC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EECBCu;
            // 0x2eecc0: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF54u;
            goto label_2eef54;
        }
    }
    ctx->pc = 0x2EECC4u;
    // 0x2eecc4: 0x92021384  lbu         $v0, 0x1384($s0)
    ctx->pc = 0x2eecc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4996)));
    // 0x2eecc8: 0x544000a2  bnel        $v0, $zero, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2EECC8u;
    {
        const bool branch_taken_0x2eecc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eecc8) {
            ctx->pc = 0x2EECCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EECC8u;
            // 0x2eeccc: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF54u;
            goto label_2eef54;
        }
    }
    ctx->pc = 0x2EECD0u;
    // 0x2eecd0: 0x920210ce  lbu         $v0, 0x10CE($s0)
    ctx->pc = 0x2eecd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4302)));
    // 0x2eecd4: 0x5440009f  bnel        $v0, $zero, . + 4 + (0x9F << 2)
    ctx->pc = 0x2EECD4u;
    {
        const bool branch_taken_0x2eecd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eecd4) {
            ctx->pc = 0x2EECD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EECD4u;
            // 0x2eecd8: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF54u;
            goto label_2eef54;
        }
    }
    ctx->pc = 0x2EECDCu;
    // 0x2eecdc: 0xc0bf868  jal         func_2FE1A0
    ctx->pc = 0x2EECDCu;
    SET_GPR_U32(ctx, 31, 0x2EECE4u);
    ctx->pc = 0x2EECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EECDCu;
    // 0x2eece0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2EECDCu, 0x2EECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EECE4u;
label_2eece4:
    // 0x2eece4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EECE4u;
    {
        const bool branch_taken_0x2eece4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECE4u;
        // 0x2eece8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eece4) {
            ctx->pc = 0x2EED50u;
            goto label_2eed50;
        }
    }
    ctx->pc = 0x2EECECu;
    // 0x2eecec: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x2eececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
    // 0x2eecf0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EECF0u;
    {
        const bool branch_taken_0x2eecf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECF0u;
        // 0x2eecf4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecf0) {
            ctx->pc = 0x2EED10u;
            goto label_2eed10;
        }
    }
    ctx->pc = 0x2EECF8u;
    // 0x2eecf8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2eecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2eecfc: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2eecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2eed00: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2eed00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2468u));
    // 0x2eed04: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2eed04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2eed08: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EED08u;
    {
        const bool branch_taken_0x2eed08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eed08) {
            ctx->pc = 0x2EED0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EED08u;
            // 0x2eed0c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EED18u;
            goto label_2eed18;
        }
    }
    ctx->pc = 0x2EED10u;
label_2eed10:
    // 0x2eed10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EED10u;
    {
        const bool branch_taken_0x2eed10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED10u;
        // 0x2eed14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed10) {
            ctx->pc = 0x2EED1Cu;
            goto label_2eed1c;
        }
    }
    ctx->pc = 0x2EED18u;
label_2eed18:
    // 0x2eed18: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2eed18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2eed1c:
    // 0x2eed1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EED1Cu;
    {
        const bool branch_taken_0x2eed1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED1Cu;
        // 0x2eed20: 0x8ec2aa88  lw          $v0, -0x5578($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed1c) {
            ctx->pc = 0x2EED50u;
            goto label_2eed50;
        }
    }
    ctx->pc = 0x2EED24u;
    // 0x2eed24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EED24u;
    {
        const bool branch_taken_0x2eed24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED24u;
        // 0x2eed28: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed24) {
            ctx->pc = 0x2EED40u;
            goto label_2eed40;
        }
    }
    ctx->pc = 0x2EED2Cu;
    // 0x2eed2c: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2eed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2eed30: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2eed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2eed34: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2eed34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2eed38: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EED38u;
    {
        const bool branch_taken_0x2eed38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eed38) {
            ctx->pc = 0x2EED3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EED38u;
            // 0x2eed3c: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EED48u;
            goto label_2eed48;
        }
    }
    ctx->pc = 0x2EED40u;
label_2eed40:
    // 0x2eed40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EED40u;
    {
        const bool branch_taken_0x2eed40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED40u;
        // 0x2eed44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed40) {
            ctx->pc = 0x2EED4Cu;
            goto label_2eed4c;
        }
    }
    ctx->pc = 0x2EED48u;
label_2eed48:
    // 0x2eed48: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2eed48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2eed4c:
    // 0x2eed4c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2eed4cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2eed50:
    // 0x2eed50: 0x56200080  bnel        $s1, $zero, . + 4 + (0x80 << 2)
    ctx->pc = 0x2EED50u;
    {
        const bool branch_taken_0x2eed50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eed50) {
            ctx->pc = 0x2EED54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EED50u;
            // 0x2eed54: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF54u;
            goto label_2eef54;
        }
    }
    ctx->pc = 0x2EED58u;
    // 0x2eed58: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2eed58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2eed5c: 0x8c640150  lw          $a0, 0x150($v1)
    ctx->pc = 0x2eed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2eed60: 0x2482ffbd  addiu       $v0, $a0, -0x43
    ctx->pc = 0x2eed60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967229));
    // 0x2eed64: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2eed64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2eed68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EED68u;
    {
        const bool branch_taken_0x2eed68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED68u;
        // 0x2eed6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed68) {
            ctx->pc = 0x2EED84u;
            goto label_2eed84;
        }
    }
    ctx->pc = 0x2EED70u;
    // 0x2eed70: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x2eed70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x2eed74: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EED74u;
    {
        const bool branch_taken_0x2eed74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED74u;
        // 0x2eed78: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed74) {
            ctx->pc = 0x2EED84u;
            goto label_2eed84;
        }
    }
    ctx->pc = 0x2EED7Cu;
    // 0x2eed7c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EED7Cu;
    {
        const bool branch_taken_0x2eed7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eed7c) {
            ctx->pc = 0x2EED88u;
            goto label_2eed88;
        }
    }
    ctx->pc = 0x2EED84u;
label_2eed84:
    // 0x2eed84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eed84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eed88:
    // 0x2eed88: 0x54a00072  bnel        $a1, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x2EED88u;
    {
        const bool branch_taken_0x2eed88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eed88) {
            ctx->pc = 0x2EED8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EED88u;
            // 0x2eed8c: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF54u;
            goto label_2eef54;
        }
    }
    ctx->pc = 0x2EED90u;
    // 0x2eed90: 0x8c660150  lw          $a2, 0x150($v1)
    ctx->pc = 0x2eed90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2eed94: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2eed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2eed98: 0x50c50005  beql        $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EED98u;
    {
        const bool branch_taken_0x2eed98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x2eed98) {
            ctx->pc = 0x2EED9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EED98u;
            // 0x2eed9c: 0x8e020418  lw          $v0, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEDB0u;
            goto label_2eedb0;
        }
    }
    ctx->pc = 0x2EEDA0u;
    // 0x2eeda0: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x2eeda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x2eeda4: 0x5445005f  bnel        $v0, $a1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2EEDA4u;
    {
        const bool branch_taken_0x2eeda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2eeda4) {
            ctx->pc = 0x2EEDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEDA4u;
            // 0x2eeda8: 0x8c620150  lw          $v0, 0x150($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF24u;
            goto label_2eef24;
        }
    }
    ctx->pc = 0x2EEDACu;
    // 0x2eedac: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x2eedacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2eedb0:
    // 0x2eedb0: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x2EEDB0u;
    {
        const bool branch_taken_0x2eedb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eedb0) {
            ctx->pc = 0x2EEDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEDB0u;
            // 0x2eedb4: 0x8c620150  lw          $v0, 0x150($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF24u;
            goto label_2eef24;
        }
    }
    ctx->pc = 0x2EEDB8u;
    // 0x2eedb8: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x2eedb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x2eedbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2eedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eedc0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEDC0u;
    {
        const bool branch_taken_0x2eedc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDC0u;
        // 0x2eedc4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eedc0) {
            ctx->pc = 0x2EEDD0u;
            goto label_2eedd0;
        }
    }
    ctx->pc = 0x2EEDC8u;
    // 0x2eedc8: 0x54820056  bnel        $a0, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2EEDC8u;
    {
        const bool branch_taken_0x2eedc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eedc8) {
            ctx->pc = 0x2EEDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEDC8u;
            // 0x2eedcc: 0x8c620150  lw          $v0, 0x150($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF24u;
            goto label_2eef24;
        }
    }
    ctx->pc = 0x2EEDD0u;
label_2eedd0:
    // 0x2eedd0: 0xc6000500  lwc1        $f0, 0x500($s0)
    ctx->pc = 0x2eedd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eedd4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2eedd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2eedd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2eedd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eeddc: 0x0  nop
    ctx->pc = 0x2eeddcu;
    // NOP
    // 0x2eede0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eede0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eede4: 0x0  nop
    ctx->pc = 0x2eede4u;
    // NOP
    // 0x2eede8: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x2EEDE8u;
    {
        const bool branch_taken_0x2eede8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDE8u;
        // 0x2eedec: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eede8) {
            ctx->pc = 0x2EEEECu;
            goto label_2eeeec;
        }
    }
    ctx->pc = 0x2EEDF0u;
    // 0x2eedf0: 0x54c5003a  bnel        $a2, $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2EEDF0u;
    {
        const bool branch_taken_0x2eedf0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x2eedf0) {
            ctx->pc = 0x2EEDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEDF0u;
            // 0x2eedf4: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEEDCu;
            goto label_2eeedc;
        }
    }
    ctx->pc = 0x2EEDF8u;
    // 0x2eedf8: 0x8c6201e4  lw          $v0, 0x1E4($v1)
    ctx->pc = 0x2eedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x2eedfc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EEDFCu;
    {
        const bool branch_taken_0x2eedfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eedfc) {
            ctx->pc = 0x2EEE30u;
            goto label_2eee30;
        }
    }
    ctx->pc = 0x2EEE04u;
    // 0x2eee04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eee04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee08: 0x246401ec  addiu       $a0, $v1, 0x1EC
    ctx->pc = 0x2eee08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 492));
    // 0x2eee0c: 0x0  nop
    ctx->pc = 0x2eee0cu;
    // NOP
label_2eee10:
    // 0x2eee10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eee14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EEE14u;
    {
        const bool branch_taken_0x2eee14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eee14) {
            ctx->pc = 0x2EEE30u;
            goto label_2eee30;
        }
    }
    ctx->pc = 0x2EEE1Cu;
    // 0x2eee1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2eee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2eee20: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2eee20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2eee24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EEE24u;
    {
        const bool branch_taken_0x2eee24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE24u;
        // 0x2eee28: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee24) {
            ctx->pc = 0x2EEE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eee10;
        }
    }
    ctx->pc = 0x2EEE2Cu;
    // 0x2eee2c: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x2eee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_2eee30:
    // 0x2eee30: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2EEE30u;
    {
        const bool branch_taken_0x2eee30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eee30) {
            ctx->pc = 0x2EEEECu;
            goto label_2eeeec;
        }
    }
    ctx->pc = 0x2EEE38u;
    // 0x2eee38: 0x8c6201e4  lw          $v0, 0x1E4($v1)
    ctx->pc = 0x2eee38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x2eee3c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2EEE3Cu;
    {
        const bool branch_taken_0x2eee3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eee3c) {
            ctx->pc = 0x2EEE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEE3Cu;
            // 0x2eee40: 0x8c6401e4  lw          $a0, 0x1E4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEE74u;
            goto label_2eee74;
        }
    }
    ctx->pc = 0x2EEE44u;
    // 0x2eee44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eee44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee48: 0x246401ec  addiu       $a0, $v1, 0x1EC
    ctx->pc = 0x2eee48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 492));
    // 0x2eee4c: 0x0  nop
    ctx->pc = 0x2eee4cu;
    // NOP
label_2eee50:
    // 0x2eee50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eee54: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EEE54u;
    {
        const bool branch_taken_0x2eee54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eee54) {
            ctx->pc = 0x2EEE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEE54u;
            // 0x2eee58: 0x8c6401e4  lw          $a0, 0x1E4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEE74u;
            goto label_2eee74;
        }
    }
    ctx->pc = 0x2EEE5Cu;
    // 0x2eee5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2eee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2eee60: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2eee60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2eee64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EEE64u;
    {
        const bool branch_taken_0x2eee64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE64u;
        // 0x2eee68: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee64) {
            ctx->pc = 0x2EEE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eee50;
        }
    }
    ctx->pc = 0x2EEE6Cu;
    // 0x2eee6c: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x2eee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x2eee70: 0x8c6401e4  lw          $a0, 0x1E4($v1)
    ctx->pc = 0x2eee70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
label_2eee74:
    // 0x2eee74: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEE74u;
    {
        const bool branch_taken_0x2eee74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE74u;
        // 0x2eee78: 0xc442001c  lwc1        $f2, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee74) {
            ctx->pc = 0x2EEE8Cu;
            goto label_2eee8c;
        }
    }
    ctx->pc = 0x2EEE7Cu;
    // 0x2eee7c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EEE7Cu;
    {
        const bool branch_taken_0x2eee7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE7Cu;
        // 0x2eee80: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee7c) {
            ctx->pc = 0x2EEEB4u;
            goto label_2eeeb4;
        }
    }
    ctx->pc = 0x2EEE84u;
label_2eee84:
    // 0x2eee84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EEE84u;
    {
        const bool branch_taken_0x2eee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE84u;
        // 0x2eee88: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee84) {
            ctx->pc = 0x2EEEB4u;
            goto label_2eeeb4;
        }
    }
    ctx->pc = 0x2EEE8Cu;
label_2eee8c:
    // 0x2eee8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eee8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee90: 0x246401ec  addiu       $a0, $v1, 0x1EC
    ctx->pc = 0x2eee90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 492));
    // 0x2eee94: 0x0  nop
    ctx->pc = 0x2eee94u;
    // NOP
label_2eee98:
    // 0x2eee98: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2eee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eee9c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2EEE9Cu;
    {
        const bool branch_taken_0x2eee9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE9Cu;
        // 0x2eeea0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee9c) {
            ctx->pc = 0x2EEE84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eee84;
        }
    }
    ctx->pc = 0x2EEEA4u;
    // 0x2eeea4: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2eeea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2eeea8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2EEEA8u;
    {
        const bool branch_taken_0x2eeea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEA8u;
        // 0x2eeeac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeea8) {
            ctx->pc = 0x2EEE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eee98;
        }
    }
    ctx->pc = 0x2EEEB0u;
    // 0x2eeeb0: 0x8c6301e8  lw          $v1, 0x1E8($v1)
    ctx->pc = 0x2eeeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
label_2eeeb4:
    // 0x2eeeb4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2eeeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2eeeb8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2eeeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2eeebc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2eeebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eeec0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2eeec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eeec4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2eeec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2eeec8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2eeec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eeecc: 0x0  nop
    ctx->pc = 0x2eeeccu;
    // NOP
    // 0x2eeed0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2EEED0u;
    {
        const bool branch_taken_0x2eeed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eeed0) {
            ctx->pc = 0x2EEEECu;
            goto label_2eeeec;
        }
    }
    ctx->pc = 0x2EEED8u;
    // 0x2eeed8: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2eeed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2eeedc:
    // 0x2eeedc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2eeedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2eeee0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2eeee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2eeee4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2EEEE4u;
    {
        const bool branch_taken_0x2eeee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEE4u;
        // 0x2eeee8: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeee4) {
            ctx->pc = 0x2EEF50u;
            goto label_2eef50;
        }
    }
    ctx->pc = 0x2EEEECu;
label_2eeeec:
    // 0x2eeeec: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2eeeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x2eeef0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2eeef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2eeef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eeef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeef8: 0x0  nop
    ctx->pc = 0x2eeef8u;
    // NOP
    // 0x2eeefc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2eeefcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eef00: 0x0  nop
    ctx->pc = 0x2eef00u;
    // NOP
    // 0x2eef04: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2EEF04u;
    {
        const bool branch_taken_0x2eef04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF04u;
        // 0x2eef08: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef04) {
            ctx->pc = 0x2EEF50u;
            goto label_2eef50;
        }
    }
    ctx->pc = 0x2EEF0Cu;
    // 0x2eef0c: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2eef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2eef10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eef14: 0x5043000e  beql        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2EEF14u;
    {
        const bool branch_taken_0x2eef14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eef14) {
            ctx->pc = 0x2EEF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF14u;
            // 0x2eef18: 0xae001298  sw          $zero, 0x1298($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF50u;
            goto label_2eef50;
        }
    }
    ctx->pc = 0x2EEF1Cu;
    // 0x2eef1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EEF1Cu;
    {
        const bool branch_taken_0x2eef1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF1Cu;
        // 0x2eef20: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef1c) {
            ctx->pc = 0x2EEF54u;
            goto label_2eef54;
        }
    }
    ctx->pc = 0x2EEF24u;
label_2eef24:
    // 0x2eef24: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2eef24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2eef28: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EEF28u;
    {
        const bool branch_taken_0x2eef28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2eef28) {
            ctx->pc = 0x2EEF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF28u;
            // 0x2eef2c: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF54u;
            goto label_2eef54;
        }
    }
    ctx->pc = 0x2EEF30u;
    // 0x2eef30: 0x8c62014c  lw          $v0, 0x14C($v1)
    ctx->pc = 0x2eef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x2eef34: 0x50440007  beql        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EEF34u;
    {
        const bool branch_taken_0x2eef34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2eef34) {
            ctx->pc = 0x2EEF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF34u;
            // 0x2eef38: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEF54u;
            goto label_2eef54;
        }
    }
    ctx->pc = 0x2EEF3Cu;
    // 0x2eef3c: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x2eef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2eef40: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2eef40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2eef44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eef44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2eef48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2eef48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eef4c: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x2eef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
label_2eef50:
    // 0x2eef50: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2eef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2eef54:
    // 0x2eef54: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2eef54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eef58: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEF58u;
    {
        const bool branch_taken_0x2eef58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF58u;
        // 0x2eef5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef58) {
            ctx->pc = 0x2EEF6Cu;
            goto label_2eef6c;
        }
    }
    ctx->pc = 0x2EEF60u;
    // 0x2eef60: 0x8e021208  lw          $v0, 0x1208($s0)
    ctx->pc = 0x2eef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4616)));
    // 0x2eef64: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2eef64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2eef68: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2eef68u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2eef6c:
    // 0x2eef6c: 0x54800069  bnel        $a0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x2EEF6Cu;
    {
        const bool branch_taken_0x2eef6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eef6c) {
            ctx->pc = 0x2EEF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF6Cu;
            // 0x2eef70: 0x8e0205a8  lw          $v0, 0x5A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF114u;
            goto label_2ef114;
        }
    }
    ctx->pc = 0x2EEF74u;
    // 0x2eef74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEF74u;
    {
        const bool branch_taken_0x2eef74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF74u;
        // 0x2eef78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef74) {
            ctx->pc = 0x2EEF88u;
            goto label_2eef88;
        }
    }
    ctx->pc = 0x2EEF7Cu;
    // 0x2eef7c: 0x8e021208  lw          $v0, 0x1208($s0)
    ctx->pc = 0x2eef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4616)));
    // 0x2eef80: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2eef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2eef84: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2eef84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2eef88:
    // 0x2eef88: 0x54400062  bnel        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x2EEF88u;
    {
        const bool branch_taken_0x2eef88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eef88) {
            ctx->pc = 0x2EEF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF88u;
            // 0x2eef8c: 0x8e0205a8  lw          $v0, 0x5A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF114u;
            goto label_2ef114;
        }
    }
    ctx->pc = 0x2EEF90u;
    // 0x2eef90: 0x8e0205b4  lw          $v0, 0x5B4($s0)
    ctx->pc = 0x2eef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1460)));
    // 0x2eef94: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x2EEF94u;
    {
        const bool branch_taken_0x2eef94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eef94) {
            ctx->pc = 0x2EEF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEF94u;
            // 0x2eef98: 0x8e0211d8  lw          $v0, 0x11D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF0A4u;
            goto label_2ef0a4;
        }
    }
    ctx->pc = 0x2EEF9Cu;
    // 0x2eef9c: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x2eef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x2eefa0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EEFA0u;
    {
        const bool branch_taken_0x2eefa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFA0u;
        // 0x2eefa4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefa0) {
            ctx->pc = 0x2EEFE4u;
            goto label_2eefe4;
        }
    }
    ctx->pc = 0x2EEFA8u;
    // 0x2eefa8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2eefa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2eefac: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x2eefacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x2eefb0: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2eefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2eefb4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EEFB4u;
    {
        const bool branch_taken_0x2eefb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFB4u;
        // 0x2eefb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefb4) {
            ctx->pc = 0x2EEFDCu;
            goto label_2eefdc;
        }
    }
    ctx->pc = 0x2EEFBCu;
    // 0x2eefbc: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x2eefbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x2eefc0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2eefc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2eefc4: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2eefc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eefc8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2eefc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eefcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2eefccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eefd0: 0x0  nop
    ctx->pc = 0x2eefd0u;
    // NOP
    // 0x2eefd4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EEFD4u;
    {
        const bool branch_taken_0x2eefd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eefd4) {
            ctx->pc = 0x2EEFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEFD4u;
            // 0x2eefd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEFDCu;
            goto label_2eefdc;
        }
    }
    ctx->pc = 0x2EEFDCu;
label_2eefdc:
    // 0x2eefdc: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EEFDCu;
    {
        const bool branch_taken_0x2eefdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eefdc) {
            ctx->pc = 0x2EEFE8u;
            goto label_2eefe8;
        }
    }
    ctx->pc = 0x2EEFE4u;
label_2eefe4:
    // 0x2eefe4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2eefe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eefe8:
    // 0x2eefe8: 0xc08da92  jal         func_236A48
    ctx->pc = 0x2EEFE8u;
    SET_GPR_U32(ctx, 31, 0x2EEFF0u);
    ctx->pc = 0x2EEFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEFE8u;
    // 0x2eefec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2EEFE8u, 0x2EEFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEFF0u;
label_2eeff0:
    // 0x2eeff0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEFF0u;
    {
        const bool branch_taken_0x2eeff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFF0u;
        // 0x2eeff4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeff0) {
            ctx->pc = 0x2EF004u;
            goto label_2ef004;
        }
    }
    ctx->pc = 0x2EEFF8u;
    // 0x2eeff8: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2eeff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2eeffc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eeffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ef000: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2ef000u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2ef004:
    // 0x2ef004: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EF004u;
    {
        const bool branch_taken_0x2ef004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF004u;
        // 0x2ef008: 0x8e0304f4  lw          $v1, 0x4F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef004) {
            ctx->pc = 0x2EF038u;
            goto label_2ef038;
        }
    }
    ctx->pc = 0x2EF00Cu;
    // 0x2ef00c: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2ef00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2ef010: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF010u;
    {
        const bool branch_taken_0x2ef010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF010u;
        // 0x2ef014: 0x38620005  xori        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef010) {
            ctx->pc = 0x2EF024u;
            goto label_2ef024;
        }
    }
    ctx->pc = 0x2EF018u;
    // 0x2ef018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef01c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF01Cu;
    {
        const bool branch_taken_0x2ef01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF01Cu;
        // 0x2ef020: 0xae0211f0  sw          $v0, 0x11F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef01c) {
            ctx->pc = 0x2EF034u;
            goto label_2ef034;
        }
    }
    ctx->pc = 0x2EF024u;
label_2ef024:
    // 0x2ef024: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF024u;
    {
        const bool branch_taken_0x2ef024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef024) {
            ctx->pc = 0x2EF028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF024u;
            // 0x2ef028: 0xae0011f0  sw          $zero, 0x11F0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4592), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF034u;
            goto label_2ef034;
        }
    }
    ctx->pc = 0x2EF02Cu;
    // 0x2ef02c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ef02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef030: 0xae0211f0  sw          $v0, 0x11F0($s0)
    ctx->pc = 0x2ef030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4592), GPR_U32(ctx, 2));
label_2ef034:
    // 0x2ef034: 0x8e0304f4  lw          $v1, 0x4F4($s0)
    ctx->pc = 0x2ef034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1268)));
label_2ef038:
    // 0x2ef038: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x2ef038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x2ef03c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF03Cu;
    {
        const bool branch_taken_0x2ef03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF03Cu;
        // 0x2ef040: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef03c) {
            ctx->pc = 0x2EF058u;
            goto label_2ef058;
        }
    }
    ctx->pc = 0x2EF044u;
    // 0x2ef044: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x2ef044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x2ef048: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF048u;
    {
        const bool branch_taken_0x2ef048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF048u;
        // 0x2ef04c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef048) {
            ctx->pc = 0x2EF058u;
            goto label_2ef058;
        }
    }
    ctx->pc = 0x2EF050u;
    // 0x2ef050: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF050u;
    {
        const bool branch_taken_0x2ef050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef050) {
            ctx->pc = 0x2EF05Cu;
            goto label_2ef05c;
        }
    }
    ctx->pc = 0x2EF058u;
label_2ef058:
    // 0x2ef058: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ef058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef05c:
    // 0x2ef05c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF05Cu;
    {
        const bool branch_taken_0x2ef05c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF05Cu;
        // 0x2ef060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef05c) {
            ctx->pc = 0x2EF070u;
            goto label_2ef070;
        }
    }
    ctx->pc = 0x2EF064u;
    // 0x2ef064: 0x5480002b  bnel        $a0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x2EF064u;
    {
        const bool branch_taken_0x2ef064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef064) {
            ctx->pc = 0x2EF068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF064u;
            // 0x2ef068: 0x8e0205a8  lw          $v0, 0x5A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF114u;
            goto label_2ef114;
        }
    }
    ctx->pc = 0x2EF06Cu;
    // 0x2ef06c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ef06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef070:
    // 0x2ef070: 0xc0bd0e2  jal         func_2F4388
    ctx->pc = 0x2EF070u;
    SET_GPR_U32(ctx, 31, 0x2EF078u);
    ctx->pc = 0x2EF074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF070u;
    // 0x2ef074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4388u, 0x2EF070u, 0x2EF078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF078u;
label_2ef078:
    // 0x2ef078: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ef078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ef07c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ef07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ef080: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2EF080u;
    {
        const bool branch_taken_0x2ef080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef080) {
            ctx->pc = 0x2EF084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF080u;
            // 0x2ef084: 0x8e0205a8  lw          $v0, 0x5A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF114u;
            goto label_2ef114;
        }
    }
    ctx->pc = 0x2EF088u;
    // 0x2ef088: 0xc08dada  jal         func_236B68
    ctx->pc = 0x2EF088u;
    SET_GPR_U32(ctx, 31, 0x2EF090u);
    ctx->pc = 0x2EF08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF088u;
    // 0x2ef08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B68u, 0x2EF088u, 0x2EF090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF090u;
label_2ef090:
    // 0x2ef090: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EF090u;
    {
        const bool branch_taken_0x2ef090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef090) {
            ctx->pc = 0x2EF094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF090u;
            // 0x2ef094: 0x8e0205a8  lw          $v0, 0x5A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF114u;
            goto label_2ef114;
        }
    }
    ctx->pc = 0x2EF098u;
    // 0x2ef098: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ef098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ef09c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2EF09Cu;
    {
        const bool branch_taken_0x2ef09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF09Cu;
        // 0x2ef0a0: 0x34422000  ori         $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef09c) {
            ctx->pc = 0x2EF10Cu;
            goto label_2ef10c;
        }
    }
    ctx->pc = 0x2EF0A4u;
label_2ef0a4:
    // 0x2ef0a4: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EF0A4u;
    {
        const bool branch_taken_0x2ef0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef0a4) {
            ctx->pc = 0x2EF0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF0A4u;
            // 0x2ef0a8: 0x8e0205a8  lw          $v0, 0x5A8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF114u;
            goto label_2ef114;
        }
    }
    ctx->pc = 0x2EF0ACu;
    // 0x2ef0ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ef0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ef0b0: 0xa060b837  sb          $zero, -0x47C9($v1)
    ctx->pc = 0x2ef0b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FB837u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FB837u, _value); } while (0);
    // 0x2ef0b4: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ef0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ef0b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ef0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ef0bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF0BCu;
    {
        const bool branch_taken_0x2ef0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef0bc) {
            ctx->pc = 0x2EF0D0u;
            goto label_2ef0d0;
        }
    }
    ctx->pc = 0x2EF0C4u;
    // 0x2ef0c4: 0x8e021220  lw          $v0, 0x1220($s0)
    ctx->pc = 0x2ef0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4640)));
    // 0x2ef0c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF0C8u;
    {
        const bool branch_taken_0x2ef0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0C8u;
        // 0x2ef0cc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef0c8) {
            ctx->pc = 0x2EF0DCu;
            goto label_2ef0dc;
        }
    }
    ctx->pc = 0x2EF0D0u;
label_2ef0d0:
    // 0x2ef0d0: 0xc0bd62c  jal         func_2F58B0
    ctx->pc = 0x2EF0D0u;
    SET_GPR_U32(ctx, 31, 0x2EF0D8u);
    ctx->pc = 0x2EF0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF0D0u;
    // 0x2ef0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2EF0D0u, 0x2EF0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF0D8u;
label_2ef0d8:
    // 0x2ef0d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ef0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ef0dc:
    // 0x2ef0dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ef0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef0e0: 0x8c43b958  lw          $v1, -0x46A8($v0)
    ctx->pc = 0x2ef0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949208)));
    // 0x2ef0e4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF0E4u;
    {
        const bool branch_taken_0x2ef0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2EF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0E4u;
        // 0x2ef0e8: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef0e4) {
            ctx->pc = 0x2EF0F8u;
            goto label_2ef0f8;
        }
    }
    ctx->pc = 0x2EF0ECu;
    // 0x2ef0ec: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2ef0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2ef0f0: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ef0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    // 0x2ef0f4: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ef0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2ef0f8:
    // 0x2ef0f8: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x2ef0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2ef0fc: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x2ef0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x2ef100: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ef100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ef104: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ef104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ef108: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ef108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ef10c:
    // 0x2ef10c: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ef10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    // 0x2ef110: 0x8e0205a8  lw          $v0, 0x5A8($s0)
    ctx->pc = 0x2ef110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1448)));
label_2ef114:
    // 0x2ef114: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EF114u;
    {
        const bool branch_taken_0x2ef114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef114) {
            ctx->pc = 0x2EF118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF114u;
            // 0x2ef118: 0x8e020418  lw          $v0, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF188u;
            goto label_2ef188;
        }
    }
    ctx->pc = 0x2EF11Cu;
    // 0x2ef11c: 0xc0bf228  jal         func_2FC8A0
    ctx->pc = 0x2EF11Cu;
    SET_GPR_U32(ctx, 31, 0x2EF124u);
    ctx->pc = 0x2EF120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF11Cu;
    // 0x2ef120: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8A0u, 0x2EF11Cu, 0x2EF124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF124u;
label_2ef124:
    // 0x2ef124: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EF124u;
    {
        const bool branch_taken_0x2ef124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF124u;
        // 0x2ef128: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef124) {
            ctx->pc = 0x2EF184u;
            goto label_2ef184;
        }
    }
    ctx->pc = 0x2EF12Cu;
    // 0x2ef12c: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2ef12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2ef130: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ef130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ef134: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EF134u;
    {
        const bool branch_taken_0x2ef134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF134u;
        // 0x2ef138: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef134) {
            ctx->pc = 0x2EF19Cu;
            goto label_2ef19c;
        }
    }
    ctx->pc = 0x2EF13Cu;
    // 0x2ef13c: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x2ef13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x2ef140: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF140u;
    {
        const bool branch_taken_0x2ef140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF140u;
        // 0x2ef144: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef140) {
            ctx->pc = 0x2EF150u;
            goto label_2ef150;
        }
    }
    ctx->pc = 0x2EF148u;
    // 0x2ef148: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2EF148u;
    {
        const bool branch_taken_0x2ef148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef148) {
            ctx->pc = 0x2EF14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF148u;
            // 0x2ef14c: 0x8e020538  lw          $v0, 0x538($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF1A0u;
            goto label_2ef1a0;
        }
    }
    ctx->pc = 0x2EF150u;
label_2ef150:
    // 0x2ef150: 0xc6000500  lwc1        $f0, 0x500($s0)
    ctx->pc = 0x2ef150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef154: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ef154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2ef158: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ef158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ef15c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ef15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef160: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2ef160u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2ef164: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ef164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef168: 0x0  nop
    ctx->pc = 0x2ef168u;
    // NOP
    // 0x2ef16c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2EF16Cu;
    {
        const bool branch_taken_0x2ef16c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF16Cu;
        // 0x2ef170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef16c) {
            ctx->pc = 0x2EF19Cu;
            goto label_2ef19c;
        }
    }
    ctx->pc = 0x2EF174u;
    // 0x2ef174: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x2EF174u;
    SET_GPR_U32(ctx, 31, 0x2EF17Cu);
    ctx->pc = 0x2EF178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF174u;
    // 0x2ef178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2EF174u, 0x2EF17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF17Cu;
label_2ef17c:
    // 0x2ef17c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EF17Cu;
    {
        const bool branch_taken_0x2ef17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF17Cu;
        // 0x2ef180: 0x8e020538  lw          $v0, 0x538($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef17c) {
            ctx->pc = 0x2EF1A0u;
            goto label_2ef1a0;
        }
    }
    ctx->pc = 0x2EF184u;
label_2ef184:
    // 0x2ef184: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x2ef184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_2ef188:
    // 0x2ef188: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF188u;
    {
        const bool branch_taken_0x2ef188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef188) {
            ctx->pc = 0x2EF18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF188u;
            // 0x2ef18c: 0x8e020538  lw          $v0, 0x538($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF1A0u;
            goto label_2ef1a0;
        }
    }
    ctx->pc = 0x2EF190u;
    // 0x2ef190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef194: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x2EF194u;
    SET_GPR_U32(ctx, 31, 0x2EF19Cu);
    ctx->pc = 0x2EF198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF194u;
    // 0x2ef198: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2EF194u, 0x2EF19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF19Cu;
label_2ef19c:
    // 0x2ef19c: 0x8e020538  lw          $v0, 0x538($s0)
    ctx->pc = 0x2ef19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
label_2ef1a0:
    // 0x2ef1a0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EF1A0u;
    {
        const bool branch_taken_0x2ef1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef1a0) {
            ctx->pc = 0x2EF1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF1A0u;
            // 0x2ef1a4: 0x8e0205e8  lw          $v0, 0x5E8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF1E0u;
            goto label_2ef1e0;
        }
    }
    ctx->pc = 0x2EF1A8u;
    // 0x2ef1a8: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2ef1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ef1ac: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2ef1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2ef1b0: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x2ef1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x2ef1b4: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x2ef1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ef1b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF1B8u;
    {
        const bool branch_taken_0x2ef1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1B8u;
        // 0x2ef1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1b8) {
            ctx->pc = 0x2EF1D4u;
            goto label_2ef1d4;
        }
    }
    ctx->pc = 0x2EF1C0u;
    // 0x2ef1c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef1c4: 0xc08bf70  jal         func_22FDC0
    ctx->pc = 0x2EF1C4u;
    SET_GPR_U32(ctx, 31, 0x2EF1CCu);
    ctx->pc = 0x2EF1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF1C4u;
    // 0x2ef1c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x2EF1C4u, 0x2EF1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF1CCu;
label_2ef1cc:
    // 0x2ef1cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF1CCu;
    {
        const bool branch_taken_0x2ef1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1CCu;
        // 0x2ef1d0: 0x8e0205e8  lw          $v0, 0x5E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1cc) {
            ctx->pc = 0x2EF1E0u;
            goto label_2ef1e0;
        }
    }
    ctx->pc = 0x2EF1D4u;
label_2ef1d4:
    // 0x2ef1d4: 0xc08ca9a  jal         func_232A68
    ctx->pc = 0x2EF1D4u;
    SET_GPR_U32(ctx, 31, 0x2EF1DCu);
    ctx->pc = 0x2EF1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF1D4u;
    // 0x2ef1d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232A68u, 0x2EF1D4u, 0x2EF1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF1DCu;
label_2ef1dc:
    // 0x2ef1dc: 0x8e0205e8  lw          $v0, 0x5E8($s0)
    ctx->pc = 0x2ef1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1512)));
label_2ef1e0:
    // 0x2ef1e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF1E0u;
    {
        const bool branch_taken_0x2ef1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1E0u;
        // 0x2ef1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1e0) {
            ctx->pc = 0x2EF1F0u;
            goto label_2ef1f0;
        }
    }
    ctx->pc = 0x2EF1E8u;
    // 0x2ef1e8: 0xc08ca14  jal         func_232850
    ctx->pc = 0x2EF1E8u;
    SET_GPR_U32(ctx, 31, 0x2EF1F0u);
    ctx->pc = 0x2EF1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF1E8u;
    // 0x2ef1ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232850u, 0x2EF1E8u, 0x2EF1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF1F0u;
label_2ef1f0:
    // 0x2ef1f0: 0x8e020534  lw          $v0, 0x534($s0)
    ctx->pc = 0x2ef1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1332)));
    // 0x2ef1f4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2EF1F4u;
    {
        const bool branch_taken_0x2ef1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1F4u;
        // 0x2ef1f8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef1f4) {
            ctx->pc = 0x2EF29Cu;
            goto label_2ef29c;
        }
    }
    ctx->pc = 0x2EF1FCu;
    // 0x2ef1fc: 0x8e0312bc  lw          $v1, 0x12BC($s0)
    ctx->pc = 0x2ef1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4796)));
    // 0x2ef200: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EF200u;
    {
        const bool branch_taken_0x2ef200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EF204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF200u;
        // 0x2ef204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef200) {
            ctx->pc = 0x2EF238u;
            goto label_2ef238;
        }
    }
    ctx->pc = 0x2EF208u;
    // 0x2ef208: 0x920210ce  lbu         $v0, 0x10CE($s0)
    ctx->pc = 0x2ef208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4302)));
    // 0x2ef20c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2EF20Cu;
    {
        const bool branch_taken_0x2ef20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef20c) {
            ctx->pc = 0x2EF210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF20Cu;
            // 0x2ef210: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF23Cu;
            goto label_2ef23c;
        }
    }
    ctx->pc = 0x2EF214u;
    // 0x2ef214: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2ef214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2ef218: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x2ef218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2ef21c: 0x8c82014c  lw          $v0, 0x14C($a0)
    ctx->pc = 0x2ef21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
    // 0x2ef220: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EF220u;
    {
        const bool branch_taken_0x2ef220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EF224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF220u;
        // 0x2ef224: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef220) {
            ctx->pc = 0x2EF288u;
            goto label_2ef288;
        }
    }
    ctx->pc = 0x2EF228u;
    // 0x2ef228: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2ef228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2ef22c: 0x38420046  xori        $v0, $v0, 0x46
    ctx->pc = 0x2ef22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)70);
    // 0x2ef230: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2EF230u;
    {
        const bool branch_taken_0x2ef230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF230u;
        // 0x2ef234: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef230) {
            ctx->pc = 0x2EF288u;
            goto label_2ef288;
        }
    }
    ctx->pc = 0x2EF238u;
label_2ef238:
    // 0x2ef238: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2ef238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2ef23c:
    // 0x2ef23c: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2ef23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2ef240: 0x2462ffbd  addiu       $v0, $v1, -0x43
    ctx->pc = 0x2ef240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967229));
    // 0x2ef244: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2ef244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ef248: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF248u;
    {
        const bool branch_taken_0x2ef248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF248u;
        // 0x2ef24c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef248) {
            ctx->pc = 0x2EF264u;
            goto label_2ef264;
        }
    }
    ctx->pc = 0x2EF250u;
    // 0x2ef250: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x2ef250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x2ef254: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF254u;
    {
        const bool branch_taken_0x2ef254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF254u;
        // 0x2ef258: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef254) {
            ctx->pc = 0x2EF264u;
            goto label_2ef264;
        }
    }
    ctx->pc = 0x2EF25Cu;
    // 0x2ef25c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF25Cu;
    {
        const bool branch_taken_0x2ef25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef25c) {
            ctx->pc = 0x2EF268u;
            goto label_2ef268;
        }
    }
    ctx->pc = 0x2EF264u;
label_2ef264:
    // 0x2ef264: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ef264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef268:
    // 0x2ef268: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF268u;
    {
        const bool branch_taken_0x2ef268 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef268) {
            ctx->pc = 0x2EF288u;
            goto label_2ef288;
        }
    }
    ctx->pc = 0x2EF270u;
    // 0x2ef270: 0x8e0205ec  lw          $v0, 0x5EC($s0)
    ctx->pc = 0x2ef270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1516)));
    // 0x2ef274: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF274u;
    {
        const bool branch_taken_0x2ef274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef274) {
            ctx->pc = 0x2EF288u;
            goto label_2ef288;
        }
    }
    ctx->pc = 0x2EF27Cu;
    // 0x2ef27c: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x2ef27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x2ef280: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x2ef280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x2ef284: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x2ef284u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ef288:
    // 0x2ef288: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF288u;
    {
        const bool branch_taken_0x2ef288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF288u;
        // 0x2ef28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef288) {
            ctx->pc = 0x2EF29Cu;
            goto label_2ef29c;
        }
    }
    ctx->pc = 0x2EF290u;
    // 0x2ef290: 0xc0b9f4e  jal         func_2E7D38
    ctx->pc = 0x2EF290u;
    SET_GPR_U32(ctx, 31, 0x2EF298u);
    ctx->pc = 0x2EF294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF290u;
    // 0x2ef294: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7D38u, 0x2EF290u, 0x2EF298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF298u;
label_2ef298:
    // 0x2ef298: 0xae000534  sw          $zero, 0x534($s0)
    ctx->pc = 0x2ef298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1332), GPR_U32(ctx, 0));
label_2ef29c:
    // 0x2ef29c: 0x8e020598  lw          $v0, 0x598($s0)
    ctx->pc = 0x2ef29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1432)));
    // 0x2ef2a0: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EF2A0u;
    {
        const bool branch_taken_0x2ef2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef2a0) {
            ctx->pc = 0x2EF2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF2A0u;
            // 0x2ef2a4: 0x8e02059c  lw          $v0, 0x59C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF30Cu;
            goto label_2ef30c;
        }
    }
    ctx->pc = 0x2EF2A8u;
    // 0x2ef2a8: 0xc60412e0  lwc1        $f4, 0x12E0($s0)
    ctx->pc = 0x2ef2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ef2ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ef2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ef2b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ef2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ef2b4: 0x0  nop
    ctx->pc = 0x2ef2b4u;
    // NOP
    // 0x2ef2b8: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x2ef2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef2bc: 0x0  nop
    ctx->pc = 0x2ef2bcu;
    // NOP
    // 0x2ef2c0: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x2EF2C0u;
    {
        const bool branch_taken_0x2ef2c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF2C0u;
        // 0x2ef2c4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef2c0) {
            ctx->pc = 0x2EF378u;
            goto label_2ef378;
        }
    }
    ctx->pc = 0x2EF2C8u;
    // 0x2ef2c8: 0xc6a014ec  lwc1        $f0, 0x14EC($s5)
    ctx->pc = 0x2ef2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 5356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef2cc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ef2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2ef2d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ef2d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ef2d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ef2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ef2d8: 0x0  nop
    ctx->pc = 0x2ef2d8u;
    // NOP
    // 0x2ef2dc: 0x0  nop
    ctx->pc = 0x2ef2dcu;
    // NOP
    // 0x2ef2e0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2ef2e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2ef2e4: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2ef2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef2e8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2ef2e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2ef2ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ef2ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ef2f0: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x2ef2f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2ef2f4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2ef2f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef2f8: 0x0  nop
    ctx->pc = 0x2ef2f8u;
    // NOP
    // 0x2ef2fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EF2FCu;
    {
        const bool branch_taken_0x2ef2fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef2fc) {
            ctx->pc = 0x2EF300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF2FCu;
            // 0x2ef300: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF304u;
            goto label_2ef304;
        }
    }
    ctx->pc = 0x2EF304u;
label_2ef304:
    // 0x2ef304: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2EF304u;
    {
        const bool branch_taken_0x2ef304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF304u;
        // 0x2ef308: 0xe60112e0  swc1        $f1, 0x12E0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4832), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef304) {
            ctx->pc = 0x2EF378u;
            goto label_2ef378;
        }
    }
    ctx->pc = 0x2EF30Cu;
label_2ef30c:
    // 0x2ef30c: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EF30Cu;
    {
        const bool branch_taken_0x2ef30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef30c) {
            ctx->pc = 0x2EF310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF30Cu;
            // 0x2ef310: 0x8e0205a0  lw          $v0, 0x5A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF37Cu;
            goto label_2ef37c;
        }
    }
    ctx->pc = 0x2EF314u;
    // 0x2ef314: 0xc60512e0  lwc1        $f5, 0x12E0($s0)
    ctx->pc = 0x2ef314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ef318: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2ef318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ef31c: 0x0  nop
    ctx->pc = 0x2ef31cu;
    // NOP
    // 0x2ef320: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x2ef320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef324: 0x0  nop
    ctx->pc = 0x2ef324u;
    // NOP
    // 0x2ef328: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2EF328u;
    {
        const bool branch_taken_0x2ef328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF328u;
        // 0x2ef32c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef328) {
            ctx->pc = 0x2EF378u;
            goto label_2ef378;
        }
    }
    ctx->pc = 0x2EF330u;
    // 0x2ef330: 0xc6a214ec  lwc1        $f2, 0x14EC($s5)
    ctx->pc = 0x2ef330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 5356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef334: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ef334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ef338: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ef338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef33c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ef33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2ef340: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ef340u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ef344: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ef344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ef348: 0x0  nop
    ctx->pc = 0x2ef348u;
    // NOP
    // 0x2ef34c: 0x0  nop
    ctx->pc = 0x2ef34cu;
    // NOP
    // 0x2ef350: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2ef350u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2ef354: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2ef354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef358: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2ef358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2ef35c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ef35cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ef360: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2ef360u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2ef364: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2ef364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef368: 0x0  nop
    ctx->pc = 0x2ef368u;
    // NOP
    // 0x2ef36c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EF36Cu;
    {
        const bool branch_taken_0x2ef36c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef36c) {
            ctx->pc = 0x2EF370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF36Cu;
            // 0x2ef370: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF374u;
            goto label_2ef374;
        }
    }
    ctx->pc = 0x2EF374u;
label_2ef374:
    // 0x2ef374: 0xe60012e0  swc1        $f0, 0x12E0($s0)
    ctx->pc = 0x2ef374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4832), bits); }
label_2ef378:
    // 0x2ef378: 0x8e0205a0  lw          $v0, 0x5A0($s0)
    ctx->pc = 0x2ef378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1440)));
label_2ef37c:
    // 0x2ef37c: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2EF37Cu;
    {
        const bool branch_taken_0x2ef37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF37Cu;
        // 0x2ef380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef37c) {
            ctx->pc = 0x2EF4E8u;
            goto label_2ef4e8;
        }
    }
    ctx->pc = 0x2EF384u;
    // 0x2ef384: 0xc0bf228  jal         func_2FC8A0
    ctx->pc = 0x2EF384u;
    SET_GPR_U32(ctx, 31, 0x2EF38Cu);
    ctx->pc = 0x2EF388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF384u;
    // 0x2ef388: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC8A0u, 0x2EF384u, 0x2EF38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF38Cu;
label_2ef38c:
    // 0x2ef38c: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x2EF38Cu;
    {
        const bool branch_taken_0x2ef38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF38Cu;
        // 0x2ef390: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef38c) {
            ctx->pc = 0x2EF4E4u;
            goto label_2ef4e4;
        }
    }
    ctx->pc = 0x2EF394u;
    // 0x2ef394: 0x8e040418  lw          $a0, 0x418($s0)
    ctx->pc = 0x2ef394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x2ef398: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EF398u;
    {
        const bool branch_taken_0x2ef398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF398u;
        // 0x2ef39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef398) {
            ctx->pc = 0x2EF3BCu;
            goto label_2ef3bc;
        }
    }
    ctx->pc = 0x2EF3A0u;
    // 0x2ef3a0: 0x8e020580  lw          $v0, 0x580($s0)
    ctx->pc = 0x2ef3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
    // 0x2ef3a4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF3A4u;
    {
        const bool branch_taken_0x2ef3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef3a4) {
            ctx->pc = 0x2EF3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF3A4u;
            // 0x2ef3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF3BCu;
            goto label_2ef3bc;
        }
    }
    ctx->pc = 0x2EF3ACu;
    // 0x2ef3ac: 0x8e020584  lw          $v0, 0x584($s0)
    ctx->pc = 0x2ef3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
    // 0x2ef3b0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF3B0u;
    {
        const bool branch_taken_0x2ef3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef3b0) {
            ctx->pc = 0x2EF3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF3B0u;
            // 0x2ef3b4: 0x8e0211cc  lw          $v0, 0x11CC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF3C0u;
            goto label_2ef3c0;
        }
    }
    ctx->pc = 0x2EF3B8u;
    // 0x2ef3b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ef3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef3bc:
    // 0x2ef3bc: 0x8e0211cc  lw          $v0, 0x11CC($s0)
    ctx->pc = 0x2ef3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4556)));
label_2ef3c0:
    // 0x2ef3c0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2EF3C0u;
    {
        const bool branch_taken_0x2ef3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3C0u;
        // 0x2ef3c4: 0x8e03041c  lw          $v1, 0x41C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3c0) {
            ctx->pc = 0x2EF4C0u;
            goto label_2ef4c0;
        }
    }
    ctx->pc = 0x2EF3C8u;
    // 0x2ef3c8: 0xc60111c8  lwc1        $f1, 0x11C8($s0)
    ctx->pc = 0x2ef3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef3cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ef3ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef3d0: 0x0  nop
    ctx->pc = 0x2ef3d0u;
    // NOP
    // 0x2ef3d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ef3d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef3d8: 0x0  nop
    ctx->pc = 0x2ef3d8u;
    // NOP
    // 0x2ef3dc: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x2EF3DCu;
    {
        const bool branch_taken_0x2ef3dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef3dc) {
            ctx->pc = 0x2EF4C0u;
            goto label_2ef4c0;
        }
    }
    ctx->pc = 0x2EF3E4u;
    // 0x2ef3e4: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EF3E4u;
    {
        const bool branch_taken_0x2ef3e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef3e4) {
            ctx->pc = 0x2EF3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF3E4u;
            // 0x2ef3e8: 0xc6010500  lwc1        $f1, 0x500($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF40Cu;
            goto label_2ef40c;
        }
    }
    ctx->pc = 0x2EF3ECu;
    // 0x2ef3ec: 0x14800035  bnez        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2EF3ECu;
    {
        const bool branch_taken_0x2ef3ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3ECu;
        // 0x2ef3f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3ec) {
            ctx->pc = 0x2EF4C4u;
            goto label_2ef4c4;
        }
    }
    ctx->pc = 0x2EF3F4u;
    // 0x2ef3f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ef3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef3f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF3F8u;
    {
        const bool branch_taken_0x2ef3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF3F8u;
        // 0x2ef3fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef3f8) {
            ctx->pc = 0x2EF408u;
            goto label_2ef408;
        }
    }
    ctx->pc = 0x2EF400u;
    // 0x2ef400: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2EF400u;
    {
        const bool branch_taken_0x2ef400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ef400) {
            ctx->pc = 0x2EF4ECu;
            goto label_2ef4ec;
        }
    }
    ctx->pc = 0x2EF408u;
label_2ef408:
    // 0x2ef408: 0xc6010500  lwc1        $f1, 0x500($s0)
    ctx->pc = 0x2ef408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ef40c:
    // 0x2ef40c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2ef40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2ef410: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2ef410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2ef414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ef414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef418: 0x0  nop
    ctx->pc = 0x2ef418u;
    // NOP
    // 0x2ef41c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ef41cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef420: 0x0  nop
    ctx->pc = 0x2ef420u;
    // NOP
    // 0x2ef424: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF424u;
    {
        const bool branch_taken_0x2ef424 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF424u;
        // 0x2ef428: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef424) {
            ctx->pc = 0x2EF43Cu;
            goto label_2ef43c;
        }
    }
    ctx->pc = 0x2EF42Cu;
    // 0x2ef42c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ef42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ef430: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF430u;
    {
        const bool branch_taken_0x2ef430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF430u;
        // 0x2ef434: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef430) {
            ctx->pc = 0x2EF448u;
            goto label_2ef448;
        }
    }
    ctx->pc = 0x2EF438u;
    // 0x2ef438: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ef438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ef43c:
    // 0x2ef43c: 0xae030420  sw          $v1, 0x420($s0)
    ctx->pc = 0x2ef43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 3));
    // 0x2ef440: 0xae02041c  sw          $v0, 0x41C($s0)
    ctx->pc = 0x2ef440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 2));
    // 0x2ef444: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2ef444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2ef448:
    // 0x2ef448: 0x8c43ebbc  lw          $v1, -0x1444($v0)
    ctx->pc = 0x2ef448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962108)));
    // 0x2ef44c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2EF44Cu;
    {
        const bool branch_taken_0x2ef44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF44Cu;
        // 0x2ef450: 0xc60111c8  lwc1        $f1, 0x11C8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef44c) {
            ctx->pc = 0x2EF488u;
            goto label_2ef488;
        }
    }
    ctx->pc = 0x2EF454u;
    // 0x2ef454: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ef454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ef458: 0x9043aa84  lbu         $v1, -0x557C($v0)
    ctx->pc = 0x2ef458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FAA84u));
    // 0x2ef45c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EF45Cu;
    {
        const bool branch_taken_0x2ef45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef45c) {
            ctx->pc = 0x2EF488u;
            goto label_2ef488;
        }
    }
    ctx->pc = 0x2EF464u;
    // 0x2ef464: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ef464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ef468: 0xc6a2156c  lwc1        $f2, 0x156C($s5)
    ctx->pc = 0x2ef468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 5484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef46c: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2ef46cu;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef470: 0x0  nop
    ctx->pc = 0x2ef470u;
    // NOP
    // 0x2ef474: 0x0  nop
    ctx->pc = 0x2ef474u;
    // NOP
    // 0x2ef478: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2ef478u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2ef47c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ef47cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ef480: 0xe60111c8  swc1        $f1, 0x11C8($s0)
    ctx->pc = 0x2ef480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4552), bits); }
    // 0x2ef484: 0xc60111c8  lwc1        $f1, 0x11C8($s0)
    ctx->pc = 0x2ef484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ef488:
    // 0x2ef488: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2ef488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2ef48c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2ef48cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2ef490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ef490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef494: 0x0  nop
    ctx->pc = 0x2ef494u;
    // NOP
    // 0x2ef498: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ef498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef49c: 0x0  nop
    ctx->pc = 0x2ef49cu;
    // NOP
    // 0x2ef4a0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2EF4A0u;
    {
        const bool branch_taken_0x2ef4a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4A0u;
        // 0x2ef4a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4a0) {
            ctx->pc = 0x2EF4ECu;
            goto label_2ef4ec;
        }
    }
    ctx->pc = 0x2EF4A8u;
    // 0x2ef4a8: 0x8e03041c  lw          $v1, 0x41C($s0)
    ctx->pc = 0x2ef4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x2ef4ac: 0xae02041c  sw          $v0, 0x41C($s0)
    ctx->pc = 0x2ef4acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 2));
    // 0x2ef4b0: 0xae030420  sw          $v1, 0x420($s0)
    ctx->pc = 0x2ef4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 3));
    // 0x2ef4b4: 0xae0011c8  sw          $zero, 0x11C8($s0)
    ctx->pc = 0x2ef4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4552), GPR_U32(ctx, 0));
    // 0x2ef4b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EF4B8u;
    {
        const bool branch_taken_0x2ef4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4B8u;
        // 0x2ef4bc: 0xae0011cc  sw          $zero, 0x11CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4b8) {
            ctx->pc = 0x2EF4ECu;
            goto label_2ef4ec;
        }
    }
    ctx->pc = 0x2EF4C0u;
label_2ef4c0:
    // 0x2ef4c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ef4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ef4c4:
    // 0x2ef4c4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EF4C4u;
    {
        const bool branch_taken_0x2ef4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EF4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4C4u;
        // 0x2ef4c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4c4) {
            ctx->pc = 0x2EF4ECu;
            goto label_2ef4ec;
        }
    }
    ctx->pc = 0x2EF4CCu;
    // 0x2ef4cc: 0xae030420  sw          $v1, 0x420($s0)
    ctx->pc = 0x2ef4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 3));
    // 0x2ef4d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF4D0u;
    {
        const bool branch_taken_0x2ef4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4D0u;
        // 0x2ef4d4: 0xae02041c  sw          $v0, 0x41C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4d0) {
            ctx->pc = 0x2EF4ECu;
            goto label_2ef4ec;
        }
    }
    ctx->pc = 0x2EF4D8u;
label_2ef4d8:
    // 0x2ef4d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef4dc: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2EF4DCu;
    {
        const bool branch_taken_0x2ef4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4DCu;
        // 0x2ef4e0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4dc) {
            ctx->pc = 0x2EF66Cu;
            goto label_2ef66c;
        }
    }
    ctx->pc = 0x2EF4E4u;
label_2ef4e4:
    // 0x2ef4e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef4e8:
    // 0x2ef4e8: 0xae0211cc  sw          $v0, 0x11CC($s0)
    ctx->pc = 0x2ef4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4556), GPR_U32(ctx, 2));
label_2ef4ec:
    // 0x2ef4ec: 0xc08ebac  jal         func_23AEB0
    ctx->pc = 0x2EF4ECu;
    SET_GPR_U32(ctx, 31, 0x2EF4F4u);
    ctx->pc = 0x2EF4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF4ECu;
    // 0x2ef4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AEB0u, 0x2EF4ECu, 0x2EF4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF4F4u;
label_2ef4f4:
    // 0x2ef4f4: 0x8e020544  lw          $v0, 0x544($s0)
    ctx->pc = 0x2ef4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
    // 0x2ef4f8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EF4F8u;
    {
        const bool branch_taken_0x2ef4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef4f8) {
            ctx->pc = 0x2EF4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF4F8u;
            // 0x2ef4fc: 0x920213f4  lbu         $v0, 0x13F4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF564u;
            goto label_2ef564;
        }
    }
    ctx->pc = 0x2EF500u;
    // 0x2ef500: 0x9202047d  lbu         $v0, 0x47D($s0)
    ctx->pc = 0x2ef500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1149)));
    // 0x2ef504: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EF504u;
    {
        const bool branch_taken_0x2ef504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef504) {
            ctx->pc = 0x2EF508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF504u;
            // 0x2ef508: 0x920213f4  lbu         $v0, 0x13F4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF564u;
            goto label_2ef564;
        }
    }
    ctx->pc = 0x2EF50Cu;
    // 0x2ef50c: 0x8e02053c  lw          $v0, 0x53C($s0)
    ctx->pc = 0x2ef50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1340)));
    // 0x2ef510: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EF510u;
    {
        const bool branch_taken_0x2ef510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef510) {
            ctx->pc = 0x2EF514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF510u;
            // 0x2ef514: 0x920213f4  lbu         $v0, 0x13F4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF564u;
            goto label_2ef564;
        }
    }
    ctx->pc = 0x2EF518u;
    // 0x2ef518: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2ef518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2ef51c: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x2ef51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x2ef520: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ef520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ef524: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ef524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ef528: 0xc4402454  lwc1        $f0, 0x2454($v0)
    ctx->pc = 0x2ef528u;
    { uint32_t bits = FAST_READ32(0x4C2454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ef52c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ef52cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef530: 0x0  nop
    ctx->pc = 0x2ef530u;
    // NOP
    // 0x2ef534: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2EF534u;
    {
        const bool branch_taken_0x2ef534 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF534u;
        // 0x2ef538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef534) {
            ctx->pc = 0x2EF560u;
            goto label_2ef560;
        }
    }
    ctx->pc = 0x2EF53Cu;
    // 0x2ef53c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ef53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef540: 0xc0bc120  jal         func_2F0480
    ctx->pc = 0x2EF540u;
    SET_GPR_U32(ctx, 31, 0x2EF548u);
    ctx->pc = 0x2EF544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF540u;
    // 0x2ef544: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0480u, 0x2EF540u, 0x2EF548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF548u;
label_2ef548:
    // 0x2ef548: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF548u;
    {
        const bool branch_taken_0x2ef548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef548) {
            ctx->pc = 0x2EF54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF548u;
            // 0x2ef54c: 0x920213f4  lbu         $v0, 0x13F4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF564u;
            goto label_2ef564;
        }
    }
    ctx->pc = 0x2EF550u;
    // 0x2ef550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef558: 0xc0bc120  jal         func_2F0480
    ctx->pc = 0x2EF558u;
    SET_GPR_U32(ctx, 31, 0x2EF560u);
    ctx->pc = 0x2EF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF558u;
    // 0x2ef55c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0480u, 0x2EF558u, 0x2EF560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF560u;
label_2ef560:
    // 0x2ef560: 0x920213f4  lbu         $v0, 0x13F4($s0)
    ctx->pc = 0x2ef560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5108)));
label_2ef564:
    // 0x2ef564: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EF564u;
    {
        const bool branch_taken_0x2ef564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF564u;
        // 0x2ef568: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef564) {
            ctx->pc = 0x2EF588u;
            goto label_2ef588;
        }
    }
    ctx->pc = 0x2EF56Cu;
    // 0x2ef56c: 0xc60113f8  lwc1        $f1, 0x13F8($s0)
    ctx->pc = 0x2ef56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef570: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ef570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef574: 0x0  nop
    ctx->pc = 0x2ef574u;
    // NOP
    // 0x2ef578: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ef578u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ef57c: 0x0  nop
    ctx->pc = 0x2ef57cu;
    // NOP
    // 0x2ef580: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EF580u;
    {
        const bool branch_taken_0x2ef580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ef580) {
            ctx->pc = 0x2EF584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF580u;
            // 0x2ef584: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF588u;
            goto label_2ef588;
        }
    }
    ctx->pc = 0x2EF588u;
label_2ef588:
    // 0x2ef588: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2ef588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ef58c: 0x50400066  beql        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x2EF58Cu;
    {
        const bool branch_taken_0x2ef58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef58c) {
            ctx->pc = 0x2EF590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF58Cu;
            // 0x2ef590: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF728u;
            goto label_2ef728;
        }
    }
    ctx->pc = 0x2EF594u;
    // 0x2ef594: 0x920213f5  lbu         $v0, 0x13F5($s0)
    ctx->pc = 0x2ef594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5109)));
    // 0x2ef598: 0x54400063  bnel        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x2EF598u;
    {
        const bool branch_taken_0x2ef598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef598) {
            ctx->pc = 0x2EF59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF598u;
            // 0x2ef59c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF728u;
            goto label_2ef728;
        }
    }
    ctx->pc = 0x2EF5A0u;
    // 0x2ef5a0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2ef5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2ef5a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ef5a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef5a8: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x2ef5a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x2ef5ac: 0x26141404  addiu       $s4, $s0, 0x1404
    ctx->pc = 0x2ef5acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 5124));
    // 0x2ef5b0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2ef5b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef5b4: 0x2615140c  addiu       $s5, $s0, 0x140C
    ctx->pc = 0x2ef5b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 5132));
    // 0x2ef5b8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2ef5b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef5bc: 0x8e0213f0  lw          $v0, 0x13F0($s0)
    ctx->pc = 0x2ef5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5104)));
label_2ef5c0:
    // 0x2ef5c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ef5c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef5c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ef5c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef5c8: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EF5C8u;
    {
        const bool branch_taken_0x2ef5c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2EF5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5C8u;
        // 0x2ef5cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5c8) {
            ctx->pc = 0x2EF600u;
            goto label_2ef600;
        }
    }
    ctx->pc = 0x2EF5D0u;
    // 0x2ef5d0: 0x8e021404  lw          $v0, 0x1404($s0)
    ctx->pc = 0x2ef5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5124)));
    // 0x2ef5d4: 0x5242000a  beql        $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EF5D4u;
    {
        const bool branch_taken_0x2ef5d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ef5d4) {
            ctx->pc = 0x2EF5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF5D4u;
            // 0x2ef5d8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF600u;
            goto label_2ef600;
        }
    }
    ctx->pc = 0x2EF5DCu;
    // 0x2ef5dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ef5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ef5e0:
    // 0x2ef5e0: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x2ef5e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ef5e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF5E4u;
    {
        const bool branch_taken_0x2ef5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5E4u;
        // 0x2ef5e8: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5e4) {
            ctx->pc = 0x2EF600u;
            goto label_2ef600;
        }
    }
    ctx->pc = 0x2EF5ECu;
    // 0x2ef5ec: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ef5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ef5f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ef5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ef5f4: 0x5643fffa  bnel        $s2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EF5F4u;
    {
        const bool branch_taken_0x2ef5f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ef5f4) {
            ctx->pc = 0x2EF5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF5F4u;
            // 0x2ef5f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef5e0;
        }
    }
    ctx->pc = 0x2EF5FCu;
    // 0x2ef5fc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ef5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef600:
    // 0x2ef600: 0xc0b916e  jal         func_2E45B8
    ctx->pc = 0x2EF600u;
    SET_GPR_U32(ctx, 31, 0x2EF608u);
    ctx->pc = 0x2EF604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF600u;
    // 0x2ef604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E45B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E45B8u, 0x2EF600u, 0x2EF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF608u;
label_2ef608:
    // 0x2ef608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ef608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef60c: 0x8ec2aa88  lw          $v0, -0x5578($s6)
    ctx->pc = 0x2ef60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945416)));
    // 0x2ef610: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EF610u;
    {
        const bool branch_taken_0x2ef610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF610u;
        // 0x2ef614: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef610) {
            ctx->pc = 0x2EF644u;
            goto label_2ef644;
        }
    }
    ctx->pc = 0x2EF618u;
    // 0x2ef618: 0x24452450  addiu       $a1, $v0, 0x2450
    ctx->pc = 0x2ef618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9296));
    // 0x2ef61c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2ef61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2ef620: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ef620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ef624: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF624u;
    {
        const bool branch_taken_0x2ef624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF624u;
        // 0x2ef628: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef624) {
            ctx->pc = 0x2EF63Cu;
            goto label_2ef63c;
        }
    }
    ctx->pc = 0x2EF62Cu;
    // 0x2ef62c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2ef62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ef630: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x2ef630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef634: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ef634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ef638: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2ef638u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2ef63c:
    // 0x2ef63c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF63Cu;
    {
        const bool branch_taken_0x2ef63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF63Cu;
        // 0x2ef640: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef63c) {
            ctx->pc = 0x2EF648u;
            goto label_2ef648;
        }
    }
    ctx->pc = 0x2EF644u;
label_2ef644:
    // 0x2ef644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ef644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef648:
    // 0x2ef648: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF648u;
    {
        const bool branch_taken_0x2ef648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef648) {
            ctx->pc = 0x2EF64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF648u;
            // 0x2ef64c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF660u;
            goto label_2ef660;
        }
    }
    ctx->pc = 0x2EF650u;
    // 0x2ef650: 0x1260ffa1  beqz        $s3, . + 4 + (-0x5F << 2)
    ctx->pc = 0x2EF650u;
    {
        const bool branch_taken_0x2ef650 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF650u;
        // 0x2ef654: 0x2b11021  addu        $v0, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef650) {
            ctx->pc = 0x2EF4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef4d8;
        }
    }
    ctx->pc = 0x2EF658u;
    // 0x2ef658: 0xa0570000  sb          $s7, 0x0($v0)
    ctx->pc = 0x2ef658u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 23));
    // 0x2ef65c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ef65cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ef660:
    // 0x2ef660: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x2ef660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ef664: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2EF664u;
    {
        const bool branch_taken_0x2ef664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ef664) {
            ctx->pc = 0x2EF668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF664u;
            // 0x2ef668: 0x8e0213f0  lw          $v0, 0x13F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef5c0;
        }
    }
    ctx->pc = 0x2EF66Cu;
label_2ef66c:
    // 0x2ef66c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ef66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef670: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF670u;
    {
        const bool branch_taken_0x2ef670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef670) {
            ctx->pc = 0x2EF674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF670u;
            // 0x2ef674: 0x8e0213f0  lw          $v0, 0x13F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF688u;
            goto label_2ef688;
        }
    }
    ctx->pc = 0x2EF678u;
    // 0x2ef678: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ef678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ef67c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ef67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef680: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2EF680u;
    {
        const bool branch_taken_0x2ef680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF680u;
        // 0x2ef684: 0xa20013f5  sb          $zero, 0x13F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5109), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef680) {
            ctx->pc = 0x2EF720u;
            goto label_2ef720;
        }
    }
    ctx->pc = 0x2EF688u;
label_2ef688:
    // 0x2ef688: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ef688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef68c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ef68cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef690: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2EF690u;
    {
        const bool branch_taken_0x2ef690 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2EF694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF690u;
        // 0x2ef694: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef690) {
            ctx->pc = 0x2EF708u;
            goto label_2ef708;
        }
    }
    ctx->pc = 0x2EF698u;
    // 0x2ef698: 0x2614140c  addiu       $s4, $s0, 0x140C
    ctx->pc = 0x2ef698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 5132));
    // 0x2ef69c: 0x3c15004c  lui         $s5, 0x4C
    ctx->pc = 0x2ef69cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
    // 0x2ef6a0: 0x26121404  addiu       $s2, $s0, 0x1404
    ctx->pc = 0x2ef6a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 5124));
    // 0x2ef6a4: 0x0  nop
    ctx->pc = 0x2ef6a4u;
    // NOP
label_2ef6a8:
    // 0x2ef6a8: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x2ef6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x2ef6ac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2ef6acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ef6b0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EF6B0u;
    {
        const bool branch_taken_0x2ef6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6B0u;
        // 0x2ef6b4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6b0) {
            ctx->pc = 0x2EF6F8u;
            goto label_2ef6f8;
        }
    }
    ctx->pc = 0x2EF6B8u;
    // 0x2ef6b8: 0xc0b916e  jal         func_2E45B8
    ctx->pc = 0x2EF6B8u;
    SET_GPR_U32(ctx, 31, 0x2EF6C0u);
    ctx->pc = 0x2E45B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E45B8u, 0x2EF6B8u, 0x2EF6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF6C0u;
label_2ef6c0:
    // 0x2ef6c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ef6c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef6c4: 0x8ec2aa88  lw          $v0, -0x5578($s6)
    ctx->pc = 0x2ef6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945416)));
    // 0x2ef6c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EF6C8u;
    {
        const bool branch_taken_0x2ef6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6C8u;
        // 0x2ef6cc: 0x26a42450  addiu       $a0, $s5, 0x2450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 9296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6c8) {
            ctx->pc = 0x2EF6E0u;
            goto label_2ef6e0;
        }
    }
    ctx->pc = 0x2EF6D0u;
    // 0x2ef6d0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2ef6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ef6d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ef6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ef6d8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF6D8u;
    {
        const bool branch_taken_0x2ef6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef6d8) {
            ctx->pc = 0x2EF6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF6D8u;
            // 0x2ef6dc: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF6E8u;
            goto label_2ef6e8;
        }
    }
    ctx->pc = 0x2EF6E0u;
label_2ef6e0:
    // 0x2ef6e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF6E0u;
    {
        const bool branch_taken_0x2ef6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6E0u;
        // 0x2ef6e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef6e0) {
            ctx->pc = 0x2EF6ECu;
            goto label_2ef6ec;
        }
    }
    ctx->pc = 0x2EF6E8u;
label_2ef6e8:
    // 0x2ef6e8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2ef6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ef6ec:
    // 0x2ef6ec: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2ef6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ef6f0: 0x8e0513f0  lw          $a1, 0x13F0($s0)
    ctx->pc = 0x2ef6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5104)));
    // 0x2ef6f4: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x2ef6f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_2ef6f8:
    // 0x2ef6f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ef6f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ef6fc: 0x265102a  slt         $v0, $s3, $a1
    ctx->pc = 0x2ef6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ef700: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2EF700u;
    {
        const bool branch_taken_0x2ef700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF700u;
        // 0x2ef704: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef700) {
            ctx->pc = 0x2EF6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef6a8;
        }
    }
    ctx->pc = 0x2EF708u;
label_2ef708:
    // 0x2ef708: 0x56250007  bnel        $s1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF708u;
    {
        const bool branch_taken_0x2ef708 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ef708) {
            ctx->pc = 0x2EF70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF708u;
            // 0x2ef70c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF728u;
            goto label_2ef728;
        }
    }
    ctx->pc = 0x2EF710u;
    // 0x2ef710: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ef710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ef714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ef714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef71c: 0xa20213f5  sb          $v0, 0x13F5($s0)
    ctx->pc = 0x2ef71cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5109), (uint8_t)GPR_U32(ctx, 2));
label_2ef720:
    // 0x2ef720: 0xe60013fc  swc1        $f0, 0x13FC($s0)
    ctx->pc = 0x2ef720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5116), bits); }
label_2ef724:
    // 0x2ef724: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2ef724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef728:
    // 0x2ef728: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2ef728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ef72c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ef72cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef730: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2ef730u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ef734: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ef734u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ef738: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2ef738u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ef73c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2ef73cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ef740: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2ef740u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ef744: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2ef744u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ef748: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2ef748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ef74c: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x2ef74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ef750: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2ef750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ef754: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2ef754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ef758: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF758u;
        // 0x2ef75c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF760u;
}
