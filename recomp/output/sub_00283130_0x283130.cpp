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

// Function: sub_00283130
// Address: 0x283130 - 0x2831d0
void sub_00283130_0x283130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283130_0x283130");
#endif

    switch (ctx->pc) {
        case 0x283160u: goto label_283160;
        case 0x283170u: goto label_283170;
        case 0x283190u: goto label_283190;
        default: break;
    }

    ctx->pc = 0x283130u;

    // 0x283130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x283134: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x283134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x283138: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x283138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28313c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28313cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283140: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x283140u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283144: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283148: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x283148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28314c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28314cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283150: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x283150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x283154: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x283154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x283158: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x283158u;
    SET_GPR_U32(ctx, 31, 0x283160u);
    ctx->pc = 0x28315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283158u;
    // 0x28315c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x283158u, 0x283160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283160u;
label_283160:
    // 0x283160: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x283160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283164: 0x1a40000e  blez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x283164u;
    {
        const bool branch_taken_0x283164 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x283168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283164u;
        // 0x283168: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283164) {
            ctx->pc = 0x2831A0u;
            goto label_2831a0;
        }
    }
    ctx->pc = 0x28316Cu;
    // 0x28316c: 0x0  nop
    ctx->pc = 0x28316cu;
    // NOP
label_283170:
    // 0x283170: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x283170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x283174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x283174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283178: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x283178u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28317c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28317cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x283180: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x283180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x283184: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x283184u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x283188: 0xc0a0c3a  jal         func_2830E8
    ctx->pc = 0x283188u;
    SET_GPR_U32(ctx, 31, 0x283190u);
    ctx->pc = 0x28318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283188u;
    // 0x28318c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830E8u, 0x283188u, 0x283190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283190u;
label_283190:
    // 0x283190: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x283190u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x283194: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x283194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x283198: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x283198u;
    {
        const bool branch_taken_0x283198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283198u;
        // 0x28319c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283198) {
            ctx->pc = 0x283170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283170;
        }
    }
    ctx->pc = 0x2831A0u;
label_2831a0:
    // 0x2831a0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x2831a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2831a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2831a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2831a8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2831a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2831ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2831acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2831b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2831b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2831b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2831b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2831b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2831b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2831bc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2831bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2831c0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2831c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2831c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2831C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2831C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2831C4u;
        // 0x2831c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2831C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2831CCu;
    // 0x2831cc: 0x0  nop
    ctx->pc = 0x2831ccu;
    // NOP
    ctx->pc = 0x2831d0u;
}
