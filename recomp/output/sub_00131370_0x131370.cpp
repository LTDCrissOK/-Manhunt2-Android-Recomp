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

// Function: sub_00131370
// Address: 0x131370 - 0x131400
void sub_00131370_0x131370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131370_0x131370");
#endif

    switch (ctx->pc) {
        case 0x1313a0u: goto label_1313a0;
        case 0x1313a8u: goto label_1313a8;
        case 0x1313dcu: goto label_1313dc;
        default: break;
    }

    ctx->pc = 0x131370u;

    // 0x131370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131374: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x131374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x131378: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13137c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13137cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131384: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x131384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x131388: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x131388u;
    {
        const bool branch_taken_0x131388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131388) {
            ctx->pc = 0x13138Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131388u;
            // 0x13138c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1313E4u;
            goto label_1313e4;
        }
    }
    ctx->pc = 0x131390u;
    // 0x131390: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x131390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x131394: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x131394u;
    {
        const bool branch_taken_0x131394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131394u;
        // 0x131398: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131394) {
            ctx->pc = 0x1313B8u;
            goto label_1313b8;
        }
    }
    ctx->pc = 0x13139Cu;
    // 0x13139c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x13139cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1313a0:
    // 0x1313a0: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1313A0u;
    SET_GPR_U32(ctx, 31, 0x1313A8u);
    ctx->pc = 0x1313A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313A0u;
    // 0x1313a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1313A0u, 0x1313A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313A8u;
label_1313a8:
    // 0x1313a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1313a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1313ac: 0x0  nop
    ctx->pc = 0x1313acu;
    // NOP
    // 0x1313b0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1313B0u;
    {
        const bool branch_taken_0x1313b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1313b0) {
            ctx->pc = 0x1313B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1313B0u;
            // 0x1313b4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1313A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1313a0;
        }
    }
    ctx->pc = 0x1313B8u;
label_1313b8:
    // 0x1313b8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1313b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1313bc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1313bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1313c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1313c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1313c4: 0x24848758  addiu       $a0, $a0, -0x78A8
    ctx->pc = 0x1313c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    // 0x1313c8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1313c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1313cc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1313ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1313d0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1313d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1313d4: 0xc041eb4  jal         func_107AD0
    ctx->pc = 0x1313D4u;
    SET_GPR_U32(ctx, 31, 0x1313DCu);
    ctx->pc = 0x1313D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1313D4u;
    // 0x1313d8: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107AD0u, 0x1313D4u, 0x1313DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313DCu;
label_1313dc:
    // 0x1313dc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1313dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1313e0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1313e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1313e4:
    // 0x1313e4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1313e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1313e8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1313e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1313ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1313ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1313f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1313f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1313f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1313f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1313f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1313F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1313FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1313F8u;
        // 0x1313fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1313F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131400u;
}
