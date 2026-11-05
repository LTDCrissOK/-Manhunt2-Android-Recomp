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

// Function: sub_00269CD8
// Address: 0x269cd8 - 0x269d40
void sub_00269CD8_0x269cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269CD8_0x269cd8");
#endif

    switch (ctx->pc) {
        case 0x269d20u: goto label_269d20;
        case 0x269d30u: goto label_269d30;
        default: break;
    }

    ctx->pc = 0x269cd8u;

    // 0x269cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x269cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x269cdc: 0x24820250  addiu       $v0, $a0, 0x250
    ctx->pc = 0x269cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x269ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x269ce4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x269ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x269ce8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x269ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x269cec: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x269cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x269cf0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x269cf0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x269cf4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x269cf4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x269cf8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x269cf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x269cfc: 0x46010044  c1          0x10044
    ctx->pc = 0x269cfcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x269d00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x269d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269d04: 0x0  nop
    ctx->pc = 0x269d04u;
    // NOP
    // 0x269d08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x269d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269d0c: 0x0  nop
    ctx->pc = 0x269d0cu;
    // NOP
    // 0x269d10: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x269D10u;
    {
        const bool branch_taken_0x269d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269d10) {
            ctx->pc = 0x269D28u;
            goto label_269d28;
        }
    }
    ctx->pc = 0x269D18u;
    // 0x269d18: 0xc09a6e4  jal         func_269B90
    ctx->pc = 0x269D18u;
    SET_GPR_U32(ctx, 31, 0x269D20u);
    ctx->pc = 0x269D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269D18u;
    // 0x269d1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B90u, 0x269D18u, 0x269D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D20u;
label_269d20:
    // 0x269d20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x269D20u;
    {
        const bool branch_taken_0x269d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D20u;
        // 0x269d24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d20) {
            ctx->pc = 0x269D34u;
            goto label_269d34;
        }
    }
    ctx->pc = 0x269D28u;
label_269d28:
    // 0x269d28: 0xc09a6e4  jal         func_269B90
    ctx->pc = 0x269D28u;
    SET_GPR_U32(ctx, 31, 0x269D30u);
    ctx->pc = 0x269D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269D28u;
    // 0x269d2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B90u, 0x269D28u, 0x269D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D30u;
label_269d30:
    // 0x269d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_269d34:
    // 0x269d34: 0x3e00008  jr          $ra
    ctx->pc = 0x269D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D34u;
        // 0x269d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269D3Cu;
    // 0x269d3c: 0x0  nop
    ctx->pc = 0x269d3cu;
    // NOP
    ctx->pc = 0x269d40u;
}
