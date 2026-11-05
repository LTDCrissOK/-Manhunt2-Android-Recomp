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

// Function: sub_0010AC60
// Address: 0x10ac60 - 0x10ad00
void sub_0010AC60_0x10ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AC60_0x10ac60");
#endif

    switch (ctx->pc) {
        case 0x10ac74u: goto label_10ac74;
        case 0x10ace0u: goto label_10ace0;
        default: break;
    }

    ctx->pc = 0x10ac60u;

    // 0x10ac60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ac64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ac68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10ac6c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10AC6Cu;
    SET_GPR_U32(ctx, 31, 0x10AC74u);
    ctx->pc = 0x10AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC6Cu;
    // 0x10ac70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10AC6Cu, 0x10AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC74u;
label_10ac74:
    // 0x10ac74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10ac74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac78: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10ac7c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10AC7Cu;
    {
        const bool branch_taken_0x10ac7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC7Cu;
        // 0x10ac80: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac7c) {
            ctx->pc = 0x10AC9Cu;
            goto label_10ac9c;
        }
    }
    ctx->pc = 0x10AC84u;
    // 0x10ac84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10ac88: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10ac8c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10ac90: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x10ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x10ac94: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10AC94u;
    {
        const bool branch_taken_0x10ac94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ac94) {
            ctx->pc = 0x10AC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AC94u;
            // 0x10ac98: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ACA4u;
            goto label_10aca4;
        }
    }
    ctx->pc = 0x10AC9Cu;
label_10ac9c:
    // 0x10ac9c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10AC9Cu;
    {
        const bool branch_taken_0x10ac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC9Cu;
        // 0x10aca0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac9c) {
            ctx->pc = 0x10ACE4u;
            goto label_10ace4;
        }
    }
    ctx->pc = 0x10ACA4u;
label_10aca4:
    // 0x10aca4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10aca8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10acac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10acacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10acb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10acb4: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x10acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10acb8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10ACB8u;
    {
        const bool branch_taken_0x10acb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10acb8) {
            ctx->pc = 0x10ACBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10ACB8u;
            // 0x10acbc: 0x8c4200c0  lw          $v0, 0xC0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ACC8u;
            goto label_10acc8;
        }
    }
    ctx->pc = 0x10ACC0u;
    // 0x10acc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10ACC0u;
    {
        const bool branch_taken_0x10acc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACC0u;
        // 0x10acc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acc0) {
            ctx->pc = 0x10ACD0u;
            goto label_10acd0;
        }
    }
    ctx->pc = 0x10ACC8u;
label_10acc8:
    // 0x10acc8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x10acc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x10accc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10acccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10acd0:
    // 0x10acd0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10ACD0u;
    {
        const bool branch_taken_0x10acd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10acd0) {
            ctx->pc = 0x10ACD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10ACD0u;
            // 0x10acd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ACE4u;
            goto label_10ace4;
        }
    }
    ctx->pc = 0x10ACD8u;
    // 0x10acd8: 0xc0443da  jal         func_110F68
    ctx->pc = 0x10ACD8u;
    SET_GPR_U32(ctx, 31, 0x10ACE0u);
    ctx->pc = 0x110F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F68u, 0x10ACD8u, 0x10ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ACE0u;
label_10ace0:
    // 0x10ace0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10ace0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10ace4:
    // 0x10ace4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ace4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ace8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10ace8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10acec: 0x3e00008  jr          $ra
    ctx->pc = 0x10ACECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACECu;
        // 0x10acf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ACECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ACF4u;
    // 0x10acf4: 0x0  nop
    ctx->pc = 0x10acf4u;
    // NOP
    // 0x10acf8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10acf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10acfc: 0x0  nop
    ctx->pc = 0x10acfcu;
    // NOP
    ctx->pc = 0x10ad00u;
}
