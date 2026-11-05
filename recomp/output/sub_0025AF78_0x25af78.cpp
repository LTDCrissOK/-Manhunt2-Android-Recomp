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

// Function: sub_0025AF78
// Address: 0x25af78 - 0x25aff0
void sub_0025AF78_0x25af78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AF78_0x25af78");
#endif

    switch (ctx->pc) {
        case 0x25afccu: goto label_25afcc;
        default: break;
    }

    ctx->pc = 0x25af78u;

    // 0x25af78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25af78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25af7c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x25af7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25af80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25af80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25af84: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x25af84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x25af88: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x25af88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25af8c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25af8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25af90: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x25af90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x25af94: 0xc48c0004  lwc1        $f12, 0x4($a0)
    ctx->pc = 0x25af94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25af98: 0x46026032  c.eq.s      $f12, $f2
    ctx->pc = 0x25af98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25af9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25af9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25afa0: 0x0  nop
    ctx->pc = 0x25afa0u;
    // NOP
    // 0x25afa4: 0x0  nop
    ctx->pc = 0x25afa4u;
    // NOP
    // 0x25afa8: 0x46010344  c1          0x10344
    ctx->pc = 0x25afa8u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x25afac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25AFACu;
    {
        const bool branch_taken_0x25afac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25afac) {
            ctx->pc = 0x25AFC4u;
            goto label_25afc4;
        }
    }
    ctx->pc = 0x25AFB4u;
    // 0x25afb4: 0x46026832  c.eq.s      $f13, $f2
    ctx->pc = 0x25afb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25afb8: 0x0  nop
    ctx->pc = 0x25afb8u;
    // NOP
    // 0x25afbc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x25AFBCu;
    {
        const bool branch_taken_0x25afbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFBCu;
        // 0x25afc0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afbc) {
            ctx->pc = 0x25AFD4u;
            goto label_25afd4;
        }
    }
    ctx->pc = 0x25AFC4u;
label_25afc4:
    // 0x25afc4: 0xc0e404c  jal         func_390130
    ctx->pc = 0x25AFC4u;
    SET_GPR_U32(ctx, 31, 0x25AFCCu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x25AFC4u, 0x25AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AFCCu;
label_25afcc:
    // 0x25afcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25AFCCu;
    {
        const bool branch_taken_0x25afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFCCu;
        // 0x25afd0: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25afcc) {
            ctx->pc = 0x25AFD8u;
            goto label_25afd8;
        }
    }
    ctx->pc = 0x25AFD4u;
label_25afd4:
    // 0x25afd4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25afd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_25afd8:
    // 0x25afd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25afd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25afdc: 0x3e00008  jr          $ra
    ctx->pc = 0x25AFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AFDCu;
        // 0x25afe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AFE4u;
    // 0x25afe4: 0x0  nop
    ctx->pc = 0x25afe4u;
    // NOP
    // 0x25afe8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25afe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25afec: 0x0  nop
    ctx->pc = 0x25afecu;
    // NOP
    ctx->pc = 0x25aff0u;
}
