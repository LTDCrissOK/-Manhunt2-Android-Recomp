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

// Function: sub_00192918
// Address: 0x192918 - 0x1929a0
void sub_00192918_0x192918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192918_0x192918");
#endif

    switch (ctx->pc) {
        case 0x192934u: goto label_192934;
        default: break;
    }

    ctx->pc = 0x192918u;

    // 0x192918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19291c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19291cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192924: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x192924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192928: 0xc44c0098  lwc1        $f12, 0x98($v0)
    ctx->pc = 0x192928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19292c: 0xc0951ac  jal         func_2546B0
    ctx->pc = 0x19292Cu;
    SET_GPR_U32(ctx, 31, 0x192934u);
    ctx->pc = 0x192930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19292Cu;
    // 0x192930: 0x8c450044  lw          $a1, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2546B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2546B0u, 0x19292Cu, 0x192934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192934u;
label_192934:
    // 0x192934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192938: 0x3e00008  jr          $ra
    ctx->pc = 0x192938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192938u;
        // 0x19293c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192940u;
    // 0x192940: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x192940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x192944: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x192944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x192948: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x192948u;
    {
        const bool branch_taken_0x192948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192948u;
        // 0x19294c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192948) {
            ctx->pc = 0x192994u;
            goto label_192994;
        }
    }
    ctx->pc = 0x192950u;
    // 0x192950: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x192950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x192954: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x192954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x192958: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x192958u;
    {
        const bool branch_taken_0x192958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192958u;
        // 0x19295c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192958) {
            ctx->pc = 0x192994u;
            goto label_192994;
        }
    }
    ctx->pc = 0x192960u;
    // 0x192960: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x192960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192964: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x192964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192968: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x192968u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19296c: 0x0  nop
    ctx->pc = 0x19296cu;
    // NOP
    // 0x192970: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x192970u;
    {
        const bool branch_taken_0x192970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192970) {
            ctx->pc = 0x192994u;
            goto label_192994;
        }
    }
    ctx->pc = 0x192978u;
    // 0x192978: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x192978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19297c: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x19297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192980: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x192980u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192984: 0x0  nop
    ctx->pc = 0x192984u;
    // NOP
    // 0x192988: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x192988u;
    {
        const bool branch_taken_0x192988 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192988u;
        // 0x19298c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192988) {
            ctx->pc = 0x192994u;
            goto label_192994;
        }
    }
    ctx->pc = 0x192990u;
    // 0x192990: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192994:
    // 0x192994: 0x3e00008  jr          $ra
    ctx->pc = 0x192994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19299Cu;
    // 0x19299c: 0x0  nop
    ctx->pc = 0x19299cu;
    // NOP
    ctx->pc = 0x1929a0u;
}
