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

// Function: sub_001EA200
// Address: 0x1ea200 - 0x1ea2b0
void sub_001EA200_0x1ea200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA200_0x1ea200");
#endif

    ctx->pc = 0x1ea200u;

    // 0x1ea200: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1ea200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x1ea204: 0x34213dde  ori         $at, $at, 0x3DDE
    ctx->pc = 0x1ea204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15838);
    // 0x1ea208: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ea208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ea20c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1ea20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea210: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ea210u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea214: 0x0  nop
    ctx->pc = 0x1ea214u;
    // NOP
    // 0x1ea218: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA218u;
    {
        const bool branch_taken_0x1ea218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA218u;
        // 0x1ea21c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea218) {
            ctx->pc = 0x1EA228u;
            goto label_1ea228;
        }
    }
    ctx->pc = 0x1EA220u;
    // 0x1ea220: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA220u;
        // 0x1ea224: 0xa0820010  sb          $v0, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA228u;
label_1ea228:
    // 0x1ea228: 0x3c01bf11  lui         $at, 0xBF11
    ctx->pc = 0x1ea228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48913 << 16));
    // 0x1ea22c: 0x34213dde  ori         $at, $at, 0x3DDE
    ctx->pc = 0x1ea22cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15838);
    // 0x1ea230: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ea230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ea234: 0x0  nop
    ctx->pc = 0x1ea234u;
    // NOP
    // 0x1ea238: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1ea238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea23c: 0x0  nop
    ctx->pc = 0x1ea23cu;
    // NOP
    // 0x1ea240: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA240u;
    {
        const bool branch_taken_0x1ea240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea240) {
            ctx->pc = 0x1EA244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA240u;
            // 0x1ea244: 0xc4800020  lwc1        $f0, 0x20($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA254u;
            goto label_1ea254;
        }
    }
    ctx->pc = 0x1EA248u;
    // 0x1ea248: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ea248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea24c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA24Cu;
        // 0x1ea250: 0xa0820010  sb          $v0, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA254u;
label_1ea254:
    // 0x1ea254: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ea254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea258: 0x0  nop
    ctx->pc = 0x1ea258u;
    // NOP
    // 0x1ea25c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA25Cu;
    {
        const bool branch_taken_0x1ea25c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea25c) {
            ctx->pc = 0x1EA26Cu;
            goto label_1ea26c;
        }
    }
    ctx->pc = 0x1EA264u;
    // 0x1ea264: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA264u;
        // 0x1ea268: 0xa0800010  sb          $zero, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA26Cu;
label_1ea26c:
    // 0x1ea26c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1ea26cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea270: 0x0  nop
    ctx->pc = 0x1ea270u;
    // NOP
    // 0x1ea274: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA274u;
    {
        const bool branch_taken_0x1ea274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea274) {
            ctx->pc = 0x1EA278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA274u;
            // 0x1ea278: 0xc4800028  lwc1        $f0, 0x28($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA288u;
            goto label_1ea288;
        }
    }
    ctx->pc = 0x1EA27Cu;
    // 0x1ea27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea280: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA280u;
        // 0x1ea284: 0xa0820010  sb          $v0, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA288u;
label_1ea288:
    // 0x1ea288: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ea288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea28c: 0x0  nop
    ctx->pc = 0x1ea28cu;
    // NOP
    // 0x1ea290: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA290u;
    {
        const bool branch_taken_0x1ea290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA290u;
        // 0x1ea294: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea290) {
            ctx->pc = 0x1EA2A4u;
            goto label_1ea2a4;
        }
    }
    ctx->pc = 0x1EA298u;
    // 0x1ea298: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ea298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ea29c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA29Cu;
        // 0x1ea2a0: 0xa0820010  sb          $v0, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA2A4u;
label_1ea2a4:
    // 0x1ea2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA2A4u;
        // 0x1ea2a8: 0xa0820010  sb          $v0, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA2ACu;
    // 0x1ea2ac: 0x0  nop
    ctx->pc = 0x1ea2acu;
    // NOP
    ctx->pc = 0x1ea2b0u;
}
