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

// Function: sub_0036EC30
// Address: 0x36ec30 - 0x36ecf0
void sub_0036EC30_0x36ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EC30_0x36ec30");
#endif

    switch (ctx->pc) {
        case 0x36ec48u: goto label_36ec48;
        case 0x36ec58u: goto label_36ec58;
        case 0x36ec64u: goto label_36ec64;
        case 0x36ec74u: goto label_36ec74;
        case 0x36ec84u: goto label_36ec84;
        case 0x36ec94u: goto label_36ec94;
        case 0x36eca4u: goto label_36eca4;
        case 0x36ecb4u: goto label_36ecb4;
        case 0x36ecc4u: goto label_36ecc4;
        case 0x36ecccu: goto label_36eccc;
        default: break;
    }

    ctx->pc = 0x36ec30u;

    // 0x36ec30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ec34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ec38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36ec38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36ec3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36ec40: 0xc0db950  jal         func_36E540
    ctx->pc = 0x36EC40u;
    SET_GPR_U32(ctx, 31, 0x36EC48u);
    ctx->pc = 0x36EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC40u;
    // 0x36ec44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E540u, 0x36EC40u, 0x36EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC48u;
label_36ec48:
    // 0x36ec48: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x36EC48u;
    {
        const bool branch_taken_0x36ec48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC48u;
        // 0x36ec4c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ec48) {
            ctx->pc = 0x36ECCCu;
            goto label_36eccc;
        }
    }
    ctx->pc = 0x36EC50u;
    // 0x36ec50: 0xc0dbb02  jal         func_36EC08
    ctx->pc = 0x36EC50u;
    SET_GPR_U32(ctx, 31, 0x36EC58u);
    ctx->pc = 0x36EC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC50u;
    // 0x36ec54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EC08u, 0x36EC50u, 0x36EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC58u;
label_36ec58:
    // 0x36ec58: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x36ec58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36ec5c: 0xc0dbb02  jal         func_36EC08
    ctx->pc = 0x36EC5Cu;
    SET_GPR_U32(ctx, 31, 0x36EC64u);
    ctx->pc = 0x36EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC5Cu;
    // 0x36ec60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EC08u, 0x36EC5Cu, 0x36EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC64u;
label_36ec64:
    // 0x36ec64: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x36EC64u;
    {
        const bool branch_taken_0x36ec64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC64u;
        // 0x36ec68: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ec64) {
            ctx->pc = 0x36ECCCu;
            goto label_36eccc;
        }
    }
    ctx->pc = 0x36EC6Cu;
    // 0x36ec6c: 0xc0dbb02  jal         func_36EC08
    ctx->pc = 0x36EC6Cu;
    SET_GPR_U32(ctx, 31, 0x36EC74u);
    ctx->pc = 0x36EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC6Cu;
    // 0x36ec70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EC08u, 0x36EC6Cu, 0x36EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC74u;
label_36ec74:
    // 0x36ec74: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x36EC74u;
    {
        const bool branch_taken_0x36ec74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC74u;
        // 0x36ec78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ec74) {
            ctx->pc = 0x36ECCCu;
            goto label_36eccc;
        }
    }
    ctx->pc = 0x36EC7Cu;
    // 0x36ec7c: 0xc0db95c  jal         func_36E570
    ctx->pc = 0x36EC7Cu;
    SET_GPR_U32(ctx, 31, 0x36EC84u);
    ctx->pc = 0x36EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC7Cu;
    // 0x36ec80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E570u, 0x36EC7Cu, 0x36EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC84u;
label_36ec84:
    // 0x36ec84: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x36EC84u;
    {
        const bool branch_taken_0x36ec84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC84u;
        // 0x36ec88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ec84) {
            ctx->pc = 0x36ECC4u;
            goto label_36ecc4;
        }
    }
    ctx->pc = 0x36EC8Cu;
    // 0x36ec8c: 0xc0dbb02  jal         func_36EC08
    ctx->pc = 0x36EC8Cu;
    SET_GPR_U32(ctx, 31, 0x36EC94u);
    ctx->pc = 0x36EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC8Cu;
    // 0x36ec90: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EC08u, 0x36EC8Cu, 0x36EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC94u;
label_36ec94:
    // 0x36ec94: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36EC94u;
    {
        const bool branch_taken_0x36ec94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ec94) {
            ctx->pc = 0x36ECBCu;
            goto label_36ecbc;
        }
    }
    ctx->pc = 0x36EC9Cu;
    // 0x36ec9c: 0xc0db972  jal         func_36E5C8
    ctx->pc = 0x36EC9Cu;
    SET_GPR_U32(ctx, 31, 0x36ECA4u);
    ctx->pc = 0x36E5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E5C8u, 0x36EC9Cu, 0x36ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ECA4u;
label_36eca4:
    // 0x36eca4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36ECA4u;
    {
        const bool branch_taken_0x36eca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ECA4u;
        // 0x36eca8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eca4) {
            ctx->pc = 0x36ECBCu;
            goto label_36ecbc;
        }
    }
    ctx->pc = 0x36ECACu;
    // 0x36ecac: 0xc0dbb02  jal         func_36EC08
    ctx->pc = 0x36ECACu;
    SET_GPR_U32(ctx, 31, 0x36ECB4u);
    ctx->pc = 0x36ECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ECACu;
    // 0x36ecb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EC08u, 0x36ECACu, 0x36ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ECB4u;
label_36ecb4:
    // 0x36ecb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36ECB4u;
    {
        const bool branch_taken_0x36ecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ECB4u;
        // 0x36ecb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ecb4) {
            ctx->pc = 0x36ECD0u;
            goto label_36ecd0;
        }
    }
    ctx->pc = 0x36ECBCu;
label_36ecbc:
    // 0x36ecbc: 0xc0dbac2  jal         func_36EB08
    ctx->pc = 0x36ECBCu;
    SET_GPR_U32(ctx, 31, 0x36ECC4u);
    ctx->pc = 0x36EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EB08u, 0x36ECBCu, 0x36ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ECC4u;
label_36ecc4:
    // 0x36ecc4: 0xc0dbac4  jal         func_36EB10
    ctx->pc = 0x36ECC4u;
    SET_GPR_U32(ctx, 31, 0x36ECCCu);
    ctx->pc = 0x36EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EB10u, 0x36ECC4u, 0x36ECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ECCCu;
label_36eccc:
    // 0x36eccc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ecccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ecd0:
    // 0x36ecd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ecd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ecd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ecd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ecd8: 0x3e00008  jr          $ra
    ctx->pc = 0x36ECD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ECD8u;
        // 0x36ecdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ECD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ECE0u;
    // 0x36ece0: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x36ece0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x36ece4: 0x0  nop
    ctx->pc = 0x36ece4u;
    // NOP
    // 0x36ece8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x36ece8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x36ecec: 0x0  nop
    ctx->pc = 0x36ececu;
    // NOP
    ctx->pc = 0x36ecf0u;
}
