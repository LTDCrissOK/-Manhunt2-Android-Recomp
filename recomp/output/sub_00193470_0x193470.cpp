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

// Function: sub_00193470
// Address: 0x193470 - 0x193588
void sub_00193470_0x193470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193470_0x193470");
#endif

    switch (ctx->pc) {
        case 0x1934a4u: goto label_1934a4;
        default: break;
    }

    ctx->pc = 0x193470u;

    // 0x193470: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x193470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x193474: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x193474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x193478: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x193478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19347c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19347Cu;
    {
        const bool branch_taken_0x19347c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x193480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19347Cu;
        // 0x193480: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19347c) {
            ctx->pc = 0x193490u;
            goto label_193490;
        }
    }
    ctx->pc = 0x193484u;
    // 0x193484: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x193484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x193488: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x193488u;
    {
        const bool branch_taken_0x193488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193488u;
        // 0x19348c: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193488) {
            ctx->pc = 0x193498u;
            goto label_193498;
        }
    }
    ctx->pc = 0x193490u;
label_193490:
    // 0x193490: 0x3e00008  jr          $ra
    ctx->pc = 0x193490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193490u;
        // 0x193494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193498u;
label_193498:
    // 0x193498: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x193498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x19349c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19349Cu;
    {
        const bool branch_taken_0x19349c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19349c) {
            ctx->pc = 0x1934A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19349Cu;
            // 0x1934a0: 0x8c820ff8  lw          $v0, 0xFF8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1934ACu;
            goto label_1934ac;
        }
    }
    ctx->pc = 0x1934A4u;
label_1934a4:
    // 0x1934a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1934A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1934A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1934A4u;
        // 0x1934a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1934A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1934ACu;
label_1934ac:
    // 0x1934ac: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1934acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1934b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1934b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1934b4: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x1934b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1934b8: 0xc4420028  lwc1        $f2, 0x28($v0)
    ctx->pc = 0x1934b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1934bc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1934bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1934c0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1934c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1934c4: 0x0  nop
    ctx->pc = 0x1934c4u;
    // NOP
    // 0x1934c8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1934C8u;
    {
        const bool branch_taken_0x1934c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1934CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1934C8u;
        // 0x1934cc: 0x46000045  abs.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ABS_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1934c8) {
            ctx->pc = 0x1934ECu;
            goto label_1934ec;
        }
    }
    ctx->pc = 0x1934D0u;
    // 0x1934d0: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x1934d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x1934d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1934d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1934d8: 0x0  nop
    ctx->pc = 0x1934d8u;
    // NOP
    // 0x1934dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1934dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1934e0: 0x0  nop
    ctx->pc = 0x1934e0u;
    // NOP
    // 0x1934e4: 0x4501ffef  bc1t        . + 4 + (-0x11 << 2)
    ctx->pc = 0x1934E4u;
    {
        const bool branch_taken_0x1934e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1934e4) {
            ctx->pc = 0x1934A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1934a4;
        }
    }
    ctx->pc = 0x1934ECu;
label_1934ec:
    // 0x1934ec: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1934ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1934f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1934f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1934f4: 0x0  nop
    ctx->pc = 0x1934f4u;
    // NOP
    // 0x1934f8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1934f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1934fc: 0x0  nop
    ctx->pc = 0x1934fcu;
    // NOP
    // 0x193500: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x193500u;
    {
        const bool branch_taken_0x193500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193500) {
            ctx->pc = 0x193524u;
            goto label_193524;
        }
    }
    ctx->pc = 0x193508u;
    // 0x193508: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x193508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x19350c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19350cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193510: 0x0  nop
    ctx->pc = 0x193510u;
    // NOP
    // 0x193514: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x193514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193518: 0x0  nop
    ctx->pc = 0x193518u;
    // NOP
    // 0x19351c: 0x4501ffe1  bc1t        . + 4 + (-0x1F << 2)
    ctx->pc = 0x19351Cu;
    {
        const bool branch_taken_0x19351c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19351c) {
            ctx->pc = 0x1934A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1934a4;
        }
    }
    ctx->pc = 0x193524u;
label_193524:
    // 0x193524: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x193524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x193528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19352c: 0x0  nop
    ctx->pc = 0x19352cu;
    // NOP
    // 0x193530: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x193530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193534: 0x0  nop
    ctx->pc = 0x193534u;
    // NOP
    // 0x193538: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x193538u;
    {
        const bool branch_taken_0x193538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193538) {
            ctx->pc = 0x19355Cu;
            goto label_19355c;
        }
    }
    ctx->pc = 0x193540u;
    // 0x193540: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x193540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x193544: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193548: 0x0  nop
    ctx->pc = 0x193548u;
    // NOP
    // 0x19354c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19354cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193550: 0x0  nop
    ctx->pc = 0x193550u;
    // NOP
    // 0x193554: 0x4501ffd3  bc1t        . + 4 + (-0x2D << 2)
    ctx->pc = 0x193554u;
    {
        const bool branch_taken_0x193554 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193554) {
            ctx->pc = 0x1934A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1934a4;
        }
    }
    ctx->pc = 0x19355Cu;
label_19355c:
    // 0x19355c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x19355cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x193560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193564: 0x0  nop
    ctx->pc = 0x193564u;
    // NOP
    // 0x193568: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x193568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19356c: 0x0  nop
    ctx->pc = 0x19356cu;
    // NOP
    // 0x193570: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x193570u;
    {
        const bool branch_taken_0x193570 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193570u;
        // 0x193574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193570) {
            ctx->pc = 0x19357Cu;
            goto label_19357c;
        }
    }
    ctx->pc = 0x193578u;
    // 0x193578: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x193578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19357c:
    // 0x19357c: 0x3e00008  jr          $ra
    ctx->pc = 0x19357Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19357Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193584u;
    // 0x193584: 0x0  nop
    ctx->pc = 0x193584u;
    // NOP
    ctx->pc = 0x193588u;
}
