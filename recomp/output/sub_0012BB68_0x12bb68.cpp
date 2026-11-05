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

// Function: sub_0012BB68
// Address: 0x12bb68 - 0x12bbf8
void sub_0012BB68_0x12bb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BB68_0x12bb68");
#endif

    switch (ctx->pc) {
        case 0x12bb9cu: goto label_12bb9c;
        case 0x12bbd8u: goto label_12bbd8;
        default: break;
    }

    ctx->pc = 0x12bb68u;

    // 0x12bb68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12bb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12bb6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bb70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12bb74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bb74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12bb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12bb7c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x12bb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12bb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12bb84: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x12bb84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12bb8c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x12bb8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12bb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12bb94: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12BB94u;
    SET_GPR_U32(ctx, 31, 0x12BB9Cu);
    ctx->pc = 0x12BB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB94u;
    // 0x12bb98: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12BB94u, 0x12BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BB9Cu;
label_12bb9c:
    // 0x12bb9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12bb9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bba0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12bba4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12BBA4u;
    {
        const bool branch_taken_0x12bba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBA4u;
        // 0x12bba8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bba4) {
            ctx->pc = 0x12BBD8u;
            goto label_12bbd8;
        }
    }
    ctx->pc = 0x12BBACu;
    // 0x12bbac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12bbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbb0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12bbb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12bbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbb8: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x12bbb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12bbbc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x12bbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbc0: 0x1141821  addu        $v1, $t0, $s4
    ctx->pc = 0x12bbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x12bbc4: 0x90620085  lbu         $v0, 0x85($v1)
    ctx->pc = 0x12bbc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 133)));
    // 0x12bbc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12bbcc: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x12bbccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x12bbd0: 0xc05f596  jal         func_17D658
    ctx->pc = 0x12BBD0u;
    SET_GPR_U32(ctx, 31, 0x12BBD8u);
    ctx->pc = 0x12BBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BBD0u;
    // 0x12bbd4: 0x8d040004  lw          $a0, 0x4($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D658u, 0x12BBD0u, 0x12BBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BBD8u;
label_12bbd8:
    // 0x12bbd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bbdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bbdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bbe0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12bbe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bbe4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12bbe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bbe8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12bbe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bbec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12bbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12bbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x12BBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BBF0u;
        // 0x12bbf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BBF8u;
}
