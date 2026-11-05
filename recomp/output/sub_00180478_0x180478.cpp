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

// Function: sub_00180478
// Address: 0x180478 - 0x180500
void sub_00180478_0x180478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180478_0x180478");
#endif

    switch (ctx->pc) {
        case 0x180488u: goto label_180488;
        case 0x180490u: goto label_180490;
        default: break;
    }

    ctx->pc = 0x180478u;

    // 0x180478: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x180478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18047c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18047cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180480: 0x24472b28  addiu       $a3, $v0, 0x2B28
    ctx->pc = 0x180480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 11048));
    // 0x180484: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x180484u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_180488:
    // 0x180488: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18048c: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x18048cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_180490:
    // 0x180490: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x180490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x180494: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x180494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x180498: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x180498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x18049c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18049cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1804a0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x1804a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1804a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1804A4u;
    {
        const bool branch_taken_0x1804a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1804A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804A4u;
        // 0x1804a8: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804a4) {
            ctx->pc = 0x180490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180490;
        }
    }
    ctx->pc = 0x1804ACu;
    // 0x1804ac: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1804acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1804b0: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1804b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1804b4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1804B4u;
    {
        const bool branch_taken_0x1804b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1804B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804B4u;
        // 0x1804b8: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1804b4) {
            ctx->pc = 0x180488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180488;
        }
    }
    ctx->pc = 0x1804BCu;
    // 0x1804bc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1804bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1804c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1804c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1804c4: 0xa04407cd  sb          $a0, 0x7CD($v0)
    ctx->pc = 0x1804c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3F07CDu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F07CDu, _value); } while (0);
    // 0x1804c8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1804c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1804cc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1804ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1804d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1804d4: 0xac6507c8  sw          $a1, 0x7C8($v1)
    ctx->pc = 0x1804d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3F07C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F07C8u, _value); } while (0);
    // 0x1804d8: 0xa04007cc  sb          $zero, 0x7CC($v0)
    ctx->pc = 0x1804d8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F07CCu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F07CCu, _value); } while (0);
    // 0x1804dc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1804dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1804e0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1804e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1804e4: 0xac6007d0  sw          $zero, 0x7D0($v1)
    ctx->pc = 0x1804e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F07D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F07D0u, _value); } while (0);
    // 0x1804e8: 0xa04007d4  sb          $zero, 0x7D4($v0)
    ctx->pc = 0x1804e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F07D4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F07D4u, _value); } while (0);
    // 0x1804ec: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1804ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1804f0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1804f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1804f4: 0xa06007d5  sb          $zero, 0x7D5($v1)
    ctx->pc = 0x1804f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F07D5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F07D5u, _value); } while (0);
    // 0x1804f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1804F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1804FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804F8u;
        // 0x1804fc: 0xac4007d8  sw          $zero, 0x7D8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1804F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180500u;
}
