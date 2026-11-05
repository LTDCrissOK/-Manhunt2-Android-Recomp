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

// Function: sub_0033CB68
// Address: 0x33cb68 - 0x33cc10
void sub_0033CB68_0x33cb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CB68_0x33cb68");
#endif

    switch (ctx->pc) {
        case 0x33cba4u: goto label_33cba4;
        case 0x33cbb4u: goto label_33cbb4;
        case 0x33cbc0u: goto label_33cbc0;
        case 0x33cbd8u: goto label_33cbd8;
        default: break;
    }

    ctx->pc = 0x33cb68u;

    // 0x33cb68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33cb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33cb6c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x33cb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33cb70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33cb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33cb74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33cb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33cb78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33cb78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cb7c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33cb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33cb80: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x33cb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x33cb84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33cb88: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x33cb88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33cb8c: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x33CB8Cu;
    {
        const bool branch_taken_0x33cb8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB8Cu;
        // 0x33cb90: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb8c) {
            ctx->pc = 0x33CBF0u;
            goto label_33cbf0;
        }
    }
    ctx->pc = 0x33CB94u;
    // 0x33cb94: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x33cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33cb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33cb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cb9c: 0xc0c24de  jal         func_309378
    ctx->pc = 0x33CB9Cu;
    SET_GPR_U32(ctx, 31, 0x33CBA4u);
    ctx->pc = 0x33CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CB9Cu;
    // 0x33cba0: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x309378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309378u, 0x33CB9Cu, 0x33CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBA4u;
label_33cba4:
    // 0x33cba4: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x33cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33cba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33cba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cbac: 0xc0c24de  jal         func_309378
    ctx->pc = 0x33CBACu;
    SET_GPR_U32(ctx, 31, 0x33CBB4u);
    ctx->pc = 0x33CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBACu;
    // 0x33cbb0: 0x34a50004  ori         $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x309378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309378u, 0x33CBACu, 0x33CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBB4u;
label_33cbb4:
    // 0x33cbb4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x33cbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33cbb8: 0xc0c49d2  jal         func_312748
    ctx->pc = 0x33CBB8u;
    SET_GPR_U32(ctx, 31, 0x33CBC0u);
    ctx->pc = 0x33CBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBB8u;
    // 0x33cbbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312748u, 0x33CBB8u, 0x33CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBC0u;
label_33cbc0:
    // 0x33cbc0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33CBC0u;
    {
        const bool branch_taken_0x33cbc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBC0u;
        // 0x33cbc4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cbc0) {
            ctx->pc = 0x33CBE0u;
            goto label_33cbe0;
        }
    }
    ctx->pc = 0x33CBC8u;
    // 0x33cbc8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x33cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x33cbcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33cbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cbd0: 0xc0a8e12  jal         func_2A3848
    ctx->pc = 0x33CBD0u;
    SET_GPR_U32(ctx, 31, 0x33CBD8u);
    ctx->pc = 0x33CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CBD0u;
    // 0x33cbd4: 0x2484f250  addiu       $a0, $a0, -0xDB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x33CBD0u, 0x33CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CBD8u;
label_33cbd8:
    // 0x33cbd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33CBD8u;
    {
        const bool branch_taken_0x33cbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBD8u;
        // 0x33cbdc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cbd8) {
            ctx->pc = 0x33CBE8u;
            goto label_33cbe8;
        }
    }
    ctx->pc = 0x33CBE0u;
label_33cbe0:
    // 0x33cbe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33cbe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cbe4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_33cbe8:
    // 0x33cbe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cbec: 0xa242003a  sb          $v0, 0x3A($s2)
    ctx->pc = 0x33cbecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 2));
label_33cbf0:
    // 0x33cbf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33cbf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cbf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cbf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33cbf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33cbfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33cbfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cc00: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33cc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33cc04: 0x3e00008  jr          $ra
    ctx->pc = 0x33CC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC04u;
        // 0x33cc08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CC0Cu;
    // 0x33cc0c: 0x0  nop
    ctx->pc = 0x33cc0cu;
    // NOP
    ctx->pc = 0x33cc10u;
}
