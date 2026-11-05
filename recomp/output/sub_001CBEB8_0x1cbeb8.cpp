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

// Function: sub_001CBEB8
// Address: 0x1cbeb8 - 0x1cbf18
void sub_001CBEB8_0x1cbeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBEB8_0x1cbeb8");
#endif

    switch (ctx->pc) {
        case 0x1cbed4u: goto label_1cbed4;
        case 0x1cbee4u: goto label_1cbee4;
        default: break;
    }

    ctx->pc = 0x1cbeb8u;

    // 0x1cbeb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cbeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cbebc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cbebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cbec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cbec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cbec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbec8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cbec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cbecc: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1CBECCu;
    SET_GPR_U32(ctx, 31, 0x1CBED4u);
    ctx->pc = 0x1CBED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBECCu;
    // 0x1cbed0: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1CBECCu, 0x1CBED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBED4u;
label_1cbed4:
    // 0x1cbed4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CBED4u;
    {
        const bool branch_taken_0x1cbed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBED4u;
        // 0x1cbed8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbed4) {
            ctx->pc = 0x1CBF00u;
            goto label_1cbf00;
        }
    }
    ctx->pc = 0x1CBEDCu;
    // 0x1cbedc: 0xc08951c  jal         func_225470
    ctx->pc = 0x1CBEDCu;
    SET_GPR_U32(ctx, 31, 0x1CBEE4u);
    ctx->pc = 0x1CBEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBEDCu;
    // 0x1cbee0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1CBEDCu, 0x1CBEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBEE4u;
label_1cbee4:
    // 0x1cbee4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cbee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbee8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cbeec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1cbeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1cbef0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBEF0u;
    {
        const bool branch_taken_0x1cbef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbef0) {
            ctx->pc = 0x1CBEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBEF0u;
            // 0x1cbef4: 0xc4600060  lwc1        $f0, 0x60($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBF04u;
            goto label_1cbf04;
        }
    }
    ctx->pc = 0x1CBEF8u;
    // 0x1cbef8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBEF8u;
    {
        const bool branch_taken_0x1cbef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEF8u;
        // 0x1cbefc: 0xc4600064  lwc1        $f0, 0x64($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbef8) {
            ctx->pc = 0x1CBF04u;
            goto label_1cbf04;
        }
    }
    ctx->pc = 0x1CBF00u;
label_1cbf00:
    // 0x1cbf00: 0xc440cf50  lwc1        $f0, -0x30B0($v0)
    ctx->pc = 0x1cbf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbf04:
    // 0x1cbf04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbf04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbf08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cbf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cbf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF0Cu;
        // 0x1cbf10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBF14u;
    // 0x1cbf14: 0x0  nop
    ctx->pc = 0x1cbf14u;
    // NOP
    ctx->pc = 0x1cbf18u;
}
