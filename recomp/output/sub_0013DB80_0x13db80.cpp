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

// Function: sub_0013DB80
// Address: 0x13db80 - 0x13dc38
void sub_0013DB80_0x13db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DB80_0x13db80");
#endif

    switch (ctx->pc) {
        case 0x13db9cu: goto label_13db9c;
        case 0x13dbacu: goto label_13dbac;
        case 0x13dbf8u: goto label_13dbf8;
        case 0x13dc14u: goto label_13dc14;
        case 0x13dc24u: goto label_13dc24;
        default: break;
    }

    ctx->pc = 0x13db80u;

    // 0x13db80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13db84: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x13db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x13db88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13db88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db8c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x13db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x13db90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13db94: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13DB94u;
    SET_GPR_U32(ctx, 31, 0x13DB9Cu);
    ctx->pc = 0x13DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB94u;
    // 0x13db98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13DB94u, 0x13DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB9Cu;
label_13db9c:
    // 0x13db9c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13dba0: 0x260502b0  addiu       $a1, $s0, 0x2B0
    ctx->pc = 0x13dba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x13dba4: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x13DBA4u;
    SET_GPR_U32(ctx, 31, 0x13DBACu);
    ctx->pc = 0x13DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DBA4u;
    // 0x13dba8: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x13DBA4u, 0x13DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DBACu;
label_13dbac:
    // 0x13dbac: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x13dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13dbb0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x13dbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13dbb4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x13dbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13dbb8: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x13dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13dbbc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x13dbbcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x13dbc0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x13dbc0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x13dbc4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x13dbc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x13dbc8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x13dbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x13dbcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13dbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dbd0: 0x0  nop
    ctx->pc = 0x13dbd0u;
    // NOP
    // 0x13dbd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13dbd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13dbd8: 0x0  nop
    ctx->pc = 0x13dbd8u;
    // NOP
    // 0x13dbdc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x13DBDCu;
    {
        const bool branch_taken_0x13dbdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBDCu;
        // 0x13dbe0: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbdc) {
            ctx->pc = 0x13DC08u;
            goto label_13dc08;
        }
    }
    ctx->pc = 0x13DBE4u;
    // 0x13dbe4: 0x8e250778  lw          $a1, 0x778($s1)
    ctx->pc = 0x13dbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1912)));
    // 0x13dbe8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13DBE8u;
    {
        const bool branch_taken_0x13dbe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBE8u;
        // 0x13dbec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbe8) {
            ctx->pc = 0x13DC0Cu;
            goto label_13dc0c;
        }
    }
    ctx->pc = 0x13DBF0u;
    // 0x13dbf0: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x13DBF0u;
    SET_GPR_U32(ctx, 31, 0x13DBF8u);
    ctx->pc = 0x13DBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DBF0u;
    // 0x13dbf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x13DBF0u, 0x13DBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DBF8u;
label_13dbf8:
    // 0x13dbf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DBF8u;
    {
        const bool branch_taken_0x13dbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBF8u;
        // 0x13dbfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbf8) {
            ctx->pc = 0x13DC0Cu;
            goto label_13dc0c;
        }
    }
    ctx->pc = 0x13DC00u;
    // 0x13dc00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dc04: 0xae0202d0  sw          $v0, 0x2D0($s0)
    ctx->pc = 0x13dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 2));
label_13dc08:
    // 0x13dc08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13dc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13dc0c:
    // 0x13dc0c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x13DC0Cu;
    SET_GPR_U32(ctx, 31, 0x13DC14u);
    ctx->pc = 0x13DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC0Cu;
    // 0x13dc10: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x13DC0Cu, 0x13DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC14u;
label_13dc14:
    // 0x13dc14: 0xae220778  sw          $v0, 0x778($s1)
    ctx->pc = 0x13dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1912), GPR_U32(ctx, 2));
    // 0x13dc18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13dc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc1c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13DC1Cu;
    SET_GPR_U32(ctx, 31, 0x13DC24u);
    ctx->pc = 0x13DC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DC1Cu;
    // 0x13dc20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13DC1Cu, 0x13DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DC24u;
label_13dc24:
    // 0x13dc24: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x13dc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13dc28: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x13dc28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13dc2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13dc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13dc30: 0x3e00008  jr          $ra
    ctx->pc = 0x13DC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC30u;
        // 0x13dc34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DC38u;
}
