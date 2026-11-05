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

// Function: sub_001BED10
// Address: 0x1bed10 - 0x1bed60
void sub_001BED10_0x1bed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BED10_0x1bed10");
#endif

    ctx->pc = 0x1bed10u;

    // 0x1bed10: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1bed10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1bed14: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1bed14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bed18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BED18u;
    {
        const bool branch_taken_0x1bed18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED18u;
        // 0x1bed1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed18) {
            ctx->pc = 0x1BED30u;
            goto label_1bed30;
        }
    }
    ctx->pc = 0x1BED20u;
    // 0x1bed20: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bed20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1bed24: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1bed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1bed28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BED28u;
    {
        const bool branch_taken_0x1bed28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED28u;
        // 0x1bed2c: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed28) {
            ctx->pc = 0x1BED44u;
            goto label_1bed44;
        }
    }
    ctx->pc = 0x1BED30u;
label_1bed30:
    // 0x1bed30: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BED30u;
    {
        const bool branch_taken_0x1bed30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bed30) {
            ctx->pc = 0x1BED34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BED30u;
            // 0x1bed34: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BED38u;
    // 0x1bed38: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1bed38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1bed3c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1bed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1bed40: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1bed40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_1bed44:
    // 0x1bed44: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1bed44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bed48:
    // 0x1bed48: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1bed48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1bed4c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1bed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bed50: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1bed50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1bed54: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1bed54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bed58: 0x3e00008  jr          $ra
    ctx->pc = 0x1BED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED58u;
        // 0x1bed5c: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BED58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BED60u;
}
