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

// Function: sub_002957A8
// Address: 0x2957a8 - 0x295828
void sub_002957A8_0x2957a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002957A8_0x2957a8");
#endif

    switch (ctx->pc) {
        case 0x2957bcu: goto label_2957bc;
        case 0x2957f4u: goto label_2957f4;
        case 0x295808u: goto label_295808;
        case 0x295810u: goto label_295810;
        default: break;
    }

    ctx->pc = 0x2957a8u;

    // 0x2957a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2957a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2957ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2957acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2957b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2957b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2957b4: 0xc0a52c0  jal         func_294B00
    ctx->pc = 0x2957B4u;
    SET_GPR_U32(ctx, 31, 0x2957BCu);
    ctx->pc = 0x2957B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2957B4u;
    // 0x2957b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B00u, 0x2957B4u, 0x2957BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2957BCu;
label_2957bc:
    // 0x2957bc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2957BCu;
    {
        const bool branch_taken_0x2957bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2957C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957BCu;
        // 0x2957c0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2957bc) {
            ctx->pc = 0x295810u;
            goto label_295810;
        }
    }
    ctx->pc = 0x2957C4u;
    // 0x2957c4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2957c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2957c8: 0x8c65bd50  lw          $a1, -0x42B0($v1)
    ctx->pc = 0x2957c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
    // 0x2957cc: 0x8c82adf0  lw          $v0, -0x5210($a0)
    ctx->pc = 0x2957ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BADF0u));
    // 0x2957d0: 0x8ca60224  lw          $a2, 0x224($a1)
    ctx->pc = 0x2957d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x2957d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2957d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2957d8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2957d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2957dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2957dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2957e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2957e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2957e4: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2957E4u;
    {
        const bool branch_taken_0x2957e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2957e4) {
            ctx->pc = 0x2957E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2957E4u;
            // 0x2957e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295814u;
            goto label_295814;
        }
    }
    ctx->pc = 0x2957ECu;
    // 0x2957ec: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2957ECu;
    SET_GPR_U32(ctx, 31, 0x2957F4u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2957ECu, 0x2957F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2957F4u;
label_2957f4:
    // 0x2957f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2957f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2957f8: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2957F8u;
    {
        const bool branch_taken_0x2957f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2957f8) {
            ctx->pc = 0x2957FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2957F8u;
            // 0x2957fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295814u;
            goto label_295814;
        }
    }
    ctx->pc = 0x295800u;
    // 0x295800: 0xc0a565c  jal         func_295970
    ctx->pc = 0x295800u;
    SET_GPR_U32(ctx, 31, 0x295808u);
    ctx->pc = 0x295804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295800u;
    // 0x295804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295970u, 0x295800u, 0x295808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295808u;
label_295808:
    // 0x295808: 0xc0a56bc  jal         func_295AF0
    ctx->pc = 0x295808u;
    SET_GPR_U32(ctx, 31, 0x295810u);
    ctx->pc = 0x29580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295808u;
    // 0x29580c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AF0u, 0x295808u, 0x295810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295810u;
label_295810:
    // 0x295810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_295814:
    // 0x295814: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x295814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x295818: 0x3e00008  jr          $ra
    ctx->pc = 0x295818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295818u;
        // 0x29581c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295820u;
    // 0x295820: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x295820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x295824: 0x0  nop
    ctx->pc = 0x295824u;
    // NOP
    ctx->pc = 0x295828u;
}
