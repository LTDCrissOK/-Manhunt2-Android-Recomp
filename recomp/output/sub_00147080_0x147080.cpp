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

// Function: sub_00147080
// Address: 0x147080 - 0x147270
void sub_00147080_0x147080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147080_0x147080");
#endif

    switch (ctx->pc) {
        case 0x1470c0u: goto label_1470c0;
        case 0x1470f4u: goto label_1470f4;
        case 0x147118u: goto label_147118;
        case 0x147120u: goto label_147120;
        case 0x147140u: goto label_147140;
        case 0x1471d0u: goto label_1471d0;
        case 0x1471f0u: goto label_1471f0;
        case 0x1471f8u: goto label_1471f8;
        case 0x147228u: goto label_147228;
        case 0x147230u: goto label_147230;
        default: break;
    }

    ctx->pc = 0x147080u;

    // 0x147080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x147080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x147084: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x147084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x147088: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x147088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x14708c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x14708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x147090: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x147090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x147094: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x147094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147098: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x147098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x14709c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x14709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1470a0: 0x8e220560  lw          $v0, 0x560($s1)
    ctx->pc = 0x1470a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x1470a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1470a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1470a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1470a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1470ac: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x1470acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x1470b0: 0x50800068  beql        $a0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x1470B0u;
    {
        const bool branch_taken_0x1470b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1470b0) {
            ctx->pc = 0x1470B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1470B0u;
            // 0x1470b4: 0x8e220564  lw          $v0, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147254u;
            goto label_147254;
        }
    }
    ctx->pc = 0x1470B8u;
    // 0x1470b8: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x1470B8u;
    SET_GPR_U32(ctx, 31, 0x1470C0u);
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x1470B8u, 0x1470C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470C0u;
label_1470c0:
    // 0x1470c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1470c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470c4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1470C4u;
    {
        const bool branch_taken_0x1470c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1470C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1470C4u;
        // 0x1470c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470c4) {
            ctx->pc = 0x1470D4u;
            goto label_1470d4;
        }
    }
    ctx->pc = 0x1470CCu;
    // 0x1470cc: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1470CCu;
    {
        const bool branch_taken_0x1470cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1470D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1470CCu;
        // 0x1470d0: 0x8e220564  lw          $v0, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470cc) {
            ctx->pc = 0x147254u;
            goto label_147254;
        }
    }
    ctx->pc = 0x1470D4u;
label_1470d4:
    // 0x1470d4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1470d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1470d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1470d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1470dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1470dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1470e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1470e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470e4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1470e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1470e8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1470e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1470ec: 0xc04107a  jal         func_1041E8
    ctx->pc = 0x1470ECu;
    SET_GPR_U32(ctx, 31, 0x1470F4u);
    ctx->pc = 0x1470F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470ECu;
    // 0x1470f0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1041E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1041E8u, 0x1470ECu, 0x1470F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470F4u;
label_1470f4:
    // 0x1470f4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1470F4u;
    {
        const bool branch_taken_0x1470f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1470F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1470F4u;
        // 0x1470f8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470f4) {
            ctx->pc = 0x147138u;
            goto label_147138;
        }
    }
    ctx->pc = 0x1470FCu;
    // 0x1470fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1470fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x147100: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x147100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147104: 0x8e310564  lw          $s1, 0x564($s1)
    ctx->pc = 0x147104u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x147108: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x147108u;
    {
        const bool branch_taken_0x147108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147108u;
        // 0x14710c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147108) {
            ctx->pc = 0x147240u;
            goto label_147240;
        }
    }
    ctx->pc = 0x147110u;
    // 0x147110: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x147110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147114: 0x0  nop
    ctx->pc = 0x147114u;
    // NOP
label_147118:
    // 0x147118: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x147118u;
    SET_GPR_U32(ctx, 31, 0x147120u);
    ctx->pc = 0x14711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147118u;
    // 0x14711c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x147118u, 0x147120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147120u;
label_147120:
    // 0x147120: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x147120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147124: 0x0  nop
    ctx->pc = 0x147124u;
    // NOP
    // 0x147128: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147128u;
    {
        const bool branch_taken_0x147128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147128) {
            ctx->pc = 0x14712Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147128u;
            // 0x14712c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147118;
        }
    }
    ctx->pc = 0x147130u;
    // 0x147130: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x147130u;
    {
        const bool branch_taken_0x147130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147130u;
        // 0x147134: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147130) {
            ctx->pc = 0x147244u;
            goto label_147244;
        }
    }
    ctx->pc = 0x147138u;
label_147138:
    // 0x147138: 0xc051a94  jal         func_146A50
    ctx->pc = 0x147138u;
    SET_GPR_U32(ctx, 31, 0x147140u);
    ctx->pc = 0x14713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147138u;
    // 0x14713c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146A50u, 0x147138u, 0x147140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147140u;
label_147140:
    // 0x147140: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x147140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147144: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x147144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x147148: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x147148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x14714c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14714cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147150: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x147150u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x147154: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x147154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147158: 0x0  nop
    ctx->pc = 0x147158u;
    // NOP
    // 0x14715c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x14715Cu;
    {
        const bool branch_taken_0x14715c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14715Cu;
        // 0x147160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14715c) {
            ctx->pc = 0x147190u;
            goto label_147190;
        }
    }
    ctx->pc = 0x147164u;
    // 0x147164: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x147164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147168: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x147168u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x14716c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14716cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147170: 0x0  nop
    ctx->pc = 0x147170u;
    // NOP
    // 0x147174: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x147174u;
    {
        const bool branch_taken_0x147174 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147174u;
        // 0x147178: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147174) {
            ctx->pc = 0x147190u;
            goto label_147190;
        }
    }
    ctx->pc = 0x14717Cu;
    // 0x14717c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x14717cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x147180: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x147180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147184: 0x0  nop
    ctx->pc = 0x147184u;
    // NOP
    // 0x147188: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x147188u;
    {
        const bool branch_taken_0x147188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147188) {
            ctx->pc = 0x14718Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147188u;
            // 0x14718c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147190u;
            goto label_147190;
        }
    }
    ctx->pc = 0x147190u;
label_147190:
    // 0x147190: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147190u;
    {
        const bool branch_taken_0x147190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147190u;
        // 0x147194: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x147190) {
            ctx->pc = 0x1471A4u;
            goto label_1471a4;
        }
    }
    ctx->pc = 0x147198u;
    // 0x147198: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x147198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14719c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x14719cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1471a0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1471a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1471a4:
    // 0x1471a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1471a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471a8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1471a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1471ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1471acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471b0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1471b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1471b4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1471b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1471b8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1471b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1471bc: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1471bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1471c0: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1471c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1471c4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1471c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1471c8: 0xc051c9c  jal         func_147270
    ctx->pc = 0x1471C8u;
    SET_GPR_U32(ctx, 31, 0x1471D0u);
    ctx->pc = 0x1471CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1471C8u;
    // 0x1471cc: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147270u, 0x1471C8u, 0x1471D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471D0u;
label_1471d0:
    // 0x1471d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1471d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471d4: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x1471D4u;
    {
        const bool branch_taken_0x1471d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471D4u;
        // 0x1471d8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471d4) {
            ctx->pc = 0x147214u;
            goto label_147214;
        }
    }
    ctx->pc = 0x1471DCu;
    // 0x1471dc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1471dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1471e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1471E0u;
    {
        const bool branch_taken_0x1471e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471E0u;
        // 0x1471e4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471e0) {
            ctx->pc = 0x147208u;
            goto label_147208;
        }
    }
    ctx->pc = 0x1471E8u;
    // 0x1471e8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1471e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1471ec: 0x0  nop
    ctx->pc = 0x1471ecu;
    // NOP
label_1471f0:
    // 0x1471f0: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1471F0u;
    SET_GPR_U32(ctx, 31, 0x1471F8u);
    ctx->pc = 0x1471F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1471F0u;
    // 0x1471f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1471F0u, 0x1471F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471F8u;
label_1471f8:
    // 0x1471f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1471f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1471fc: 0x0  nop
    ctx->pc = 0x1471fcu;
    // NOP
    // 0x147200: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147200u;
    {
        const bool branch_taken_0x147200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147200) {
            ctx->pc = 0x147204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147200u;
            // 0x147204: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1471F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1471f0;
        }
    }
    ctx->pc = 0x147208u;
label_147208:
    // 0x147208: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x147208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x14720c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14720Cu;
    {
        const bool branch_taken_0x14720c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14720Cu;
        // 0x147210: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14720c) {
            ctx->pc = 0x147248u;
            goto label_147248;
        }
    }
    ctx->pc = 0x147214u;
label_147214:
    // 0x147214: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x147214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147218: 0x8e310564  lw          $s1, 0x564($s1)
    ctx->pc = 0x147218u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x14721c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14721Cu;
    {
        const bool branch_taken_0x14721c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14721Cu;
        // 0x147220: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14721c) {
            ctx->pc = 0x147240u;
            goto label_147240;
        }
    }
    ctx->pc = 0x147224u;
    // 0x147224: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x147224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_147228:
    // 0x147228: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x147228u;
    SET_GPR_U32(ctx, 31, 0x147230u);
    ctx->pc = 0x14722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147228u;
    // 0x14722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x147228u, 0x147230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147230u;
label_147230:
    // 0x147230: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x147230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147234: 0x0  nop
    ctx->pc = 0x147234u;
    // NOP
    // 0x147238: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x147238u;
    {
        const bool branch_taken_0x147238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147238) {
            ctx->pc = 0x14723Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147238u;
            // 0x14723c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147228;
        }
    }
    ctx->pc = 0x147240u;
label_147240:
    // 0x147240: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x147240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_147244:
    // 0x147244: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x147244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_147248:
    // 0x147248: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x147248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14724c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x14724cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x147250: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x147250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_147254:
    // 0x147254: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x147254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147258: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x147258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14725c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x14725cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147260: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x147260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147264: 0x3e00008  jr          $ra
    ctx->pc = 0x147264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147264u;
        // 0x147268: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14726Cu;
    // 0x14726c: 0x0  nop
    ctx->pc = 0x14726cu;
    // NOP
    ctx->pc = 0x147270u;
}
