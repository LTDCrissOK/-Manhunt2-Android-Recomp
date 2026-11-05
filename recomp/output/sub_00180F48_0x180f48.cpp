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

// Function: sub_00180F48
// Address: 0x180f48 - 0x180ff8
void sub_00180F48_0x180f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180F48_0x180f48");
#endif

    switch (ctx->pc) {
        case 0x180f70u: goto label_180f70;
        case 0x180f94u: goto label_180f94;
        case 0x180fb8u: goto label_180fb8;
        default: break;
    }

    ctx->pc = 0x180f48u;

    // 0x180f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180f4c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x180f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x180f50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180f5c: 0x2611010c  addiu       $s1, $s0, 0x10C
    ctx->pc = 0x180f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
    // 0x180f60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180f64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f68: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x180f68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180f6c: 0x0  nop
    ctx->pc = 0x180f6cu;
    // NOP
label_180f70:
    // 0x180f70: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x180f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180f74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x180f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x180f78: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x180f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x180f7c: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x180f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x180f80: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x180F80u;
    {
        const bool branch_taken_0x180f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180F80u;
        // 0x180f84: 0x46006b40  add.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180f80) {
            ctx->pc = 0x180F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180f70;
        }
    }
    ctx->pc = 0x180F88u;
    // 0x180f88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x180f88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x180f8c: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x180F8Cu;
    SET_GPR_U32(ctx, 31, 0x180F94u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x180F8Cu, 0x180F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180F94u;
label_180f94:
    // 0x180f94: 0xc60d010c  lwc1        $f13, 0x10C($s0)
    ctx->pc = 0x180f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180f98: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x180f98u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x180f9c: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x180f9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180fa0: 0x0  nop
    ctx->pc = 0x180fa0u;
    // NOP
    // 0x180fa4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x180FA4u;
    {
        const bool branch_taken_0x180fa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FA4u;
        // 0x180fa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180fa4) {
            ctx->pc = 0x180FDCu;
            goto label_180fdc;
        }
    }
    ctx->pc = 0x180FACu;
    // 0x180fac: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x180facu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x180fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x180fb4: 0x0  nop
    ctx->pc = 0x180fb4u;
    // NOP
label_180fb8:
    // 0x180fb8: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x180fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x180fbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180FBCu;
    {
        const bool branch_taken_0x180fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FBCu;
        // 0x180fc0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180fbc) {
            ctx->pc = 0x180FDCu;
            goto label_180fdc;
        }
    }
    ctx->pc = 0x180FC4u;
    // 0x180fc4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x180fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180fc8: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x180fc8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x180fcc: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x180fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180fd0: 0x0  nop
    ctx->pc = 0x180fd0u;
    // NOP
    // 0x180fd4: 0x4502fff8  bc1fl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x180FD4u;
    {
        const bool branch_taken_0x180fd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x180fd4) {
            ctx->pc = 0x180FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180FD4u;
            // 0x180fd8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180fb8;
        }
    }
    ctx->pc = 0x180FDCu;
label_180fdc:
    // 0x180fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180fe0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x180fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180fec: 0x3e00008  jr          $ra
    ctx->pc = 0x180FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180FECu;
        // 0x180ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180FF4u;
    // 0x180ff4: 0x0  nop
    ctx->pc = 0x180ff4u;
    // NOP
    ctx->pc = 0x180ff8u;
}
