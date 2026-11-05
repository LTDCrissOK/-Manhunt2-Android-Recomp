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

// Function: sub_001FBF30
// Address: 0x1fbf30 - 0x1fbfe0
void sub_001FBF30_0x1fbf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBF30_0x1fbf30");
#endif

    switch (ctx->pc) {
        case 0x1fbf90u: goto label_1fbf90;
        case 0x1fbfa4u: goto label_1fbfa4;
        case 0x1fbfb0u: goto label_1fbfb0;
        case 0x1fbfc4u: goto label_1fbfc4;
        default: break;
    }

    ctx->pc = 0x1fbf30u;

    // 0x1fbf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fbf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fbf34: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fbf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fbf38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fbf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fbf3c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fbf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fbf40: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1fbf40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fbf44: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1fbf44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1fbf48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fbf48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf4c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1fbf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fbf50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fbf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fbf54: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fbf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fbf58: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x1fbf58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fbf5c: 0x8cc20120  lw          $v0, 0x120($a2)
    ctx->pc = 0x1fbf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x1fbf60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBF60u;
    {
        const bool branch_taken_0x1fbf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF60u;
        // 0x1fbf64: 0x34038110  ori         $v1, $zero, 0x8110 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33040);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf60) {
            ctx->pc = 0x1FBF80u;
            goto label_1fbf80;
        }
    }
    ctx->pc = 0x1FBF68u;
    // 0x1fbf68: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x1fbf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1fbf6c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1fbf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fbf70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbf74: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1fbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1fbf78: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1fbf78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fbf7c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1fbf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1fbf80:
    // 0x1fbf80: 0x90d0012c  lbu         $s0, 0x12C($a2)
    ctx->pc = 0x1fbf80u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 300)));
    // 0x1fbf84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf88: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x1FBF88u;
    SET_GPR_U32(ctx, 31, 0x1FBF90u);
    ctx->pc = 0x1FBF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF88u;
    // 0x1fbf8c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x1FBF88u, 0x1FBF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBF90u;
label_1fbf90:
    // 0x1fbf90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fbf90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf94: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1fbf94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbf9c: 0xc07ef4e  jal         func_1FBD38
    ctx->pc = 0x1FBF9Cu;
    SET_GPR_U32(ctx, 31, 0x1FBFA4u);
    ctx->pc = 0x1FBFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF9Cu;
    // 0x1fbfa0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD38u, 0x1FBF9Cu, 0x1FBFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBFA4u;
label_1fbfa4:
    // 0x1fbfa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fbfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfa8: 0xc07efba  jal         func_1FBEE8
    ctx->pc = 0x1FBFA8u;
    SET_GPR_U32(ctx, 31, 0x1FBFB0u);
    ctx->pc = 0x1FBFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBFA8u;
    // 0x1fbfac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEE8u, 0x1FBFA8u, 0x1FBFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBFB0u;
label_1fbfb0:
    // 0x1fbfb0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fbfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbfb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBFB4u;
    {
        const bool branch_taken_0x1fbfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFB4u;
        // 0x1fbfb8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfb4) {
            ctx->pc = 0x1FBFC8u;
            goto label_1fbfc8;
        }
    }
    ctx->pc = 0x1FBFBCu;
    // 0x1fbfbc: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1FBFBCu;
    SET_GPR_U32(ctx, 31, 0x1FBFC4u);
    ctx->pc = 0x1FBFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBFBCu;
    // 0x1fbfc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1FBFBCu, 0x1FBFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBFC4u;
label_1fbfc4:
    // 0x1fbfc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fbfc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbfc8:
    // 0x1fbfc8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fbfc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbfcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fbfccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbfd0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fbfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fbfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFD4u;
        // 0x1fbfd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBFDCu;
    // 0x1fbfdc: 0x0  nop
    ctx->pc = 0x1fbfdcu;
    // NOP
    ctx->pc = 0x1fbfe0u;
}
