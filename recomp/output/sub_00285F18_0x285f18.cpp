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

// Function: sub_00285F18
// Address: 0x285f18 - 0x285f78
void sub_00285F18_0x285f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285F18_0x285f18");
#endif

    ctx->pc = 0x285f18u;

    // 0x285f18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x285f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x285f1c: 0x2442aff0  addiu       $v0, $v0, -0x5010
    ctx->pc = 0x285f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
    // 0x285f20: 0xac47005c  sw          $a3, 0x5C($v0)
    ctx->pc = 0x285f20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BB04Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB04Cu, _value); } while (0);
    // 0x285f24: 0xac440050  sw          $a0, 0x50($v0)
    ctx->pc = 0x285f24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BB040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB040u, _value); } while (0);
    // 0x285f28: 0xac450054  sw          $a1, 0x54($v0)
    ctx->pc = 0x285f28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BB044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB044u, _value); } while (0);
    // 0x285f2c: 0xac460058  sw          $a2, 0x58($v0)
    ctx->pc = 0x285f2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BB048u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB048u, _value); } while (0);
    // 0x285f30: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x285f30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BB010u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB010u, _value); } while (0);
    // 0x285f34: 0xac450024  sw          $a1, 0x24($v0)
    ctx->pc = 0x285f34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BB014u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB014u, _value); } while (0);
    // 0x285f38: 0xac460028  sw          $a2, 0x28($v0)
    ctx->pc = 0x285f38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BB018u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB018u, _value); } while (0);
    // 0x285f3c: 0xac47002c  sw          $a3, 0x2C($v0)
    ctx->pc = 0x285f3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BB01Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB01Cu, _value); } while (0);
    // 0x285f40: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x285f40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BB020u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB020u, _value); } while (0);
    // 0x285f44: 0xac450034  sw          $a1, 0x34($v0)
    ctx->pc = 0x285f44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BB024u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB024u, _value); } while (0);
    // 0x285f48: 0xac460038  sw          $a2, 0x38($v0)
    ctx->pc = 0x285f48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BB028u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB028u, _value); } while (0);
    // 0x285f4c: 0xac47003c  sw          $a3, 0x3C($v0)
    ctx->pc = 0x285f4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BB02Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB02Cu, _value); } while (0);
    // 0x285f50: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x285f50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BB030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB030u, _value); } while (0);
    // 0x285f54: 0xac450044  sw          $a1, 0x44($v0)
    ctx->pc = 0x285f54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BB034u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB034u, _value); } while (0);
    // 0x285f58: 0xac460048  sw          $a2, 0x48($v0)
    ctx->pc = 0x285f58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BB038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB038u, _value); } while (0);
    // 0x285f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x285F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F5Cu;
        // 0x285f60: 0xac47004c  sw          $a3, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285F64u;
    // 0x285f64: 0x0  nop
    ctx->pc = 0x285f64u;
    // NOP
    // 0x285f68: 0xac460084  sw          $a2, 0x84($v0)
    ctx->pc = 0x285f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 6));
    // 0x285f6c: 0x0  nop
    ctx->pc = 0x285f6cu;
    // NOP
    // 0x285f70: 0xac46003c  sw          $a2, 0x3C($v0)
    ctx->pc = 0x285f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 6));
    // 0x285f74: 0x0  nop
    ctx->pc = 0x285f74u;
    // NOP
    ctx->pc = 0x285f78u;
}
