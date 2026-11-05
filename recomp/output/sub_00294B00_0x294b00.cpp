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

// Function: sub_00294B00
// Address: 0x294b00 - 0x294b80
void sub_00294B00_0x294b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294B00_0x294b00");
#endif

    ctx->pc = 0x294b00u;

    // 0x294b00: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x294b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x294b04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294B04u;
    {
        const bool branch_taken_0x294b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B04u;
        // 0x294b08: 0x90820001  lbu         $v0, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b04) {
            ctx->pc = 0x294B14u;
            goto label_294b14;
        }
    }
    ctx->pc = 0x294B0Cu;
    // 0x294b0c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x294B0Cu;
    {
        const bool branch_taken_0x294b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294b0c) {
            ctx->pc = 0x294B6Cu;
            goto label_294b6c;
        }
    }
    ctx->pc = 0x294B14u;
label_294b14:
    // 0x294b14: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x294B14u;
    {
        const bool branch_taken_0x294b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B14u;
        // 0x294b18: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b14) {
            ctx->pc = 0x294B74u;
            goto label_294b74;
        }
    }
    ctx->pc = 0x294B1Cu;
    // 0x294b1c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x294b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x294b20: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x294b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294b24: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x294b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x294b28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x294b28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x294b2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x294b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x294b30: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x294b30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x294b34: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x294b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294b38: 0x0  nop
    ctx->pc = 0x294b38u;
    // NOP
    // 0x294b3c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x294B3Cu;
    {
        const bool branch_taken_0x294b3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x294B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B3Cu;
        // 0x294b40: 0xe4820004  swc1        $f2, 0x4($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b3c) {
            ctx->pc = 0x294B4Cu;
            goto label_294b4c;
        }
    }
    ctx->pc = 0x294B44u;
    // 0x294b44: 0x3e00008  jr          $ra
    ctx->pc = 0x294B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B44u;
        // 0x294b48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B4Cu;
label_294b4c:
    // 0x294b4c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x294b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x294b50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x294b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x294b54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x294b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294b58: 0x0  nop
    ctx->pc = 0x294b58u;
    // NOP
    // 0x294b5c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x294b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294b60: 0x0  nop
    ctx->pc = 0x294b60u;
    // NOP
    // 0x294b64: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x294B64u;
    {
        const bool branch_taken_0x294b64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x294b64) {
            ctx->pc = 0x294B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294B64u;
            // 0x294b68: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294B6Cu;
            goto label_294b6c;
        }
    }
    ctx->pc = 0x294B6Cu;
label_294b6c:
    // 0x294b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x294B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B6Cu;
        // 0x294b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B74u;
label_294b74:
    // 0x294b74: 0x3e00008  jr          $ra
    ctx->pc = 0x294B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294B74u;
        // 0x294b78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294B7Cu;
    // 0x294b7c: 0x0  nop
    ctx->pc = 0x294b7cu;
    // NOP
    ctx->pc = 0x294b80u;
}
