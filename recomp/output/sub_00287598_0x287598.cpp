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

// Function: sub_00287598
// Address: 0x287598 - 0x287620
void sub_00287598_0x287598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287598_0x287598");
#endif

    ctx->pc = 0x287598u;

    // 0x287598: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x287598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28759c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28759cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2875a0: 0x8ca4a4bc  lw          $a0, -0x5B44($a1)
    ctx->pc = 0x2875a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA4BCu));
    // 0x2875a4: 0x8c62a4c0  lw          $v0, -0x5B40($v1)
    ctx->pc = 0x2875a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA4C0u));
    // 0x2875a8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2875a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2875ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2875ACu;
    {
        const bool branch_taken_0x2875ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2875B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875ACu;
        // 0x2875b0: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875ac) {
            ctx->pc = 0x2875C4u;
            goto label_2875c4;
        }
    }
    ctx->pc = 0x2875B4u;
    // 0x2875b4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2875b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2875b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2875b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2875bc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2875BCu;
    {
        const bool branch_taken_0x2875bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2875C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875BCu;
        // 0x2875c0: 0xaca3a4bc  sw          $v1, -0x5B44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294943932), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875bc) {
            ctx->pc = 0x287614u;
            goto label_287614;
        }
    }
    ctx->pc = 0x2875C4u;
label_2875c4:
    // 0x2875c4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2875c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2875c8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2875c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2875cc: 0xc460a4c4  lwc1        $f0, -0x5B3C($v1)
    ctx->pc = 0x2875ccu;
    { uint32_t bits = FAST_READ32(0x3FA4C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2875d0: 0x24822450  addiu       $v0, $a0, 0x2450
    ctx->pc = 0x2875d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    // 0x2875d4: 0xc4822450  lwc1        $f2, 0x2450($a0)
    ctx->pc = 0x2875d4u;
    { uint32_t bits = FAST_READ32(0x4C2450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2875d8: 0x46000107  neg.s       $f4, $f0
    ctx->pc = 0x2875d8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[0]);
    // 0x2875dc: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2875dcu;
    { uint32_t bits = FAST_READ32(0x4C2458u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2875e0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2875e0u;
    { uint32_t bits = FAST_READ32(0x4C245Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2875e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2875e4u;
    { uint32_t bits = FAST_READ32(0x4C2454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2875e8: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x2875e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2875ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2875ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2875f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2875f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2875f4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2875f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2875f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2875F8u;
    {
        const bool branch_taken_0x2875f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2875FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875F8u;
        // 0x2875fc: 0xe7a30010  swc1        $f3, 0x10($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875f8) {
            ctx->pc = 0x287610u;
            goto label_287610;
        }
    }
    ctx->pc = 0x287600u;
    // 0x287600: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x287600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287604: 0x0  nop
    ctx->pc = 0x287604u;
    // NOP
    // 0x287608: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x287608u;
    {
        const bool branch_taken_0x287608 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287608u;
        // 0x28760c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287608) {
            ctx->pc = 0x287614u;
            goto label_287614;
        }
    }
    ctx->pc = 0x287610u;
label_287610:
    // 0x287610: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287614:
    // 0x287614: 0x3e00008  jr          $ra
    ctx->pc = 0x287614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287614u;
        // 0x287618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28761Cu;
    // 0x28761c: 0x0  nop
    ctx->pc = 0x28761cu;
    // NOP
    ctx->pc = 0x287620u;
}
