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

// Function: sub_0018D6F0
// Address: 0x18d6f0 - 0x18d7d8
void sub_0018D6F0_0x18d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D6F0_0x18d6f0");
#endif

    switch (ctx->pc) {
        case 0x18d724u: goto label_18d724;
        case 0x18d73cu: goto label_18d73c;
        case 0x18d764u: goto label_18d764;
        case 0x18d784u: goto label_18d784;
        case 0x18d794u: goto label_18d794;
        default: break;
    }

    ctx->pc = 0x18d6f0u;

    // 0x18d6f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18d6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18d6f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18d6f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x18d6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x18d6fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18d6fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d700: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18d700u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18d704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18d708: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18d708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18d70c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18d70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18d710: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18d710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x18d714: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x18d714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x18d718: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18d718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d71c: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x18D71Cu;
    SET_GPR_U32(ctx, 31, 0x18D724u);
    ctx->pc = 0x18D720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D71Cu;
    // 0x18d720: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x18D71Cu, 0x18D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D724u;
label_18d724:
    // 0x18d724: 0x26720040  addiu       $s2, $s3, 0x40
    ctx->pc = 0x18d724u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x18d728: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x18d728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x18d72c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d730: 0x24421138  addiu       $v0, $v0, 0x1138
    ctx->pc = 0x18d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4408));
    // 0x18d734: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18D734u;
    SET_GPR_U32(ctx, 31, 0x18D73Cu);
    ctx->pc = 0x18D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D734u;
    // 0x18d738: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18D734u, 0x18D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D73Cu;
label_18d73c:
    // 0x18d73c: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x18d73cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x18d740: 0xae340010  sw          $s4, 0x10($s1)
    ctx->pc = 0x18d740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 20));
    // 0x18d744: 0x26100f90  addiu       $s0, $s0, 0xF90
    ctx->pc = 0x18d744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3984));
    // 0x18d748: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x18d748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x18d74c: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x18d74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x18d750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18d750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d754: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x18d754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x18d758: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x18d758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x18d75c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18D75Cu;
    SET_GPR_U32(ctx, 31, 0x18D764u);
    ctx->pc = 0x18D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D75Cu;
    // 0x18d760: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18D75Cu, 0x18D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D764u;
label_18d764:
    // 0x18d764: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x18d764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    // 0x18d768: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x18d768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x18d76c: 0xae540010  sw          $s4, 0x10($s2)
    ctx->pc = 0x18d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
    // 0x18d770: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x18d770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x18d774: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x18d774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
    // 0x18d778: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x18d778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x18d77c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x18D77Cu;
    SET_GPR_U32(ctx, 31, 0x18D784u);
    ctx->pc = 0x18D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D77Cu;
    // 0x18d780: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x18D77Cu, 0x18D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D784u;
label_18d784:
    // 0x18d784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18d784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d788: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18d788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d78c: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x18D78Cu;
    SET_GPR_U32(ctx, 31, 0x18D794u);
    ctx->pc = 0x18D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D78Cu;
    // 0x18d790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x18D78Cu, 0x18D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D794u;
label_18d794:
    // 0x18d794: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x18d794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x18d798: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x18d798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x18d79c: 0x24631178  addiu       $v1, $v1, 0x1178
    ctx->pc = 0x18d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4472));
    // 0x18d7a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d7a4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x18d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x18d7a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x18d7a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d7ac: 0xae70006c  sw          $s0, 0x6C($s3)
    ctx->pc = 0x18d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 16));
    // 0x18d7b0: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x18d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x18d7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18d7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d7b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18d7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18d7bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18d7bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d7c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18d7c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18d7c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18d7c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d7c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x18d7c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18d7cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18d7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x18D7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D7D0u;
        // 0x18d7d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D7D8u;
}
