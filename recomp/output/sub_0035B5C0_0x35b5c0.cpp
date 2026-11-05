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

// Function: sub_0035B5C0
// Address: 0x35b5c0 - 0x35b658
void sub_0035B5C0_0x35b5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B5C0_0x35b5c0");
#endif

    switch (ctx->pc) {
        case 0x35b5e0u: goto label_35b5e0;
        case 0x35b610u: goto label_35b610;
        default: break;
    }

    ctx->pc = 0x35b5c0u;

    // 0x35b5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b5c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35b5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35b5c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x35b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x35b5cc: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x35b5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x35b5d0: 0x2610d4c0  addiu       $s0, $s0, -0x2B40
    ctx->pc = 0x35b5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956224));
    // 0x35b5d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35b5d8: 0xc0d640c  jal         func_359030
    ctx->pc = 0x35B5D8u;
    SET_GPR_U32(ctx, 31, 0x35B5E0u);
    ctx->pc = 0x35B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B5D8u;
    // 0x35b5dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359030u, 0x35B5D8u, 0x35B5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B5E0u;
label_35b5e0:
    // 0x35b5e0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x35B5E0u;
    {
        const bool branch_taken_0x35b5e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35b5e0) {
            ctx->pc = 0x35B5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B5E0u;
            // 0x35b5e4: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B5E8u;
            goto label_35b5e8;
        }
    }
    ctx->pc = 0x35B5E8u;
label_35b5e8:
    // 0x35b5e8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x35b5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x35b5ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35b5f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x35b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35b5f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x35b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b5f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35b5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b5fc: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x35B5FCu;
    {
        const bool branch_taken_0x35b5fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B5FCu;
        // 0x35b600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b5fc) {
            ctx->pc = 0x35B62Cu;
            goto label_35b62c;
        }
    }
    ctx->pc = 0x35B604u;
    // 0x35b604: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x35b604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b608: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35b60c: 0x0  nop
    ctx->pc = 0x35b60cu;
    // NOP
label_35b610:
    // 0x35b610: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B610u;
    {
        const bool branch_taken_0x35b610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x35B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B610u;
        // 0x35b614: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b610) {
            ctx->pc = 0x35B62Cu;
            goto label_35b62c;
        }
    }
    ctx->pc = 0x35B618u;
    // 0x35b618: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x35b618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x35b61c: 0x0  nop
    ctx->pc = 0x35b61cu;
    // NOP
    // 0x35b620: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35B620u;
    {
        const bool branch_taken_0x35b620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35b620) {
            ctx->pc = 0x35B624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B620u;
            // 0x35b624: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b610;
        }
    }
    ctx->pc = 0x35B628u;
    // 0x35b628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b62c:
    // 0x35b62c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x35B62Cu;
    {
        const bool branch_taken_0x35b62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b62c) {
            ctx->pc = 0x35B630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B62Cu;
            // 0x35b630: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B63Cu;
            goto label_35b63c;
        }
    }
    ctx->pc = 0x35B634u;
    // 0x35b634: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35B634u;
    {
        const bool branch_taken_0x35b634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B634u;
        // 0x35b638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b634) {
            ctx->pc = 0x35B648u;
            goto label_35b648;
        }
    }
    ctx->pc = 0x35B63Cu;
label_35b63c:
    // 0x35b63c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b644: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x35b644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_35b648:
    // 0x35b648: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35b648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b64c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35b64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b650: 0x3e00008  jr          $ra
    ctx->pc = 0x35B650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B650u;
        // 0x35b654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B658u;
}
