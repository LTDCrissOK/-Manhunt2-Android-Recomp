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

// Function: sub_003186F0
// Address: 0x3186f0 - 0x318740
void sub_003186F0_0x3186f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003186F0_0x3186f0");
#endif

    switch (ctx->pc) {
        case 0x318718u: goto label_318718;
        case 0x318720u: goto label_318720;
        default: break;
    }

    ctx->pc = 0x3186f0u;

    // 0x3186f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3186f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3186f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3186f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3186f8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3186f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3186fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3186fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x318700: 0x9202b44c  lbu         $v0, -0x4BB4($s0)
    ctx->pc = 0x318700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FB44Cu));
    // 0x318704: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x318704u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x318708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x318708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31870c: 0xa200b44c  sb          $zero, -0x4BB4($s0)
    ctx->pc = 0x31870cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FB44Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FB44Cu, _value); } while (0);
    // 0x318710: 0xc0c3dc2  jal         func_30F708
    ctx->pc = 0x318710u;
    SET_GPR_U32(ctx, 31, 0x318718u);
    ctx->pc = 0x318714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318710u;
    // 0x318714: 0xa2228d50  sb          $v0, -0x72B0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294937936), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x318710u, 0x318718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318718u;
label_318718:
    // 0x318718: 0xc0c4418  jal         func_311060
    ctx->pc = 0x318718u;
    SET_GPR_U32(ctx, 31, 0x318720u);
    ctx->pc = 0x31871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318718u;
    // 0x31871c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311060u, 0x318718u, 0x318720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318720u;
label_318720:
    // 0x318720: 0x92228d50  lbu         $v0, -0x72B0($s1)
    ctx->pc = 0x318720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294937936)));
    // 0x318724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x318724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x318728: 0xa202b44c  sb          $v0, -0x4BB4($s0)
    ctx->pc = 0x318728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294947916), (uint8_t)GPR_U32(ctx, 2));
    // 0x31872c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31872cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x318730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318734: 0x3e00008  jr          $ra
    ctx->pc = 0x318734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318734u;
        // 0x318738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31873Cu;
    // 0x31873c: 0x0  nop
    ctx->pc = 0x31873cu;
    // NOP
    ctx->pc = 0x318740u;
}
