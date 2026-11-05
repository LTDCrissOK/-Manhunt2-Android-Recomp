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

// Function: sub_0027D670
// Address: 0x27d670 - 0x27d6d8
void sub_0027D670_0x27d670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D670_0x27d670");
#endif

    switch (ctx->pc) {
        case 0x27d6ccu: goto label_27d6cc;
        default: break;
    }

    ctx->pc = 0x27d670u;

    // 0x27d670: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27d670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27d674: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x27d674u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d67c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27d67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d680: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x27d680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x27d684: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x27d684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x27d688: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x27d688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x27d68c: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x27d68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x27d690: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x27d690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x27d694: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x27d694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x27d698: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x27d698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x27d69c: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x27d69cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27d6a0: 0xe7ae0054  swc1        $f14, 0x54($sp)
    ctx->pc = 0x27d6a0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27d6a4: 0xe7b00058  swc1        $f16, 0x58($sp)
    ctx->pc = 0x27d6a4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27d6a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D6A8u;
    {
        const bool branch_taken_0x27d6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6A8u;
        // 0x27d6ac: 0xe7b2005c  swc1        $f18, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d6a8) {
            ctx->pc = 0x27D6CCu;
            goto label_27d6cc;
        }
    }
    ctx->pc = 0x27D6B0u;
    // 0x27d6b0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x27d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27d6b4: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x27d6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27d6b8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27d6bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27d6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6c0: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x27d6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27d6c4: 0xc09f4ac  jal         func_27D2B0
    ctx->pc = 0x27D6C4u;
    SET_GPR_U32(ctx, 31, 0x27D6CCu);
    ctx->pc = 0x27D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D6C4u;
    // 0x27d6c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D2B0u, 0x27D6C4u, 0x27D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6CCu;
label_27d6cc:
    // 0x27d6cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27d6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x27D6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D6D0u;
        // 0x27d6d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D6D8u;
}
