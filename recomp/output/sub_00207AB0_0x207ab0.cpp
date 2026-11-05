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

// Function: sub_00207AB0
// Address: 0x207ab0 - 0x207b18
void sub_00207AB0_0x207ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207AB0_0x207ab0");
#endif

    switch (ctx->pc) {
        case 0x207ab0u: goto label_207ab0;
        case 0x207ab4u: goto label_207ab4;
        case 0x207ab8u: goto label_207ab8;
        case 0x207abcu: goto label_207abc;
        case 0x207ac0u: goto label_207ac0;
        case 0x207ac4u: goto label_207ac4;
        case 0x207ac8u: goto label_207ac8;
        case 0x207accu: goto label_207acc;
        case 0x207ad0u: goto label_207ad0;
        case 0x207ad4u: goto label_207ad4;
        case 0x207ad8u: goto label_207ad8;
        case 0x207adcu: goto label_207adc;
        case 0x207ae0u: goto label_207ae0;
        case 0x207ae4u: goto label_207ae4;
        case 0x207ae8u: goto label_207ae8;
        case 0x207aecu: goto label_207aec;
        case 0x207af0u: goto label_207af0;
        case 0x207af4u: goto label_207af4;
        case 0x207af8u: goto label_207af8;
        case 0x207afcu: goto label_207afc;
        case 0x207b00u: goto label_207b00;
        case 0x207b04u: goto label_207b04;
        case 0x207b08u: goto label_207b08;
        case 0x207b0cu: goto label_207b0c;
        case 0x207b10u: goto label_207b10;
        case 0x207b14u: goto label_207b14;
        default: break;
    }

    ctx->pc = 0x207ab0u;

label_207ab0:
    // 0x207ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_207ab4:
    // 0x207ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_207ab8:
    // 0x207ab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_207abc:
    // 0x207abc: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x207abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_207ac0:
    // 0x207ac0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x207ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_207ac4:
    // 0x207ac4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x207ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207ac8:
    // 0x207ac8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x207ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_207acc:
    // 0x207acc: 0x24920018  addiu       $s2, $a0, 0x18
    ctx->pc = 0x207accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_207ad0:
    // 0x207ad0: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x207ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_207ad4:
    // 0x207ad4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x207ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_207ad8:
    // 0x207ad8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_207adc:
    if (ctx->pc == 0x207ADCu) {
        ctx->pc = 0x207ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AD8u;
        // 0x207adc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207AE0u;
        goto label_207ae0;
    }
    ctx->pc = 0x207AD8u;
    {
        const bool branch_taken_0x207ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AD8u;
        // 0x207adc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207ad8) {
            ctx->pc = 0x207AF4u;
            goto label_207af4;
        }
    }
    ctx->pc = 0x207AE0u;
label_207ae0:
    // 0x207ae0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x207ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_207ae4:
    // 0x207ae4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x207ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_207ae8:
    // 0x207ae8: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x207ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_207aec:
    // 0x207aec: 0xa0f809  jalr        $a1
label_207af0:
    if (ctx->pc == 0x207AF0u) {
        ctx->pc = 0x207AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AECu;
        // 0x207af0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207AF4u;
        goto label_207af4;
    }
    ctx->pc = 0x207AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x207AF4u);
        ctx->pc = 0x207AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AECu;
        // 0x207af0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207AECu, 0x207AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207AF4u;
label_207af4:
    // 0x207af4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x207af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_207af8:
    // 0x207af8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_207afc:
    if (ctx->pc == 0x207AFCu) {
        ctx->pc = 0x207AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AF8u;
        // 0x207afc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B00u;
        goto label_207b00;
    }
    ctx->pc = 0x207AF8u;
    {
        const bool branch_taken_0x207af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AF8u;
        // 0x207afc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207af8) {
            ctx->pc = 0x207AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207ad0;
        }
    }
    ctx->pc = 0x207B00u;
label_207b00:
    // 0x207b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207b04:
    // 0x207b04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_207b08:
    // 0x207b08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_207b0c:
    // 0x207b0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_207b10:
    // 0x207b10: 0x3e00008  jr          $ra
label_207b14:
    if (ctx->pc == 0x207B14u) {
        ctx->pc = 0x207B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B10u;
        // 0x207b14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207B18u;
        goto label_fallthrough_0x207b10;
    }
    ctx->pc = 0x207B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207B10u;
        // 0x207b14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x207b10:
    ctx->pc = 0x207B18u;
}
