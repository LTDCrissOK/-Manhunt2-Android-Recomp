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

// Function: sub_00363D80
// Address: 0x363d80 - 0x363e00
void sub_00363D80_0x363d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363D80_0x363d80");
#endif

    switch (ctx->pc) {
        case 0x363d94u: goto label_363d94;
        default: break;
    }

    ctx->pc = 0x363d80u;

    // 0x363d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x363d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363d88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x363d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x363d8c: 0xc0d8e3c  jal         func_3638F0
    ctx->pc = 0x363D8Cu;
    SET_GPR_U32(ctx, 31, 0x363D94u);
    ctx->pc = 0x363D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363D8Cu;
    // 0x363d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3638F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3638F0u, 0x363D8Cu, 0x363D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363D94u;
label_363d94:
    // 0x363d94: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x363D94u;
    {
        const bool branch_taken_0x363d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363D94u;
        // 0x363d98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363d94) {
            ctx->pc = 0x363DECu;
            goto label_363dec;
        }
    }
    ctx->pc = 0x363D9Cu;
    // 0x363d9c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x363d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x363da0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x363da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x363da4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x363DA4u;
    {
        const bool branch_taken_0x363da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x363da4) {
            ctx->pc = 0x363DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363DA4u;
            // 0x363da8: 0xc6000060  lwc1        $f0, 0x60($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x363DC0u;
            goto label_363dc0;
        }
    }
    ctx->pc = 0x363DACu;
    // 0x363dac: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x363dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x363db0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x363db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x363db4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x363db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363db8: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x363db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
    // 0x363dbc: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x363dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_363dc0:
    // 0x363dc0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x363dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x363dc4: 0x0  nop
    ctx->pc = 0x363dc4u;
    // NOP
    // 0x363dc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x363dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363dcc: 0x0  nop
    ctx->pc = 0x363dccu;
    // NOP
    // 0x363dd0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x363DD0u;
    {
        const bool branch_taken_0x363dd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363dd0) {
            ctx->pc = 0x363DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363DD0u;
            // 0x363dd4: 0xe6010060  swc1        $f1, 0x60($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x363DE8u;
            goto label_363de8;
        }
    }
    ctx->pc = 0x363DD8u;
    // 0x363dd8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x363dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x363ddc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x363ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363de0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x363de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x363de4: 0xe6010060  swc1        $f1, 0x60($s0)
    ctx->pc = 0x363de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_363de8:
    // 0x363de8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x363de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_363dec:
    // 0x363dec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363df0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x363df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x363df4: 0x3e00008  jr          $ra
    ctx->pc = 0x363DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363DF4u;
        // 0x363df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363DFCu;
    // 0x363dfc: 0x0  nop
    ctx->pc = 0x363dfcu;
    // NOP
    ctx->pc = 0x363e00u;
}
