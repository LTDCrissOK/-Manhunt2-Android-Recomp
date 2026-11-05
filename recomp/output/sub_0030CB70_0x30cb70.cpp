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

// Function: sub_0030CB70
// Address: 0x30cb70 - 0x30cc08
void sub_0030CB70_0x30cb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CB70_0x30cb70");
#endif

    switch (ctx->pc) {
        case 0x30cb94u: goto label_30cb94;
        case 0x30cba0u: goto label_30cba0;
        case 0x30cbb4u: goto label_30cbb4;
        case 0x30cbc4u: goto label_30cbc4;
        case 0x30cbd0u: goto label_30cbd0;
        case 0x30cbdcu: goto label_30cbdc;
        case 0x30cbecu: goto label_30cbec;
        default: break;
    }

    ctx->pc = 0x30cb70u;

    // 0x30cb70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30cb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30cb74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30cb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30cb78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30cb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30cb7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30cb7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cb80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30cb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30cb84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x30cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x30cb88: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x30cb88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x30cb8c: 0xc0c51ee  jal         func_3147B8
    ctx->pc = 0x30CB8Cu;
    SET_GPR_U32(ctx, 31, 0x30CB94u);
    ctx->pc = 0x30CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB8Cu;
    // 0x30cb90: 0x8cb20000  lw          $s2, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3147B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3147B8u, 0x30CB8Cu, 0x30CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB94u;
label_30cb94:
    // 0x30cb94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30cb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cb98: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x30CB98u;
    SET_GPR_U32(ctx, 31, 0x30CBA0u);
    ctx->pc = 0x30CB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB98u;
    // 0x30cb9c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x30CB98u, 0x30CBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBA0u;
label_30cba0:
    // 0x30cba0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30cba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30cba4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30CBA4u;
    {
        const bool branch_taken_0x30cba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBA4u;
        // 0x30cba8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cba4) {
            ctx->pc = 0x30CBF0u;
            goto label_30cbf0;
        }
    }
    ctx->pc = 0x30CBACu;
    // 0x30cbac: 0xc0c5424  jal         func_315090
    ctx->pc = 0x30CBACu;
    SET_GPR_U32(ctx, 31, 0x30CBB4u);
    ctx->pc = 0x30CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBACu;
    // 0x30cbb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315090u, 0x30CBACu, 0x30CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBB4u;
label_30cbb4:
    // 0x30cbb4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30CBB4u;
    {
        const bool branch_taken_0x30cbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBB4u;
        // 0x30cbb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cbb4) {
            ctx->pc = 0x30CBF0u;
            goto label_30cbf0;
        }
    }
    ctx->pc = 0x30CBBCu;
    // 0x30cbbc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x30CBBCu;
    SET_GPR_U32(ctx, 31, 0x30CBC4u);
    ctx->pc = 0x30CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBBCu;
    // 0x30cbc0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x30CBBCu, 0x30CBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBC4u;
label_30cbc4:
    // 0x30cbc4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x30cbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30cbc8: 0xc0c9b3e  jal         func_326CF8
    ctx->pc = 0x30CBC8u;
    SET_GPR_U32(ctx, 31, 0x30CBD0u);
    ctx->pc = 0x30CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBC8u;
    // 0x30cbcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326CF8u, 0x30CBC8u, 0x30CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBD0u;
label_30cbd0:
    // 0x30cbd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30cbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cbd4: 0xc0c5354  jal         func_314D50
    ctx->pc = 0x30CBD4u;
    SET_GPR_U32(ctx, 31, 0x30CBDCu);
    ctx->pc = 0x30CBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBD4u;
    // 0x30cbd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314D50u, 0x30CBD4u, 0x30CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBDCu;
label_30cbdc:
    // 0x30cbdc: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x30cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x30cbe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30cbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cbe4: 0xc0c24de  jal         func_309378
    ctx->pc = 0x30CBE4u;
    SET_GPR_U32(ctx, 31, 0x30CBECu);
    ctx->pc = 0x30CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CBE4u;
    // 0x30cbe8: 0x34a50004  ori         $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x309378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309378u, 0x30CBE4u, 0x30CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CBECu;
label_30cbec:
    // 0x30cbec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30cbecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30cbf0:
    // 0x30cbf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30cbf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30cbf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30cbf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cbf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30cbf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cbfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x30cbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cc00: 0x3e00008  jr          $ra
    ctx->pc = 0x30CC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC00u;
        // 0x30cc04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CC08u;
}
