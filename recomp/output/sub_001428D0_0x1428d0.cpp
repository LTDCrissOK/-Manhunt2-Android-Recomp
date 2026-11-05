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

// Function: sub_001428D0
// Address: 0x1428d0 - 0x1429a0
void sub_001428D0_0x1428d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001428D0_0x1428d0");
#endif

    switch (ctx->pc) {
        case 0x1428ecu: goto label_1428ec;
        case 0x1428fcu: goto label_1428fc;
        case 0x142920u: goto label_142920;
        case 0x14292cu: goto label_14292c;
        case 0x142948u: goto label_142948;
        case 0x14295cu: goto label_14295c;
        case 0x142978u: goto label_142978;
        case 0x142984u: goto label_142984;
        default: break;
    }

    ctx->pc = 0x1428d0u;

    // 0x1428d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1428d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1428d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1428d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1428d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1428d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1428dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1428dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1428e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1428e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1428e4: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x1428E4u;
    SET_GPR_U32(ctx, 31, 0x1428ECu);
    ctx->pc = 0x1428E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1428E4u;
    // 0x1428e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x1428E4u, 0x1428ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428ECu;
label_1428ec:
    // 0x1428ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1428ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1428f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1428f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1428f4: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1428F4u;
    SET_GPR_U32(ctx, 31, 0x1428FCu);
    ctx->pc = 0x1428F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1428F4u;
    // 0x1428f8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1428F4u, 0x1428FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428FCu;
label_1428fc:
    // 0x1428fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1428fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142900: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x142900u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142904: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x142904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142908: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x142908u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14290c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x14290cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x142910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x142910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142918: 0xc04daca  jal         func_136B28
    ctx->pc = 0x142918u;
    SET_GPR_U32(ctx, 31, 0x142920u);
    ctx->pc = 0x14291Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142918u;
    // 0x14291c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x142918u, 0x142920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142920u;
label_142920:
    // 0x142920: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142924: 0xc046030  jal         func_1180C0
    ctx->pc = 0x142924u;
    SET_GPR_U32(ctx, 31, 0x14292Cu);
    ctx->pc = 0x142928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142924u;
    // 0x142928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x142924u, 0x14292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14292Cu;
label_14292c:
    // 0x14292c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14292cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x142930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142934: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x142934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x142938: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x142938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14293c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142940: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x142940u;
    SET_GPR_U32(ctx, 31, 0x142948u);
    ctx->pc = 0x142944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142940u;
    // 0x142944: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x142940u, 0x142948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142948u;
label_142948:
    // 0x142948: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x142948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14294c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14294cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142950: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142954: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x142954u;
    SET_GPR_U32(ctx, 31, 0x14295Cu);
    ctx->pc = 0x142958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142954u;
    // 0x142958: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x142954u, 0x14295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14295Cu;
label_14295c:
    // 0x14295c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x142960: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x142960u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x142964: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x142964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x142968: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x142968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x14296c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14296cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x142970: 0xc043c56  jal         func_10F158
    ctx->pc = 0x142970u;
    SET_GPR_U32(ctx, 31, 0x142978u);
    ctx->pc = 0x142974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142970u;
    // 0x142974: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x142970u, 0x142978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142978u;
label_142978:
    // 0x142978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14297c: 0xc050874  jal         func_1421D0
    ctx->pc = 0x14297Cu;
    SET_GPR_U32(ctx, 31, 0x142984u);
    ctx->pc = 0x142980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14297Cu;
    // 0x142980: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421D0u, 0x14297Cu, 0x142984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142984u;
label_142984:
    // 0x142984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142988: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14298c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14298cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142990: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x142990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x142994: 0x3e00008  jr          $ra
    ctx->pc = 0x142994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142994u;
        // 0x142998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14299Cu;
    // 0x14299c: 0x0  nop
    ctx->pc = 0x14299cu;
    // NOP
    ctx->pc = 0x1429a0u;
}
