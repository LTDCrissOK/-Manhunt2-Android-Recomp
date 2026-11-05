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

// Function: sub_00217A88
// Address: 0x217a88 - 0x217b18
void sub_00217A88_0x217a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217A88_0x217a88");
#endif

    switch (ctx->pc) {
        case 0x217aa8u: goto label_217aa8;
        case 0x217ab8u: goto label_217ab8;
        case 0x217ad8u: goto label_217ad8;
        case 0x217aecu: goto label_217aec;
        case 0x217b00u: goto label_217b00;
        default: break;
    }

    ctx->pc = 0x217a88u;

    // 0x217a88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x217a94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217a9c: 0x8e300104  lw          $s0, 0x104($s1)
    ctx->pc = 0x217a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x217aa0: 0xc085de6  jal         func_217798
    ctx->pc = 0x217AA0u;
    SET_GPR_U32(ctx, 31, 0x217AA8u);
    ctx->pc = 0x217AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AA0u;
    // 0x217aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217798u, 0x217AA0u, 0x217AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AA8u;
label_217aa8:
    // 0x217aa8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x217aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x217aac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x217aacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ab0: 0x262201bc  addiu       $v0, $s1, 0x1BC
    ctx->pc = 0x217ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x217ab4: 0x0  nop
    ctx->pc = 0x217ab4u;
    // NOP
label_217ab8:
    // 0x217ab8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x217ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x217abc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x217abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x217ac0: 0x0  nop
    ctx->pc = 0x217ac0u;
    // NOP
    // 0x217ac4: 0x0  nop
    ctx->pc = 0x217ac4u;
    // NOP
    // 0x217ac8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x217AC8u;
    {
        const bool branch_taken_0x217ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x217ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AC8u;
        // 0x217acc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ac8) {
            ctx->pc = 0x217AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217ab8;
        }
    }
    ctx->pc = 0x217AD0u;
    // 0x217ad0: 0xc085e96  jal         func_217A58
    ctx->pc = 0x217AD0u;
    SET_GPR_U32(ctx, 31, 0x217AD8u);
    ctx->pc = 0x217AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AD0u;
    // 0x217ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217A58u, 0x217AD0u, 0x217AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AD8u;
label_217ad8:
    // 0x217ad8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x217AD8u;
    {
        const bool branch_taken_0x217ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AD8u;
        // 0x217adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ad8) {
            ctx->pc = 0x217AF4u;
            goto label_217af4;
        }
    }
    ctx->pc = 0x217AE0u;
    // 0x217ae0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x217ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217ae4: 0xc085e6e  jal         func_2179B8
    ctx->pc = 0x217AE4u;
    SET_GPR_U32(ctx, 31, 0x217AECu);
    ctx->pc = 0x217AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AE4u;
    // 0x217ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2179B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2179B8u, 0x217AE4u, 0x217AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AECu;
label_217aec:
    // 0x217aec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x217AECu;
    {
        const bool branch_taken_0x217aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AECu;
        // 0x217af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217aec) {
            ctx->pc = 0x217AF8u;
            goto label_217af8;
        }
    }
    ctx->pc = 0x217AF4u;
label_217af4:
    // 0x217af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217af8:
    // 0x217af8: 0xc0848c8  jal         func_212320
    ctx->pc = 0x217AF8u;
    SET_GPR_U32(ctx, 31, 0x217B00u);
    ctx->pc = 0x217AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AF8u;
    // 0x217afc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212320u, 0x217AF8u, 0x217B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B00u;
label_217b00:
    // 0x217b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217b04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217b08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x217B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B0Cu;
        // 0x217b10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217B14u;
    // 0x217b14: 0x0  nop
    ctx->pc = 0x217b14u;
    // NOP
    ctx->pc = 0x217b18u;
}
