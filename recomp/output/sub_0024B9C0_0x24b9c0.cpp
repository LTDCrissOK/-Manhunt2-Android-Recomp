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

// Function: sub_0024B9C0
// Address: 0x24b9c0 - 0x24bb08
void sub_0024B9C0_0x24b9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B9C0_0x24b9c0");
#endif

    switch (ctx->pc) {
        case 0x24ba10u: goto label_24ba10;
        case 0x24ba1cu: goto label_24ba1c;
        case 0x24ba68u: goto label_24ba68;
        case 0x24bac8u: goto label_24bac8;
        case 0x24bae0u: goto label_24bae0;
        case 0x24baecu: goto label_24baec;
        default: break;
    }

    ctx->pc = 0x24b9c0u;

    // 0x24b9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b9c4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x24b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x24b9c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b9cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24b9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24b9d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24b9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24b9d8: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x24b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24b9dc: 0x8c440150  lw          $a0, 0x150($v0)
    ctx->pc = 0x24b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x24b9e0: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x24B9E0u;
    {
        const bool branch_taken_0x24b9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x24B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9E0u;
        // 0x24b9e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9e0) {
            ctx->pc = 0x24BAECu;
            goto label_24baec;
        }
    }
    ctx->pc = 0x24B9E8u;
    // 0x24b9e8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x24b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x24b9ec: 0x10820040  beq         $a0, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x24B9ECu;
    {
        const bool branch_taken_0x24b9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9ECu;
        // 0x24b9f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b9ec) {
            ctx->pc = 0x24BAF0u;
            goto label_24baf0;
        }
    }
    ctx->pc = 0x24B9F4u;
    // 0x24b9f4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x24b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x24b9f8: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x24b9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x24b9fc: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x24b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x24ba00: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x24ba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x24ba04: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x24ba04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ba08: 0xc07682a  jal         func_1DA0A8
    ctx->pc = 0x24BA08u;
    SET_GPR_U32(ctx, 31, 0x24BA10u);
    ctx->pc = 0x24BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA08u;
    // 0x24ba0c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x24BA08u, 0x24BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA10u;
label_24ba10:
    // 0x24ba10: 0xae000fd0  sw          $zero, 0xFD0($s0)
    ctx->pc = 0x24ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
    // 0x24ba14: 0xc093060  jal         func_24C180
    ctx->pc = 0x24BA14u;
    SET_GPR_U32(ctx, 31, 0x24BA1Cu);
    ctx->pc = 0x24BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA14u;
    // 0x24ba18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C180u, 0x24BA14u, 0x24BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA1Cu;
label_24ba1c:
    // 0x24ba1c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x24BA1Cu;
    {
        const bool branch_taken_0x24ba1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA1Cu;
        // 0x24ba20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba1c) {
            ctx->pc = 0x24BAF0u;
            goto label_24baf0;
        }
    }
    ctx->pc = 0x24BA24u;
    // 0x24ba24: 0x24050464  addiu       $a1, $zero, 0x464
    ctx->pc = 0x24ba24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1124));
    // 0x24ba28: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x24BA28u;
    {
        const bool branch_taken_0x24ba28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA28u;
        // 0x24ba2c: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba28) {
            ctx->pc = 0x24BAC0u;
            goto label_24bac0;
        }
    }
    ctx->pc = 0x24BA30u;
    // 0x24ba30: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x24ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x24ba34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24ba34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ba38: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x24ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24ba3c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BA3Cu;
    {
        const bool branch_taken_0x24ba3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA3Cu;
        // 0x24ba40: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba3c) {
            ctx->pc = 0x24BA50u;
            goto label_24ba50;
        }
    }
    ctx->pc = 0x24BA44u;
    // 0x24ba44: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x24ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24ba48: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24BA48u;
    {
        const bool branch_taken_0x24ba48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ba48) {
            ctx->pc = 0x24BAA0u;
            goto label_24baa0;
        }
    }
    ctx->pc = 0x24BA50u;
label_24ba50:
    // 0x24ba50: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x24ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x24ba54: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BA54u;
    {
        const bool branch_taken_0x24ba54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ba54) {
            ctx->pc = 0x24BA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BA54u;
            // 0x24ba58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BA64u;
            goto label_24ba64;
        }
    }
    ctx->pc = 0x24BA5Cu;
    // 0x24ba5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24BA5Cu;
    {
        const bool branch_taken_0x24ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA5Cu;
        // 0x24ba60: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba5c) {
            ctx->pc = 0x24BA88u;
            goto label_24ba88;
        }
    }
    ctx->pc = 0x24BA64u;
label_24ba64:
    // 0x24ba64: 0x248301ec  addiu       $v1, $a0, 0x1EC
    ctx->pc = 0x24ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 492));
label_24ba68:
    // 0x24ba68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ba6c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BA6Cu;
    {
        const bool branch_taken_0x24ba6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ba6c) {
            ctx->pc = 0x24BA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BA6Cu;
            // 0x24ba70: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BA88u;
            goto label_24ba88;
        }
    }
    ctx->pc = 0x24BA74u;
    // 0x24ba74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24ba74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24ba78: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x24ba78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24ba7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24BA7Cu;
    {
        const bool branch_taken_0x24ba7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA7Cu;
        // 0x24ba80: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba7c) {
            ctx->pc = 0x24BA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ba68;
        }
    }
    ctx->pc = 0x24BA84u;
    // 0x24ba84: 0x8cc301e8  lw          $v1, 0x1E8($a2)
    ctx->pc = 0x24ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_24ba88:
    // 0x24ba88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24ba8c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x24ba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ba90: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x24ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ba94: 0x0  nop
    ctx->pc = 0x24ba94u;
    // NOP
    // 0x24ba98: 0x0  nop
    ctx->pc = 0x24ba98u;
    // NOP
    // 0x24ba9c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x24ba9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_24baa0:
    // 0x24baa0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24baa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24baa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24baa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24baa8: 0x0  nop
    ctx->pc = 0x24baa8u;
    // NOP
    // 0x24baac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24baacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bab0: 0x0  nop
    ctx->pc = 0x24bab0u;
    // NOP
    // 0x24bab4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BAB4u;
    {
        const bool branch_taken_0x24bab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAB4u;
        // 0x24bab8: 0x24050465  addiu       $a1, $zero, 0x465 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bab4) {
            ctx->pc = 0x24BAC0u;
            goto label_24bac0;
        }
    }
    ctx->pc = 0x24BABCu;
    // 0x24babc: 0x24050466  addiu       $a1, $zero, 0x466
    ctx->pc = 0x24babcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1126));
label_24bac0:
    // 0x24bac0: 0xc092e58  jal         func_24B960
    ctx->pc = 0x24BAC0u;
    SET_GPR_U32(ctx, 31, 0x24BAC8u);
    ctx->pc = 0x24B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B960u, 0x24BAC0u, 0x24BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BAC8u;
label_24bac8:
    // 0x24bac8: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x24bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24bacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24bad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bad4: 0xac620160  sw          $v0, 0x160($v1)
    ctx->pc = 0x24bad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 2));
    // 0x24bad8: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x24BAD8u;
    SET_GPR_U32(ctx, 31, 0x24BAE0u);
    ctx->pc = 0x24BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BAD8u;
    // 0x24badc: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x24BAD8u, 0x24BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BAE0u;
label_24bae0:
    // 0x24bae0: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x24bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x24bae4: 0xc092d94  jal         func_24B650
    ctx->pc = 0x24BAE4u;
    SET_GPR_U32(ctx, 31, 0x24BAECu);
    ctx->pc = 0x24BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BAE4u;
    // 0x24bae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B650u, 0x24BAE4u, 0x24BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BAECu;
label_24baec:
    // 0x24baec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24baf0:
    // 0x24baf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24baf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24baf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24baf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24baf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24baf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bafc: 0x3e00008  jr          $ra
    ctx->pc = 0x24BAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAFCu;
        // 0x24bb00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BB04u;
    // 0x24bb04: 0x0  nop
    ctx->pc = 0x24bb04u;
    // NOP
    ctx->pc = 0x24bb08u;
}
