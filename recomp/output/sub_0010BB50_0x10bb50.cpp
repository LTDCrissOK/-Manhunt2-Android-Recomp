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

// Function: sub_0010BB50
// Address: 0x10bb50 - 0x10bc00
void sub_0010BB50_0x10bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BB50_0x10bb50");
#endif

    switch (ctx->pc) {
        case 0x10bb74u: goto label_10bb74;
        case 0x10bba0u: goto label_10bba0;
        default: break;
    }

    ctx->pc = 0x10bb50u;

    // 0x10bb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10bb54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10bb58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10bb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10bb5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10bb5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10bb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10bb64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10bb64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10bb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10bb6c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10BB6Cu;
    SET_GPR_U32(ctx, 31, 0x10BB74u);
    ctx->pc = 0x10BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB6Cu;
    // 0x10bb70: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10BB6Cu, 0x10BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BB74u;
label_10bb74:
    // 0x10bb74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10bb74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb78: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10bb7c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10BB7Cu;
    {
        const bool branch_taken_0x10bb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB7Cu;
        // 0x10bb80: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb7c) {
            ctx->pc = 0x10BBA8u;
            goto label_10bba8;
        }
    }
    ctx->pc = 0x10BB84u;
    // 0x10bb84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10bb88: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10bb8c: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x10bb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10bb90: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10BB90u;
    {
        const bool branch_taken_0x10bb90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB90u;
        // 0x10bb94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb90) {
            ctx->pc = 0x10BBE8u;
            goto label_10bbe8;
        }
    }
    ctx->pc = 0x10BB98u;
    // 0x10bb98: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x10BB98u;
    SET_GPR_U32(ctx, 31, 0x10BBA0u);
    ctx->pc = 0x10BB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB98u;
    // 0x10bb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x10BB98u, 0x10BBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BBA0u;
label_10bba0:
    // 0x10bba0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BBA0u;
    {
        const bool branch_taken_0x10bba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBA0u;
        // 0x10bba4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bba0) {
            ctx->pc = 0x10BBB0u;
            goto label_10bbb0;
        }
    }
    ctx->pc = 0x10BBA8u;
label_10bba8:
    // 0x10bba8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10BBA8u;
    {
        const bool branch_taken_0x10bba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBA8u;
        // 0x10bbac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bba8) {
            ctx->pc = 0x10BBE8u;
            goto label_10bbe8;
        }
    }
    ctx->pc = 0x10BBB0u;
label_10bbb0:
    // 0x10bbb0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10bbb4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10bbb8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10bbbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10bbc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10bbc4: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x10bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10bbc8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BBC8u;
    {
        const bool branch_taken_0x10bbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bbc8) {
            ctx->pc = 0x10BBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BBC8u;
            // 0x10bbcc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BBD8u;
            goto label_10bbd8;
        }
    }
    ctx->pc = 0x10BBD0u;
    // 0x10bbd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10BBD0u;
    {
        const bool branch_taken_0x10bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBD0u;
        // 0x10bbd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bbd0) {
            ctx->pc = 0x10BBE0u;
            goto label_10bbe0;
        }
    }
    ctx->pc = 0x10BBD8u;
label_10bbd8:
    // 0x10bbd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10bbdc: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x10bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_10bbe0:
    // 0x10bbe0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x10bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x10bbe4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10bbe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10bbe8:
    // 0x10bbe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bbe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bbec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10bbecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10bbf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10bbf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bbf4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10bbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10bbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x10BBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBF8u;
        // 0x10bbfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BC00u;
}
