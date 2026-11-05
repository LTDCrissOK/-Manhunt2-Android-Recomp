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

// Function: sub_00364E30
// Address: 0x364e30 - 0x364ea8
void sub_00364E30_0x364e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364E30_0x364e30");
#endif

    switch (ctx->pc) {
        case 0x364e30u: goto label_364e30;
        case 0x364e34u: goto label_364e34;
        case 0x364e38u: goto label_364e38;
        case 0x364e3cu: goto label_364e3c;
        case 0x364e40u: goto label_364e40;
        case 0x364e44u: goto label_364e44;
        case 0x364e48u: goto label_364e48;
        case 0x364e4cu: goto label_364e4c;
        case 0x364e50u: goto label_364e50;
        case 0x364e54u: goto label_364e54;
        case 0x364e58u: goto label_364e58;
        case 0x364e5cu: goto label_364e5c;
        case 0x364e60u: goto label_364e60;
        case 0x364e64u: goto label_364e64;
        case 0x364e68u: goto label_364e68;
        case 0x364e6cu: goto label_364e6c;
        case 0x364e70u: goto label_364e70;
        case 0x364e74u: goto label_364e74;
        case 0x364e78u: goto label_364e78;
        case 0x364e7cu: goto label_364e7c;
        case 0x364e80u: goto label_364e80;
        case 0x364e84u: goto label_364e84;
        case 0x364e88u: goto label_364e88;
        case 0x364e8cu: goto label_364e8c;
        case 0x364e90u: goto label_364e90;
        case 0x364e94u: goto label_364e94;
        case 0x364e98u: goto label_364e98;
        case 0x364e9cu: goto label_364e9c;
        case 0x364ea0u: goto label_364ea0;
        case 0x364ea4u: goto label_364ea4;
        default: break;
    }

    ctx->pc = 0x364e30u;

label_364e30:
    // 0x364e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x364e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_364e34:
    // 0x364e34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x364e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_364e38:
    // 0x364e38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x364e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_364e3c:
    // 0x364e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x364e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_364e40:
    // 0x364e40: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x364e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_364e44:
    // 0x364e44: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x364e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_364e48:
    // 0x364e48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x364e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_364e4c:
    // 0x364e4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x364e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_364e50:
    // 0x364e50: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x364e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_364e54:
    // 0x364e54: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x364e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_364e58:
    // 0x364e58: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x364e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_364e5c:
    // 0x364e5c: 0x40f809  jalr        $v0
label_364e60:
    if (ctx->pc == 0x364E60u) {
        ctx->pc = 0x364E64u;
        goto label_364e64;
    }
    ctx->pc = 0x364E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x364E64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364E5Cu, 0x364E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x364E64u;
label_364e64:
    // 0x364e64: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_364e68:
    if (ctx->pc == 0x364E68u) {
        ctx->pc = 0x364E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E64u;
        // 0x364e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364E6Cu;
        goto label_364e6c;
    }
    ctx->pc = 0x364E64u;
    {
        const bool branch_taken_0x364e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E64u;
        // 0x364e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364e64) {
            ctx->pc = 0x364E98u;
            goto label_364e98;
        }
    }
    ctx->pc = 0x364E6Cu;
label_364e6c:
    // 0x364e6c: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x364e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_364e70:
    // 0x364e70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_364e74:
    // 0x364e74: 0x0  nop
    ctx->pc = 0x364e74u;
    // NOP
label_364e78:
    // 0x364e78: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x364e78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_364e7c:
    // 0x364e7c: 0x0  nop
    ctx->pc = 0x364e7cu;
    // NOP
label_364e80:
    // 0x364e80: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_364e84:
    if (ctx->pc == 0x364E84u) {
        ctx->pc = 0x364E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E80u;
        // 0x364e84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364E88u;
        goto label_364e88;
    }
    ctx->pc = 0x364E80u;
    {
        const bool branch_taken_0x364e80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364e80) {
            ctx->pc = 0x364E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364E80u;
            // 0x364e84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364E9Cu;
            goto label_364e9c;
        }
    }
    ctx->pc = 0x364E88u;
label_364e88:
    // 0x364e88: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x364e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_364e8c:
    // 0x364e8c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_364e90:
    if (ctx->pc == 0x364E90u) {
        ctx->pc = 0x364E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E8Cu;
        // 0x364e90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364E94u;
        goto label_364e94;
    }
    ctx->pc = 0x364E8Cu;
    {
        const bool branch_taken_0x364e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x364E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E8Cu;
        // 0x364e90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364e8c) {
            ctx->pc = 0x364E98u;
            goto label_364e98;
        }
    }
    ctx->pc = 0x364E94u;
label_364e94:
    // 0x364e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364e98:
    // 0x364e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x364e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_364e9c:
    // 0x364e9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x364e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_364ea0:
    // 0x364ea0: 0x3e00008  jr          $ra
label_364ea4:
    if (ctx->pc == 0x364EA4u) {
        ctx->pc = 0x364EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364EA0u;
        // 0x364ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364EA8u;
        goto label_fallthrough_0x364ea0;
    }
    ctx->pc = 0x364EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364EA0u;
        // 0x364ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x364ea0:
    ctx->pc = 0x364EA8u;
}
