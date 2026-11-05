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

// Function: sub_0037CEA8
// Address: 0x37cea8 - 0x37cf20
void sub_0037CEA8_0x37cea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CEA8_0x37cea8");
#endif

    switch (ctx->pc) {
        case 0x37cf10u: goto label_37cf10;
        default: break;
    }

    ctx->pc = 0x37cea8u;

    // 0x37cea8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x37cea8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ceac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37ceacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37ceb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x37ceb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ceb4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x37ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x37ceb8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x37ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x37cebc: 0x2442cf20  addiu       $v0, $v0, -0x30E0
    ctx->pc = 0x37cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x37cec0: 0x2463cfe0  addiu       $v1, $v1, -0x3020
    ctx->pc = 0x37cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954976));
    // 0x37cec4: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x37cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x37cec8: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37cec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37cecc: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x37ceccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x37ced0: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x37ced0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x37ced4: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x37ced4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
    // 0x37ced8: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x37ced8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x37cedc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37cedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37cee0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x37cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x37cee4: 0x24a5d000  addiu       $a1, $a1, -0x3000
    ctx->pc = 0x37cee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955008));
    // 0x37cee8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x37cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x37ceec: 0x24c6d1b0  addiu       $a2, $a2, -0x2E50
    ctx->pc = 0x37ceecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955440));
    // 0x37cef0: 0x24e779e0  addiu       $a3, $a3, 0x79E0
    ctx->pc = 0x37cef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31200));
    // 0x37cef4: 0x25087a10  addiu       $t0, $t0, 0x7A10
    ctx->pc = 0x37cef4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31248));
    // 0x37cef8: 0x2529ce00  addiu       $t1, $t1, -0x3200
    ctx->pc = 0x37cef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954496));
    // 0x37cefc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x37cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x37cf00: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x37cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x37cf04: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37cf04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cf08: 0xc0dfe98  jal         func_37FA60
    ctx->pc = 0x37CF08u;
    SET_GPR_U32(ctx, 31, 0x37CF10u);
    ctx->pc = 0x37CF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF08u;
    // 0x37cf0c: 0x3a0582d  daddu       $t3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA60u, 0x37CF08u, 0x37CF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF10u;
label_37cf10:
    // 0x37cf10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37cf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37cf14: 0x3e00008  jr          $ra
    ctx->pc = 0x37CF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF14u;
        // 0x37cf18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CF1Cu;
    // 0x37cf1c: 0x0  nop
    ctx->pc = 0x37cf1cu;
    // NOP
    ctx->pc = 0x37cf20u;
}
