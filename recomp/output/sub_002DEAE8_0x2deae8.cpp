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

// Function: sub_002DEAE8
// Address: 0x2deae8 - 0x2deb70
void sub_002DEAE8_0x2deae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEAE8_0x2deae8");
#endif

    switch (ctx->pc) {
        case 0x2deae8u: goto label_2deae8;
        case 0x2deaecu: goto label_2deaec;
        case 0x2deaf0u: goto label_2deaf0;
        case 0x2deaf4u: goto label_2deaf4;
        case 0x2deaf8u: goto label_2deaf8;
        case 0x2deafcu: goto label_2deafc;
        case 0x2deb00u: goto label_2deb00;
        case 0x2deb04u: goto label_2deb04;
        case 0x2deb08u: goto label_2deb08;
        case 0x2deb0cu: goto label_2deb0c;
        case 0x2deb10u: goto label_2deb10;
        case 0x2deb14u: goto label_2deb14;
        case 0x2deb18u: goto label_2deb18;
        case 0x2deb1cu: goto label_2deb1c;
        case 0x2deb20u: goto label_2deb20;
        case 0x2deb24u: goto label_2deb24;
        case 0x2deb28u: goto label_2deb28;
        case 0x2deb2cu: goto label_2deb2c;
        case 0x2deb30u: goto label_2deb30;
        case 0x2deb34u: goto label_2deb34;
        case 0x2deb38u: goto label_2deb38;
        case 0x2deb3cu: goto label_2deb3c;
        case 0x2deb40u: goto label_2deb40;
        case 0x2deb44u: goto label_2deb44;
        case 0x2deb48u: goto label_2deb48;
        case 0x2deb4cu: goto label_2deb4c;
        case 0x2deb50u: goto label_2deb50;
        case 0x2deb54u: goto label_2deb54;
        case 0x2deb58u: goto label_2deb58;
        case 0x2deb5cu: goto label_2deb5c;
        case 0x2deb60u: goto label_2deb60;
        case 0x2deb64u: goto label_2deb64;
        case 0x2deb68u: goto label_2deb68;
        case 0x2deb6cu: goto label_2deb6c;
        default: break;
    }

    ctx->pc = 0x2deae8u;

label_2deae8:
    // 0x2deae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2deae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2deaec:
    // 0x2deaec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2deaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2deaf0:
    // 0x2deaf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2deaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2deaf4:
    // 0x2deaf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2deaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2deaf8:
    // 0x2deaf8: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2deaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2deafc:
    // 0x2deafc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2deafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2deb00:
    // 0x2deb00: 0x60f809  jalr        $v1
label_2deb04:
    if (ctx->pc == 0x2DEB04u) {
        ctx->pc = 0x2DEB08u;
        goto label_2deb08;
    }
    ctx->pc = 0x2DEB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DEB08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEB00u, 0x2DEB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DEB08u;
label_2deb08:
    // 0x2deb08: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2deb08u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2deb0c:
    // 0x2deb0c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2deb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2deb10:
    // 0x2deb10: 0xc440b674  lwc1        $f0, -0x498C($v0)
    ctx->pc = 0x2deb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2deb14:
    // 0x2deb14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2deb14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2deb18:
    // 0x2deb18: 0x0  nop
    ctx->pc = 0x2deb18u;
    // NOP
label_2deb1c:
    // 0x2deb1c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_2deb20:
    if (ctx->pc == 0x2DEB20u) {
        ctx->pc = 0x2DEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB1Cu;
        // 0x2deb20: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB24u;
        goto label_2deb24;
    }
    ctx->pc = 0x2DEB1Cu;
    {
        const bool branch_taken_0x2deb1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB1Cu;
        // 0x2deb20: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deb1c) {
            ctx->pc = 0x2DEB5Cu;
            goto label_2deb5c;
        }
    }
    ctx->pc = 0x2DEB24u;
label_2deb24:
    // 0x2deb24: 0x0  nop
    ctx->pc = 0x2deb24u;
    // NOP
label_2deb28:
    // 0x2deb28: 0x0  nop
    ctx->pc = 0x2deb28u;
    // NOP
label_2deb2c:
    // 0x2deb2c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2deb2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2deb30:
    // 0x2deb30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2deb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2deb34:
    // 0x2deb34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2deb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2deb38:
    // 0x2deb38: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2deb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2deb3c:
    // 0x2deb3c: 0xc442b664  lwc1        $f2, -0x499C($v0)
    ctx->pc = 0x2deb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2deb40:
    // 0x2deb40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2deb40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2deb44:
    // 0x2deb44: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2deb44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2deb48:
    // 0x2deb48: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2deb48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2deb4c:
    // 0x2deb4c: 0xe6020050  swc1        $f2, 0x50($s0)
    ctx->pc = 0x2deb4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_2deb50:
    // 0x2deb50: 0xc460b678  lwc1        $f0, -0x4988($v1)
    ctx->pc = 0x2deb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2deb54:
    // 0x2deb54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2deb54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2deb58:
    // 0x2deb58: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x2deb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
label_2deb5c:
    // 0x2deb5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2deb5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2deb60:
    // 0x2deb60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2deb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2deb64:
    // 0x2deb64: 0x3e00008  jr          $ra
label_2deb68:
    if (ctx->pc == 0x2DEB68u) {
        ctx->pc = 0x2DEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB64u;
        // 0x2deb68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEB6Cu;
        goto label_2deb6c;
    }
    ctx->pc = 0x2DEB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB64u;
        // 0x2deb68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEB6Cu;
label_2deb6c:
    // 0x2deb6c: 0x0  nop
    ctx->pc = 0x2deb6cu;
    // NOP
    ctx->pc = 0x2deb70u;
}
