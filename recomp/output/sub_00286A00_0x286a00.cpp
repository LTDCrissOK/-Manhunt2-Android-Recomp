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

// Function: sub_00286A00
// Address: 0x286a00 - 0x286a70
void sub_00286A00_0x286a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286A00_0x286a00");
#endif

    switch (ctx->pc) {
        case 0x286a14u: goto label_286a14;
        case 0x286a20u: goto label_286a20;
        case 0x286a34u: goto label_286a34;
        case 0x286a50u: goto label_286a50;
        default: break;
    }

    ctx->pc = 0x286a00u;

    // 0x286a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x286a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x286a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286a08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x286a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x286a0c: 0xc0a1b4e  jal         func_286D38
    ctx->pc = 0x286A0Cu;
    SET_GPR_U32(ctx, 31, 0x286A14u);
    ctx->pc = 0x286A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A0Cu;
    // 0x286a10: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D38u, 0x286A0Cu, 0x286A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A14u;
label_286a14:
    // 0x286a14: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x286a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x286a18: 0xc0ab184  jal         func_2AC610
    ctx->pc = 0x286A18u;
    SET_GPR_U32(ctx, 31, 0x286A20u);
    ctx->pc = 0x286A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A18u;
    // 0x286a1c: 0xac40a448  sw          $zero, -0x5BB8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943816), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC610u, 0x286A18u, 0x286A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A20u;
label_286a20:
    // 0x286a20: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x286a20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x286a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a28: 0x26102508  addiu       $s0, $s0, 0x2508
    ctx->pc = 0x286a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9480));
    // 0x286a2c: 0xc0acb76  jal         func_2B2DD8
    ctx->pc = 0x286A2Cu;
    SET_GPR_U32(ctx, 31, 0x286A34u);
    ctx->pc = 0x286A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A2Cu;
    // 0x286a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2DD8u, 0x286A2Cu, 0x286A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A34u;
label_286a34:
    // 0x286a34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x286a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x286a38: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x286a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x286a3c: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x286a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x286a40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x286a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a44: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x286a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x286a48: 0xc0a1994  jal         func_286650
    ctx->pc = 0x286A48u;
    SET_GPR_U32(ctx, 31, 0x286A50u);
    ctx->pc = 0x286A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A48u;
    // 0x286a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286650u, 0x286A48u, 0x286A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A50u;
label_286a50:
    // 0x286a50: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x286a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x286a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286a5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x286a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286a60: 0xac62a438  sw          $v0, -0x5BC8($v1)
    ctx->pc = 0x286a60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA438u, _value); } while (0);
    // 0x286a64: 0x3e00008  jr          $ra
    ctx->pc = 0x286A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A64u;
        // 0x286a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286A6Cu;
    // 0x286a6c: 0x0  nop
    ctx->pc = 0x286a6cu;
    // NOP
    ctx->pc = 0x286a70u;
}
