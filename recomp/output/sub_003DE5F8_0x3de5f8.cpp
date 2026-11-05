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

// Function: sub_003DE5F8
// Address: 0x3de5f8 - 0x3de708
void sub_003DE5F8_0x3de5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE5F8_0x3de5f8");
#endif

    switch (ctx->pc) {
        case 0x3de640u: goto label_3de640;
        case 0x3de64cu: goto label_3de64c;
        case 0x3de66cu: goto label_3de66c;
        case 0x3de678u: goto label_3de678;
        case 0x3de684u: goto label_3de684;
        case 0x3de690u: goto label_3de690;
        case 0x3de6a4u: goto label_3de6a4;
        default: break;
    }

    ctx->pc = 0x3de5f8u;

    // 0x3de5f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3de5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3de5fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3de5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3de600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3de600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de604: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3de604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3de608: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3de608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3de60c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x3de60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x3de610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3de610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3de614: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3de614u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de618: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3de618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3de61c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x3de61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3de620: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3de620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3de624: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3DE624u;
    {
        const bool branch_taken_0x3de624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE624u;
        // 0x3de628: 0x3c130043  lui         $s3, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de624) {
            ctx->pc = 0x3DE658u;
            goto label_3de658;
        }
    }
    ctx->pc = 0x3DE62Cu;
    // 0x3de62c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3de62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de630: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DE630u;
    {
        const bool branch_taken_0x3de630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3DE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE630u;
        // 0x3de634: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de630) {
            ctx->pc = 0x3DE658u;
            goto label_3de658;
        }
    }
    ctx->pc = 0x3DE638u;
    // 0x3de638: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x3de638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3de63c: 0x0  nop
    ctx->pc = 0x3de63cu;
    // NOP
label_3de640:
    // 0x3de640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3de640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de644: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE644u;
    SET_GPR_U32(ctx, 31, 0x3DE64Cu);
    ctx->pc = 0x3DE648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE644u;
    // 0x3de648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE644u, 0x3DE64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE64Cu;
label_3de64c:
    // 0x3de64c: 0x0  nop
    ctx->pc = 0x3de64cu;
    // NOP
    // 0x3de650: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DE650u;
    {
        const bool branch_taken_0x3de650 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x3DE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE650u;
        // 0x3de654: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de650) {
            ctx->pc = 0x3DE640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de640;
        }
    }
    ctx->pc = 0x3DE658u;
label_3de658:
    // 0x3de658: 0x26621830  addiu       $v0, $s3, 0x1830
    ctx->pc = 0x3de658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 6192));
    // 0x3de65c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x3de65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x3de660: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x3de660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x3de664: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE664u;
    SET_GPR_U32(ctx, 31, 0x3DE66Cu);
    ctx->pc = 0x3DE668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE664u;
    // 0x3de668: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE664u, 0x3DE66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE66Cu;
label_3de66c:
    // 0x3de66c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x3de66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3de670: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE670u;
    SET_GPR_U32(ctx, 31, 0x3DE678u);
    ctx->pc = 0x3DE674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE670u;
    // 0x3de674: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE670u, 0x3DE678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE678u;
label_3de678:
    // 0x3de678: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x3de678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3de67c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE67Cu;
    SET_GPR_U32(ctx, 31, 0x3DE684u);
    ctx->pc = 0x3DE680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE67Cu;
    // 0x3de680: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE67Cu, 0x3DE684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE684u;
label_3de684:
    // 0x3de684: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3de684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3de688: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DE688u;
    SET_GPR_U32(ctx, 31, 0x3DE690u);
    ctx->pc = 0x3DE68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE688u;
    // 0x3de68c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DE688u, 0x3DE690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE690u;
label_3de690:
    // 0x3de690: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x3de690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x3de694: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE694u;
    {
        const bool branch_taken_0x3de694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE694u;
        // 0x3de698: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de694) {
            ctx->pc = 0x3DE6A8u;
            goto label_3de6a8;
        }
    }
    ctx->pc = 0x3DE69Cu;
    // 0x3de69c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DE69Cu;
    SET_GPR_U32(ctx, 31, 0x3DE6A4u);
    ctx->pc = 0x3DE6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE69Cu;
    // 0x3de6a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DE69Cu, 0x3DE6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE6A4u;
label_3de6a4:
    // 0x3de6a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3de6a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3de6a8:
    // 0x3de6a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3de6a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3de6ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3de6acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3de6b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3de6b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3de6b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3de6b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3de6b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3de6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3de6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE6BCu;
        // 0x3de6c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE6C4u;
    // 0x3de6c4: 0x0  nop
    ctx->pc = 0x3de6c4u;
    // NOP
    // 0x3de6c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de6cc: 0x0  nop
    ctx->pc = 0x3de6ccu;
    // NOP
    // 0x3de6d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de6d4: 0x0  nop
    ctx->pc = 0x3de6d4u;
    // NOP
    // 0x3de6d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de6dc: 0x0  nop
    ctx->pc = 0x3de6dcu;
    // NOP
    // 0x3de6e0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3de6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3de6e4: 0x0  nop
    ctx->pc = 0x3de6e4u;
    // NOP
    // 0x3de6e8: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x3de6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x3de6ec: 0x0  nop
    ctx->pc = 0x3de6ecu;
    // NOP
    // 0x3de6f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3de6f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3de6f4: 0x0  nop
    ctx->pc = 0x3de6f4u;
    // NOP
    // 0x3de6f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de6fc: 0x0  nop
    ctx->pc = 0x3de6fcu;
    // NOP
    // 0x3de700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3de704: 0x0  nop
    ctx->pc = 0x3de704u;
    // NOP
    ctx->pc = 0x3de708u;
}
