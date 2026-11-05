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

// Function: sub_0017F960
// Address: 0x17f960 - 0x17f9d8
void sub_0017F960_0x17f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F960_0x17f960");
#endif

    switch (ctx->pc) {
        case 0x17f998u: goto label_17f998;
        default: break;
    }

    ctx->pc = 0x17f960u;

    // 0x17f960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17f968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17f96c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f970: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17f974: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x17F974u;
    {
        const bool branch_taken_0x17f974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f974) {
            ctx->pc = 0x17F978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F974u;
            // 0x17f978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F9C8u;
            goto label_17f9c8;
        }
    }
    ctx->pc = 0x17F97Cu;
    // 0x17f97c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f980: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17f980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f984: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x17f984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x17f988: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x17f988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x17f98c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x17f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x17f990: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x17F990u;
    SET_GPR_U32(ctx, 31, 0x17F998u);
    ctx->pc = 0x17F994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F990u;
    // 0x17f994: 0xa2020411  sb          $v0, 0x411($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1041), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x17F990u, 0x17F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F998u;
label_17f998:
    // 0x17f998: 0x92030411  lbu         $v1, 0x411($s0)
    ctx->pc = 0x17f998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1041)));
    // 0x17f99c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x17f99cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x17f9a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17F9A0u;
    {
        const bool branch_taken_0x17f9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f9a0) {
            ctx->pc = 0x17F9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F9A0u;
            // 0x17f9a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F9A8u;
            goto label_17f9a8;
        }
    }
    ctx->pc = 0x17F9A8u;
label_17f9a8:
    // 0x17f9a8: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x17f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
    // 0x17f9ac: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x17f9acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f9b0: 0xae000414  sw          $zero, 0x414($s0)
    ctx->pc = 0x17f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 0));
    // 0x17f9b4: 0xae000418  sw          $zero, 0x418($s0)
    ctx->pc = 0x17f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 0));
    // 0x17f9b8: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x17f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
    // 0x17f9bc: 0x2010  mfhi        $a0
    ctx->pc = 0x17f9bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x17f9c0: 0xa2040412  sb          $a0, 0x412($s0)
    ctx->pc = 0x17f9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1042), (uint8_t)GPR_U32(ctx, 4));
    // 0x17f9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f9c8:
    // 0x17f9c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17f9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x17F9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9CCu;
        // 0x17f9d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F9D4u;
    // 0x17f9d4: 0x0  nop
    ctx->pc = 0x17f9d4u;
    // NOP
    ctx->pc = 0x17f9d8u;
}
