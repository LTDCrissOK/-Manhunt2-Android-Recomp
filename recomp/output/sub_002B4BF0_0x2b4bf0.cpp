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

// Function: sub_002B4BF0
// Address: 0x2b4bf0 - 0x2b4cd8
void sub_002B4BF0_0x2b4bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4BF0_0x2b4bf0");
#endif

    switch (ctx->pc) {
        case 0x2b4c20u: goto label_2b4c20;
        case 0x2b4c28u: goto label_2b4c28;
        case 0x2b4c40u: goto label_2b4c40;
        case 0x2b4c6cu: goto label_2b4c6c;
        case 0x2b4c90u: goto label_2b4c90;
        case 0x2b4ca4u: goto label_2b4ca4;
        default: break;
    }

    ctx->pc = 0x2b4bf0u;

    // 0x2b4bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b4bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4bf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b4bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b4bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b4c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b4c04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b4c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c08: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b4c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b4c0c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b4c0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b4c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b4c14: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b4c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b4c18: 0xc082ea8  jal         func_20BAA0
    ctx->pc = 0x2B4C18u;
    SET_GPR_U32(ctx, 31, 0x2B4C20u);
    ctx->pc = 0x2B4C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C18u;
    // 0x2b4c1c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BAA0u, 0x2B4C18u, 0x2B4C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C20u;
label_2b4c20:
    // 0x2b4c20: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B4C20u;
    SET_GPR_U32(ctx, 31, 0x2B4C28u);
    ctx->pc = 0x2B4C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C20u;
    // 0x2b4c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B4C20u, 0x2B4C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C28u;
label_2b4c28:
    // 0x2b4c28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4C28u;
    {
        const bool branch_taken_0x2b4c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4c28) {
            ctx->pc = 0x2B4C38u;
            goto label_2b4c38;
        }
    }
    ctx->pc = 0x2B4C30u;
    // 0x2b4c30: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2B4C30u;
    {
        const bool branch_taken_0x2b4c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C30u;
        // 0x2b4c34: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c30) {
            ctx->pc = 0x2B4CACu;
            goto label_2b4cac;
        }
    }
    ctx->pc = 0x2B4C38u;
label_2b4c38:
    // 0x2b4c38: 0xc0ace90  jal         func_2B3A40
    ctx->pc = 0x2B4C38u;
    SET_GPR_U32(ctx, 31, 0x2B4C40u);
    ctx->pc = 0x2B4C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C38u;
    // 0x2b4c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3A40u, 0x2B4C38u, 0x2B4C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C40u;
label_2b4c40:
    // 0x2b4c40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b4c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4c48: 0x16420018  bne         $s2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B4C48u;
    {
        const bool branch_taken_0x2b4c48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C48u;
        // 0x2b4c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c48) {
            ctx->pc = 0x2B4CACu;
            goto label_2b4cac;
        }
    }
    ctx->pc = 0x2B4C50u;
    // 0x2b4c50: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x2b4c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2b4c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c58: 0x2251018  mult        $v0, $s1, $a1
    ctx->pc = 0x2b4c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b4c5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b4c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4c60: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x2b4c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b4c64: 0xc0ad114  jal         func_2B4450
    ctx->pc = 0x2B4C64u;
    SET_GPR_U32(ctx, 31, 0x2B4C6Cu);
    ctx->pc = 0x2B4C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C64u;
    // 0x2b4c68: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4450u, 0x2B4C64u, 0x2B4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C6Cu;
label_2b4c6c:
    // 0x2b4c6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b4c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c70: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b4c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b4c74: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B4C74u;
    {
        const bool branch_taken_0x2b4c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C74u;
        // 0x2b4c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c74) {
            ctx->pc = 0x2B4CACu;
            goto label_2b4cac;
        }
    }
    ctx->pc = 0x2B4C7Cu;
    // 0x2b4c7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b4c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c80: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2b4c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c88: 0xc0ad1e0  jal         func_2B4780
    ctx->pc = 0x2B4C88u;
    SET_GPR_U32(ctx, 31, 0x2B4C90u);
    ctx->pc = 0x2B4C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C88u;
    // 0x2b4c8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4780u, 0x2B4C88u, 0x2B4C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C90u;
label_2b4c90:
    // 0x2b4c90: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4C90u;
    {
        const bool branch_taken_0x2b4c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4c90) {
            ctx->pc = 0x2B4C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4C90u;
            // 0x2b4c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4CACu;
            goto label_2b4cac;
        }
    }
    ctx->pc = 0x2B4C98u;
    // 0x2b4c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c9c: 0xc0ad164  jal         func_2B4590
    ctx->pc = 0x2B4C9Cu;
    SET_GPR_U32(ctx, 31, 0x2B4CA4u);
    ctx->pc = 0x2B4CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C9Cu;
    // 0x2b4ca0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4590u, 0x2B4C9Cu, 0x2B4CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4CA4u;
label_2b4ca4:
    // 0x2b4ca4: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x2b4ca4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x2b4ca8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b4ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b4cac:
    // 0x2b4cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b4cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4cb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b4cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4cb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b4cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4cb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b4cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4cbc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b4cbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4cc0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b4cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b4cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4CC4u;
        // 0x2b4cc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4CCCu;
    // 0x2b4ccc: 0x0  nop
    ctx->pc = 0x2b4cccu;
    // NOP
    // 0x2b4cd0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4cd4: 0x0  nop
    ctx->pc = 0x2b4cd4u;
    // NOP
    ctx->pc = 0x2b4cd8u;
}
