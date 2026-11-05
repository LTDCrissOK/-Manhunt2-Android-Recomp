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

// Function: sub_0017EBF8
// Address: 0x17ebf8 - 0x17ec98
void sub_0017EBF8_0x17ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EBF8_0x17ebf8");
#endif

    switch (ctx->pc) {
        case 0x17ec20u: goto label_17ec20;
        default: break;
    }

    ctx->pc = 0x17ebf8u;

    // 0x17ebf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ebfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ec00: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x17ec00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17ec04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ec04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17ec0c: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x17ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x17ec10: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17EC10u;
    {
        const bool branch_taken_0x17ec10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC10u;
        // 0x17ec14: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec10) {
            ctx->pc = 0x17EC44u;
            goto label_17ec44;
        }
    }
    ctx->pc = 0x17EC18u;
    // 0x17ec18: 0xc05fb26  jal         func_17EC98
    ctx->pc = 0x17EC18u;
    SET_GPR_U32(ctx, 31, 0x17EC20u);
    ctx->pc = 0x17EC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EC18u;
    // 0x17ec1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC98u, 0x17EC18u, 0x17EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EC20u;
label_17ec20:
    // 0x17ec20: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x17EC20u;
    {
        const bool branch_taken_0x17ec20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ec20) {
            ctx->pc = 0x17EC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EC20u;
            // 0x17ec24: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EC4Cu;
            goto label_17ec4c;
        }
    }
    ctx->pc = 0x17EC28u;
    // 0x17ec28: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x17ec28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x17ec2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17ec2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ec30: 0x0  nop
    ctx->pc = 0x17ec30u;
    // NOP
    // 0x17ec34: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x17ec34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ec38: 0x0  nop
    ctx->pc = 0x17ec38u;
    // NOP
    // 0x17ec3c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x17EC3Cu;
    {
        const bool branch_taken_0x17ec3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ec3c) {
            ctx->pc = 0x17EC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EC3Cu;
            // 0x17ec40: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EC4Cu;
            goto label_17ec4c;
        }
    }
    ctx->pc = 0x17EC44u;
label_17ec44:
    // 0x17ec44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17EC44u;
    {
        const bool branch_taken_0x17ec44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC44u;
        // 0x17ec48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec44) {
            ctx->pc = 0x17EC80u;
            goto label_17ec80;
        }
    }
    ctx->pc = 0x17EC4Cu;
label_17ec4c:
    // 0x17ec4c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17EC4Cu;
    {
        const bool branch_taken_0x17ec4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC4Cu;
        // 0x17ec50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec4c) {
            ctx->pc = 0x17EC80u;
            goto label_17ec80;
        }
    }
    ctx->pc = 0x17EC54u;
    // 0x17ec54: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x17ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x17ec58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EC58u;
    {
        const bool branch_taken_0x17ec58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC58u;
        // 0x17ec5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec58) {
            ctx->pc = 0x17EC80u;
            goto label_17ec80;
        }
    }
    ctx->pc = 0x17EC60u;
    // 0x17ec60: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x17ec60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x17ec64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17ec64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ec68: 0x0  nop
    ctx->pc = 0x17ec68u;
    // NOP
    // 0x17ec6c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x17ec6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ec70: 0x0  nop
    ctx->pc = 0x17ec70u;
    // NOP
    // 0x17ec74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17EC74u;
    {
        const bool branch_taken_0x17ec74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC74u;
        // 0x17ec78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec74) {
            ctx->pc = 0x17EC80u;
            goto label_17ec80;
        }
    }
    ctx->pc = 0x17EC7Cu;
    // 0x17ec7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ec7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ec80:
    // 0x17ec80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ec80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ec84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17ec84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ec88: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x17ec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17ec8c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC8Cu;
        // 0x17ec90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EC94u;
    // 0x17ec94: 0x0  nop
    ctx->pc = 0x17ec94u;
    // NOP
    ctx->pc = 0x17ec98u;
}
