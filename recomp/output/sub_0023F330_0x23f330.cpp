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

// Function: sub_0023F330
// Address: 0x23f330 - 0x23f3c0
void sub_0023F330_0x23f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F330_0x23f330");
#endif

    switch (ctx->pc) {
        case 0x23f364u: goto label_23f364;
        case 0x23f36cu: goto label_23f36c;
        case 0x23f374u: goto label_23f374;
        case 0x23f384u: goto label_23f384;
        case 0x23f394u: goto label_23f394;
        case 0x23f39cu: goto label_23f39c;
        case 0x23f3a4u: goto label_23f3a4;
        default: break;
    }

    ctx->pc = 0x23f330u;

    // 0x23f330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f334: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23f334u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23f338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f33c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f340: 0x24900718  addiu       $s0, $a0, 0x718
    ctx->pc = 0x23f340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1816));
    // 0x23f344: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23f344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23f348: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x23f348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23f34c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23f34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23f350: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23f350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f354: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f358: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x23f358u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23f35c: 0xc0763f2  jal         func_1D8FC8
    ctx->pc = 0x23F35Cu;
    SET_GPR_U32(ctx, 31, 0x23F364u);
    ctx->pc = 0x23F360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F35Cu;
    // 0x23f360: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x23F35Cu, 0x23F364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F364u;
label_23f364:
    // 0x23f364: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x23F364u;
    SET_GPR_U32(ctx, 31, 0x23F36Cu);
    ctx->pc = 0x23F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F364u;
    // 0x23f368: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x23F364u, 0x23F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F36Cu;
label_23f36c:
    // 0x23f36c: 0xc076de4  jal         func_1DB790
    ctx->pc = 0x23F36Cu;
    SET_GPR_U32(ctx, 31, 0x23F374u);
    ctx->pc = 0x23F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F36Cu;
    // 0x23f370: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x23F36Cu, 0x23F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F374u;
label_23f374:
    // 0x23f374: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23f374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23f378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f37c: 0xc076970  jal         func_1DA5C0
    ctx->pc = 0x23F37Cu;
    SET_GPR_U32(ctx, 31, 0x23F384u);
    ctx->pc = 0x23F380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F37Cu;
    // 0x23f380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA5C0u, 0x23F37Cu, 0x23F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F384u;
label_23f384:
    // 0x23f384: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23f384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f388: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x23f388u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x23f38c: 0xc0763f2  jal         func_1D8FC8
    ctx->pc = 0x23F38Cu;
    SET_GPR_U32(ctx, 31, 0x23F394u);
    ctx->pc = 0x23F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F38Cu;
    // 0x23f390: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x23F38Cu, 0x23F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F394u;
label_23f394:
    // 0x23f394: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x23F394u;
    SET_GPR_U32(ctx, 31, 0x23F39Cu);
    ctx->pc = 0x23F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F394u;
    // 0x23f398: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x23F394u, 0x23F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F39Cu;
label_23f39c:
    // 0x23f39c: 0xc076de4  jal         func_1DB790
    ctx->pc = 0x23F39Cu;
    SET_GPR_U32(ctx, 31, 0x23F3A4u);
    ctx->pc = 0x23F3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F39Cu;
    // 0x23f3a0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x23F39Cu, 0x23F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F3A4u;
label_23f3a4:
    // 0x23f3a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23f3a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f3a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f3a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f3ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f3acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f3b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f3b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f3b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23f3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x23F3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F3B8u;
        // 0x23f3bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F3C0u;
}
