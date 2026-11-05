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

// Function: sub_002813C0
// Address: 0x2813c0 - 0x281428
void sub_002813C0_0x2813c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002813C0_0x2813c0");
#endif

    switch (ctx->pc) {
        case 0x2813d0u: goto label_2813d0;
        case 0x2813dcu: goto label_2813dc;
        default: break;
    }

    ctx->pc = 0x2813c0u;

    // 0x2813c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2813c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2813c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2813c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2813c8: 0xc0a033c  jal         func_280CF0
    ctx->pc = 0x2813C8u;
    SET_GPR_U32(ctx, 31, 0x2813D0u);
    ctx->pc = 0x2813CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2813C8u;
    // 0x2813cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CF0u, 0x2813C8u, 0x2813D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2813D0u;
label_2813d0:
    // 0x2813d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2813d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2813d4: 0xc075ce0  jal         func_1D7380
    ctx->pc = 0x2813D4u;
    SET_GPR_U32(ctx, 31, 0x2813DCu);
    ctx->pc = 0x2813D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2813D4u;
    // 0x2813d8: 0x8c442bb8  lw          $a0, 0x2BB8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7380u, 0x2813D4u, 0x2813DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2813DCu;
label_2813dc:
    // 0x2813dc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2813dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2813e0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2813e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2813e4: 0x2484f130  addiu       $a0, $a0, -0xED0
    ctx->pc = 0x2813e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963504));
    // 0x2813e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2813e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2813ec: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x2813ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BF1A8u));
    // 0x2813f0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2813f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2813f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2813f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2813f8: 0xad068ec8  sw          $a2, -0x7138($t0)
    ctx->pc = 0x2813f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3F8EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8EC8u, _value); } while (0);
    // 0x2813fc: 0xace3a308  sw          $v1, -0x5CF8($a3)
    ctx->pc = 0x2813fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FA308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA308u, _value); } while (0);
    // 0x281400: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x281400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x281404: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x281404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x281408: 0xac820078  sw          $v0, 0x78($a0)
    ctx->pc = 0x281408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BF1A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BF1A8u, _value); } while (0);
    // 0x28140c: 0x24a5cb28  addiu       $a1, $a1, -0x34D8
    ctx->pc = 0x28140cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953768));
    // 0x281410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281414: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x281414u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66CB38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CB38u, _value); } while (0);
    // 0x281418: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x281418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66CB30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66CB30u, _value); } while (0);
    // 0x28141c: 0x3e00008  jr          $ra
    ctx->pc = 0x28141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28141Cu;
        // 0x281420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281424u;
    // 0x281424: 0x0  nop
    ctx->pc = 0x281424u;
    // NOP
    ctx->pc = 0x281428u;
}
