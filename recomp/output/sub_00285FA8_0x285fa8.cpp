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

// Function: sub_00285FA8
// Address: 0x285fa8 - 0x286008
void sub_00285FA8_0x285fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285FA8_0x285fa8");
#endif

    ctx->pc = 0x285fa8u;

    // 0x285fa8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x285fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x285fac: 0x2442aff0  addiu       $v0, $v0, -0x5010
    ctx->pc = 0x285facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
    // 0x285fb0: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x285fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BB07Cu));
    // 0x285fb4: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x285fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BB080u));
    // 0x285fb8: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x285fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BB084u));
    // 0x285fbc: 0x8c460098  lw          $a2, 0x98($v0)
    ctx->pc = 0x285fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BB088u));
    // 0x285fc0: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x285fc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BB010u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB010u, _value); } while (0);
    // 0x285fc4: 0xac46002c  sw          $a2, 0x2C($v0)
    ctx->pc = 0x285fc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BB01Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB01Cu, _value); } while (0);
    // 0x285fc8: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x285fc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BB014u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB014u, _value); } while (0);
    // 0x285fcc: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x285fccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BB018u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB018u, _value); } while (0);
    // 0x285fd0: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x285fd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BB040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB040u, _value); } while (0);
    // 0x285fd4: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x285fd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BB030u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB030u, _value); } while (0);
    // 0x285fd8: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x285fd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BB020u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB020u, _value); } while (0);
    // 0x285fdc: 0xac440054  sw          $a0, 0x54($v0)
    ctx->pc = 0x285fdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BB044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB044u, _value); } while (0);
    // 0x285fe0: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x285fe0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BB034u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB034u, _value); } while (0);
    // 0x285fe4: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x285fe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BB024u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB024u, _value); } while (0);
    // 0x285fe8: 0xac450058  sw          $a1, 0x58($v0)
    ctx->pc = 0x285fe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BB048u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB048u, _value); } while (0);
    // 0x285fec: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x285fecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BB038u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB038u, _value); } while (0);
    // 0x285ff0: 0xac450038  sw          $a1, 0x38($v0)
    ctx->pc = 0x285ff0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BB028u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB028u, _value); } while (0);
    // 0x285ff4: 0xac46005c  sw          $a2, 0x5C($v0)
    ctx->pc = 0x285ff4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BB04Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB04Cu, _value); } while (0);
    // 0x285ff8: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x285ff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BB03Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BB03Cu, _value); } while (0);
    // 0x285ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x285FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FFCu;
        // 0x286000: 0xac46003c  sw          $a2, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286004u;
    // 0x286004: 0x0  nop
    ctx->pc = 0x286004u;
    // NOP
    ctx->pc = 0x286008u;
}
