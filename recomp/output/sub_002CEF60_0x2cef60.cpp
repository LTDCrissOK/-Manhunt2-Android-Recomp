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

// Function: sub_002CEF60
// Address: 0x2cef60 - 0x2cefb8
void sub_002CEF60_0x2cef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEF60_0x2cef60");
#endif

    switch (ctx->pc) {
        case 0x2cef80u: goto label_2cef80;
        case 0x2cefa0u: goto label_2cefa0;
        default: break;
    }

    ctx->pc = 0x2cef60u;

    // 0x2cef60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cef64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cef64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cef68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cef6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cef6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cef74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cef74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef78: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x2CEF78u;
    SET_GPR_U32(ctx, 31, 0x2CEF80u);
    ctx->pc = 0x2CEF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEF78u;
    // 0x2cef7c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x2CEF78u, 0x2CEF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF80u;
label_2cef80:
    // 0x2cef80: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2cef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cef84: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x2cef84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2cef88: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2cef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2cef8c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2cef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2cef90: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x2cef90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2cef94: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2cef94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2cef98: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x2CEF98u;
    SET_GPR_U32(ctx, 31, 0x2CEFA0u);
    ctx->pc = 0x2CEF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEF98u;
    // 0x2cef9c: 0xfe020048  sd          $v0, 0x48($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x2CEF98u, 0x2CEFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEFA0u;
label_2cefa0:
    // 0x2cefa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cefa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cefa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cefa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cefa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cefa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cefac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEFACu;
        // 0x2cefb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEFB4u;
    // 0x2cefb4: 0x0  nop
    ctx->pc = 0x2cefb4u;
    // NOP
    ctx->pc = 0x2cefb8u;
}
