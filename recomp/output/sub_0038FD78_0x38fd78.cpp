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

// Function: sub_0038FD78
// Address: 0x38fd78 - 0x38fe60
void sub_0038FD78_0x38fd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FD78_0x38fd78");
#endif

    switch (ctx->pc) {
        case 0x38fdf8u: goto label_38fdf8;
        default: break;
    }

    ctx->pc = 0x38fd78u;

    // 0x38fd78: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x38fd78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38fd7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38fd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fd80: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x38fd80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x38fd84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x38fd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x38fd88: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x38fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x38fd8c: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x38fd8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x38fd90: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x38FD90u;
    {
        const bool branch_taken_0x38fd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fd90) {
            ctx->pc = 0x38FD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FD90u;
            // 0x38fd94: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FE40u;
            goto label_38fe40;
        }
    }
    ctx->pc = 0x38FD98u;
    // 0x38fd98: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x38FD98u;
    {
        const bool branch_taken_0x38fd98 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x38fd98) {
            ctx->pc = 0x38FD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FD98u;
            // 0x38fd9c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FDE4u;
            goto label_38fde4;
        }
    }
    ctx->pc = 0x38FDA0u;
    // 0x38fda0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x38fda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x38fda4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x38fda4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x38fda8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38fda8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38fdac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x38fdacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38fdb0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x38fdb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x38fdb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38fdb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38fdb8: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x38FDB8u;
    {
        const bool branch_taken_0x38fdb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38fdb8) {
            ctx->pc = 0x38FE50u;
            goto label_38fe50;
        }
    }
    ctx->pc = 0x38FDC0u;
    // 0x38fdc0: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FDC0u;
    {
        const bool branch_taken_0x38fdc0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x38FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDC0u;
        // 0x38fdc4: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fdc0) {
            ctx->pc = 0x38FDD0u;
            goto label_38fdd0;
        }
    }
    ctx->pc = 0x38FDC8u;
    // 0x38fdc8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x38FDC8u;
    {
        const bool branch_taken_0x38fdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDC8u;
        // 0x38fdcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fdc8) {
            ctx->pc = 0x38FE50u;
            goto label_38fe50;
        }
    }
    ctx->pc = 0x38FDD0u;
label_38fdd0:
    // 0x38fdd0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x38fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x38fdd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38fdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38fdd8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x38fdd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x38fddc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x38FDDCu;
    {
        const bool branch_taken_0x38fddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDDCu;
        // 0x38fde0: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fddc) {
            ctx->pc = 0x38FE50u;
            goto label_38fe50;
        }
    }
    ctx->pc = 0x38FDE4u;
label_38fde4:
    // 0x38fde4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38fde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38fde8: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x38fde8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x38fdec: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x38fdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x38fdf0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FDF0u;
    {
        const bool branch_taken_0x38fdf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fdf0) {
            ctx->pc = 0x38FE00u;
            goto label_38fe00;
        }
    }
    ctx->pc = 0x38FDF8u;
label_38fdf8:
    // 0x38fdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x38FDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDF8u;
        // 0x38fdfc: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FE00u;
label_38fe00:
    // 0x38fe00: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x38fe00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x38fe04: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x38fe04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x38fe08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38fe08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38fe0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x38fe0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38fe10: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x38fe10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x38fe14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38fe14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38fe18: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x38FE18u;
    {
        const bool branch_taken_0x38fe18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38fe18) {
            ctx->pc = 0x38FE50u;
            goto label_38fe50;
        }
    }
    ctx->pc = 0x38FE20u;
    // 0x38fe20: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38FE20u;
    {
        const bool branch_taken_0x38fe20 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x38FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE20u;
        // 0x38fe24: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe20) {
            ctx->pc = 0x38FE38u;
            goto label_38fe38;
        }
    }
    ctx->pc = 0x38FE28u;
    // 0x38fe28: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x38fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x38fe2c: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x38fe2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x38fe30: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38fe34: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x38fe34u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
label_38fe38:
    // 0x38fe38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38FE38u;
    {
        const bool branch_taken_0x38fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE38u;
        // 0x38fe3c: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe38) {
            ctx->pc = 0x38FE50u;
            goto label_38fe50;
        }
    }
    ctx->pc = 0x38FE40u;
label_38fe40:
    // 0x38fe40: 0x14a2ffed  bne         $a1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x38FE40u;
    {
        const bool branch_taken_0x38fe40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x38fe40) {
            ctx->pc = 0x38FDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fdf8;
        }
    }
    ctx->pc = 0x38FE48u;
    // 0x38fe48: 0x3e00008  jr          $ra
    ctx->pc = 0x38FE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE48u;
        // 0x38fe4c: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FE50u;
label_38fe50:
    // 0x38fe50: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x38fe50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38fe54: 0x3e00008  jr          $ra
    ctx->pc = 0x38FE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE54u;
        // 0x38fe58: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FE5Cu;
    // 0x38fe5c: 0x0  nop
    ctx->pc = 0x38fe5cu;
    // NOP
    ctx->pc = 0x38fe60u;
}
