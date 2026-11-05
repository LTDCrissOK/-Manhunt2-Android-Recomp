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

// Function: sub_001E5AC0
// Address: 0x1e5ac0 - 0x1e5b50
void sub_001E5AC0_0x1e5ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5AC0_0x1e5ac0");
#endif

    switch (ctx->pc) {
        case 0x1e5ae0u: goto label_1e5ae0;
        case 0x1e5af8u: goto label_1e5af8;
        default: break;
    }

    ctx->pc = 0x1e5ac0u;

    // 0x1e5ac0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e5ac4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5ac8: 0x8c6291e0  lw          $v0, -0x6E20($v1)
    ctx->pc = 0x1e5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91E0u));
    // 0x1e5acc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e5accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5ad0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E5AD0u;
    {
        const bool branch_taken_0x1e5ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AD0u;
        // 0x1e5ad4: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ad0) {
            ctx->pc = 0x1E5B48u;
            goto label_1e5b48;
        }
    }
    ctx->pc = 0x1E5AD8u;
    // 0x1e5ad8: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1e5ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1e5adc: 0x8d0391dc  lw          $v1, -0x6E24($t0)
    ctx->pc = 0x1e5adcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91DCu));
label_1e5ae0:
    // 0x1e5ae0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e5ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e5ae4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e5ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5ae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5aec: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e5aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5af0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5AF0u;
    {
        const bool branch_taken_0x1e5af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AF0u;
        // 0x1e5af4: 0x24a70001  addiu       $a3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5af0) {
            ctx->pc = 0x1E5AFCu;
            goto label_1e5afc;
        }
    }
    ctx->pc = 0x1E5AF8u;
label_1e5af8:
    // 0x1e5af8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1e5af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1e5afc:
    // 0x1e5afc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E5AFCu;
    {
        const bool branch_taken_0x1e5afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AFCu;
        // 0x1e5b00: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5afc) {
            ctx->pc = 0x1E5B28u;
            goto label_1e5b28;
        }
    }
    ctx->pc = 0x1E5B04u;
    // 0x1e5b04: 0x8d0291dc  lw          $v0, -0x6E24($t0)
    ctx->pc = 0x1e5b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939100)));
    // 0x1e5b08: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x1e5b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5b0c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1e5b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e5b10: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x1e5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x1e5b14: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e5b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5b18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e5b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5b1c: 0x0  nop
    ctx->pc = 0x1e5b1cu;
    // NOP
    // 0x1e5b20: 0x4502fff5  bc1fl       . + 4 + (-0xB << 2)
    ctx->pc = 0x1E5B20u;
    {
        const bool branch_taken_0x1e5b20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5b20) {
            ctx->pc = 0x1E5B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5B20u;
            // 0x1e5b24: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5af8;
        }
    }
    ctx->pc = 0x1E5B28u;
label_1e5b28:
    // 0x1e5b28: 0x8d0291dc  lw          $v0, -0x6E24($t0)
    ctx->pc = 0x1e5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939100)));
    // 0x1e5b2c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e5b30: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1e5b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1e5b34: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1e5b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b38: 0x8d2291e0  lw          $v0, -0x6E20($t1)
    ctx->pc = 0x1e5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294939104)));
    // 0x1e5b3c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e5b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5b40: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1E5B40u;
    {
        const bool branch_taken_0x1e5b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B40u;
        // 0x1e5b44: 0x8d0391dc  lw          $v1, -0x6E24($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b40) {
            ctx->pc = 0x1E5AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5ae0;
        }
    }
    ctx->pc = 0x1E5B48u;
label_1e5b48:
    // 0x1e5b48: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5B50u;
}
