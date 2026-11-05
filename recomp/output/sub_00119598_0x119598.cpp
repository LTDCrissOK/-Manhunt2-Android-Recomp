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

// Function: sub_00119598
// Address: 0x119598 - 0x119608
void sub_00119598_0x119598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119598_0x119598");
#endif

    switch (ctx->pc) {
        case 0x1195acu: goto label_1195ac;
        case 0x1195b4u: goto label_1195b4;
        case 0x1195bcu: goto label_1195bc;
        case 0x1195c4u: goto label_1195c4;
        case 0x1195dcu: goto label_1195dc;
        default: break;
    }

    ctx->pc = 0x119598u;

    // 0x119598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11959c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1195a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1195a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1195a4: 0xc046968  jal         func_11A5A0
    ctx->pc = 0x1195A4u;
    SET_GPR_U32(ctx, 31, 0x1195ACu);
    ctx->pc = 0x1195A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195A4u;
    // 0x1195a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A5A0u, 0x1195A4u, 0x1195ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195ACu;
label_1195ac:
    // 0x1195ac: 0xc0469ca  jal         func_11A728
    ctx->pc = 0x1195ACu;
    SET_GPR_U32(ctx, 31, 0x1195B4u);
    ctx->pc = 0x1195B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195ACu;
    // 0x1195b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A728u, 0x1195ACu, 0x1195B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195B4u;
label_1195b4:
    // 0x1195b4: 0xc046a54  jal         func_11A950
    ctx->pc = 0x1195B4u;
    SET_GPR_U32(ctx, 31, 0x1195BCu);
    ctx->pc = 0x1195B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195B4u;
    // 0x1195b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A950u, 0x1195B4u, 0x1195BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195BCu;
label_1195bc:
    // 0x1195bc: 0xc046ada  jal         func_11AB68
    ctx->pc = 0x1195BCu;
    SET_GPR_U32(ctx, 31, 0x1195C4u);
    ctx->pc = 0x1195C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195BCu;
    // 0x1195c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AB68u, 0x1195BCu, 0x1195C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195C4u;
label_1195c4:
    // 0x1195c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1195c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1195c8: 0xae001214  sw          $zero, 0x1214($s0)
    ctx->pc = 0x1195c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4628), GPR_U32(ctx, 0));
    // 0x1195cc: 0xae001218  sw          $zero, 0x1218($s0)
    ctx->pc = 0x1195ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4632), GPR_U32(ctx, 0));
    // 0x1195d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1195d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195d4: 0xc046cd8  jal         func_11B360
    ctx->pc = 0x1195D4u;
    SET_GPR_U32(ctx, 31, 0x1195DCu);
    ctx->pc = 0x1195D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195D4u;
    // 0x1195d8: 0xae02121c  sw          $v0, 0x121C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B360u, 0x1195D4u, 0x1195DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195DCu;
label_1195dc:
    // 0x1195dc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1195dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1195e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1195e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1195e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1195e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1195e8: 0xae031240  sw          $v1, 0x1240($s0)
    ctx->pc = 0x1195e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 3));
    // 0x1195ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1195ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1195f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1195f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1195f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1195F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1195F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195F4u;
        // 0x1195f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1195F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1195FCu;
    // 0x1195fc: 0x0  nop
    ctx->pc = 0x1195fcu;
    // NOP
    // 0x119600: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x119600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x119604: 0x0  nop
    ctx->pc = 0x119604u;
    // NOP
    ctx->pc = 0x119608u;
}
