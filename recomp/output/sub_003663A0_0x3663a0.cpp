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

// Function: sub_003663A0
// Address: 0x3663a0 - 0x366418
void sub_003663A0_0x3663a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003663A0_0x3663a0");
#endif

    ctx->pc = 0x3663a0u;

    // 0x3663a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3663a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3663a4: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3663A4u;
    {
        const bool branch_taken_0x3663a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3663a4) {
            ctx->pc = 0x366410u;
            goto label_366410;
        }
    }
    ctx->pc = 0x3663ACu;
    // 0x3663ac: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3663ACu;
    {
        const bool branch_taken_0x3663ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3663B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3663ACu;
        // 0x3663b0: 0x3c06005c  lui         $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3663ac) {
            ctx->pc = 0x366410u;
            goto label_366410;
        }
    }
    ctx->pc = 0x3663B4u;
    // 0x3663b4: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x3663b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x3663b8: 0xacc0dc00  sw          $zero, -0x2400($a2)
    ctx->pc = 0x3663b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294958080), GPR_U32(ctx, 0));
    // 0x3663bc: 0x24c2dc00  addiu       $v0, $a2, -0x2400
    ctx->pc = 0x3663bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958080));
    // 0x3663c0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3663c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3663c4: 0x24e3dc10  addiu       $v1, $a3, -0x23F0
    ctx->pc = 0x3663c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958096));
    // 0x3663c8: 0xace0dc10  sw          $zero, -0x23F0($a3)
    ctx->pc = 0x3663c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BDC10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC10u, _value); } while (0);
    // 0x3663cc: 0x3c08005c  lui         $t0, 0x5C
    ctx->pc = 0x3663ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)92 << 16));
    // 0x3663d0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3663d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BDC1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC1Cu, _value); } while (0);
    // 0x3663d4: 0x2504dc20  addiu       $a0, $t0, -0x23E0
    ctx->pc = 0x3663d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958112));
    // 0x3663d8: 0xad00dc20  sw          $zero, -0x23E0($t0)
    ctx->pc = 0x3663d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BDC20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC20u, _value); } while (0);
    // 0x3663dc: 0x3c09005c  lui         $t1, 0x5C
    ctx->pc = 0x3663dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)92 << 16));
    // 0x3663e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3663e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BDC2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC2Cu, _value); } while (0);
    // 0x3663e4: 0x2525dc30  addiu       $a1, $t1, -0x23D0
    ctx->pc = 0x3663e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958128));
    // 0x3663e8: 0xad20dc30  sw          $zero, -0x23D0($t1)
    ctx->pc = 0x3663e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BDC30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC30u, _value); } while (0);
    // 0x3663ec: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x3663ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BDC3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC3Cu, _value); } while (0);
    // 0x3663f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3663f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3663f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3663f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3663f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3663f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BDC14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC14u, _value); } while (0);
    // 0x3663fc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3663fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BDC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC18u, _value); } while (0);
    // 0x366400: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x366400u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BDC24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC24u, _value); } while (0);
    // 0x366404: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x366404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BDC28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC28u, _value); } while (0);
    // 0x366408: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x366408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BDC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC34u, _value); } while (0);
    // 0x36640c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x36640cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5BDC38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC38u, _value); } while (0);
label_366410:
    // 0x366410: 0x3e00008  jr          $ra
    ctx->pc = 0x366410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366418u;
}
