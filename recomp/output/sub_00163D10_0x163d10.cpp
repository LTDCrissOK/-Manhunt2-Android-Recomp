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

// Function: sub_00163D10
// Address: 0x163d10 - 0x163d50
void sub_00163D10_0x163d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163D10_0x163d10");
#endif

    switch (ctx->pc) {
        case 0x163d2cu: goto label_163d2c;
        default: break;
    }

    ctx->pc = 0x163d10u;

    // 0x163d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163d14: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x163d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x163d18: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x163d18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x163d1c: 0xc45489d0  lwc1        $f20, -0x7630($v0)
    ctx->pc = 0x163d1cu;
    { uint32_t bits = FAST_READ32(0x3F89D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x163d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163d24: 0xc0c4b0a  jal         func_312C28
    ctx->pc = 0x163D24u;
    SET_GPR_U32(ctx, 31, 0x163D2Cu);
    ctx->pc = 0x163D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163D24u;
    // 0x163d28: 0x248402f0  addiu       $a0, $a0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312C28u, 0x163D24u, 0x163D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D2Cu;
label_163d2c:
    // 0x163d2c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x163d2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163d30: 0x0  nop
    ctx->pc = 0x163d30u;
    // NOP
    // 0x163d34: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x163D34u;
    {
        const bool branch_taken_0x163d34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D34u;
        // 0x163d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d34) {
            ctx->pc = 0x163D40u;
            goto label_163d40;
        }
    }
    ctx->pc = 0x163D3Cu;
    // 0x163d3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163d40:
    // 0x163d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163d44: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x163d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x163d48: 0x3e00008  jr          $ra
    ctx->pc = 0x163D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D48u;
        // 0x163d4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163D50u;
}
