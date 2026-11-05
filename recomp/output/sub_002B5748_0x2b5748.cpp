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

// Function: sub_002B5748
// Address: 0x2b5748 - 0x2b5800
void sub_002B5748_0x2b5748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5748_0x2b5748");
#endif

    switch (ctx->pc) {
        case 0x2b5780u: goto label_2b5780;
        case 0x2b578cu: goto label_2b578c;
        case 0x2b57a8u: goto label_2b57a8;
        default: break;
    }

    ctx->pc = 0x2b5748u;

    // 0x2b5748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b574c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2b574cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2b5750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5754: 0x244238f0  addiu       $v0, $v0, 0x38F0
    ctx->pc = 0x2b5754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14576));
    // 0x2b5758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b5758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b575c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b575cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5760: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b5760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b5764: 0x26115940  addiu       $s1, $s0, 0x5940
    ctx->pc = 0x2b5764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 22848));
    // 0x2b5768: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b5768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b576c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2b576cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5770: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5774: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2b5774u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b5778: 0xae0271c8  sw          $v0, 0x71C8($s0)
    ctx->pc = 0x2b5778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29128), GPR_U32(ctx, 2));
    // 0x2b577c: 0x0  nop
    ctx->pc = 0x2b577cu;
    // NOP
label_2b5780:
    // 0x2b5780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b5780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5784: 0xc0acdee  jal         func_2B37B8
    ctx->pc = 0x2B5784u;
    SET_GPR_U32(ctx, 31, 0x2B578Cu);
    ctx->pc = 0x2B5788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5784u;
    // 0x2b5788: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B37B8u, 0x2B5784u, 0x2B578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B578Cu;
label_2b578c:
    // 0x2b578c: 0x0  nop
    ctx->pc = 0x2b578cu;
    // NOP
    // 0x2b5790: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B5790u;
    {
        const bool branch_taken_0x2b5790 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2B5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5790u;
        // 0x2b5794: 0x26310c40  addiu       $s1, $s1, 0xC40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5790) {
            ctx->pc = 0x2B5780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5780;
        }
    }
    ctx->pc = 0x2B5798u;
    // 0x2b5798: 0xae005920  sw          $zero, 0x5920($s0)
    ctx->pc = 0x2b5798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22816), GPR_U32(ctx, 0));
    // 0x2b579c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b579cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b57a0: 0xc0ad656  jal         func_2B5958
    ctx->pc = 0x2B57A0u;
    SET_GPR_U32(ctx, 31, 0x2B57A8u);
    ctx->pc = 0x2B57A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B57A0u;
    // 0x2b57a4: 0xae005914  sw          $zero, 0x5914($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22804), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5958u, 0x2B57A0u, 0x2B57A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B57A8u;
label_2b57a8:
    // 0x2b57a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b57a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b57ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b57acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b57b0: 0xae0371c0  sw          $v1, 0x71C0($s0)
    ctx->pc = 0x2b57b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29120), GPR_U32(ctx, 3));
    // 0x2b57b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b57b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b57b8: 0xae04590c  sw          $a0, 0x590C($s0)
    ctx->pc = 0x2b57b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 4));
    // 0x2b57bc: 0xae0058fc  sw          $zero, 0x58FC($s0)
    ctx->pc = 0x2b57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22780), GPR_U32(ctx, 0));
    // 0x2b57c0: 0xae0058f8  sw          $zero, 0x58F8($s0)
    ctx->pc = 0x2b57c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22776), GPR_U32(ctx, 0));
    // 0x2b57c4: 0xae035900  sw          $v1, 0x5900($s0)
    ctx->pc = 0x2b57c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22784), GPR_U32(ctx, 3));
    // 0x2b57c8: 0xae005908  sw          $zero, 0x5908($s0)
    ctx->pc = 0x2b57c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22792), GPR_U32(ctx, 0));
    // 0x2b57cc: 0xae0071c4  sw          $zero, 0x71C4($s0)
    ctx->pc = 0x2b57ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29124), GPR_U32(ctx, 0));
    // 0x2b57d0: 0xae005940  sw          $zero, 0x5940($s0)
    ctx->pc = 0x2b57d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22848), GPR_U32(ctx, 0));
    // 0x2b57d4: 0xae046580  sw          $a0, 0x6580($s0)
    ctx->pc = 0x2b57d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25984), GPR_U32(ctx, 4));
    // 0x2b57d8: 0xae0058f4  sw          $zero, 0x58F4($s0)
    ctx->pc = 0x2b57d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22772), GPR_U32(ctx, 0));
    // 0x2b57dc: 0xae005910  sw          $zero, 0x5910($s0)
    ctx->pc = 0x2b57dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 0));
    // 0x2b57e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b57e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b57e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b57e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b57e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b57e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b57ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b57ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b57f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b57f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b57f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B57F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B57F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B57F4u;
        // 0x2b57f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B57F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B57FCu;
    // 0x2b57fc: 0x0  nop
    ctx->pc = 0x2b57fcu;
    // NOP
    ctx->pc = 0x2b5800u;
}
