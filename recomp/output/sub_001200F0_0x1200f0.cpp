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

// Function: sub_001200F0
// Address: 0x1200f0 - 0x120198
void sub_001200F0_0x1200f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001200F0_0x1200f0");
#endif

    switch (ctx->pc) {
        case 0x120158u: goto label_120158;
        case 0x12016cu: goto label_12016c;
        default: break;
    }

    ctx->pc = 0x1200f0u;

    // 0x1200f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1200f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1200f4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1200f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1200f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1200f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1200fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1200fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x120100: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x120100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x120104: 0x24439a08  addiu       $v1, $v0, -0x65F8
    ctx->pc = 0x120104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x120108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12010c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x12010cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x120110: 0x8cb0020c  lw          $s0, 0x20C($a1)
    ctx->pc = 0x120110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x120114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x120114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120118: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x120118u;
    {
        const bool branch_taken_0x120118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120118u;
        // 0x12011c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120118) {
            ctx->pc = 0x120180u;
            goto label_120180;
        }
    }
    ctx->pc = 0x120120u;
    // 0x120120: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x120120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x120124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x120124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x120128: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x120128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12012c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x12012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x120130: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x120130u;
    {
        const bool branch_taken_0x120130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120130) {
            ctx->pc = 0x120134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120130u;
            // 0x120134: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120140u;
            goto label_120140;
        }
    }
    ctx->pc = 0x120138u;
    // 0x120138: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x120138u;
    {
        const bool branch_taken_0x120138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120138u;
        // 0x12013c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120138) {
            ctx->pc = 0x120148u;
            goto label_120148;
        }
    }
    ctx->pc = 0x120140u;
label_120140:
    // 0x120140: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120144: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x120144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_120148:
    // 0x120148: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x120148u;
    {
        const bool branch_taken_0x120148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120148u;
        // 0x12014c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120148) {
            ctx->pc = 0x120180u;
            goto label_120180;
        }
    }
    ctx->pc = 0x120150u;
    // 0x120150: 0xc0480b6  jal         func_1202D8
    ctx->pc = 0x120150u;
    SET_GPR_U32(ctx, 31, 0x120158u);
    ctx->pc = 0x120154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120150u;
    // 0x120154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202D8u, 0x120150u, 0x120158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120158u;
label_120158:
    // 0x120158: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x120158u;
    {
        const bool branch_taken_0x120158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120158u;
        // 0x12015c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120158) {
            ctx->pc = 0x12017Cu;
            goto label_12017c;
        }
    }
    ctx->pc = 0x120160u;
    // 0x120160: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x120160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120164: 0xc048254  jal         func_120950
    ctx->pc = 0x120164u;
    SET_GPR_U32(ctx, 31, 0x12016Cu);
    ctx->pc = 0x120168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120164u;
    // 0x120168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120950u, 0x120164u, 0x12016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12016Cu;
label_12016c:
    // 0x12016c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12016Cu;
    {
        const bool branch_taken_0x12016c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12016c) {
            ctx->pc = 0x120170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12016Cu;
            // 0x120170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120180u;
            goto label_120180;
        }
    }
    ctx->pc = 0x120174u;
    // 0x120174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x120174u;
    {
        const bool branch_taken_0x120174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120174u;
        // 0x120178: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120174) {
            ctx->pc = 0x120180u;
            goto label_120180;
        }
    }
    ctx->pc = 0x12017Cu;
label_12017c:
    // 0x12017c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12017cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120180:
    // 0x120180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x120180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x120184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x120188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x120188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12018c: 0x3e00008  jr          $ra
    ctx->pc = 0x12018Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12018Cu;
        // 0x120190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12018Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120194u;
    // 0x120194: 0x0  nop
    ctx->pc = 0x120194u;
    // NOP
    ctx->pc = 0x120198u;
}
