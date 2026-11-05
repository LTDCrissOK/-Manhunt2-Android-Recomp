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

// Function: sub_001785E8
// Address: 0x1785e8 - 0x178690
void sub_001785E8_0x1785e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001785E8_0x1785e8");
#endif

    switch (ctx->pc) {
        case 0x178628u: goto label_178628;
        case 0x178654u: goto label_178654;
        default: break;
    }

    ctx->pc = 0x1785e8u;

    // 0x1785e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1785e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1785ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1785ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1785f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1785f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1785f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1785f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1785f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1785fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1785fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178600: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178604: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x178604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178608: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x178608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17860c: 0x26330160  addiu       $s3, $s1, 0x160
    ctx->pc = 0x17860cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x178610: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x178610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x178614: 0x2634015c  addiu       $s4, $s1, 0x15C
    ctx->pc = 0x178614u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
    // 0x178618: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x178618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17861c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x17861cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178620: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x178620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x178624: 0x0  nop
    ctx->pc = 0x178624u;
    // NOP
label_178628:
    // 0x178628: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x178628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17862c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x17862cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x178630: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178634: 0x14750008  bne         $v1, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x178634u;
    {
        const bool branch_taken_0x178634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x178638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178634u;
        // 0x178638: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178634) {
            ctx->pc = 0x178658u;
            goto label_178658;
        }
    }
    ctx->pc = 0x17863Cu;
    // 0x17863c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178640: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178644: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x178644u;
    {
        const bool branch_taken_0x178644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x178648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178644u;
        // 0x178648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178644) {
            ctx->pc = 0x178654u;
            goto label_178654;
        }
    }
    ctx->pc = 0x17864Cu;
    // 0x17864c: 0xc05e16c  jal         func_1785B0
    ctx->pc = 0x17864Cu;
    SET_GPR_U32(ctx, 31, 0x178654u);
    ctx->pc = 0x1785B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1785B0u, 0x17864Cu, 0x178654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178654u;
label_178654:
    // 0x178654: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x178654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_178658:
    // 0x178658: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x178658u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17865c: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x17865cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x178660: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x178660u;
    {
        const bool branch_taken_0x178660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178660) {
            ctx->pc = 0x178664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178660u;
            // 0x178664: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178628;
        }
    }
    ctx->pc = 0x178668u;
    // 0x178668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17866c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17866cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178670: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178670u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178674: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178678: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17867c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17867cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178680: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x178680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178684: 0x3e00008  jr          $ra
    ctx->pc = 0x178684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178684u;
        // 0x178688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17868Cu;
    // 0x17868c: 0x0  nop
    ctx->pc = 0x17868cu;
    // NOP
    ctx->pc = 0x178690u;
}
