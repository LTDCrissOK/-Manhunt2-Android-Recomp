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

// Function: sub_0024ADF0
// Address: 0x24adf0 - 0x24ae50
void sub_0024ADF0_0x24adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024ADF0_0x24adf0");
#endif

    ctx->pc = 0x24adf0u;

    // 0x24adf0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x24adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x24adf4: 0x24445870  addiu       $a0, $v0, 0x5870
    ctx->pc = 0x24adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x24adf8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x595874u));
    // 0x24adfc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24ADFCu;
    {
        const bool branch_taken_0x24adfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADFCu;
        // 0x24ae00: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24adfc) {
            ctx->pc = 0x24AE14u;
            goto label_24ae14;
        }
    }
    ctx->pc = 0x24AE04u;
    // 0x24ae04: 0x908202f1  lbu         $v0, 0x2F1($a0)
    ctx->pc = 0x24ae04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 753)));
    // 0x24ae08: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x24AE08u;
    {
        const bool branch_taken_0x24ae08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ae08) {
            ctx->pc = 0x24AE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AE08u;
            // 0x24ae0c: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AE14u;
            goto label_24ae14;
        }
    }
    ctx->pc = 0x24AE10u;
    // 0x24ae10: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x24ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_24ae14:
    // 0x24ae14: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x24ae14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x24ae18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24ae18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24ae1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ae1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ae20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24ae20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ae24: 0x0  nop
    ctx->pc = 0x24ae24u;
    // NOP
    // 0x24ae28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24ae28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24ae2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ae30: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x24ae30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x24ae34: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x24ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x24ae38: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x24ae38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x24ae3c: 0x3e00008  jr          $ra
    ctx->pc = 0x24AE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE3Cu;
        // 0x24ae40: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AE44u;
    // 0x24ae44: 0x0  nop
    ctx->pc = 0x24ae44u;
    // NOP
    // 0x24ae48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x24ae48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24ae4c: 0x0  nop
    ctx->pc = 0x24ae4cu;
    // NOP
    ctx->pc = 0x24ae50u;
}
