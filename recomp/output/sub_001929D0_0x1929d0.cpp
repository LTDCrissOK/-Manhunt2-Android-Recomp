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

// Function: sub_001929D0
// Address: 0x1929d0 - 0x192a48
void sub_001929D0_0x1929d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001929D0_0x1929d0");
#endif

    ctx->pc = 0x1929d0u;

    // 0x1929d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1929d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1929d4: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1929D4u;
    {
        const bool branch_taken_0x1929d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1929d4) {
            ctx->pc = 0x192A40u;
            goto label_192a40;
        }
    }
    ctx->pc = 0x1929DCu;
    // 0x1929dc: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1929DCu;
    {
        const bool branch_taken_0x1929dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929DCu;
        // 0x1929e0: 0x3c060049  lui         $a2, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929dc) {
            ctx->pc = 0x192A40u;
            goto label_192a40;
        }
    }
    ctx->pc = 0x1929E4u;
    // 0x1929e4: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x1929e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x1929e8: 0xacc0ef40  sw          $zero, -0x10C0($a2)
    ctx->pc = 0x1929e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963008), GPR_U32(ctx, 0));
    // 0x1929ec: 0x24c2ef40  addiu       $v0, $a2, -0x10C0
    ctx->pc = 0x1929ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963008));
    // 0x1929f0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1929f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1929f4: 0x24e3ef50  addiu       $v1, $a3, -0x10B0
    ctx->pc = 0x1929f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963024));
    // 0x1929f8: 0xace0ef50  sw          $zero, -0x10B0($a3)
    ctx->pc = 0x1929f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EF50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF50u, _value); } while (0);
    // 0x1929fc: 0x3c080049  lui         $t0, 0x49
    ctx->pc = 0x1929fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)73 << 16));
    // 0x192a00: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x192a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EF5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF5Cu, _value); } while (0);
    // 0x192a04: 0x2504ef60  addiu       $a0, $t0, -0x10A0
    ctx->pc = 0x192a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963040));
    // 0x192a08: 0xad00ef60  sw          $zero, -0x10A0($t0)
    ctx->pc = 0x192a08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF60u, _value); } while (0);
    // 0x192a0c: 0x3c090049  lui         $t1, 0x49
    ctx->pc = 0x192a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)73 << 16));
    // 0x192a10: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x192a10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EF6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF6Cu, _value); } while (0);
    // 0x192a14: 0x2525ef70  addiu       $a1, $t1, -0x1090
    ctx->pc = 0x192a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963056));
    // 0x192a18: 0xad20ef70  sw          $zero, -0x1090($t1)
    ctx->pc = 0x192a18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EF70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF70u, _value); } while (0);
    // 0x192a1c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x192a1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EF7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF7Cu, _value); } while (0);
    // 0x192a20: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x192a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x192a24: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x192a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x192a28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x192a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EF54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF54u, _value); } while (0);
    // 0x192a2c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x192a2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EF58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF58u, _value); } while (0);
    // 0x192a30: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x192a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EF64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF64u, _value); } while (0);
    // 0x192a34: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x192a34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EF68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF68u, _value); } while (0);
    // 0x192a38: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x192a38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EF74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF74u, _value); } while (0);
    // 0x192a3c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x192a3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x48EF78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48EF78u, _value); } while (0);
label_192a40:
    // 0x192a40: 0x3e00008  jr          $ra
    ctx->pc = 0x192A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192A48u;
}
