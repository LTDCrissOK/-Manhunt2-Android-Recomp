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

// Function: sub_00369530
// Address: 0x369530 - 0x369598
void sub_00369530_0x369530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369530_0x369530");
#endif

    switch (ctx->pc) {
        case 0x36955cu: goto label_36955c;
        default: break;
    }

    ctx->pc = 0x369530u;

    // 0x369530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369534: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x369534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x369538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36953c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36953cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369540: 0x2450ca60  addiu       $s0, $v0, -0x35A0
    ctx->pc = 0x369540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x369544: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x369544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x369548: 0xac43ca60  sw          $v1, -0x35A0($v0)
    ctx->pc = 0x369548u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BCA60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA60u, _value); } while (0);
    // 0x36954c: 0x24046000  addiu       $a0, $zero, 0x6000
    ctx->pc = 0x36954cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x369550: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x369550u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BCA64u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6BCA64u, _value); } while (0);
    // 0x369554: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x369554u;
    SET_GPR_U32(ctx, 31, 0x36955Cu);
    ctx->pc = 0x369558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369554u;
    // 0x369558: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x369554u, 0x36955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36955Cu;
label_36955c:
    // 0x36955c: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x36955cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x369560: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x369560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x369564: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x369564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x369568: 0x24631f00  addiu       $v1, $v1, 0x1F00
    ctx->pc = 0x369568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7936));
    // 0x36956c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x36956cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x369570: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x369570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x369574: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x369574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6C1F48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C1F48u, _value); } while (0);
    // 0x369578: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x369578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x36957c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36957cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369584: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x369584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6C1F08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C1F08u, _value); } while (0);
    // 0x369588: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x369588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6C1F0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C1F0Cu, _value); } while (0);
    // 0x36958c: 0x3e00008  jr          $ra
    ctx->pc = 0x36958Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36958Cu;
        // 0x369590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36958Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369594u;
    // 0x369594: 0x0  nop
    ctx->pc = 0x369594u;
    // NOP
    ctx->pc = 0x369598u;
}
