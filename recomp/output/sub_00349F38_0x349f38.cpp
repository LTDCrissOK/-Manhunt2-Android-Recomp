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

// Function: sub_00349F38
// Address: 0x349f38 - 0x349fa0
void sub_00349F38_0x349f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349F38_0x349f38");
#endif

    switch (ctx->pc) {
        case 0x349f48u: goto label_349f48;
        case 0x349f58u: goto label_349f58;
        default: break;
    }

    ctx->pc = 0x349f38u;

    // 0x349f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349f40: 0xc0d2ff8  jal         func_34BFE0
    ctx->pc = 0x349F40u;
    SET_GPR_U32(ctx, 31, 0x349F48u);
    ctx->pc = 0x34BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFE0u, 0x349F40u, 0x349F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349F48u;
label_349f48:
    // 0x349f48: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x349f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x349f4c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x349f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x349f50: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x349f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
    // 0x349f54: 0x0  nop
    ctx->pc = 0x349f54u;
    // NOP
label_349f58:
    // 0x349f58: 0xa0400075  sb          $zero, 0x75($v0)
    ctx->pc = 0x349f58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 117), (uint8_t)GPR_U32(ctx, 0));
    // 0x349f5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x349f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x349f60: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x349f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x349f64: 0x0  nop
    ctx->pc = 0x349f64u;
    // NOP
    // 0x349f68: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x349F68u;
    {
        const bool branch_taken_0x349f68 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x349F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F68u;
        // 0x349f6c: 0x24420080  addiu       $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349f68) {
            ctx->pc = 0x349F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349f58;
        }
    }
    ctx->pc = 0x349F70u;
    // 0x349f70: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x349f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x349f74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x349f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x349f78: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x349f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x349f7c: 0xac402ce0  sw          $zero, 0x2CE0($v0)
    ctx->pc = 0x349f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CE0u, _value); } while (0);
    // 0x349f80: 0xac642ce4  sw          $a0, 0x2CE4($v1)
    ctx->pc = 0x349f80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482CE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CE4u, _value); } while (0);
    // 0x349f84: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x349f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x349f88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x349f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x349f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349f90: 0xa0402ce8  sb          $zero, 0x2CE8($v0)
    ctx->pc = 0x349f90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482CE8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482CE8u, _value); } while (0);
    // 0x349f94: 0xa0602ce9  sb          $zero, 0x2CE9($v1)
    ctx->pc = 0x349f94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482CE9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482CE9u, _value); } while (0);
    // 0x349f98: 0x3e00008  jr          $ra
    ctx->pc = 0x349F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349F98u;
        // 0x349f9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349FA0u;
}
