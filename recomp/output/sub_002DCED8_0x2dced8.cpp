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

// Function: sub_002DCED8
// Address: 0x2dced8 - 0x2dcf50
void sub_002DCED8_0x2dced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCED8_0x2dced8");
#endif

    switch (ctx->pc) {
        case 0x2dced8u: goto label_2dced8;
        case 0x2dcedcu: goto label_2dcedc;
        case 0x2dcee0u: goto label_2dcee0;
        case 0x2dcee4u: goto label_2dcee4;
        case 0x2dcee8u: goto label_2dcee8;
        case 0x2dceecu: goto label_2dceec;
        case 0x2dcef0u: goto label_2dcef0;
        case 0x2dcef4u: goto label_2dcef4;
        case 0x2dcef8u: goto label_2dcef8;
        case 0x2dcefcu: goto label_2dcefc;
        case 0x2dcf00u: goto label_2dcf00;
        case 0x2dcf04u: goto label_2dcf04;
        case 0x2dcf08u: goto label_2dcf08;
        case 0x2dcf0cu: goto label_2dcf0c;
        case 0x2dcf10u: goto label_2dcf10;
        case 0x2dcf14u: goto label_2dcf14;
        case 0x2dcf18u: goto label_2dcf18;
        case 0x2dcf1cu: goto label_2dcf1c;
        case 0x2dcf20u: goto label_2dcf20;
        case 0x2dcf24u: goto label_2dcf24;
        case 0x2dcf28u: goto label_2dcf28;
        case 0x2dcf2cu: goto label_2dcf2c;
        case 0x2dcf30u: goto label_2dcf30;
        case 0x2dcf34u: goto label_2dcf34;
        case 0x2dcf38u: goto label_2dcf38;
        case 0x2dcf3cu: goto label_2dcf3c;
        case 0x2dcf40u: goto label_2dcf40;
        case 0x2dcf44u: goto label_2dcf44;
        case 0x2dcf48u: goto label_2dcf48;
        case 0x2dcf4cu: goto label_2dcf4c;
        default: break;
    }

    ctx->pc = 0x2dced8u;

label_2dced8:
    // 0x2dced8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dced8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2dcedc:
    // 0x2dcedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dcedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2dcee0:
    // 0x2dcee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dcee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2dcee4:
    // 0x2dcee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dcee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dcee8:
    // 0x2dcee8: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2dcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2dceec:
    // 0x2dceec: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2dceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2dcef0:
    // 0x2dcef0: 0x60f809  jalr        $v1
label_2dcef4:
    if (ctx->pc == 0x2DCEF4u) {
        ctx->pc = 0x2DCEF8u;
        goto label_2dcef8;
    }
    ctx->pc = 0x2DCEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DCEF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCEF0u, 0x2DCEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCEF8u;
label_2dcef8:
    // 0x2dcef8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2dcef8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2dcefc:
    // 0x2dcefc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dcefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2dcf00:
    // 0x2dcf00: 0xc440b65c  lwc1        $f0, -0x49A4($v0)
    ctx->pc = 0x2dcf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dcf04:
    // 0x2dcf04: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2dcf04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dcf08:
    // 0x2dcf08: 0x0  nop
    ctx->pc = 0x2dcf08u;
    // NOP
label_2dcf0c:
    // 0x2dcf0c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2dcf10:
    if (ctx->pc == 0x2DCF10u) {
        ctx->pc = 0x2DCF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF0Cu;
        // 0x2dcf10: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF14u;
        goto label_2dcf14;
    }
    ctx->pc = 0x2DCF0Cu;
    {
        const bool branch_taken_0x2dcf0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DCF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF0Cu;
        // 0x2dcf10: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf0c) {
            ctx->pc = 0x2DCF3Cu;
            goto label_2dcf3c;
        }
    }
    ctx->pc = 0x2DCF14u;
label_2dcf14:
    // 0x2dcf14: 0x0  nop
    ctx->pc = 0x2dcf14u;
    // NOP
label_2dcf18:
    // 0x2dcf18: 0x0  nop
    ctx->pc = 0x2dcf18u;
    // NOP
label_2dcf1c:
    // 0x2dcf1c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2dcf1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_2dcf20:
    // 0x2dcf20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dcf20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2dcf24:
    // 0x2dcf24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dcf24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dcf28:
    // 0x2dcf28: 0xc441b664  lwc1        $f1, -0x499C($v0)
    ctx->pc = 0x2dcf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dcf2c:
    // 0x2dcf2c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2dcf2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2dcf30:
    // 0x2dcf30: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2dcf30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2dcf34:
    // 0x2dcf34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2dcf34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2dcf38:
    // 0x2dcf38: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x2dcf38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_2dcf3c:
    // 0x2dcf3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dcf3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dcf40:
    // 0x2dcf40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dcf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2dcf44:
    // 0x2dcf44: 0x3e00008  jr          $ra
label_2dcf48:
    if (ctx->pc == 0x2DCF48u) {
        ctx->pc = 0x2DCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF44u;
        // 0x2dcf48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF4Cu;
        goto label_2dcf4c;
    }
    ctx->pc = 0x2DCF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF44u;
        // 0x2dcf48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCF4Cu;
label_2dcf4c:
    // 0x2dcf4c: 0x0  nop
    ctx->pc = 0x2dcf4cu;
    // NOP
    ctx->pc = 0x2dcf50u;
}
