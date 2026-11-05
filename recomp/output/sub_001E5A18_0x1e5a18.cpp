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

// Function: sub_001E5A18
// Address: 0x1e5a18 - 0x1e5ab0
void sub_001E5A18_0x1e5a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5A18_0x1e5a18");
#endif

    switch (ctx->pc) {
        case 0x1e5a40u: goto label_1e5a40;
        default: break;
    }

    ctx->pc = 0x1e5a18u;

    // 0x1e5a18: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1e5a18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1e5a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a20: 0x8cc291e0  lw          $v0, -0x6E20($a2)
    ctx->pc = 0x1e5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91E0u));
    // 0x1e5a24: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E5A24u;
    {
        const bool branch_taken_0x1e5a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A24u;
        // 0x1e5a28: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a24) {
            ctx->pc = 0x1E5A98u;
            goto label_1e5a98;
        }
    }
    ctx->pc = 0x1E5A2Cu;
    // 0x1e5a2c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e5a30: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1e5a30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1e5a34: 0xc440d93c  lwc1        $f0, -0x26C4($v0)
    ctx->pc = 0x1e5a34u;
    { uint32_t bits = FAST_READ32(0x45D93Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5a38: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e5a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5a3c: 0x8d0491dc  lw          $a0, -0x6E24($t0)
    ctx->pc = 0x1e5a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F91DCu));
label_1e5a40:
    // 0x1e5a40: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e5a44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e5a48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5a4c: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x1e5a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x1e5a50: 0x7c600010  sq          $zero, 0x10($v1)
    ctx->pc = 0x1e5a50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 0));
    // 0x1e5a54: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x1e5a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x1e5a58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e5a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e5a5c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1e5a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x1e5a60: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1e5a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1e5a64: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x1e5a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x1e5a68: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1e5a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1e5a6c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1e5a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x1e5a70: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1e5a70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1e5a74: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1e5a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1e5a78: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x1e5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x1e5a7c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1e5a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1e5a80: 0xac670044  sw          $a3, 0x44($v1)
    ctx->pc = 0x1e5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 7));
    // 0x1e5a84: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x1e5a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x1e5a88: 0x8cc291e0  lw          $v0, -0x6E20($a2)
    ctx->pc = 0x1e5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939104)));
    // 0x1e5a8c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e5a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5a90: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1E5A90u;
    {
        const bool branch_taken_0x1e5a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A90u;
        // 0x1e5a94: 0x8d0491dc  lw          $a0, -0x6E24($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a90) {
            ctx->pc = 0x1E5A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5a40;
        }
    }
    ctx->pc = 0x1E5A98u;
label_1e5a98:
    // 0x1e5a98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e5a9c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e5a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e5aa0: 0xad2091e0  sw          $zero, -0x6E20($t1)
    ctx->pc = 0x1e5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294939104), GPR_U32(ctx, 0));
    // 0x1e5aa4: 0xac4091e4  sw          $zero, -0x6E1C($v0)
    ctx->pc = 0x1e5aa4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F91E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F91E4u, _value); } while (0);
    // 0x1e5aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AA8u;
        // 0x1e5aac: 0xac6091e8  sw          $zero, -0x6E18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294939112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5AB0u;
}
