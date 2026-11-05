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

// Function: sub_0035B6F0
// Address: 0x35b6f0 - 0x35b780
void sub_0035B6F0_0x35b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B6F0_0x35b6f0");
#endif

    switch (ctx->pc) {
        case 0x35b710u: goto label_35b710;
        case 0x35b740u: goto label_35b740;
        default: break;
    }

    ctx->pc = 0x35b6f0u;

    // 0x35b6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b6f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35b6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35b6f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x35b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x35b6fc: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x35b6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x35b700: 0x2610d4c0  addiu       $s0, $s0, -0x2B40
    ctx->pc = 0x35b700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956224));
    // 0x35b704: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35b708: 0xc0d640c  jal         func_359030
    ctx->pc = 0x35B708u;
    SET_GPR_U32(ctx, 31, 0x35B710u);
    ctx->pc = 0x35B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B708u;
    // 0x35b70c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359030u, 0x35B708u, 0x35B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B710u;
label_35b710:
    // 0x35b710: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x35B710u;
    {
        const bool branch_taken_0x35b710 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35b710) {
            ctx->pc = 0x35B714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B710u;
            // 0x35b714: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B718u;
            goto label_35b718;
        }
    }
    ctx->pc = 0x35B718u;
label_35b718:
    // 0x35b718: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x35b718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x35b71c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35b720: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x35b720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35b724: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35b724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35b728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b72c: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x35B72Cu;
    {
        const bool branch_taken_0x35b72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x35B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B72Cu;
        // 0x35b730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b72c) {
            ctx->pc = 0x35B75Cu;
            goto label_35b75c;
        }
    }
    ctx->pc = 0x35B734u;
    // 0x35b734: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x35b734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b738: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35b738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b73c: 0x0  nop
    ctx->pc = 0x35b73cu;
    // NOP
label_35b740:
    // 0x35b740: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B740u;
    {
        const bool branch_taken_0x35b740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x35B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B740u;
        // 0x35b744: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b740) {
            ctx->pc = 0x35B75Cu;
            goto label_35b75c;
        }
    }
    ctx->pc = 0x35B748u;
    // 0x35b748: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x35b748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x35b74c: 0x0  nop
    ctx->pc = 0x35b74cu;
    // NOP
    // 0x35b750: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35B750u;
    {
        const bool branch_taken_0x35b750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x35b750) {
            ctx->pc = 0x35B754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B750u;
            // 0x35b754: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b740;
        }
    }
    ctx->pc = 0x35B758u;
    // 0x35b758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b75c:
    // 0x35b75c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x35B75Cu;
    {
        const bool branch_taken_0x35b75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b75c) {
            ctx->pc = 0x35B760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B75Cu;
            // 0x35b760: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B76Cu;
            goto label_35b76c;
        }
    }
    ctx->pc = 0x35B764u;
    // 0x35b764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35B764u;
    {
        const bool branch_taken_0x35b764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B764u;
        // 0x35b768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b764) {
            ctx->pc = 0x35B770u;
            goto label_35b770;
        }
    }
    ctx->pc = 0x35B76Cu;
label_35b76c:
    // 0x35b76c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x35b76cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_35b770:
    // 0x35b770: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35b770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b774: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35b774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b778: 0x3e00008  jr          $ra
    ctx->pc = 0x35B778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B778u;
        // 0x35b77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B780u;
}
