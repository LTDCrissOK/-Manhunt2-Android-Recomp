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

// Function: sub_001EBDE0
// Address: 0x1ebde0 - 0x1ebe18
void sub_001EBDE0_0x1ebde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBDE0_0x1ebde0");
#endif

    ctx->pc = 0x1ebde0u;

    // 0x1ebde0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ebde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ebde4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1ebde4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ebde8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1ebde8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ebdec: 0x34038420  ori         $v1, $zero, 0x8420
    ctx->pc = 0x1ebdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1ebdf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebdf4: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x1ebdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    // 0x1ebdf8: 0xac820124  sw          $v0, 0x124($a0)
    ctx->pc = 0x1ebdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 2));
    // 0x1ebdfc: 0xac820114  sw          $v0, 0x114($a0)
    ctx->pc = 0x1ebdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 2));
    // 0x1ebe00: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ebe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ebe04: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1ebe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ebe08: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ebe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ebe0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE0Cu;
        // 0x1ebe10: 0xac820144  sw          $v0, 0x144($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBE14u;
    // 0x1ebe14: 0x0  nop
    ctx->pc = 0x1ebe14u;
    // NOP
    ctx->pc = 0x1ebe18u;
}
