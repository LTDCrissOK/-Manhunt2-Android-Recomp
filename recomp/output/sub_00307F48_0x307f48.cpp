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

// Function: sub_00307F48
// Address: 0x307f48 - 0x308058
void sub_00307F48_0x307f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307F48_0x307f48");
#endif

    switch (ctx->pc) {
        case 0x307f64u: goto label_307f64;
        case 0x307fa0u: goto label_307fa0;
        case 0x30803cu: goto label_30803c;
        default: break;
    }

    ctx->pc = 0x307f48u;

    // 0x307f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307f4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x307f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x307f50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307f54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x307f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x307f58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x307f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x307f5c: 0xc091584  jal         func_245610
    ctx->pc = 0x307F5Cu;
    SET_GPR_U32(ctx, 31, 0x307F64u);
    ctx->pc = 0x307F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F5Cu;
    // 0x307f60: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245610u, 0x307F5Cu, 0x307F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307F64u;
label_307f64:
    // 0x307f64: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x307f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x307f68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x307f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x307f6c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x307F6Cu;
    {
        const bool branch_taken_0x307f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F6Cu;
        // 0x307f70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f6c) {
            ctx->pc = 0x308040u;
            goto label_308040;
        }
    }
    ctx->pc = 0x307F74u;
    // 0x307f74: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x307f74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x307f78: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x307f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x307f7c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x307f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x307f80: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x307f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x307f84: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x307F84u;
    {
        const bool branch_taken_0x307f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F84u;
        // 0x307f88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f84) {
            ctx->pc = 0x307FC0u;
            goto label_307fc0;
        }
    }
    ctx->pc = 0x307F8Cu;
    // 0x307f8c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x307f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x307f90: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x307F90u;
    {
        const bool branch_taken_0x307f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x307f90) {
            ctx->pc = 0x307F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307F90u;
            // 0x307f94: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307FC4u;
            goto label_307fc4;
        }
    }
    ctx->pc = 0x307F98u;
    // 0x307f98: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x307F98u;
    SET_GPR_U32(ctx, 31, 0x307FA0u);
    ctx->pc = 0x307F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307F98u;
    // 0x307f9c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x307F98u, 0x307FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307FA0u;
label_307fa0:
    // 0x307fa0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x307FA0u;
    {
        const bool branch_taken_0x307fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307fa0) {
            ctx->pc = 0x307FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307FA0u;
            // 0x307fa4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307FC4u;
            goto label_307fc4;
        }
    }
    ctx->pc = 0x307FA8u;
    // 0x307fa8: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x307fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x307fac: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x307facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x307fb0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307FB0u;
    {
        const bool branch_taken_0x307fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x307FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FB0u;
        // 0x307fb4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307fb0) {
            ctx->pc = 0x307FC0u;
            goto label_307fc0;
        }
    }
    ctx->pc = 0x307FB8u;
    // 0x307fb8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x307FB8u;
    {
        const bool branch_taken_0x307fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x307fb8) {
            ctx->pc = 0x307FC4u;
            goto label_307fc4;
        }
    }
    ctx->pc = 0x307FC0u;
label_307fc0:
    // 0x307fc0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x307fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_307fc4:
    // 0x307fc4: 0x1640001e  bnez        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x307FC4u;
    {
        const bool branch_taken_0x307fc4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x307FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FC4u;
        // 0x307fc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307fc4) {
            ctx->pc = 0x308040u;
            goto label_308040;
        }
    }
    ctx->pc = 0x307FCCu;
    // 0x307fcc: 0xc6200524  lwc1        $f0, 0x524($s1)
    ctx->pc = 0x307fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307fd0: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x307fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x307fd4: 0x0  nop
    ctx->pc = 0x307fd4u;
    // NOP
    // 0x307fd8: 0x460f0032  c.eq.s      $f0, $f15
    ctx->pc = 0x307fd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307fdc: 0x0  nop
    ctx->pc = 0x307fdcu;
    // NOP
    // 0x307fe0: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x307FE0u;
    {
        const bool branch_taken_0x307fe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x307fe0) {
            ctx->pc = 0x307FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307FE0u;
            // 0x307fe4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308044u;
            goto label_308044;
        }
    }
    ctx->pc = 0x307FE8u;
    // 0x307fe8: 0x8e230338  lw          $v1, 0x338($s1)
    ctx->pc = 0x307fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x307fec: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x307fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x307ff0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x307ff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x307ff4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x307ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307ff8: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x307ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x307ffc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x307ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308000: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x308000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308004: 0x0  nop
    ctx->pc = 0x308004u;
    // NOP
    // 0x308008: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x308008u;
    {
        const bool branch_taken_0x308008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308008u;
        // 0x30800c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308008) {
            ctx->pc = 0x308040u;
            goto label_308040;
        }
    }
    ctx->pc = 0x308010u;
    // 0x308010: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x308010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x308014: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x308014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x308018: 0xc44eb788  lwc1        $f14, -0x4878($v0)
    ctx->pc = 0x308018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x30801c: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x30801cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x308020: 0xc4adb7a0  lwc1        $f13, -0x4860($a1)
    ctx->pc = 0x308020u;
    { uint32_t bits = FAST_READ32(0x3FB7A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x308024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x308024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308028: 0xc46cb770  lwc1        $f12, -0x4890($v1)
    ctx->pc = 0x308028u;
    { uint32_t bits = FAST_READ32(0x3FB770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30802c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x30802cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x308030: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x308030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x308034: 0xc0bd346  jal         func_2F4D18
    ctx->pc = 0x308034u;
    SET_GPR_U32(ctx, 31, 0x30803Cu);
    ctx->pc = 0x308038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308034u;
    // 0x308038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D18u, 0x308034u, 0x30803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30803Cu;
label_30803c:
    // 0x30803c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30803cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308040:
    // 0x308040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x308040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_308044:
    // 0x308044: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x308044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308048: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x308048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30804c: 0x3e00008  jr          $ra
    ctx->pc = 0x30804Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30804Cu;
        // 0x308050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30804Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308054u;
    // 0x308054: 0x0  nop
    ctx->pc = 0x308054u;
    // NOP
    ctx->pc = 0x308058u;
}
