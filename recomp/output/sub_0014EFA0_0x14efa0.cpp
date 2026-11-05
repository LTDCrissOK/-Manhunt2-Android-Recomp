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

// Function: sub_0014EFA0
// Address: 0x14efa0 - 0x14f028
void sub_0014EFA0_0x14efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EFA0_0x14efa0");
#endif

    switch (ctx->pc) {
        case 0x14efd8u: goto label_14efd8;
        case 0x14efe4u: goto label_14efe4;
        case 0x14eff8u: goto label_14eff8;
        case 0x14f00cu: goto label_14f00c;
        default: break;
    }

    ctx->pc = 0x14efa0u;

    // 0x14efa0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14efa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14efa4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x14efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14efa8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x14efa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14efac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14efacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14efb0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14efb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14efb4: 0x248404f0  addiu       $a0, $a0, 0x4F0
    ctx->pc = 0x14efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1264));
    // 0x14efb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14efbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14efbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14efc0: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x14efc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14efc4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x14efc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14efc8: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14EFC8u;
    {
        const bool branch_taken_0x14efc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFC8u;
        // 0x14efcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efc8) {
            ctx->pc = 0x14F010u;
            goto label_14f010;
        }
    }
    ctx->pc = 0x14EFD0u;
    // 0x14efd0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14EFD0u;
    SET_GPR_U32(ctx, 31, 0x14EFD8u);
    ctx->pc = 0x14EFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EFD0u;
    // 0x14efd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14EFD0u, 0x14EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EFD8u;
label_14efd8:
    // 0x14efd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14efd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14efdc: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14EFDCu;
    SET_GPR_U32(ctx, 31, 0x14EFE4u);
    ctx->pc = 0x14EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EFDCu;
    // 0x14efe0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14EFDCu, 0x14EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EFE4u;
label_14efe4:
    // 0x14efe4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14EFE4u;
    {
        const bool branch_taken_0x14efe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14efe4) {
            ctx->pc = 0x14EFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EFE4u;
            // 0x14efe8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F000u;
            goto label_14f000;
        }
    }
    ctx->pc = 0x14EFECu;
    // 0x14efec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14efecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eff0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14EFF0u;
    SET_GPR_U32(ctx, 31, 0x14EFF8u);
    ctx->pc = 0x14EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EFF0u;
    // 0x14eff4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14EFF0u, 0x14EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EFF8u;
label_14eff8:
    // 0x14eff8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14EFF8u;
    {
        const bool branch_taken_0x14eff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EFF8u;
        // 0x14effc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eff8) {
            ctx->pc = 0x14F010u;
            goto label_14f010;
        }
    }
    ctx->pc = 0x14F000u;
label_14f000:
    // 0x14f000: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f004: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F004u;
    SET_GPR_U32(ctx, 31, 0x14F00Cu);
    ctx->pc = 0x14F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F004u;
    // 0x14f008: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F004u, 0x14F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F00Cu;
label_14f00c:
    // 0x14f00c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f010:
    // 0x14f010: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14f010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f014: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14f014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f01c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F01Cu;
        // 0x14f020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F024u;
    // 0x14f024: 0x0  nop
    ctx->pc = 0x14f024u;
    // NOP
    ctx->pc = 0x14f028u;
}
