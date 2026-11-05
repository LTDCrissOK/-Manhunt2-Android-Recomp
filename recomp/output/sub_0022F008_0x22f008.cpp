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

// Function: sub_0022F008
// Address: 0x22f008 - 0x22f2f8
void sub_0022F008_0x22f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F008_0x22f008");
#endif

    switch (ctx->pc) {
        case 0x22f110u: goto label_22f110;
        case 0x22f18cu: goto label_22f18c;
        case 0x22f2b8u: goto label_22f2b8;
        case 0x22f2d4u: goto label_22f2d4;
        default: break;
    }

    ctx->pc = 0x22f008u;

    // 0x22f008: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22f008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22f00c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22f00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22f010: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22f010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22f014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f018: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22f018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22f01c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22f01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22f020: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22f024: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x22f024u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22f028: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x22f028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22f02c: 0x8e020430  lw          $v0, 0x430($s0)
    ctx->pc = 0x22f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x22f030: 0x544000a9  bnel        $v0, $zero, . + 4 + (0xA9 << 2)
    ctx->pc = 0x22F030u;
    {
        const bool branch_taken_0x22f030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f030) {
            ctx->pc = 0x22F034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F030u;
            // 0x22f034: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F2D8u;
            goto label_22f2d8;
        }
    }
    ctx->pc = 0x22F038u;
    // 0x22f038: 0x8e02042c  lw          $v0, 0x42C($s0)
    ctx->pc = 0x22f038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x22f03c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F03Cu;
    {
        const bool branch_taken_0x22f03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F03Cu;
        // 0x22f040: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f03c) {
            ctx->pc = 0x22F060u;
            goto label_22f060;
        }
    }
    ctx->pc = 0x22F044u;
    // 0x22f044: 0xc6010434  lwc1        $f1, 0x434($s0)
    ctx->pc = 0x22f044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f04c: 0x0  nop
    ctx->pc = 0x22f04cu;
    // NOP
    // 0x22f050: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22f050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f054: 0x0  nop
    ctx->pc = 0x22f054u;
    // NOP
    // 0x22f058: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22F058u;
    {
        const bool branch_taken_0x22f058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f058) {
            ctx->pc = 0x22F064u;
            goto label_22f064;
        }
    }
    ctx->pc = 0x22F060u;
label_22f060:
    // 0x22f060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f064:
    // 0x22f064: 0x5460009c  bnel        $v1, $zero, . + 4 + (0x9C << 2)
    ctx->pc = 0x22F064u;
    {
        const bool branch_taken_0x22f064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f064) {
            ctx->pc = 0x22F068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F064u;
            // 0x22f068: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F2D8u;
            goto label_22f2d8;
        }
    }
    ctx->pc = 0x22F06Cu;
    // 0x22f06c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x22f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x22f070: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x22f070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x22f074: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F074u;
    {
        const bool branch_taken_0x22f074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f074) {
            ctx->pc = 0x22F078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F074u;
            // 0x22f078: 0xc60203a0  lwc1        $f2, 0x3A0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F084u;
            goto label_22f084;
        }
    }
    ctx->pc = 0x22F07Cu;
    // 0x22f07c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x22F07Cu;
    {
        const bool branch_taken_0x22f07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F07Cu;
        // 0x22f080: 0xae0003a0  sw          $zero, 0x3A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f07c) {
            ctx->pc = 0x22F268u;
            goto label_22f268;
        }
    }
    ctx->pc = 0x22F084u;
label_22f084:
    // 0x22f084: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x22f084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x22f088: 0x0  nop
    ctx->pc = 0x22f088u;
    // NOP
    // 0x22f08c: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x22f08cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f090: 0x0  nop
    ctx->pc = 0x22f090u;
    // NOP
    // 0x22f094: 0x45030075  bc1tl       . + 4 + (0x75 << 2)
    ctx->pc = 0x22F094u;
    {
        const bool branch_taken_0x22f094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f094) {
            ctx->pc = 0x22F098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F094u;
            // 0x22f098: 0x8e020430  lw          $v0, 0x430($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F26Cu;
            goto label_22f26c;
        }
    }
    ctx->pc = 0x22F09Cu;
    // 0x22f09c: 0xc6000524  lwc1        $f0, 0x524($s0)
    ctx->pc = 0x22f09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f0a0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x22f0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x22f0a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22f0a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x22f0a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22f0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f0ac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x22f0acu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x22f0b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22f0b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f0b4: 0x0  nop
    ctx->pc = 0x22f0b4u;
    // NOP
    // 0x22f0b8: 0x4502006c  bc1fl       . + 4 + (0x6C << 2)
    ctx->pc = 0x22F0B8u;
    {
        const bool branch_taken_0x22f0b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f0b8) {
            ctx->pc = 0x22F0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F0B8u;
            // 0x22f0bc: 0x8e020430  lw          $v0, 0x430($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F26Cu;
            goto label_22f26c;
        }
    }
    ctx->pc = 0x22F0C0u;
    // 0x22f0c0: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x22f0c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f0c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22f0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22f0c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x22f0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x22f0cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x22F0CCu;
    {
        const bool branch_taken_0x22f0cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0CCu;
        // 0x22f0d0: 0x8e110334  lw          $s1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f0cc) {
            ctx->pc = 0x22F0DCu;
            goto label_22f0dc;
        }
    }
    ctx->pc = 0x22F0D4u;
    // 0x22f0d4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x22f0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x22f0d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x22f0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_22f0dc:
    // 0x22f0dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x22f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x22f0e0: 0xc45496dc  lwc1        $f20, -0x6924($v0)
    ctx->pc = 0x22f0e0u;
    { uint32_t bits = FAST_READ32(0x3F96DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22f0e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22f0e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f0e8: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x22f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x22f0ec: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x22f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x22f0f0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22f0f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f0f4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22F0F4u;
    {
        const bool branch_taken_0x22f0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0F4u;
        // 0x22f0f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f0f4) {
            ctx->pc = 0x22F130u;
            goto label_22f130;
        }
    }
    ctx->pc = 0x22F0FCu;
    // 0x22f0fc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x22f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22f100: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22F100u;
    {
        const bool branch_taken_0x22f100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22f100) {
            ctx->pc = 0x22F104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F100u;
            // 0x22f104: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F134u;
            goto label_22f134;
        }
    }
    ctx->pc = 0x22F108u;
    // 0x22f108: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x22F108u;
    SET_GPR_U32(ctx, 31, 0x22F110u);
    ctx->pc = 0x22F10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F108u;
    // 0x22f10c: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x22F108u, 0x22F110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F110u;
label_22f110:
    // 0x22f110: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F110u;
    {
        const bool branch_taken_0x22f110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f110) {
            ctx->pc = 0x22F114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F110u;
            // 0x22f114: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F134u;
            goto label_22f134;
        }
    }
    ctx->pc = 0x22F118u;
    // 0x22f118: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x22f118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x22f11c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x22f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x22f120: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F120u;
    {
        const bool branch_taken_0x22f120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F120u;
        // 0x22f124: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f120) {
            ctx->pc = 0x22F130u;
            goto label_22f130;
        }
    }
    ctx->pc = 0x22F128u;
    // 0x22f128: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F128u;
    {
        const bool branch_taken_0x22f128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f128) {
            ctx->pc = 0x22F134u;
            goto label_22f134;
        }
    }
    ctx->pc = 0x22F130u;
label_22f130:
    // 0x22f130: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x22f130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f134:
    // 0x22f134: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F134u;
    {
        const bool branch_taken_0x22f134 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f134) {
            ctx->pc = 0x22F154u;
            goto label_22f154;
        }
    }
    ctx->pc = 0x22F13Cu;
    // 0x22f13c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x22f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x22f140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f144: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x22f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22f148: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f14c: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x22f14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x22f150: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x22f150u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22f154:
    // 0x22f154: 0x16600020  bnez        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x22F154u;
    {
        const bool branch_taken_0x22f154 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F154u;
        // 0x22f158: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f154) {
            ctx->pc = 0x22F1D8u;
            goto label_22f1d8;
        }
    }
    ctx->pc = 0x22F15Cu;
    // 0x22f15c: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x22f15cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22f160: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22f160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f164: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x22f164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x22f168: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x22f168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x22f16c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22f16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f170: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22F170u;
    {
        const bool branch_taken_0x22f170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F170u;
        // 0x22f174: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f170) {
            ctx->pc = 0x22F1ACu;
            goto label_22f1ac;
        }
    }
    ctx->pc = 0x22F178u;
    // 0x22f178: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x22f178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22f17c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22F17Cu;
    {
        const bool branch_taken_0x22f17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22f17c) {
            ctx->pc = 0x22F180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F17Cu;
            // 0x22f180: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F1B0u;
            goto label_22f1b0;
        }
    }
    ctx->pc = 0x22F184u;
    // 0x22f184: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x22F184u;
    SET_GPR_U32(ctx, 31, 0x22F18Cu);
    ctx->pc = 0x22F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F184u;
    // 0x22f188: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x22F184u, 0x22F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F18Cu;
label_22f18c:
    // 0x22f18c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F18Cu;
    {
        const bool branch_taken_0x22f18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f18c) {
            ctx->pc = 0x22F190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F18Cu;
            // 0x22f190: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F1B0u;
            goto label_22f1b0;
        }
    }
    ctx->pc = 0x22F194u;
    // 0x22f194: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x22f194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x22f198: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x22f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x22f19c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F19Cu;
    {
        const bool branch_taken_0x22f19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F19Cu;
        // 0x22f1a0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f19c) {
            ctx->pc = 0x22F1ACu;
            goto label_22f1ac;
        }
    }
    ctx->pc = 0x22F1A4u;
    // 0x22f1a4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F1A4u;
    {
        const bool branch_taken_0x22f1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f1a4) {
            ctx->pc = 0x22F1B0u;
            goto label_22f1b0;
        }
    }
    ctx->pc = 0x22F1ACu;
label_22f1ac:
    // 0x22f1ac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x22f1acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f1b0:
    // 0x22f1b0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F1B0u;
    {
        const bool branch_taken_0x22f1b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f1b0) {
            ctx->pc = 0x22F1D0u;
            goto label_22f1d0;
        }
    }
    ctx->pc = 0x22F1B8u;
    // 0x22f1b8: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x22f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x22f1bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f1c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x22f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22f1c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f1c8: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x22f1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x22f1cc: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x22f1ccu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22f1d0:
    // 0x22f1d0: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F1D0u;
    {
        const bool branch_taken_0x22f1d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1D0u;
        // 0x22f1d4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1d0) {
            ctx->pc = 0x22F1DCu;
            goto label_22f1dc;
        }
    }
    ctx->pc = 0x22F1D8u;
label_22f1d8:
    // 0x22f1d8: 0xc45496e0  lwc1        $f20, -0x6920($v0)
    ctx->pc = 0x22f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22f1dc:
    // 0x22f1dc: 0xc60203a0  lwc1        $f2, 0x3A0($s0)
    ctx->pc = 0x22f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22f1e0: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x22f1e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x22f1e4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x22f1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f1e8: 0x0  nop
    ctx->pc = 0x22f1e8u;
    // NOP
    // 0x22f1ec: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x22F1ECu;
    {
        const bool branch_taken_0x22f1ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F1ECu;
        // 0x22f1f0: 0xc6000374  lwc1        $f0, 0x374($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f1ec) {
            ctx->pc = 0x22F20Cu;
            goto label_22f20c;
        }
    }
    ctx->pc = 0x22F1F4u;
    // 0x22f1f4: 0x4615a042  mul.s       $f1, $f20, $f21
    ctx->pc = 0x22f1f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x22f1f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f1f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f1fc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x22f1fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x22f200: 0xe6000374  swc1        $f0, 0x374($s0)
    ctx->pc = 0x22f200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
    // 0x22f204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22F204u;
    {
        const bool branch_taken_0x22f204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F204u;
        // 0x22f208: 0xe60103a0  swc1        $f1, 0x3A0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f204) {
            ctx->pc = 0x22F218u;
            goto label_22f218;
        }
    }
    ctx->pc = 0x22F20Cu;
label_22f20c:
    // 0x22f20c: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x22f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x22f210: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x22f210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x22f214: 0xe6000374  swc1        $f0, 0x374($s0)
    ctx->pc = 0x22f214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
label_22f218:
    // 0x22f218: 0xc6010374  lwc1        $f1, 0x374($s0)
    ctx->pc = 0x22f218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f21c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f21cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f220: 0x0  nop
    ctx->pc = 0x22f220u;
    // NOP
    // 0x22f224: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f228: 0x0  nop
    ctx->pc = 0x22f228u;
    // NOP
    // 0x22f22c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x22F22Cu;
    {
        const bool branch_taken_0x22f22c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f22c) {
            ctx->pc = 0x22F244u;
            goto label_22f244;
        }
    }
    ctx->pc = 0x22F234u;
    // 0x22f234: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x22f234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x22f238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f23c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22F23Cu;
    {
        const bool branch_taken_0x22f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F23Cu;
        // 0x22f240: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f23c) {
            ctx->pc = 0x22F264u;
            goto label_22f264;
        }
    }
    ctx->pc = 0x22F244u;
label_22f244:
    // 0x22f244: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x22f244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x22f248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f24c: 0x0  nop
    ctx->pc = 0x22f24cu;
    // NOP
    // 0x22f250: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22f250u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f254: 0x0  nop
    ctx->pc = 0x22f254u;
    // NOP
    // 0x22f258: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x22F258u;
    {
        const bool branch_taken_0x22f258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f258) {
            ctx->pc = 0x22F25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F258u;
            // 0x22f25c: 0x8e020430  lw          $v0, 0x430($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F26Cu;
            goto label_22f26c;
        }
    }
    ctx->pc = 0x22F260u;
    // 0x22f260: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22f260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_22f264:
    // 0x22f264: 0xe6000374  swc1        $f0, 0x374($s0)
    ctx->pc = 0x22f264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
label_22f268:
    // 0x22f268: 0x8e020430  lw          $v0, 0x430($s0)
    ctx->pc = 0x22f268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
label_22f26c:
    // 0x22f26c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x22F26Cu;
    {
        const bool branch_taken_0x22f26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f26c) {
            ctx->pc = 0x22F270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F26Cu;
            // 0x22f270: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F2D8u;
            goto label_22f2d8;
        }
    }
    ctx->pc = 0x22F274u;
    // 0x22f274: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x22f274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x22f278: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x22f278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x22f27c: 0xc60c0374  lwc1        $f12, 0x374($s0)
    ctx->pc = 0x22f27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f280: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x22f280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    // 0x22f284: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f288: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x22f288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f28c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x22f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x22f290: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x22f290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22f294: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x22f294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f298: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x22f298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22f29c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x22f29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f2a0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x22f2a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22f2a4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x22f2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f2a8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x22f2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22f2ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22f2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f2b0: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x22F2B0u;
    SET_GPR_U32(ctx, 31, 0x22F2B8u);
    ctx->pc = 0x22F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2B0u;
    // 0x22f2b4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x22F2B0u, 0x22F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2B8u;
label_22f2b8:
    // 0x22f2b8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x22f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x22f2bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f2c0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x22f2c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f2c4: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x22f2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x22f2c8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x22f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x22f2cc: 0xc0c48da  jal         func_312368
    ctx->pc = 0x22F2CCu;
    SET_GPR_U32(ctx, 31, 0x22F2D4u);
    ctx->pc = 0x22F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2CCu;
    // 0x22f2d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x22F2CCu, 0x22F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2D4u;
label_22f2d4:
    // 0x22f2d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22f2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22f2d8:
    // 0x22f2d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22f2d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f2dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22f2dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f2e0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22f2e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22f2e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22f2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f2e8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x22f2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22f2ec: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x22f2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22f2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x22F2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F2F0u;
        // 0x22f2f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F2F8u;
}
