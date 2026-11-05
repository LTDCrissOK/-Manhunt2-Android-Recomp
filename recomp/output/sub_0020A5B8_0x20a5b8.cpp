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

// Function: sub_0020A5B8
// Address: 0x20a5b8 - 0x20a608
void sub_0020A5B8_0x20a5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A5B8_0x20a5b8");
#endif

    ctx->pc = 0x20a5b8u;

    // 0x20a5b8: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x20a5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x20a5bc: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x20a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x20a5c0: 0x24a2e480  addiu       $v0, $a1, -0x1B80
    ctx->pc = 0x20a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960256));
    // 0x20a5c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a5c8: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x20a5c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x49E486u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x49E486u, _value); } while (0);
    // 0x20a5cc: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x20a5ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20a5d0: 0xa0a4e480  sb          $a0, -0x1B80($a1)
    ctx->pc = 0x20a5d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x49E480u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x49E480u, _value); } while (0);
    // 0x20a5d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20a5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a5d8: 0x24075622  addiu       $a3, $zero, 0x5622
    ctx->pc = 0x20a5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22050));
    // 0x20a5dc: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x20a5dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x20a5e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20a5e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a5e4: 0x240a1f40  addiu       $t2, $zero, 0x1F40
    ctx->pc = 0x20a5e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x20a5e8: 0xa0460008  sb          $a2, 0x8($v0)
    ctx->pc = 0x20a5e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x49E488u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x49E488u, _value); } while (0);
    // 0x20a5ec: 0xa447000a  sh          $a3, 0xA($v0)
    ctx->pc = 0x20a5ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x49E48Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x49E48Au, _value); } while (0);
    // 0x20a5f0: 0xa448000c  sh          $t0, 0xC($v0)
    ctx->pc = 0x20a5f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x49E48Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x49E48Cu, _value); } while (0);
    // 0x20a5f4: 0xa0490002  sb          $t1, 0x2($v0)
    ctx->pc = 0x20a5f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x49E482u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x49E482u, _value); } while (0);
    // 0x20a5f8: 0xa04b0003  sb          $t3, 0x3($v0)
    ctx->pc = 0x20a5f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x49E483u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x49E483u, _value); } while (0);
    // 0x20a5fc: 0xa44a0004  sh          $t2, 0x4($v0)
    ctx->pc = 0x20a5fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x49E484u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x49E484u, _value); } while (0);
    // 0x20a600: 0x3e00008  jr          $ra
    ctx->pc = 0x20A600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A600u;
        // 0x20a604: 0xa04b0009  sb          $t3, 0x9($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A608u;
}
