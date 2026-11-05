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

// Function: sub_002FFD08
// Address: 0x2ffd08 - 0x2ffd60
void sub_002FFD08_0x2ffd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFD08_0x2ffd08");
#endif

    ctx->pc = 0x2ffd08u;

    // 0x2ffd08: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2ffd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2ffd0c: 0x24465870  addiu       $a2, $v0, 0x5870
    ctx->pc = 0x2ffd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x2ffd10: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2ffd10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x595874u));
    // 0x2ffd14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFD14u;
    {
        const bool branch_taken_0x2ffd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd14) {
            ctx->pc = 0x2FFD28u;
            goto label_2ffd28;
        }
    }
    ctx->pc = 0x2FFD1Cu;
    // 0x2ffd1c: 0x90c202f1  lbu         $v0, 0x2F1($a2)
    ctx->pc = 0x2ffd1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 753)));
    // 0x2ffd20: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FFD20u;
    {
        const bool branch_taken_0x2ffd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd20) {
            ctx->pc = 0x2FFD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFD20u;
            // 0x2ffd24: 0xacc00018  sw          $zero, 0x18($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFD28u;
            goto label_2ffd28;
        }
    }
    ctx->pc = 0x2FFD28u;
label_2ffd28:
    // 0x2ffd28: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ffd28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ffd2c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ffd2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ffd30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffd34: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ffd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ffd38: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x2ffd38u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x2ffd3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ffd3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffd40: 0x0  nop
    ctx->pc = 0x2ffd40u;
    // NOP
    // 0x2ffd44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ffd44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ffd48: 0xe4cc0014  swc1        $f12, 0x14($a2)
    ctx->pc = 0x2ffd48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2ffd4c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2ffd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2ffd50: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x2ffd50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x2ffd54: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x2ffd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2ffd58: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD58u;
        // 0x2ffd5c: 0xa0a311be  sb          $v1, 0x11BE($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4542), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFD60u;
}
