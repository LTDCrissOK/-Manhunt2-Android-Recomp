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

// Function: sub_001D0548
// Address: 0x1d0548 - 0x1d05b8
void sub_001D0548_0x1d0548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0548_0x1d0548");
#endif

    ctx->pc = 0x1d0548u;

    // 0x1d0548: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1d0548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1d054c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1d054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1d0550: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0550u;
    {
        const bool branch_taken_0x1d0550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0550) {
            ctx->pc = 0x1D0554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0550u;
            // 0x1d0554: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D057Cu;
            goto label_1d057c;
        }
    }
    ctx->pc = 0x1D0558u;
    // 0x1d0558: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x1d0558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d055c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d055cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0560: 0x0  nop
    ctx->pc = 0x1d0560u;
    // NOP
    // 0x1d0564: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d0564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0568: 0x0  nop
    ctx->pc = 0x1d0568u;
    // NOP
    // 0x1d056c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1D056Cu;
    {
        const bool branch_taken_0x1d056c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D056Cu;
        // 0x1d0570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d056c) {
            ctx->pc = 0x1D05B0u;
            goto label_1d05b0;
        }
    }
    ctx->pc = 0x1D0574u;
    // 0x1d0574: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0574u;
        // 0x1d0578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D057Cu;
label_1d057c:
    // 0x1d057c: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x1d057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d0580: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1d0580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0584: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1d0584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1d0588: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1d0588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1d058c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d058cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0590: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d0590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1d0594: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d0594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0598: 0x0  nop
    ctx->pc = 0x1d0598u;
    // NOP
    // 0x1d059c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D059Cu;
    {
        const bool branch_taken_0x1d059c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D059Cu;
        // 0x1d05a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d059c) {
            ctx->pc = 0x1D05A8u;
            goto label_1d05a8;
        }
    }
    ctx->pc = 0x1D05A4u;
    // 0x1d05a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d05a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d05a8:
    // 0x1d05a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D05A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D05ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05A8u;
        // 0x1d05ac: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D05A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D05B0u;
label_1d05b0:
    // 0x1d05b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D05B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D05B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D05B8u;
}
