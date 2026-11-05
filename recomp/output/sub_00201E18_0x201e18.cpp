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

// Function: sub_00201E18
// Address: 0x201e18 - 0x201e90
void sub_00201E18_0x201e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201E18_0x201e18");
#endif

    switch (ctx->pc) {
        case 0x201e84u: goto label_201e84;
        default: break;
    }

    ctx->pc = 0x201e18u;

    // 0x201e18: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x201e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x201e1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x201e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x201e20: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x201e20u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x201e24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201e24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201e28: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x201e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201e2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x201e2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201e30: 0x0  nop
    ctx->pc = 0x201e30u;
    // NOP
    // 0x201e34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x201E34u;
    {
        const bool branch_taken_0x201e34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x201E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E34u;
        // 0x201e38: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e34) {
            ctx->pc = 0x201E40u;
            goto label_201e40;
        }
    }
    ctx->pc = 0x201E3Cu;
    // 0x201e3c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x201e3cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_201e40:
    // 0x201e40: 0x3c01c100  lui         $at, 0xC100
    ctx->pc = 0x201e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49408 << 16));
    // 0x201e44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x201e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x201e48: 0x0  nop
    ctx->pc = 0x201e48u;
    // NOP
    // 0x201e4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x201e4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x201e50: 0x0  nop
    ctx->pc = 0x201e50u;
    // NOP
    // 0x201e54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x201E54u;
    {
        const bool branch_taken_0x201e54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x201e54) {
            ctx->pc = 0x201E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201E54u;
            // 0x201e58: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x201E5Cu;
            goto label_201e5c;
        }
    }
    ctx->pc = 0x201E5Cu;
label_201e5c:
    // 0x201e5c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x201e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x201e60: 0x24c201f4  addiu       $v0, $a2, 0x1F4
    ctx->pc = 0x201e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 500));
    // 0x201e64: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x201e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x201e68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201e6c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x201E6Cu;
    {
        const bool branch_taken_0x201e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E6Cu;
        // 0x201e70: 0xc41021  addu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e6c) {
            ctx->pc = 0x201E84u;
            goto label_201e84;
        }
    }
    ctx->pc = 0x201E74u;
    // 0x201e74: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x201e74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x201e78: 0xe440039c  swc1        $f0, 0x39C($v0)
    ctx->pc = 0x201e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 924), bits); }
    // 0x201e7c: 0xc0828ae  jal         func_20A2B8
    ctx->pc = 0x201E7Cu;
    SET_GPR_U32(ctx, 31, 0x201E84u);
    ctx->pc = 0x201E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E7Cu;
    // 0x201e80: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A2B8u, 0x201E7Cu, 0x201E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E84u;
label_201e84:
    // 0x201e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201e88: 0x3e00008  jr          $ra
    ctx->pc = 0x201E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E88u;
        // 0x201e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201E90u;
}
