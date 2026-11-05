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

// Function: sub_002E4F18
// Address: 0x2e4f18 - 0x2e4f80
void sub_002E4F18_0x2e4f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4F18_0x2e4f18");
#endif

    switch (ctx->pc) {
        case 0x2e4f2cu: goto label_2e4f2c;
        default: break;
    }

    ctx->pc = 0x2e4f18u;

    // 0x2e4f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4f20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e4f24: 0xc0a03d4  jal         func_280F50
    ctx->pc = 0x2E4F24u;
    SET_GPR_U32(ctx, 31, 0x2E4F2Cu);
    ctx->pc = 0x2E4F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4F24u;
    // 0x2e4f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F50u, 0x2E4F24u, 0x2E4F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F2Cu;
label_2e4f2c:
    // 0x2e4f2c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2e4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2e4f30: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2e4f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2e4f34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4F34u;
    {
        const bool branch_taken_0x2e4f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F34u;
        // 0x2e4f38: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f34) {
            ctx->pc = 0x2E4F58u;
            goto label_2e4f58;
        }
    }
    ctx->pc = 0x2E4F3Cu;
    // 0x2e4f3c: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x2e4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x2e4f40: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x2e4f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2e4f44: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4F44u;
    {
        const bool branch_taken_0x2e4f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e4f44) {
            ctx->pc = 0x2E4F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4F44u;
            // 0x2e4f48: 0xa20011ba  sb          $zero, 0x11BA($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 4538), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4F5Cu;
            goto label_2e4f5c;
        }
    }
    ctx->pc = 0x2E4F4Cu;
    // 0x2e4f4c: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e4f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2e4f50: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2e4f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2e4f54: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e4f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
label_2e4f58:
    // 0x2e4f58: 0xa20011ba  sb          $zero, 0x11BA($s0)
    ctx->pc = 0x2e4f58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4538), (uint8_t)GPR_U32(ctx, 0));
label_2e4f5c:
    // 0x2e4f5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e4f60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4f64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e4f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4f6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4f70: 0xe4402c48  swc1        $f0, 0x2C48($v0)
    ctx->pc = 0x2e4f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482C48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C48u, _value); } while (0); }
    // 0x2e4f74: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F74u;
        // 0x2e4f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4F7Cu;
    // 0x2e4f7c: 0x0  nop
    ctx->pc = 0x2e4f7cu;
    // NOP
    ctx->pc = 0x2e4f80u;
}
