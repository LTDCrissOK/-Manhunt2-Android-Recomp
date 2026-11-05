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

// Function: sub_00307BD0
// Address: 0x307bd0 - 0x307ce0
void sub_00307BD0_0x307bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307BD0_0x307bd0");
#endif

    switch (ctx->pc) {
        case 0x307becu: goto label_307bec;
        case 0x307c28u: goto label_307c28;
        case 0x307cc4u: goto label_307cc4;
        default: break;
    }

    ctx->pc = 0x307bd0u;

    // 0x307bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307bd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x307bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x307bd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307bdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x307bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x307be0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x307be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x307be4: 0xc090f4e  jal         func_243D38
    ctx->pc = 0x307BE4u;
    SET_GPR_U32(ctx, 31, 0x307BECu);
    ctx->pc = 0x307BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307BE4u;
    // 0x307be8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243D38u, 0x307BE4u, 0x307BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307BECu;
label_307bec:
    // 0x307bec: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x307becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x307bf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x307bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x307bf4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x307BF4u;
    {
        const bool branch_taken_0x307bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BF4u;
        // 0x307bf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307bf4) {
            ctx->pc = 0x307CC8u;
            goto label_307cc8;
        }
    }
    ctx->pc = 0x307BFCu;
    // 0x307bfc: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x307bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x307c00: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x307c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x307c04: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x307c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x307c08: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x307c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x307c0c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x307C0Cu;
    {
        const bool branch_taken_0x307c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C0Cu;
        // 0x307c10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c0c) {
            ctx->pc = 0x307C48u;
            goto label_307c48;
        }
    }
    ctx->pc = 0x307C14u;
    // 0x307c14: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x307c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x307c18: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x307C18u;
    {
        const bool branch_taken_0x307c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x307c18) {
            ctx->pc = 0x307C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307C18u;
            // 0x307c1c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307C4Cu;
            goto label_307c4c;
        }
    }
    ctx->pc = 0x307C20u;
    // 0x307c20: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x307C20u;
    SET_GPR_U32(ctx, 31, 0x307C28u);
    ctx->pc = 0x307C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307C20u;
    // 0x307c24: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x307C20u, 0x307C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C28u;
label_307c28:
    // 0x307c28: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x307C28u;
    {
        const bool branch_taken_0x307c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307c28) {
            ctx->pc = 0x307C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307C28u;
            // 0x307c2c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307C4Cu;
            goto label_307c4c;
        }
    }
    ctx->pc = 0x307C30u;
    // 0x307c30: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x307c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x307c34: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x307c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x307c38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307C38u;
    {
        const bool branch_taken_0x307c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x307C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C38u;
        // 0x307c3c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c38) {
            ctx->pc = 0x307C48u;
            goto label_307c48;
        }
    }
    ctx->pc = 0x307C40u;
    // 0x307c40: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x307C40u;
    {
        const bool branch_taken_0x307c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x307c40) {
            ctx->pc = 0x307C4Cu;
            goto label_307c4c;
        }
    }
    ctx->pc = 0x307C48u;
label_307c48:
    // 0x307c48: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x307c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307c4c:
    // 0x307c4c: 0x1640001e  bnez        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x307C4Cu;
    {
        const bool branch_taken_0x307c4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x307C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C4Cu;
        // 0x307c50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c4c) {
            ctx->pc = 0x307CC8u;
            goto label_307cc8;
        }
    }
    ctx->pc = 0x307C54u;
    // 0x307c54: 0xc6200524  lwc1        $f0, 0x524($s1)
    ctx->pc = 0x307c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307c58: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x307c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x307c5c: 0x0  nop
    ctx->pc = 0x307c5cu;
    // NOP
    // 0x307c60: 0x460f0032  c.eq.s      $f0, $f15
    ctx->pc = 0x307c60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307c64: 0x0  nop
    ctx->pc = 0x307c64u;
    // NOP
    // 0x307c68: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x307C68u;
    {
        const bool branch_taken_0x307c68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x307c68) {
            ctx->pc = 0x307C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307C68u;
            // 0x307c6c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307CCCu;
            goto label_307ccc;
        }
    }
    ctx->pc = 0x307C70u;
    // 0x307c70: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x307c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x307c74: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x307c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x307c78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x307c78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x307c7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x307c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307c80: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x307c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x307c84: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x307c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307c88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x307c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307c8c: 0x0  nop
    ctx->pc = 0x307c8cu;
    // NOP
    // 0x307c90: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x307C90u;
    {
        const bool branch_taken_0x307c90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x307C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307C90u;
        // 0x307c94: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307c90) {
            ctx->pc = 0x307CC8u;
            goto label_307cc8;
        }
    }
    ctx->pc = 0x307C98u;
    // 0x307c98: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x307c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x307c9c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x307c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x307ca0: 0xc44eb788  lwc1        $f14, -0x4878($v0)
    ctx->pc = 0x307ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x307ca4: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x307ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x307ca8: 0xc4adb7a0  lwc1        $f13, -0x4860($a1)
    ctx->pc = 0x307ca8u;
    { uint32_t bits = FAST_READ32(0x3FB7A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x307cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x307cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307cb0: 0xc46cb770  lwc1        $f12, -0x4890($v1)
    ctx->pc = 0x307cb0u;
    { uint32_t bits = FAST_READ32(0x3FB770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x307cb4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x307cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x307cb8: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x307cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x307cbc: 0xc0bd346  jal         func_2F4D18
    ctx->pc = 0x307CBCu;
    SET_GPR_U32(ctx, 31, 0x307CC4u);
    ctx->pc = 0x307CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307CBCu;
    // 0x307cc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D18u, 0x307CBCu, 0x307CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307CC4u;
label_307cc4:
    // 0x307cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x307cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307cc8:
    // 0x307cc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x307cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_307ccc:
    // 0x307ccc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x307cccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307cd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x307cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x307CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307CD4u;
        // 0x307cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307CDCu;
    // 0x307cdc: 0x0  nop
    ctx->pc = 0x307cdcu;
    // NOP
    ctx->pc = 0x307ce0u;
}
