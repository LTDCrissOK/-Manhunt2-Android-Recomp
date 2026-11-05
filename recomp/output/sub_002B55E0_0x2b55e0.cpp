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

// Function: sub_002B55E0
// Address: 0x2b55e0 - 0x2b5680
void sub_002B55E0_0x2b55e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B55E0_0x2b55e0");
#endif

    switch (ctx->pc) {
        case 0x2b560cu: goto label_2b560c;
        case 0x2b5618u: goto label_2b5618;
        case 0x2b5628u: goto label_2b5628;
        default: break;
    }

    ctx->pc = 0x2b55e0u;

    // 0x2b55e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b55e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b55e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b55e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b55e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b55e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b55ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b55ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b55f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b55f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b55f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2b55f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b55f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b55f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b55fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b55fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b5600: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b5600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b5604: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2B5604u;
    SET_GPR_U32(ctx, 31, 0x2B560Cu);
    ctx->pc = 0x2B5608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5604u;
    // 0x2b5608: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2B5604u, 0x2B560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B560Cu;
label_2b560c:
    // 0x2b560c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b560cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5610: 0x1a40000e  blez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2B5610u;
    {
        const bool branch_taken_0x2b5610 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2B5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5610u;
        // 0x2b5614: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5610) {
            ctx->pc = 0x2B564Cu;
            goto label_2b564c;
        }
    }
    ctx->pc = 0x2B5618u;
label_2b5618:
    // 0x2b5618: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x2b5618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2b561c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2b561cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5620: 0xc0ad53e  jal         func_2B54F8
    ctx->pc = 0x2B5620u;
    SET_GPR_U32(ctx, 31, 0x2B5628u);
    ctx->pc = 0x2B5624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5620u;
    // 0x2b5624: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B54F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B54F8u, 0x2B5620u, 0x2B5628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5628u;
label_2b5628:
    // 0x2b5628: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2b5628u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b562c: 0x212202a  slt         $a0, $s0, $s2
    ctx->pc = 0x2b562cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b5630: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b5630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b5634: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b5634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5638: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2b5638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b563c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b563cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b5640: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x2b5640u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b5644: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B5644u;
    {
        const bool branch_taken_0x2b5644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5644u;
        // 0x2b5648: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5644) {
            ctx->pc = 0x2B5618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5618;
        }
    }
    ctx->pc = 0x2B564Cu;
label_2b564c:
    // 0x2b564c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2b564cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2b5650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5654: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b5654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b5658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b565c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b565cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5660: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b5660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b5664: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b5664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5668: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b5668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b566c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2b566cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b5670: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5670u;
        // 0x2b5674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5678u;
    // 0x2b5678: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2b5678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2b567c: 0x0  nop
    ctx->pc = 0x2b567cu;
    // NOP
    ctx->pc = 0x2b5680u;
}
