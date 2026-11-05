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

// Function: sub_002CE2A0
// Address: 0x2ce2a0 - 0x2ce310
void sub_002CE2A0_0x2ce2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE2A0_0x2ce2a0");
#endif

    switch (ctx->pc) {
        case 0x2ce2f0u: goto label_2ce2f0;
        case 0x2ce2fcu: goto label_2ce2fc;
        default: break;
    }

    ctx->pc = 0x2ce2a0u;

    // 0x2ce2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce2a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ce2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce2a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce2ac: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x2ce2acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x2ce2b0: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x2ce2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x2ce2b4: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x2ce2b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x2ce2b8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ce2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ce2bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2ce2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2ce2c0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2ce2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2ce2c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ce2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ce2c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ce2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ce2cc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2ce2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2ce2d0: 0xa0472c3c  sb          $a3, 0x2C3C($v0)
    ctx->pc = 0x2ce2d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x482C3Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482C3Cu, _value); } while (0);
    // 0x2ce2d4: 0xad002c24  sw          $zero, 0x2C24($t0)
    ctx->pc = 0x2ce2d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C24u, _value); } while (0);
    // 0x2ce2d8: 0xa1272c2c  sb          $a3, 0x2C2C($t1)
    ctx->pc = 0x2ce2d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x482C2Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482C2Cu, _value); } while (0);
    // 0x2ce2dc: 0xac602c30  sw          $zero, 0x2C30($v1)
    ctx->pc = 0x2ce2dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C30u, _value); } while (0);
    // 0x2ce2e0: 0xaca02c34  sw          $zero, 0x2C34($a1)
    ctx->pc = 0x2ce2e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C34u, _value); } while (0);
    // 0x2ce2e4: 0xacc02c38  sw          $zero, 0x2C38($a2)
    ctx->pc = 0x2ce2e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C38u, _value); } while (0);
    // 0x2ce2e8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2CE2E8u;
    SET_GPR_U32(ctx, 31, 0x2CE2F0u);
    ctx->pc = 0x2CE2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE2E8u;
    // 0x2ce2ec: 0xae002c28  sw          $zero, 0x2C28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 11304), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2CE2E8u, 0x2CE2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE2F0u;
label_2ce2f0:
    // 0x2ce2f0: 0xae022c28  sw          $v0, 0x2C28($s0)
    ctx->pc = 0x2ce2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11304), GPR_U32(ctx, 2));
    // 0x2ce2f4: 0xc0b313e  jal         func_2CC4F8
    ctx->pc = 0x2CE2F4u;
    SET_GPR_U32(ctx, 31, 0x2CE2FCu);
    ctx->pc = 0x2CE2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE2F4u;
    // 0x2ce2f8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4F8u, 0x2CE2F4u, 0x2CE2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE2FCu;
label_2ce2fc:
    // 0x2ce2fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce300: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ce300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce304: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE304u;
        // 0x2ce308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE30Cu;
    // 0x2ce30c: 0x0  nop
    ctx->pc = 0x2ce30cu;
    // NOP
    ctx->pc = 0x2ce310u;
}
