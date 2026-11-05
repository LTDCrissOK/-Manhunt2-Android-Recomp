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

// Function: sub_003D8830
// Address: 0x3d8830 - 0x3d88c0
void sub_003D8830_0x3d8830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8830_0x3d8830");
#endif

    switch (ctx->pc) {
        case 0x3d885cu: goto label_3d885c;
        case 0x3d887cu: goto label_3d887c;
        default: break;
    }

    ctx->pc = 0x3d8830u;

    // 0x3d8830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d8834: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3d8834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3d8838: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3d8838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3d883c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d883cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d8840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d8844: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3d8844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3d8848: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d8848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d884c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D884Cu;
    {
        const bool branch_taken_0x3d884c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D884Cu;
        // 0x3d8850: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d884c) {
            ctx->pc = 0x3D8870u;
            goto label_3d8870;
        }
    }
    ctx->pc = 0x3D8854u;
    // 0x3d8854: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3D8854u;
    SET_GPR_U32(ctx, 31, 0x3D885Cu);
    ctx->pc = 0x3D8858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8854u;
    // 0x3d8858: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3D8854u, 0x3D885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D885Cu;
label_3d885c:
    // 0x3d885c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3d885cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3d8860: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3d8860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3d8864: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3d8864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3d8868: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8868u;
    {
        const bool branch_taken_0x3d8868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8868u;
        // 0x3d886c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8868) {
            ctx->pc = 0x3D888Cu;
            goto label_3d888c;
        }
    }
    ctx->pc = 0x3D8870u;
label_3d8870:
    // 0x3d8870: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3d8870u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d8874: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3D8874u;
    SET_GPR_U32(ctx, 31, 0x3D887Cu);
    ctx->pc = 0x3D8878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8874u;
    // 0x3d8878: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3D8874u, 0x3D887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D887Cu;
label_3d887c:
    // 0x3d887c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3d887cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3d8880: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3d8880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3d8884: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3d8884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3d8888: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3d8888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3d888c:
    // 0x3d888c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3d888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d8890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d8890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8894: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3d8894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3d8898: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3d8898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d889c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d88a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3d88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3d88a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d88a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3d88a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d88ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d88acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3d88b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3d88b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d88b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D88B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D88B4u;
        // 0x3d88b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D88B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D88BCu;
    // 0x3d88bc: 0x0  nop
    ctx->pc = 0x3d88bcu;
    // NOP
    ctx->pc = 0x3d88c0u;
}
