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

// Function: sub_003D9F40
// Address: 0x3d9f40 - 0x3da020
void sub_003D9F40_0x3d9f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9F40_0x3d9f40");
#endif

    switch (ctx->pc) {
        case 0x3da014u: goto label_3da014;
        default: break;
    }

    ctx->pc = 0x3d9f40u;

label_3d9f40:
    // 0x3d9f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9f44: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3d9f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3d9f48: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3d9f48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3d9f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d9f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d9f50: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x3d9f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d9f54: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D9F54u;
    {
        const bool branch_taken_0x3d9f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F54u;
        // 0x3d9f58: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f54) {
            ctx->pc = 0x3D9FB4u;
            goto label_3d9fb4;
        }
    }
    ctx->pc = 0x3D9F5Cu;
    // 0x3d9f5c: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x3d9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x3d9f60: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3d9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3d9f64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3d9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d9f68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d9f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d9f6c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x3d9f6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d9f70: 0x0  nop
    ctx->pc = 0x3d9f70u;
    // NOP
    // 0x3d9f74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9F74u;
    {
        const bool branch_taken_0x3d9f74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D9F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F74u;
        // 0x3d9f78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f74) {
            ctx->pc = 0x3D9F80u;
            goto label_3d9f80;
        }
    }
    ctx->pc = 0x3D9F7Cu;
    // 0x3d9f7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3d9f7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9f80:
    // 0x3d9f80: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D9F80u;
    {
        const bool branch_taken_0x3d9f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F80u;
        // 0x3d9f84: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f80) {
            ctx->pc = 0x3D9FA4u;
            goto label_3d9fa4;
        }
    }
    ctx->pc = 0x3D9F88u;
    // 0x3d9f88: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x3d9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x3d9f8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3d9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d9f90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d9f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d9f94: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x3d9f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d9f98: 0x0  nop
    ctx->pc = 0x3d9f98u;
    // NOP
    // 0x3d9f9c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9F9Cu;
    {
        const bool branch_taken_0x3d9f9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F9Cu;
        // 0x3d9fa0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f9c) {
            ctx->pc = 0x3D9FACu;
            goto label_3d9fac;
        }
    }
    ctx->pc = 0x3D9FA4u;
label_3d9fa4:
    // 0x3d9fa4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3D9FA4u;
    {
        const bool branch_taken_0x3d9fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FA4u;
        // 0x3d9fa8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9fa4) {
            ctx->pc = 0x3DA014u;
            goto label_3da014;
        }
    }
    ctx->pc = 0x3D9FACu;
label_3d9fac:
    // 0x3d9fac: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3D9FACu;
    {
        const bool branch_taken_0x3d9fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FACu;
        // 0x3d9fb0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9fac) {
            ctx->pc = 0x3DA014u;
            goto label_3da014;
        }
    }
    ctx->pc = 0x3D9FB4u;
label_3d9fb4:
    // 0x3d9fb4: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x3d9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3d9fb8: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x3d9fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x3d9fbc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3d9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3d9fc0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3d9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3d9fc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d9fc8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3d9fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d9fcc: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x3d9fccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d9fd0: 0x0  nop
    ctx->pc = 0x3d9fd0u;
    // NOP
    // 0x3d9fd4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9FD4u;
    {
        const bool branch_taken_0x3d9fd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D9FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FD4u;
        // 0x3d9fd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9fd4) {
            ctx->pc = 0x3D9FE4u;
            goto label_3d9fe4;
        }
    }
    ctx->pc = 0x3D9FDCu;
    // 0x3d9fdc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3D9FDCu;
    {
        const bool branch_taken_0x3d9fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FDCu;
        // 0x3d9fe0: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9fdc) {
            ctx->pc = 0x3DA014u;
            goto label_3da014;
        }
    }
    ctx->pc = 0x3D9FE4u;
label_3d9fe4:
    // 0x3d9fe4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3d9fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d9fe8: 0x0  nop
    ctx->pc = 0x3d9fe8u;
    // NOP
    // 0x3d9fec: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3D9FECu;
    {
        const bool branch_taken_0x3d9fec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d9fec) {
            ctx->pc = 0x3D9FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9FECu;
            // 0x3d9ff0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA004u;
            goto label_3da004;
        }
    }
    ctx->pc = 0x3D9FF4u;
    // 0x3d9ff4: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x3d9ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d9ff8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3d9ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9ffc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9FFCu;
    {
        const bool branch_taken_0x3d9ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FFCu;
        // 0x3da000: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9ffc) {
            ctx->pc = 0x3DA00Cu;
            goto label_3da00c;
        }
    }
    ctx->pc = 0x3DA004u;
label_3da004:
    // 0x3da004: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3da004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da008: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3da008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_3da00c:
    // 0x3da00c: 0xc0f67d0  jal         func_3D9F40
    ctx->pc = 0x3DA00Cu;
    SET_GPR_U32(ctx, 31, 0x3DA014u);
    ctx->pc = 0x3D9F40u;
    goto label_3d9f40;
    ctx->pc = 0x3DA014u;
label_3da014:
    // 0x3da014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3da014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da018: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA018u;
        // 0x3da01c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA020u;
}
