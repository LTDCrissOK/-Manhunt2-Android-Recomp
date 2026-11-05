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

// Function: sub_00399788
// Address: 0x399788 - 0x3997e0
void sub_00399788_0x399788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399788_0x399788");
#endif

    switch (ctx->pc) {
        case 0x3997a4u: goto label_3997a4;
        case 0x3997acu: goto label_3997ac;
        default: break;
    }

    ctx->pc = 0x399788u;

    // 0x399788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39978c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39978cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399794: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x399794u;
    {
        const bool branch_taken_0x399794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x399798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399794u;
        // 0x399798: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399794) {
            ctx->pc = 0x3997D0u;
            goto label_3997d0;
        }
    }
    ctx->pc = 0x39979Cu;
    // 0x39979c: 0xc0e6760  jal         func_399D80
    ctx->pc = 0x39979Cu;
    SET_GPR_U32(ctx, 31, 0x3997A4u);
    ctx->pc = 0x399D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399D80u, 0x39979Cu, 0x3997A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3997A4u;
label_3997a4:
    // 0x3997a4: 0xc0e667c  jal         func_3999F0
    ctx->pc = 0x3997A4u;
    SET_GPR_U32(ctx, 31, 0x3997ACu);
    ctx->pc = 0x3997A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3997A4u;
    // 0x3997a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3999F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3999F0u, 0x3997A4u, 0x3997ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3997ACu;
label_3997ac:
    // 0x3997ac: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3997acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3997b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3997b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3997b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3997b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3997b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3997b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3997bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3997bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3997c0: 0x24060068  addiu       $a2, $zero, 0x68
    ctx->pc = 0x3997c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x3997c4: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3997C4u;
    ctx->pc = 0x3997C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3997C4u;
    // 0x3997c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3997CCu;
    // 0x3997cc: 0x0  nop
    ctx->pc = 0x3997ccu;
    // NOP
label_3997d0:
    // 0x3997d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3997d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3997d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3997d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3997d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3997D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3997DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997D8u;
        // 0x3997dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3997D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3997E0u;
}
