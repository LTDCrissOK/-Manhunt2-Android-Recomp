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

// Function: sub_00304BA8
// Address: 0x304ba8 - 0x304bf8
void sub_00304BA8_0x304ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304BA8_0x304ba8");
#endif

    ctx->pc = 0x304ba8u;

    // 0x304ba8: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x304ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x304bac: 0x3c0a005a  lui         $t2, 0x5A
    ctx->pc = 0x304bacu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)90 << 16));
    // 0x304bb0: 0x3c0d0048  lui         $t5, 0x48
    ctx->pc = 0x304bb0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)72 << 16));
    // 0x304bb4: 0x3c0c005a  lui         $t4, 0x5A
    ctx->pc = 0x304bb4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)90 << 16));
    // 0x304bb8: 0x2409003d  addiu       $t1, $zero, 0x3D
    ctx->pc = 0x304bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x304bbc: 0x3c0b005a  lui         $t3, 0x5A
    ctx->pc = 0x304bbcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)90 << 16));
    // 0x304bc0: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x304bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x304bc4: 0x3c08005a  lui         $t0, 0x5A
    ctx->pc = 0x304bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)90 << 16));
    // 0x304bc8: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x304bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x304bcc: 0x3c06005a  lui         $a2, 0x5A
    ctx->pc = 0x304bccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)90 << 16));
    // 0x304bd0: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x304bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x304bd4: 0xad426618  sw          $v0, 0x6618($t2)
    ctx->pc = 0x304bd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5A6618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6618u, _value); } while (0);
    // 0x304bd8: 0xad896578  sw          $t1, 0x6578($t4)
    ctx->pc = 0x304bd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x5A6578u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6578u, _value); } while (0);
    // 0x304bdc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x304bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304be0: 0xad6765b8  sw          $a3, 0x65B8($t3)
    ctx->pc = 0x304be0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5A65B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A65B8u, _value); } while (0);
    // 0x304be4: 0xad0565f8  sw          $a1, 0x65F8($t0)
    ctx->pc = 0x304be4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5A65F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A65F8u, _value); } while (0);
    // 0x304be8: 0xacc365d8  sw          $v1, 0x65D8($a2)
    ctx->pc = 0x304be8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5A65D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A65D8u, _value); } while (0);
    // 0x304bec: 0x3e00008  jr          $ra
    ctx->pc = 0x304BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BECu;
        // 0x304bf0: 0xada02c4c  sw          $zero, 0x2C4C($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 11340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304BF4u;
    // 0x304bf4: 0x0  nop
    ctx->pc = 0x304bf4u;
    // NOP
    ctx->pc = 0x304bf8u;
}
