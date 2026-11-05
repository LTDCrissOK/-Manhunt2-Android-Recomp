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

// Function: sub_001500D8
// Address: 0x1500d8 - 0x1501c8
void sub_001500D8_0x1500d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001500D8_0x1500d8");
#endif

    switch (ctx->pc) {
        case 0x150104u: goto label_150104;
        case 0x150110u: goto label_150110;
        case 0x150128u: goto label_150128;
        case 0x150134u: goto label_150134;
        case 0x150158u: goto label_150158;
        case 0x150174u: goto label_150174;
        case 0x150188u: goto label_150188;
        case 0x1501acu: goto label_1501ac;
        default: break;
    }

    ctx->pc = 0x1500d8u;

    // 0x1500d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1500d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1500dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1500dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1500e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1500e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1500e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1500e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1500e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1500e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1500ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1500f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1500f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1500f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1500f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1500f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1500f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500fc: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1500FCu;
    SET_GPR_U32(ctx, 31, 0x150104u);
    ctx->pc = 0x150100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1500FCu;
    // 0x150100: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1500FCu, 0x150104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150104u;
label_150104:
    // 0x150104: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150104u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150108: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x150108u;
    SET_GPR_U32(ctx, 31, 0x150110u);
    ctx->pc = 0x15010Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150108u;
    // 0x15010c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x150108u, 0x150110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150110u;
label_150110:
    // 0x150110: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150110u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150114: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x150114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150118: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x150118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x15011c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150120: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x150120u;
    SET_GPR_U32(ctx, 31, 0x150128u);
    ctx->pc = 0x150124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150120u;
    // 0x150124: 0x53300a  movz        $a2, $v0, $s3 (Delay Slot)
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x150120u, 0x150128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150128u;
label_150128:
    // 0x150128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15012c: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x15012Cu;
    SET_GPR_U32(ctx, 31, 0x150134u);
    ctx->pc = 0x150130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15012Cu;
    // 0x150130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x15012Cu, 0x150134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150134u;
label_150134:
    // 0x150134: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x150134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150138: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x150138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15013c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15013cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150140: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x150140u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150148: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x150148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15014c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150150: 0xc04daca  jal         func_136B28
    ctx->pc = 0x150150u;
    SET_GPR_U32(ctx, 31, 0x150158u);
    ctx->pc = 0x150154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150150u;
    // 0x150154: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x150150u, 0x150158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150158u;
label_150158:
    // 0x150158: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150158u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x15015c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150160: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x150160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150164: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x150164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x150168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15016c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x15016Cu;
    SET_GPR_U32(ctx, 31, 0x150174u);
    ctx->pc = 0x150170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15016Cu;
    // 0x150170: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x15016Cu, 0x150174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150174u;
label_150174:
    // 0x150174: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15017c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15017cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150180: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x150180u;
    SET_GPR_U32(ctx, 31, 0x150188u);
    ctx->pc = 0x150184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150180u;
    // 0x150184: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x150180u, 0x150188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150188u;
label_150188:
    // 0x150188: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x150188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15018c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x15018cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x150190: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x150190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x150194: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x150194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x150198: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x150198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15019c: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x15019cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1501a0: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x1501a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1501a4: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1501A4u;
    SET_GPR_U32(ctx, 31, 0x1501ACu);
    ctx->pc = 0x1501A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1501A4u;
    // 0x1501a8: 0x73280a  movz        $a1, $v1, $s3 (Delay Slot)
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x1501A4u, 0x1501ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1501ACu;
label_1501ac:
    // 0x1501ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1501acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1501b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1501b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1501b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1501b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1501b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1501b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1501bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1501bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1501c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1501C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1501C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501C0u;
        // 0x1501c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1501C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1501C8u;
}
