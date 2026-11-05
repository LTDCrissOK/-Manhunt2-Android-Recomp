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

// Function: sub_0036CBE0
// Address: 0x36cbe0 - 0x36cc58
void sub_0036CBE0_0x36cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CBE0_0x36cbe0");
#endif

    switch (ctx->pc) {
        case 0x36cc30u: goto label_36cc30;
        default: break;
    }

    ctx->pc = 0x36cbe0u;

    // 0x36cbe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36cbe4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x36cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x36cbe8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x36cbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x36cbec: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x36CBECu;
    {
        const bool branch_taken_0x36cbec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CBECu;
        // 0x36cbf0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cbec) {
            ctx->pc = 0x36CC48u;
            goto label_36cc48;
        }
    }
    ctx->pc = 0x36CBF4u;
    // 0x36cbf4: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36CBF4u;
    {
        const bool branch_taken_0x36cbf4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CBF4u;
        // 0x36cbf8: 0x24020280  addiu       $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cbf4) {
            ctx->pc = 0x36CC14u;
            goto label_36cc14;
        }
    }
    ctx->pc = 0x36CBFCu;
    // 0x36cbfc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x36cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x36cc00: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x36cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x36cc04: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x36cc04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36cc08: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x36cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x36cc0c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x36cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x36cc10: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x36cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_36cc14:
    // 0x36cc14: 0x0  nop
    ctx->pc = 0x36cc14u;
    // NOP
    // 0x36cc18: 0x0  nop
    ctx->pc = 0x36cc18u;
    // NOP
    // 0x36cc1c: 0x460d6003  div.s       $f0, $f12, $f13
    ctx->pc = 0x36cc1cu;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[12], ctx->f[13]); }
    // 0x36cc20: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x36cc20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36cc24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x36cc24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cc28: 0xc0db354  jal         func_36CD50
    ctx->pc = 0x36CC28u;
    SET_GPR_U32(ctx, 31, 0x36CC30u);
    ctx->pc = 0x36CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CC28u;
    // 0x36cc2c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CD50u, 0x36CC28u, 0x36CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CC30u;
label_36cc30:
    // 0x36cc30: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x36cc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x36cc34: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x36cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x36cc38: 0x2442f170  addiu       $v0, $v0, -0xE90
    ctx->pc = 0x36cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x36cc3c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x36cc3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5BF17Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF17Cu, _value); } while (0);
    // 0x36cc40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x36cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x36cc44: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x36cc44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5BF180u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF180u, _value); } while (0);
label_36cc48:
    // 0x36cc48: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x36cc48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36cc4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x36cc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36cc50: 0x3e00008  jr          $ra
    ctx->pc = 0x36CC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC50u;
        // 0x36cc54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CC58u;
}
