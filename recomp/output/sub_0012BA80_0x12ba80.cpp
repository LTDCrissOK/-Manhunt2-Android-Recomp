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

// Function: sub_0012BA80
// Address: 0x12ba80 - 0x12bb08
void sub_0012BA80_0x12ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BA80_0x12ba80");
#endif

    switch (ctx->pc) {
        case 0x12baa4u: goto label_12baa4;
        case 0x12bae0u: goto label_12bae0;
        default: break;
    }

    ctx->pc = 0x12ba80u;

    // 0x12ba80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ba84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ba88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ba8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ba8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12ba94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12ba94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ba98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12ba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12ba9c: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12BA9Cu;
    SET_GPR_U32(ctx, 31, 0x12BAA4u);
    ctx->pc = 0x12BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BA9Cu;
    // 0x12baa0: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12BA9Cu, 0x12BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BAA4u;
label_12baa4:
    // 0x12baa4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12baa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12baa8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12baac: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12BAACu;
    {
        const bool branch_taken_0x12baac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAACu;
        // 0x12bab0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12baac) {
            ctx->pc = 0x12BAE8u;
            goto label_12bae8;
        }
    }
    ctx->pc = 0x12BAB4u;
    // 0x12bab4: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x12bab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12bab8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12babc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x12babcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12bac0: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x12bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x12bac4: 0x90620085  lbu         $v0, 0x85($v1)
    ctx->pc = 0x12bac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 133)));
    // 0x12bac8: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BAC8u;
    {
        const bool branch_taken_0x12bac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x12BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAC8u;
        // 0x12bacc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bac8) {
            ctx->pc = 0x12BAE8u;
            goto label_12bae8;
        }
    }
    ctx->pc = 0x12BAD0u;
    // 0x12bad0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12bad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bad4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12bad8: 0xc05f570  jal         func_17D5C0
    ctx->pc = 0x12BAD8u;
    SET_GPR_U32(ctx, 31, 0x12BAE0u);
    ctx->pc = 0x12BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BAD8u;
    // 0x12badc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D5C0u, 0x12BAD8u, 0x12BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BAE0u;
label_12bae0:
    // 0x12bae0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12BAE0u;
    {
        const bool branch_taken_0x12bae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAE0u;
        // 0x12bae4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bae0) {
            ctx->pc = 0x12BAF0u;
            goto label_12baf0;
        }
    }
    ctx->pc = 0x12BAE8u;
label_12bae8:
    // 0x12bae8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12bae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12baec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12baecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12baf0:
    // 0x12baf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12baf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12baf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12baf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12baf8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12baf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bafc: 0x3e00008  jr          $ra
    ctx->pc = 0x12BAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BAFCu;
        // 0x12bb00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BB04u;
    // 0x12bb04: 0x0  nop
    ctx->pc = 0x12bb04u;
    // NOP
    ctx->pc = 0x12bb08u;
}
