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

// Function: sub_00375CE8
// Address: 0x375ce8 - 0x375d28
void sub_00375CE8_0x375ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375CE8_0x375ce8");
#endif

    switch (ctx->pc) {
        case 0x375d00u: goto label_375d00;
        case 0x375d08u: goto label_375d08;
        default: break;
    }

    ctx->pc = 0x375ce8u;

    // 0x375ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x375cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x375cf0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x375cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x375cf4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x375cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x375cf8: 0xc0dfdfc  jal         func_37F7F0
    ctx->pc = 0x375CF8u;
    SET_GPR_U32(ctx, 31, 0x375D00u);
    ctx->pc = 0x375CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375CF8u;
    // 0x375cfc: 0x8e04cd38  lw          $a0, -0x32C8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F7F0u, 0x375CF8u, 0x375D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D00u;
label_375d00:
    // 0x375d00: 0xc0dfe0a  jal         func_37F828
    ctx->pc = 0x375D00u;
    SET_GPR_U32(ctx, 31, 0x375D08u);
    ctx->pc = 0x375D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375D00u;
    // 0x375d04: 0x8e04cd38  lw          $a0, -0x32C8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F828u, 0x375D00u, 0x375D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D08u;
label_375d08:
    // 0x375d08: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x375d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x375d0c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x375d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x375d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x375d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375d14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x375d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375d18: 0xac62cd34  sw          $v0, -0x32CC($v1)
    ctx->pc = 0x375d18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCD34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD34u, _value); } while (0);
    // 0x375d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x375D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D1Cu;
        // 0x375d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375D24u;
    // 0x375d24: 0x0  nop
    ctx->pc = 0x375d24u;
    // NOP
    ctx->pc = 0x375d28u;
}
