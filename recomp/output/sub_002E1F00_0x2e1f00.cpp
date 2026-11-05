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

// Function: sub_002E1F00
// Address: 0x2e1f00 - 0x2e1fa0
void sub_002E1F00_0x2e1f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1F00_0x2e1f00");
#endif

    switch (ctx->pc) {
        case 0x2e1f00u: goto label_2e1f00;
        case 0x2e1f04u: goto label_2e1f04;
        case 0x2e1f08u: goto label_2e1f08;
        case 0x2e1f0cu: goto label_2e1f0c;
        case 0x2e1f10u: goto label_2e1f10;
        case 0x2e1f14u: goto label_2e1f14;
        case 0x2e1f18u: goto label_2e1f18;
        case 0x2e1f1cu: goto label_2e1f1c;
        case 0x2e1f20u: goto label_2e1f20;
        case 0x2e1f24u: goto label_2e1f24;
        case 0x2e1f28u: goto label_2e1f28;
        case 0x2e1f2cu: goto label_2e1f2c;
        case 0x2e1f30u: goto label_2e1f30;
        case 0x2e1f34u: goto label_2e1f34;
        case 0x2e1f38u: goto label_2e1f38;
        case 0x2e1f3cu: goto label_2e1f3c;
        case 0x2e1f40u: goto label_2e1f40;
        case 0x2e1f44u: goto label_2e1f44;
        case 0x2e1f48u: goto label_2e1f48;
        case 0x2e1f4cu: goto label_2e1f4c;
        case 0x2e1f50u: goto label_2e1f50;
        case 0x2e1f54u: goto label_2e1f54;
        case 0x2e1f58u: goto label_2e1f58;
        case 0x2e1f5cu: goto label_2e1f5c;
        case 0x2e1f60u: goto label_2e1f60;
        case 0x2e1f64u: goto label_2e1f64;
        case 0x2e1f68u: goto label_2e1f68;
        case 0x2e1f6cu: goto label_2e1f6c;
        case 0x2e1f70u: goto label_2e1f70;
        case 0x2e1f74u: goto label_2e1f74;
        case 0x2e1f78u: goto label_2e1f78;
        case 0x2e1f7cu: goto label_2e1f7c;
        case 0x2e1f80u: goto label_2e1f80;
        case 0x2e1f84u: goto label_2e1f84;
        case 0x2e1f88u: goto label_2e1f88;
        case 0x2e1f8cu: goto label_2e1f8c;
        case 0x2e1f90u: goto label_2e1f90;
        case 0x2e1f94u: goto label_2e1f94;
        case 0x2e1f98u: goto label_2e1f98;
        case 0x2e1f9cu: goto label_2e1f9c;
        default: break;
    }

    ctx->pc = 0x2e1f00u;

label_2e1f00:
    // 0x2e1f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e1f04:
    // 0x2e1f04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e1f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1f08:
    // 0x2e1f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e1f0c:
    // 0x2e1f0c: 0x24a200a0  addiu       $v0, $a1, 0xA0
    ctx->pc = 0x2e1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
label_2e1f10:
    // 0x2e1f10: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2e1f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1f14:
    // 0x2e1f14: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2e1f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e1f18:
    // 0x2e1f18: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2e1f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e1f1c:
    // 0x2e1f1c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e1f1cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2e1f20:
    // 0x2e1f20: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e1f20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2e1f24:
    // 0x2e1f24: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2e1f24u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2e1f28:
    // 0x2e1f28: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x2e1f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1f2c:
    // 0x2e1f2c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2e1f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2e1f30:
    // 0x2e1f30: 0x90a20048  lbu         $v0, 0x48($a1)
    ctx->pc = 0x2e1f30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
label_2e1f34:
    // 0x2e1f34: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2e1f34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e1f38:
    // 0x2e1f38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e1f3c:
    // 0x2e1f3c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e1f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e1f40:
    // 0x2e1f40: 0xa0a20048  sb          $v0, 0x48($a1)
    ctx->pc = 0x2e1f40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 2));
label_2e1f44:
    // 0x2e1f44: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
label_2e1f48:
    if (ctx->pc == 0x2E1F48u) {
        ctx->pc = 0x2E1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F44u;
        // 0x2e1f48: 0xe4a20044  swc1        $f2, 0x44($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1F4Cu;
        goto label_2e1f4c;
    }
    ctx->pc = 0x2E1F44u;
    {
        const bool branch_taken_0x2e1f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F44u;
        // 0x2e1f48: 0xe4a20044  swc1        $f2, 0x44($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f44) {
            ctx->pc = 0x2E1F90u;
            goto label_2e1f90;
        }
    }
    ctx->pc = 0x2E1F4Cu;
label_2e1f4c:
    // 0x2e1f4c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e1f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2e1f50:
    // 0x2e1f50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e1f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e1f54:
    // 0x2e1f54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e1f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e1f58:
    // 0x2e1f58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e1f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e1f5c:
    // 0x2e1f5c: 0xc441b6a4  lwc1        $f1, -0x495C($v0)
    ctx->pc = 0x2e1f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1f60:
    // 0x2e1f60: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e1f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e1f64:
    // 0x2e1f64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e1f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1f68:
    // 0x2e1f68: 0x0  nop
    ctx->pc = 0x2e1f68u;
    // NOP
label_2e1f6c:
    // 0x2e1f6c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_2e1f70:
    if (ctx->pc == 0x2E1F70u) {
        ctx->pc = 0x2E1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F6Cu;
        // 0x2e1f70: 0xa0a00048  sb          $zero, 0x48($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1F74u;
        goto label_2e1f74;
    }
    ctx->pc = 0x2E1F6Cu;
    {
        const bool branch_taken_0x2e1f6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1f6c) {
            ctx->pc = 0x2E1F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1F6Cu;
            // 0x2e1f70: 0xa0a00048  sb          $zero, 0x48($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1F8Cu;
            goto label_2e1f8c;
        }
    }
    ctx->pc = 0x2E1F74u;
label_2e1f74:
    // 0x2e1f74: 0x8ca30070  lw          $v1, 0x70($a1)
    ctx->pc = 0x2e1f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 112)));
label_2e1f78:
    // 0x2e1f78: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2e1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2e1f7c:
    // 0x2e1f7c: 0x40f809  jalr        $v0
label_2e1f80:
    if (ctx->pc == 0x2E1F80u) {
        ctx->pc = 0x2E1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F7Cu;
        // 0x2e1f80: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1F84u;
        goto label_2e1f84;
    }
    ctx->pc = 0x2E1F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1F84u);
        ctx->pc = 0x2E1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F7Cu;
        // 0x2e1f80: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1F7Cu, 0x2E1F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1F84u;
label_2e1f84:
    // 0x2e1f84: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e1f88:
    if (ctx->pc == 0x2E1F88u) {
        ctx->pc = 0x2E1F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F84u;
        // 0x2e1f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1F8Cu;
        goto label_2e1f8c;
    }
    ctx->pc = 0x2E1F84u;
    {
        const bool branch_taken_0x2e1f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F84u;
        // 0x2e1f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f84) {
            ctx->pc = 0x2E1F94u;
            goto label_2e1f94;
        }
    }
    ctx->pc = 0x2E1F8Cu;
label_2e1f8c:
    // 0x2e1f8c: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x2e1f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
label_2e1f90:
    // 0x2e1f90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1f94:
    // 0x2e1f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1f98:
    // 0x2e1f98: 0x3e00008  jr          $ra
label_2e1f9c:
    if (ctx->pc == 0x2E1F9Cu) {
        ctx->pc = 0x2E1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F98u;
        // 0x2e1f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1FA0u;
        goto label_fallthrough_0x2e1f98;
    }
    ctx->pc = 0x2E1F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F98u;
        // 0x2e1f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e1f98:
    ctx->pc = 0x2E1FA0u;
}
