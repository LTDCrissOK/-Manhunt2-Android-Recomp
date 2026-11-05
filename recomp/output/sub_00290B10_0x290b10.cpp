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

// Function: sub_00290B10
// Address: 0x290b10 - 0x290b88
void sub_00290B10_0x290b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290B10_0x290b10");
#endif

    switch (ctx->pc) {
        case 0x290b58u: goto label_290b58;
        default: break;
    }

    ctx->pc = 0x290b10u;

    // 0x290b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x290b14: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x290b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x290b18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x290b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x290b1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x290b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x290b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x290b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x290b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x290b28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x290b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x290b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x290b30: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x290b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290b34: 0x8e3001d0  lw          $s0, 0x1D0($s1)
    ctx->pc = 0x290b34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x290b38: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x290b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x290b3c: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x290b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x290b40: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x290b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x290b44: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x290b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x290b48: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x290b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x290b4c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x290b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x290b50: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x290B50u;
    SET_GPR_U32(ctx, 31, 0x290B58u);
    ctx->pc = 0x290B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290B50u;
    // 0x290b54: 0xa2000010  sb          $zero, 0x10($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x290B50u, 0x290B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290B58u;
label_290b58:
    // 0x290b58: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x290b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x290b5c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x290b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x290b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x290b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290b64: 0x8e2201d0  lw          $v0, 0x1D0($s1)
    ctx->pc = 0x290b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x290b68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x290b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x290b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x290b70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x290b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290b74: 0xae2201d0  sw          $v0, 0x1D0($s1)
    ctx->pc = 0x290b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 2));
    // 0x290b78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x290b78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x290b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x290B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290B7Cu;
        // 0x290b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290B84u;
    // 0x290b84: 0x0  nop
    ctx->pc = 0x290b84u;
    // NOP
    ctx->pc = 0x290b88u;
}
