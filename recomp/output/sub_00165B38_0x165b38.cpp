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

// Function: sub_00165B38
// Address: 0x165b38 - 0x165bd0
void sub_00165B38_0x165b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165B38_0x165b38");
#endif

    switch (ctx->pc) {
        case 0x165b68u: goto label_165b68;
        case 0x165b8cu: goto label_165b8c;
        case 0x165b98u: goto label_165b98;
        default: break;
    }

    ctx->pc = 0x165b38u;

    // 0x165b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165b3c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x165b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x165b40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x165b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165b4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x165b50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x165b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x165b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x165b58: 0x26060228  addiu       $a2, $s0, 0x228
    ctx->pc = 0x165b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x165b5c: 0x2604022c  addiu       $a0, $s0, 0x22C
    ctx->pc = 0x165b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x165b60: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x165b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x165b64: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x165b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_165b68:
    // 0x165b68: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x165b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x165b6c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x165b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165b70: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x165B70u;
    {
        const bool branch_taken_0x165b70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B70u;
        // 0x165b74: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b70) {
            ctx->pc = 0x165BA0u;
            goto label_165ba0;
        }
    }
    ctx->pc = 0x165B78u;
    // 0x165b78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x165b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165b7c: 0x14670009  bne         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x165B7Cu;
    {
        const bool branch_taken_0x165b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x165B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B7Cu;
        // 0x165b80: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b7c) {
            ctx->pc = 0x165BA4u;
            goto label_165ba4;
        }
    }
    ctx->pc = 0x165B84u;
    // 0x165b84: 0xc04f1b6  jal         func_13C6D8
    ctx->pc = 0x165B84u;
    SET_GPR_U32(ctx, 31, 0x165B8Cu);
    ctx->pc = 0x165B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B84u;
    // 0x165b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6D8u, 0x165B84u, 0x165B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B8Cu;
label_165b8c:
    // 0x165b8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b90: 0xc04f372  jal         func_13CDC8
    ctx->pc = 0x165B90u;
    SET_GPR_U32(ctx, 31, 0x165B98u);
    ctx->pc = 0x165B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B90u;
    // 0x165b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDC8u, 0x165B90u, 0x165B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B98u;
label_165b98:
    // 0x165b98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x165B98u;
    {
        const bool branch_taken_0x165b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B98u;
        // 0x165b9c: 0xae120304  sw          $s2, 0x304($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b98) {
            ctx->pc = 0x165BB4u;
            goto label_165bb4;
        }
    }
    ctx->pc = 0x165BA0u;
label_165ba0:
    // 0x165ba0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x165ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_165ba4:
    // 0x165ba4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x165ba4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x165ba8: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x165ba8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x165bac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x165BACu;
    {
        const bool branch_taken_0x165bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x165BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BACu;
        // 0x165bb0: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bac) {
            ctx->pc = 0x165B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165b68;
        }
    }
    ctx->pc = 0x165BB4u;
label_165bb4:
    // 0x165bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165bb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165bb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165bbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165bc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x165bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x165BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BC4u;
        // 0x165bc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165BCCu;
    // 0x165bcc: 0x0  nop
    ctx->pc = 0x165bccu;
    // NOP
    ctx->pc = 0x165bd0u;
}
