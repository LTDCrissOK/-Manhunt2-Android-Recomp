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

// Function: sub_00380BB0
// Address: 0x380bb0 - 0x380c08
void sub_00380BB0_0x380bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380BB0_0x380bb0");
#endif

    switch (ctx->pc) {
        case 0x380bd0u: goto label_380bd0;
        case 0x380be0u: goto label_380be0;
        default: break;
    }

    ctx->pc = 0x380bb0u;

    // 0x380bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x380bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x380bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x380bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x380bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x380bbc: 0x24910030  addiu       $s1, $a0, 0x30
    ctx->pc = 0x380bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x380bc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x380bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x380bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x380bc8: 0xc0e0268  jal         func_3809A0
    ctx->pc = 0x380BC8u;
    SET_GPR_U32(ctx, 31, 0x380BD0u);
    ctx->pc = 0x380BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380BC8u;
    // 0x380bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3809A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3809A0u, 0x380BC8u, 0x380BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380BD0u;
label_380bd0:
    // 0x380bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x380bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380bd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x380bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380bd8: 0xc0e024e  jal         func_380938
    ctx->pc = 0x380BD8u;
    SET_GPR_U32(ctx, 31, 0x380BE0u);
    ctx->pc = 0x380BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380BD8u;
    // 0x380bdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380938u, 0x380BD8u, 0x380BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380BE0u;
label_380be0:
    // 0x380be0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x380be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380be4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x380be4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x380be8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x380be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380bec: 0x3e00008  jr          $ra
    ctx->pc = 0x380BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380BECu;
        // 0x380bf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380BF4u;
    // 0x380bf4: 0x0  nop
    ctx->pc = 0x380bf4u;
    // NOP
    // 0x380bf8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x380bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x380bfc: 0x0  nop
    ctx->pc = 0x380bfcu;
    // NOP
    // 0x380c00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x380c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x380c04: 0x0  nop
    ctx->pc = 0x380c04u;
    // NOP
    ctx->pc = 0x380c08u;
}
