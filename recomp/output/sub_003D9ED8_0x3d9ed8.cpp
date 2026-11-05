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

// Function: sub_003D9ED8
// Address: 0x3d9ed8 - 0x3d9f40
void sub_003D9ED8_0x3d9ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9ED8_0x3d9ed8");
#endif

    ctx->pc = 0x3d9ed8u;

    // 0x3d9ed8: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x3d9ed8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d9edc: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x3d9edcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d9ee0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D9EE0u;
    {
        const bool branch_taken_0x3d9ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d9ee0) {
            ctx->pc = 0x3D9F0Cu;
            goto label_3d9f0c;
        }
    }
    ctx->pc = 0x3D9EE8u;
    // 0x3d9ee8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d9ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d9eec: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D9EECu;
    {
        const bool branch_taken_0x3d9eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9eec) {
            ctx->pc = 0x3D9EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9EECu;
            // 0x3d9ef0: 0x94830008  lhu         $v1, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D9F14u;
            goto label_3d9f14;
        }
    }
    ctx->pc = 0x3D9EF4u;
    // 0x3d9ef4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3d9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3d9ef8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3d9ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d9efc: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x3d9efcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d9f00: 0x0  nop
    ctx->pc = 0x3d9f00u;
    // NOP
    // 0x3d9f04: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3D9F04u;
    {
        const bool branch_taken_0x3d9f04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F04u;
        // 0x3d9f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f04) {
            ctx->pc = 0x3D9F38u;
            goto label_3d9f38;
        }
    }
    ctx->pc = 0x3D9F0Cu;
label_3d9f0c:
    // 0x3d9f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F0Cu;
        // 0x3d9f10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9F14u;
label_3d9f14:
    // 0x3d9f14: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3d9f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3d9f18: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3d9f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3d9f1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d9f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d9f20: 0xc460fff8  lwc1        $f0, -0x8($v1)
    ctx->pc = 0x3d9f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d9f24: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x3d9f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d9f28: 0x0  nop
    ctx->pc = 0x3d9f28u;
    // NOP
    // 0x3d9f2c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9F2Cu;
    {
        const bool branch_taken_0x3d9f2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9F2Cu;
        // 0x3d9f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9f2c) {
            ctx->pc = 0x3D9F38u;
            goto label_3d9f38;
        }
    }
    ctx->pc = 0x3D9F34u;
    // 0x3d9f34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d9f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9f38:
    // 0x3d9f38: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9F40u;
}
