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

// Function: sub_001467A8
// Address: 0x1467a8 - 0x1468a0
void sub_001467A8_0x1467a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001467A8_0x1467a8");
#endif

    switch (ctx->pc) {
        case 0x1467d8u: goto label_1467d8;
        case 0x1467e0u: goto label_1467e0;
        case 0x146818u: goto label_146818;
        case 0x146820u: goto label_146820;
        case 0x146858u: goto label_146858;
        case 0x146860u: goto label_146860;
        default: break;
    }

    ctx->pc = 0x1467a8u;

    // 0x1467a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1467a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1467ac: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1467acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1467b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1467b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1467b4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1467b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1467b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1467b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1467bc: 0x2450bd38  addiu       $s0, $v0, -0x42C8
    ctx->pc = 0x1467bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950200));
    // 0x1467c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1467c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1467c4: 0xac600790  sw          $zero, 0x790($v1)
    ctx->pc = 0x1467c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F0790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0790u, _value); } while (0);
    // 0x1467c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1467c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48BD3Cu));
    // 0x1467cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1467CCu;
    {
        const bool branch_taken_0x1467cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1467D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1467CCu;
        // 0x1467d0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1467cc) {
            ctx->pc = 0x1467F0u;
            goto label_1467f0;
        }
    }
    ctx->pc = 0x1467D4u;
    // 0x1467d4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1467d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1467d8:
    // 0x1467d8: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1467D8u;
    SET_GPR_U32(ctx, 31, 0x1467E0u);
    ctx->pc = 0x1467DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1467D8u;
    // 0x1467dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1467D8u, 0x1467E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1467E0u;
label_1467e0:
    // 0x1467e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1467e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1467e4: 0x0  nop
    ctx->pc = 0x1467e4u;
    // NOP
    // 0x1467e8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1467E8u;
    {
        const bool branch_taken_0x1467e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1467e8) {
            ctx->pc = 0x1467ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1467E8u;
            // 0x1467ec: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1467D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1467d8;
        }
    }
    ctx->pc = 0x1467F0u;
label_1467f0:
    // 0x1467f0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1467f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1467f4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1467f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1467f8: 0x2451bd48  addiu       $s1, $v0, -0x42B8
    ctx->pc = 0x1467f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950216));
    // 0x1467fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1467fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48BD4Cu));
    // 0x146800: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x146800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x146804: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x146804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x146808: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x146808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x14680c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14680Cu;
    {
        const bool branch_taken_0x14680c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14680Cu;
        // 0x146810: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14680c) {
            ctx->pc = 0x146830u;
            goto label_146830;
        }
    }
    ctx->pc = 0x146814u;
    // 0x146814: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x146814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_146818:
    // 0x146818: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x146818u;
    SET_GPR_U32(ctx, 31, 0x146820u);
    ctx->pc = 0x14681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146818u;
    // 0x14681c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x146818u, 0x146820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146820u;
label_146820:
    // 0x146820: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x146820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x146824: 0x0  nop
    ctx->pc = 0x146824u;
    // NOP
    // 0x146828: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x146828u;
    {
        const bool branch_taken_0x146828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146828) {
            ctx->pc = 0x14682Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146828u;
            // 0x14682c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146818;
        }
    }
    ctx->pc = 0x146830u;
label_146830:
    // 0x146830: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x146830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x146834: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x146834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x146838: 0x2450bd58  addiu       $s0, $v0, -0x42A8
    ctx->pc = 0x146838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950232));
    // 0x14683c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14683cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48BD5Cu));
    // 0x146840: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x146840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x146844: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x146844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x146848: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x146848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x14684c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14684Cu;
    {
        const bool branch_taken_0x14684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14684Cu;
        // 0x146850: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14684c) {
            ctx->pc = 0x146870u;
            goto label_146870;
        }
    }
    ctx->pc = 0x146854u;
    // 0x146854: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x146854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_146858:
    // 0x146858: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x146858u;
    SET_GPR_U32(ctx, 31, 0x146860u);
    ctx->pc = 0x14685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146858u;
    // 0x14685c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x146858u, 0x146860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146860u;
label_146860:
    // 0x146860: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x146860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146864: 0x0  nop
    ctx->pc = 0x146864u;
    // NOP
    // 0x146868: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x146868u;
    {
        const bool branch_taken_0x146868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146868) {
            ctx->pc = 0x14686Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146868u;
            // 0x14686c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146858;
        }
    }
    ctx->pc = 0x146870u;
label_146870:
    // 0x146870: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x146870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x146874: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x146874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x146878: 0xac400794  sw          $zero, 0x794($v0)
    ctx->pc = 0x146878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F0794u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0794u, _value); } while (0);
    // 0x14687c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14687cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x146880: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x146880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x146884: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x146884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x146888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14688c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14688cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146894: 0x3e00008  jr          $ra
    ctx->pc = 0x146894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146894u;
        // 0x146898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14689Cu;
    // 0x14689c: 0x0  nop
    ctx->pc = 0x14689cu;
    // NOP
    ctx->pc = 0x1468a0u;
}
