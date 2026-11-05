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

// Function: sub_00373B00
// Address: 0x373b00 - 0x373b58
void sub_00373B00_0x373b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373B00_0x373b00");
#endif

    switch (ctx->pc) {
        case 0x373b18u: goto label_373b18;
        default: break;
    }

    ctx->pc = 0x373b00u;

    // 0x373b00: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x373b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373b08: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x373b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x373b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373b10: 0xc0ded16  jal         func_37B458
    ctx->pc = 0x373B10u;
    SET_GPR_U32(ctx, 31, 0x373B18u);
    ctx->pc = 0x373B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B10u;
    // 0x373b14: 0x24845b40  addiu       $a0, $a0, 0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B458u, 0x373B10u, 0x373B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373B18u;
label_373b18:
    // 0x373b18: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x373b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x373b1c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x373b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x373b20: 0x8ca3cd00  lw          $v1, -0x3300($a1)
    ctx->pc = 0x373b20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x373b24: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x373b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x373b28: 0x8cc2cd34  lw          $v0, -0x32CC($a2)
    ctx->pc = 0x373b28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD34u));
    // 0x373b2c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x373b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x373b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373b34: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x373b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x373b38: 0xac80cd18  sw          $zero, -0x32E8($a0)
    ctx->pc = 0x373b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FCD18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD18u, _value); } while (0);
    // 0x373b3c: 0xaca3cd00  sw          $v1, -0x3300($a1)
    ctx->pc = 0x373b3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FCD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD00u, _value); } while (0);
    // 0x373b40: 0xacc2cd34  sw          $v0, -0x32CC($a2)
    ctx->pc = 0x373b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCD34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD34u, _value); } while (0);
    // 0x373b44: 0x3e00008  jr          $ra
    ctx->pc = 0x373B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373B44u;
        // 0x373b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373B4Cu;
    // 0x373b4c: 0x0  nop
    ctx->pc = 0x373b4cu;
    // NOP
    // 0x373b50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x373b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x373b54: 0x0  nop
    ctx->pc = 0x373b54u;
    // NOP
    ctx->pc = 0x373b58u;
}
