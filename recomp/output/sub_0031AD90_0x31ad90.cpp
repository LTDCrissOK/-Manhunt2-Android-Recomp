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

// Function: sub_0031AD90
// Address: 0x31ad90 - 0x31aee0
void sub_0031AD90_0x31ad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AD90_0x31ad90");
#endif

    switch (ctx->pc) {
        case 0x31ae28u: goto label_31ae28;
        case 0x31ae34u: goto label_31ae34;
        case 0x31ae40u: goto label_31ae40;
        case 0x31ae64u: goto label_31ae64;
        case 0x31ae78u: goto label_31ae78;
        default: break;
    }

    ctx->pc = 0x31ad90u;

    // 0x31ad90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31ad94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31ad94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31ad98: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x31ad98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x31ad9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31ad9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31ada0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31ada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31ada4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31ada4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ada8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31ada8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31adac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31adacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31adb0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x31adb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x31adb4: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x31adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x31adb8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x31adb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x31adbc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x31adbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x31adc0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x31adc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31adc4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x31adc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x31adc8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x31adc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x31adcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31adccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31add0: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x31add0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x31add4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31add4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31add8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x31add8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x31addc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31addcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31ade0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x31ade0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x31ade4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x31ade4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31ade8: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x31ade8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x31adec: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x31adecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x31adf0: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x31adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x31adf4: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x31adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x31adf8: 0xae500010  sw          $s0, 0x10($s2)
    ctx->pc = 0x31adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
    // 0x31adfc: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x31adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    // 0x31ae00: 0xae50001c  sw          $s0, 0x1C($s2)
    ctx->pc = 0x31ae00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 16));
    // 0x31ae04: 0xae500020  sw          $s0, 0x20($s2)
    ctx->pc = 0x31ae04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
    // 0x31ae08: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x31ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x31ae0c: 0xe645002c  swc1        $f5, 0x2C($s2)
    ctx->pc = 0x31ae0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x31ae10: 0xe6440030  swc1        $f4, 0x30($s2)
    ctx->pc = 0x31ae10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x31ae14: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x31ae14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x31ae18: 0xe6410038  swc1        $f1, 0x38($s2)
    ctx->pc = 0x31ae18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x31ae1c: 0xe642003c  swc1        $f2, 0x3C($s2)
    ctx->pc = 0x31ae1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x31ae20: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x31AE20u;
    SET_GPR_U32(ctx, 31, 0x31AE28u);
    ctx->pc = 0x31AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE20u;
    // 0x31ae24: 0xe6430050  swc1        $f3, 0x50($s2) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x31AE20u, 0x31AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE28u;
label_31ae28:
    // 0x31ae28: 0xae50005c  sw          $s0, 0x5C($s2)
    ctx->pc = 0x31ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 16));
    // 0x31ae2c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x31AE2Cu;
    SET_GPR_U32(ctx, 31, 0x31AE34u);
    ctx->pc = 0x31AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE2Cu;
    // 0x31ae30: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x31AE2Cu, 0x31AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE34u;
label_31ae34:
    // 0x31ae34: 0xae500068  sw          $s0, 0x68($s2)
    ctx->pc = 0x31ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 16));
    // 0x31ae38: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x31AE38u;
    SET_GPR_U32(ctx, 31, 0x31AE40u);
    ctx->pc = 0x31AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE38u;
    // 0x31ae3c: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x31AE38u, 0x31AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE40u;
label_31ae40:
    // 0x31ae40: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x31ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x31ae44: 0xae500084  sw          $s0, 0x84($s2)
    ctx->pc = 0x31ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 16));
    // 0x31ae48: 0xae400088  sw          $zero, 0x88($s2)
    ctx->pc = 0x31ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
    // 0x31ae4c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x31ae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31ae50: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x31ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x31ae54: 0xae510090  sw          $s1, 0x90($s2)
    ctx->pc = 0x31ae54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 17));
    // 0x31ae58: 0xa240009c  sb          $zero, 0x9C($s2)
    ctx->pc = 0x31ae58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ae5c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x31AE5Cu;
    SET_GPR_U32(ctx, 31, 0x31AE64u);
    ctx->pc = 0x31AE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AE5Cu;
    // 0x31ae60: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x31AE5Cu, 0x31AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AE64u;
label_31ae64:
    // 0x31ae64: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x31ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31ae68: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x31ae68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x31ae6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x31ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31ae70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31ae70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ae74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31ae78:
    // 0x31ae78: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x31ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x31ae7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31ae80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x31ae84: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x31ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x31ae88: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31AE88u;
    {
        const bool branch_taken_0x31ae88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x31AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE88u;
        // 0x31ae8c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae88) {
            ctx->pc = 0x31AE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ae78;
        }
    }
    ctx->pc = 0x31AE90u;
    // 0x31ae90: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x31ae90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x31ae94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31ae94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ae98: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x31ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31ae9c: 0xae440080  sw          $a0, 0x80($s2)
    ctx->pc = 0x31ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 4));
    // 0x31aea0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31aea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aea4: 0xa2430024  sb          $v1, 0x24($s2)
    ctx->pc = 0x31aea4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 3));
    // 0x31aea8: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x31aea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x31aeac: 0xa2430027  sb          $v1, 0x27($s2)
    ctx->pc = 0x31aeacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 39), (uint8_t)GPR_U32(ctx, 3));
    // 0x31aeb0: 0xa2430026  sb          $v1, 0x26($s2)
    ctx->pc = 0x31aeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x31aeb4: 0xa2430025  sb          $v1, 0x25($s2)
    ctx->pc = 0x31aeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x31aeb8: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x31aeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x31aebc: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x31aebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x31aec0: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x31aec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x31aec4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31aec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31aec8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31aec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31aecc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31aeccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31aed0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x31aed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31aed4: 0x3e00008  jr          $ra
    ctx->pc = 0x31AED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AED4u;
        // 0x31aed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AEDCu;
    // 0x31aedc: 0x0  nop
    ctx->pc = 0x31aedcu;
    // NOP
    ctx->pc = 0x31aee0u;
}
