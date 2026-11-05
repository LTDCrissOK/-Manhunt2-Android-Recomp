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

// Function: sub_00112480
// Address: 0x112480 - 0x112500
void sub_00112480_0x112480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112480_0x112480");
#endif

    switch (ctx->pc) {
        case 0x1124acu: goto label_1124ac;
        case 0x1124e4u: goto label_1124e4;
        default: break;
    }

    ctx->pc = 0x112480u;

    // 0x112480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112488: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11248c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11248cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112490: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x112490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x112494: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x112494u;
    {
        const bool branch_taken_0x112494 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x112498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112494u;
        // 0x112498: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112494) {
            ctx->pc = 0x1124A4u;
            goto label_1124a4;
        }
    }
    ctx->pc = 0x11249Cu;
    // 0x11249c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11249Cu;
    {
        const bool branch_taken_0x11249c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11249Cu;
        // 0x1124a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11249c) {
            ctx->pc = 0x1124ACu;
            goto label_1124ac;
        }
    }
    ctx->pc = 0x1124A4u;
label_1124a4:
    // 0x1124a4: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x1124A4u;
    SET_GPR_U32(ctx, 31, 0x1124ACu);
    ctx->pc = 0x1124A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1124A4u;
    // 0x1124a8: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x1124A4u, 0x1124ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124ACu;
label_1124ac:
    // 0x1124ac: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1124ACu;
    {
        const bool branch_taken_0x1124ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1124ac) {
            ctx->pc = 0x1124B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1124ACu;
            // 0x1124b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1124E8u;
            goto label_1124e8;
        }
    }
    ctx->pc = 0x1124B4u;
    // 0x1124b4: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1124b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1124b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1124B8u;
    {
        const bool branch_taken_0x1124b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124B8u;
        // 0x1124bc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124b8) {
            ctx->pc = 0x1124E4u;
            goto label_1124e4;
        }
    }
    ctx->pc = 0x1124C0u;
    // 0x1124c0: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1124c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1124c4: 0x8c64a9d4  lw          $a0, -0x562C($v1)
    ctx->pc = 0x1124c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945236)));
    // 0x1124c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1124c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1124cc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1124ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1124d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1124D0u;
    {
        const bool branch_taken_0x1124d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124D0u;
        // 0x1124d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124d0) {
            ctx->pc = 0x1124E4u;
            goto label_1124e4;
        }
    }
    ctx->pc = 0x1124D8u;
    // 0x1124d8: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x1124d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x1124dc: 0xc043df4  jal         func_10F7D0
    ctx->pc = 0x1124DCu;
    SET_GPR_U32(ctx, 31, 0x1124E4u);
    ctx->pc = 0x1124E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1124DCu;
    // 0x1124e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7D0u, 0x1124DCu, 0x1124E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124E4u;
label_1124e4:
    // 0x1124e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1124e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1124e8:
    // 0x1124e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1124e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1124ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1124ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1124F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124ECu;
        // 0x1124f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1124ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1124F4u;
    // 0x1124f4: 0x0  nop
    ctx->pc = 0x1124f4u;
    // NOP
    // 0x1124f8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1124f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1124fc: 0x0  nop
    ctx->pc = 0x1124fcu;
    // NOP
    ctx->pc = 0x112500u;
}
