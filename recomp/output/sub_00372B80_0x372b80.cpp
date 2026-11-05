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

// Function: sub_00372B80
// Address: 0x372b80 - 0x372be0
void sub_00372B80_0x372b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372B80_0x372b80");
#endif

    switch (ctx->pc) {
        case 0x372ba8u: goto label_372ba8;
        case 0x372bc4u: goto label_372bc4;
        default: break;
    }

    ctx->pc = 0x372b80u;

    // 0x372b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372b84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x372b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372b8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x372b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372b90: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x372b90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x372b94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x372b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x372b98: 0x261028d0  addiu       $s0, $s0, 0x28D0
    ctx->pc = 0x372b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10448));
    // 0x372b9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x372b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ba0: 0xc0dc59c  jal         func_371670
    ctx->pc = 0x372BA0u;
    SET_GPR_U32(ctx, 31, 0x372BA8u);
    ctx->pc = 0x372BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372BA0u;
    // 0x372ba4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371670u, 0x372BA0u, 0x372BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BA8u;
label_372ba8:
    // 0x372ba8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x372ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x372bac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x372bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372bb0: 0xac62ccc8  sw          $v0, -0x3338($v1)
    ctx->pc = 0x372bb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCCC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCCC8u, _value); } while (0);
    // 0x372bb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x372bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372bb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x372bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372bbc: 0xc0dc59c  jal         func_371670
    ctx->pc = 0x372BBCu;
    SET_GPR_U32(ctx, 31, 0x372BC4u);
    ctx->pc = 0x372BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372BBCu;
    // 0x372bc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371670u, 0x372BBCu, 0x372BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372BC4u;
label_372bc4:
    // 0x372bc4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x372bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x372bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372bcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372bd0: 0xac62cccc  sw          $v0, -0x3334($v1)
    ctx->pc = 0x372bd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCCCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCCCCu, _value); } while (0);
    // 0x372bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x372BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372BD4u;
        // 0x372bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372BDCu;
    // 0x372bdc: 0x0  nop
    ctx->pc = 0x372bdcu;
    // NOP
    ctx->pc = 0x372be0u;
}
