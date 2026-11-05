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

// Function: sub_002DCA80
// Address: 0x2dca80 - 0x2dcb08
void sub_002DCA80_0x2dca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCA80_0x2dca80");
#endif

    switch (ctx->pc) {
        case 0x2dca80u: goto label_2dca80;
        case 0x2dca84u: goto label_2dca84;
        case 0x2dca88u: goto label_2dca88;
        case 0x2dca8cu: goto label_2dca8c;
        case 0x2dca90u: goto label_2dca90;
        case 0x2dca94u: goto label_2dca94;
        case 0x2dca98u: goto label_2dca98;
        case 0x2dca9cu: goto label_2dca9c;
        case 0x2dcaa0u: goto label_2dcaa0;
        case 0x2dcaa4u: goto label_2dcaa4;
        case 0x2dcaa8u: goto label_2dcaa8;
        case 0x2dcaacu: goto label_2dcaac;
        case 0x2dcab0u: goto label_2dcab0;
        case 0x2dcab4u: goto label_2dcab4;
        case 0x2dcab8u: goto label_2dcab8;
        case 0x2dcabcu: goto label_2dcabc;
        case 0x2dcac0u: goto label_2dcac0;
        case 0x2dcac4u: goto label_2dcac4;
        case 0x2dcac8u: goto label_2dcac8;
        case 0x2dcaccu: goto label_2dcacc;
        case 0x2dcad0u: goto label_2dcad0;
        case 0x2dcad4u: goto label_2dcad4;
        case 0x2dcad8u: goto label_2dcad8;
        case 0x2dcadcu: goto label_2dcadc;
        case 0x2dcae0u: goto label_2dcae0;
        case 0x2dcae4u: goto label_2dcae4;
        case 0x2dcae8u: goto label_2dcae8;
        case 0x2dcaecu: goto label_2dcaec;
        case 0x2dcaf0u: goto label_2dcaf0;
        case 0x2dcaf4u: goto label_2dcaf4;
        case 0x2dcaf8u: goto label_2dcaf8;
        case 0x2dcafcu: goto label_2dcafc;
        case 0x2dcb00u: goto label_2dcb00;
        case 0x2dcb04u: goto label_2dcb04;
        default: break;
    }

    ctx->pc = 0x2dca80u;

label_2dca80:
    // 0x2dca80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2dca84:
    // 0x2dca84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dca88:
    // 0x2dca88: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x2dca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2dca8c:
    // 0x2dca8c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_2dca90:
    if (ctx->pc == 0x2DCA90u) {
        ctx->pc = 0x2DCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA8Cu;
        // 0x2dca90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCA94u;
        goto label_2dca94;
    }
    ctx->pc = 0x2DCA8Cu;
    {
        const bool branch_taken_0x2dca8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA8Cu;
        // 0x2dca90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca8c) {
            ctx->pc = 0x2DCAFCu;
            goto label_2dcafc;
        }
    }
    ctx->pc = 0x2DCA94u;
label_2dca94:
    // 0x2dca94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dca98:
    // 0x2dca98: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2dca98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_2dca9c:
    // 0x2dca9c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x2dca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_2dcaa0:
    // 0x2dcaa0: 0xa0800048  sb          $zero, 0x48($a0)
    ctx->pc = 0x2dcaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 0));
label_2dcaa4:
    // 0x2dcaa4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2dcaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dcaa8:
    // 0x2dcaa8: 0x8c6300bc  lw          $v1, 0xBC($v1)
    ctx->pc = 0x2dcaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_2dcaac:
    // 0x2dcaac: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x2dcaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_2dcab0:
    // 0x2dcab0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2dcab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2dcab4:
    // 0x2dcab4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2dcab8:
    if (ctx->pc == 0x2DCAB8u) {
        ctx->pc = 0x2DCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAB4u;
        // 0x2dcab8: 0x30621001  andi        $v0, $v1, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4097);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCABCu;
        goto label_2dcabc;
    }
    ctx->pc = 0x2DCAB4u;
    {
        const bool branch_taken_0x2dcab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAB4u;
        // 0x2dcab8: 0x30621001  andi        $v0, $v1, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4097);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcab4) {
            ctx->pc = 0x2DCACCu;
            goto label_2dcacc;
        }
    }
    ctx->pc = 0x2DCABCu;
label_2dcabc:
    // 0x2dcabc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dcabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2dcac0:
    // 0x2dcac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dcac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dcac4:
    // 0x2dcac4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2dcac8:
    if (ctx->pc == 0x2DCAC8u) {
        ctx->pc = 0x2DCAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAC4u;
        // 0x2dcac8: 0xe480004c  swc1        $f0, 0x4C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCACCu;
        goto label_2dcacc;
    }
    ctx->pc = 0x2DCAC4u;
    {
        const bool branch_taken_0x2dcac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAC4u;
        // 0x2dcac8: 0xe480004c  swc1        $f0, 0x4C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcac4) {
            ctx->pc = 0x2DCAE8u;
            goto label_2dcae8;
        }
    }
    ctx->pc = 0x2DCACCu;
label_2dcacc:
    // 0x2dcacc: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x2dcaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_2dcad0:
    // 0x2dcad0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2dcad4:
    if (ctx->pc == 0x2DCAD4u) {
        ctx->pc = 0x2DCAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAD0u;
        // 0x2dcad4: 0x8c830070  lw          $v1, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCAD8u;
        goto label_2dcad8;
    }
    ctx->pc = 0x2DCAD0u;
    {
        const bool branch_taken_0x2dcad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcad0) {
            ctx->pc = 0x2DCAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCAD0u;
            // 0x2dcad4: 0x8c830070  lw          $v1, 0x70($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCAECu;
            goto label_2dcaec;
        }
    }
    ctx->pc = 0x2DCAD8u;
label_2dcad8:
    // 0x2dcad8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2dcad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2dcadc:
    // 0x2dcadc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dcadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dcae0:
    // 0x2dcae0: 0x0  nop
    ctx->pc = 0x2dcae0u;
    // NOP
label_2dcae4:
    // 0x2dcae4: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x2dcae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_2dcae8:
    // 0x2dcae8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2dcae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2dcaec:
    // 0x2dcaec: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2dcaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2dcaf0:
    // 0x2dcaf0: 0x40f809  jalr        $v0
label_2dcaf4:
    if (ctx->pc == 0x2DCAF4u) {
        ctx->pc = 0x2DCAF8u;
        goto label_2dcaf8;
    }
    ctx->pc = 0x2DCAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DCAF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCAF0u, 0x2DCAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCAF8u;
label_2dcaf8:
    // 0x2dcaf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dcaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dcafc:
    // 0x2dcafc: 0x3e00008  jr          $ra
label_2dcb00:
    if (ctx->pc == 0x2DCB00u) {
        ctx->pc = 0x2DCB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAFCu;
        // 0x2dcb00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCB04u;
        goto label_2dcb04;
    }
    ctx->pc = 0x2DCAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCAFCu;
        // 0x2dcb00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCB04u;
label_2dcb04:
    // 0x2dcb04: 0x0  nop
    ctx->pc = 0x2dcb04u;
    // NOP
    ctx->pc = 0x2dcb08u;
}
