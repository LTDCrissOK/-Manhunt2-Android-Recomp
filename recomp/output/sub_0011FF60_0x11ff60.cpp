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

// Function: sub_0011FF60
// Address: 0x11ff60 - 0x120028
void sub_0011FF60_0x11ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FF60_0x11ff60");
#endif

    switch (ctx->pc) {
        case 0x11ffd8u: goto label_11ffd8;
        case 0x11fff4u: goto label_11fff4;
        default: break;
    }

    ctx->pc = 0x11ff60u;

    // 0x11ff60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ff64: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x11ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x11ff68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11ff68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11ff6c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x11ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x11ff70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11ff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11ff74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11ff74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ff7c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x11ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x11ff80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11ff84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x11ff84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11ff88: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x11ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x11ff8c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x11ff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11ff90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ff90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff94: 0x8cb0020c  lw          $s0, 0x20C($a1)
    ctx->pc = 0x11ff94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x11ff98: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11FF98u;
    {
        const bool branch_taken_0x11ff98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FF98u;
        // 0x11ff9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ff98) {
            ctx->pc = 0x12000Cu;
            goto label_12000c;
        }
    }
    ctx->pc = 0x11FFA0u;
    // 0x11ffa0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11ffa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ffa8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ffac: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x11ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x11ffb0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FFB0u;
    {
        const bool branch_taken_0x11ffb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ffb0) {
            ctx->pc = 0x11FFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FFB0u;
            // 0x11ffb4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FFC0u;
            goto label_11ffc0;
        }
    }
    ctx->pc = 0x11FFB8u;
    // 0x11ffb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11FFB8u;
    {
        const bool branch_taken_0x11ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFB8u;
        // 0x11ffbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffb8) {
            ctx->pc = 0x11FFC8u;
            goto label_11ffc8;
        }
    }
    ctx->pc = 0x11FFC0u;
label_11ffc0:
    // 0x11ffc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ffc4: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x11ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_11ffc8:
    // 0x11ffc8: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11FFC8u;
    {
        const bool branch_taken_0x11ffc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFC8u;
        // 0x11ffcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffc8) {
            ctx->pc = 0x12000Cu;
            goto label_12000c;
        }
    }
    ctx->pc = 0x11FFD0u;
    // 0x11ffd0: 0xc0480b6  jal         func_1202D8
    ctx->pc = 0x11FFD0u;
    SET_GPR_U32(ctx, 31, 0x11FFD8u);
    ctx->pc = 0x11FFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFD0u;
    // 0x11ffd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202D8u, 0x11FFD0u, 0x11FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFD8u;
label_11ffd8:
    // 0x11ffd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FFD8u;
    {
        const bool branch_taken_0x11ffd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFD8u;
        // 0x11ffdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffd8) {
            ctx->pc = 0x11FFE8u;
            goto label_11ffe8;
        }
    }
    ctx->pc = 0x11FFE0u;
    // 0x11ffe0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11FFE0u;
    {
        const bool branch_taken_0x11ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFE0u;
        // 0x11ffe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ffe0) {
            ctx->pc = 0x12000Cu;
            goto label_12000c;
        }
    }
    ctx->pc = 0x11FFE8u;
label_11ffe8:
    // 0x11ffe8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ffe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffec: 0xc048254  jal         func_120950
    ctx->pc = 0x11FFECu;
    SET_GPR_U32(ctx, 31, 0x11FFF4u);
    ctx->pc = 0x11FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFECu;
    // 0x11fff0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120950u, 0x11FFECu, 0x11FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFF4u;
label_11fff4:
    // 0x11fff4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FFF4u;
    {
        const bool branch_taken_0x11fff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFF4u;
        // 0x11fff8: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fff4) {
            ctx->pc = 0x120008u;
            goto label_120008;
        }
    }
    ctx->pc = 0x11FFFCu;
    // 0x11fffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120000: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x120000u;
    {
        const bool branch_taken_0x120000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120000u;
        // 0x120004: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120000) {
            ctx->pc = 0x12000Cu;
            goto label_12000c;
        }
    }
    ctx->pc = 0x120008u;
label_120008:
    // 0x120008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12000c:
    // 0x12000c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12000cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x120010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x120014: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x120014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120018: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x120018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12001c: 0x3e00008  jr          $ra
    ctx->pc = 0x12001Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12001Cu;
        // 0x120020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12001Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120024u;
    // 0x120024: 0x0  nop
    ctx->pc = 0x120024u;
    // NOP
    ctx->pc = 0x120028u;
}
