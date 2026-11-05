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

// Function: sub_00168098
// Address: 0x168098 - 0x1680f8
void sub_00168098_0x168098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168098_0x168098");
#endif

    switch (ctx->pc) {
        case 0x1680bcu: goto label_1680bc;
        case 0x1680ccu: goto label_1680cc;
        case 0x1680d4u: goto label_1680d4;
        case 0x1680dcu: goto label_1680dc;
        case 0x1680e4u: goto label_1680e4;
        default: break;
    }

    ctx->pc = 0x168098u;

    // 0x168098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16809c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1680a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1680a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1680a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1680a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1680a8: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x1680a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1680ac: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1680ACu;
    {
        const bool branch_taken_0x1680ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1680ac) {
            ctx->pc = 0x1680B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1680ACu;
            // 0x1680b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1680E8u;
            goto label_1680e8;
        }
    }
    ctx->pc = 0x1680B4u;
    // 0x1680b4: 0xc05a4fa  jal         func_1693E8
    ctx->pc = 0x1680B4u;
    SET_GPR_U32(ctx, 31, 0x1680BCu);
    ctx->pc = 0x1693E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1693E8u, 0x1680B4u, 0x1680BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1680BCu;
label_1680bc:
    // 0x1680bc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1680BCu;
    {
        const bool branch_taken_0x1680bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1680bc) {
            ctx->pc = 0x1680C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1680BCu;
            // 0x1680c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1680E8u;
            goto label_1680e8;
        }
    }
    ctx->pc = 0x1680C4u;
    // 0x1680c4: 0xc05a0f0  jal         func_1683C0
    ctx->pc = 0x1680C4u;
    SET_GPR_U32(ctx, 31, 0x1680CCu);
    ctx->pc = 0x1680C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1680C4u;
    // 0x1680c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1683C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1683C0u, 0x1680C4u, 0x1680CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1680CCu;
label_1680cc:
    // 0x1680cc: 0xc04f04c  jal         func_13C130
    ctx->pc = 0x1680CCu;
    SET_GPR_U32(ctx, 31, 0x1680D4u);
    ctx->pc = 0x1680D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1680CCu;
    // 0x1680d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C130u, 0x1680CCu, 0x1680D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1680D4u;
label_1680d4:
    // 0x1680d4: 0xc04f06e  jal         func_13C1B8
    ctx->pc = 0x1680D4u;
    SET_GPR_U32(ctx, 31, 0x1680DCu);
    ctx->pc = 0x1680D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1680D4u;
    // 0x1680d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1B8u, 0x1680D4u, 0x1680DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1680DCu;
label_1680dc:
    // 0x1680dc: 0xc05a2a0  jal         func_168A80
    ctx->pc = 0x1680DCu;
    SET_GPR_U32(ctx, 31, 0x1680E4u);
    ctx->pc = 0x1680E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1680DCu;
    // 0x1680e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168A80u, 0x1680DCu, 0x1680E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1680E4u;
label_1680e4:
    // 0x1680e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1680e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1680e8:
    // 0x1680e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1680e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1680ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1680ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1680F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680ECu;
        // 0x1680f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1680ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1680F4u;
    // 0x1680f4: 0x0  nop
    ctx->pc = 0x1680f4u;
    // NOP
    ctx->pc = 0x1680f8u;
}
