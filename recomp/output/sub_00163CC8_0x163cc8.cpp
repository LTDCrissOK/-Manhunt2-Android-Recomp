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

// Function: sub_00163CC8
// Address: 0x163cc8 - 0x163d10
void sub_00163CC8_0x163cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163CC8_0x163cc8");
#endif

    switch (ctx->pc) {
        case 0x163ce8u: goto label_163ce8;
        default: break;
    }

    ctx->pc = 0x163cc8u;

    // 0x163cc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163cd0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x163cd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x163cd4: 0x8c8402e4  lw          $a0, 0x2E4($a0)
    ctx->pc = 0x163cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 740)));
    // 0x163cd8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163CD8u;
    {
        const bool branch_taken_0x163cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x163CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CD8u;
        // 0x163cdc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cd8) {
            ctx->pc = 0x163CF8u;
            goto label_163cf8;
        }
    }
    ctx->pc = 0x163CE0u;
    // 0x163ce0: 0xc04193c  jal         func_1064F0
    ctx->pc = 0x163CE0u;
    SET_GPR_U32(ctx, 31, 0x163CE8u);
    ctx->pc = 0x163CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CE0u;
    // 0x163ce4: 0xc45489d0  lwc1        $f20, -0x7630($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1064F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064F0u, 0x163CE0u, 0x163CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163CE8u;
label_163ce8:
    // 0x163ce8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x163ce8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163cec: 0x0  nop
    ctx->pc = 0x163cecu;
    // NOP
    // 0x163cf0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x163CF0u;
    {
        const bool branch_taken_0x163cf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CF0u;
        // 0x163cf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163cf0) {
            ctx->pc = 0x163CFCu;
            goto label_163cfc;
        }
    }
    ctx->pc = 0x163CF8u;
label_163cf8:
    // 0x163cf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163cfc:
    // 0x163cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163d00: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x163d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x163d04: 0x3e00008  jr          $ra
    ctx->pc = 0x163D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D04u;
        // 0x163d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163D0Cu;
    // 0x163d0c: 0x0  nop
    ctx->pc = 0x163d0cu;
    // NOP
    ctx->pc = 0x163d10u;
}
